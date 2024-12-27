/**************************************************************************/
/*                                                                        */
/* Module W_CNX                                                           */
/*                                                                        */
/* Program generated with Nat System Code Generator version 12.00         */
/* Copyright (C) 1990-2019 Nat System. All Rights Reserved.               */
/*                                                                        */
/**************************************************************************/

#include "nslib.h"

#define ds_W_CNX
#include "ncllogr.h"
#include "nsdgit_lb.h"
#include "nsinim.h"
#include "nsmisc.h"
#include "w_path_git.h"
#include "mdi.h"
#include "nsdate.h"
#include "nsdynstr.h"
#include "nshttp.h"
#include "nsjson.h"
#include "nstas.h"
#include "pictbut.h"
#include "w_remote.h"
#include "w_cnx.h"
#include "ns_patch.h"
static const NS_CHAR cSz3[4]="end";
static const NS_tDynData cdd3=NSMkCstDynData(cSz3);
static const NS_CHAR cSz1[6]="begin";
static const NS_tDynData cdd1=NSMkCstDynData(cSz1);
static const NS_CHAR cSz0[16]="E.W_CNX.INIT(6)";
static const NS_tDynData cdd0=NSMkCstDynData(cSz0);
static const NS_CHAR cSz2[17]="E.W_CNX.INIT(93)";
static const NS_tDynData cdd2=NSMkCstDynData(cSz2);

/*                                                                        */
/* Routines associated with window W_CNX                                  */
/*                                                                        */
#if defined(WINDOWS) && !defined(WINDLL)
void NS_EXPENTRY t_oW_CNX(NS_PHWND window, NS_HWND father, NS_LONG style, NS_BOOL visible, NS_PTR Parm1, NS_PTR Parm2)
{
    oW_CNX(window,father,style,visible,Parm1,Parm2);
}
#endif
NS_FN(void) oW_CNX(NS_PHWND window, NS_HWND father, NS_LONG style, NS_BOOL visible, NS_PTR Parm1, NS_PTR Parm2)
{
/* Static variables definition                                            */
    static NS_DEVICE Device = {1920,1080,6,16,8,8,8,8,1,1,23,20,
32,32};
/* First, create window                                                   */
    wDlgOpenWindow(
        window,
        father,
        "NSDGIT  -  connection",
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
        ID_W_CNX_PB_OK,
        ID_W_CNX_PB_CANCEL);
    if (*window == NS_NULL) return;
    if (wGetMainWindow() == NS_NULL)
        wSetMainWindow(*window);
/* Specify device coordinates                                             */
    wDlgSetDevice(*window,(NS_PDEVICE)&Device);
/* Next, set window original position                                     */
    wDlgSetWindowPos(*window, -1, -1, 454,195);
/* Add controls                                                           */
/*     Add control CHK_REMEMBER                                           */
    wDlgAddCheckBox(*window,ID_W_CNX_CHK_REMEMBER,0,45,47,89,NS_BX_AUTOSIZE | NS_BX_BELOW,"Remember me",35,16,"Segoe UI"
      ,8,0);
/*     Add control EF_TOKEN                                               */
    wDlgAddEntryField(*window,ID_W_CNX_EF_TOKEN,0,117,75,276,31,
      NS_EF_LEFT | NS_EF_MARGIN | NS_EF_AUTOSCROLL | NS_EF_BELOW,NS_NULL,NS_NULL,17,16,"Segoe UI",8,0);
/*     Add control EF_USERNAME                                            */
    wDlgAddEntryField(*window,ID_W_CNX_EF_USERNAME,0,117,104,276,31,
      NS_EF_LEFT | NS_EF_MARGIN | NS_EF_AUTOSCROLL | NS_EF_BELOW,NS_NULL,NS_NULL,17,16,"Segoe UI",8,0);
/*     Add control PB_CANCEL                                              */
    wDlgAddPushButton(*window,ID_W_CNX_PB_CANCEL,0,322,15,0,0,0,"Quit",44,"Segoe UI",8,0);
/*     Add control PB_OK                                                  */
    wDlgAddPushButton(*window,ID_W_CNX_PB_OK,0,233,15,81,0,0,"Connection",44,"Segoe UI",8,0);
/*     Add control ST_TOKEN                                               */
    wDlgAddStaticText(*window,ID_W_CNX_ST_TOKEN,0,45,78,39,13,
      NS_ST_LEFT | NS_ST_MNEMONIC | NS_ST_ERASERECT | NS_ST_AUTOSIZE,"Token :",35,16,"Segoe UI",8,0);
/*     Add control ST_USERNAME                                            */
    wDlgAddStaticText(*window,ID_W_CNX_ST_USERNAME,0,45,109,61,13,
      NS_ST_LEFT | NS_ST_MNEMONIC | NS_ST_ERASERECT | NS_ST_AUTOSIZE,"Username : ",35,16,"Segoe UI",8,0);
/* Add controls map-in if required                                        */
/* Minimize/Maximize window if necessary                                  */
/* Enable user events from now                                            */
    wSetCBack2 (*window, t_cgW_CNX);
/* Initialize template controls                                           */
/* Add Window initialization script                                       */
    wCallBack(*window,0,NS_MSG_INIT,Parm1,Parm2);
    if (*window == NS_NULL) return;
/* Add controls initialization scripts                                    */
    {
    register NS_INTEGER i;
    for (i = 0; i < 7; i++)
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
        wSetFocus(*window,ID_W_CNX_EF_USERNAME);
        wShow(*window,0);
    }
    else
        wDlgSetCurItem(*window,ID_W_CNX_EF_USERNAME);
}

