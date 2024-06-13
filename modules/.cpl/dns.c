/*-I/usr/lib/x86_64-linux-gnu/openmpi/include -I/usr/lib/x86_64-linux-gnu/openmpi/include/openmpi -L/usr/lib/x86_64-linux-gnu/openmpi/lib -lmpi */

#define _GNU_SOURCE

#define _FILE_OFFSET_BITS 64

#define _LARGE_FILES

#define printERR fprintf(stderr,"\r%s: PROGRAM HALTED  \n",errormessage);fflush(stderr)

/* #define __NO_INLINE__ ! why was it here ? */

#include <unistd.h>

#include <stdlib.h>
/*** typedef _Complex float __cfloat128 __attribute__ ((__mode__ (__TC__))) ununderstood ***/
/*** typedef __float128 _Float128 ununderstood ***/
/*** extern _Float128 strtof128 (const char *restrict __nptr,
			 char **restrict __endptr)
   ununderstood ***/
/*** extern _Float128 strtof128_l (const char *restrict __nptr,
			 char **restrict __endptr,
			 locale_t __loc)
   ununderstood ***/

#include <stdio.h>

#include <fcntl.h>

#include <math.h>
/*** enum
 {
 FP_INT_UPWARD =

 0,
 FP_INT_DOWNWARD =

 1,
 FP_INT_TOWARDZERO =

 2,
 FP_INT_TONEARESTFROMZERO =

 3,
 FP_INT_TONEAREST =

 4,
 } ununderstood ***/
/*** && !0
 / * Return 0 if VALUE is finite or NaN, +1 if it
   is +Infinity, -1 if it is -Infinity.  *  /
   extern int isinf (double __value) 
 __attribute__ ((__const__)) ununderstood ***/
/*** && !0
 / * Return nonzero if VALUE is not a number.  *  /
   extern int isnan (double __value) 
 __attribute__ ((__const__)) ununderstood ***/
/*** && !0
 / * Return 0 if VALUE is finite or NaN, +1 if it
   is +Infinity, -1 if it is -Infinity.  *  /
   extern int isinff (float __value) 
 __attribute__ ((__const__)) ununderstood ***/
/*** && !0
 / * Return nonzero if VALUE is not a number.  *  /
   extern int isnanf (float __value) 
 __attribute__ ((__const__)) ununderstood ***/
/*** && !0
 / * Return 0 if VALUE is finite or NaN, +1 if it
   is +Infinity, -1 if it is -Infinity.  *  /
   extern int isinfl (long double __value) 
 __attribute__ ((__const__)) ununderstood ***/
/*** && !0
 / * Return nonzero if VALUE is not a number.  *  /
   extern int isnanl (long double __value) 
 __attribute__ ((__const__)) ununderstood ***/
/*** && !1
 / * Return 0 if VALUE is finite or NaN, +1 if it
   is +Infinity, -1 if it is -Infinity.  *  /
   extern int isinff32 (_Float32 __value) 
 __attribute__ ((__const__)) ununderstood ***/
/*** && !1
 / * Return nonzero if VALUE is not a number.  *  /
   extern int isnanf32 (_Float32 __value) 
 __attribute__ ((__const__)) ununderstood ***/
/*** && !1
 / * Return 0 if VALUE is finite or NaN, +1 if it
   is +Infinity, -1 if it is -Infinity.  *  /
   extern int isinff64 (_Float64 __value) 
 __attribute__ ((__const__)) ununderstood ***/
/*** && !1
 / * Return nonzero if VALUE is not a number.  *  /
   extern int isnanf64 (_Float64 __value) 
 __attribute__ ((__const__)) ununderstood ***/
/*** extern _Float128 acosf128 (_Float128 __x)  ununderstood ***/
/*** extern _Float128 __acosf128 (_Float128 __x)  ununderstood ***/
/*** extern _Float128 asinf128 (_Float128 __x)  ununderstood ***/
/*** extern _Float128 __asinf128 (_Float128 __x)  ununderstood ***/
/*** extern _Float128 atanf128 (_Float128 __x)  ununderstood ***/
/*** extern _Float128 __atanf128 (_Float128 __x)  ununderstood ***/
/*** extern _Float128 atan2f128 (_Float128 __y, _Float128 __x)  ununderstood ***/
/*** extern _Float128 __atan2f128 (_Float128 __y, _Float128 __x)  ununderstood ***/
/*** extern _Float128 cosf128 (_Float128 __x)  ununderstood ***/
/*** extern _Float128 __cosf128 (_Float128 __x)  ununderstood ***/
/*** extern _Float128 sinf128 (_Float128 __x)  ununderstood ***/
/*** extern _Float128 __sinf128 (_Float128 __x)  ununderstood ***/
/*** extern _Float128 tanf128 (_Float128 __x)  ununderstood ***/
/*** extern _Float128 __tanf128 (_Float128 __x)  ununderstood ***/
/*** extern _Float128 coshf128 (_Float128 __x)  ununderstood ***/
/*** extern _Float128 __coshf128 (_Float128 __x)  ununderstood ***/
/*** extern _Float128 sinhf128 (_Float128 __x)  ununderstood ***/
/*** extern _Float128 __sinhf128 (_Float128 __x)  ununderstood ***/
/*** extern _Float128 tanhf128 (_Float128 __x)  ununderstood ***/
/*** extern _Float128 __tanhf128 (_Float128 __x)  ununderstood ***/
/*** extern _Float128 acoshf128 (_Float128 __x)  ununderstood ***/
/*** extern _Float128 __acoshf128 (_Float128 __x)  ununderstood ***/
/*** extern _Float128 asinhf128 (_Float128 __x)  ununderstood ***/
/*** extern _Float128 __asinhf128 (_Float128 __x)  ununderstood ***/
/*** extern _Float128 atanhf128 (_Float128 __x)  ununderstood ***/
/*** extern _Float128 __atanhf128 (_Float128 __x)  ununderstood ***/
/*** extern _Float128 expf128 (_Float128 __x)  ununderstood ***/
/*** extern _Float128 __expf128 (_Float128 __x)  ununderstood ***/
/*** extern _Float128 frexpf128 (_Float128 __x, int *__exponent)  ununderstood ***/
/*** extern _Float128 __frexpf128 (_Float128 __x, int *__exponent)  ununderstood ***/
/*** extern _Float128 ldexpf128 (_Float128 __x, int __exponent)  ununderstood ***/
/*** extern _Float128 __ldexpf128 (_Float128 __x, int __exponent)  ununderstood ***/
/*** extern _Float128 logf128 (_Float128 __x)  ununderstood ***/
/*** extern _Float128 __logf128 (_Float128 __x)  ununderstood ***/
/*** extern _Float128 log10f128 (_Float128 __x)  ununderstood ***/
/*** extern _Float128 __log10f128 (_Float128 __x)  ununderstood ***/
/*** extern _Float128 modff128 (_Float128 __x, _Float128 *__iptr)  ununderstood ***/
/*** extern _Float128 __modff128 (_Float128 __x, _Float128 *__iptr)   ununderstood ***/
/*** extern _Float128 exp10f128 (_Float128 __x)  ununderstood ***/
/*** extern _Float128 __exp10f128 (_Float128 __x)  ununderstood ***/
/*** extern _Float128 expm1f128 (_Float128 __x)  ununderstood ***/
/*** extern _Float128 __expm1f128 (_Float128 __x)  ununderstood ***/
/*** extern _Float128 log1pf128 (_Float128 __x)  ununderstood ***/
/*** extern _Float128 __log1pf128 (_Float128 __x)  ununderstood ***/
/*** extern _Float128 logbf128 (_Float128 __x)  ununderstood ***/
/*** extern _Float128 __logbf128 (_Float128 __x)  ununderstood ***/
/*** extern _Float128 exp2f128 (_Float128 __x)  ununderstood ***/
/*** extern _Float128 __exp2f128 (_Float128 __x)  ununderstood ***/
/*** extern _Float128 log2f128 (_Float128 __x)  ununderstood ***/
/*** extern _Float128 __log2f128 (_Float128 __x)  ununderstood ***/
/*** extern _Float128 powf128 (_Float128 __x, _Float128 __y)  ununderstood ***/
/*** extern _Float128 __powf128 (_Float128 __x, _Float128 __y)  ununderstood ***/
/*** extern _Float128 sqrtf128 (_Float128 __x)  ununderstood ***/
/*** extern _Float128 __sqrtf128 (_Float128 __x)  ununderstood ***/
/*** extern _Float128 hypotf128 (_Float128 __x, _Float128 __y)  ununderstood ***/
/*** extern _Float128 __hypotf128 (_Float128 __x, _Float128 __y)  ununderstood ***/
/*** extern _Float128 cbrtf128 (_Float128 __x)  ununderstood ***/
/*** extern _Float128 __cbrtf128 (_Float128 __x)  ununderstood ***/
/*** extern _Float128 ceilf128 (_Float128 __x)  __attribute__ ((__const__)) ununderstood ***/
/*** extern _Float128 __ceilf128 (_Float128 __x)  __attribute__ ((__const__)) ununderstood ***/
/*** extern _Float128 fabsf128 (_Float128 __x)  __attribute__ ((__const__)) ununderstood ***/
/*** extern _Float128 __fabsf128 (_Float128 __x)  __attribute__ ((__const__)) ununderstood ***/
/*** extern _Float128 floorf128 (_Float128 __x)  __attribute__ ((__const__)) ununderstood ***/
/*** extern _Float128 __floorf128 (_Float128 __x)  __attribute__ ((__const__)) ununderstood ***/
/*** extern _Float128 fmodf128 (_Float128 __x, _Float128 __y)  ununderstood ***/
/*** extern _Float128 __fmodf128 (_Float128 __x, _Float128 __y)  ununderstood ***/
/*** && !1
 / * Return 0 if VALUE is finite or NaN, +1 if it
   is +Infinity, -1 if it is -Infinity.  *  /
   extern int isinff128 (_Float128 __value) 
 __attribute__ ((__const__)) ununderstood ***/
