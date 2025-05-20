#include "window_api.h"

#if defined(_WIN32)
    #include "win32_backend.c"
#elif defined (__linux__)
    #include "wayland_backend.c"
#elif defined (__APPLE__)
    #include "macos_backend.c"
#endif