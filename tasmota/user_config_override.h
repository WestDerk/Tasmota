#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

#ifndef USE_SCRIPT
#define USE_SCRIPT
#endif

#ifndef USE_SML_M
#define USE_SML_M
#endif

#ifdef USE_RULES
#undef USE_RULES
#endif

#ifndef USE_SCRIPT_JSON_EXPORT
#define USE_SCRIPT_JSON_EXPORT
#endif

#ifndef USE_SCRIPT_WEB_DISPLAY
#define USE_SCRIPT_WEB_DISPLAY
#endif

#ifndef USE_SML_SCRIPT_CMD
#define USE_SML_SCRIPT_CMD
#endif

#ifndef MAX_METERS
#define MAX_METERS 1
#endif

#ifndef SML_BSIZ
#define SML_BSIZ 200
#endif

#ifndef TMSBSIZ
#define TMSBSIZ 512
#endif

#endif
