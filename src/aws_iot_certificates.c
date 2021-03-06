/*
 * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * Additions Copyright 2016 Espressif Systems (Shanghai) PTE LTD
 *
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 *
 *  http://aws.amazon.com/apache2.0
 *
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */

/**
 * @file aws_iot_certifcates.c
 * @brief File to store the AWS certificates in the form of arrays
 */

#ifdef __cplusplus
extern "C" {
#endif

const char rootCA[] = {"-----BEGIN CERTIFICATE-----\n\
MIIDQTCCAimgAwIBAgITBmyfz5m/jAo54vB4ikPmljZbyjANBgkqhkiG9w0BAQsF\n\
ADA5MQswCQYDVQQGEwJVUzEPMA0GA1UEChMGQW1hem9uMRkwFwYDVQQDExBBbWF6\n\
b24gUm9vdCBDQSAxMB4XDTE1MDUyNjAwMDAwMFoXDTM4MDExNzAwMDAwMFowOTEL\n\
MAkGA1UEBhMCVVMxDzANBgNVBAoTBkFtYXpvbjEZMBcGA1UEAxMQQW1hem9uIFJv\n\
b3QgQ0EgMTCCASIwDQYJKoZIhvcNAQEBBQADggEPADCCAQoCggEBALJ4gHHKeNXj\n\
ca9HgFB0fW7Y14h29Jlo91ghYPl0hAEvrAIthtOgQ3pOsqTQNroBvo3bSMgHFzZM\n\
9O6II8c+6zf1tRn4SWiw3te5djgdYZ6k/oI2peVKVuRF4fn9tBb6dNqcmzU5L/qw\n\
IFAGbHrQgLKm+a/sRxmPUDgH3KKHOVj4utWp+UhnMJbulHheb4mjUcAwhmahRWa6\n\
VOujw5H5SNz/0egwLX0tdHA114gk957EWW67c4cX8jJGKLhD+rcdqsq08p8kDi1L\n\
93FcXmn/6pUCyziKrlA4b9v7LWIbxcceVOF34GfID5yHI9Y/QCB/IIDEgEw+OyQm\n\
jgSubJrIqg0CAwEAAaNCMEAwDwYDVR0TAQH/BAUwAwEB/zAOBgNVHQ8BAf8EBAMC\n\
AYYwHQYDVR0OBBYEFIQYzIU07LwMlJQuCFmcx7IQTgoIMA0GCSqGSIb3DQEBCwUA\n\
A4IBAQCY8jdaQZChGsV2USggNiMOruYou6r4lK5IpDB/G/wkjUu0yKGX9rbxenDI\n\
U5PMCCjjmCXPI6T53iHTfIUJrU6adTrCC2qJeHZERxhlbI1Bjjt/msv0tadQ1wUs\n\
N+gDS63pYaACbvXy8MWy7Vu33PqUXHeeE6V/Uq2V8viTO96LXFvKWlJbYK8U90vv\n\
o/ufQJVtMVT8QtPHRh8jrdkPSHCa2XV4cdFyQzR1bldZwgJcJmApzyMZFo6IQ6XU\n\
5MsI+yMRQ+hDKXJioaldXgjUkK642M4UwtBV8ob2xJNDd2ZhwLnoQdeXeGADbkpy\n\
rqXRfboQnoZsG4q5WTP468SQvvG5\n\
-----END CERTIFICATE-----\n"};

const char certificate[] = {"-----BEGIN CERTIFICATE-----\n\
MIIDWjCCAkKgAwIBAgIVAOBaUG013l7/tEIPWIMmy6EYildIMA0GCSqGSIb3DQEB\n\
CwUAME0xSzBJBgNVBAsMQkFtYXpvbiBXZWIgU2VydmljZXMgTz1BbWF6b24uY29t\n\
IEluYy4gTD1TZWF0dGxlIFNUPVdhc2hpbmd0b24gQz1VUzAeFw0xOTAyMDIwMzQ3\n\
MzhaFw00OTEyMzEyMzU5NTlaMB4xHDAaBgNVBAMME0FXUyBJb1QgQ2VydGlmaWNh\n\
dGUwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQDDZKBAgFbTW3U2mJU7\n\
EOciiQl2VzLyZ6NRmXaZ/+bohudXjCcPh+wAxdtK5HuCaawKwoQ1mR37nhw/I1wY\n\
x9CFY6yVAtAIs24nywJ+gz8qv+CD+hr9TiHc7kOkUIYka8rlDeqUEu9hdZjFbm66\n\
2S4blmn6luC9G2oc8b0BG3iO2yropeZu8Bn2CIddStER90DqSMMRlObJNsojr88Q\n\
Bb1BQSfzyO/09C9Jyr7d4HK9tgvUNI6uGWrnFmzmTH/WwA8gCeTTeeS7g1bVCSGt\n\
OnRhc3LySdMeYuQeLmxK0nchsyItLN/v1owgAs9yCmUS1+tZbKy6ucXlN2CZz+hp\n\
Cn7VAgMBAAGjYDBeMB8GA1UdIwQYMBaAFE2DSrAQXe2o5fuieo13AiYpabKKMB0G\n\
A1UdDgQWBBTaoYNIJIQdpw1lsA+zosoe5jvPKzAMBgNVHRMBAf8EAjAAMA4GA1Ud\n\
DwEB/wQEAwIHgDANBgkqhkiG9w0BAQsFAAOCAQEASDWri5O6DwKA/RsOXCgjX/FG\n\
4c5rceGQ0ug6fq/wO8qPtIiez/4dV+DY+sX48nI9UlvnuO6btH9XrEJmhsAwBKrp\n\
S0ZQKKse69NqVKvFJGeH6iBRDKoGGl8xcMfn4vCoJVAkW+w56mMKrx2B2hDmbqDN\n\
JkE53IKZaLNMw8Homq/Hs6qt+DjQfI3i2jjEPvLpHwhYnYzYSSG1PyuT5JWYx3H6\n\
4h+aQDbC3+qh94Vx7le5H0iamXkcafAdP5TWbZlU+AQDG3n6SCQ5v0NxmoMVlzy4\n\
N7Zh/Y3e2UV3hFd2fGKC45Cv5CGymNbOUiYhXYNdCK6M1lkkqV26UEZMdO8JPw==\n\
-----END CERTIFICATE-----\n"};

const char privateKey[] = {"-----BEGIN RSA PRIVATE KEY-----\n\
MIIEpQIBAAKCAQEAw2SgQIBW01t1NpiVOxDnIokJdlcy8mejUZl2mf/m6IbnV4wn\n\
D4fsAMXbSuR7gmmsCsKENZkd+54cPyNcGMfQhWOslQLQCLNuJ8sCfoM/Kr/gg/oa\n\
/U4h3O5DpFCGJGvK5Q3qlBLvYXWYxW5uutkuG5Zp+pbgvRtqHPG9ARt4jtsq6KXm\n\
bvAZ9giHXUrREfdA6kjDEZTmyTbKI6/PEAW9QUEn88jv9PQvScq+3eByvbYL1DSO\n\
rhlq5xZs5kx/1sAPIAnk03nku4NW1QkhrTp0YXNy8knTHmLkHi5sStJ3IbMiLSzf\n\
79aMIALPcgplEtfrWWysurnF5Tdgmc/oaQp+1QIDAQABAoIBAQCMdR55n4hKwTj+\n\
OSs1XY45ljb2GfLmrDeL5fyK8ZkE2E0e8wH1OSke2RwttxdOBTaGOZQej2YtRVha\n\
zslaivDLon4iU/ZF+u4ZruapGSHkUjBLzxNtuafAEIsRaE01i0M76wgQz5fDAG0E\n\
p8DzkkGB1VtzptgBON7L1b6fOCcu0P0vq8blfrgOjwoG+1X+WAqeoJfX3W5VNBMQ\n\
qvNi/QARe3j+3zft/7Mi4h8lb0jJuQKgHKr72xNnysC2Pea0ai9I2MVD34nAVEsZ\n\
I8jNKroqGG/T+3dkeQZgH/ndjZiGnNxEhZVpAwCDTdPFZYvzTp2PO6l35MCreCuT\n\
1klnDA21AoGBAPSJfxZvOD+uxCxWlS4XK8hkAcNycgYdbsWW6D8HByIw4NthKk16\n\
0+vx8xeYu+5naE9gDXWvp3ZGGH+2HmuqB2LRf94wZd0hhCc0SKsA+emspvPV+g2f\n\
kEzbjQq8Z/5X9dE0pM/X5l5r2SuTLuUMMsM/d2LkPnfImMs9ETveAbJ/AoGBAMyN\n\
Y7ahsjm5gqiJS/1LSFwr/Z2VtPEZk/g+TU8LjUZA2CMswjZE5ZYVRllHVevjDNYX\n\
LmZ+8Sh4P0GnaLCgw7dvdpwW7oE0KfRc1rBYCfdzsOtlhZ7AYZpg6XqnKOOFY42Y\n\
edZLZUyxKqwTGnYw9jzaxUwUO25d3bcRtpZBrbyrAoGAJC6oCEjCmOGiEzFod15k\n\
Uw1BGYs4heEa/895Y8IFczCqRKuW18oBy1qMboRh4j+Yto3uz+gCrkRm4Zav35xT\n\
5XI8KkMc/2AzLp3U1sCZOdMbDN8vVY6ziju+HcWM2ZxoOeFBNaOraXMpugHYIXnx\n\
lOQyJQbCm3Sp7wCFKUeLFr8CgYEAoyZi0dhGfyQnwqU/ptfU7y9nKbmuiF8OVoHa\n\
x6E/HTm7KtMYVJC/TeXKJotvTKXcJyZ2K+o0D0NZsNQF/Fs9v6F3ySfBM+yXSgCC\n\
fES8LlJoWlivKt/m+WsyzlFlm5NYxCdJhlK8iV8F2hmikYKb5A3aL8QzYuQbY1kN\n\
eOsJ1+ECgYEA8bypAUwBrYd5uLDHa4mDW6Xu32XSrT0c5j6SDCUn+YRvHSC6M9XH\n\
GYDYWViZvjnu6VsqZ7exUoxGGKWvB3yYy+1ZClzuchBKijGHARlD9ds4AQyv29iL\n\
S+pQgImkQHrrIeE/0Vgn3Dp26Oc1jx6alzSbdciercFTxwrGpTMvdaQ=\n\
-----END RSA PRIVATE KEY-----\n"};


#ifdef __cplusplus
}
#endif