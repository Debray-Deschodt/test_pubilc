/*SEGMENT_CODE_ONLY                                                       */
/**************************************************************************/
/*                                                                        */
/* Module NSDYNSTR                                                        */
/*                                                                        */
/* Program generated with Nat System Code Generator version 12.00         */
/* Copyright (C) 1990-2019 Nat System. All Rights Reserved.               */
/*                                                                        */
/**************************************************************************/

#include "nslib.h"

#define ds_NSDYNSTR
#include "nsdynstr.h"
#include "ns_patch.h"

/*                                                                        */
/* Library NSDYNSTR                                                       */
/*                                                                        */
/* Segment SEG_DSDO_ENUMDS constructor                                    */
NS_FN(NS_VOID) ctorSEG_DSDO_ENUMDS(SEG_DSDO_ENUMDS* p, NS_UINT cnt)
{
    if (cnt==0u)
        cnt=1u;
    for(;cnt!=0u;--cnt)
    {
        p->DS=NS_cdsNull;
        p++;
    }
}

/* Segment SEG_DSDO_ENUMDS destructor                                     */
NS_FN(NS_VOID) dtorSEG_DSDO_ENUMDS(SEG_DSDO_ENUMDS* p, NS_UINT cnt)
{
    if (cnt==0u)
        cnt=1u;
    for(;cnt!=0u;--cnt)
    {
        wDSRelease1(&p->DS);
        p++;
    }
}

/* Segment SEG_DSDO_ENUMDS DynStr use count incrementor                   */
NS_FN(NS_VOID) incrUseSEG_DSDO_ENUMDS(SEG_DSDO_ENUMDS* p, NS_UINT cnt)
{
    if (cnt==0u)
        cnt=1u;
    for(;cnt!=0u;--cnt)
    {
        wDSIncrUse1(&p->DS);
        p++;
    }
}

/*segment SEG_DSDO_ENUMDScopy                                             */
NS_VOID cpySEG_DSDO_ENUMDS(SEG_DSDO_ENUMDS* pSrc, SEG_DSDO_ENUMDS* pTrg, NS_UINT cnt)
{
    if (pTrg!=pSrc)
    {
        incrUseSEG_DSDO_ENUMDS(pSrc,cnt);
        dtorSEG_DSDO_ENUMDS(pTrg,cnt);
        if (cnt<=1u)
            cnt=sizeof(SEG_DSDO_ENUMDS);
        else
            cnt*=sizeof(SEG_DSDO_ENUMDS);
        wMov(pSrc,pTrg,cnt);
    }
}

