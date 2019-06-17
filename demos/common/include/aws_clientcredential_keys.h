/*
 * Amazon FreeRTOS V1.4.1
 * Copyright (C) 2017 Amazon.com, Inc. or its affiliates.  All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * http://aws.amazon.com/freertos
 * http://www.FreeRTOS.org
 */

#ifndef AWS_CLIENT_CREDENTIAL_KEYS_H
#define AWS_CLIENT_CREDENTIAL_KEYS_H

#include <stdint.h>

/*
 * PEM-encoded client certificate
 *
 * Must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----\n"\
 * "...base64 data...\n"\
 * "-----END CERTIFICATE-----\n"
 */
#define keyCLIENT_CERTIFICATE_PEM \
"-----BEGIN CERTIFICATE-----\n"\
"MIIDWjCCAkKgAwIBAgIVAMQET3NBPDZrhPcRzBPmOD8TY5nyMA0GCSqGSIb3DQEB\n"\
"CwUAME0xSzBJBgNVBAsMQkFtYXpvbiBXZWIgU2VydmljZXMgTz1BbWF6b24uY29t\n"\
"IEluYy4gTD1TZWF0dGxlIFNUPVdhc2hpbmd0b24gQz1VUzAeFw0xOTA2MTEwNDIw\n"\
"MjJaFw00OTEyMzEyMzU5NTlaMB4xHDAaBgNVBAMME0FXUyBJb1QgQ2VydGlmaWNh\n"\
"dGUwggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIBAQDCoH5/49iSGWV4yjcy\n"\
"0yIMn6C2eMXFaInIZoRifhilogCqYp6Kwrnj7OxRQ6kxfAUZOm5H0Z9EVtbt5MxA\n"\
"+HcF79WnkaRYrpJGfPOUAoxQvNOZ4bj2qZygK8L0Qv1nZ5uTeZogXlkH2ntXWJec\n"\
"MSdhiCao1+RccWY1PMs8YlsPN4pH3fOfDXNuvHxL1o92fmRcTpt64h/Y10+NlQTb\n"\
"nXjpDFLGQ0zWrhHBUsmgcFdbJSBvKrM2KjhBr/dKdaDzPr1BjkHGtIa9tF0Yd/5c\n"\
"JjGu2q40YHteCDYf3fKU57Q5gFyeqPSLEcIqIeSZAaTMuYKbhOnhCVDvIfYubKl+\n"\
"KZcTAgMBAAGjYDBeMB8GA1UdIwQYMBaAFNicXA6h7TBWOO/VHRmCB8gjim7qMB0G\n"\
"A1UdDgQWBBSQ4i522TF+p66ZmFuW/U/zwQBUhzAMBgNVHRMBAf8EAjAAMA4GA1Ud\n"\
"DwEB/wQEAwIHgDANBgkqhkiG9w0BAQsFAAOCAQEAA/53SCPgCy6Axpx6RRVzOSfo\n"\
"xKN2XR3qvxcoWLIx+pa4hoSKyXohKnIb4Alq1KZ6dBZeZB+JnDOmR4hTcbA8cbrL\n"\
"W0v/tLX5xOOlU6gggtvv70W7SRW5gQJr9VVq100OXIe1l8HuJTCPIjNtgkLUsUtG\n"\
"TP9cg67FKnQ3J8eLljWouhTRVuWnBeLdaxuBEHuAR6yYzlFf+2EJlPveLstJt0ls\n"\
"V4u1JmQNKsWddYAbqmaNwatjF0CsNqKl6VFbAWp6H0glYiMII/ua8ZKbjhKM0T8+\n"\
"f1jLaTisduZA+0sUl5Nneb3Q4+rObUEPy0Dr1sbgNeb9Q5tVYSdAwU5PcyKRpA==\n"\
"-----END CERTIFICATE-----\n"

/*
 * PEM-encoded issuer certificate for AWS IoT Just In Time Registration (JITR).
 * This is required if you're using JITR, since the issuer (Certificate 
 * Authority) of the client certificate is used by the server for routing the 
 * device's initial request. (The device client certificate must always be 
 * sent as well.) For more information about JITR, see:
 *  https://docs.aws.amazon.com/iot/latest/developerguide/jit-provisioning.html, 
 *  https://aws.amazon.com/blogs/iot/just-in-time-registration-of-device-certificates-on-aws-iot/.
 *
 * If you're not using JITR, set below to NULL.
 * 
 * Must include the PEM header and footer:
 * "-----BEGIN CERTIFICATE-----\n"\
 * "...base64 data...\n"\
 * "-----END CERTIFICATE-----\n"
 */
#define keyJITR_DEVICE_CERTIFICATE_AUTHORITY_PEM  NULL

/*
 * PEM-encoded client private key.
 *
 * Must include the PEM header and footer:
 * "-----BEGIN RSA PRIVATE KEY-----\n"\
 * "...base64 data...\n"\
 * "-----END RSA PRIVATE KEY-----\n"
 */
