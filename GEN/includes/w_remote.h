#ifndef _W_REMOTE_H
#define _W_REMOTE_H
#ifdef __cplusplus
extern "C" {
#endif
/* Window W_REMOTE                                                        */
#define ID_W_REMOTE_EF_REMOTE 100
#define ID_W_REMOTE_PB_ADD 101
#define ID_W_REMOTE_PB_CANCEL 102
#define ID_W_REMOTE_PB_OK 103
#define ID_W_REMOTE_ST_REMOTE 104
#ifdef ds_W_REMOTE
#else
#endif

#if defined(WINDOWS) && !defined(WINDLL)
void NS_EXPENTRY t_oW_REMOTE
  (NS_PHWND window, NS_HWND father, NS_LONG style, NS_BOOL visible, NS_PTR Parm1, NS_PTR Parm2);
void NS_EXPENTRY t_dW_REMOTE
  (NS_PHWND wnd, NS_HWND father, NS_LONG style, NS_BOOL visible, NS_PINT ID, NS_PTR Parm1, NS_PTR Parm2);
#endif
NS_FN(void) oW_REMOTE(NS_PHWND window, NS_HWND father, NS_LONG style, NS_BOOL visible, NS_PTR Parm1, NS_PTR Parm2);
NS_FN(void) dW_REMOTE
  (NS_PHWND wnd, NS_HWND father, NS_LONG style, NS_BOOL visible, NS_PINT ID, NS_PTR Parm1, NS_PTR Parm2);
NS_INTEGER NS_EXPENTRY t_cgW_REMOTE(NS_HWND wnd,NS_INTEGER ID,NS_INTEGER msg,NS_PTR parm1,NS_PTR parm2);
NS_FN(NS_INTEGER) cgW_REMOTE(NS_HWND wnd,NS_INTEGER ID,NS_INTEGER msg,NS_PTR parm1,NS_PTR parm2);


/* Constants (if any)                                                     */

#ifdef __cplusplus
}
#endif
#endif

