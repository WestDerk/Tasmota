#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

// Bestätigung im Build-Protokoll
#warning **** Hichi ESP32-C3 Smart Meter Build ****

// Tasmota Script-Interpreter
#ifndef USE_SCRIPT
#define USE_SCRIPT
#endif

// Smart Meter Interface / Sensor53
#ifndef USE_SML_M
#define USE_SML_M
#endif

// Speicher freigeben; Rules werden für dieses Gerät nicht benötigt
#ifdef USE_RULES
#undef USE_RULES
#endif

// Ein angeschlossener Zähler
#ifdef MAX_METERS
#undef MAX_METERS
#endif
#define MAX_METERS 1

// Ausreichende Puffer für IEC 62056-21 / T330
#ifdef SML_BSIZ
#undef SML_BSIZ
#endif
#define SML_BSIZ 512

#ifdef TMSBSIZ
#undef TMSBSIZ
#endif
#define TMSBSIZ 1024

#endif  // _USER_CONFIG_OVERRIDE_H_
