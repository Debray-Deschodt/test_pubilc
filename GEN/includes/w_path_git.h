#ifndef _W_PATH_GIT_H
#define _W_PATH_GIT_H
#ifdef __cplusplus
extern "C" {
#endif
/* Window W_PATH_GIT                                                      */
#define ID_W_PATH_GIT_EF_PATH 100
#define ID_W_PATH_GIT_PB_CANCEL 101
#define ID_W_PATH_GIT_PB_INSTALL 102
#define ID_W_PATH_GIT_PB_OK 103
#define ID_W_PATH_GIT_PB_SEARCH 104
#define ID_W_PATH_GIT_ST_PATH 105
#ifdef ds_W_PATH_GIT
NS_INT ID_vW_PATH_GIT = 0;
NS_INT ID_vW_PATH_GIT_PB_SEARCH = 0;
#else
extern NS_INT ID_vW_PATH_GIT;
extern NS_INT ID_vW_PATH_GIT_PB_SEARCH;
#endif

#if defined(WINDOWS) && !defined(WINDLL)
void NS_EXPENTRY t_oW_PATH_GIT
  (NS_PHWND window, NS_HWND father, NS_LONG style, NS_BOOL visible, NS_PTR Parm1, NS_PTR Parm2);
void NS_EXPENTRY t_dW_PATH_GIT
  (NS_PHWND wnd, NS_HWND father, NS_LONG style, NS_BOOL visible, NS_PINT ID, NS_PTR Parm1, NS_PTR Parm2);
#endif
NS_FN(void) oW_PATH_GIT(NS_PHWND window, NS_HWND father, NS_LONG style, NS_BOOL visible, NS_PTR Parm1, NS_PTR Parm2);
NS_FN(void) dW_PATH_GIT
  (NS_PHWND wnd, NS_HWND father, NS_LONG style, NS_BOOL visible, NS_PINT ID, NS_PTR Parm1, NS_PTR Parm2);
NS_INTEGER NS_EXPENTRY t_cgW_PATH_GIT(NS_HWND wnd,NS_INTEGER ID,NS_INTEGER msg,NS_PTR parm1,NS_PTR parm2);
NS_FN(NS_INTEGER) cgW_PATH_GIT(NS_HWND wnd,NS_INTEGER ID,NS_INTEGER msg,NS_PTR parm1,NS_PTR parm2);


/* Constants (if any)                                                     */

#ifdef __cplusplus
}
#endif
#endif