/*** extern _Float128 copysignf128 (_Float128 __x, _Float128 __y)  __attribute__ ((__const__)) ununderstood ***/
/*** extern _Float128 __copysignf128 (_Float128 __x, _Float128 __y)  __attribute__ ((__const__)) ununderstood ***/
/*** extern _Float128 nanf128 (const char *__tagb)  ununderstood ***/
/*** extern _Float128 __nanf128 (const char *__tagb)  ununderstood ***/
/*** && !1
 / * Return nonzero if VALUE is not a number.  *  /
   extern int isnanf128 (_Float128 __value) 
 __attribute__ ((__const__)) ununderstood ***/
/*** extern _Float128 j0f128 (_Float128)  ununderstood ***/
/*** extern _Float128 __j0f128 (_Float128)  ununderstood ***/
/*** extern _Float128 j1f128 (_Float128)  ununderstood ***/
/*** extern _Float128 __j1f128 (_Float128)  ununderstood ***/
/*** extern _Float128 jnf128 (int, _Float128)  ununderstood ***/
/*** extern _Float128 __jnf128 (int, _Float128)  ununderstood ***/
/*** extern _Float128 y0f128 (_Float128)  ununderstood ***/
/*** extern _Float128 __y0f128 (_Float128)  ununderstood ***/
/*** extern _Float128 y1f128 (_Float128)  ununderstood ***/
/*** extern _Float128 __y1f128 (_Float128)  ununderstood ***/
/*** extern _Float128 ynf128 (int, _Float128)  ununderstood ***/
/*** extern _Float128 __ynf128 (int, _Float128)  ununderstood ***/
/*** extern _Float128 erff128 (_Float128)  ununderstood ***/
/*** extern _Float128 __erff128 (_Float128)  ununderstood ***/
/*** extern _Float128 erfcf128 (_Float128)  ununderstood ***/
/*** extern _Float128 __erfcf128 (_Float128)  ununderstood ***/
/*** extern _Float128 lgammaf128 (_Float128)  ununderstood ***/
/*** extern _Float128 __lgammaf128 (_Float128)  ununderstood ***/
/*** extern _Float128 tgammaf128 (_Float128)  ununderstood ***/
/*** extern _Float128 __tgammaf128 (_Float128)  ununderstood ***/
/*** extern _Float128 lgammaf128_r (_Float128, int *__signgamp)  ununderstood ***/
/*** extern _Float128 __lgammaf128_r (_Float128, int *__signgamp)  ununderstood ***/
/*** extern _Float128 rintf128 (_Float128 __x)  ununderstood ***/
/*** extern _Float128 __rintf128 (_Float128 __x)  ununderstood ***/
/*** extern _Float128 nextafterf128 (_Float128 __x, _Float128 __y)  ununderstood ***/
/*** extern _Float128 __nextafterf128 (_Float128 __x, _Float128 __y)  ununderstood ***/
/*** extern _Float128 nextdownf128 (_Float128 __x)  ununderstood ***/
/*** extern _Float128 __nextdownf128 (_Float128 __x)  ununderstood ***/
/*** extern _Float128 nextupf128 (_Float128 __x)  ununderstood ***/
/*** extern _Float128 __nextupf128 (_Float128 __x)  ununderstood ***/
/*** extern _Float128 remainderf128 (_Float128 __x, _Float128 __y)  ununderstood ***/
/*** extern _Float128 __remainderf128 (_Float128 __x, _Float128 __y)  ununderstood ***/
/*** extern _Float128 scalbnf128 (_Float128 __x, int __n)  ununderstood ***/
/*** extern _Float128 __scalbnf128 (_Float128 __x, int __n)  ununderstood ***/
/*** extern _Float128 scalblnf128 (_Float128 __x, long int __n)  ununderstood ***/
/*** extern _Float128 __scalblnf128 (_Float128 __x, long int __n)  ununderstood ***/
/*** extern _Float128 nearbyintf128 (_Float128 __x)  ununderstood ***/
/*** extern _Float128 __nearbyintf128 (_Float128 __x)  ununderstood ***/
/*** extern _Float128 roundf128 (_Float128 __x)  __attribute__ ((__const__)) ununderstood ***/
/*** extern _Float128 __roundf128 (_Float128 __x)  __attribute__ ((__const__)) ununderstood ***/
/*** extern _Float128 truncf128 (_Float128 __x)  __attribute__ ((__const__)) ununderstood ***/
/*** extern _Float128 __truncf128 (_Float128 __x)  __attribute__ ((__const__)) ununderstood ***/
/*** extern _Float128 remquof128 (_Float128 __x, _Float128 __y, int *__quo)  ununderstood ***/
/*** extern _Float128 __remquof128 (_Float128 __x, _Float128 __y, int *__quo)  ununderstood ***/
/*** extern _Float128 fdimf128 (_Float128 __x, _Float128 __y)  ununderstood ***/
/*** extern _Float128 __fdimf128 (_Float128 __x, _Float128 __y)  ununderstood ***/
/*** extern _Float128 fmaxf128 (_Float128 __x, _Float128 __y)  __attribute__ ((__const__)) ununderstood ***/
/*** extern _Float128 __fmaxf128 (_Float128 __x, _Float128 __y)  __attribute__ ((__const__)) ununderstood ***/
/*** extern _Float128 fminf128 (_Float128 __x, _Float128 __y)  __attribute__ ((__const__)) ununderstood ***/
/*** extern _Float128 __fminf128 (_Float128 __x, _Float128 __y)  __attribute__ ((__const__)) ununderstood ***/
/*** extern _Float128 fmaf128 (_Float128 __x, _Float128 __y, _Float128 __z)  ununderstood ***/
/*** extern _Float128 __fmaf128 (_Float128 __x, _Float128 __y, _Float128 __z)  ununderstood ***/
/*** extern _Float128 roundevenf128 (_Float128 __x)  __attribute__ ((__const__)) ununderstood ***/
/*** extern _Float128 __roundevenf128 (_Float128 __x)  __attribute__ ((__const__)) ununderstood ***/
/*** extern _Float128 fmaxmagf128 (_Float128 __x, _Float128 __y)  __attribute__ ((__const__)) ununderstood ***/
/*** extern _Float128 __fmaxmagf128 (_Float128 __x, _Float128 __y)  __attribute__ ((__const__)) ununderstood ***/
/*** extern _Float128 fminmagf128 (_Float128 __x, _Float128 __y)  __attribute__ ((__const__)) ununderstood ***/
/*** extern _Float128 __fminmagf128 (_Float128 __x, _Float128 __y)  __attribute__ ((__const__)) ununderstood ***/
/*** extern _Float128 fmaximumf128 (_Float128 __x, _Float128 __y)  __attribute__ ((__const__)) ununderstood ***/
/*** extern _Float128 __fmaximumf128 (_Float128 __x, _Float128 __y)  __attribute__ ((__const__)) ununderstood ***/
/*** extern _Float128 fminimumf128 (_Float128 __x, _Float128 __y)  __attribute__ ((__const__)) ununderstood ***/
/*** extern _Float128 __fminimumf128 (_Float128 __x, _Float128 __y)  __attribute__ ((__const__)) ununderstood ***/
/*** extern _Float128 fmaximum_numf128 (_Float128 __x, _Float128 __y)  __attribute__ ((__const__)) ununderstood ***/
/*** extern _Float128 __fmaximum_numf128 (_Float128 __x, _Float128 __y)  __attribute__ ((__const__)) ununderstood ***/
/*** extern _Float128 fminimum_numf128 (_Float128 __x, _Float128 __y)  __attribute__ ((__const__)) ununderstood ***/
/*** extern _Float128 __fminimum_numf128 (_Float128 __x, _Float128 __y)  __attribute__ ((__const__)) ununderstood ***/
/*** extern _Float128 fmaximum_magf128 (_Float128 __x, _Float128 __y)  __attribute__ ((__const__)) ununderstood ***/
/*** extern _Float128 __fmaximum_magf128 (_Float128 __x, _Float128 __y)  __attribute__ ((__const__)) ununderstood ***/
/*** extern _Float128 fminimum_magf128 (_Float128 __x, _Float128 __y)  __attribute__ ((__const__)) ununderstood ***/
/*** extern _Float128 __fminimum_magf128 (_Float128 __x, _Float128 __y)  __attribute__ ((__const__)) ununderstood ***/
/*** extern _Float128 fmaximum_mag_numf128 (_Float128 __x, _Float128 __y)  __attribute__ ((__const__)) ununderstood ***/
/*** extern _Float128 __fmaximum_mag_numf128 (_Float128 __x, _Float128 __y)  __attribute__ ((__const__)) ununderstood ***/
/*** extern _Float128 fminimum_mag_numf128 (_Float128 __x, _Float128 __y)  __attribute__ ((__const__)) ununderstood ***/
/*** extern _Float128 __fminimum_mag_numf128 (_Float128 __x, _Float128 __y)  __attribute__ ((__const__)) ununderstood ***/
/*** extern _Float128 getpayloadf128 (const _Float128 *__x)  ununderstood ***/
/*** extern _Float128 __getpayloadf128 (const _Float128 *__x)  ununderstood ***/
/*** extern _Float128 scalbf128 (_Float128 __x, _Float128 __n)  ununderstood ***/
/*** extern _Float128 __scalbf128 (_Float128 __x, _Float128 __n)  ununderstood ***/
/*** && !1
 / * Return 0 if VALUE is finite or NaN, +1 if it
   is +Infinity, -1 if it is -Infinity.  *  /
   extern int isinff32x (_Float32x __value) 
 __attribute__ ((__const__)) ununderstood ***/
