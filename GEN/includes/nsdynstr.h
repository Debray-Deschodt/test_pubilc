#ifndef _NSDYNSTR_H
#define _NSDYNSTR_H
#ifdef __cplusplus
extern "C" {
#endif
/*                                                                        */
/* Library NSDYNSTR                                                       */
/*                                                                        */
#ifndef _SEG_SEG_DSDO_STATEREPORT
#define _SEG_SEG_DSDO_STATEREPORT
typedef struct _tag_SEG_SEG_DSDO_STATEREPORT{
    NS_LONG iALLOCDESCRIPTORSCNT;
    NS_LONG iUSEDDESCRIPTORSCNT;
    NS_LONG iDSVARCNT;
    NS_LONG iCONSTDSCNT;
    NS_LONG iTMPDSCNT;
    NS_LONG iCSTRREFDSCNT;
    NS_LONG iEXTDSCNT;
    NS_LONG iTOTALALLOCSTRSIZE;
    NS_LONG iTOTALALLOCSTRLEN;
} SEG_DSDO_STATEREPORT;
#endif

#ifndef _SEG_SEG_DSDO_ENUMDS
#define _SEG_SEG_DSDO_ENUMDS
typedef struct _tag_SEG_SEG_DSDO_ENUMDS{
    NS_tDynStr DS;
    NS_INTEGER STATE;
    NS_INTEGER CNT;
    NS_PTR PVBLK;
} SEG_DSDO_ENUMDS;
NS_FN(NS_VOID) ctorSEG_DSDO_ENUMDS(SEG_DSDO_ENUMDS* p, NS_UINT cnt);
NS_FN(NS_VOID) dtorSEG_DSDO_ENUMDS(SEG_DSDO_ENUMDS* p, NS_UINT cnt);
NS_FN(NS_VOID) incrUseSEG_DSDO_ENUMDS(SEG_DSDO_ENUMDS* p, NS_UINT cnt);
NS_VOID cpySEG_DSDO_ENUMDS(SEG_DSDO_ENUMDS* pSrc, SEG_DSDO_ENUMDS* pTrg, NS_UINT cnt);
#endif

/* Constants (if any)                                                     */
#define ciEDSS_STD 0
#define ciEDSS_TMPSUBVAR 3
#define ciDSDO_ENUMDS 1
#define ciEDSS_CSTRREF 1
#define ciEDSS_TMP 2
#define ciDSDO_STATEREPORT 0
#define ciEDSS_END -1
#define ciEDSS_CONST 4

NS_FN(NS_SHORTINT) wDSDebug(NS_INTEGER iOP,NS_PTR PDATA);
NS_FN(NS_SHORTINT) wIsDSNull(NS_tDynStr DS);
NS_FN(void) wDSRelease1(NS_tpDynStr DS);
NS_FN(NS_PTR) wForceDSLength(NS_tpDynStr DS,NS_INTEGER  *iLEN);
#ifdef __cplusplus
}
#endif
#endif

