/**************************************************************************/
/*                                                                        */
/* Module PICTBUT                                                         */
/*                                                                        */
/* Program generated with Nat System Code Generator version 12.00         */
/* Copyright (C) 1990-2019 Nat System. All Rights Reserved.               */
/*                                                                        */
/**************************************************************************/

#include "nslib.h"

#define ds_PICTBUT
#include "pictbut.h"
#include "ns_patch.h"

/*                                                                        */
/* Routines associated with template PICTBUT                              */
/*                                                                        */
NS_DFN(NS_INTEGER,_cgtPICTBUT_NSDGIT)
  (NS_HWND wnd,NS_INTEGER ID,NS_INTEGER BaseID,NS_INTEGER OffsetID,NS_INTEGER msg,NS_PTR parm1,NS_PTR parm2);
#if defined(WINDOWS) && !defined(WINDLL)
NS_INTEGER NS_EXPENTRY t_otPICTBUT_NSDGIT
  (NS_HWND wnd,NS_INTEGER OffsetID,NS_INTEGER ControlTabID,NS_INTEGER x,NS_INTEGER y)
{
    return otPICTBUT_NSDGIT(wnd,OffsetID,ControlTabID,x,y);
}
#endif
NS_FN(NS_INTEGER) otPICTBUT_NSDGIT(NS_HWND wnd,NS_INTEGER OffsetID,NS_INTEGER ControlTabID,NS_INTEGER x,NS_INTEGER y)
{
    return wLoadTemplateInDll (wnd,OffsetID,ControlTabID,x,y,"NS02CUST","PICTBUT",(NS_PPVOID)&_cgtPICTBUT_NSDGIT);
}


#if defined(WINDOWS) && !defined(WINDLL)
NS_INTEGER NS_EXPENTRY t_cgtPICTBUT_NSDGIT
  (NS_HWND wnd,NS_INTEGER ID,NS_INTEGER BaseID,NS_INTEGER OffsetID,NS_INTEGER msg,NS_PTR parm1,NS_PTR parm2)
{
    return cgtPICTBUT_NSDGIT(wnd,ID,BaseID,OffsetID,msg,parm1,parm2);
}
#endif
NS_FN(NS_INTEGER) cgtPICTBUT_NSDGIT
  (NS_HWND wnd,NS_INTEGER ID,NS_INTEGER BaseID,NS_INTEGER OffsetID,NS_INTEGER msg,NS_PTR parm1,NS_PTR parm2)
{
    if (ID == 0 && msg == NS_MSG_EXTCTRL)
        return 0;
    else if (ID == 0 && msg == NS_MSG_GETNAME) {
        wStrCpy(*(NS_PCHAR *)parm1,"tPICTBUT");
        return 0;
        }
    else
        return _cgtPICTBUT_NSDGIT(wnd,ID,BaseID,OffsetID,msg,parm1,parm2);
}

