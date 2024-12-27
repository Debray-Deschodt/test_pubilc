/**************************************************************************/
/*                                                                        */
/* Module MDI                                                             */
/*                                                                        */
/* Program generated with Nat System Code Generator version 12.00         */
/* Copyright (C) 1990-2019 Nat System. All Rights Reserved.               */
/*                                                                        */
/**************************************************************************/

#include "nslib.h"

#define ds_MDI
#include "mdi.h"
#include "ns_patch.h"

/*                                                                        */
/* Routines associated with window MDI                                    */
/*                                                                        */
#if defined(WINDOWS) && !defined(WINDLL)
void NS_EXPENTRY t_oMDI(NS_PHWND window, NS_HWND father, NS_LONG style, NS_BOOL visible, NS_PTR Parm1, NS_PTR Parm2)
{
    oMDI(window,father,style,visible,Parm1,Parm2);
}
#endif
NS_FN(void) oMDI(NS_PHWND window, NS_HWND father, NS_LONG style, NS_BOOL visible, NS_PTR Parm1, NS_PTR Parm2)
{
/* Static variables definition                                            */
    static NS_DEVICE Device = {1280,720,6,16,8,8,8,8,1,1,23,20,
32,32};
/* First, create window                                                   */
    wWndOpenWindow(
        window,
        father,
        "MDI",
        NS_WS_TITLE
        | NS_WS_SIZEBORDER
        | NS_WS_NOBYTEALIGN
        | NS_WS_MENUBAR
        | NS_WS_TASKLIST
        | NS_WS_DEFAULTICON
        | NS_WS_QUIT
        | NS_WS_MINIMIZE
         | style
 | NS_WS_MDI,
        NS_NULL,
        NS_NULL,
        NS_FALSE,
        16,
        NS_BM_NOBACKGROUND, NS_NULL);
    if (*window == NS_NULL) return;
    wAppendMenuItem(*window,0,ID_MDI_MI_CAFE,"C'est l'heure du café",0);
/* Specify device coordinates                                             */
    wWndSetDevice(*window,(NS_PDEVICE)&Device);
/* Next, set window original position                                     */
    wWndSetWindowPos(*window, -1, -1, 648,520);
/* Minimize/Maximize window if necessary                                  */
/* Enable user events from now                                            */
    wSetCBack2 (*window, t_cgMDI);
/* Initialize template controls                                           */
/* Add Window initialization script                                       */
    wCallBack(*window,0,NS_MSG_INIT,Parm1,Parm2);
    if (*window == NS_NULL) return;
/* Disactivate window variable refresh on close                           */
    wSetUser (*window, 1, NS_NULL);
/* Show window & Set focus if required                                    */
    if (visible) {
/* Set focus on control or window                                         */
        wSetFocus(*window,0);
        wShow(*window,0);
    }
}

#if defined(WINDOWS) && !defined(WINDLL)
void NS_EXPENTRY t_dMDI
  (NS_PHWND wnd, NS_HWND father, NS_LONG style, NS_BOOL visible, NS_PINT ID, NS_PTR Parm1, NS_PTR Parm2)
{
    dMDI(wnd,father,style,visible,ID,Parm1,Parm2);
}
#endif
NS_FN(void) dMDI(NS_PHWND wnd, NS_HWND father, NS_LONG style, NS_BOOL visible, NS_PINT ID, NS_PTR Parm1, NS_PTR Parm2)
{
/* Open Window with its child controls                                    */
    oMDI(wnd,father,style|NS_WS_SECONDARY,visible,Parm1,Parm2);
    if (*wnd == NS_NULL) return;
/* Process the window                                                     */
    wProcess(*wnd, ID);
/* Close the window                                                       */
    wCloseWindow(*wnd);
}


NS_INTEGER NS_EXPENTRY t_cgMDI(NS_HWND wnd,NS_INTEGER ID,NS_INTEGER msg,NS_PTR parm1,NS_PTR parm2)
{
    return cgMDI(wnd,ID,msg,parm1,parm2);
}
NS_FN(NS_INTEGER) cgMDI(NS_HWND wnd,NS_INTEGER ID,NS_INTEGER msg,NS_PTR parm1,NS_PTR parm2)
{
    if (msg == NS_MSG_GETUSREVT) {
        return 0;
    }
    if (msg == NS_MSG_GETLAST)
        return 100;
    if (msg == NS_MSG_GETNAME) {
        switch (ID) {
            case 0:
                wStrCpy(*(NS_PCHAR *)parm1,"MDI");
                return 0;
            case ID_MDI_MI_CAFE:
                wStrCpy(*(NS_PCHAR *)parm1,"MI_CAFE");
                return 0;
        }
    }
    switch (ID) {
        case 0:
            switch (msg) {
                case NS_MSG_HELP: {
                    HLPOPEN(wnd,"MDI");
                    return 0;
                }
            }
            break;
        case ID_MDI_MI_CAFE:
            switch (msg) {
                case NS_MSG_HELP: {
                    HLPOPEN(wnd,"MDI__MI_CAFE");
                    return 0;
                }
            }
            break;
    }
    return NS_DEFRET;
}