#define keyCLIENT_PRIVATE_KEY_PEM \
"-----BEGIN RSA PRIVATE KEY-----\n"\
"MIIEowIBAAKCAQEAwqB+f+PYkhlleMo3MtMiDJ+gtnjFxWiJyGaEYn4YpaIAqmKe\n"\
"isK54+zsUUOpMXwFGTpuR9GfRFbW7eTMQPh3Be/Vp5GkWK6SRnzzlAKMULzTmeG4\n"\
"9qmcoCvC9EL9Z2ebk3maIF5ZB9p7V1iXnDEnYYgmqNfkXHFmNTzLPGJbDzeKR93z\n"\
"nw1zbrx8S9aPdn5kXE6beuIf2NdPjZUE25146QxSxkNM1q4RwVLJoHBXWyUgbyqz\n"\
"Nio4Qa/3SnWg8z69QY5BxrSGvbRdGHf+XCYxrtquNGB7Xgg2H93ylOe0OYBcnqj0\n"\
"ixHCKiHkmQGkzLmCm4Tp4QlQ7yH2LmypfimXEwIDAQABAoIBAE9jwlYOre/iliaw\n"\
"bdW4lAIMNzVXjGzbGKD7WHMItqsRqy3VbpBxn/weT8NSUzjROw8wa322Pz5UIfYG\n"\
"R18VOw/b5g4ldaGLDDXekElGxM/GRpZVoepUA4S+dRbIIK/Gboq4pqsfcTen4nod\n"\
"tDJNRqAdNo/XCNrAkw2ST+DAyh4pNYFXF8aAjGH5RKK5cdJN8AUC6oNjnsO91ZWi\n"\
"GWVHJjs8kUMFRCbTbSyrPyS5vzQhPb7LAREOrU8YqvJEjXYIVZu7qWY5kQn/x6vE\n"\
"3bLzrBJ9sKLvit0xKeznpC2kMnjFDCkt+m7q4bo2ze3xrbiSiWbbbke6/yrUqcWn\n"\
"AUX8qYECgYEA+I/LUkJXQULQnciXkDThBGxFPgorF57M1vHpRADsxZ9D2OsmvCUl\n"\
"lK71tnZ17+lsh9xpam3iVruoiTaV7HfGAk0fTFgEyUeHYx8anzUen9sLN1cACqak\n"\
"tQ1RJXo464bfFOm9E9gOzoQ9Pn5w5pFJgBYVIyxO1RS0r313u/cbXdMCgYEAyHOC\n"\
"3K5Opl0qWRGV7Kb2Nbnw/RT0afoV34wrjBOJ7lwm8ybYMv/QGWbl5q7R6DdegSZM\n"\
"MClRk/85segFDgEg1/Nqb/+8uQ0ZFwNslXEKUVlywZACUWUtStUTOKHnhZGu1zQe\n"\
"1hcAwx/l7kDMGXZH22/kTrIci3uzb14pygAA2cECgYAVYChYFqRyVFCkgQ+nsyR2\n"\
"wOjjgPRbv6hWA8/PrVSvWhb3nKFkJL2qn7E5084op6ZRuL7IDFMeqlzAEBWslFBO\n"\
"+lrqsdcXiDM4bwBXGLZdgPTh+XVjdRlNCKwl0PD8MEkW/1LnVflQAUdTDIShD3WG\n"\
"sl92+uR8pp8zSFL3szSDSQKBgBGFBwsCsR0ZR3pBbzkf3qUTe1yjWDlrAj5noea8\n"\
"TnHm3ACkhIDwmt+dfrqKzQ3eyQPAtSgAdIDa7c/+13JB5vz46XSghX4nBupcAkGN\n"\
"f7lceAsy6wDyNuMzfFqWzAWAlid5BrjvicGEKDSKtUwEaoNjZDD8oEIQrb4uHLjr\n"\
"BygBAoGBAJ75K4ILgr3eiFnpnXarMhEWMVhYBoqrDS2Dhk9vlUpQchyx5Xj7d9Fb\n"\
"D0IT/R3FIoSE9EBWoex+GyIc+i1Wcdg/FOi/nbJ8xMKsr2T5rsYea77pmj0N1niu\n"\
"7QcQ/TmxGXJWD3JQXE8y4HdEzWIz93q6cAqaBj93dr+FDHWrBAyj\n"\
"-----END RSA PRIVATE KEY-----\n"

/* The constants above are set to const char * pointers defined in aws_demo_runner.c,
 * and externed here for use in C files.  NOTE!  THIS IS DONE FOR CONVENIENCE
 * DURING AN EVALUATION PHASE AND IS NOT GOOD PRACTICE FOR PRODUCTION SYSTEMS 
 * WHICH MUST STORE KEYS SECURELY. */
extern const char clientcredentialCLIENT_CERTIFICATE_PEM[];
extern const char* clientcredentialJITR_DEVICE_CERTIFICATE_AUTHORITY_PEM;
extern const char clientcredentialCLIENT_PRIVATE_KEY_PEM[];
extern const uint32_t clientcredentialCLIENT_CERTIFICATE_LENGTH;
extern const uint32_t clientcredentialCLIENT_PRIVATE_KEY_LENGTH;

#endif /* AWS_CLIENT_CREDENTIAL_KEYS_H */