/*** && !1
 / * Return nonzero if VALUE is not a number.  *  /
   extern int isnanf32x (_Float32x __value) 
 __attribute__ ((__const__)) ununderstood ***/
/*** && !1
 / * Return 0 if VALUE is finite or NaN, +1 if it
   is +Infinity, -1 if it is -Infinity.  *  /
   extern int isinff64x (_Float64x __value) 
 __attribute__ ((__const__)) ununderstood ***/
/*** && !1
 / * Return nonzero if VALUE is not a number.  *  /
   extern int isnanf64x (_Float64x __value) 
 __attribute__ ((__const__)) ununderstood ***/

#include <limits.h>

#include <float.h>

#include <string.h>


#include <time.h>

#include <sys/time.h>

#include <sys/types.h>

#include <sys/stat.h>

#include <setjmp.h>

#include <errno.h>

#include <signal.h>
#ifdef nofenv
  #define feenableexcept(fpe)
  #define feclearexcept(fpe)
#else
  #include <fenv.h>
  #ifdef modfenv
    #include "feenableexceptosx.h"
  #endif
  #define fpe FE_INVALID | FE_OVERFLOW | FE_DIVBYZERO
#endif

extern char errortemp_[(80+1)];

struct arrptr{int l,h; ssize_t i; char *a;};struct dynptr{void* p; int t;};extern char INTERRUPT;
typedef 
 void (*traphandler_t)(const char *);struct jbtrap{traphandler_t tr; sigjmp_buf jb; struct freefunc *fs;};extern struct jbtrap mainjb;
extern struct jbtrap * curjb;

#define traphandler curjb->tr
struct freefunc{struct freefunc *next; void (*f)(void *); void *ptr;};extern struct freefunc * freestack;

#define freemem(upto) while(freestack!=upto){freestack->f(freestack->ptr); freestack=freestack->next;}

#define atblockexit(name,func,p) name.f=func;name.ptr=p;name.next=freestack;freestack=&name

#define commablockexit(name,func,p) name.f=func,name.ptr=p,name.next=freestack,freestack=&name
extern void traprestore(void *ptr);
extern void condfree(void *ptr);
extern int friexecerror(char** s);
extern int (*friexec)(char** s);

#define mmovefrom(var,buf,type) *(type *)(buf)=*var

#define mmoveto(var,buf,type) *var=*(type *)(buf)

