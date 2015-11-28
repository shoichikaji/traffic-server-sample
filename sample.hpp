#ifndef SAMPLE_HPP_
#define SAMPLE_HPP_

#include <ts/ts.h>

/* easy logging... */
#define STR_EXPAND__(tok) #tok
#define STR__(tok) STR_EXPAND__(tok)
#define LOG_DEBUG(...) TSDebug("sample", "(" __FILE__ ":" STR__(__LINE__) ") " __VA_ARGS__)
#define LOG_INFO(...)  TSError("INFO ("  __FILE__ ":" STR__(__LINE__) ") " __VA_ARGS__)
#define LOG_WARN(...)  TSError("WARN ("  __FILE__ ":" STR__(__LINE__) ") " __VA_ARGS__)
#define LOG_ERROR(...) TSError("ERROR (" __FILE__ ":" STR__(__LINE__) ") " __VA_ARGS__)

extern "C" {
void TSPluginInit(int argc, const char* argv[]);
};

#endif
