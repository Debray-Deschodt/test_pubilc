#ifndef _NCLLOGR_H
#define _NCLLOGR_H
#ifdef __cplusplus
extern "C" {
#endif
/*                                                                        */
/* Library NCLLOGR                                                        */
/*                                                                        */
/* Constants (if any)                                                     */
#define ciLL_ERROR 5
#define ciLL_FATAL 6
#define ciLL_TRACE 1
#define ciLL_INFO 3
#define ciLL_WARN 4
#define ciLL_DEBUG 2

NS_FN(NS_SHORTINT) wIsLogLevelEnabled(NS_SHORTINT iLEVEL,NS_PCHAR _szLOGGER);
NS_FN(void) wLogDS(NS_SHORTINT iLEVEL,NS_PCHAR _szLOGGER,NS_tDynStr szMSG);
NS_FN(void) wLogTrace(NS_PCHAR _szLOGGER,NS_tDynStr szMSG);
NS_FN(void) wLogDebug(NS_PCHAR _szLOGGER,NS_tDynStr szMSG);
NS_FN(void) wLogInfo(NS_PCHAR _szLOGGER,NS_tDynStr szMSG);
NS_FN(void) wLogWarn(NS_PCHAR _szLOGGER,NS_tDynStr szMSG);
NS_FN(void) wLogError(NS_PCHAR _szLOGGER,NS_tDynStr szMSG);
NS_FN(void) wLogFatal(NS_PCHAR _szLOGGER,NS_tDynStr szMSG);
#ifdef __cplusplus
}
#endif
#endif
