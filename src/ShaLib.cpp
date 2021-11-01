/*
  * ShaLib.h - Library for generatiing SHA256 digest.
  * Created by Suresh Kumar, March 30, 2021.
*/

#include "Arduino.h"
#include "mbedtls/md.h"

#include "ShaLib.h"

ShaLib::ShaLib() {

}

String ShaLib::getDigest(String serNum, String actCode, String awsMobMac, String randNum, String splRcCode) {
    String specialStr = "ksauvrae";
    // Serial.println("SPL : " + specialStr);
    // Serial.println("SER : " + serNum);
    // Serial.println("ACT : " + actCode);
    // Serial.println("MOB : " + awsMobMac);
    // Serial.println("RAN : " + randNum);
    // Serial.println("RC  : " + splRcCode);
    String shaFinalStr = "";
    
    byte shaRaw[32];
    //Create PayLoad(pwd)
    String pwd = "";
    for (int x = 0; x<8 ; x++) {
        pwd = pwd + specialStr.substring(x, x+1) + actCode.substring(x, x+1) + randNum.substring(x, x+1) + serNum.substring(x, x+1) + awsMobMac.substring(x, x+1);
    }
    pwd = pwd + awsMobMac + splRcCode;
    // Serial.println("PWD" + pwd);

    char pwdChar[100];
    pwd.toCharArray(pwdChar, pwd.length()+1);
    //create SHA256 bytes
    mbedtls_md_context_t ctx;
    mbedtls_md_type_t md_type = MBEDTLS_MD_SHA256; 
    const size_t payloadLength = strlen(pwdChar); 
    mbedtls_md_init(&ctx);
    mbedtls_md_setup(&ctx, mbedtls_md_info_from_type(md_type), 0);
    mbedtls_md_starts(&ctx);
    mbedtls_md_update(&ctx, (const unsigned char *) pwdChar, payloadLength);
    mbedtls_md_finish(&ctx, shaRaw);
    mbedtls_md_free(&ctx);
    //convert Byte  
    for(int i= 0; i< sizeof(shaRaw); i++)
    {
        char str[3];
        sprintf(str, "%02x", (int)shaRaw[i]);
        shaFinalStr = shaFinalStr + str;
    }
    // Serial.println("FinalShaStr = " + shaFinalStr);
    return shaFinalStr;
}

boolean ShaLib::getRanAwsMod(String digest, int &stp, String &ran, int &mobAwsStep, String &aws, String &mob)
{
    boolean returnValue = true;
    ran = "";
    aws = "";
    mob = "";
    stp = 0;
    //Get Step
    char devStepChar = digest[3];
    int devStep = devStepChar - 48;
    stp = devStep;
    //Get random string    
    int devPos = 3;
    for(int x =0; x < 8; x++) {
        devPos = devPos + devStep;
        ran = ran + digest[devPos];
    }
    //Get MobAwsStep
    char devMobAwsStepChar = digest[2];
    int devMobAwsStep = devMobAwsStepChar - 48;
    mobAwsStep = devMobAwsStep;
    //Get AWS and Mobile Codes
    for (int x = 0; x < 32; x++)
    {
        devPos = devPos + devStep;
        aws = aws + digest[devPos];
        //devPos = devPos + devStep;
        mob = mob + digest[devPos + devMobAwsStep];
    }
    return returnValue;
}