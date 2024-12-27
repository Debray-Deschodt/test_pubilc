/**************************************************************************/
/*                                                                        */
/* Module W_PATH_GIT                                                      */
/*                                                                        */
/* Program generated with Nat System Code Generator version 12.00         */
/* Copyright (C) 1990-2019 Nat System. All Rights Reserved.               */
/*                                                                        */
/**************************************************************************/

#include "nslib.h"

#define ds_W_PATH_GIT
#include "ncllogr.h"
#include "nsdgit_lb.h"
#include "pictbut.h"
#include "w_remote.h"
#include "w_path_git.h"
#include "ns_patch.h"
static const NS_CHAR cSz0[21]="E.W_PATH_GIT.INIT(3)";
static const NS_tDynData cdd0=NSMkCstDynData(cSz0);
static const NS_CHAR cSz3[4]="end";
static const NS_tDynData cdd3=NSMkCstDynData(cSz3);
static const NS_CHAR cSz2[21]="E.W_PATH_GIT.INIT(8)";
static const NS_tDynData cdd2=NSMkCstDynData(cSz2);
static const NS_CHAR cSz1[6]="begin";
static const NS_tDynData cdd1=NSMkCstDynData(cSz1);
static const NS_CHAR cSz4[12]="install git";
static const NS_tDynData cdd4=NSMkCstDynData(cSz4);
static const NS_CHAR cSz6[31]="E.W_PATH_GIT.PB_OK.EXECUTED(8)";
static const NS_tDynData cdd6=NSMkCstDynData(cSz6);
static const NS_CHAR cSz5[31]="E.W_PATH_GIT.PB_OK.EXECUTED(3)";
static const NS_tDynData cdd5=NSMkCstDynData(cSz5);

