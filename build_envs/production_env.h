#ifndef __CLI_PROD_ENV__
#define __CLI_PROD_ENV__

#include <stdlib.h>
#include <string>

#ifdef STAGING
#undef STAGING
#endif

const std::string CLIENT_ID   = "0cbe0e8754f1492cac415f73cea669bb";
const std::string API_URL     = "https://api.metismachine.io/v1";
const std::string LOGGING_URL = "https://api.metismachine.io/logs/";

#endif
