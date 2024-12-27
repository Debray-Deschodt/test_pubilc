#ifndef _MDI_H
#define _MDI_H
#ifdef __cplusplus
extern "C" {
#endif
/* Window MDI                                                             */
#define ID_MDI_MI_CAFE 100
#ifdef ds_MDI
#else
#endif

#if defined(WINDOWS) && !defined(WINDLL)
void NS_EXPENTRY t_oMDI(NS_PHWND window, NS_HWND father, NS_LONG style, NS_BOOL visible, NS_PTR Parm1, NS_PTR Parm2);
void NS_EXPENTRY t_dMDI
  (NS_PHWND wnd, NS_HWND father, NS_LONG style, NS_BOOL visible, NS_PINT ID, NS_PTR Parm1, NS_PTR Parm2);
#endif
NS_FN(void) oMDI(NS_PHWND window, NS_HWND father, NS_LONG style, NS_BOOL visible, NS_PTR Parm1, NS_PTR Parm2);
NS_FN(void) dMDI(NS_PHWND wnd, NS_HWND father, NS_LONG style, NS_BOOL visible, NS_PINT ID, NS_PTR Parm1, NS_PTR Parm2);
NS_INTEGER NS_EXPENTRY t_cgMDI(NS_HWND wnd,NS_INTEGER ID,NS_INTEGER msg,NS_PTR parm1,NS_PTR parm2);
NS_FN(NS_INTEGER) cgMDI(NS_HWND wnd,NS_INTEGER ID,NS_INTEGER msg,NS_PTR parm1,NS_PTR parm2);


/* Constants (if any)                                                     */

#ifdef __cplusplus
}
#endif
#endif