#define mainstart void default_traphandler(const char *errormessage){   if(errormessage[0]){     printERR;     freemem(NULL);     exit(EXIT_FAILURE);   }else{     freemem(NULL);     exit(EXIT_SUCCESS);   } } int main(int argc, char **argv){ struct freefunc* es; 			{struct sigaction act,oldact; act.sa_sigaction=trapsignal; sigemptyset(&act.sa_mask); act.sa_flags=SA_RESTART|SA_SIGINFO|SA_NODEFER; sigaction(SIGSEGV,&act,&oldact); if (oldact.sa_handler!=SIG_DFL)sigaction(SIGSEGV,&oldact,NULL); sigaction(SIGFPE,&act,&oldact); if (oldact.sa_handler!=SIG_DFL)sigaction(SIGFPE,&oldact,NULL); sigaction(SIGILL,&act,&oldact); if (oldact.sa_handler!=SIG_DFL)sigaction(SIGILL,&oldact,NULL); sigaction(SIGINT,&act,&oldact); if (oldact.sa_handler!=SIG_DFL)sigaction(SIGINT,&oldact,NULL); /* \
{void (*sig)(int); \
if((sig=signal(SIGSEGV,trapsignal))!=SIG_DFL)signal(SIGSEGV,sig); \
if((sig=signal(SIGFPE,trapsignal))!=SIG_DFL)signal(SIGFPE,sig); \
if((sig=signal(SIGILL,trapsignal))!=SIG_DFL)signal(SIGILL,sig); \
if((sig=signal(SIGINT,trapsignal))!=SIG_DFL)signal(SIGINT,sig); \
*/ else {traphandler=default_traphandler;       freestack=NULL;       feenableexcept(fpe);      }; } es=freestack;
extern int dynptrerr(int type);
extern void *errmalloc(void);
extern void ioerr(FILE *fil);
extern void errfclose(void *voidf);
extern void errfopen(FILE **f, const char *name, int mode);
extern int scanrec(FILE *f, const char *format, void *var) ;
extern int scanbool(FILE *f, const char *format, int *var) ;
extern int myfgets(char *name, char *var, char *varend, FILE *f) ;
extern int mygetline(char *name, char **var, FILE *f) ;
extern void trapsignal(int signum, siginfo_t *info, void *ucontext);





/* INTEGER LIBRARY FUNCTION INTEGER[(int)rint](REAL x) */
/* INTEGER LIBRARY FUNCTION int[(int)](REAL x) */






/* to-do list
1) modificare STRUCTURED ARRAY in modo da evitare malloc quando possibile
2) separare il #define CPL da quello C
*/
/*  */
/*                       __ _  */
/*  _ |_  _ __ __  _  | |_ | \ */
/* (_ | |(_|| || |(/_ | |  |_/ */
/*  */
/* --------------------------- */
/*  */
/* This version of the channel flow aims at completely  */
/* separating the computation of the IBM coefficient from the  */
/* DNS engine.  */
/*  */
/* It also aims at being somewhat understandable, which means */
/* that it does not aim at having the most compact code possible */
/* at all costs.  */
/*  */

/* Some MPI variables */
/* ----------------------- */
extern int iprocx_;
extern int nprocx_;
extern int iprocy_;
extern int nprocy_;

extern int iproc_;
extern int nproc_;

extern int has_terminal_;


/* Libraries to load */
/* ----------------------- */
/* Complex-number type definition and corresponding extensions to the ! */
/* CPL language                                                       ! */
/*                                                                    ! */
/* Copyright 1996-2023 Paolo Luchini http://CPLcode.net               ! */
/* Released under the attached LICENSE.                               ! */
/*                                                                    ! */
/* Code maturity: green.                                              ! */
/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! */

struct COMPLEX_{double REAL_;double IMAG_;};
#define COMPLEX_s (ssize_t)sizeof(struct COMPLEX_)


extern void complex_1INV(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG);


extern void complex_2EXP(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG);


extern void complex_3SINH(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG);

extern void complex_4COSH(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG);

extern void complex_5TANH(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG);

extern void complex_6COTH(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG);






extern void complex_7LOG(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG);


extern void complex_8POWER(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG,double y_REAL,double y_IMAG);


extern void complex_9SQRT(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG);


extern void complex_10ACOS(struct COMPLEX_ *RESULT_,double x_REAL,double x_IMAG);




extern void complex_11CRAND(struct COMPLEX_ *RESULT_);

extern void complex_12CGAUSS(struct COMPLEX_ *RESULT_);

/* Library of common matrix algebra operations for real-valued matrices ! */
/* including suitable extensions to the CPL language to handle infix    ! */
/* notation for such functions. See matrix.info for usage.              ! */
/*                                                                      ! */
/* Copyright 1997-2021 Paolo Luchini http://CPLcode.net                 ! */
/* Released under the attached LICENSE.                                 ! */
/*                                                                      ! */
/* Code maturity: green.                                                ! */
/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! */

extern double DotProduct(const int a_l,const int a_h,const ssize_t a_i,char *a__,const int b_l,const int b_h,const ssize_t b_i,char *b__);


extern void rbmat_1LeftMult(const int c_l,const int c_h,const ssize_t c_i,char *c__,const int A_l,const int A_h,const ssize_t A_i,const int A__l,const int A__h,const ssize_t A__i,char *A___,const int b_l,const int b_h,const ssize_t b_i,char *b__);


extern void RightMult(const int c_l,const int c_h,const ssize_t c_i,char *c__,const int a_l,const int a_h,const ssize_t a_i,char *a__,const int B_l,const int B_h,const ssize_t B_i,const int B__l,const int B__h,const ssize_t B__i,char *B___);




struct REALINVMAT_{int lo_;int hi_;};
#define REALINVMAT_s (ssize_t)sizeof(struct REALINVMAT_)





extern void rbmat_2MatEqu(const int c_l,const int c_h,const ssize_t c_i,const int c__l,const int c__h,const ssize_t c__i,char *c___,double a_);


extern void rbmat_3MatEqu(FILE *c_f,const int c_l,const int c_h,const ssize_t c_i,const int c__l,const int c__h,const ssize_t c__i,off_t c___,double a_);


extern void rbmat_4LeftMult(const int c_l,const int c_h,const ssize_t c_i,char *c__,FILE *A_f,const int A_l,const int A_h,const ssize_t A_i,const int A__l,const int A__h,const ssize_t A__i,off_t A___,const int b_l,const int b_h,const ssize_t b_i,char *b__);


extern void rbmat_5RightMult(const int c_l,const int c_h,const ssize_t c_i,char *c__,const int a_l,const int a_h,const ssize_t a_i,char *a__,FILE *B_f,const int B_l,const int B_h,const ssize_t B_i,const int B__l,const int B__h,const ssize_t B__i,off_t B___);


extern void rbmat_6LUdecomp(const int AA_l,const int AA_h,const ssize_t AA_i,const int AA__l,const int AA__h,const ssize_t AA__i,char *AA___);


extern void rbmat_7LUdecomp(FILE *A_f,const int A_l,const int A_h,const ssize_t A_i,const int A__l,const int A__h,const ssize_t A__i,off_t A___);


extern void rbmat_8LeftLDiv(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int A_l,const int A_h,const ssize_t A_i,const int A__l,const int A__h,const ssize_t A__i,char *A___,const int t_l,const int t_h,const ssize_t t_i,char *t__);


extern void rbmat_9LeftUDiv(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int A_l,const int A_h,const ssize_t A_i,const int A__l,const int A__h,const ssize_t A__i,char *A___,const int t_l,const int t_h,const ssize_t t_i,char *t__);




extern void rbmat_10LeftLUDiv(const int x_l,const int x_h,const ssize_t x_i,char *x__,FILE *A_f,const int A_l,const int A_h,const ssize_t A_i,const int A__l,const int A__h,const ssize_t A__i,off_t A___,const int t_l,const int t_h,const ssize_t t_i,char *t__);


extern void rbmat_11RightLUDiv(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int t_l,const int t_h,const ssize_t t_i,char *t__,const int A_l,const int A_h,const ssize_t A_i,const int A__l,const int A__h,const ssize_t A__i,char *A___);


