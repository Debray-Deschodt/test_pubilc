; Library NSDGIT_GITHUB_LB.NCL
; Created 27/12/24

;**************************************
;**			SEGEMENT
;**************************************

SEGMENT github_res
	 dynstr res
	 code_status%
	 err%
	 err$
ENDSEGMENT ; github_res


;**************************************
;**					API
;**************************************
instruction github_get_user token$, github_res@ res
	 local pointer p_http
	 local ret%, line$(1000)
	 local err%, err$

	 err% = 0
	 err$ = ''

	 res.res = ''
	 res.code_status% = 0
	 res.err$ = ''
	 res.err% = 0

	 p_http = NS_HTTP_NEW
	 NS_HTTP_CONNECT p_http, 'https://api.github.com/user'
	 if NS_HTTP_ERROR <> 0
		  err$ = NS_HTTP_GET_ERRORMSG
		  err% = NS_HTTP_ERROR
	 endif

	 if err% = 0 
		  NS_HTTP_ADDREQUESTPROPERTY p_http, 'Authorization', 'Bearer' && token$
		  NS_HTTP_ADDREQUESTPROPERTY p_http, 'Accept', 'application/vnd.github+json'
		  NS_HTTP_ADDREQUESTPROPERTY p_http, 'X-GitHub-Api-Version', '2022-11-28'
	 endif

	 if err% = 0
		  NS_HTTP_GET p_http
		  while NS_HTTP_EOF(p_http) = 0
				ret% = NS_HTTP_GETLINE(p_http,@line$,SIZEOF line$)
				if ret% = true% 
					 res.res = res.res && #10#13 && line$
				else
					 res.res = res.res && line$
				endif
		  endwhile

		  if NS_HTTP_ERROR <> 0
				err$ = NS_HTTP_GET_ERRORMSG
				err% = NS_HTTP_ERROR
		  endif
	 endif


	 ;** gestion des erreurs.
	 if err% <> 0
		  res.err% = err%
		  res.err$ = err$
	 else
		  ;res.code_status% = NS_HTTP_GET_STATUSCODE p_http
	 endif

	 NS_HTTP_DISPOSE(p_http)
endinstruction ; github_get_user

