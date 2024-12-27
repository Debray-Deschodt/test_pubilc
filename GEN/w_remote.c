/**************************************************************************/
/*                                                                        */
/* Module W_REMOTE                                                        */
/*                                                                        */
/* Program generated with Nat System Code Generator version 12.00         */
/* Copyright (C) 1990-2019 Nat System. All Rights Reserved.               */
/*                                                                        */
/**************************************************************************/

#include "nslib.h"

#define ds_W_REMOTE
#include "w_remote.h"
#include "ns_patch.h"

/*                                                                        */
/* Routines associated with window W_REMOTE                               */
/*                                                                        */
#if defined(WINDOWS) && !defined(WINDLL)
void NS_EXPENTRY t_oW_REMOTE
  (NS_PHWND window, NS_HWND father, NS_LONG style, NS_BOOL visible, NS_PTR Parm1, NS_PTR Parm2)
{
    oW_REMOTE(window,father,style,visible,Parm1,Parm2);
}
#endif
NS_FN(void) oW_REMOTE(NS_PHWND window, NS_HWND father, NS_LONG style, NS_BOOL visible, NS_PTR Parm1, NS_PTR Parm2)
{
/* Static variables definition                                            */
    static NS_DEVICE Device = {1920,1080,6,16,8,8,8,8,1,1,23,20,
32,32};
/* First, create window                                                   */
    wDlgOpenWindow(
        window,
        father,
        "W_REMOTE",
        NS_WS_TITLE
        | NS_WS_DLGBORDER
        | NS_WS_SIZEREDRAW
        | NS_WS_NOBYTEALIGN
        | NS_WS_DEFAULTICON
         | style,
        NS_NULL,
        NS_NULL,
        NS_FALSE,
        27,
        NS_BM_NOBACKGROUND, NS_NULL,
        ID_W_REMOTE_PB_OK,
        ID_W_REMOTE_PB_CANCEL);
    if (*window == NS_NULL) return;
/* Specify device coordinates                                             */
    wDlgSetDevice(*window,(NS_PDEVICE)&Device);
/* Next, set window original position                                     */
    wDlgSetWindowPos(*window, -1, -1, 521,188);
/* Add controls                                                           */
/*     Add control EF_REMOTE                                              */
    wDlgAddEntryField(*window,ID_W_REMOTE_EF_REMOTE,0,109,89,341,31,
      NS_EF_LEFT | NS_EF_MARGIN | NS_EF_AUTOSCROLL | NS_EF_BELOW,NS_NULL,NS_NULL,17,16,"Segoe UI",8,0);
/*     Add control PB_ADD                                                 */
    wDlgAddPushButton(*window,ID_W_REMOTE_PB_ADD,0,137,0,0,0,0,"+",44,"Segoe UI",8,0);
/*     Add control PB_CANCEL                                              */
    wDlgAddPushButton(*window,ID_W_REMOTE_PB_CANCEL,0,380,35,0,0,0,"Cancel",44,"Segoe UI",8,0);
/*     Add control PB_OK                                                  */
    wDlgAddPushButton(*window,ID_W_REMOTE_PB_OK,0,300,35,0,0,0,"OK",44,"Segoe UI",8,0);
/*     Add control ST_REMOTE                                              */
    wDlgAddStaticText(*window,ID_W_REMOTE_ST_REMOTE,0,45,95,49,13,
      NS_ST_LEFT | NS_ST_MNEMONIC | NS_ST_ERASERECT | NS_ST_AUTOSIZE,"Remote : ",35,16,"Segoe UI",8,0);
/* Add controls map-in if required                                        */
/* Minimize/Maximize window if necessary                                  */
/* Enable user events from now                                            */
    wSetCBack2 (*window, t_cgW_REMOTE);
/* Initialize template controls                                           */
/* Add Window initialization script                                       */
    wCallBack(*window,0,NS_MSG_INIT,Parm1,Parm2);
    if (*window == NS_NULL) return;
/* Add controls initialization scripts                                    */
    {
    register NS_INTEGER i;
    for (i = 0; i < 5; i++)
        {
        wCallBack(*window,100+i,NS_MSG_INIT,NS_L2P(0),NS_L2P(0));
        if (*window == NS_NULL) return;
        }
    }
/* Disactivate window variable refresh on close                           */
    wSetUser (*window, 1, NS_NULL);
/* Show window & Set focus if required                                    */
    if (visible) {
/* Set focus on control or window                                         */
        wSetFocus(*window,ID_W_REMOTE_EF_REMOTE);
        wShow(*window,0);
    }
    else
        wDlgSetCurItem(*window,ID_W_REMOTE_EF_REMOTE);
}