/*                                                                        */
/* Routines associated with window W_PATH_GIT                             */
/*                                                                        */
#if defined(WINDOWS) && !defined(WINDLL)
void NS_EXPENTRY t_oW_PATH_GIT
  (NS_PHWND window, NS_HWND father, NS_LONG style, NS_BOOL visible, NS_PTR Parm1, NS_PTR Parm2)
{
    oW_PATH_GIT(window,father,style,visible,Parm1,Parm2);
}
#endif
NS_FN(void) oW_PATH_GIT(NS_PHWND window, NS_HWND father, NS_LONG style, NS_BOOL visible, NS_PTR Parm1, NS_PTR Parm2)
{
/* Static variables definition                                            */
    static NS_DEVICE Device = {1920,1080,6,16,8,8,8,8,1,1,23,20,
32,32};
/* First, create window                                                   */
    wDlgOpenWindow(
        window,
        father,
        "NSDGIT  -  git",
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
        ID_W_PATH_GIT_PB_OK,
        ID_W_PATH_GIT_PB_CANCEL);
    if (*window == NS_NULL) return;
/* Specify device coordinates                                             */
    wDlgSetDevice(*window,(NS_PDEVICE)&Device);
/* Next, set window original position                                     */
    wDlgSetWindowPos(*window, -1, -1, 494,158);
/* Global variable initialization                                         */
    ID_vW_PATH_GIT = 6;
/* Add controls                                                           */
/*     Add control EF_PATH                                                */
    wDlgAddEntryField(*window,ID_W_PATH_GIT_EF_PATH,0,83,71,303,31,
      NS_EF_LEFT | NS_EF_MARGIN | NS_EF_AUTOSCROLL | NS_EF_BELOW,NS_NULL,NS_NULL,17,16,"Segoe UI",8,0);
/*     Add control PB_CANCEL                                              */
    wDlgAddPushButton(*window,ID_W_PATH_GIT_PB_CANCEL,0,122,15,0,0,0,"Quit",44,"Segoe UI",8,0);
/*     Add control PB_INSTALL                                             */
    wDlgAddPushButton(*window,ID_W_PATH_GIT_PB_INSTALL,0,370,15,0,0,0,"Install Git",44,"Segoe UI",8,0);
/*     Add control PB_OK                                                  */
    wDlgAddPushButton(*window,ID_W_PATH_GIT_PB_OK,0,41,15,0,0,0,"Ok",44,"Segoe UI",8,0);
/*     Add control PB_SEARCH                                              */
    ID_vW_PATH_GIT_PB_SEARCH = ID_vW_PATH_GIT;
    ID_vW_PATH_GIT = (NS_INT)(ID_vW_PATH_GIT + otPICTBUT_NSDGIT(*window,ID_vW_PATH_GIT_PB_SEARCH,0,396,66));
/*     Add control ST_PATH                                                */
    wDlgAddStaticText(*window,ID_W_PATH_GIT_ST_PATH,0,41,76,30,13,
      NS_ST_LEFT | NS_ST_MNEMONIC | NS_ST_ERASERECT | NS_ST_AUTOSIZE,"Path :",35,16,"Segoe UI",8,0);
/* Add controls map-in if required                                        */
/* Minimize/Maximize window if necessary                                  */
/* Enable user events from now                                            */
    wSetCBack2 (*window, t_cgW_PATH_GIT);
/* Initialize template controls                                           */
    {
        static unsigned char aCCAB1[1254] = {
             66, 77,230,  4,  0,  0,  0,  0,  0,  0, 54,  0,  0,  0, 40,  0,
              0,  0, 20,  0,  0,  0, 20,  0,  0,  0,  1,  0, 24,  0,  0,  0,
              0,  0,  0,  0,  0,  0,195, 14,  0,  0,195, 14,  0,  0,  0,  0,
              0,  0,  0,  0,  0,  0,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,  0,  0,  0, 55, 50,
             71,  0,  0,  0,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,  0,  0,  0, 14, 13,107, 29, 26, 99, 57, 57, 69,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,  0,  0,  0,
              0,  0, 91, 27, 21,143, 17, 17, 70,  0,  0,  0,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,203,204,204,204,
            203,203,203,204,204,204,  0,  0,  0,  0,  0, 82, 29, 21,140,  9,
              6, 81,  0,  0,  0,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            203,203,202,203,203,202,202,202,200,202,201,198,200,200,196,  1,
              1,  1,  4,  8, 62, 17, 21,134, 11, 11, 90,  0,  0,  0,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,203,203,203,  2,  2,  1,  9,  9,  3, 23,
             24, 13, 43, 43, 27, 38, 39, 20, 29, 32, 16, 19, 16, 71, 33, 27,
            124,  9,  9, 83,  0,  0,  0,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,203,
            203,203,  4,  4,  2, 23, 23, 10,194,192, 47,189,189, 36,185,180,
             40,170,163, 50, 84, 92, 48, 54, 51, 89,  1,  1,  1,  0,  0,  0,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,  0,  0,  0, 25, 17,
             41,104,100, 37,159,156, 84,169,161, 97,173,157, 92,158,143, 66,
            132,132, 37,112, 96, 80,  6,  5,  5,202,202,202,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,  0,  0,  0, 50, 37, 43,121,112, 71,
            156,167, 84,198,204,128,205,208,141,189,192,126,150,156, 85, 99,
             90, 52,  9,  6,  5,200,200,200,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,  0,  0,  0, 88, 77, 56,133,131, 78,175,185,124,214,
            219,153,211,212,136,189,184, 93,139,136, 70, 67, 73, 40,  9,  9,
              6,199,199,199,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,  2,
              2,  2,131, 90, 73,157,150,101,220,217,199,227,222,207,231,225,
            211,195,183,146,136,130, 61,140,122, 79, 13, 11,  8,202,202,202,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,  2,  2,  2, 64, 19,
             19,176,166,127,227,230,208,231,233,206,238,238,220,207,209,177,
            160,168,101, 83, 59, 30,  2,  1,  1,203,203,203,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,  9,  9,  9, 89, 84, 65,
            191,199,159,235,238,202,231,230,192,179,175,130, 69, 74, 45,  4,
              4,  3,203,203,203,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204, 15, 15, 15, 81, 67, 49,144,
            125,102,147,118, 91, 94, 56, 35,  6,  6,  6,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,  9,  9,  9, 14, 14, 14, 11, 11,
             11,  6,  6,  6,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204};
        static unsigned char aCCAB2[1254] = {
             66, 77,230,  4,  0,  0,  0,  0,  0,  0, 54,  0,  0,  0, 40,  0,
              0,  0, 20,  0,  0,  0, 20,  0,  0,  0,  1,  0, 24,  0,  0,  0,
              0,  0,  0,  0,  0,  0,195, 14,  0,  0,195, 14,  0,  0,  0,  0,
              0,  0,  0,  0,  0,  0,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,  0,  0,  0, 55, 50,
             71,  0,  0,  0,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,  0,  0,  0, 14, 13,107, 29, 26, 99, 57, 57, 69,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,  0,  0,  0,
              0,  0, 91, 27, 21,143, 17, 17, 70,  0,  0,  0,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,203,204,204,204,
            203,203,203,204,204,204,  0,  0,  0,  0,  0, 82, 29, 21,140,  9,
              6, 81,  0,  0,  0,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            203,203,202,203,203,202,202,202,200,202,201,198,200,200,196,  1,
              1,  1,  4,  8, 62, 17, 21,134, 11, 11, 90,  0,  0,  0,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,203,203,203,  2,  2,  1,  9,  9,  3, 23,
             24, 13, 43, 43, 27, 38, 39, 20, 29, 32, 16, 19, 16, 71, 33, 27,
            124,  9,  9, 83,  0,  0,  0,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,203,
            203,203,  4,  4,  2, 23, 23, 10,194,192, 47,189,189, 36,185,180,
             40,170,163, 50, 84, 92, 48, 54, 51, 89,  1,  1,  1,  0,  0,  0,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,  0,  0,  0, 25, 17,
             41,104,100, 37,159,156, 84,169,161, 97,173,157, 92,158,143, 66,
            132,132, 37,112, 96, 80,  6,  5,  5,202,202,202,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,  0,  0,  0, 50, 37, 43,121,112, 71,
            156,167, 84,198,204,128,205,208,141,189,192,126,150,156, 85, 99,
             90, 52,  9,  6,  5,200,200,200,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,  0,  0,  0, 88, 77, 56,133,131, 78,175,185,124,214,
            219,153,211,212,136,189,184, 93,139,136, 70, 67, 73, 40,  9,  9,
              6,199,199,199,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,  2,
              2,  2,131, 90, 73,157,150,101,220,217,199,227,222,207,231,225,
            211,195,183,146,136,130, 61,140,122, 79, 13, 11,  8,202,202,202,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,  2,  2,  2, 64, 19,
             19,176,166,127,227,230,208,231,233,206,238,238,220,207,209,177,
            160,168,101, 83, 59, 30,  2,  1,  1,203,203,203,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,  9,  9,  9, 89, 84, 65,
            191,199,159,235,238,202,231,230,192,179,175,130, 69, 74, 45,  4,
              4,  3,203,203,203,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204, 15, 15, 15, 81, 67, 49,144,
            125,102,147,118, 91, 94, 56, 35,  6,  6,  6,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,  9,  9,  9, 14, 14, 14, 11, 11,
             11,  6,  6,  6,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,204,
            204,204,204,204,204,204};
        struct tagCCABItems {
            NS_PVOID pData;
            NS_LONG  lSize;
        };
        struct tagCCAB {
            NS_DFN(NS_PCHAR, Xlat)(NS_PCHAR pszFName);
            NS_LONG  lCount;
            struct tagCCABItems aCCABItems[2];
        } CCABs = {
            NS_NULL, 2, {
                { aCCAB1, sizeof(aCCAB1) },
                { aCCAB2, sizeof(aCCAB2) }
            }
        };
        struct tagCCABAndCtxStr {
            struct tagCCAB* pCCAB;
            NS_CHAR                szContext[63];
        } CCABAndCtxStr = {
            &CCABs,
            
"'' @-1 0 0 0 0 0 0 NULL CCAFBMPS FONT 'Segoe UI' 8 0 1 0 0 0"
        };
        wGrantCCDataBuffersAccess(*window,ID_W_PATH_GIT_PB_SEARCH);
        cgtPICTBUT_NSDGIT(*window,0,ID_W_PATH_GIT_PB_SEARCH,ID_vW_PATH_GIT_PB_SEARCH,NS_MSG_INITCONTEXT,(NS_PTR)
      CCABAndCtxStr.szContext,(NS_PTR)2162734);
    }
/* Add Window initialization script                                       */
    wCallBack(*window,0,NS_MSG_INIT,Parm1,Parm2);
    if (*window == NS_NULL) return;
/* Add controls initialization scripts                                    */
    {
    register NS_INTEGER i;
    for (i = 0; i < ID_vW_PATH_GIT; i++)
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
        wSetFocus(*window,ID_W_PATH_GIT_EF_PATH);
        wShow(*window,0);
    }
    else
        wDlgSetCurItem(*window,ID_W_PATH_GIT_EF_PATH);
}