#if defined(WINDOWS) && !defined(WINDLL)
void NS_EXPENTRY t_dW_CNX
  (NS_PHWND wnd, NS_HWND father, NS_LONG style, NS_BOOL visible, NS_PINT ID, NS_PTR Parm1, NS_PTR Parm2)
{
    dW_CNX(wnd,father,style,visible,ID,Parm1,Parm2);
}
#endif
NS_FN(void) dW_CNX(NS_PHWND wnd, NS_HWND father, NS_LONG style, NS_BOOL visible, NS_PINT ID, NS_PTR Parm1, NS_PTR Parm2)
{
/* Open Window with its child controls                                    */
    oW_CNX(wnd,father,style|NS_WS_SECONDARY,visible,Parm1,Parm2);
    if (*wnd == NS_NULL) return;
/* Process the window                                                     */
    wProcess(*wnd, ID);
/* Close the window                                                       */
    wCloseWindow(*wnd);
}


NS_INTEGER NS_EXPENTRY t_cgW_CNX(NS_HWND wnd,NS_INTEGER ID,NS_INTEGER msg,NS_PTR parm1,NS_PTR parm2)
{
    return cgW_CNX(wnd,ID,msg,parm1,parm2);
}
NS_FN(NS_INTEGER) cgW_CNX(NS_HWND wnd,NS_INTEGER ID,NS_INTEGER msg,NS_PTR parm1,NS_PTR parm2)
{
    NS_CHAR tmp[538];
    if (msg == NS_MSG_GETUSREVT) {
        return 0;
    }
    if (msg == NS_MSG_GETLAST)
        return 106;
    if (msg == NS_MSG_GETNAME) {
        switch (ID) {
            case 0:
                wStrCpy(*(NS_PCHAR *)parm1,"W_CNX");
                return 0;
            case ID_W_CNX_CHK_REMEMBER:
                wStrCpy(*(NS_PCHAR *)parm1,"CHK_REMEMBER");
                return 0;
            case ID_W_CNX_EF_TOKEN:
                wStrCpy(*(NS_PCHAR *)parm1,"EF_TOKEN");
                return 0;
            case ID_W_CNX_EF_USERNAME:
                wStrCpy(*(NS_PCHAR *)parm1,"EF_USERNAME");
                return 0;
            case ID_W_CNX_PB_CANCEL:
                wStrCpy(*(NS_PCHAR *)parm1,"PB_CANCEL");
                return 0;
            case ID_W_CNX_PB_OK:
                wStrCpy(*(NS_PCHAR *)parm1,"PB_OK");
                return 0;
            case ID_W_CNX_ST_TOKEN:
                wStrCpy(*(NS_PCHAR *)parm1,"ST_TOKEN");
                return 0;
            case ID_W_CNX_ST_USERNAME:
                wStrCpy(*(NS_PCHAR *)parm1,"ST_USERNAME");
                return 0;
        }
    }
    switch (ID) {
        case 0:
            switch (msg) {
                case NS_MSG_INIT: {
                    NS_CHAR szREMEMBER[256];
                    NS_LONG iRET;
                    NS_CHAR szERR[256];
                    NS_LONG iERR;
                    NS_CHAR szUSERNAME[256];
                    SEG_NSDGIT_CTX * CTX;
                    NS_CHAR szTOKEN[256];
                    wLogInfo(cszC_LOG_NSDGIT,wDSCatS(NS_NULL,(NS_tDynStr)&cdd0,(NS_tDynStr)&cdd1));
                    iERR= 0L;
                    wStrCpy(szERR,"");
                    iRET= 0L;
                    CTX= wMemNew(0,(NS_LONG)sizeof(SEG_NSDGIT_CTX),"");
                    wSetUser(wnd,3,CTX);
                    (*CTX).WND.P_PATH_GIT= NS_NULL;
                    (*CTX).WND.P_MDI= NS_NULL;
                    (*CTX).WND.P_REMOTE= NS_NULL;
                    (*CTX).WND.P_CNX= wnd;
                    wStrCpy((*CTX).USER.szTOKEN,"");
                    wStrCpy((*CTX).USER.szUSERNAME,"");
                    FEXPAND((*CTX).FILE.szRACINE,"");
                    (*CTX).INI.iH_CONNEXION= IniMgrCreateCtx();
                    if (((*CTX).INI.iH_CONNEXION==0L)) {
                        iERR= (NS_LONG)ciC_ERR_NO_INI_CTX;
                        iERR= 0;
                    }
                    (*CTX).iERR= 0L;
                    wStrCpy((*CTX).szERR,"");
                    if ((iERR==0L)) {
                        iRET= (NS_LONG)IniMgrLoad((*CTX).INI.iH_CONNEXION,wStrCat2(tmp,256,(*CTX).FILE.szRACINE,
"ini\\user.ini"));
                        if ((iRET!=0L)) {
                            iERR= iRET;
                            wStrCat2(szERR,256,"Erreur lors du chargement de .\\ini\\user.ini :",wI2S(tmp,iERR));
                        }
                    }
                    if ((iERR==0L)) {
                        iRET= (NS_LONG)IniMgrGetItem((*CTX).INI.iH_CONNEXION,"connection","username",(NS_PCHAR)
                          szUSERNAME,(NS_INT)(NS_LONG)sizeof(NS_CHAR[256]));
                        if ((iRET==(NS_LONG)NS_FALSE)) {
                        } else {
                            wSetText(wnd,ID_W_CNX_EF_USERNAME,NS_MAXINT,szUSERNAME);
                        }
                    }
                    if ((iERR==0L)) {
                        iRET= (NS_LONG)IniMgrGetItem((*CTX).INI.iH_CONNEXION,"connection","token",(NS_PCHAR)szTOKEN,
                          (NS_INT)(NS_LONG)sizeof(NS_CHAR[256]));
                        if ((iRET==(NS_LONG)NS_FALSE)) {
                        } else {
                            wSetText(wnd,ID_W_CNX_EF_TOKEN,NS_MAXINT,szTOKEN);
                        }
                    }
                    if ((iERR==0L)) {
                        iRET= (NS_LONG)IniMgrGetItem((*CTX).INI.iH_CONNEXION,"connection","remember",(NS_PCHAR)
                          szREMEMBER,(NS_INT)(NS_LONG)sizeof(NS_CHAR[256]));
                        if ((iRET==(NS_LONG)NS_FALSE)) {
                        } else {
                            if ((wStrCmp(szREMEMBER,"1")==0)) {
                                wSetText(wnd,ID_W_CNX_CHK_REMEMBER,NS_MAXINT,wI2S(tmp,(NS_LONG)NS_TRUE));
                            }
                            else if ((wStrCmp(szREMEMBER,"0")==0)) {
                                wSetText(wnd,ID_W_CNX_CHK_REMEMBER,NS_MAXINT,wI2S(tmp,(NS_LONG)NS_FALSE));
                            } else {
                                iERR= (NS_LONG)ciC_ERR_WRONG_FORMAT;
                                wStrCpy(szERR,"La clef remember du fichier .ini a un format non prit en compte.");
                            }
                        }
                    }
                    if ((iERR!=0L)) {
                        wMessage (wnd,wStrCatN(tmp,282,5,"Erreur :",NS_cSzSpc,"E.W_CNX.INIT(90)",NS_cSzSpc,wI2S(tmp+282,
                          iERR)),szERR);
                    }
                    wLogInfo(cszC_LOG_NSDGIT,wDSCatS(NS_NULL,(NS_tDynStr)&cdd2,(NS_tDynStr)&cdd3));
                    return 0;
                }
                case NS_MSG_TERMINATE: {
                    return 0;
                    }
                case NS_MSG_HELP: {
                    HLPOPEN(wnd,"W_CNX");
                    return 0;
                }
            }
            break;
        case ID_W_CNX_CHK_REMEMBER:
            switch (msg) {
                case NS_MSG_HELP: {
                    HLPOPEN(wnd,"W_CNX__CHK_REMEMBER");
                    return 0;
                }
            }
            break;
        case ID_W_CNX_EF_TOKEN:
            switch (msg) {
                case NS_MSG_HELP: {
                    HLPOPEN(wnd,"W_CNX__EF_TOKEN");
                    return 0;
                }
            }
            break;
        case ID_W_CNX_EF_USERNAME:
            switch (msg) {
                case NS_MSG_HELP: {
                    HLPOPEN(wnd,"W_CNX__EF_USERNAME");
                    return 0;
                }
            }
            break;
        case ID_W_CNX_PB_CANCEL:
            switch (msg) {
                case NS_MSG_EXECUTED: {
                    wDismissOrCloseWindow(wnd,0);
                    return 0;
                }
                case NS_MSG_HELP: {
                    HLPOPEN(wnd,"W_CNX__PB_CANCEL");
                    return 0;
                }
            }
            break;
        case ID_W_CNX_PB_OK:
            switch (msg) {
                case NS_MSG_EXECUTED:
                    if (wDlgCheck1(wnd,ID_W_CNX_PB_OK,100,106)) {
                        wHide((NS_HWND)wnd,0);
                        {
                            NS_INT ID1;
                            NS_HWND wnd1;
dW_PATH_GIT((NS_PHWND)&wnd1,wnd,NS_WS_SECONDARY,(NS_BOOL)NS_TRUE,(NS_PINT)&ID1,wGetUser(wnd,3),0);
                        }
                    }
                    return 0;
                case NS_MSG_HELP: {
                    HLPOPEN(wnd,"W_CNX__PB_OK");
                    return 0;
                }
            }
            break;
    }
    return NS_DEFRET;
}

