; Library NSDGIT_LB.NCL
; Created 26/12/24

;*************************
;**			LOG
;*************************

const C_LOG_NSDGIT$		'fr.natsystem.nsdgit'

;*****************************;
;**			ERREUR				;
;*****************************;

const C_ERROR_NO_CTX%		 -1

;*****************************;
;**			SEGMENT        	;
;*****************************;

SEGMENT SEG_NSDGIT_CTX
	 SEG_NSDGIT_WND wnd
	 SEG_NSDGIT_USER user
	 err%
	 err$
ENDSEGMENT ; SEG_NSDGIT_CTX

SEGMENT SEG_NSDGIT_WND
	 pointer p_remote
	 pointer p_path_git
	 pointer p_mdi
	 pointer p_cnx
ENDSEGMENT ; SEG_NSDGIT_WND

SEGMENT SEG_NSDGIT_USER
	 username$
	 token$
ENDSEGMENT ; SEG_NSDGIT_USER



;|;*****************************;
;|;**			Router          	;
;|;*****************************;

;|;** permet de gerer le routing de l'application.
;|instruction NSDGIT_ROUTER pointer p_router_wnd
;|	 hide p_router_wnd
;|	 call w_install_git
;|	 call w_remote
;|	 call mdi
;|	 show p_router_wnd
;|endinstruction ; NDSGIT_ROUTER