#if defined(WINDOWS) && !defined(WINDLL)
void NS_EXPENTRY t_dW_REMOTE
  (NS_PHWND wnd, NS_HWND father, NS_LONG style, NS_BOOL visible, NS_PINT ID, NS_PTR Parm1, NS_PTR Parm2)
{
    dW_REMOTE(wnd,father,style,visible,ID,Parm1,Parm2);
}
#endif
NS_FN(void) dW_REMOTE
  (NS_PHWND wnd, NS_HWND father, NS_LONG style, NS_BOOL visible, NS_PINT ID, NS_PTR Parm1, NS_PTR Parm2)
{
/* Open Window with its child controls                                    */
    oW_REMOTE(wnd,father,style|NS_WS_SECONDARY,visible,Parm1,Parm2);
    if (*wnd == NS_NULL) return;
/* Process the window                                                     */
    wProcess(*wnd, ID);
/* Close the window                                                       */
    wCloseWindow(*wnd);
}


NS_INTEGER NS_EXPENTRY t_cgW_REMOTE(NS_HWND wnd,NS_INTEGER ID,NS_INTEGER msg,NS_PTR parm1,NS_PTR parm2)
{
    return cgW_REMOTE(wnd,ID,msg,parm1,parm2);
}
NS_FN(NS_INTEGER) cgW_REMOTE(NS_HWND wnd,NS_INTEGER ID,NS_INTEGER msg,NS_PTR parm1,NS_PTR parm2)
{
    if (msg == NS_MSG_GETUSREVT) {
        return 0;
    }
    if (msg == NS_MSG_GETLAST)
        return 104;
    if (msg == NS_MSG_GETNAME) {
        switch (ID) {
            case 0:
                wStrCpy(*(NS_PCHAR *)parm1,"W_REMOTE");
                return 0;
            case ID_W_REMOTE_EF_REMOTE:
                wStrCpy(*(NS_PCHAR *)parm1,"EF_REMOTE");
                return 0;
            case ID_W_REMOTE_PB_ADD:
                wStrCpy(*(NS_PCHAR *)parm1,"PB_ADD");
                return 0;
            case ID_W_REMOTE_PB_CANCEL:
                wStrCpy(*(NS_PCHAR *)parm1,"PB_CANCEL");
                return 0;
            case ID_W_REMOTE_PB_OK:
                wStrCpy(*(NS_PCHAR *)parm1,"PB_OK");
                return 0;
            case ID_W_REMOTE_ST_REMOTE:
                wStrCpy(*(NS_PCHAR *)parm1,"ST_REMOTE");
                return 0;
        }
    }
    switch (ID) {
        case 0:
            switch (msg) {
                case NS_MSG_TERMINATE: {
                    return 0;
                    }
                case NS_MSG_HELP: {
                    HLPOPEN(wnd,"W_REMOTE");
                    return 0;
                }
            }
            break;
        case ID_W_REMOTE_EF_REMOTE:
            switch (msg) {
                case NS_MSG_HELP: {
                    HLPOPEN(wnd,"W_REMOTE__EF_REMOTE");
                    return 0;
                }
            }
            break;
        case ID_W_REMOTE_PB_ADD:
            switch (msg) {
                case NS_MSG_EXECUTED:
                    if (wDlgCheck1(wnd,ID_W_REMOTE_PB_ADD,100,104));
                    return 0;
                case NS_MSG_HELP: {
                    HLPOPEN(wnd,"W_REMOTE__PB_ADD");
                    return 0;
                }
            }
            break;
        case ID_W_REMOTE_PB_CANCEL:
            switch (msg) {
                case NS_MSG_EXECUTED:
                    wDismissOrCloseWindow(wnd,0);
                    return 0;
                case NS_MSG_HELP: {
                    HLPOPEN(wnd,"W_REMOTE__PB_CANCEL");
                    return 0;
                }
            }
            break;
        case ID_W_REMOTE_PB_OK:
            switch (msg) {
                case NS_MSG_EXECUTED:
                    if (wDlgCheck1(wnd,ID_W_REMOTE_PB_OK,100,104))
                        wDismissOrCloseWindow(wnd,0);
                    return 0;
                case NS_MSG_HELP: {
                    HLPOPEN(wnd,"W_REMOTE__PB_OK");
                    return 0;
                }
            }
            break;
    }
    return NS_DEFRET;
}

