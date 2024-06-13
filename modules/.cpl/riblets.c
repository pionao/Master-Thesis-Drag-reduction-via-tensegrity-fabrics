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


struct DNS_{char size_[(ssize_t)sizeof(int)*(/*SA1*/(1+1+1-1)+1)];char localSize_[(ssize_t)sizeof(int)*(/*SA2*/(1+1-1)+1)*(/*SA3*/(1+1+1-1)+1)];char leng_[(ssize_t)sizeof(double)*(/*SA4*/(1+1+1-1)+1)];double nu_;struct arrptr xd_;struct arrptr yd_;struct arrptr zd_;double headx_;double heady_;double UFR_;double VFR_;double cflmax_;double fouriermax_;double deltat_;double maxTime_;double time_;int it_;int it_save_;int it_stat_;int it_max_;int it_cfl_;int it_check_;int it_runtimestats_;int it_start_;int it_end_;int iz_stats_;int continue_;int non_ph_;};
#define DNS_s (ssize_t)sizeof(struct DNS_)
      
                    
void dns_5readInputFile(struct DNS_ *this_,char *fname_);               
void dns_6readRestartFile(struct DNS_ *this_,char *fname_);     
  
    
extern double dns_dns_7scale(double x_);



	extern void dns_5readInputFile(struct DNS_ *this_,char *fname_);

	
	
	
	extern void dns_6readRestartFile(struct DNS_ *this_,char *fname_);

	
	
	



struct grid_s4 {int l,h; ssize_t i;struct arrptr a;};

struct grid_s6 {int l,h; ssize_t i;struct arrptr a;};
extern ssize_t grid_7i;
struct GRID_{char xd_[(ssize_t)sizeof(struct arrptr)*(/*SA1*/(1+1+1-1)+1)];char x_[(ssize_t)sizeof(struct arrptr)*(/*SA2*/(1+1+1-1)+1)];char di_[(ssize_t)sizeof(int)*(/*SA3*/(1+1+1-1)+1)];};
#define GRID_s (ssize_t)sizeof(struct GRID_)

   
void grid_8initialiseGrid(struct GRID_ *this_,struct DNS_ dns_,const int di_l,const int di_h,const ssize_t di_i,char *di__);
                                   
extern void grid_8initialiseGrid(struct GRID_ *this_,struct DNS_ dns_,const int di_l,const int di_h,const ssize_t di_i,char *di__);
 



/*USE poiseuille */
/*USE peristalsis */



/**/
struct RIBLETS_{double h_s_;double s_;double h_;double stkexp_;double r_;double rTip_;double zCirc_;double yTan_;int waven_;int extra_;struct arrptr lambda_;struct arrptr amp_;char phiC_[(ssize_t)sizeof(double)*(6+1)];char gC_[(ssize_t)sizeof(double)*(6+1)];int useCoco_;};
#define RIBLETS_s (ssize_t)sizeof(struct RIBLETS_)

		   

	
void riblets_2readInputFile(struct RIBLETS_ *this_,char *fname_);
double riblets_3yWave(struct RIBLETS_ this_,double x_);
void riblets_4Bisection(char *RESULT_,int (*f_)(char *s_),char *x1_,char *x2_);
int riblets_5isInBody(struct RIBLETS_ *this_,const int coordinates_l,const int coordinates_h,const ssize_t coordinates_i,char *coordinates__);
int riblets_6UisInBody(struct RIBLETS_ *this_,const int coordinates_l,const int coordinates_h,const ssize_t coordinates_i,char *coordinates__);
void riblets_8edge(char *RESULT_,struct RIBLETS_ this_,const int coordinates_l,const int coordinates_h,const ssize_t coordinates_i,char *coordinates__);
void riblets_9findEdge(struct RIBLETS_ *this_,struct DNS_ dns_,const int coordinates_l,const int coordinates_h,const ssize_t coordinates_i,char *coordinates__,char *edgeCord_);
void riblets_10cordMod(struct RIBLETS_ *this_,const int pA_l,const int pA_h,const ssize_t pA_i,char *pA__,const int pB_l,const int pB_h,const ssize_t pB_i,char *pB__);
int riblets_11ribletsCrossed(struct RIBLETS_ this_,const int coordinates_l,const int coordinates_h,const ssize_t coordinates_i,char *coordinates__);

