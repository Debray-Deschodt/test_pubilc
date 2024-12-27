#ifndef _NSHTTP_H
#define _NSHTTP_H
#ifdef __cplusplus
extern "C" {
#endif
/*                                                                        */
/* Library NSHTTP                                                         */
/*                                                                        */
/* Constants (if any)                                                     */

NS_FN(NS_PTR) HTTP_NEW(void);
NS_FN(void) HTTP_DISPOSE(NS_PTR PCONNECTION);
NS_FN(void) HTTP_CONNECT(NS_PTR PCONNECTION,NS_PCHAR _szURL);
NS_FN(void) HTTP_DISCONNECT(NS_PTR PCONNECTION);
NS_FN(void) HTTP_ADDREQUESTPROPERTY(NS_PTR PCONNECTION,NS_PCHAR _szHEADER,NS_PCHAR _szVALUE);
NS_FN(void) HTTP_ADDREQUESTPROPERTYEX(NS_PTR PCONNECTION,NS_PCHAR _szHEADER,NS_tDynStr VALUE);
NS_FN(void) HTTP_POST(NS_PTR PCONNECTION,NS_PTR PBUFF,NS_LONG iBUFFLEN,NS_PCHAR _szCONTENTTYPE);
NS_FN(void) HTTP_POSTEX(NS_PTR PCONNECTION,NS_tDynStr DS,NS_PCHAR _szCONTENTTYPE);
NS_FN(void) HTTP_GET(NS_PTR PCONNECTION);
NS_FN(void) HTTP_PUT(NS_PTR PCONNECTION,NS_tDynStr DS,NS_PCHAR _szCONTENTTYPE);
NS_FN(void) HTTP_PATCH(NS_PTR PCONNECTION,NS_tDynStr DS,NS_PCHAR _szCONTENTTYPE);
NS_FN(void) HTTP_DELETE(NS_PTR PCONNECTION);
NS_FN(void) HTTP_HEAD(NS_PTR PCONNECTION);
NS_FN(void) HTTP_TRACE(NS_PTR PCONNECTION);
NS_FN(void) HTTP_OPTIONS(NS_PTR PCONNECTION);
NS_FN(NS_LONG) HTTP_GET_STATUSCODE(NS_PTR PCONNECTION);
NS_FN(NS_PCHAR) HTTP_GET_REASONPHRASE(NS_PCHAR sz__RETURN,NS_PTR PCONNECTION);
NS_FN(void) HTTP_GET_HEADER(NS_PTR PCONNECTION,NS_PTR PSZHEADER,NS_LONG iBUFFSIZE);
NS_FN(NS_tDynStr) HTTP_GET_HEADEREX(NS_tpDynStr pds__Return,NS_PTR PCONNECTION);
NS_FN(NS_PCHAR) HTTP_GET_HEADERFIELD(NS_PCHAR sz__RETURN,NS_PTR PCONNECTION,NS_PCHAR _szFIELDNAME);
NS_FN(void) HTTP_GET_HEADERFIELDN(NS_PTR PCONNECTION,NS_LONG iN,NS_PCHAR szFIELDNAME,NS_PCHAR szFIELDVALUE);
NS_FN(NS_LONG) HTTP_GET_HEADERFIELDCOUNT(NS_PTR PCONNECTION);
NS_FN(void) HTTP_SET_FOLLOWREDIRECT(NS_PTR PCONNECTION,NS_SHORTINT iFOLLOW);
NS_FN(void) HTTP_SET_TIMEOUT(NS_PTR PCONNECTION,NS_LONG iTIMEOUT);
NS_FN(void) HTTP_SET_PROXY(NS_PTR PCONNECTION,NS_PCHAR _szPROXY);
NS_FN(void) HTTP_SET_ROOTCERTS(NS_PTR PCONNECTION,NS_PCHAR _szCAFILE);
NS_FN(NS_PCHAR) HTTP_GET_ROOTCERTS(NS_PCHAR sz__RETURN,NS_PTR PCONNECTION);
NS_FN(void) HTTP_SET_USERNAME(NS_PTR PCONNECTION,NS_PCHAR _szUSERNAME);
NS_FN(void) HTTP_SET_PASSWORD(NS_PTR PCONNECTION,NS_PCHAR _szPASSWORD);
NS_FN(void) HTTP_SET_AUTHENTICATION(NS_PTR PCONNECTION,NS_tDynStr AUTHENTICATION);
NS_FN(void) HTTP_SET_PROXYUSERNAME(NS_PTR PCONNECTION,NS_PCHAR _szUSERNAME);
NS_FN(void) HTTP_SET_PROXYPASSWORD(NS_PTR PCONNECTION,NS_PCHAR _szPASSWORD);
NS_FN(void) HTTP_SET_NOCNCHECK(NS_PTR PCONNECTION,NS_SHORTINT CHECK);
NS_FN(void) HTTP_SET_NOSIGVERIFY(NS_PTR PCONNECTION,NS_SHORTINT VERIFY);
NS_FN(void) HTTP_SET_PRIVATECERT(NS_PTR PCONNECTION,NS_PCHAR _szCLIENTCERT);
NS_FN(void) HTTP_SET_CERTPASSWORD(NS_PTR PCONNECTION,NS_PCHAR _szCERTPASSWORD);
NS_FN(NS_SHORTINT) HTTP_GETLINE(NS_PTR PCONNECTION,NS_PTR PSZBUFF,NS_LONG iBUFFSIZE);
NS_FN(NS_tDynStr) HTTP_GETLINEEX(NS_tpDynStr pds__Return,NS_PTR PCONNECTION);
NS_FN(NS_SHORTINT) HTTP_EOF(NS_PTR PCONNECTION);
NS_FN(NS_LONG) HTTP_READ(NS_PTR PCONNECTION,NS_PTR PBUFF,NS_LONG iBUFFSIZE);
NS_FN(NS_tDynStr) HTTP_READEX(NS_tpDynStr pds__Return,NS_PTR PCONNECTION);
NS_FN(NS_SHORTINT) HTTP_SAVETO(NS_PTR PCONNECTION,NS_PCHAR _szPSZFILE);
NS_FN(NS_SHORTINT) HTTP_ERROR(void);
NS_FN(NS_PCHAR) HTTP_GET_ERRORMSG(NS_PCHAR sz__RETURN);
NS_FN(NS_tDynStr) HTTP_URL_ENCODE(NS_tpDynStr pds__Return,NS_tDynStr TOENCODE);
NS_FN(NS_tDynStr) HTTP_URL_DECODE(NS_tpDynStr pds__Return,NS_tDynStr TODECODE);
NS_FN(NS_SHORTINT) HTTP_MULTIPART_ADDSINGLEPART(NS_tpDynStr DSRET,NS_PCHAR _szNAME,NS_tDynStr VALUE,NS_PCHAR _szBOUNDARY
  );
NS_FN(NS_SHORTINT) HTTP_MULTIPART_ADDFILEPART(NS_tpDynStr DSRET,NS_PCHAR _szNAME,NS_PCHAR _szFILE,NS_PCHAR _szTYPE,
  NS_PCHAR _szBOUNDARY);
NS_FN(NS_SHORTINT) HTTP_MULTIPART_ADDFINALBOUNDARY(NS_tpDynStr DSRET,NS_PCHAR _szBOUNDARY);
#ifdef __cplusplus
}
#endif
#endif