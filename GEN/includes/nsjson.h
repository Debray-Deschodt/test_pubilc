#ifndef _NSJSON_H
#define _NSJSON_H
#ifdef __cplusplus
extern "C" {
#endif
/*                                                                        */
/* Library NSJSON                                                         */
/*                                                                        */
/* Constants (if any)                                                     */
#define ciNSJSON_ELEMENT 1

NS_FN(NS_PTR) NSJSON_PARSE(NS_tDynStr INPUT);
NS_FN(NS_PTR) NSJSON_GET(NS_PTR VALUE,NS_PCHAR _szKEY);
NS_FN(NS_PTR) NSJSON_GETAT(NS_PTR VALUE,NS_LONG iINDEX);
NS_FN(NS_tDynStr) NSJSON_TOSTRING(NS_tpDynStr pds__Return,NS_PTR VALUE);
NS_FN(NS_LONG) NSJSON_TOINT(NS_PTR VALUE);
NS_FN(NS_PREAL) NSJSON_TONUM(NS_PREAL r__RETURN,NS_PTR VALUE);
NS_FN(NS_SHORTINT) NSJSON_TOBOOL(NS_PTR VALUE);
NS_FN(NS_SHORTINT) NSJSON_ISNULL(NS_PTR VALUE);
NS_FN(NS_LONG) NSJSON_SIZE(NS_PTR VALUE);
NS_FN(void) NSJSON_DISPOSE(NS_PTR VALUE);
#ifdef __cplusplus
}
#endif
#endif
