#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

#warning **** Hichi ESP32-C3 Smart Meter Build ****

#ifdef USE_RULES
#undef USE_RULES
#endif

#ifndef USE_SCRIPT
#define USE_SCRIPT
#endif

#ifndef USE_SML_M
#define USE_SML_M
#endif

#ifdef MAX_METERS
#undef MAX_METERS
#endif
#define MAX_METERS 1

#ifdef SML_BSIZ
#undef SML_BSIZ
#endif
#define SML_BSIZ 512

#ifdef TMSBSIZ
#undef TMSBSIZ
#endif
#define TMSBSIZ 1024

#endif
