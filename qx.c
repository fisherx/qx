#ifdef __WIN32__
#include <windows.h>
#pragma comment(lib,"q.lib")
#define EXP __declspec(dllexport)
#else
#define EXP 
#endif

#define KXVER 3
#include "k.h"
#include "gbk-utf8/utf8.c"
#define KXAPI(f) K f(K x)
 



EXP KXAPI(utf82gbk) {
	if (x->t != -KS)  R krr((S)"para_type_err(symbol_required)");
    size_t len = strlen(xs);
	
	char * sBuf=(char*)malloc(2*len);
	utf8_to_gb((const char*)xs,sBuf,2*len);
        
	K ksym = ks(ss(sBuf));
    free(sBuf);
        
	R ksym;
}

EXP KXAPI(gbk2utf8) {
	if (x->t != -KS)  R krr((S)"para_type_err(symbol_required)"); 
	
	size_t len = strlen(xs);
	
	char * sBuf =(char*)malloc(2*len);
	gb_to_utf8((const char*)xs,sBuf,2*len);
        
	K ksym = ks(ss(sBuf));
    free(sBuf);
        
	R ksym;
}