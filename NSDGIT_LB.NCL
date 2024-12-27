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
const C_ERR_NO_INI_CTX%		 -2
const C_ERR_WRONG_FORMAT%	 -3


;*****************************;
;**			SEGMENT        	;
;*****************************;

SEGMENT SEG_NSDGIT_CTX
	 SEG_NSDGIT_WND		wnd
	 SEG_NSDGIT_USER		user
	 SEG_NSDGIT_FILE		file
	 SEG_NSDGIT_INI		ini
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

SEGMENT SEG_NSDGIT_FILE
	 racine$
ENDSEGMENT ; SEG_NSDGIT_FILE

SEGMENT SEG_NSDGIT_INI
	 h_connexion%
ENDSEGMENT ; SEG_NSDGIT_INI
