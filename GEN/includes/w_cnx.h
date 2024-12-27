#ifndef _W_CNX_H
#define _W_CNX_H
#ifdef __cplusplus
extern "C" {
#endif
/* Window W_CNX                                                           */
#define ID_W_CNX_CHK_REMEMBER 100
#define ID_W_CNX_EF_TOKEN 101
#define ID_W_CNX_EF_USERNAME 102
#define ID_W_CNX_PB_CANCEL 103
#define ID_W_CNX_PB_OK 104
#define ID_W_CNX_ST_TOKEN 105
#define ID_W_CNX_ST_USERNAME 106
#ifdef ds_W_CNX
#else
#endif

#if defined(WINDOWS) && !defined(WINDLL)
void NS_EXPENTRY t_oW_CNX(NS_PHWND window, NS_HWND father, NS_LONG style, NS_BOOL visible, NS_PTR Parm1, NS_PTR Parm2);
void NS_EXPENTRY t_dW_CNX
  (NS_PHWND wnd, NS_HWND father, NS_LONG style, NS_BOOL visible, NS_PINT ID, NS_PTR Parm1, NS_PTR Parm2);
#endif
NS_FN(void) oW_CNX(NS_PHWND window, NS_HWND father, NS_LONG style, NS_BOOL visible, NS_PTR Parm1, NS_PTR Parm2);
NS_FN(void) dW_CNX
  (NS_PHWND wnd, NS_HWND father, NS_LONG style, NS_BOOL visible, NS_PINT ID, NS_PTR Parm1, NS_PTR Parm2);
NS_INTEGER NS_EXPENTRY t_cgW_CNX(NS_HWND wnd,NS_INTEGER ID,NS_INTEGER msg,NS_PTR parm1,NS_PTR parm2);
NS_FN(NS_INTEGER) cgW_CNX(NS_HWND wnd,NS_INTEGER ID,NS_INTEGER msg,NS_PTR parm1,NS_PTR parm2);


/* Constants (if any)                                                     */

#ifdef __cplusplus
}
#endif
#endif