struct {
    NS_PVOID     Next;
    NS_PROTOTYPE Table[5];
} sNSDGIT = {
    NS_NULL,
#if defined(WINDOWS) && !defined(WINDLL)
    "MDI",(NS_PVOID)t_oMDI,(NS_PVOID)t_dMDI,
    "W_CNX",(NS_PVOID)t_oW_CNX,(NS_PVOID)t_dW_CNX,
    "W_PATH_GIT",(NS_PVOID)t_oW_PATH_GIT,(NS_PVOID)t_dW_PATH_GIT,
    "W_REMOTE",(NS_PVOID)t_oW_REMOTE,(NS_PVOID)t_dW_REMOTE,
#else
    "MDI",(NS_PVOID)oMDI,(NS_PVOID)dMDI,
    "W_CNX",(NS_PVOID)oW_CNX,(NS_PVOID)dW_CNX,
    "W_PATH_GIT",(NS_PVOID)oW_PATH_GIT,(NS_PVOID)dW_PATH_GIT,
    "W_REMOTE",(NS_PVOID)oW_REMOTE,(NS_PVOID)dW_REMOTE,
#endif
    NS_NULL,NS_NULL,NS_NULL};
/* Main program entry                                                     */
#if (defined(WINDOWS) || (defined(WIN32)) || defined(WIN64)) && !defined(WINCHAR)
int NS_MAIN WinMain(unsigned hInstance, unsigned hPrevInstance, char *lpCmdLine, int nCmdShow)
#else
int main(int argc, char *argv[], char *env[])
#endif
{
#if defined(WINDOWS) && !defined(NO_NSVBX)
    extern NS_INT _NSVBXUsed;
#endif
    NS_HWND wndMain;
#if (!defined(WINDOWS) && !defined(WIN32)) && !defined(WIN64) || defined(WINCHAR)
    struct {
        int _size;
        int _argc;
        char **_argv;
        char **_env;
    } sCmdLine;

    sCmdLine._size = sizeof(sCmdLine);
    sCmdLine._argc = argc;
    sCmdLine._argv = argv;
    sCmdLine._env  = env;
#endif
/* Initialize window manager                                              */
#if defined(WINDOWS) && !defined(NO_NSVBX)
    if (&_NSVBXUsed)
#endif
#if (!defined(WINDOWS) && !defined(WIN32)) && !defined(WIN64) || defined(WINCHAR)
    wInitialize2(NS_FALSE, (NS_PVOID)&sNSDGIT, (NS_PVOID)&sCmdLine);
#else
    wInitialize2(NS_FALSE, (NS_PVOID)&sNSDGIT, NS_NULL);
#endif
    wSetCharSet (1);
    wSetMainWindow(NS_NULL);
/* Initialize traces, sequences, memory debug...                          */
    THINGS_INITIALIZE_NSDK("");
/* Open primary window                                                    */
    oW_CNX(&wndMain, NS_NULL, 0L, NS_TRUE,0L,0L);
/* Enter the events loop                                                  */
    wExecute();
/* Call Memory trace                                                      */
    wTerminateMem();
/* Terminates traces, sequences,                                          */
    THINGS_TERMINATE_NSDK();
/* Close all opened objects before leaving                                */
    wTerminate1();
/* Return with ERRORLEVEL set to NS_SUCCESS                               */
    return NS_SUCCESS;
}