extern void rbmat_12RightLUDiv(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int t_l,const int t_h,const ssize_t t_i,char *t__,FILE *A_f,const int A_l,const int A_h,const ssize_t A_i,const int A__l,const int A__h,const ssize_t A__i,off_t A___);




/*
inclusa separatamente in cbmat e rbmat
REAL Lanczos_norm=0
SUBROUTINE Lanczos(POINTER TO ARRAY(*) OF number x
                   SUBROUTINE[ARRAY(*) OF number v2^,v1] A,B
                   ARRAY(*) OF number y1; REAL eps)
  ARRAY(x.LO..x.HI) OF number v=0,v1
  ARRAY(y1.LO..y1.HI) OF number y=y1,r=0,r1
  REAL n=1
  x=0
  INTEGER count=2*LENGTH(y)
  DO
    B(v1,y)
    A(r1,v1)
    l1=r|r1/n; r=r1-l1*r; v=v1-l1*v
    n=NORM(r)
    l2=r|y/n; y=y-l2*r; x=x+l2*v
    DEC count
    Lanczos_norm=NORM(y)
  UNTIL Lanczos_norm<eps*eps OR count=0
END Lanczos

SUBROUTINE Lanczos(POINTER TO ARRAY(*) OF number x
                   ARRAY(*,*) OF number M
                   ARRAY(*) OF number y1; REAL eps)
  SUBROUTINE A[ARRAY(*) OF number v2^,v1]
    v2=M*v1
  END A  
  SUBROUTINE B[ARRAY(*) OF number v2^,v1]
    v2=v1*M
  END B
  Lanczos(x,A,B,y1,eps)
END Lanczos
*/

extern void rbmat_13PLU(const int m_l,const int m_h,const ssize_t m_i,const int m__l,const int m__h,const ssize_t m__i,char *m___,struct REALINVMAT_ *RESULT_);




extern void rbmat_14LeftLUDiv(const int x_l,const int x_h,const ssize_t x_i,char *x__,struct REALINVMAT_ *m_,const int t_l,const int t_h,const ssize_t t_i,char *t__);


extern void rbmat_15RightLUDiv(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int t_l,const int t_h,const ssize_t t_i,char *t__,struct REALINVMAT_ *m_);


extern void rbmat_16INV(const int mat_l,const int mat_h,const ssize_t mat_i,const int mat__l,const int mat__h,const ssize_t mat__i,char *mat___,const int RESULT_l,const int RESULT_h,const ssize_t RESULT_i,const int RESULT__l,const int RESULT__h,const ssize_t RESULT__i,char *RESULT___);


extern double rbmat_17DET(const int mat_l,const int mat_h,const ssize_t mat_i,const int mat__l,const int mat__h,const ssize_t mat__i,char *mat___);

extern double REAL_Lanczos_norm_;

extern void rbmat_18Lanczos(const int x_l,const int x_h,const ssize_t x_i,char *x__,void (*A_)(const int v2_l,const int v2_h,const ssize_t v2_i,char *v2__,const int v1_l,const int v1_h,const ssize_t v1_i,char *v1__),void (*B_)(const int v2_l,const int v2_h,const ssize_t v2_i,char *v2__,const int v1_l,const int v1_h,const ssize_t v1_i,char *v1__),const int y1_l,const int y1_h,const ssize_t y1_i,char *y1__,double eps_);


void rbmat_19Lanczos(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int mat_l,const int mat_h,const ssize_t mat_i,const int mat__l,const int mat__h,const ssize_t mat__i,char *mat___,const int y_l,const int y_h,const ssize_t y_i,char *y__,double eps_);

struct rbmat_Lanczos_R_s20 {int l,h; ssize_t i;struct arrptr a;};
extern struct rbmat_Lanczos_R_s20 rbmat_Lanczos_R_Lanczos_mat;

  extern void rbmat_Lanczos_R_21A(const int v2_l,const int v2_h,const ssize_t v2_i,char *v2__,const int v1_l,const int v1_h,const ssize_t v1_i,char *v1__);

  extern void rbmat_Lanczos_R_22B(const int v2_l,const int v2_h,const ssize_t v2_i,char *v2__,const int v1_l,const int v1_h,const ssize_t v1_i,char *v1__);

  
  extern void rbmat_19Lanczos(const int x_l,const int x_h,const ssize_t x_i,char *x__,const int mat_l,const int mat_h,const ssize_t mat_i,const int mat__l,const int mat__h,const ssize_t mat__i,char *mat___,const int y_l,const int y_h,const ssize_t y_i,char *y__,double eps_);

extern ssize_t channel_1st;
extern ssize_t channel_2st;
extern ssize_t channel_3st;
extern ssize_t channel_4st;
struct TENSEGRITY_{int nx_;int nz_;int n_C_;int n_B_;int n_T_;int n_G_;int n_N_;int n_N_dof_;int n_T_dof_;int n_q_tilde_;int n_P_;int n_int_;int n_tri_int_;int n_t_;double rho_b_;double k_;double sigma_;double h_;double r_;double l_b_;double I_0_;double alpha_1_;double l_per_;double l_v_1_;double l_h_1_;double l_u_l_;double l_u_s_;double l_u_l_0_;double l_h_0_;double l_u_s_0_;double l_i_0_;};
#define TENSEGRITY_s (ssize_t)sizeof(struct TENSEGRITY_)


extern void channel_5X_dot_comp(const int X_dot_l,const int X_dot_h,const ssize_t X_dot_i,char *X_dot__,int n_N_dof_,int n_N_,int n_G_,double l_b_,const int q_tilde_l,const int q_tilde_h,const ssize_t q_tilde_i,char *q_tilde__,const int ghost_nodes_l,const int ghost_nodes_h,const ssize_t ghost_nodes_i,const int ghost_nodes__l,const int ghost_nodes__h,const ssize_t ghost_nodes__i,char *ghost_nodes___);


extern void channel_6X_comp(const int X_l,const int X_h,const ssize_t X_i,char *X__,int n_N_dof_,int n_N_,int n_G_,int nx_,int nz_,double l_per_,double l_b_,const int q_tilde_l,const int q_tilde_h,const ssize_t q_tilde_i,char *q_tilde__,const int X_0_l,const int X_0_h,const ssize_t X_0_i,char *X_0__,const int ghost_nodes_l,const int ghost_nodes_h,const ssize_t ghost_nodes_i,const int ghost_nodes__l,const int ghost_nodes__h,const ssize_t ghost_nodes__i,char *ghost_nodes___);



extern void channel_7df_comp(char *df_,char *x_,char *normal_,double t_,double dA_,double Lx_,double Lz_,double l_per_,int nx_,int nz_);


extern void channel_8f_ext_sub(const int f_ext_l,const int f_ext_h,const ssize_t f_ext_i,char *f_ext__,int n_B_,int n_P_,int n_N_,int n_N_dof_,int n_G_,int nx_,int nz_,int n_int_,double t_,double l_per_,double l_b_,const int X_0_l,const int X_0_h,const ssize_t X_0_i,char *X_0__,const int q_tilde_l,const int q_tilde_h,const ssize_t q_tilde_i,char *q_tilde__,const int ghost_nodes_l,const int ghost_nodes_h,const ssize_t ghost_nodes_i,const int ghost_nodes__l,const int ghost_nodes__h,const ssize_t ghost_nodes__i,char *ghost_nodes___,const int bar_lambda_mat_l,const int bar_lambda_mat_h,const ssize_t bar_lambda_mat_i,char *bar_lambda_mat__,const int P_mat_l,const int P_mat_h,const ssize_t P_mat_i,const int P_mat__l,const int P_mat__h,const ssize_t P_mat__i,const int P_mat___l,const int P_mat___h,const ssize_t P_mat___i,char *P_mat____);



