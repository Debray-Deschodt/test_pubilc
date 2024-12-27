#ifndef _NSDGIT_LB_H
#define _NSDGIT_LB_H
#ifdef __cplusplus
extern "C" {
#endif
/*                                                                        */
/* Library NSDGIT_LB                                                      */
/*                                                                        */
#ifndef _SEG_SEG_NSDGIT_INI
#define _SEG_SEG_NSDGIT_INI
typedef struct _tag_SEG_SEG_NSDGIT_INI{
    NS_LONG iH_CONNEXION;
} SEG_NSDGIT_INI;
#endif

#ifndef _SEG_SEG_NSDGIT_WND
#define _SEG_SEG_NSDGIT_WND
typedef struct _tag_SEG_SEG_NSDGIT_WND{
    NS_PTR P_REMOTE;
    NS_PTR P_PATH_GIT;
    NS_PTR P_MDI;
    NS_PTR P_CNX;
} SEG_NSDGIT_WND;
#endif

#ifndef _SEG_SEG_NSDGIT_FILE
#define _SEG_SEG_NSDGIT_FILE
typedef struct _tag_SEG_SEG_NSDGIT_FILE{
    NS_CHAR szRACINE[256];
} SEG_NSDGIT_FILE;
#endif

#ifndef _SEG_SEG_NSDGIT_USER
#define _SEG_SEG_NSDGIT_USER
typedef struct _tag_SEG_SEG_NSDGIT_USER{
    NS_CHAR szUSERNAME[256];
    NS_CHAR szTOKEN[256];
} SEG_NSDGIT_USER;
#endif

#ifndef _SEG_SEG_NSDGIT_CTX
#define _SEG_SEG_NSDGIT_CTX
typedef struct _tag_SEG_SEG_NSDGIT_CTX{
    SEG_NSDGIT_WND WND;
    SEG_NSDGIT_USER USER;
    SEG_NSDGIT_FILE FILE;
    SEG_NSDGIT_INI INI;
    NS_LONG iERR;
    NS_CHAR szERR[256];
} SEG_NSDGIT_CTX;
#endif

/* Constants (if any)                                                     */
#define ciC_ERROR_NO_CTX -1
#define cszC_LOG_NSDGIT (NS_PCHAR)"fr.natsystem.nsdgit"
#define ciC_ERR_WRONG_FORMAT -3
#define ciC_ERR_NO_INI_CTX -2

#ifdef __cplusplus
}
#endif
#endif