double riblets_riblets_12tol;
void riblets_2readInputFile(struct RIBLETS_ *this_,char *fname_){{struct freefunc* es=freestack;
		FILE *ribletsin_;

		int waven_;

		double spacing_;
double ratiohs_;

		int use_coco_;

		int extra_;

		double radius_;
double stokexp_;

		double tip_radius_;
double zCirc_;
double yTan_;

		char phiC_[(ssize_t)sizeof(double)*(6+1)];
char gC_[(ssize_t)sizeof(double)*(6+1)];

		int ph_;

		int _13h;
ssize_t _14i;
char *_15lambda;
int _16h;
ssize_t _17i;
char *_18ampl;
ribletsin_=NULL;errfopen(&ribletsin_,fname_,O_RDONLY);   if(!(scanrec( ribletsin_ ," spacing = %lg",&spacing_)>0 &&scanrec( ribletsin_ ," ratiohs = %lg",&ratiohs_)>0))ioerr( ribletsin_ );
		   if(!(scanrec( ribletsin_ ," waven = %d",&waven_)>0))ioerr( ribletsin_ );
		_13h=waven_;_14i=(ssize_t)sizeof(double)*_13h;
_15lambda=malloc(_14i);if(_15lambda==NULL)_15lambda=errmalloc();_15lambda-=(ssize_t)sizeof(double); 
		_16h=waven_;_17i=(ssize_t)sizeof(double)*_16h;
_18ampl=malloc(_17i);if(_18ampl==NULL)_18ampl=errmalloc();_18ampl-=(ssize_t)sizeof(double); 
		   if(!((scanrec( ribletsin_ ," lambda = ",NULL),({int i19=1; while(i19<=_13h){if(!scanrec( ribletsin_ ," %lg",(double *)(i19*(ssize_t)sizeof(double)+_15lambda))>0)ioerr( ribletsin_ ); i19++;}}),1)))ioerr( ribletsin_ );
		   if(!((scanrec( ribletsin_ ," ampl = ",NULL),({int i20=1; while(i20<=_16h){if(!scanrec( ribletsin_ ," %lg",(double *)(i20*(ssize_t)sizeof(double)+_18ampl))>0)ioerr( ribletsin_ ); i20++;}}),1)))ioerr( ribletsin_ );
		   if(!(scanbool( ribletsin_ ," use_coco = %c%*4[A-Za-z] ",&use_coco_) &&scanrec( ribletsin_ ," radius = %lg",&radius_)>0 &&scanrec( ribletsin_ ," stokexp = %lg",&stokexp_)>0 &&scanrec( ribletsin_ ," extra = %d",&extra_)>0))ioerr( ribletsin_ );
		   if(!((scanrec( ribletsin_ ," phiC = ",NULL),({int i21=0; while(i21<=6){if(!scanrec( ribletsin_ ," %lg",(double *)(i21*(ssize_t)sizeof(double)+phiC_))>0)ioerr( ribletsin_ ); i21++;}}),1) &&(scanrec( ribletsin_ ," gC = ",NULL),({int i22=0; while(i22<=6){if(!scanrec( ribletsin_ ," %lg",(double *)(i22*(ssize_t)sizeof(double)+gC_))>0)ioerr( ribletsin_ ); i22++;}}),1)))ioerr( ribletsin_ );
		   if(!(scanrec( ribletsin_ ," tip_radius = %lg",&tip_radius_)>0 &&scanrec( ribletsin_ ," zCirc = %lg",&zCirc_)>0 &&scanrec( ribletsin_ ," yTan = %lg",&yTan_)>0))ioerr( ribletsin_ );
		   if(!(scanrec( ribletsin_ ," ph = %d",&ph_)>0))ioerr( ribletsin_ );
		 (*this_).h_s_ = ratiohs_;
		 (*this_).s_ = spacing_;
		 (*this_).stkexp_ = stokexp_;
		 (*this_).r_ = radius_;
		 (*this_).h_ = (*this_).h_s_*(*this_).s_;
		 (*this_).waven_ = waven_;
		 (*this_).lambda_.l=1;(*this_).lambda_.h=_13h;(*this_).lambda_.i=(ssize_t)sizeof(double);(*this_).lambda_.a=_15lambda;
		 (*this_).amp_.l=1;(*this_).amp_.h=_16h;(*this_).amp_.i=(ssize_t)sizeof(double);(*this_).amp_.a=_18ampl;
		 memmove((*this_).phiC_,phiC_,(ssize_t)sizeof(double)*(6+1));
		 memmove((*this_).gC_,gC_,(ssize_t)sizeof(double)*(6+1));
		 (*this_).rTip_ = tip_radius_;
		 (*this_).zCirc_ = zCirc_;
		 (*this_).yTan_ = yTan_;
		 (*this_).useCoco_ = use_coco_;
		 (*this_).extra_ = extra_;
	}}
	
	void riblets_4Bisection(char *RESULT_,int (*f_)(char *s_),char *x1_,char *x2_){{struct freefunc* es=freestack;
		char xl_[(ssize_t)sizeof(double)*(2+1)] ;
char xr_[(ssize_t)sizeof(double)*(2+1)] ;

		int _13fl;
int _14fr;
 memmove(xl_,x1_,(ssize_t)sizeof(double)*(2+1)); memmove(xr_,x2_,(ssize_t)sizeof(double)*(2+1));_13fl=(*f_)(xl_);   _14fr=(*f_)(xr_); 
		if( _13fl == _14fr ){ traphandler("Bisection point not included in bisection limits");};
		
			do{double _17m;
char _20[(ssize_t)sizeof(double)*(2+1)];
double _22;
_17m=1./2.; {  {int _15i_=2;do{{(*(double *)(_15i_*(ssize_t)sizeof(double)+RESULT_))=((*(double *)(_15i_*(ssize_t)sizeof(double)+xl_))+(*(double *)(_15i_*(ssize_t)sizeof(double)+xr_)))*_17m ;}_15i_--;}while(_15i_>=0);}}
			  {int _18i_=2;do{{(*(double *)(_18i_*(ssize_t)sizeof(double)+_20))=(*(double *)(_18i_*(ssize_t)sizeof(double)+xl_))-(*(double *)(_18i_*(ssize_t)sizeof(double)+xr_)) ;}_18i_--;}while(_18i_>=0);} _22=0.;  {int _21i_=2;do{{(*&_22)+=(((*(double *)(_21i_*(ssize_t)sizeof(double)+_20)))*((*(double *)(_21i_*(ssize_t)sizeof(double)+_20)))) ;}_21i_--;}while(_21i_>=0);}if( sqrt(_22)<riblets_riblets_12tol ){  return;};
			if( (*f_)(RESULT_) == _13fl ){  memmove(xl_,RESULT_,(ssize_t)sizeof(double)*(2+1));}else{  memmove(xr_,RESULT_,(ssize_t)sizeof(double)*(2+1));};
		}while(1);halve:;
	}}
	
        double riblets_3yWave(struct RIBLETS_ this_,double x_){{struct freefunc* es=freestack;double RESULT_;
                /* This function gives the local shift at position x of the  */
                /* sinusoidal riblet crest */
		  RESULT_ =0.; {int ii_=1 ;do{{(*&RESULT_ )+=(*(double *)(ii_*this_.amp_.i+this_.amp_.a))*sin(2.*(3.14159265358979323846)/(*(double *)(ii_*this_.lambda_.i+this_.lambda_.a))*x_) ;}ii_+=1;}while(ii_<= this_.waven_);}
        return RESULT_;}}

	int riblets_5isInBody(struct RIBLETS_ *this_,const int coordinates_l,const int coordinates_h,const ssize_t coordinates_i,char *coordinates__){{struct freefunc* es=freestack;int RESULT_;
		double _13yNew;
double _14z_at_p;
_13yNew=(*(double *)((1+coordinates_l)*coordinates_i+coordinates__)) - riblets_3yWave((*this_),(*(double *)(coordinates_l*coordinates_i+coordinates__))); 
		_14z_at_p=fabs((*this_).h_s_*2.*(_13yNew - (*this_).s_*(double)((int)floor(_13yNew/(*this_).s_+0.5)))) - (*this_).h_/2./* z_at_p_straight */; 
		/*z_range = SQRT((this.s/2-this.yTan)^2-(yNew-this.s/2)^2+0*I) */
		/*z_at_p_circ = SQRT(this.rTip^2-(yNew-this.s/2)^2+0*I) + this.zCirc */
		/*RESULT = coordinates(2+LO) < MIN(z_at_p, MIN(z_at_p,IF REAL(z_range)=0 THEN 100 ELSE ABS(z_at_p_circ))) */
		 RESULT_ = (*(double *)((2+coordinates_l)*coordinates_i+coordinates__)) <_14z_at_p;
	return RESULT_;}}

	int riblets_6UisInBody(struct RIBLETS_ *this_,const int coordinates_l,const int coordinates_h,const ssize_t coordinates_i,char *coordinates__) /*!!!NO! DA RIBALTARE */{{struct freefunc* es=freestack;int RESULT_;
		double _13yNew;
double _14z_at_p;
_13yNew=(*(double *)((1+coordinates_l)*coordinates_i+coordinates__)) - riblets_3yWave((*this_),(*(double *)(coordinates_l*coordinates_i+coordinates__))); 
		_14z_at_p=2.-(fabs((*this_).h_s_*2.*(_13yNew - (*this_).s_*(double)((int)floor(_13yNew/(*this_).s_+0.5)))) - (*this_).h_/2.)  /* z_at_p_straight */; 
		/*z_range = SQRT((this.s/2-this.yTan)^2-(yNew-this.s/2)^2+0*I) */
		/*z_at_p_circ = SQRT(this.rTip^2-(yNew-this.s/2)^2+0*I) + this.zCirc */
		/*RESULT = coordinates(2+LO) < MIN(z_at_p, MIN(z_at_p,IF REAL(z_range)=0 THEN 100 ELSE ABS(z_at_p_circ))) */
		 RESULT_ = (*(double *)((2+coordinates_l)*coordinates_i+coordinates__)) >_14z_at_p;
	return RESULT_;}}
		
	void riblets_8edge(char *RESULT_,struct RIBLETS_ this_,const int coordinates_l,const int coordinates_h,const ssize_t coordinates_i,char *coordinates__){{struct freefunc* es=freestack;
                /* This function returns the closest edge to a point of coordinates */
                /* along the y-direction */
		double _14yShift;
double _15yNew;
 (*(double *)(0+RESULT_) )= (*(double *)(coordinates_l*coordinates_i+coordinates__));
                _14yShift=riblets_3yWave(this_,(*(double *)(0+RESULT_))); 
		_15yNew=(*(double*)((coordinates_l+1)*coordinates_i+coordinates__))-_14yShift; 
		 (*(double *)(0+(ssize_t)sizeof(double)+RESULT_) )= ((double)((int)floor(_15yNew/this_.s_))+ 0.5)*this_.s_ + _14yShift;
		 (*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+RESULT_) )= 0.5*this_.h_;
	}}
	
	void riblets_9findEdge(struct RIBLETS_ *this_,struct DNS_ dns_,const int coordinates_l,const int coordinates_h,const ssize_t coordinates_i,char *coordinates__,char *edgeCord_){{struct freefunc* es=freestack;
                /* This function finds the coordinate of point located on the closes edge */
                /* along the direction normal to the closest edge */
		char xe_[(ssize_t)sizeof(double)*(3+1)];
char dsq_[(ssize_t)sizeof(double)*(3+1)];
char newCoord_[(ssize_t)sizeof(double)*(2+1)];
double trigArg_;

  		char _16[(ssize_t)sizeof(double)*(/*SA13*/(1+1+1-1)+1)];
char _19[(ssize_t)sizeof(double)*(/*SA13*/(1+1+1-1)+1)];
{char *_15_;

_15_=coordinates__; {char *_14_=newCoord_;int _14_1=2; do{{ (*(double *)(_14_))=(*(double *)(_15_)); _15_ =coordinates_i+_15_;}_14_+=(ssize_t)sizeof(double);_14_1--;}while(_14_1>=0);}}trigArg_=0.;(*(double *)(2*(ssize_t)sizeof(double)+newCoord_))=0.5*(*this_).h_;  (*(double *)(2*(ssize_t)sizeof(double)+xe_))=(*(double *)(coordinates_l*coordinates_i+coordinates__));  riblets_8edge(_16,(*this_),0,2,(ssize_t)sizeof(double),newCoord_);(*(double *)(2*(ssize_t)sizeof(double)+dsq_))=(((*(double *)(0+(ssize_t)sizeof(double)+_16))-(*(double *)((coordinates_l+1)*coordinates_i+coordinates__)))*((*(double *)(0+(ssize_t)sizeof(double)+_16))-(*(double *)((coordinates_l+1)*coordinates_i+coordinates__))));
  		(*(double *)((ssize_t)sizeof(double)+xe_))=(*(double *)(2*(ssize_t)sizeof(double)+xe_))-(*(double *)(dns_.leng_))/2.;  (*(double *)(3*(ssize_t)sizeof(double)+xe_))=(*(double *)(2*(ssize_t)sizeof(double)+xe_))+(*(double *)(dns_.leng_))/2.;
  		while( (*(double *)(3*(ssize_t)sizeof(double)+xe_))-(*(double *)((ssize_t)sizeof(double)+xe_))>riblets_riblets_12tol){
    			int _17m;
char _18[(ssize_t)sizeof(double)*(/*SA13*/(1+1+1-1)+1)];
_17m=( (*(double *)(3*(ssize_t)sizeof(double)+xe_))-(*(double *)(2*(ssize_t)sizeof(double)+xe_))>(*(double *)(2*(ssize_t)sizeof(double)+xe_))-(*(double *)((ssize_t)sizeof(double)+xe_) ) ?3  :1); 
    			(*(double *)(xe_))=0.382*(*(double *)(_17m*(ssize_t)sizeof(double)+xe_))+0.618*(*(double *)(2*(ssize_t)sizeof(double)+xe_));
    			(*(double *)(newCoord_))=(*(double *)(xe_));
			riblets_8edge(_18,(*this_),0,2,(ssize_t)sizeof(double),newCoord_);(*(double *)(dsq_))=(((*(double *)(xe_))-(*(double *)(coordinates_l*coordinates_i+coordinates__)))*((*(double *)(xe_))-(*(double *)(coordinates_l*coordinates_i+coordinates__))))+(((*(double *)(0+(ssize_t)sizeof(double)+_18))-(*(double *)((coordinates_l+1)*coordinates_i+coordinates__)))*((*(double *)(0+(ssize_t)sizeof(double)+_18))-(*(double *)((coordinates_l+1)*coordinates_i+coordinates__))));
    			if( (*(double *)(dsq_))>=(*(double *)(2*(ssize_t)sizeof(double)+dsq_) )){ (*(double *)(_17m*(ssize_t)sizeof(double)+xe_))=(*(double *)(xe_)); (*(double *)(_17m*(ssize_t)sizeof(double)+dsq_))=(*(double *)(dsq_) );}else{
      				(*(double *)((4-_17m)*(ssize_t)sizeof(double)+xe_))=(*(double *)(2*(ssize_t)sizeof(double)+xe_));  (*(double *)((4-_17m)*(ssize_t)sizeof(double)+dsq_))=(*(double *)(2*(ssize_t)sizeof(double)+dsq_));
      				(*(double *)(2*(ssize_t)sizeof(double)+xe_))=(*(double *)(xe_));  (*(double *)(2*(ssize_t)sizeof(double)+dsq_))=(*(double *)(dsq_));
    			};
  		}
  		(*(double *)(newCoord_))=(*(double *)(2*(ssize_t)sizeof(double)+xe_));
		(*(double *)(0+edgeCord_))=(*(double *)(2*(ssize_t)sizeof(double)+xe_));
		riblets_8edge(_19,(*this_),0,2,(ssize_t)sizeof(double),newCoord_);(*(double *)(0+(ssize_t)sizeof(double)+edgeCord_))=(*(double *)(0+(ssize_t)sizeof(double)+_19));
		(*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+edgeCord_))=0.5*(*this_).h_;
		 for(int ii_=  1 ;ii_<= (*this_).waven_;ii_+=1){
  			 trigArg_ +=  2.*(3.14159265358979323846)*(*(double *)(ii_*(*this_).amp_.i+(*this_).amp_.a))/(*(double *)(ii_*(*this_).lambda_.i+(*this_).lambda_.a))*cos(2.*(3.14159265358979323846)*(*(double *)(2*(ssize_t)sizeof(double)+xe_))/(*(double *)(ii_*(*this_).lambda_.i+(*this_).lambda_.a)));
  		}
		(*(double *)(0+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+(ssize_t)sizeof(double)+edgeCord_))=atan(trigArg_) /* beta (commento geniale XXX TODO) */;
	}}

	void riblets_10cordMod(struct RIBLETS_ *this_,const int pA_l,const int pA_h,const ssize_t pA_i,char *pA__,const int pB_l,const int pB_h,const ssize_t pB_i,char *pB__){{struct freefunc* es=freestack;
                /* This function corrects the coordinate of the neighbour point  */
                /* pB if it crosses a complete riblet crest */
		int _14nA;
int _15nB;
_14nA=riblets_11ribletsCrossed((*this_) ,pA_l,pA_h,pA_i,pA__); 
        	_15nB=riblets_11ribletsCrossed((*this_) ,pB_l,pB_h,pB_i,pB__); 
        	if( ((_14nA!=_15nB )&&( (*(double *)((2+pA_l)*pA_i+pA__))<=(*this_).h_/2.))&&( (*(double *)((2+pB_l)*pB_i+pB__))<=(*this_).h_/2.)){
			(*(double *)((1+pB_l)*pB_i+pB__))=((double)(_15nB)+(( _14nA>_15nB  ?0.5001  : -0.5001)))*(*this_).s_+riblets_3yWave((*this_),(*(double *)((1+pB_l)*pB_i+pB__)));
		};
	}}
	
	int riblets_11ribletsCrossed(struct RIBLETS_ this_,const int coordinates_l,const int coordinates_h,const ssize_t coordinates_i,char *coordinates__){{struct freefunc* es=freestack;int RESULT_;
                /* This function gives the number of riblet crests that are  */
                /* on the left of the point located at coordinates */
		 RESULT_ = (int)floor(((*(double *)((1+coordinates_l)*coordinates_i+coordinates__))-riblets_3yWave(this_,(*(double *)(coordinates_l*coordinates_i+coordinates__)))+this_.s_/2.)/this_.s_) ;
	return RESULT_;}}
	
	
			