extern void channel_9B_con_comp(const int B_con_l,const int B_con_h,const ssize_t B_con_i,const int B_con__l,const int B_con__h,const ssize_t B_con__i,char *B_con___,int n_B_,int n_C_);
 


extern void channel_10T_comp(const int T_con_l,const int T_con_h,const ssize_t T_con_i,char *T_con__,const int ghost_nodes_l,const int ghost_nodes_h,const ssize_t ghost_nodes_i,char *ghost_nodes__,const int l_0_l,const int l_0_h,const ssize_t l_0_i,char *l_0__,int nx_,int nz_,int n_C_,int n_T_,int n_G_,double l_u_s_0_,double l_u_l_0_,double l_i_0_);
 


extern void channel_11f_n_comp(const int f_n_l,const int f_n_h,const ssize_t f_n_i,char *f_n__,int n_N_dof_,int n_N_,int n_T_,int n_G_,int nx_,int ny_,double l_per_,double l_b_,double k_,double sigma_,const int q_tilde_l,const int q_tilde_h,const ssize_t q_tilde_i,char *q_tilde__,const int X_0_l,const int X_0_h,const ssize_t X_0_i,char *X_0__,const int l_0_l,const int l_0_h,const ssize_t l_0_i,char *l_0__,const int T_con_l,const int T_con_h,const ssize_t T_con_i,const int T_con__l,const int T_con__h,const ssize_t T_con__i,char *T_con___,const int ghost_nodes_l,const int ghost_nodes_h,const ssize_t ghost_nodes_i,const int ghost_nodes__l,const int ghost_nodes__h,const ssize_t ghost_nodes__i,char *ghost_nodes___);



extern void channel_12Cq_dot_compute(const int Cq_dot_l,const int Cq_dot_h,const ssize_t Cq_dot_i,char *Cq_dot__,int n_q_tilde_,int n_B_,double I_0_,const int q_tilde_l,const int q_tilde_h,const ssize_t q_tilde_i,char *q_tilde__);



extern void channel_13f_mom_comp(const int f_mom_l,const int f_mom_h,const ssize_t f_mom_i,char *f_mom__,int n_q_,int n_q_tilde_,double l_b_,const int f_n_l,const int f_n_h,const ssize_t f_n_i,char *f_n__,const int q_tilde_l,const int q_tilde_h,const ssize_t q_tilde_i,char *q_tilde__);



extern void channel_14P_comp(const int P_mat_l,const int P_mat_h,const ssize_t P_mat_i,char *P_mat__,const int ghost_nodes_l,const int ghost_nodes_h,const ssize_t ghost_nodes_i,const int ghost_nodes__l,const int ghost_nodes__h,const ssize_t ghost_nodes__i,char *ghost_nodes___,int nx_,int nz_,int n_C_,int n_T_,int n_G_);



extern void channel_15bar_lambda_comp(const int bar_lambda_mat_l,const int bar_lambda_mat_h,const ssize_t bar_lambda_mat_i,char *bar_lambda_mat__,int n_int_);



/* Cose in più per evitare doppie inclusioni */


extern void channel_16X_dot_comp_upd(struct TENSEGRITY_ *this_);


extern void channel_17X_comp_upd(struct TENSEGRITY_ *this_);



extern void channel_18K_i_compute(const int K_i_l,const int K_i_h,const ssize_t K_i_i,char *K_i__,struct TENSEGRITY_ *this_,double t_,const int q_tilde_l,const int q_tilde_h,const ssize_t q_tilde_i,char *q_tilde__);



extern void channel_19timestep_tensegrity(struct TENSEGRITY_ *this_,double t_,double deltat_);


