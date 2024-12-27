#ifndef _PICTBUT_H
#define _PICTBUT_H
#ifdef __cplusplus
extern "C" {
#endif
/* Constants (if any)                                                     */

/* Template PICTBUT                                                       */

NS_FN(NS_INTEGER) otPICTBUT_NSDGIT(NS_HWND wnd,NS_INTEGER OffsetID,NS_INTEGER ControlTabID,NS_INTEGER x,NS_INTEGER y);
#if defined(WINDOWS) && !defined(WINDLL)
NS_INTEGER NS_EXPENTRY t_otPICTBUT_NSDGIT
  (NS_HWND wnd,NS_INTEGER OffsetID,NS_INTEGER ControlTabID,NS_INTEGER x,NS_INTEGER y);
NS_INTEGER NS_EXPENTRY t_cgtPICTBUT_NSDGIT
  (NS_HWND wnd,NS_INTEGER ID,NS_INTEGER BaseID,NS_INTEGER OffsetID,NS_INTEGER msg,NS_PTR parm1,NS_PTR parm2);
#endif
NS_FN(NS_INTEGER) cgtPICTBUT_NSDGIT
  (NS_HWND wnd,NS_INTEGER ID,NS_INTEGER BaseID,NS_INTEGER OffsetID,NS_INTEGER msg,NS_PTR parm1,NS_PTR parm2);

#ifdef __cplusplus
}
#endif
#endif

