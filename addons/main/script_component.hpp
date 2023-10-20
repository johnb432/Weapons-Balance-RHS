#define COMPONENT main
#define COMPONENT_BEAUTIFIED RHS
#include "script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define DEBUG_SYNCHRONOUS
// #define ENABLE_PERFORMANCE_COUNTERS

#ifdef DEBUG_ENABLED_WB_RHS
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_WB_RHS
    #define DEBUG_SETTINGS DEBUG_SETTINGS_WB_RHS
#endif

#define MAGAZINE_WELL WB_Magazines

#include "script_macros.hpp"