/**/
struct DNS_{char size_[(ssize_t)sizeof(int)*(/*SA1*/(1+1+1-1)+1)];char localSize_[(ssize_t)sizeof(int)*(/*SA2*/(1+1-1)+1)*(/*SA3*/(1+1+1-1)+1)];char leng_[(ssize_t)sizeof(double)*(/*SA4*/(1+1+1-1)+1)];double nu_;struct arrptr xd_;struct arrptr yd_;struct arrptr zd_;double headx_;double heady_;double UFR_;double VFR_;double cflmax_;double fouriermax_;double deltat_;double maxTime_;double time_;int it_;int it_save_;int it_stat_;int it_max_;int it_cfl_;int it_check_;int it_runtimestats_;int it_start_;int it_end_;int iz_stats_;int continue_;int non_ph_;};
#define DNS_s (ssize_t)sizeof(struct DNS_)
      
                    
void dns_5readInputFile(struct DNS_ *this_,char *fname_);               
void dns_6readRestartFile(struct DNS_ *this_,char *fname_);     
  
    
double dns_dns_7scale(double x_){struct freefunc* es=freestack;return x_ ;}


	void dns_5readInputFile(struct DNS_ *this_,char *fname_){{struct freefunc* es=freestack;
		FILE *dnsin_;

		double nu_;
double headx_;
double heady_;
double UFR_;
double VFR_;

		int nx_;
int ny_;
int nz_;

		double Lx_;
double Ly_;
double Lz_;

		double cflmax_;
double fouriermax_;
double deltat_;
double maxTime_;

		int it_save_;
int it_stat_;
int it_max_;
int it_cfl_;
int it_check_;

		int it_runtimestats_;
int it_start_;
int it_end_;
int iz_stats_ ;

		int non_ph_;

		int continue_;

		int _8h;
ssize_t _9i;
char *_10;
ssize_t _11st;
int _12h;
ssize_t _13i;
char *_14;
ssize_t _15st;
int _16h;
ssize_t _17i;
char *_18;
double deltax_ ;

		double deltay_ ;

		dnsin_=NULL;errfopen(&dnsin_,fname_,O_RDONLY);   if(!(scanrec( dnsin_ ," nu = %lg",&nu_)>0 &&scanrec( dnsin_ ," headx = %lg",&headx_)>0 &&scanrec( dnsin_ ," heady = %lg",&heady_)>0&&scanrec( dnsin_ ," UFR = %lg",&UFR_)>0&&scanrec( dnsin_ ," VFR = %lg",&VFR_)>0))ioerr( dnsin_ );
		   if(!(scanrec( dnsin_ ," nx = %d",&nx_)>0 &&scanrec( dnsin_ ," ny = %d",&ny_)>0 &&scanrec( dnsin_ ," nz = %d",&nz_)>0 &&scanrec( dnsin_ ," Lx = %lg",&Lx_)>0 &&scanrec( dnsin_ ," Ly = %lg",&Ly_)>0 &&scanrec( dnsin_ ," Lz = %lg",&Lz_)>0))ioerr( dnsin_ );
		   if(!(scanrec( dnsin_ ," cflmax = %lg",&cflmax_)>0 &&scanrec( dnsin_ ," fouriermax = %lg",&fouriermax_)>0 &&scanrec( dnsin_ ," deltat = %lg",&deltat_)>0 &&scanrec( dnsin_ ," maxTime = %lg",&maxTime_)>0))ioerr( dnsin_ );
		   if(!(scanrec( dnsin_ ," it_save = %d",&it_save_)>0 &&scanrec( dnsin_ ," it_stat = %d",&it_stat_)>0 &&scanrec( dnsin_ ," it_max = %d",&it_max_)>0 &&scanrec( dnsin_ ," it_cfl = %d",&it_cfl_)>0 &&scanrec( dnsin_ ," it_check = %d",&it_check_ )>0))ioerr( dnsin_ );
		   if(!(scanrec( dnsin_ ," it_runtimestats = %d",&it_runtimestats_)>0 &&scanrec( dnsin_ ," it_start = %d",&it_start_)>0 &&scanrec( dnsin_ ," it_end = %d",&it_end_)>0 &&scanrec( dnsin_ ," iz_stats = %d",&iz_stats_ 	)>0))ioerr( dnsin_ );
		   if(!(scanrec( dnsin_ ," non_ph = %d",&non_ph_)>0))ioerr( dnsin_ );
		   if(!(scanbool( dnsin_ ," continue = %c%*4[A-Za-z] ",&continue_)))ioerr( dnsin_ );
	
		 (*this_).continue_ = continue_;
		 (*(int *)((*this_).size_) )= nx_;   (*(int *)((ssize_t)sizeof(int)+(*this_).size_) )= ny_;   (*(int *)(2*(ssize_t)sizeof(int)+(*this_).size_) )= nz_;
		 (*(double *)((*this_).leng_) )= Lx_;   (*(double *)((ssize_t)sizeof(double)+(*this_).leng_) )= Ly_;   (*(double *)(2*(ssize_t)sizeof(double)+(*this_).leng_) )= Lz_;
		 (*this_).nu_ = nu_;
		_8h=2*nx_+5;_9i=(ssize_t)sizeof(double)*(_8h-(-2)+1);_11st=(-2)*(ssize_t)sizeof(double);
_10=malloc(_9i);if(_10==NULL)_10=errmalloc();_10-=_11st; (*this_).xd_.l=(-2);(*this_).xd_.h=_8h;(*this_).xd_.i=(ssize_t)sizeof(double);(*this_).xd_.a=_10;
		_12h=2*ny_+5;_13i=(ssize_t)sizeof(double)*(_12h-(-2)+1);_15st=(-2)*(ssize_t)sizeof(double);
_14=malloc(_13i);if(_14==NULL)_14=errmalloc();_14-=_15st; (*this_).yd_.l=(-2);(*this_).yd_.h=_12h;(*this_).yd_.i=(ssize_t)sizeof(double);(*this_).yd_.a=_14;
		_16h=2*nz_;_17i=(ssize_t)sizeof(double)*(_16h+1);
_18=malloc(_17i);if(_18==NULL)_18=errmalloc(); (*this_).zd_.l=0;(*this_).zd_.h=_16h;(*this_).zd_.i=(ssize_t)sizeof(double);(*this_).zd_.a=_18;
		 deltax_= Lx_/(double)(nx_); deltay_= Ly_/(double)(ny_); {int ix_=  - 2 ;do{{ (*(double *)(ix_*(*this_).xd_.i+(*this_).xd_.a))=Lx_/2.*(double)(ix_)/(double)(nx_);}ix_+=1;}while(ix_<= 2*nx_+5);}
		 {int iy_=  - 2 ;do{{ (*(double *)(iy_*(*this_).yd_.i+(*this_).yd_.a))=Ly_/2.*(double)(iy_)/(double)(ny_);}iy_+=1;}while(iy_<= 2*ny_+5);}
		 {int iz_=0 ;do{{ (*(double *)(iz_*(*this_).zd_.i+(*this_).zd_.a) )=Lz_/2.*(double)(iz_)/(double)(nz_);}iz_+=1;}while(iz_<= 2*nz_);}
		(*this_).headx_=headx_;
		(*this_).heady_=heady_;
		(*this_).UFR_=UFR_;
		(*this_).VFR_=VFR_;
		(*this_).cflmax_=cflmax_;
		(*this_).fouriermax_=fouriermax_;
		(*this_).deltat_=deltat_;
		(*this_).maxTime_=maxTime_;
		(*this_).it_save_=it_save_;
		(*this_).it_stat_=it_stat_;
		(*this_).it_max_=it_max_;
		(*this_).it_cfl_=it_cfl_;
		(*this_).it_check_=it_check_;
		(*this_).it_runtimestats_=it_runtimestats_;
		(*this_).it_start_=it_start_;
		(*this_).it_end_=it_end_;
		(*this_).iz_stats_=iz_stats_;
		(*this_).time_=0.;
		(*this_).it_=0;
		(*this_).non_ph_=non_ph_;
	}}
	
	
	
	void dns_6readRestartFile(struct DNS_ *this_,char *fname_){{struct freefunc* es=freestack;
	struct __s8{int nxs_;int nys_;int nzs_;int its_;double Lxs_;double Lys_;double headxs_;double headys_;double nus_;double times_;};
#define __s8_s (ssize_t)sizeof(struct __s8)
FILE *dnsinfo_;
FILE *_9;

		int _20h;
int _21h;
int _22h;
off_t _24i;
off_t _25st;
off_t _26i;
off_t _27i;
struct __s23{int nxs_;int nys_;int nzs_;int its_;double Lxs_;double Lys_;double headxs_;double headys_;double nus_;double times_;};
#define __s23_s (ssize_t)sizeof(struct __s23)
FILE *stored_;
FILE *_28;

				
		if( has_terminal_ ){  fprintf(stdout,"""Reading restart file ...""""\n");};
		dnsinfo_=NULL;_9=NULL;errfopen(&_9,fname_,O_RDONLY);dnsinfo_=_9;{
			int _10;
int _11;
int _12;
double _13;
double _14;
if(!(fseeko(dnsinfo_,(-(0))+(ssize_t)&(*(struct __s8 *)(0)).nxs_,SEEK_SET)==0&&fread(&_10,(ssize_t)sizeof(int),1,dnsinfo_)==1))ioerr(dnsinfo_);
 (*(int *)((*this_).size_) )= _10;  if(!(fseeko(dnsinfo_,(-(0))+(ssize_t)&(*(struct __s8 *)(0)).nys_,SEEK_SET)==0&&fread(&_11,(ssize_t)sizeof(int),1,dnsinfo_)==1))ioerr(dnsinfo_);
 (*(int *)((ssize_t)sizeof(int)+(*this_).size_) )= _11;  if(!(fseeko(dnsinfo_,(-(0))+(ssize_t)&(*(struct __s8 *)(0)).nzs_,SEEK_SET)==0&&fread(&_12,(ssize_t)sizeof(int),1,dnsinfo_)==1))ioerr(dnsinfo_);
 (*(int *)(2*(ssize_t)sizeof(int)+(*this_).size_) )= _12;
			if(!(fseeko(dnsinfo_,(-(0))+(ssize_t)&(*(struct __s8 *)(0)).Lxs_,SEEK_SET)==0&&fread(&_13,(ssize_t)sizeof(double),1,dnsinfo_)==1))ioerr(dnsinfo_);
 (*(double *)((*this_).leng_) )= _13;  if(!(fseeko(dnsinfo_,(-(0))+(ssize_t)&(*(struct __s8 *)(0)).Lys_,SEEK_SET)==0&&fread(&_14,(ssize_t)sizeof(double),1,dnsinfo_)==1))ioerr(dnsinfo_);
 (*(double *)((ssize_t)sizeof(double)+(*this_).leng_) )= _14;  /*this.nu = nus */
		if( (*this_).continue_ ){ 
        	  int _15;
double _16;
double _17;
double _18;
double _19;
if(!(fseeko(dnsinfo_,(-(0))+(ssize_t)&(*(struct __s8 *)(0)).its_,SEEK_SET)==0&&fread(&_15,(ssize_t)sizeof(int),1,dnsinfo_)==1))ioerr(dnsinfo_);
(*this_).it_=_15;  if(!(fseeko(dnsinfo_,(-(0))+(ssize_t)&(*(struct __s8 *)(0)).headxs_,SEEK_SET)==0&&fread(&_16,(ssize_t)sizeof(double),1,dnsinfo_)==1))ioerr(dnsinfo_);
(*this_).headx_=_16;  if(!(fseeko(dnsinfo_,(-(0))+(ssize_t)&(*(struct __s8 *)(0)).headys_,SEEK_SET)==0&&fread(&_17,(ssize_t)sizeof(double),1,dnsinfo_)==1))ioerr(dnsinfo_);
(*this_).heady_=_17;
        	  if(!(fseeko(dnsinfo_,(-(0))+(ssize_t)&(*(struct __s8 *)(0)).times_,SEEK_SET)==0&&fread(&_18,(ssize_t)sizeof(double),1,dnsinfo_)==1))ioerr(dnsinfo_);
(*this_).time_=_18;  if(!(fseeko(dnsinfo_,(-(0))+(ssize_t)&(*(struct __s8 *)(0)).nus_,SEEK_SET)==0&&fread(&_19,(ssize_t)sizeof(double),1,dnsinfo_)==1))ioerr(dnsinfo_);
(*this_).nu_=_19;  
               };
               }
               errfclose(&dnsinfo_);
		_20h=2*(*(int *)((*this_).size_))+5;_21h=2*(*(int *)((ssize_t)sizeof(int)+(*this_).size_))+5;_22h=2*(*(int *)(2*(ssize_t)sizeof(int)+(*this_).size_));_24i=(ssize_t)sizeof(double)*(_20h-(-2)+1);_25st=(-2)*(ssize_t)sizeof(double);_26i=(ssize_t)sizeof(double)*(_21h-(-2)+1);_27i=(ssize_t)sizeof(double)*(_22h+1);stored_=NULL;_28=NULL;errfopen(&_28,fname_,O_RDONLY);stored_=_28;{
			 int _29h;
ssize_t _30i;
char *_31;
ssize_t _32st;
int _35h;
ssize_t _36i;
char *_37;
ssize_t _38st;
int _41h;
ssize_t _42i;
char *_43;
ssize_t _44st;
_29h=2*(*(int *)((*this_).size_))+5;_30i=(ssize_t)sizeof(double)*(_29h-(-2)+1);
_31=malloc(_30i);if(_31==NULL)_31=errmalloc();_31-=_25st; (*this_).xd_.l=(-2);(*this_).xd_.h=_29h;(*this_).xd_.i=(ssize_t)sizeof(double);(*this_).xd_.a=_31;
			 _32st=((*this_).xd_.l)*(ssize_t)sizeof(double); if((*this_).xd_.i==(ssize_t)sizeof(double)&&(ssize_t)sizeof(double)==(ssize_t)sizeof(double)){if(!(fseeko(stored_,(off_t)(__s23_s-_25st+(ssize_t)(char*)(struct __s23*)(0))+_32st,SEEK_SET)==0&&fread((*this_).xd_.a+_32st,(ssize_t)sizeof(double),(*this_).xd_.h-((*this_).xd_.l)+1,stored_)==(*this_).xd_.h-((*this_).xd_.l)+1))ioerr(stored_);}else{  {int _33i_=(*this_).xd_.l;do{{double _34;
if(!(fseeko(stored_,_33i_*(off_t)(ssize_t)sizeof(double)+(off_t)(__s23_s-_25st+(ssize_t)(char*)(struct __s23*)(0)) ,SEEK_SET)==0&&fread(&_34,(ssize_t)sizeof(double),1,stored_)==1))ioerr(stored_);
(*(double *)(_33i_*(*this_).xd_.i+(*this_).xd_.a))=_34;}_33i_++;}while(_33i_<=(*this_).xd_.h);}};
                        _35h=2*(*(int *)((ssize_t)sizeof(int)+(*this_).size_))+5;_36i=(ssize_t)sizeof(double)*(_35h-(-2)+1);
_37=malloc(_36i);if(_37==NULL)_37=errmalloc();_37-=_25st; (*this_).yd_.l=(-2);(*this_).yd_.h=_35h;(*this_).yd_.i=(ssize_t)sizeof(double);(*this_).yd_.a=_37;
			 _38st=((*this_).yd_.l)*(ssize_t)sizeof(double); if((*this_).yd_.i==(ssize_t)sizeof(double)&&(ssize_t)sizeof(double)==(ssize_t)sizeof(double)){if(!(fseeko(stored_,(off_t)((__s23_s+_24i)-_25st+(ssize_t)(char*)(struct __s23*)(0))+_38st,SEEK_SET)==0&&fread((*this_).yd_.a+_38st,(ssize_t)sizeof(double),(*this_).yd_.h-((*this_).yd_.l)+1,stored_)==(*this_).yd_.h-((*this_).yd_.l)+1))ioerr(stored_);}else{  {int _39i_=(*this_).yd_.l;do{{double _40;
if(!(fseeko(stored_,_39i_*(off_t)(ssize_t)sizeof(double)+(off_t)((__s23_s+_24i)-_25st+(ssize_t)(char*)(struct __s23*)(0)) ,SEEK_SET)==0&&fread(&_40,(ssize_t)sizeof(double),1,stored_)==1))ioerr(stored_);
(*(double *)(_39i_*(*this_).yd_.i+(*this_).yd_.a))=_40;}_39i_++;}while(_39i_<=(*this_).yd_.h);}};
			 _41h=2*(*(int *)(2*(ssize_t)sizeof(int)+(*this_).size_));_42i=(ssize_t)sizeof(double)*(_41h+1);
_43=malloc(_42i);if(_43==NULL)_43=errmalloc(); (*this_).zd_.l=0;(*this_).zd_.h=_41h;(*this_).zd_.i=(ssize_t)sizeof(double);(*this_).zd_.a=_43;
			 _44st=((*this_).zd_.l)*(ssize_t)sizeof(double); if((*this_).zd_.i==(ssize_t)sizeof(double)&&(ssize_t)sizeof(double)==(ssize_t)sizeof(double)){if(!(fseeko(stored_,(off_t)(((__s23_s+_24i)+_26i)+(ssize_t)(char*)(struct __s23*)(0))+_44st,SEEK_SET)==0&&fread((*this_).zd_.a+_44st,(ssize_t)sizeof(double),(*this_).zd_.h-((*this_).zd_.l)+1,stored_)==(*this_).zd_.h-((*this_).zd_.l)+1))ioerr(stored_);}else{  {int _45i_=(*this_).zd_.l;do{{double _46;
if(!(fseeko(stored_,_45i_*(off_t)(ssize_t)sizeof(double)+(off_t)(((__s23_s+_24i)+_26i)+(ssize_t)(char*)(struct __s23*)(0)) ,SEEK_SET)==0&&fread(&_46,(ssize_t)sizeof(double),1,stored_)==1))ioerr(stored_);
(*(double *)(_45i_*(*this_).zd_.i+(*this_).zd_.a))=_46;}_45i_++;}while(_45i_<=(*this_).zd_.h);}};
                         (*(double *)(2*(ssize_t)sizeof(double)+(*this_).leng_) )= (*(double *)(((*this_).zd_.h)*(*this_).zd_.i+(*this_).zd_.a))-(*(double *)(((*this_).zd_.l)*(*this_).zd_.i+(*this_).zd_.a)         /* This should be checked for walls=1 and 2 XXX TODO  */);
                errfclose(&stored_);
	}}}
	
	
	
