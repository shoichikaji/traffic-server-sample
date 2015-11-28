#include "sample.hpp"

void TSPluginInit(int argc, const char *argv[]) {
  for (int i = 0; i < 1000; i++) {
    LOG_DEBUG("%d this is debug", i);
    LOG_INFO("%d this is info", i);
    LOG_WARN("%d this is warn", i);
    LOG_ERROR("%d this is error", i);
  }
}