#if defined(WINDOWS) && !defined(WINDLL)
void NS_EXPENTRY t_dW_PATH_GIT
  (NS_PHWND wnd, NS_HWND father, NS_LONG style, NS_BOOL visible, NS_PINT ID, NS_PTR Parm1, NS_PTR Parm2)
{
    dW_PATH_GIT(wnd,father,style,visible,ID,Parm1,Parm2);
}
#endif
NS_FN(void) dW_PATH_GIT
  (NS_PHWND wnd, NS_HWND father, NS_LONG style, NS_BOOL visible, NS_PINT ID, NS_PTR Parm1, NS_PTR Parm2)
{
/* Open Window with its child controls                                    */
    oW_PATH_GIT(wnd,father,style|NS_WS_SECONDARY,visible,Parm1,Parm2);
    if (*wnd == NS_NULL) return;
/* Process the window                                                     */
    wProcess(*wnd, ID);
/* Close the window                                                       */
    wCloseWindow(*wnd);
}


NS_INTEGER NS_EXPENTRY t_cgW_PATH_GIT(NS_HWND wnd,NS_INTEGER ID,NS_INTEGER msg,NS_PTR parm1,NS_PTR parm2)
{
    return cgW_PATH_GIT(wnd,ID,msg,parm1,parm2);
}
NS_FN(NS_INTEGER) cgW_PATH_GIT(NS_HWND wnd,NS_INTEGER ID,NS_INTEGER msg,NS_PTR parm1,NS_PTR parm2)
{
    if (msg == NS_MSG_GETUSREVT) {
        switch (ID) {
            case ID_W_PATH_GIT_PB_SEARCH: {
                register NS_INTEGER m;
                m = cgtPICTBUT_NSDGIT(wnd,0,ID_W_PATH_GIT_PB_SEARCH,ID_vW_PATH_GIT_PB_SEARCH,msg,parm1,parm2);
                if (m != 0)
                    return m | NS_MSG_PRIVATE;
                else
                    return 0;
            }
        }
        if (ID < (100+ID_vW_PATH_GIT)) {
            if (ID >= (100+ID_vW_PATH_GIT_PB_SEARCH))
                return cgtPICTBUT_NSDGIT(wnd,ID-ID_vW_PATH_GIT_PB_SEARCH,ID_W_PATH_GIT_PB_SEARCH,ID_vW_PATH_GIT_PB_SEARCH,msg,parm1,parm2);
        }
        return 0;
    }
    if (msg == NS_MSG_GETLAST)
        if( ID == 0 ) return (100+ID_vW_PATH_GIT-1);
    if (msg == NS_MSG_GETNAME) {
        switch (ID) {
            case 0:
                wStrCpy(*(NS_PCHAR *)parm1,"W_PATH_GIT");
                return 0;
            case ID_W_PATH_GIT_EF_PATH:
                wStrCpy(*(NS_PCHAR *)parm1,"EF_PATH");
                return 0;
            case ID_W_PATH_GIT_PB_CANCEL:
                wStrCpy(*(NS_PCHAR *)parm1,"PB_CANCEL");
                return 0;
            case ID_W_PATH_GIT_PB_INSTALL:
                wStrCpy(*(NS_PCHAR *)parm1,"PB_INSTALL");
                return 0;
            case ID_W_PATH_GIT_PB_OK:
                wStrCpy(*(NS_PCHAR *)parm1,"PB_OK");
                return 0;
            case ID_W_PATH_GIT_PB_SEARCH:
                wStrCpy(*(NS_PCHAR *)parm1,"PB_SEARCH");
                return 0;
            case ID_W_PATH_GIT_ST_PATH:
                wStrCpy(*(NS_PCHAR *)parm1,"ST_PATH");
                return 0;
        }
    }
    switch (ID) {
        case 0:
            switch (msg) {
                case NS_MSG_INIT: {
                    SEG_NSDGIT_CTX * CTX;
                    wLogInfo(cszC_LOG_NSDGIT,wDSCatS(NS_NULL,(NS_tDynStr)&cdd0,(NS_tDynStr)&cdd1));
                    CTX=&(*(SEG_NSDGIT_CTX*)parm1);
                    wSetUser(wnd,3,CTX);
                    wLogInfo(cszC_LOG_NSDGIT,wDSCatS(NS_NULL,(NS_tDynStr)&cdd2,(NS_tDynStr)&cdd3));
                    return 0;
                }
                case NS_MSG_TERMINATE: {
                    wCallBack(wnd,ID_W_PATH_GIT_PB_SEARCH,NS_MSG_TERMINATE,parm1,parm2);
                    cgtPICTBUT_NSDGIT(wnd,ID,ID_W_PATH_GIT_PB_SEARCH,ID_vW_PATH_GIT_PB_SEARCH,NS_MSG_TERMINATECONTEXT,
                      parm1,parm2);
                    return 0;
                    }
                case NS_MSG_HELP: {
                    HLPOPEN(wnd,"W_PATH_GIT");
                    return 0;
                }
            }
            break;
        case ID_W_PATH_GIT_EF_PATH:
            switch (msg) {
                case NS_MSG_HELP: {
                    HLPOPEN(wnd,"W_PATH_GIT__EF_PATH");
                    return 0;
                }
            }
            break;
        case ID_W_PATH_GIT_PB_CANCEL:
            switch (msg) {
                case NS_MSG_EXECUTED: {
                    SEG_NSDGIT_CTX * CTX;
                    CTX=&(*(SEG_NSDGIT_CTX*)wGetUser(wnd,3));
                    wShow((NS_HWND)(NS_HWND)(*CTX).WND.P_CNX,0);
                    wSetFocus((NS_HWND)(NS_HWND)(*CTX).WND.P_CNX,0);
                    wDismissOrCloseWindow(wnd,0);
                    return 0;
                }
                case NS_MSG_HELP: {
                    HLPOPEN(wnd,"W_PATH_GIT__PB_CANCEL");
                    return 0;
                }
            }
            break;
        case ID_W_PATH_GIT_PB_INSTALL:
            switch (msg) {
                case NS_MSG_EXECUTED:
                    if (wDlgCheck1(wnd,ID_W_PATH_GIT_PB_INSTALL,100,100+ID_vW_PATH_GIT-1)) {
                        wLogInfo(cszC_LOG_NSDGIT,(NS_tDynStr)&cdd4);
                    }
                    return 0;
                case NS_MSG_HELP: {
                    HLPOPEN(wnd,"W_PATH_GIT__PB_INSTALL");
                    return 0;
                }
            }
            break;
        case ID_W_PATH_GIT_PB_OK:
            switch (msg) {
                case NS_MSG_EXECUTED:
                    if (wDlgCheck1(wnd,ID_W_PATH_GIT_PB_OK,100,100+ID_vW_PATH_GIT-1)) {
                        SEG_NSDGIT_CTX * CTX;
                        wLogInfo(cszC_LOG_NSDGIT,wDSCatS(NS_NULL,(NS_tDynStr)&cdd5,(NS_tDynStr)&cdd1));
                        CTX=&(*(SEG_NSDGIT_CTX*)wGetUser(wnd,3));
                        {
                            NS_INT ID1;
                            NS_HWND wnd1;
dW_REMOTE((NS_PHWND)&wnd1,wnd,NS_WS_SECONDARY,(NS_BOOL)NS_TRUE,(NS_PINT)&ID1,0,0);
                        }
                        wLogInfo(cszC_LOG_NSDGIT,wDSCatS(NS_NULL,(NS_tDynStr)&cdd6,(NS_tDynStr)&cdd3));
                    }
                    return 0;
                case NS_MSG_HELP: {
                    HLPOPEN(wnd,"W_PATH_GIT__PB_OK");
                    return 0;
                }
            }
            break;
        case ID_W_PATH_GIT_PB_SEARCH:
            switch (msg) {
                case NS_MSG_EXECUTED: {
                    return 0;
                }
                case NS_MSG_HELP: {
                    HLPOPEN(wnd,"W_PATH_GIT__PB_SEARCH");
                    return 0;
                }
                default:
                    return cgtPICTBUT_NSDGIT(wnd,0,ID_W_PATH_GIT_PB_SEARCH,ID_vW_PATH_GIT_PB_SEARCH,
                      msg & ~NS_MSG_PRIVATE,parm1,parm2);
            }
            break;
        default:
            if (ID < (100+ID_vW_PATH_GIT)) {
                if (ID >= (100+ID_vW_PATH_GIT_PB_SEARCH))
                    return cgtPICTBUT_NSDGIT(wnd,ID-ID_vW_PATH_GIT_PB_SEARCH,ID_W_PATH_GIT_PB_SEARCH,ID_vW_PATH_GIT_PB_SEARCH,msg,parm1,parm2);
            }
    }
    return NS_DEFRET;
}

