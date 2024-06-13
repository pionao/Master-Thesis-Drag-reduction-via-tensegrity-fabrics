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

extern double riblets_riblets_12tol;
extern void riblets_2readInputFile(struct RIBLETS_ *this_,char *fname_);

	
	extern void riblets_4Bisection(char *RESULT_,int (*f_)(char *s_),char *x1_,char *x2_);

	
        extern double riblets_3yWave(struct RIBLETS_ this_,double x_);


	extern int riblets_5isInBody(struct RIBLETS_ *this_,const int coordinates_l,const int coordinates_h,const ssize_t coordinates_i,char *coordinates__);


	extern int riblets_6UisInBody(struct RIBLETS_ *this_,const int coordinates_l,const int coordinates_h,const ssize_t coordinates_i,char *coordinates__);

		
	extern void riblets_8edge(char *RESULT_,struct RIBLETS_ this_,const int coordinates_l,const int coordinates_h,const ssize_t coordinates_i,char *coordinates__);

	
	extern void riblets_9findEdge(struct RIBLETS_ *this_,struct DNS_ dns_,const int coordinates_l,const int coordinates_h,const ssize_t coordinates_i,char *coordinates__,char *edgeCord_);


	extern void riblets_10cordMod(struct RIBLETS_ *this_,const int pA_l,const int pA_h,const ssize_t pA_i,char *pA__,const int pB_l,const int pB_h,const ssize_t pB_i,char *pB__);

	
	extern int riblets_11ribletsCrossed(struct RIBLETS_ this_,const int coordinates_l,const int coordinates_h,const ssize_t coordinates_i,char *coordinates__);

	
	
			








void analyticalStokesSolution_2stokesSolution(char *RESULT_,struct DNS_ dns_,struct RIBLETS_ *riblet_,const int coordinates_l,const int coordinates_h,const ssize_t coordinates_i,char *coordinates__);

extern void analyticalStokesSolution_2stokesSolution(char *RESULT_,struct DNS_ dns_,struct RIBLETS_ *riblet_,const int coordinates_l,const int coordinates_h,const ssize_t coordinates_i,char *coordinates__);

	


int coco_1applyCoco(const int coord_l,const int coord_h,const ssize_t coord_i,char *coord__,char *eCoord_,struct GRID_ *grid_,struct DNS_ dns_,struct RIBLETS_ *riblet_);
void coco_2signP(char *RESULT_,struct RIBLETS_ riblet_,const int coord_l,const int coord_h,const ssize_t coord_i,char *coord__,const int coord_p1_l,const int coord_p1_h,const ssize_t coord_p1_i,char *coord_p1__,const int coord_p2_l,const int coord_p2_h,const ssize_t coord_p2_i,char *coord_p2__,const int eCoord_l,const int eCoord_h,const ssize_t eCoord_i,char *eCoord__,double p1_,double p2_);
void coco_3prepareCoco(struct GRID_ *grid_,struct GRID_ *prGrid_,struct DNS_ dns_,struct RIBLETS_ *riblet_,const int coord_in_l,const int coord_in_h,const ssize_t coord_in_i,char *coord_in__,const int indx_in_l,const int indx_in_h,const ssize_t indx_in_i,char *indx_in__);
void coco_4imposeCoco(double *coef_,double d_,double d0_,double d2_,struct RIBLETS_ *riblet_,struct DNS_ dns_,const int coord_l,const int coord_h,const ssize_t coord_i,char *coord__,const int coord_in_l,const int coord_in_h,const ssize_t coord_in_i,char *coord_in__);

extern int coco_1applyCoco(const int coord_l,const int coord_h,const ssize_t coord_i,char *coord__,char *eCoord_,struct GRID_ *grid_,struct DNS_ dns_,struct RIBLETS_ *riblet_);

	
	extern void coco_2signP(char *RESULT_,struct RIBLETS_ riblet_,const int coord_l,const int coord_h,const ssize_t coord_i,char *coord__,const int coord_p1_l,const int coord_p1_h,const ssize_t coord_p1_i,char *coord_p1__,const int coord_p2_l,const int coord_p2_h,const ssize_t coord_p2_i,char *coord_p2__,const int eCoord_l,const int eCoord_h,const ssize_t eCoord_i,char *eCoord__,double p1_,double p2_);

	
	
	struct COCO_{int applyCoco_;char Lweight_[(ssize_t)sizeof(double)*(2+1)];char Sweight_[(ssize_t)sizeof(double)*(2+1)];char pSweight_[(ssize_t)sizeof(double)*(2+1)];double laplaceSol0_;double stokesSol0_;double pGrad0_;int iEq_;};
#define COCO_s (ssize_t)sizeof(struct COCO_)

        extern struct COCO_ coco_coco_coco;

	
	extern void coco_3prepareCoco(struct GRID_ *grid_,struct GRID_ *prGrid_,struct DNS_ dns_,struct RIBLETS_ *riblet_,const int coord_in_l,const int coord_in_h,const ssize_t coord_in_i,char *coord_in__,const int indx_in_l,const int indx_in_h,const ssize_t indx_in_i,char *indx_in__);
 
	
	extern void coco_4imposeCoco(double *coef_,double d_,double d0_,double d2_,struct RIBLETS_ *riblet_,struct DNS_ dns_,const int coord_l,const int coord_h,const ssize_t coord_i,char *coord__,const int coord_in_l,const int coord_in_h,const ssize_t coord_in_i,char *coord_in__);

	

/*USE rtchecks */

/**/
struct TENSEGRITY_INIT_{int nx_;int nz_;int n_C_;int n_B_;int n_T_;int n_G_;int n_N_;int n_N_dof_;int n_T_dof_;int n_q_tilde_;int n_P_;int n_int_;int n_tri_int_;double rho_b_;double k_;double sigma_;double h_;double r_;};
#define TENSEGRITY_INIT_s (ssize_t)sizeof(struct TENSEGRITY_INIT_)


/*TENSEGRITY = STRUCTURE[ INTEGER CONSTANT nx,nz,n_C,n_B,n_T,n_G,n_N,n_N_dof,n_T_dof,n_q_tilde,n_P,n_int,n_tri_int,n_t;
                         REAL rho_b,k,sigma,h,r,l_b,I_0,alpha_1,l_per,l_v_1,l_h_1,
                              l_u_l,l_u_s,l_u_l_0,l_h_0,l_u_s_0,l_i_0,; 
                         ARRAY(n_B,2) OF INTEGER B_con;
                         ARRAY(n_T,2) OF INTEGER T_con;
                         ARRAY(n_G,3) OF INTEGER ghost_nodes;
                         ARRAY(n_T) OF REAL l_0;
                         ARRAY(n_P,3,2) OF INTEGER P_mat;
                         ARRAY(n_tri_int,3) OF REAL bar_lambda_mat;
                         ARRAY(n_N_dof) OF REAL X_0;
                         ARRAY(n_q_tilde) OF REAL q_0_tilde;
                         ARRAY(n_t) OF REAL t_vec;
                         ARRAY(n_N_dof) OF REAL X, X_dot;
                         ARRAY(n_q_tilde) OF REAL q_tilde;
                         ARRAY(n_q_tilde,n_t) OF REAL q_tilde_arr;
                         ARRAY(3) OF REAL bar_weights;
                         ARRAY(3,3) OF REAL vert_pos;
                         ARRAY(3) OF REAL vert_vel_zy;
                         POINTER TO REAL time
		   ]*/

/* math_utils.h */

void tensegrity_1MatMult(const int A_l,const int A_h,const ssize_t A_i,const int A__l,const int A__h,const ssize_t A__i,char *A___,const int B_l,const int B_h,const ssize_t B_i,const int B__l,const int B__h,const ssize_t B__i,char *B___,const int C_l,const int C_h,const ssize_t C_i,const int C__l,const int C__h,const ssize_t C__i,char *C___){{struct freefunc* es=freestack;
    double sum_;

     for(int i_=  1 ;i_<= A_h;i_+=1){
         for(int j_=  1 ;j_<= B__h;j_+=1){
             sum_ = 0.;
             for(int k_=  1 ;k_<= A__h;k_+=1){
                 sum_ +=  (*(double *)(k_*A__i+i_*A_i+A___))*(*(double *)(j_*B__i+k_*B_i+B___));
            }
             (*(double *)(j_*C__i+i_*C_i+C___) )= sum_;
        }
    }
}}

void tensegrity_2MatDiff(const int A_l,const int A_h,const ssize_t A_i,const int A__l,const int A__h,const ssize_t A__i,char *A___,const int B_l,const int B_h,const ssize_t B_i,const int B__l,const int B__h,const ssize_t B__i,char *B___,const int C_l,const int C_h,const ssize_t C_i,const int C__l,const int C__h,const ssize_t C__i,char *C___){{struct freefunc* es=freestack;
     for(int i_=  1 ;i_<= A_h;i_+=1){
         for(int j_=  1 ;j_<= B__h;j_+=1){
             (*(double *)(j_*C__i+i_*C_i+C___) )= (*(double *)(j_*A__i+i_*A_i+A___)) - (*(double *)(j_*B__i+i_*B_i+B___));
        }
    }
}}


/* initial_state_utils.h */

void tensegrity_3X_0_comp(const int X_0_l,const int X_0_h,const ssize_t X_0_i,char *X_0__,double h_,double r_,double alpha_1_,double l_per_,int nx_,int nz_,int n_N_,int n_G_,int n_N_dof_,char *ghost_nodes_){{struct freefunc* es=freestack;
    double PI_;

    char T_1_[(ssize_t)sizeof(double)*3*3];

    char T_2_[(ssize_t)sizeof(double)*3*3];

    char vert_low_[(ssize_t)sizeof(double)*4*3];
char vert_low_temp_[(ssize_t)sizeof(double)*4*3];

    ssize_t _4st;
char cell_center_pos_[(ssize_t)sizeof(double)*3];

    char vert_up_[(ssize_t)sizeof(double)*4*3];

    char dx_0_[(ssize_t)sizeof(double)*3] ;

    char dz_0_[(ssize_t)sizeof(double)*3] ;


    int _5n_N_ng;
int _6h;
ssize_t _7i;
struct freefunc X_0_sup_f;char *X_0_sup_;

    int _8h;
ssize_t _9i;
struct freefunc X_0_inf_f;char *X_0_inf_;


    char vert_low_i_[(ssize_t)sizeof(double)*4*3];

    char vert_up_i_[(ssize_t)sizeof(double)*4*3];


    char dx_[(ssize_t)sizeof(double)*3];

    char dz_[(ssize_t)sizeof(double)*3];

    char Dx_[(ssize_t)sizeof(double)*3];

    char Dz_[(ssize_t)sizeof(double)*3] ;


    int _10h;
ssize_t _11i;
struct freefunc X_0_g_f;char *X_0_g_;

    char X_g_[(ssize_t)sizeof(double)*3];


     PI_ = 3.14159265358979323846;

     (*(double *)((ssize_t)sizeof(double)+(ssize_t)sizeof(double)*3+T_1_-((ssize_t)sizeof(double)*3+(ssize_t)sizeof(double))))=cos(alpha_1_);(*(double *)((1+1)*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*3+T_1_-((ssize_t)sizeof(double)*3+(ssize_t)sizeof(double))))=0.;(*(double *)((1+2)*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*3+T_1_-((ssize_t)sizeof(double)*3+(ssize_t)sizeof(double))))=sin(alpha_1_);
     (*(double *)((ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*3+T_1_-((ssize_t)sizeof(double)*3+(ssize_t)sizeof(double))))=0.;(*(double *)((1+1)*(ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*3+T_1_-((ssize_t)sizeof(double)*3+(ssize_t)sizeof(double))))=1.;(*(double *)((1+2)*(ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*3+T_1_-((ssize_t)sizeof(double)*3+(ssize_t)sizeof(double))))=0.;
     (*(double *)((ssize_t)sizeof(double)+3*(ssize_t)sizeof(double)*3+T_1_-((ssize_t)sizeof(double)*3+(ssize_t)sizeof(double))))= - sin(alpha_1_);(*(double *)((1+1)*(ssize_t)sizeof(double)+3*(ssize_t)sizeof(double)*3+T_1_-((ssize_t)sizeof(double)*3+(ssize_t)sizeof(double))))=0.;(*(double *)((1+2)*(ssize_t)sizeof(double)+3*(ssize_t)sizeof(double)*3+T_1_-((ssize_t)sizeof(double)*3+(ssize_t)sizeof(double))))=cos(alpha_1_);

     (*(double *)((ssize_t)sizeof(double)+(ssize_t)sizeof(double)*3+T_2_-((ssize_t)sizeof(double)*3+(ssize_t)sizeof(double))))=cos(PI_/4.+PI_/2.);(*(double *)((1+1)*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*3+T_2_-((ssize_t)sizeof(double)*3+(ssize_t)sizeof(double))))=0.;(*(double *)((1+2)*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*3+T_2_-((ssize_t)sizeof(double)*3+(ssize_t)sizeof(double))))=sin(PI_/4.+PI_/2.);
     (*(double *)((ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*3+T_2_-((ssize_t)sizeof(double)*3+(ssize_t)sizeof(double))))=0.;(*(double *)((1+1)*(ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*3+T_2_-((ssize_t)sizeof(double)*3+(ssize_t)sizeof(double))))=1.;(*(double *)((1+2)*(ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*3+T_2_-((ssize_t)sizeof(double)*3+(ssize_t)sizeof(double))))=0.;
     (*(double *)((ssize_t)sizeof(double)+3*(ssize_t)sizeof(double)*3+T_2_-((ssize_t)sizeof(double)*3+(ssize_t)sizeof(double))))= - sin(PI_/4.+PI_/2.);(*(double *)((1+1)*(ssize_t)sizeof(double)+3*(ssize_t)sizeof(double)*3+T_2_-((ssize_t)sizeof(double)*3+(ssize_t)sizeof(double))))=0.;(*(double *)((1+2)*(ssize_t)sizeof(double)+3*(ssize_t)sizeof(double)*3+T_2_-((ssize_t)sizeof(double)*3+(ssize_t)sizeof(double))))=cos(PI_/4.+PI_/2.);
    
     (*(double *)((ssize_t)sizeof(double)+(ssize_t)sizeof(double)*4+vert_low_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))))=sqrt(2.)*r_;(*(double *)((1+1)*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*4+vert_low_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))))=sqrt(2.)*r_;(*(double *)((1+2)*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*4+vert_low_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))))=0.;(*(double *)((1+3)*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*4+vert_low_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))))=0.;
     (*(double *)((ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*4+vert_low_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))))=0.;(*(double *)((1+1)*(ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*4+vert_low_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))))=0.;(*(double *)((1+2)*(ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*4+vert_low_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))))=0.;(*(double *)((1+3)*(ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*4+vert_low_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))))=0.;
     (*(double *)((ssize_t)sizeof(double)+3*(ssize_t)sizeof(double)*4+vert_low_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))))=sqrt(2.)*r_;(*(double *)((1+1)*(ssize_t)sizeof(double)+3*(ssize_t)sizeof(double)*4+vert_low_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))))=0.;(*(double *)((1+2)*(ssize_t)sizeof(double)+3*(ssize_t)sizeof(double)*4+vert_low_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))))=0.;(*(double *)((1+3)*(ssize_t)sizeof(double)+3*(ssize_t)sizeof(double)*4+vert_low_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))))=sqrt(2.)*r_;

    _4st=(ssize_t)sizeof(double)*4+(ssize_t)sizeof(double); memmove(_4st+vert_low_temp_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double)),_4st+vert_low_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double)),(ssize_t)sizeof(double)*4*3);
    tensegrity_1MatMult(1,3,(ssize_t)sizeof(double)*3,1,3,(ssize_t)sizeof(double),T_1_-((ssize_t)sizeof(double)*3+(ssize_t)sizeof(double)) ,1,3,(ssize_t)sizeof(double)*4,1,4,(ssize_t)sizeof(double),vert_low_temp_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double)) ,1,3,(ssize_t)sizeof(double)*4,1,4,(ssize_t)sizeof(double),vert_low_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double)));

     (*(double *)((ssize_t)sizeof(double)+cell_center_pos_-((ssize_t)sizeof(double))))=(*(double *)((ssize_t)sizeof(double)+(ssize_t)sizeof(double)*4+vert_low_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))))/2.;(*(double *)((1+1)*(ssize_t)sizeof(double)+cell_center_pos_-((ssize_t)sizeof(double))))=0.;(*(double *)((1+2)*(ssize_t)sizeof(double)+cell_center_pos_-((ssize_t)sizeof(double))))=(*(double *)((ssize_t)sizeof(double)+3*(ssize_t)sizeof(double)*4+vert_low_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))))/2.;
    
     for(int i_=  1 ;i_<= 3 ;i_+=1){ for(int j_=  1 ;j_<= 4;j_+=1){
         (*(double *)(j_*(ssize_t)sizeof(double)+i_*(ssize_t)sizeof(double)*4+vert_low_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))) )-=  (*(double *)(i_*(ssize_t)sizeof(double)+cell_center_pos_-((ssize_t)sizeof(double))));
    }}
    
    tensegrity_1MatMult(1,3,(ssize_t)sizeof(double)*3,1,3,(ssize_t)sizeof(double),T_2_-((ssize_t)sizeof(double)*3+(ssize_t)sizeof(double)) ,1,3,(ssize_t)sizeof(double)*4,1,4,(ssize_t)sizeof(double),vert_low_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double)) ,1,3,(ssize_t)sizeof(double)*4,1,4,(ssize_t)sizeof(double),vert_up_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double)));
     (*(double *)((ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*4+vert_up_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))))=h_;(*(double *)((1+1)*(ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*4+vert_up_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))))=h_;(*(double *)((1+2)*(ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*4+vert_up_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))))=h_;(*(double *)((1+3)*(ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*4+vert_up_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))))=h_;

     (*(double *)((ssize_t)sizeof(double)+dx_0_-((ssize_t)sizeof(double))))=(*(double *)(2*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*4+vert_up_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))));(*(double *)((1+1)*(ssize_t)sizeof(double)+dx_0_-((ssize_t)sizeof(double))))=0.;(*(double *)((1+2)*(ssize_t)sizeof(double)+dx_0_-((ssize_t)sizeof(double))))=0.; (*(double *)((ssize_t)sizeof(double)+dz_0_-((ssize_t)sizeof(double))))=0.;(*(double *)((1+1)*(ssize_t)sizeof(double)+dz_0_-((ssize_t)sizeof(double))))=0.;(*(double *)((1+2)*(ssize_t)sizeof(double)+dz_0_-((ssize_t)sizeof(double))))=(*(double *)((ssize_t)sizeof(double)+3*(ssize_t)sizeof(double)*4+vert_up_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double)))); for(int i_=  1 ;i_<= 3 ;i_+=1){ for(int j_=  1 ;j_<= 4;j_+=1){
         (*(double *)(j_*(ssize_t)sizeof(double)+i_*(ssize_t)sizeof(double)*4+vert_low_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))) )= (*(double *)(j_*(ssize_t)sizeof(double)+i_*(ssize_t)sizeof(double)*4+vert_low_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))) )- (*(double *)(i_*(ssize_t)sizeof(double)+dx_0_-((ssize_t)sizeof(double))) )- (*(double *)(i_*(ssize_t)sizeof(double)+dz_0_-((ssize_t)sizeof(double))));
         (*(double *)(j_*(ssize_t)sizeof(double)+i_*(ssize_t)sizeof(double)*4+vert_up_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double)))  )= (*(double *)(j_*(ssize_t)sizeof(double)+i_*(ssize_t)sizeof(double)*4+vert_up_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double)))  )- (*(double *)(i_*(ssize_t)sizeof(double)+dx_0_-((ssize_t)sizeof(double))) )- (*(double *)(i_*(ssize_t)sizeof(double)+dz_0_-((ssize_t)sizeof(double))));
    }}

    _5n_N_ng=n_N_-n_G_; 

    _6h=(int)floor((double)(3*_5n_N_ng)/2.);_7i=(ssize_t)sizeof(double)*_6h;
X_0_sup_=malloc(_7i);if(X_0_sup_==NULL)X_0_sup_=errmalloc();X_0_sup_-=(ssize_t)sizeof(double);atblockexit(X_0_sup_f,free,X_0_sup_+(ssize_t)sizeof(double));
_8h=(int)floor((double)(3*_5n_N_ng)/2.);_9i=(ssize_t)sizeof(double)*_8h;
X_0_inf_=malloc(_9i);if(X_0_inf_==NULL)X_0_inf_=errmalloc();X_0_inf_-=(ssize_t)sizeof(double);atblockexit(X_0_inf_f,free,X_0_inf_+(ssize_t)sizeof(double));
 for(int i_=  1 ;i_<= nz_ ;i_+=1){ for(int j_=  1 ;j_<= nx_;j_+=1){
         (*(double *)((ssize_t)sizeof(double)+dx_-((ssize_t)sizeof(double))))=(double)((j_-1))*l_per_;(*(double *)((1+1)*(ssize_t)sizeof(double)+dx_-((ssize_t)sizeof(double))))=0.;(*(double *)((1+2)*(ssize_t)sizeof(double)+dx_-((ssize_t)sizeof(double))))=0.;
         (*(double *)((ssize_t)sizeof(double)+dz_-((ssize_t)sizeof(double))))=0.;(*(double *)((1+1)*(ssize_t)sizeof(double)+dz_-((ssize_t)sizeof(double))))=0.;(*(double *)((1+2)*(ssize_t)sizeof(double)+dz_-((ssize_t)sizeof(double))))=(double)((i_-1))*l_per_;
         for(int k_=  1 ;k_<= 3 ;k_+=1){ for(int m_=  1 ;m_<=  4;m_+=1){
             (*(double *)(m_*(ssize_t)sizeof(double)+k_*(ssize_t)sizeof(double)*4+vert_low_i_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))) )= (*(double *)(m_*(ssize_t)sizeof(double)+k_*(ssize_t)sizeof(double)*4+vert_low_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))) )+ (*(double *)(k_*(ssize_t)sizeof(double)+dx_-((ssize_t)sizeof(double))) )+ (*(double *)(k_*(ssize_t)sizeof(double)+dz_-((ssize_t)sizeof(double))));
             (*(double *)(m_*(ssize_t)sizeof(double)+k_*(ssize_t)sizeof(double)*4+vert_up_i_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double)))  )= (*(double *)(m_*(ssize_t)sizeof(double)+k_*(ssize_t)sizeof(double)*4+vert_up_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))) )+ (*(double *)(k_*(ssize_t)sizeof(double)+dx_-((ssize_t)sizeof(double))) )+ (*(double *)(k_*(ssize_t)sizeof(double)+dz_-((ssize_t)sizeof(double))));
        }}
         for(int k_=  1 ;k_<= 4;k_+=1){
             (*(double *)(((int)floor((double)(3*4*(i_+(j_-1)*nz_)-(3*4-1)+3*(k_-1))))*(ssize_t)sizeof(double)+X_0_sup_)   )= (*(double *)(k_*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*4+vert_up_i_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))));
             (*(double *)(((int)floor((double)(3*4*(i_+(j_-1)*nz_)-(3*4-1)+3*(k_-1)+1)))*(ssize_t)sizeof(double)+X_0_sup_) )= (*(double *)(k_*(ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*4+vert_up_i_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))));
             (*(double *)(((int)floor((double)(3*4*(i_+(j_-1)*nz_)-(3*4-1)+3*(k_-1)+2)))*(ssize_t)sizeof(double)+X_0_sup_) )= (*(double *)(k_*(ssize_t)sizeof(double)+3*(ssize_t)sizeof(double)*4+vert_up_i_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))));
             (*(double *)(((int)floor((double)(3*4*(i_+(j_-1)*nz_)-(3*4-1)+3*(k_-1))))*(ssize_t)sizeof(double)+X_0_inf_)   )= (*(double *)(k_*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*4+vert_low_i_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))));
             (*(double *)(((int)floor((double)(3*4*(i_+(j_-1)*nz_)-(3*4-1)+3*(k_-1)+1)))*(ssize_t)sizeof(double)+X_0_inf_) )= (*(double *)(k_*(ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*4+vert_low_i_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))));
             (*(double *)(((int)floor((double)(3*4*(i_+(j_-1)*nz_)-(3*4-1)+3*(k_-1)+2)))*(ssize_t)sizeof(double)+X_0_inf_) )= (*(double *)(k_*(ssize_t)sizeof(double)+3*(ssize_t)sizeof(double)*4+vert_low_i_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))));
        }
    }}

     (*(double *)((ssize_t)sizeof(double)+Dx_-((ssize_t)sizeof(double))))=(double)(nx_)*l_per_;(*(double *)((1+1)*(ssize_t)sizeof(double)+Dx_-((ssize_t)sizeof(double))))=0.;(*(double *)((1+2)*(ssize_t)sizeof(double)+Dx_-((ssize_t)sizeof(double))))=0.;
     (*(double *)((ssize_t)sizeof(double)+Dz_-((ssize_t)sizeof(double))))=0.;(*(double *)((1+1)*(ssize_t)sizeof(double)+Dz_-((ssize_t)sizeof(double))))=0.;(*(double *)((1+2)*(ssize_t)sizeof(double)+Dz_-((ssize_t)sizeof(double))))=(double)(nz_)*l_per_;

    _10h=3*n_G_;_11i=(ssize_t)sizeof(double)*_10h;
X_0_g_=malloc(_11i);if(X_0_g_==NULL)X_0_g_=errmalloc();X_0_g_-=(ssize_t)sizeof(double);atblockexit(X_0_g_f,free,X_0_g_+(ssize_t)sizeof(double));
 for(int i_=  1 ;i_<= n_G_;i_+=1){
        int _12parent_ind;
int _13per_dir;
_12parent_ind=(*(int*)(2*(ssize_t)sizeof(int)+i_*(ssize_t)sizeof(int)*3+ghost_nodes_)); 
        _13per_dir=(*(int*)(3*(ssize_t)sizeof(int)+i_*(ssize_t)sizeof(int)*3+ghost_nodes_)); 

        if( _13per_dir == 1 ){
             (*(double *)((ssize_t)sizeof(double)+X_g_-((ssize_t)sizeof(double))) )= (*(double *)(((int)floor((double)(3*_12parent_ind-2)))*(ssize_t)sizeof(double)+X_0_sup_) )- (*(double *)((ssize_t)sizeof(double)+Dx_-((ssize_t)sizeof(double))));
             (*(double *)(2*(ssize_t)sizeof(double)+X_g_-((ssize_t)sizeof(double))) )= (*(double *)(((int)floor((double)(3*_12parent_ind-1)))*(ssize_t)sizeof(double)+X_0_sup_) )- (*(double *)(2*(ssize_t)sizeof(double)+Dx_-((ssize_t)sizeof(double))));
             (*(double *)(3*(ssize_t)sizeof(double)+X_g_-((ssize_t)sizeof(double))) )= (*(double *)(((int)floor((double)(3*_12parent_ind)))*(ssize_t)sizeof(double)+X_0_sup_)   )- (*(double *)(3*(ssize_t)sizeof(double)+Dx_-((ssize_t)sizeof(double))));
        }else{ if( _13per_dir == 2 ){
             (*(double *)((ssize_t)sizeof(double)+X_g_-((ssize_t)sizeof(double))) )= (*(double *)(((int)floor((double)(3*_12parent_ind-2)))*(ssize_t)sizeof(double)+X_0_sup_) )- (*(double *)((ssize_t)sizeof(double)+Dz_-((ssize_t)sizeof(double))));
             (*(double *)(2*(ssize_t)sizeof(double)+X_g_-((ssize_t)sizeof(double))) )= (*(double *)(((int)floor((double)(3*_12parent_ind-1)))*(ssize_t)sizeof(double)+X_0_sup_) )- (*(double *)(2*(ssize_t)sizeof(double)+Dz_-((ssize_t)sizeof(double))));
             (*(double *)(3*(ssize_t)sizeof(double)+X_g_-((ssize_t)sizeof(double))) )= (*(double *)(((int)floor((double)(3*_12parent_ind)))*(ssize_t)sizeof(double)+X_0_sup_)   )- (*(double *)(3*(ssize_t)sizeof(double)+Dz_-((ssize_t)sizeof(double))));
        }else{ if( _13per_dir == 3 ){
             (*(double *)((ssize_t)sizeof(double)+X_g_-((ssize_t)sizeof(double))) )= (*(double *)(((int)floor((double)(3*_12parent_ind-2)))*(ssize_t)sizeof(double)+X_0_sup_) )+ (*(double *)((ssize_t)sizeof(double)+Dz_-((ssize_t)sizeof(double))));
             (*(double *)(2*(ssize_t)sizeof(double)+X_g_-((ssize_t)sizeof(double))) )= (*(double *)(((int)floor((double)(3*_12parent_ind-1)))*(ssize_t)sizeof(double)+X_0_sup_) )+ (*(double *)(2*(ssize_t)sizeof(double)+Dz_-((ssize_t)sizeof(double))));
             (*(double *)(3*(ssize_t)sizeof(double)+X_g_-((ssize_t)sizeof(double))) )= (*(double *)(((int)floor((double)(3*_12parent_ind)))*(ssize_t)sizeof(double)+X_0_sup_)   )+ (*(double *)(3*(ssize_t)sizeof(double)+Dz_-((ssize_t)sizeof(double))));
        }else{ if( _13per_dir == 4 ){
             (*(double *)((ssize_t)sizeof(double)+X_g_-((ssize_t)sizeof(double))) )= (*(double *)(((int)floor((double)(3*_12parent_ind-2)))*(ssize_t)sizeof(double)+X_0_sup_) )+ (*(double *)((ssize_t)sizeof(double)+Dx_-((ssize_t)sizeof(double))));
             (*(double *)(2*(ssize_t)sizeof(double)+X_g_-((ssize_t)sizeof(double))) )= (*(double *)(((int)floor((double)(3*_12parent_ind-1)))*(ssize_t)sizeof(double)+X_0_sup_) )+ (*(double *)(2*(ssize_t)sizeof(double)+Dx_-((ssize_t)sizeof(double))));
             (*(double *)(3*(ssize_t)sizeof(double)+X_g_-((ssize_t)sizeof(double))) )= (*(double *)(((int)floor((double)(3*_12parent_ind)))*(ssize_t)sizeof(double)+X_0_sup_)   )+ (*(double *)(3*(ssize_t)sizeof(double)+Dx_-((ssize_t)sizeof(double))));
        };};};};

      (*(double *)((3*i_-2)*(ssize_t)sizeof(double)+X_0_g_) )= (*(double *)((ssize_t)sizeof(double)+X_g_-((ssize_t)sizeof(double))));
      (*(double *)((3*i_-1)*(ssize_t)sizeof(double)+X_0_g_) )= (*(double *)(2*(ssize_t)sizeof(double)+X_g_-((ssize_t)sizeof(double))));
      (*(double *)((3*i_)*(ssize_t)sizeof(double)+X_0_g_)   )= (*(double *)(3*(ssize_t)sizeof(double)+X_g_-((ssize_t)sizeof(double)))  );
    }

     for(int i_=  1 ;i_<= (int)floor((double)(3*_5n_N_ng)/2.);i_+=1){
         (*(double *)(i_*X_0_i+X_0__) )= (*(double *)(i_*(ssize_t)sizeof(double)+X_0_sup_));
    }

     for(int i_=  (int)floor((double)(3*_5n_N_ng)/2.+1.) ;i_<= (int)floor((double)(2*3*_5n_N_ng)/2.);i_+=1){
         (*(double *)(i_*X_0_i+X_0__) )= (*(double *)((i_-(int)floor((double)(3*_5n_N_ng)/2.+1.)+1)*(ssize_t)sizeof(double)+X_0_inf_));
    }

     for(int i_=  (int)floor((double)(2*3*_5n_N_ng)/2.+1.) ;i_<= (int)floor((double)(2*3*_5n_N_ng)/2.+(double)(3*n_G_));i_+=1){
         (*(double *)(i_*X_0_i+X_0__) )= (*(double *)((i_-(int)floor((double)(2*3*_5n_N_ng)/2.+1.)+1)*(ssize_t)sizeof(double)+X_0_g_));
    }
free(X_0_g_f.ptr);free(X_0_inf_f.ptr);free(X_0_sup_f.ptr);freestack=es;}}


void tensegrity_4q_0_tilde_comp(const int q_0_tilde_l,const int q_0_tilde_h,const ssize_t q_0_tilde_i,char *q_0_tilde__,const int X_0_l,const int X_0_h,const ssize_t X_0_i,char *X_0__,const int B_con_l,const int B_con_h,const ssize_t B_con_i,const int B_con__l,const int B_con__h,const ssize_t B_con__i,char *B_con___,double l_b_,int n_q_tilde_,int n_B_){{struct freefunc* es=freestack;

    char vec_dir_[(ssize_t)sizeof(double)*3];

    char X_A_[(ssize_t)sizeof(double)*3];

    char X_B_[(ssize_t)sizeof(double)*3];

    int ind_A_;

    int ind_B_;


     for(int i_=  1 ;i_<= n_B_;i_+=1){
         ind_A_ = (*(int *)(B_con__i+i_*B_con_i+B_con___));
         ind_B_ = (*(int *)(2*B_con__i+i_*B_con_i+B_con___));

         (*(double *)((ssize_t)sizeof(double)+X_A_-((ssize_t)sizeof(double))) )= (*(double *)((3*ind_A_-2)*X_0_i+X_0__));
         (*(double *)(2*(ssize_t)sizeof(double)+X_A_-((ssize_t)sizeof(double))) )= (*(double *)((3*ind_A_-1)*X_0_i+X_0__));
         (*(double *)(3*(ssize_t)sizeof(double)+X_A_-((ssize_t)sizeof(double))) )= (*(double *)((3*ind_A_)*X_0_i+X_0__));

         (*(double *)((ssize_t)sizeof(double)+X_B_-((ssize_t)sizeof(double))) )= (*(double *)((3*ind_B_-2)*X_0_i+X_0__));
         (*(double *)(2*(ssize_t)sizeof(double)+X_B_-((ssize_t)sizeof(double))) )= (*(double *)((3*ind_B_-1)*X_0_i+X_0__));
         (*(double *)(3*(ssize_t)sizeof(double)+X_B_-((ssize_t)sizeof(double))) )= (*(double *)((3*ind_B_)*X_0_i+X_0__));

         for(int k_=  1 ;k_<= 3;k_+=1){
             (*(double *)(k_*(ssize_t)sizeof(double)+vec_dir_-((ssize_t)sizeof(double))) )= ((*(double *)(k_*(ssize_t)sizeof(double)+X_B_-((ssize_t)sizeof(double))) )- (*(double *)(k_*(ssize_t)sizeof(double)+X_A_-((ssize_t)sizeof(double)))))/l_b_;
        }

         (*(double *)((2*i_-1+2*n_B_)*q_0_tilde_i+q_0_tilde__) )= acos((*(double *)(3*(ssize_t)sizeof(double)+vec_dir_-((ssize_t)sizeof(double)))));
         (*(double *)((2*i_+2*n_B_)*q_0_tilde_i+q_0_tilde__)   )= atan2((*(double *)(2*(ssize_t)sizeof(double)+vec_dir_-((ssize_t)sizeof(double)))) ,(*(double *)((ssize_t)sizeof(double)+vec_dir_-((ssize_t)sizeof(double)))));
    }
}}

/* dof_utils.h */

void tensegrity_5X_dot_comp(const int X_dot_l,const int X_dot_h,const ssize_t X_dot_i,char *X_dot__,int n_N_dof_,int n_N_,int n_G_,double l_b_,const int q_tilde_l,const int q_tilde_h,const ssize_t q_tilde_i,char *q_tilde__,const int ghost_nodes_l,const int ghost_nodes_h,const ssize_t ghost_nodes_i,const int ghost_nodes__l,const int ghost_nodes__h,const ssize_t ghost_nodes__i,char *ghost_nodes___){{struct freefunc* es=freestack;

     for(int i_=  1 ;i_<= (int)floor((double)((n_N_-n_G_))/2.);i_+=1){
         (*(double *)((3*i_-2)*X_dot_i+X_dot__) )= l_b_*(cos((*(double *)((2*i_-1+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*cos((*(double *)((2*i_+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*(*(double *)((2*i_-1)*q_tilde_i+q_tilde__))-sin((*(double *)((2*i_-1+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*sin((*(double *)((2*i_+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*(*(double *)((2*i_)*q_tilde_i+q_tilde__)));
         (*(double *)((3*i_-1)*X_dot_i+X_dot__) )= l_b_*(cos((*(double *)((2*i_-1+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*sin((*(double *)((2*i_+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*(*(double *)((2*i_-1)*q_tilde_i+q_tilde__))+sin((*(double *)((2*i_-1+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*cos((*(double *)((2*i_+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*(*(double *)((2*i_)*q_tilde_i+q_tilde__)));
         (*(double *)((3*i_)*X_dot_i+X_dot__)   )=  - l_b_*sin((*(double *)((2*i_-1+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*(*(double *)((2*i_-1)*q_tilde_i+q_tilde__));
    }

     for(int i_=  1 ;i_<= n_G_;i_+=1){
        int _6ghost_ind;
int _7parent_ind;
_6ghost_ind=(*(int*)(ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___)); 
        _7parent_ind=(*(int*)(2*ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___)); 

         (*(double *)((3*_6ghost_ind-2)*X_dot_i+X_dot__) )= (*(double *)((3*_7parent_ind-2)*X_dot_i+X_dot__));
         (*(double *)((3*_6ghost_ind-1)*X_dot_i+X_dot__) )= (*(double *)((3*_7parent_ind-1)*X_dot_i+X_dot__));
         (*(double *)((3*_6ghost_ind)*X_dot_i+X_dot__)   )= (*(double *)((3*_7parent_ind)*X_dot_i+X_dot__));
    }
}}

void tensegrity_6X_comp(const int X_l,const int X_h,const ssize_t X_i,char *X__,int n_N_dof_,int n_N_,int n_G_,int nx_,int nz_,double l_per_,double l_b_,const int q_tilde_l,const int q_tilde_h,const ssize_t q_tilde_i,char *q_tilde__,const int X_0_l,const int X_0_h,const ssize_t X_0_i,char *X_0__,const int ghost_nodes_l,const int ghost_nodes_h,const ssize_t ghost_nodes_i,const int ghost_nodes__l,const int ghost_nodes__h,const ssize_t ghost_nodes__i,char *ghost_nodes___){{struct freefunc* es=freestack;

    {char *_8_;

_8_=X_l*X_0_i+X_0__; {char *_7_=X_l*X_i+X__;int _7_1=X_h-X_l; do{{ (*(double *)(_7_))=(*(double *)(_8_)); _8_ =X_0_i+_8_;}_7_+=X_i;_7_1--;}while(_7_1>=0);}} 

     for(int i_=  1 ;i_<= (int)floor((double)((n_N_-n_G_))/2.);i_+=1){
         (*(double *)((3*i_-2)*X_i+X__) )= (*(double *)((3*i_-2+3*(int)floor((double)((n_N_-n_G_))/2.))*X_0_i+X_0__)) + l_b_*sin((*(double *)((2*i_-1+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*cos((*(double *)((2*i_+(n_N_-n_G_))*q_tilde_i+q_tilde__)));
         (*(double *)((3*i_-1)*X_i+X__) )= (*(double *)((3*i_-1+3*(int)floor((double)((n_N_-n_G_))/2.))*X_0_i+X_0__)) + l_b_*sin((*(double *)((2*i_-1+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*sin((*(double *)((2*i_+(n_N_-n_G_))*q_tilde_i+q_tilde__)));
         (*(double *)((3*i_)*X_i+X__)   )= (*(double *)((3*i_+3*(int)floor((double)((n_N_-n_G_))/2.))*X_0_i+X_0__)) + l_b_*cos((*(double *)((2*i_-1+(n_N_-n_G_))*q_tilde_i+q_tilde__)));
    }

     for(int i_=  1 ;i_<= n_G_;i_+=1){
        int _9ghost_ind;
int _10parent_ind;
int _11per_dir;
_9ghost_ind=(*(int*)(ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___)); 
        _10parent_ind=(*(int*)(2*ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___)); 
        _11per_dir=(*(int*)(3*ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___)); 

        if( _11per_dir == 1 ){
             (*(double *)((3*_9ghost_ind-2)*X_i+X__) )= (*(double *)((3*_10parent_ind-2)*X_i+X__) )- (double)(nx_)*l_per_;
             (*(double *)((3*_9ghost_ind-1)*X_i+X__) )= (*(double *)((3*_10parent_ind-1)*X_i+X__) );
             (*(double *)((3*_9ghost_ind)*X_i+X__)   )= (*(double *)((3*_10parent_ind)*X_i+X__));
        }else{ if( _11per_dir == 2 ){
             (*(double *)((3*_9ghost_ind-2)*X_i+X__) )= (*(double *)((3*_10parent_ind-2)*X_i+X__) );
             (*(double *)((3*_9ghost_ind-1)*X_i+X__) )= (*(double *)((3*_10parent_ind-1)*X_i+X__));
             (*(double *)((3*_9ghost_ind)*X_i+X__)   )= (*(double *)((3*_10parent_ind)*X_i+X__)   )- (double)(nz_)*l_per_;
        }else{ if( _11per_dir == 3 ){
             (*(double *)((3*_9ghost_ind-2)*X_i+X__) )= (*(double *)((3*_10parent_ind-2)*X_i+X__) );
             (*(double *)((3*_9ghost_ind-1)*X_i+X__) )= (*(double *)((3*_10parent_ind-1)*X_i+X__));
             (*(double *)((3*_9ghost_ind)*X_i+X__)   )= (*(double *)((3*_10parent_ind)*X_i+X__)   )+ (double)(nz_)*l_per_;
        }else{ if( _11per_dir == 4 ){
             (*(double *)((3*_9ghost_ind-2)*X_i+X__) )= (*(double *)((3*_10parent_ind-2)*X_i+X__) )+ (double)(nx_)*l_per_;
             (*(double *)((3*_9ghost_ind-1)*X_i+X__) )= (*(double *)((3*_10parent_ind-1)*X_i+X__) );
             (*(double *)((3*_9ghost_ind)*X_i+X__)   )= (*(double *)((3*_10parent_ind)*X_i+X__));
        };};};};
    }
}}

/* Matrices_utils.h */

void tensegrity_7B_con_comp(const int B_con_l,const int B_con_h,const ssize_t B_con_i,const int B_con__l,const int B_con__h,const ssize_t B_con__i,char *B_con___,int n_B_,int n_C_){{struct freefunc* es=freestack;
    
     for(int i_=  1 ;i_<= n_C_;i_+=1){
         (*(int *)(B_con__i+(4*i_-3)*B_con_i+B_con___) )= 4*n_C_+1 + 4*(i_-1);
         (*(int *)(2*B_con__i+(4*i_-3)*B_con_i+B_con___) )= 1 + 4*(i_-1);
         (*(int *)(B_con__i+(4*i_-2)*B_con_i+B_con___) )= 4*n_C_+2 + 4*(i_-1);
         (*(int *)(2*B_con__i+(4*i_-2)*B_con_i+B_con___) )= 2 + 4*(i_-1);
         (*(int *)(B_con__i+(4*i_-1)*B_con_i+B_con___) )= 4*n_C_+3 + 4*(i_-1);
         (*(int *)(2*B_con__i+(4*i_-1)*B_con_i+B_con___) )= 3 + 4*(i_-1);
         (*(int *)(B_con__i+(4*i_)*B_con_i+B_con___)   )= 4*n_C_+4 + 4*(i_-1);
         (*(int *)(2*B_con__i+(4*i_)*B_con_i+B_con___)   )= 4 + 4*(i_-1);
    }
}} 


void tensegrity_8T_comp(const int T_con_l,const int T_con_h,const ssize_t T_con_i,char *T_con__,const int ghost_nodes_l,const int ghost_nodes_h,const ssize_t ghost_nodes_i,char *ghost_nodes__,const int l_0_l,const int l_0_h,const ssize_t l_0_i,char *l_0__,int nx_,int nz_,int n_C_,int n_T_,int n_G_,double l_u_s_0_,double l_u_l_0_,double l_i_0_){{struct freefunc* es=freestack;

    ssize_t _9i;
ssize_t _10st;
struct freefunc Ten_cell_up_f;char *Ten_cell_up_;


    int count_1_ ;


    int count_2_ ;

    int count_g_ ;


    int count_3_ ;


    int count_4_ ;


    _9i=(ssize_t)sizeof(int)*10*n_C_;_10st=(ssize_t)sizeof(int)*10+(ssize_t)sizeof(int);
Ten_cell_up_=malloc(_9i);if(Ten_cell_up_==NULL)Ten_cell_up_=errmalloc();Ten_cell_up_-=_10st;atblockexit(Ten_cell_up_f,free,Ten_cell_up_+_10st);
 for(int j_=  1 ;j_<= nx_ ;j_+=1){ for(int i_=  1 ;i_<= nz_;i_+=1){

        int _11ind;
int mtemp12;
int mtemp13;
_11ind=(int)floor((double)(i_+nz_*(j_-1))); 
        
         (*(int *)((ssize_t)sizeof(int)+_11ind*(ssize_t)sizeof(int)*10+Ten_cell_up_) )= (int)floor((double)(4*(i_+(j_-1)*nz_)-3));
         (*(int *)(2*(ssize_t)sizeof(int)+_11ind*(ssize_t)sizeof(int)*10+Ten_cell_up_) )= (int)floor((double)(4*(i_+(j_-1)*nz_)-2));
         (*(int *)(3*(ssize_t)sizeof(int)+_11ind*(ssize_t)sizeof(int)*10+Ten_cell_up_) )= (int)floor((double)(4*(i_+(j_-1)*nz_)-1));
         (*(int *)(4*(ssize_t)sizeof(int)+_11ind*(ssize_t)sizeof(int)*10+Ten_cell_up_) )= (int)floor((double)(4*(i_+(j_-1)*nz_)));

        if( !(((mtemp12=i_ ,mtemp12% nz_+((mtemp12>=0)==(nz_>=0)?0:nz_))==0) )){
             (*(int *)(5*(ssize_t)sizeof(int)+_11ind*(ssize_t)sizeof(int)*10+Ten_cell_up_) )= (int)floor((double)(i_+(j_-1)*nz_+1));
        };

        if( !(((mtemp13=j_ ,mtemp13% nx_+((mtemp13>=0)==(nx_>=0)?0:nx_))==0) )){
             (*(int *)(6*(ssize_t)sizeof(int)+_11ind*(ssize_t)sizeof(int)*10+Ten_cell_up_) )= (int)floor((double)(i_+j_*nz_));
        };

        if( j_ == 1 ){
             (*(int *)(7*(ssize_t)sizeof(int)+_11ind*(ssize_t)sizeof(int)*10+Ten_cell_up_) )= (int)floor((double)(i_+nz_*(nx_-1)));
        };

        if( i_ == 1 ){
             (*(int *)(8*(ssize_t)sizeof(int)+_11ind*(ssize_t)sizeof(int)*10+Ten_cell_up_) )= (int)floor((double)(nz_+nz_*(j_-1)));
        };

        if( i_ == nz_ ){
             (*(int *)(9*(ssize_t)sizeof(int)+_11ind*(ssize_t)sizeof(int)*10+Ten_cell_up_) )= (int)floor((double)(1+nz_*(j_-1)));
        };

        if( j_ == nx_ ){ 
             (*(int *)(10*(ssize_t)sizeof(int)+_11ind*(ssize_t)sizeof(int)*10+Ten_cell_up_) )= i_;
        };
    }}

     count_1_= 0; for(int i_=  1 ;i_<= (int)floor((double)(nx_*nz_));i_+=1){

        int _14r_con;
int _15u_con;
_14r_con=(*(int *)(5*(ssize_t)sizeof(int)+i_*(ssize_t)sizeof(int)*10+Ten_cell_up_)); 
        _15u_con=(*(int *)(6*(ssize_t)sizeof(int)+i_*(ssize_t)sizeof(int)*10+Ten_cell_up_)); 

        if( !((_14r_con == 0) )){
             count_1_ +=  1;

             (*(int *)((ssize_t)sizeof(int)+(3*count_1_-2)*T_con_i+T_con__) )= (*(int *)(2*(ssize_t)sizeof(int)+i_*(ssize_t)sizeof(int)*10+Ten_cell_up_));
             (*(int *)(2*(ssize_t)sizeof(int)+(3*count_1_-2)*T_con_i+T_con__) )= (*(int *)((ssize_t)sizeof(int)+_14r_con*(ssize_t)sizeof(int)*10+Ten_cell_up_));
             (*(int *)((ssize_t)sizeof(int)+(3*count_1_-1)*T_con_i+T_con__) )= (*(int *)((ssize_t)sizeof(int)+_14r_con*(ssize_t)sizeof(int)*10+Ten_cell_up_));
             (*(int *)(2*(ssize_t)sizeof(int)+(3*count_1_-1)*T_con_i+T_con__) )= (*(int *)(3*(ssize_t)sizeof(int)+i_*(ssize_t)sizeof(int)*10+Ten_cell_up_));
             (*(int *)((ssize_t)sizeof(int)+(3*count_1_)*T_con_i+T_con__)   )= (*(int *)(3*(ssize_t)sizeof(int)+i_*(ssize_t)sizeof(int)*10+Ten_cell_up_));
             (*(int *)(2*(ssize_t)sizeof(int)+(3*count_1_)*T_con_i+T_con__)   )= (*(int *)(4*(ssize_t)sizeof(int)+_14r_con*(ssize_t)sizeof(int)*10+Ten_cell_up_));

             (*(double *)((3*count_1_-2)*l_0_i+l_0__) )= l_u_s_0_;
             (*(double *)((3*count_1_-1)*l_0_i+l_0__) )= l_u_l_0_;
             (*(double *)((3*count_1_)*l_0_i+l_0__)   )= l_u_s_0_;
        };
        if( !((_15u_con == 0) )){
             count_1_ +=  1;

             (*(int *)((ssize_t)sizeof(int)+(3*count_1_-2)*T_con_i+T_con__) )= (*(int *)((ssize_t)sizeof(int)+_15u_con*(ssize_t)sizeof(int)*10+Ten_cell_up_));
             (*(int *)(2*(ssize_t)sizeof(int)+(3*count_1_-2)*T_con_i+T_con__) )= (*(int *)(4*(ssize_t)sizeof(int)+i_*(ssize_t)sizeof(int)*10+Ten_cell_up_));
             (*(int *)((ssize_t)sizeof(int)+(3*count_1_-1)*T_con_i+T_con__) )= (*(int *)(4*(ssize_t)sizeof(int)+i_*(ssize_t)sizeof(int)*10+Ten_cell_up_));
             (*(int *)(2*(ssize_t)sizeof(int)+(3*count_1_-1)*T_con_i+T_con__) )= (*(int *)(2*(ssize_t)sizeof(int)+_15u_con*(ssize_t)sizeof(int)*10+Ten_cell_up_));
             (*(int *)((ssize_t)sizeof(int)+(3*count_1_)*T_con_i+T_con__)   )= (*(int *)(2*(ssize_t)sizeof(int)+_15u_con*(ssize_t)sizeof(int)*10+Ten_cell_up_));
             (*(int *)(2*(ssize_t)sizeof(int)+(3*count_1_)*T_con_i+T_con__)   )= (*(int *)(3*(ssize_t)sizeof(int)+i_*(ssize_t)sizeof(int)*10+Ten_cell_up_));

             (*(double *)((3*count_1_-2)*l_0_i+l_0__) )= l_u_s_0_;
             (*(double *)((3*count_1_-1)*l_0_i+l_0__) )= l_u_l_0_;
             (*(double *)((3*count_1_)*l_0_i+l_0__)   )= l_u_s_0_;
        };
    }

     count_2_= 0; count_g_= 0; for(int i_=  1 ;i_<= nz_;i_+=1){
        int _16ghost_down_cell_ind;
int _17ghost_node;
 count_g_             = count_g_ + 1;
         count_2_             = count_2_ + 1;
        _16ghost_down_cell_ind=(*(int *)(7*(ssize_t)sizeof(int)+i_*(ssize_t)sizeof(int)*10+Ten_cell_up_)); 
        _17ghost_node=8*nx_*nz_ + count_g_; 

         (*(int *)((ssize_t)sizeof(int)+(2*count_2_-1+3*count_1_)*T_con_i+T_con__) )= (*(int *)((ssize_t)sizeof(int)+i_*(ssize_t)sizeof(int)*10+Ten_cell_up_));
         (*(int *)(2*(ssize_t)sizeof(int)+(2*count_2_-1+3*count_1_)*T_con_i+T_con__) )= _17ghost_node;
         (*(int *)((ssize_t)sizeof(int)+(2*count_2_+3*count_1_)*T_con_i+T_con__)   )= _17ghost_node;
         (*(int *)(2*(ssize_t)sizeof(int)+(2*count_2_+3*count_1_)*T_con_i+T_con__)   )= (*(int *)(2*(ssize_t)sizeof(int)+i_*(ssize_t)sizeof(int)*10+Ten_cell_up_));

         (*(double *)((2*count_2_-1+3*count_1_)*l_0_i+l_0__) )= l_u_s_0_;
         (*(double *)((2*count_2_+3*count_1_)*l_0_i+l_0__)   )= l_u_l_0_;

         (*(int *)((ssize_t)sizeof(int)+count_g_*ghost_nodes_i+ghost_nodes__) )= _17ghost_node;
         (*(int *)(2*(ssize_t)sizeof(int)+count_g_*ghost_nodes_i+ghost_nodes__) )= (*(int *)(4*(ssize_t)sizeof(int)+_16ghost_down_cell_ind*(ssize_t)sizeof(int)*10+Ten_cell_up_));
         (*(int *)(3*(ssize_t)sizeof(int)+count_g_*ghost_nodes_i+ghost_nodes__) )= 1;
    }

     for(int i_=  1 ;i_<= nx_;i_+=1){
        int _18j;
int _19ghost_left_cell_ind;
int _20ghost_node;
 count_g_ +=  1;
         count_2_ +=  1;

        _18j=1+(i_-1)*nz_; 

        _19ghost_left_cell_ind=(*(int *)(8*(ssize_t)sizeof(int)+_18j*(ssize_t)sizeof(int)*10+Ten_cell_up_)); 
        _20ghost_node=8*nx_*nz_ + count_g_; 

         (*(int *)((ssize_t)sizeof(int)+(2*count_2_-1+3*count_1_)*T_con_i+T_con__) )= (*(int *)(4*(ssize_t)sizeof(int)+_18j*(ssize_t)sizeof(int)*10+Ten_cell_up_));
         (*(int *)(2*(ssize_t)sizeof(int)+(2*count_2_-1+3*count_1_)*T_con_i+T_con__) )= _20ghost_node;
         (*(int *)((ssize_t)sizeof(int)+(2*count_2_+3*count_1_)*T_con_i+T_con__)   )= _20ghost_node;
         (*(int *)(2*(ssize_t)sizeof(int)+(2*count_2_+3*count_1_)*T_con_i+T_con__)   )= (*(int *)((ssize_t)sizeof(int)+_18j*(ssize_t)sizeof(int)*10+Ten_cell_up_));

         (*(double *)((2*count_2_-1+3*count_1_)*l_0_i+l_0__) )= l_u_s_0_;
         (*(double *)((2*count_2_+3*count_1_)*l_0_i+l_0__)   )= l_u_l_0_;

         (*(int *)((ssize_t)sizeof(int)+count_g_*ghost_nodes_i+ghost_nodes__) )= _20ghost_node;
         (*(int *)(2*(ssize_t)sizeof(int)+count_g_*ghost_nodes_i+ghost_nodes__) )= (*(int *)(3*(ssize_t)sizeof(int)+_19ghost_left_cell_ind*(ssize_t)sizeof(int)*10+Ten_cell_up_));
         (*(int *)(3*(ssize_t)sizeof(int)+count_g_*ghost_nodes_i+ghost_nodes__) )= 2;
    }

     count_3_= 0; for(int i_=  1 ;i_<= nx_;i_+=1){
        int _21j;
int _22ghost_right_cell_ind;
int _23ghost_node;
 count_g_ +=  1;
         count_3_ +=  1;

        _21j=i_*nz_; 

        _22ghost_right_cell_ind=(*(int *)(9*(ssize_t)sizeof(int)+_21j*(ssize_t)sizeof(int)*10+Ten_cell_up_)); 
        _23ghost_node=8*nx_*nz_ + count_g_; 

         (*(int *)((ssize_t)sizeof(int)+(count_3_+2*count_2_+3*count_1_)*T_con_i+T_con__) )= _23ghost_node;
         (*(int *)(2*(ssize_t)sizeof(int)+(count_3_+2*count_2_+3*count_1_)*T_con_i+T_con__) )= (*(int *)(2*(ssize_t)sizeof(int)+_21j*(ssize_t)sizeof(int)*10+Ten_cell_up_));

         (*(double *)((count_3_+2*count_2_+3*count_1_)*l_0_i+l_0__) )= l_u_s_0_;

         (*(int *)((ssize_t)sizeof(int)+count_g_*ghost_nodes_i+ghost_nodes__) )= _23ghost_node;
         (*(int *)(2*(ssize_t)sizeof(int)+count_g_*ghost_nodes_i+ghost_nodes__) )= (*(int *)((ssize_t)sizeof(int)+_22ghost_right_cell_ind*(ssize_t)sizeof(int)*10+Ten_cell_up_));
         (*(int *)(3*(ssize_t)sizeof(int)+count_g_*ghost_nodes_i+ghost_nodes__) )= 3;
    }

     for(int i_=  1 ;i_<= nz_;i_+=1){
        int _24j;
int _25ghost_up_cell_ind;
int _26ghost_node;
 count_g_ +=  1;
         count_3_ +=  1;

        _24j=i_+(nx_-1)*nz_; 

        _25ghost_up_cell_ind=(*(int *)(10*(ssize_t)sizeof(int)+_24j*(ssize_t)sizeof(int)*10+Ten_cell_up_)); 
        _26ghost_node=8*nx_*nz_ + count_g_; 

         (*(int *)((ssize_t)sizeof(int)+(count_3_+2*count_2_+3*count_1_)*T_con_i+T_con__) )= _26ghost_node;
         (*(int *)(2*(ssize_t)sizeof(int)+(count_3_+2*count_2_+3*count_1_)*T_con_i+T_con__) )= (*(int *)(3*(ssize_t)sizeof(int)+_24j*(ssize_t)sizeof(int)*10+Ten_cell_up_));

         (*(double *)((count_3_+2*count_2_+3*count_1_)*l_0_i+l_0__) )= l_u_s_0_;

         (*(int *)((ssize_t)sizeof(int)+count_g_*ghost_nodes_i+ghost_nodes__) )= _26ghost_node;
         (*(int *)(2*(ssize_t)sizeof(int)+count_g_*ghost_nodes_i+ghost_nodes__) )= (*(int *)(2*(ssize_t)sizeof(int)+_25ghost_up_cell_ind*(ssize_t)sizeof(int)*10+Ten_cell_up_));
         (*(int *)(3*(ssize_t)sizeof(int)+count_g_*ghost_nodes_i+ghost_nodes__) )= 4;
    }

     count_4_= 0; for(int i_=  1 ;i_<= nx_*nz_;i_+=1){
         count_4_ +=  1;

         (*(int *)((ssize_t)sizeof(int)+(4*count_4_-3+3*count_1_+2*count_2_+count_3_)*T_con_i+T_con__) )= 4*nx_*nz_ + 1 + 4*(i_-1);
         (*(int *)(2*(ssize_t)sizeof(int)+(4*count_4_-3+3*count_1_+2*count_2_+count_3_)*T_con_i+T_con__) )= 4 + 4*(i_-1);
         (*(int *)((ssize_t)sizeof(int)+(4*count_4_-2+3*count_1_+2*count_2_+count_3_)*T_con_i+T_con__) )= 4*nx_*nz_ + 2 + 4*(i_-1);
         (*(int *)(2*(ssize_t)sizeof(int)+(4*count_4_-2+3*count_1_+2*count_2_+count_3_)*T_con_i+T_con__) )= 1 + 4*(i_-1);
         (*(int *)((ssize_t)sizeof(int)+(4*count_4_-1+3*count_1_+2*count_2_+count_3_)*T_con_i+T_con__) )= 4*nx_*nz_ + 3 + 4*(i_-1);
         (*(int *)(2*(ssize_t)sizeof(int)+(4*count_4_-1+3*count_1_+2*count_2_+count_3_)*T_con_i+T_con__) )= 2 + 4*(i_-1);
         (*(int *)((ssize_t)sizeof(int)+(4*count_4_+3*count_1_+2*count_2_+count_3_)*T_con_i+T_con__)   )= 4*nx_*nz_ + 4 + 4*(i_-1);
         (*(int *)(2*(ssize_t)sizeof(int)+(4*count_4_+3*count_1_+2*count_2_+count_3_)*T_con_i+T_con__)   )= 3 + 4*(i_-1);

         (*(double *)((4*count_4_-3+3*count_1_+2*count_2_+count_3_)*l_0_i+l_0__) )= l_i_0_;
         (*(double *)((4*count_4_-2+3*count_1_+2*count_2_+count_3_)*l_0_i+l_0__) )= l_i_0_;
         (*(double *)((4*count_4_-1+3*count_1_+2*count_2_+count_3_)*l_0_i+l_0__) )= l_i_0_;
         (*(double *)((4*count_4_+3*count_1_+2*count_2_+count_3_)*l_0_i+l_0__)   )= l_i_0_;
    }
free(Ten_cell_up_f.ptr);freestack=es;}} 


void tensegrity_9f_n_comp(const int f_n_l,const int f_n_h,const ssize_t f_n_i,char *f_n__,int n_N_dof_,int n_N_,int n_T_,int n_G_,int nx_,int ny_,double l_per_,double l_b_,double k_,double sigma_,const int q_tilde_l,const int q_tilde_h,const ssize_t q_tilde_i,char *q_tilde__,const int X_0_l,const int X_0_h,const ssize_t X_0_i,char *X_0__,const int l_0_l,const int l_0_h,const ssize_t l_0_i,char *l_0__,const int T_con_l,const int T_con_h,const ssize_t T_con_i,const int T_con__l,const int T_con__h,const ssize_t T_con__i,char *T_con___,const int ghost_nodes_l,const int ghost_nodes_h,const ssize_t ghost_nodes_i,const int ghost_nodes__l,const int ghost_nodes__h,const ssize_t ghost_nodes__i,char *ghost_nodes___){{struct freefunc* es=freestack;
    
    char f_t_[(ssize_t)sizeof(double)*3];
char l_i_[(ssize_t)sizeof(double)*3];
char l_i_dot_[(ssize_t)sizeof(double)*3];


    double l_i_norm_;

    
    int _10h;
ssize_t _11i;
struct freefunc f_n_ghost_f;char *f_n_ghost_;

    int ind_A_;
int ind_B_;
int ind_G_;


    ssize_t _12i;
struct freefunc X_f;char *X_     ;

    struct freefunc X_dot_f;char *X_dot_ ;

    
    _10h=3*n_G_;_11i=(ssize_t)sizeof(double)*_10h;
f_n_ghost_=malloc(_11i);if(f_n_ghost_==NULL)f_n_ghost_=errmalloc();f_n_ghost_-=(ssize_t)sizeof(double);atblockexit(f_n_ghost_f,free,f_n_ghost_+(ssize_t)sizeof(double));
 for(int i_=  1 ;i_<= n_G_;i_+=1){
         memset((ssize_t)sizeof(double)+f_n_ghost_,0,_11i);
    }
    
    _12i=(ssize_t)sizeof(double)*n_N_dof_;
X_=malloc(_12i);if(X_==NULL)X_=errmalloc();X_-=(ssize_t)sizeof(double);atblockexit(X_f,free,X_+(ssize_t)sizeof(double));
 memset((ssize_t)sizeof(double)+X_,0,_12i);
X_dot_=malloc(_12i);if(X_dot_==NULL)X_dot_=errmalloc();X_dot_-=(ssize_t)sizeof(double);atblockexit(X_dot_f,free,X_dot_+(ssize_t)sizeof(double));
 memset((ssize_t)sizeof(double)+X_dot_,0,_12i);tensegrity_6X_comp(1,n_N_dof_,(ssize_t)sizeof(double),X_ ,n_N_dof_ ,n_N_ ,n_G_ ,nx_ ,ny_ ,l_per_ ,l_b_ ,q_tilde_l,q_tilde_h,q_tilde_i,q_tilde__ ,X_0_l,X_0_h,X_0_i,X_0__ ,ghost_nodes_l,ghost_nodes_h,ghost_nodes_i,ghost_nodes__l,ghost_nodes__h,ghost_nodes__i,ghost_nodes___);
    tensegrity_5X_dot_comp(1,n_N_dof_,(ssize_t)sizeof(double),X_dot_ ,n_N_dof_ ,n_N_ ,n_G_ ,l_b_ ,q_tilde_l,q_tilde_h,q_tilde_i,q_tilde__ ,ghost_nodes_l,ghost_nodes_h,ghost_nodes_i,ghost_nodes__l,ghost_nodes__h,ghost_nodes__i,ghost_nodes___);
    
     for(int i_=  1 ;i_<= n_T_;i_+=1){
         ind_A_ = (*(int *)(T_con__i+i_*T_con_i+T_con___));
         ind_B_ = (*(int *)(2*T_con__i+i_*T_con_i+T_con___));

         (*(double *)((ssize_t)sizeof(double)+l_i_-((ssize_t)sizeof(double))) )= (*(double *)((3*ind_B_-2)*(ssize_t)sizeof(double)+X_) )- (*(double *)((3*ind_A_-2)*(ssize_t)sizeof(double)+X_));
         (*(double *)(2*(ssize_t)sizeof(double)+l_i_-((ssize_t)sizeof(double))) )= (*(double *)((3*ind_B_-1)*(ssize_t)sizeof(double)+X_) )- (*(double *)((3*ind_A_-1)*(ssize_t)sizeof(double)+X_));
         (*(double *)(3*(ssize_t)sizeof(double)+l_i_-((ssize_t)sizeof(double))) )= (*(double *)((3*ind_B_)*(ssize_t)sizeof(double)+X_)   )- (*(double *)((3*ind_A_)*(ssize_t)sizeof(double)+X_));
        
         (*(double *)((ssize_t)sizeof(double)+l_i_dot_-((ssize_t)sizeof(double))) )= (*(double *)((3*ind_B_-2)*(ssize_t)sizeof(double)+X_dot_) )- (*(double *)((3*ind_A_-2)*(ssize_t)sizeof(double)+X_dot_));
         (*(double *)(2*(ssize_t)sizeof(double)+l_i_dot_-((ssize_t)sizeof(double))) )= (*(double *)((3*ind_B_-1)*(ssize_t)sizeof(double)+X_dot_) )- (*(double *)((3*ind_A_-1)*(ssize_t)sizeof(double)+X_dot_));
         (*(double *)(3*(ssize_t)sizeof(double)+l_i_dot_-((ssize_t)sizeof(double))) )= (*(double *)((3*ind_B_)*(ssize_t)sizeof(double)+X_dot_)   )- (*(double *)((3*ind_A_)*(ssize_t)sizeof(double)+X_dot_));

         l_i_norm_ = sqrt(((*(double *)((ssize_t)sizeof(double)+l_i_-((ssize_t)sizeof(double))))*(*(double *)((ssize_t)sizeof(double)+l_i_-((ssize_t)sizeof(double)))))+((*(double *)(2*(ssize_t)sizeof(double)+l_i_-((ssize_t)sizeof(double))))*(*(double *)(2*(ssize_t)sizeof(double)+l_i_-((ssize_t)sizeof(double)))))+((*(double *)(3*(ssize_t)sizeof(double)+l_i_-((ssize_t)sizeof(double))))*(*(double *)(3*(ssize_t)sizeof(double)+l_i_-((ssize_t)sizeof(double))))));

        if( l_i_norm_ >=(*(double *)(i_*l_0_i+l_0__)) ){
             (*(double *)((ssize_t)sizeof(double)+f_t_-((ssize_t)sizeof(double))) )= k_/(*(double *)(i_*l_0_i+l_0__))*(l_i_norm_ - (*(double *)(i_*l_0_i+l_0__)))*(*(double *)((ssize_t)sizeof(double)+l_i_-((ssize_t)sizeof(double))))/l_i_norm_ + sigma_*(*(double *)((ssize_t)sizeof(double)+l_i_dot_-((ssize_t)sizeof(double))));
             (*(double *)(2*(ssize_t)sizeof(double)+f_t_-((ssize_t)sizeof(double))) )= k_/(*(double *)(i_*l_0_i+l_0__))*(l_i_norm_ - (*(double *)(i_*l_0_i+l_0__)))*(*(double *)(2*(ssize_t)sizeof(double)+l_i_-((ssize_t)sizeof(double))))/l_i_norm_ + sigma_*(*(double *)(2*(ssize_t)sizeof(double)+l_i_dot_-((ssize_t)sizeof(double))));
             (*(double *)(3*(ssize_t)sizeof(double)+f_t_-((ssize_t)sizeof(double))) )= k_/(*(double *)(i_*l_0_i+l_0__))*(l_i_norm_ - (*(double *)(i_*l_0_i+l_0__)))*(*(double *)(3*(ssize_t)sizeof(double)+l_i_-((ssize_t)sizeof(double))))/l_i_norm_ + sigma_*(*(double *)(3*(ssize_t)sizeof(double)+l_i_dot_-((ssize_t)sizeof(double))));
        }else{
             (*(double *)((ssize_t)sizeof(double)+f_t_-((ssize_t)sizeof(double))) )= 0.;
             (*(double *)(2*(ssize_t)sizeof(double)+f_t_-((ssize_t)sizeof(double))) )= 0.;
             (*(double *)(3*(ssize_t)sizeof(double)+f_t_-((ssize_t)sizeof(double))) )= 0.;
        };

        if( (double)(ind_A_)<=(double)((n_N_-n_G_))/2.){
             (*(double *)((3*ind_A_-2)*f_n_i+f_n__) )+=  (*(double *)((ssize_t)sizeof(double)+f_t_-((ssize_t)sizeof(double))));
             (*(double *)((3*ind_A_-1)*f_n_i+f_n__) )+=  (*(double *)(2*(ssize_t)sizeof(double)+f_t_-((ssize_t)sizeof(double))));
             (*(double *)((3*ind_A_)*f_n_i+f_n__)   )= (*(double *)((3*ind_A_)*f_n_i+f_n__) )+ (*(double *)(3*(ssize_t)sizeof(double)+f_t_-((ssize_t)sizeof(double))));
        }else{ if( ind_A_ >n_N_-n_G_ ){
             ind_G_ = ind_A_ - (n_N_-n_G_);

             (*(double *)((3*ind_G_-2)*(ssize_t)sizeof(double)+f_n_ghost_) )+=  (*(double *)((ssize_t)sizeof(double)+f_t_-((ssize_t)sizeof(double))));
             (*(double *)((3*ind_G_-1)*(ssize_t)sizeof(double)+f_n_ghost_) )+=  (*(double *)(2*(ssize_t)sizeof(double)+f_t_-((ssize_t)sizeof(double))));
             (*(double *)((3*ind_G_)*(ssize_t)sizeof(double)+f_n_ghost_)   )= (*(double *)((3*ind_G_)*(ssize_t)sizeof(double)+f_n_ghost_) )+ (*(double *)(3*(ssize_t)sizeof(double)+f_t_-((ssize_t)sizeof(double))));
        };};

        if( (double)(ind_B_)<=(double)((n_N_-n_G_))/2.){
             (*(double *)((3*ind_B_-2)*f_n_i+f_n__) )-=  (*(double *)((ssize_t)sizeof(double)+f_t_-((ssize_t)sizeof(double))));
             (*(double *)((3*ind_B_-1)*f_n_i+f_n__) )-=  (*(double *)(2*(ssize_t)sizeof(double)+f_t_-((ssize_t)sizeof(double))));
             (*(double *)((3*ind_B_)*f_n_i+f_n__)   )= (*(double *)((3*ind_B_)*f_n_i+f_n__) )- (*(double *)(3*(ssize_t)sizeof(double)+f_t_-((ssize_t)sizeof(double))));
        }else{ if( ind_B_ >n_N_-n_G_ ){
             ind_G_ = ind_B_ - (n_N_-n_G_);

             (*(double *)((3*ind_G_-2)*(ssize_t)sizeof(double)+f_n_ghost_) )-=  (*(double *)((ssize_t)sizeof(double)+f_t_-((ssize_t)sizeof(double))));
             (*(double *)((3*ind_G_-1)*(ssize_t)sizeof(double)+f_n_ghost_) )-=  (*(double *)(2*(ssize_t)sizeof(double)+f_t_-((ssize_t)sizeof(double))));
             (*(double *)((3*ind_G_)*(ssize_t)sizeof(double)+f_n_ghost_)   )= (*(double *)((3*ind_G_)*(ssize_t)sizeof(double)+f_n_ghost_) )- (*(double *)(3*(ssize_t)sizeof(double)+f_t_-((ssize_t)sizeof(double))));
        };};
    }
    
     for(int i_=  1 ;i_<= n_G_;i_+=1){
        int _13parent_ind;
_13parent_ind=(*(int*)(2*ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___)); 

         (*(double *)((3*_13parent_ind-2)*f_n_i+f_n__) )+=  (*(double *)((3*i_-2)*(ssize_t)sizeof(double)+f_n_ghost_));
         (*(double *)((3*_13parent_ind-1)*f_n_i+f_n__) )+=  (*(double *)((3*i_-1)*(ssize_t)sizeof(double)+f_n_ghost_));
         (*(double *)((3*_13parent_ind)*f_n_i+f_n__)   )= (*(double *)((3*_13parent_ind)*f_n_i+f_n__) )+ (*(double *)((3*i_)*(ssize_t)sizeof(double)+f_n_ghost_));
    }
free(X_dot_f.ptr);free(X_f.ptr);free(f_n_ghost_f.ptr);freestack=es;}}


void tensegrity_10Cq_dot_compute(const int Cq_dot_l,const int Cq_dot_h,const ssize_t Cq_dot_i,char *Cq_dot__,int n_q_tilde_,int n_B_,double I_0_,const int q_tilde_l,const int q_tilde_h,const ssize_t q_tilde_i,char *q_tilde__){{struct freefunc* es=freestack;

     for(int i_=  1 ;i_<= n_B_;i_+=1){
         (*(double *)((2*i_-1)*Cq_dot_i+Cq_dot__) )=  - 0.5*I_0_*sin(2.*(*(double *)((2*i_-1+(int)floor((double)(n_q_tilde_)/2.))*q_tilde_i+q_tilde__)))*((*(double *)((2*i_)*q_tilde_i+q_tilde__))*(*(double *)((2*i_)*q_tilde_i+q_tilde__)));
         (*(double *)((2*i_)*Cq_dot_i+Cq_dot__)   )= I_0_*sin(2.*(*(double *)((2*i_-1+(int)floor((double)(n_q_tilde_)/2.))*q_tilde_i+q_tilde__)))*(*(double *)((2*i_-1)*q_tilde_i+q_tilde__))*(*(double *)((2*i_)*q_tilde_i+q_tilde__));
    }
}}


void tensegrity_11f_mom_comp(const int f_mom_l,const int f_mom_h,const ssize_t f_mom_i,char *f_mom__,int n_q_,int n_q_tilde_,double l_b_,const int f_n_l,const int f_n_h,const ssize_t f_n_i,char *f_n__,const int q_tilde_l,const int q_tilde_h,const ssize_t q_tilde_i,char *q_tilde__){{struct freefunc* es=freestack;

     for(int i_=  1 ;i_<= (int)floor((double)(n_q_)/2.);i_+=1){
         (*(double *)((2*i_-1)*f_mom_i+f_mom__) )= l_b_*(cos((*(double *)((2*i_-1+n_q_)*q_tilde_i+q_tilde__)))*cos((*(double *)((2*i_+n_q_)*q_tilde_i+q_tilde__)))*(*(double *)((3*i_-2)*f_n_i+f_n__)) + cos((*(double *)((2*i_-1+n_q_)*q_tilde_i+q_tilde__)))*sin((*(double *)((2*i_+n_q_)*q_tilde_i+q_tilde__)))*(*(double *)((3*i_-1)*f_n_i+f_n__)) - sin((*(double *)((2*i_-1+n_q_)*q_tilde_i+q_tilde__)))*(*(double *)((3*i_)*f_n_i+f_n__)));
         (*(double *)((2*i_)*f_mom_i+f_mom__)   )= l_b_*( - sin((*(double *)((2*i_-1+n_q_)*q_tilde_i+q_tilde__)))*sin((*(double *)((2*i_+n_q_)*q_tilde_i+q_tilde__)))*(*(double *)((3*i_-2)*f_n_i+f_n__)) + sin((*(double *)((2*i_-1+n_q_)*q_tilde_i+q_tilde__)))*cos((*(double *)((2*i_+n_q_)*q_tilde_i+q_tilde__)))*(*(double *)((3*i_-1)*f_n_i+f_n__)));
    }
}}


void tensegrity_12P_comp(const int P_mat_l,const int P_mat_h,const ssize_t P_mat_i,char *P_mat__,const int ghost_nodes_l,const int ghost_nodes_h,const ssize_t ghost_nodes_i,const int ghost_nodes__l,const int ghost_nodes__h,const ssize_t ghost_nodes__i,char *ghost_nodes___,int nx_,int nz_,int n_C_,int n_T_,int n_G_){{struct freefunc* es=freestack;

    int ghost_ind_ ;

    int floor_ind_ ;


     ghost_ind_= 0; floor_ind_= 0; for(int j_=  1 ;j_<= nx_;j_+=1){
         for(int i_=  1 ;i_<= nz_;i_+=1){
            int _13ind;
_13ind=i_+(j_-1)*nz_; 

            if( (i_ == 1 )&&( j_ == 1 )){
                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 1;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+1)*ghost_nodes_i+ghost_nodes___));

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_+1) - 2;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+1)*ghost_nodes_i+ghost_nodes___));

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*2 - 3;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_+1) - 2;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 2;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*2 - 3;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+1)*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_+1) - 2;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_+1) - 2;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind+1) - 3;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 3;

                 floor_ind_ +=  6;
            };

            if( ((i_ >1 )&&( i_ <nz_ ))&&( j_ == 1 )){
                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*_13ind - 3;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-1) - 1;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind+nz_) - 2;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-1) - 1;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind+1) - 3;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind+nz_) - 2;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*_13ind - 2;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind+1) - 3;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-1) - 1;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind+nz_) - 2;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*_13ind;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind+nz_) - 2;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind+1) - 3;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*_13ind - 1;

                 floor_ind_ +=  6;
            };

            if( (i_ == nz_ )&&( j_ == 1 )){
                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*_13ind - 3;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-1) - 1;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind+nz_) - 2;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-1) - 1;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+nx_+1)*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind+nz_) - 2;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*_13ind - 2;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+nx_+1)*ghost_nodes_i+ghost_nodes___));

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-1) - 1;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind+nz_) - 2;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*_13ind;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind+nz_) - 2;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+nx_+1)*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*_13ind - 1;

                 floor_ind_ +=  6;
            };

            if( ((i_ == 1 )&&( j_ >1 ))&&( j_ <nx_ )){
                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*_13ind - 3;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+j_)*ghost_nodes_i+ghost_nodes___));

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind+nz_) - 2;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+j_)*ghost_nodes_i+ghost_nodes___));

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind+1) - 3;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind+nz_) - 2;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*_13ind - 2;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind+1) - 3;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+j_)*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind+nz_) - 2;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*_13ind;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind+nz_) - 2;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind+1) - 3;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*_13ind - 1;

                 floor_ind_ +=  6;
            };

            if( (((j_ >1 )&&( j_ <nx_ ))&&( i_ >1 ))&&( i_ <nz_ )){
                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-1) - 2;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-1-nz_) - 1;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*_13ind - 3;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*_13ind - 3;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-1-nz_) - 1;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-nz_);

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-1) - 1;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*_13ind - 3;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-nz_);

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-1) - 1;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind+nz_) - 2;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind+1) - 3;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind+nz_) - 2;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*_13ind - 2;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind+1) - 3;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*_13ind;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-1) - 1;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind+nz_) - 2;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind+nz_) - 2;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind+1) - 3;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 4*_13ind - 1;

                 floor_ind_ = 8 + floor_ind_;
            };

            if( ((i_ == nz_ )&&( j_ >1 ))&&( j_ <nx_ )){
                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-1) - 2;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-1-nz_) - 1;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*_13ind - 3;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*_13ind - 3;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-1-nz_) - 1;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-nz_);

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-1) - 1;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*_13ind - 3;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-nz_);

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-1) - 1;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind+nz_) - 2;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+nx_+j_)*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind+nz_) - 2;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*_13ind - 2;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+nx_+j_)*ghost_nodes_i+ghost_nodes___));

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-1) - 1;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind+nz_) - 2;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*_13ind;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind+nz_) - 2;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+nx_+j_)*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 4*_13ind - 1;

                 floor_ind_ = 8 + floor_ind_;
            };

            if( (i_ == 1 )&&( j_ == nx_ )){
                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*_13ind - 3;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+nx_)*ghost_nodes_i+ghost_nodes___));

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+2*nx_+1)*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+nx_)*ghost_nodes_i+ghost_nodes___));

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind+1) - 3;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+2*nx_+1)*ghost_nodes_i+ghost_nodes___));

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*_13ind - 2;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind+1) - 3;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+nx_)*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+2*nx_+1)*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*_13ind;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+2*nx_+1)*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind+1) - 3;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*_13ind - 1;

                 floor_ind_ +=  6;
            };

            if( ((i_ >1 )&&( i_ <nz_ ))&&( j_ == nx_ )){
                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-1) - 2;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-1-nz_) - 1;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*_13ind - 3;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*_13ind - 3;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-1-nz_) - 1;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-nz_);

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-1) - 1;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*_13ind - 3;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-1) - 1;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+2*nx_+i_)*ghost_nodes_i+ghost_nodes___));

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind+1) - 3;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+2*nx_+i_)*ghost_nodes_i+ghost_nodes___));

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*_13ind - 2;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind+1) - 3;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*_13ind;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-1) - 1;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+2*nx_+i_)*ghost_nodes_i+ghost_nodes___));

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind+1) - 3;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 4*_13ind - 1;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+2*nx_+i_)*ghost_nodes_i+ghost_nodes___));

                 floor_ind_ = 8 + floor_ind_;
            };

            if( (i_ == nz_ )&&( j_ == nx_ )){
                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-1) - 2;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-1-nz_) - 1;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*_13ind - 3;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*_13ind - 3;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-1-nz_) - 1;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-nz_);

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-1) - 1;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*_13ind - 3;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-1) - 1;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(2*nz_+2*nx_)*ghost_nodes_i+ghost_nodes___));

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+2*nx_)*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(2*nz_+2*nx_)*ghost_nodes_i+ghost_nodes___));

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*_13ind - 2;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+2*nx_)*ghost_nodes_i+ghost_nodes___));

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*_13ind;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*(_13ind-1) - 1;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(2*nz_+2*nx_)*ghost_nodes_i+ghost_nodes___));

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+2*nx_)*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 4*_13ind - 1;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(2*nz_+2*nx_)*ghost_nodes_i+ghost_nodes___));

                 floor_ind_ = 8 + floor_ind_;
            };
        }
    }

    /* Patch periodiche */

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*((nx_-1)*nz_);
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 1;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_ + (nx_-1)*nz_-1) - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 1;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_ + (nx_-1)*nz_) - 3;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 1;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_*nx_-1) - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 1;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*((nx_-1)*nz_);
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 1;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_ - 2;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 2;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*((nx_-1)*nz_);
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 1;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(nx_-1)*nz_) - 3;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 3;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_ - 2;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 2;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*((nx_-1)*nz_);
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 1;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_*nx_ - 2;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 1;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(nx_-1)*nz_) - 3;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 3;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_*nx_;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 1 ;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_ + (nx_-1)*nz_-1) - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 1;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_ - 2;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 2;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_ - 2;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 2;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(nx_-1)*nz_) - 3;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 3;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_*nx_ - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 1;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_ - 2;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 2;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_*nx_ - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 1;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 1;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 0;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 1;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 0;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_*nx_ - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 1;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(nx_-1)*nz_);
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 3;

     floor_ind_ +=  8;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(nx_-2)*nz_);
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 3;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_*nx_ - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 1;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(nx_-1)*nz_) - 3;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 3;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_*nx_ - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 1;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(nx_-2)*nz_);
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 3;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 2;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 0;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(nx_-2)*nz_);
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 3;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(2+(nx_-1)*nz_) - 3;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 3;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 2;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 0;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(nx_-1)*nz_) - 2;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 3;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(2+(nx_-1)*nz_) - 3;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 3;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(nx_-2)*nz_);
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 3;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(nx_-1)*nz_);
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 3;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_*nx_ - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 1;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 2;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 0;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 2;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 0;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(2+(nx_-1)*nz_) - 3;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 3;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(nx_-1)*nz_) - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 3;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 2;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 0;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(nx_-1)*nz_) - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 3;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 5;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 0;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 5;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 0;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(nx_-1)*nz_) - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 3;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 4*(2+(nx_-1)*nz_);
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 3;

     floor_ind_ +=  8;

     for(int i_=  2 ;i_<= nz_-1;i_+=1){
         (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(i_+(nx_-2)*nz_);
         (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 3;
         (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(i_-1+(nx_-1)*nz_) - 1;
         (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 3;
         (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(i_+(nx_-1)*nz_) - 3;
         (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 3;

         (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(i_-1+(nx_-1)*nz_) - 1;
         (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 3;
         (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(i_+(nx_-2)*nz_);
         (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 3;
         (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*i_ - 2;
         (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 0;

         (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(i_+(nx_-2)*nz_);
         (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 3;
         (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(i_+1+(nx_-1)*nz_) - 3;
         (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 3;
         (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*i_ - 2;
         (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 0;

         (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(i_+(nx_-1)*nz_) - 2;
         (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 3;
         (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(i_+1+(nx_-1)*nz_) - 3;
         (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 3;
         (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(i_+(nx_-2)*nz_);
         (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 3;

         (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(i_+(nx_-1)*nz_);
         (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 3;
         (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(i_-1+(nx_-1)*nz_) - 1;
         (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 3;
         (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*i_ - 2;
         (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 0;

         (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*i_ - 2;
         (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 0;
         (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(i_+1+(nx_-1)*nz_) - 3;
         (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 3;
         (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(i_+(nx_-1)*nz_) - 1;
         (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 3;

         (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*i_ - 2;
         (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 0;
         (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*(i_+(nx_-1)*nz_) - 1;
         (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 3;
         (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*(i_+1) - 3;
         (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 0;

         (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 4*(i_+1) - 3;
         (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 0;
         (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 4*(i_+(nx_-1)*nz_) - 1;
         (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 3;
         (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 4*(i_+1+(nx_-1)*nz_);
         (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 3;

         floor_ind_ +=  8;
    }

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_*nx_-nz_);
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 3;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_*nx_-1) - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 3;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_*nx_ - 3;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 3;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_*nx_-1) - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 3;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_*nx_-nz_);
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 3;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_ - 2;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 0;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_*nx_-nz_);
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 3;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(nx_-1)*nz_) - 3;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_ - 2;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 0;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_*nx_ - 2;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 3;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(nx_-1)*nz_) - 3;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_*nx_-nz_);
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 3;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_*nx_;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 3;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_*nx_-1) - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 3;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_ - 2;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 0;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_ - 2;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 0;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(nx_-1)*nz_) - 3;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_*nx_ - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 3;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_ - 2;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 0;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_*nx_ - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 3;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 1;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 5;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 1;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 5;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_*nx_ - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 3;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(nx_-1)*nz_);
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 4;

     floor_ind_ +=  8;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(nx_-2)*nz_);
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_*nx_ - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 3;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(nx_-1)*nz_) - 3;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_*nx_ - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 3;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(nx_-2)*nz_);
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 2;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 5;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(nx_-2)*nz_);
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(2+(nx_-1)*nz_) - 3;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 2;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 5;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(nx_-1)*nz_) - 2;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(2+(nx_-1)*nz_) - 3;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(nx_-2)*nz_);
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(nx_-1)*nz_);
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_*nx_ - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 3;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 2;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 5;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 2;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 5;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(2+(nx_-1)*nz_) - 3;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(nx_-1)*nz_) - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4;

     floor_ind_ +=  6;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_*nx_);
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 1;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_-1) - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 2;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_ - 3;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 2;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_-1) - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 2;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_*nx_);
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 1;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*2*nz_ - 2;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 2;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_*nx_);
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 1;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 1;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 0;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*2*nz_ - 2;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 2;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_ - 2;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 2;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 1;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 0;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_*nx_);
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 1;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 2;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_-1) - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 2;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*2*nz_ - 2;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 2;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*2*nz_ - 2;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 2;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 1;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 0;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_ - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 2;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*2*nz_ - 2;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 2;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_ - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 2;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+nz_) - 3;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 0;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+nz_) - 3;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 0;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_ - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 2;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 4;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 0;

     floor_ind_ +=  8;

     for(int j_=  2 ;j_<= nx_-1;j_+=1){
         (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_+(j_-2)*nz_);
         (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 2;
         (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_-1+(j_-1)*nz_) - 1;
         (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 2;
         (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_+(j_-1)*nz_) - 3;
         (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 2;

         (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_-1+(j_-1)*nz_) - 1;
         (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 2;
         (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_+(j_-2)*nz_);
         (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 2;
         (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_+j_*nz_) - 2;
         (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 2;

         (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_+(j_-2)*nz_);
         (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 2;
         (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(j_-1)*nz_) - 3;
         (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 0;
         (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_+j_*nz_) - 2;
         (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 2;

         (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_+(j_-1)*nz_) - 2;
         (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 2;
         (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(j_-1)*nz_) - 3;
         (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 0;
         (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_+(j_-2)*nz_);
         (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 2;

         (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_+(j_-1)*nz_);
         (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 2;
         (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_-1+(j_-1)*nz_) - 1;
         (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 2;
         (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_+j_*nz_) - 2;
         (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 2;

         (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_+j_*nz_) - 2;
         (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 2;
         (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(j_-1)*nz_) - 3;
         (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 0;
         (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_+(j_-1)*nz_) - 1;
         (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 2;

         (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_+j_*nz_) - 2;
         (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 2;
         (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_+(j_-1)*nz_) - 1;
         (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 2;
         (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+j_*nz_) - 3;
         (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 0;

         (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+j_*nz_) - 3;
         (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 0;
         (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_+(j_-1)*nz_) - 1;
         (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 2;
         (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(j_-1)*nz_);
         (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 0;

         floor_ind_ +=  8;
    }

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_+(nx_-2)*nz_);
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 2;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_-1+(nx_-1)*nz_) - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 2;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_+(nx_-1)*nz_) - 3;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 2;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_-1+(nx_-1)*nz_) - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 2;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_+(nx_-2)*nz_);
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 2;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_ - 2;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 6;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_+(nx_-2)*nz_);
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 2;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(nx_-1)*nz_) - 3;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 0;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_ - 2;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 6;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_+(nx_-1)*nz_) - 2;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 2;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(nx_-1)*nz_) - 3;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 0;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_+(nx_-2)*nz_);
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 2;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_+(nx_-1)*nz_);
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 2;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_-1+(nx_-1)*nz_) - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 2;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_ - 2;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 6;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_ - 2;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 6;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(nx_-1)*nz_) - 3;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 0;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_+(nx_-1)*nz_) - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 2;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_ - 2;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 6;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_+(nx_-1)*nz_) - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 2;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 1;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 7;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_+(nx_-1)*nz_) - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 2;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(nx_-1)*nz_);
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 0;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 1;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 7;

     floor_ind_ +=  8;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(nx_-1)*nz_);
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_ - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 0;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 1;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 5;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_ - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 0;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(nx_-1)*nz_);
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+nz_) - 2;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 5;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(nx_-1)*nz_);
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 5;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 5;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+nz_) - 2;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 5;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 2;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 5;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 5;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 5;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(nx_-1)*nz_);
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 5;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_ - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 0;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+nz_) - 2;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 5;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+nz_) - 2;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 5;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 5;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 5;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 3;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 5;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*2*nz_ - 2;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 0;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_ - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 0;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+nz_) - 3;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 5;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_ - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 0;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 4;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 5;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+nz_) - 3;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 5;

     floor_ind_ +=  8;

     for(int j_=  2 ;j_<= nx_-1;j_+=1){
         (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(j_-2)*nz_);
         (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 5;
         (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_+(j_-1)*nz_) - 1;
         (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 0;
         (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(j_-1)*nz_) - 3;
         (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 5;

         (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_+(j_-1)*nz_) - 1;
         (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 0;
         (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(j_-2)*nz_);
         (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 5;
         (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+j_*nz_) - 2;
         (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 5;

         (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(j_-2)*nz_);
         (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 5;
         (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(2+(j_-1)*nz_) - 3;
         (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 5;
         (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+j_*nz_) - 2;
         (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 5;

         (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(j_-1)*nz_) - 2;
         (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 5;
         (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(2+(j_-1)*nz_) - 3;
         (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 5;
         (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(j_-2)*nz_);
         (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 5;

         (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(j_-1)*nz_);
         (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 5;
         (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_+(j_-1)*nz_) - 1;
         (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 0;
         (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+j_*nz_) - 2;
         (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 5;

         (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+j_*nz_) - 2;
         (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 5;
         (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(2+(j_-1)*nz_) - 3;
         (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 5;
         (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(j_-1)*nz_) - 1;
         (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 5;

         (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_+j_*nz_) - 2;
         (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 0;
         (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_+(j_-1)*nz_) - 1;
         (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 0;
         (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+j_*nz_) - 3;
         (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 5;

         (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_+(j_-1)*nz_) - 1;
         (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 0;
         (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(j_-1)*nz_);
         (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 5;
         (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+j_*nz_) - 3;
         (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 5;

         floor_ind_ +=  8;
    }

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(nx_-2)*nz_);
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 5;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_+(nx_-1)*nz_) - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 0;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(nx_-1)*nz_) - 3;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 5;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_+(nx_-1)*nz_) - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 0;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(nx_-2)*nz_);
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 5;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 2;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 8;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(nx_-2)*nz_);
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 5;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(2+(nx_-1)*nz_) - 3;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 5;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 2;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 8;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(nx_-1)*nz_) - 2;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 5;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(2+(nx_-1)*nz_) - 3;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 5;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(nx_-2)*nz_);
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 5;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(nx_-1)*nz_);
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 5;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_+(nx_-1)*nz_) - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 0;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 2;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 8;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(nx_-1)*nz_) - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 5;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 2;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 8;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(2+(nx_-1)*nz_) - 3;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 5;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_ - 2;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 7;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_+(nx_-1)*nz_) - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 0;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 1;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 8;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_+(nx_-1)*nz_) - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 0;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(nx_-1)*nz_);
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 5;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 1;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 8;

     floor_ind_ +=  8;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_*nx_;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 2;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_-1) - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 6;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_ - 3;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 6;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_-1) - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 6;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_*nx_;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 2;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*2*nz_ - 2;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 6;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_*nx_;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 2;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 1;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 7;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*2*nz_ - 2;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 6;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_ - 2;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 6;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 1;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 7;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_*nx_;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 2;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 6;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_-1) - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 6;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*2*nz_ - 2;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 6;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_ - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 6;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*2*nz_ - 2;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 6;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 1;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 7;

     floor_ind_ +=  6;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(nx_-1)*nz_);
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 0;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_ - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 6;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 1;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 7;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_ - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 6;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(nx_-1)*nz_);
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 0;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+nz_) - 2;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 7;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(nx_-1)*nz_);
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 0;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 5;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 7;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+nz_) - 2;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 7;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 2;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 7;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 5;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 7;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(nx_-1)*nz_);
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 0;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 7;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_ - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 6;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+nz_) - 2;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 7;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 3;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 7;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+nz_) - 2;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 7;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 5;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 7;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 2;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 7;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(nx_-1)*nz_) - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 0;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 5;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 7;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(nx_-1)*nz_) - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 0;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 4*(2+(nx_-1)*nz_);
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 0;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 5;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 7;

     floor_ind_ +=  8;

     for(int i_=  2 ;i_<= nz_-1;i_+=1){
         (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(i_+(nx_-1)*nz_);
         (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 0;
         (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(i_-1) - 1 ;
         (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 7;
         (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*i_ - 3;
         (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 7;

         (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(i_-1) - 1;
         (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 7;
         (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(i_+(nx_-1)*nz_);
         (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 0;
         (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(i_+nz_) - 2;
         (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 7;

         (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(i_+(nx_-1)*nz_);
         (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 0;
         (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(i_+1) - 3;
         (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 7;
         (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(i_+nz_) - 2;
         (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 7;

         (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*i_ - 2;
         (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 7;
         (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(i_+1) - 3;
         (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 7;
         (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(i_+(nx_-1)*nz_);
         (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 0;

         (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*i_;
         (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 7;
         (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(i_-1) - 1;
         (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 7;
         (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(i_+nz_) - 2;
         (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 7;

         (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*i_ - 1;
         (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 7;
         (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(i_+nz_) - 2;
         (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 7;
         (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(i_+1) - 3;
         (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 7;

         (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*i_ - 2;
         (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 7;
         (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*(i_+(nx_-1)*nz_) - 1;
         (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 0;
         (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*(i_+1) - 3;
         (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 7;

         (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 4*(i_+(nx_-1)*nz_) - 1;
         (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 0;
         (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 4*(i_+1+(nx_-1)*nz_);
         (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 0;
         (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 4*(i_+1) - 3;
         (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 7;

         floor_ind_ +=  8;
    }

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_*nx_;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 0;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_-1) - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 7;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_ - 3;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 7;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_-1) - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 7;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_*nx_;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 0;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*2*nz_ - 2;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 7;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_*nx_;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 0;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 1;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 8;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*2*nz_ - 2;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 7;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_ - 2;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 7;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 1;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 8;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_*nx_;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 0;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 7;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(nz_-1) - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 7;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*2*nz_ - 2;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 7;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_ - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 7;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*2*nz_ - 2;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 7;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 1;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 8;

     floor_ind_ +=  6;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(nx_-1)*nz_);
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 5;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_ - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 7;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 1;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 8  ;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_ - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 7;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(nx_-1)*nz_);
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 5;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+nz_) - 2;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 8;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(nx_-1)*nz_);
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 5;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 5;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 8;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+nz_) - 2;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 8;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 2;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 8;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 5;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 8;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+(nx_-1)*nz_);
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 5;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 8;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*nz_ - 1;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 7;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+nz_) - 2;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 8;

     (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 3;
     (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 8;
     (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(1+nz_) - 2;
     (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 8;
     (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 5;
     (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 8;
}}


void tensegrity_13bar_lambda_comp(const int bar_lambda_mat_l,const int bar_lambda_mat_h,const ssize_t bar_lambda_mat_i,char *bar_lambda_mat__,int n_int_){{struct freefunc* es=freestack;

    int _14h;
ssize_t _15i;
struct freefunc lambda_mat_f;char *lambda_mat_ ;


    double d_lambda_ ;

    double lambda_1_;
double lambda_2_;
double lambda_3_ ;


    int count_ ;


    char sub_tri_vert_even_[(ssize_t)sizeof(int)*3] ;

    char sub_tri_vert_odd_[(ssize_t)sizeof(int)*3]  ;


    _14h=(int)floor((double)(n_int_*(n_int_+1))/2.);_15i=(ssize_t)sizeof(double)*3*_14h;
lambda_mat_=malloc(_15i);if(lambda_mat_==NULL)lambda_mat_=errmalloc();lambda_mat_-=channel_4st;atblockexit(lambda_mat_f,free,lambda_mat_+channel_4st);
 memset(channel_4st+lambda_mat_,0,_15i); d_lambda_= 1.0/(double)((n_int_-1)); lambda_3_= 0.; for(int i_=  0 ;i_<= n_int_-1;i_+=1){
         for(int j_=  0 ;j_<= n_int_-i_-1;j_+=1){
             lambda_3_ = (double)(i_)*d_lambda_;
             lambda_2_ = (double)(j_)*d_lambda_;
             lambda_1_ = 1.0 - lambda_2_ - lambda_3_;

             (*(double *)((ssize_t)sizeof(double)+((int)floor((double)(j_)+(double)(i_*(2*n_int_+1-i_))/2.+1.))*(ssize_t)sizeof(double)*3+lambda_mat_) )= lambda_1_;
             (*(double *)(2*(ssize_t)sizeof(double)+((int)floor((double)(j_)+(double)(i_*(2*n_int_+1-i_))/2.+1.))*(ssize_t)sizeof(double)*3+lambda_mat_) )= lambda_2_;
             (*(double *)(3*(ssize_t)sizeof(double)+((int)floor((double)(j_)+(double)(i_*(2*n_int_+1-i_))/2.+1.))*(ssize_t)sizeof(double)*3+lambda_mat_) )= lambda_3_;
        }
    }

     count_= 1; (*(int *)((ssize_t)sizeof(int)+sub_tri_vert_even_-((ssize_t)sizeof(int))))=1;(*(int *)((1+1)*(ssize_t)sizeof(int)+sub_tri_vert_even_-((ssize_t)sizeof(int))))=2;(*(int *)((1+2)*(ssize_t)sizeof(int)+sub_tri_vert_even_-((ssize_t)sizeof(int))))=n_int_+1; (*(int *)((ssize_t)sizeof(int)+sub_tri_vert_odd_-((ssize_t)sizeof(int))))=2;(*(int *)((1+1)*(ssize_t)sizeof(int)+sub_tri_vert_odd_-((ssize_t)sizeof(int))))=n_int_+1;(*(int *)((1+2)*(ssize_t)sizeof(int)+sub_tri_vert_odd_-((ssize_t)sizeof(int))))=n_int_+2; for(int i_=  0 ;i_<= n_int_-2;i_+=1){
         for(int j_=  0 ;j_<= 2*(n_int_-i_-1)-2;j_+=1){
            int mtemp16;
if( (mtemp16=j_ ,mtemp16% 2 +((mtemp16>=0)==(2 >=0)?0:2 ))== 0 ){
                 (*(double *)((ssize_t)sizeof(double)+count_*bar_lambda_mat_i+bar_lambda_mat__) )= ((*(double *)((ssize_t)sizeof(double)+((*(int*)((ssize_t)sizeof(int)+sub_tri_vert_even_-((ssize_t)sizeof(int))))+(int)floor((double)(j_)/2.))*(ssize_t)sizeof(double)*3+lambda_mat_) )+ (*(double *)((ssize_t)sizeof(double)+((*(int*)(2*(ssize_t)sizeof(int)+sub_tri_vert_even_-((ssize_t)sizeof(int))))+(int)floor((double)(j_)/2.))*(ssize_t)sizeof(double)*3+lambda_mat_) )+ (*(double *)((ssize_t)sizeof(double)+((*(int*)(3*(ssize_t)sizeof(int)+sub_tri_vert_even_-((ssize_t)sizeof(int))))+(int)floor((double)(j_)/2.))*(ssize_t)sizeof(double)*3+lambda_mat_))) / 3.;
                 (*(double *)(2*(ssize_t)sizeof(double)+count_*bar_lambda_mat_i+bar_lambda_mat__) )= ((*(double *)(2*(ssize_t)sizeof(double)+((*(int*)((ssize_t)sizeof(int)+sub_tri_vert_even_-((ssize_t)sizeof(int))))+(int)floor((double)(j_)/2.))*(ssize_t)sizeof(double)*3+lambda_mat_) )+ (*(double *)(2*(ssize_t)sizeof(double)+((*(int*)(2*(ssize_t)sizeof(int)+sub_tri_vert_even_-((ssize_t)sizeof(int))))+(int)floor((double)(j_)/2.))*(ssize_t)sizeof(double)*3+lambda_mat_) )+ (*(double *)(2*(ssize_t)sizeof(double)+((*(int*)(3*(ssize_t)sizeof(int)+sub_tri_vert_even_-((ssize_t)sizeof(int))))+(int)floor((double)(j_)/2.))*(ssize_t)sizeof(double)*3+lambda_mat_))) / 3.;
                 (*(double *)(3*(ssize_t)sizeof(double)+count_*bar_lambda_mat_i+bar_lambda_mat__) )= ((*(double *)(3*(ssize_t)sizeof(double)+((*(int*)((ssize_t)sizeof(int)+sub_tri_vert_even_-((ssize_t)sizeof(int))))+(int)floor((double)(j_)/2.))*(ssize_t)sizeof(double)*3+lambda_mat_) )+ (*(double *)(3*(ssize_t)sizeof(double)+((*(int*)(2*(ssize_t)sizeof(int)+sub_tri_vert_even_-((ssize_t)sizeof(int))))+(int)floor((double)(j_)/2.))*(ssize_t)sizeof(double)*3+lambda_mat_) )+ (*(double *)(3*(ssize_t)sizeof(double)+((*(int*)(3*(ssize_t)sizeof(int)+sub_tri_vert_even_-((ssize_t)sizeof(int))))+(int)floor((double)(j_)/2.))*(ssize_t)sizeof(double)*3+lambda_mat_))) / 3.;
            }else{
                 (*(double *)((ssize_t)sizeof(double)+count_*bar_lambda_mat_i+bar_lambda_mat__) )= ((*(double *)((ssize_t)sizeof(double)+((*(int*)((ssize_t)sizeof(int)+sub_tri_vert_odd_-((ssize_t)sizeof(int))))+(int)floor((double)((j_-1))/2.))*(ssize_t)sizeof(double)*3+lambda_mat_) )+ (*(double *)((ssize_t)sizeof(double)+((*(int*)(2*(ssize_t)sizeof(int)+sub_tri_vert_odd_-((ssize_t)sizeof(int))))+(int)floor((double)((j_-1))/2.))*(ssize_t)sizeof(double)*3+lambda_mat_) )+ (*(double *)((ssize_t)sizeof(double)+((*(int*)(3*(ssize_t)sizeof(int)+sub_tri_vert_odd_-((ssize_t)sizeof(int))))+(int)floor((double)((j_-1))/2.))*(ssize_t)sizeof(double)*3+lambda_mat_))) / 3.;
                 (*(double *)(2*(ssize_t)sizeof(double)+count_*bar_lambda_mat_i+bar_lambda_mat__) )= ((*(double *)(2*(ssize_t)sizeof(double)+((*(int*)((ssize_t)sizeof(int)+sub_tri_vert_odd_-((ssize_t)sizeof(int))))+(int)floor((double)((j_-1))/2.))*(ssize_t)sizeof(double)*3+lambda_mat_) )+ (*(double *)(2*(ssize_t)sizeof(double)+((*(int*)(2*(ssize_t)sizeof(int)+sub_tri_vert_odd_-((ssize_t)sizeof(int))))+(int)floor((double)((j_-1))/2.))*(ssize_t)sizeof(double)*3+lambda_mat_) )+ (*(double *)(2*(ssize_t)sizeof(double)+((*(int*)(3*(ssize_t)sizeof(int)+sub_tri_vert_odd_-((ssize_t)sizeof(int))))+(int)floor((double)((j_-1))/2.))*(ssize_t)sizeof(double)*3+lambda_mat_))) / 3.;
                 (*(double *)(3*(ssize_t)sizeof(double)+count_*bar_lambda_mat_i+bar_lambda_mat__) )= ((*(double *)(3*(ssize_t)sizeof(double)+((*(int*)((ssize_t)sizeof(int)+sub_tri_vert_odd_-((ssize_t)sizeof(int))))+(int)floor((double)((j_-1))/2.))*(ssize_t)sizeof(double)*3+lambda_mat_) )+ (*(double *)(3*(ssize_t)sizeof(double)+((*(int*)(2*(ssize_t)sizeof(int)+sub_tri_vert_odd_-((ssize_t)sizeof(int))))+(int)floor((double)((j_-1))/2.))*(ssize_t)sizeof(double)*3+lambda_mat_) )+ (*(double *)(3*(ssize_t)sizeof(double)+((*(int*)(3*(ssize_t)sizeof(int)+sub_tri_vert_odd_-((ssize_t)sizeof(int))))+(int)floor((double)((j_-1))/2.))*(ssize_t)sizeof(double)*3+lambda_mat_))) / 3.;
            };
             count_ +=  1;
        }
         (*(int *)((ssize_t)sizeof(int)+sub_tri_vert_even_-((ssize_t)sizeof(int))) )+=  n_int_ - i_;
         (*(int *)(2*(ssize_t)sizeof(int)+sub_tri_vert_even_-((ssize_t)sizeof(int))) )+=  n_int_ - i_;
         (*(int *)(3*(ssize_t)sizeof(int)+sub_tri_vert_even_-((ssize_t)sizeof(int))) )+=  n_int_ - i_ - 1;

         (*(int *)((ssize_t)sizeof(int)+sub_tri_vert_odd_-((ssize_t)sizeof(int))) )+=  n_int_ - i_;
         (*(int *)(2*(ssize_t)sizeof(int)+sub_tri_vert_odd_-((ssize_t)sizeof(int))) )+=  n_int_ - i_ - 1;
         (*(int *)(3*(ssize_t)sizeof(int)+sub_tri_vert_odd_-((ssize_t)sizeof(int))) )+=  n_int_ - i_ - 1;
    }
free(lambda_mat_f.ptr);freestack=es;}}

/* baric_utils.h */

void tensegrity_14bar_coord_2D(char *bar_weights_,const int position_l,const int position_h,const ssize_t position_i,char *position__,char *vert_pos_){{struct freefunc* es=freestack;
    double det_T_ ;

     det_T_= ((*(double *)((ssize_t)sizeof(double)+(ssize_t)sizeof(double)*3+vert_pos_))-(*(double *)(3*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*3+vert_pos_)))*((*(double *)(2*(ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*3+vert_pos_))-(*(double *)(3*(ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*3+vert_pos_))) - ((*(double *)((ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*3+vert_pos_))-(*(double *)(3*(ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*3+vert_pos_)))*((*(double *)(2*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*3+vert_pos_))-(*(double *)(3*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*3+vert_pos_))); (*(double *)((ssize_t)sizeof(double)+bar_weights_) )= (((*(double *)(2*(ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*3+vert_pos_))-(*(double *)(3*(ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*3+vert_pos_)))*((*(double *)(position_i+position__))-(*(double *)(3*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*3+vert_pos_))) + ((*(double *)(3*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*3+vert_pos_))-(*(double *)(2*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*3+vert_pos_)))*((*(double *)(2*position_i+position__))-(*(double *)(3*(ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*3+vert_pos_)))) / det_T_;
     (*(double *)(2*(ssize_t)sizeof(double)+bar_weights_) )= (((*(double *)(3*(ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*3+vert_pos_))-(*(double *)((ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*3+vert_pos_)))*((*(double *)(position_i+position__))-(*(double *)(3*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*3+vert_pos_))) + ((*(double *)((ssize_t)sizeof(double)+(ssize_t)sizeof(double)*3+vert_pos_))-(*(double *)(3*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*3+vert_pos_)))*((*(double *)(2*position_i+position__))-(*(double *)(3*(ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*3+vert_pos_)))) / det_T_;
     (*(double *)(3*(ssize_t)sizeof(double)+bar_weights_) )= 1.- (*(double *)((ssize_t)sizeof(double)+bar_weights_) )- (*(double *)(2*(ssize_t)sizeof(double)+bar_weights_));
}}

/* subroutine aggiunte */

void tensegrity_15find_panel(struct TENSEGRITY_ *this_,const int coordinates_l,const int coordinates_h,const ssize_t coordinates_i,char *coordinates__){{struct freefunc* es=freestack;
  int ind_ ;

   ind_= 0; (*(double *)((ssize_t)sizeof(double)+(((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)-((ssize_t)sizeof(double))+(char*)(this_)) )= -1.;
  while( ((ind_ >=0 )&&( ind_ <=(*this_).n_P_ ))&&( ((((((((*(double *)((ssize_t)sizeof(double)+(((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)-((ssize_t)sizeof(double))+(char*)(this_)) )<0.)||( (*(double *)((ssize_t)sizeof(double)+(((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)-((ssize_t)sizeof(double))+(char*)(this_)) )>1.))||(
                                                (*(double *)(2*(ssize_t)sizeof(double)+(((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)-((ssize_t)sizeof(double))+(char*)(this_)) )<0.))||( (*(double *)(2*(ssize_t)sizeof(double)+(((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)-((ssize_t)sizeof(double))+(char*)(this_)) )>1.))||(
                                                (*(double *)(3*(ssize_t)sizeof(double)+(((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)-((ssize_t)sizeof(double))+(char*)(this_)) )<0.))||( (*(double *)(3*(ssize_t)sizeof(double)+(((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)-((ssize_t)sizeof(double))+(char*)(this_)) )>1.))))){
     ind_ +=  1;

    if( ind_ == 907 ){
         {int _16i_=coordinates_l ;do{{  fprintf(stdout,"%g \t",(*(double *)(_16i_*coordinates_i+coordinates__)) );fflush(stdout); }_16i_+=1;}while(_16i_<= coordinates_h);}{} putc('\n',stdout);
    };

     (*(double *)((ssize_t)sizeof(double)+(ssize_t)sizeof(double)*3+((((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*3)-channel_4st+(char*)(this_)) )= (*(double *)((3*(*(int*)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+ind_*(ssize_t)sizeof(int)*2*3+((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)-channel_3st+(char*)(this_))))*(ssize_t)sizeof(double)+(((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)-((ssize_t)sizeof(double))+(char*)(this_)));
     (*(double *)((ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*3+((((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*3)-channel_4st+(char*)(this_)) )= (*(double *)((3*(*(int*)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+ind_*(ssize_t)sizeof(int)*2*3+((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)-channel_3st+(char*)(this_)))-2)*(ssize_t)sizeof(double)+(((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)-((ssize_t)sizeof(double))+(char*)(this_)));
     (*(double *)((ssize_t)sizeof(double)+3*(ssize_t)sizeof(double)*3+((((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*3)-channel_4st+(char*)(this_)) )= (*(double *)((3*(*(int*)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+ind_*(ssize_t)sizeof(int)*2*3+((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)-channel_3st+(char*)(this_)))-1)*(ssize_t)sizeof(double)+(((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)-((ssize_t)sizeof(double))+(char*)(this_)));
     (*(double *)(2*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*3+((((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*3)-channel_4st+(char*)(this_)) )= (*(double *)((3*(*(int*)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+ind_*(ssize_t)sizeof(int)*2*3+((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)-channel_3st+(char*)(this_))))*(ssize_t)sizeof(double)+(((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)-((ssize_t)sizeof(double))+(char*)(this_)));
     (*(double *)(2*(ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*3+((((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*3)-channel_4st+(char*)(this_)) )= (*(double *)((3*(*(int*)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+ind_*(ssize_t)sizeof(int)*2*3+((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)-channel_3st+(char*)(this_)))-2)*(ssize_t)sizeof(double)+(((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)-((ssize_t)sizeof(double))+(char*)(this_)));
     (*(double *)(2*(ssize_t)sizeof(double)+3*(ssize_t)sizeof(double)*3+((((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*3)-channel_4st+(char*)(this_)) )= (*(double *)((3*(*(int*)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+ind_*(ssize_t)sizeof(int)*2*3+((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)-channel_3st+(char*)(this_)))-1)*(ssize_t)sizeof(double)+(((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)-((ssize_t)sizeof(double))+(char*)(this_)));
     (*(double *)(3*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*3+((((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*3)-channel_4st+(char*)(this_)) )= (*(double *)((3*(*(int*)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+ind_*(ssize_t)sizeof(int)*2*3+((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)-channel_3st+(char*)(this_))))*(ssize_t)sizeof(double)+(((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)-((ssize_t)sizeof(double))+(char*)(this_)));
     (*(double *)(3*(ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*3+((((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*3)-channel_4st+(char*)(this_)) )= (*(double *)((3*(*(int*)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+ind_*(ssize_t)sizeof(int)*2*3+((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)-channel_3st+(char*)(this_)))-2)*(ssize_t)sizeof(double)+(((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)-((ssize_t)sizeof(double))+(char*)(this_)));
     (*(double *)(3*(ssize_t)sizeof(double)+3*(ssize_t)sizeof(double)*3+((((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*3)-channel_4st+(char*)(this_)) )= (*(double *)((3*(*(int*)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+ind_*(ssize_t)sizeof(int)*2*3+((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)-channel_3st+(char*)(this_)))-1)*(ssize_t)sizeof(double)+(((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)-((ssize_t)sizeof(double))+(char*)(this_)));

    switch( (*(int *)(2*(ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+ind_*(ssize_t)sizeof(int)*2*3+((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)-channel_3st+(char*)(this_)) )){
      case 1:{  (*(double *)((ssize_t)sizeof(double)+(ssize_t)sizeof(double)*3+((((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*3)-channel_4st+(char*)(this_)) )-=  (double)((*this_).nz_)*(*this_).l_per_;
          (*(double *)((ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*3+((((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*3)-channel_4st+(char*)(this_)) )-=  (double)((*this_).nx_)*(*this_).l_per_;
      }break;
case 2:{  (*(double *)((ssize_t)sizeof(double)+(ssize_t)sizeof(double)*3+((((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*3)-channel_4st+(char*)(this_)) )-=  (double)((*this_).nz_)*(*this_).l_per_;
      }break;
case 3:{  (*(double *)((ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*3+((((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*3)-channel_4st+(char*)(this_)) )-=  (double)((*this_).nx_)*(*this_).l_per_;
      }break;
case 4:{  (*(double *)((ssize_t)sizeof(double)+(ssize_t)sizeof(double)*3+((((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*3)-channel_4st+(char*)(this_)) )+=  (double)((*this_).nz_)*(*this_).l_per_;
          (*(double *)((ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*3+((((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*3)-channel_4st+(char*)(this_)) )-=  (double)((*this_).nx_)*(*this_).l_per_;
      }break;
case 5:{  (*(double *)((ssize_t)sizeof(double)+(ssize_t)sizeof(double)*3+((((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*3)-channel_4st+(char*)(this_)) )+=  (double)((*this_).nz_)*(*this_).l_per_;
      }break;
case 6:{  (*(double *)((ssize_t)sizeof(double)+(ssize_t)sizeof(double)*3+((((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*3)-channel_4st+(char*)(this_)) )-=  (double)((*this_).nz_)*(*this_).l_per_;
          (*(double *)((ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*3+((((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*3)-channel_4st+(char*)(this_)) )+=  (double)((*this_).nx_)*(*this_).l_per_;
      }break;
case 7:{  (*(double *)((ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*3+((((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*3)-channel_4st+(char*)(this_)) )+=  (double)((*this_).nx_)*(*this_).l_per_;
      }break;
case 8:{  (*(double *)((ssize_t)sizeof(double)+(ssize_t)sizeof(double)*3+((((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*3)-channel_4st+(char*)(this_)) )+=  (double)((*this_).nz_)*(*this_).l_per_;
          (*(double *)((ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*3+((((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*3)-channel_4st+(char*)(this_)) )+=  (double)((*this_).nx_)*(*this_).l_per_;
    }break;
};

    switch( (*(int *)(2*(ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+ind_*(ssize_t)sizeof(int)*2*3+((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)-channel_3st+(char*)(this_)) )){
      case 1:{  (*(double *)(2*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*3+((((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*3)-channel_4st+(char*)(this_)) )-=  (double)((*this_).nz_)*(*this_).l_per_;
          (*(double *)(2*(ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*3+((((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*3)-channel_4st+(char*)(this_)) )-=  (double)((*this_).nx_)*(*this_).l_per_;
      }break;
case 2:{  (*(double *)(2*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*3+((((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*3)-channel_4st+(char*)(this_)) )-=  (double)((*this_).nz_)*(*this_).l_per_;
      }break;
case 3:{  (*(double *)(2*(ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*3+((((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*3)-channel_4st+(char*)(this_)) )-=  (double)((*this_).nx_)*(*this_).l_per_;
      }break;
case 4:{  (*(double *)(2*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*3+((((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*3)-channel_4st+(char*)(this_)) )+=  (double)((*this_).nz_)*(*this_).l_per_;
          (*(double *)(2*(ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*3+((((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*3)-channel_4st+(char*)(this_)) )-=  (double)((*this_).nx_)*(*this_).l_per_;
      }break;
case 5:{  (*(double *)(2*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*3+((((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*3)-channel_4st+(char*)(this_)) )+=  (double)((*this_).nz_)*(*this_).l_per_;
      }break;
case 6:{  (*(double *)(2*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*3+((((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*3)-channel_4st+(char*)(this_)) )-=  (double)((*this_).nz_)*(*this_).l_per_;
          (*(double *)(2*(ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*3+((((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*3)-channel_4st+(char*)(this_)) )+=  (double)((*this_).nx_)*(*this_).l_per_;
      }break;
case 7:{  (*(double *)(2*(ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*3+((((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*3)-channel_4st+(char*)(this_)) )+=  (double)((*this_).nx_)*(*this_).l_per_;
      }break;
case 8:{  (*(double *)(2*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*3+((((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*3)-channel_4st+(char*)(this_)) )+=  (double)((*this_).nz_)*(*this_).l_per_;
          (*(double *)(2*(ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*3+((((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*3)-channel_4st+(char*)(this_)) )+=  (double)((*this_).nx_)*(*this_).l_per_;
    }break;
};

    switch( (*(int *)(2*(ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+ind_*(ssize_t)sizeof(int)*2*3+((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)-channel_3st+(char*)(this_)) )){
      case 1:{  (*(double *)(3*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*3+((((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*3)-channel_4st+(char*)(this_)) )-=  (double)((*this_).nz_)*(*this_).l_per_;
          (*(double *)(3*(ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*3+((((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*3)-channel_4st+(char*)(this_)) )-=  (double)((*this_).nx_)*(*this_).l_per_;
      }break;
case 2:{  (*(double *)(3*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*3+((((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*3)-channel_4st+(char*)(this_)) )-=  (double)((*this_).nz_)*(*this_).l_per_;
      }break;
case 3:{  (*(double *)(3*(ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*3+((((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*3)-channel_4st+(char*)(this_)) )-=  (double)((*this_).nx_)*(*this_).l_per_;
      }break;
case 4:{  (*(double *)(3*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*3+((((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*3)-channel_4st+(char*)(this_)) )+=  (double)((*this_).nz_)*(*this_).l_per_;
          (*(double *)(3*(ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*3+((((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*3)-channel_4st+(char*)(this_)) )-=  (double)((*this_).nx_)*(*this_).l_per_;
      }break;
case 5:{  (*(double *)(3*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*3+((((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*3)-channel_4st+(char*)(this_)) )+=  (double)((*this_).nz_)*(*this_).l_per_;
      }break;
case 6:{  (*(double *)(3*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*3+((((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*3)-channel_4st+(char*)(this_)) )-=  (double)((*this_).nz_)*(*this_).l_per_;
          (*(double *)(3*(ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*3+((((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*3)-channel_4st+(char*)(this_)) )+=  (double)((*this_).nx_)*(*this_).l_per_;
      }break;
case 7:{  (*(double *)(3*(ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*3+((((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*3)-channel_4st+(char*)(this_)) )+=  (double)((*this_).nx_)*(*this_).l_per_;
      }break;
case 8:{  (*(double *)(3*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*3+((((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*3)-channel_4st+(char*)(this_)) )+=  (double)((*this_).nz_)*(*this_).l_per_;
          (*(double *)(3*(ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*3+((((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*3)-channel_4st+(char*)(this_)) )+=  (double)((*this_).nx_)*(*this_).l_per_;
    }break;
};

    tensegrity_14bar_coord_2D((((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)-((ssize_t)sizeof(double))+(char*)(this_) ,coordinates_l,coordinates_h,coordinates_i,coordinates__ ,((((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*3)-channel_4st+(char*)(this_));
  }
    
   (*(double *)((ssize_t)sizeof(double)+(((((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*3)+(ssize_t)sizeof(double)*3*2)-((ssize_t)sizeof(double))+(char*)(this_)) )= (*(double *)((3*(*(int*)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+ind_*(ssize_t)sizeof(int)*2*3+((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)-channel_3st+(char*)(this_)))-1)*(ssize_t)sizeof(double)+((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)-((ssize_t)sizeof(double))+(char*)(this_)));
   (*(double *)(2*(ssize_t)sizeof(double)+(((((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*3)+(ssize_t)sizeof(double)*3*2)-((ssize_t)sizeof(double))+(char*)(this_)) )= (*(double *)((3*(*(int*)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+ind_*(ssize_t)sizeof(int)*2*3+((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)-channel_3st+(char*)(this_)))-1)*(ssize_t)sizeof(double)+((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)-((ssize_t)sizeof(double))+(char*)(this_)));
   (*(double *)(3*(ssize_t)sizeof(double)+(((((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*3)+(ssize_t)sizeof(double)*3*2)-((ssize_t)sizeof(double))+(char*)(this_)) )= (*(double *)((3*(*(int*)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+ind_*(ssize_t)sizeof(int)*2*3+((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)-channel_3st+(char*)(this_)))-1)*(ssize_t)sizeof(double)+((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)-((ssize_t)sizeof(double))+(char*)(this_)));

}}

/* Modulo */

void tensegrity_16readInputFile(struct TENSEGRITY_INIT_ *this_,char *fname_);
void tensegrity_17initilizeTensegrity(struct TENSEGRITY_ *this_,struct TENSEGRITY_INIT_ tensegrity_init_);
int tensegrity_18isInBody(struct TENSEGRITY_ *this_,const int coordinates_l,const int coordinates_h,const ssize_t coordinates_i,char *coordinates__);
int tensegrity_19UisInBody(struct TENSEGRITY_ *this_,const int coordinates_l,const int coordinates_h,const ssize_t coordinates_i,char *coordinates__);
double tensegrity_20wbc(struct TENSEGRITY_ *this_,double x_,double y_);
double tensegrity_21Uwbc(struct TENSEGRITY_ *this_,double x_,double y_);

void tensegrity_16readInputFile(struct TENSEGRITY_INIT_ *this_,char *fname_){{struct freefunc* es=freestack;
	FILE *tensegrityin_;

    int nx_;
int nz_;
int n_int_;
int n_tri_int_;
int n_t_;

    double rho_b_;
double k_;
double sigma_;
double h_;
double r_;

    tensegrityin_=NULL;errfopen(&tensegrityin_,fname_,O_RDONLY);   if(!(scanrec( tensegrityin_ ," nx = %d",&nx_)>0&&scanrec( tensegrityin_ ," nz = %d",&nz_)>0&&scanrec( tensegrityin_ ," n_int = %d",&n_int_)>0&&scanrec( tensegrityin_ ," rho_b = %lg",&rho_b_)>0&&scanrec( tensegrityin_ ," k = %lg",&k_)>0&&scanrec( tensegrityin_ ," sigma = %lg",&sigma_)>0&&scanrec( tensegrityin_ ," h = %lg",&h_)>0&&scanrec( tensegrityin_ ," r = %lg",&r_)>0))ioerr( tensegrityin_ );

     (*this_).nx_    = nx_;
     (*this_).nz_    = nz_;
     (*this_).n_int_ = n_int_;
     (*this_).rho_b_ = rho_b_;
     (*this_).k_     = k_;
     (*this_).sigma_ = sigma_;
     (*this_).h_     = h_;
     (*this_).r_     = r_;

     (*this_).n_C_       = (*this_).nx_*(*this_).nz_;
     (*this_).n_B_       = 4*(*this_).nx_*(*this_).nz_;
     (*this_).n_T_       = 12*((*this_).nx_-1)*((*this_).nz_-1) - 3*(((*this_).nx_-2)*((*this_).nz_-1)+((*this_).nz_-2)*((*this_).nx_-1)) + 3*4 + 3*((*this_).nx_-2) + 3*((*this_).nz_-2) + 4*(*this_).nx_*(*this_).nz_;
     (*this_).n_G_       = 2*(*this_).nx_ + 2*(*this_).nz_;
     (*this_).n_N_       = (*this_).n_C_ * 8 + (*this_).n_G_;
     (*this_).n_N_dof_   = 3*(*this_).n_N_;
     (*this_).n_T_dof_   = 3*(*this_).n_T_;
     (*this_).n_q_tilde_ = 2*2*(*this_).n_B_;
     (*this_).n_P_       = 6*((*this_).nx_+2)*((*this_).nz_+2) + 2*((*this_).nx_+1)*((*this_).nz_+1);
    }}

  void tensegrity_17initilizeTensegrity(struct TENSEGRITY_ *this_,struct TENSEGRITY_INIT_ tensegrity_init_){{struct freefunc* es=freestack;
    ssize_t _23i;
ssize_t _24i;
 (*this_).rho_b_ = tensegrity_init_.rho_b_;
     (*this_).k_     = tensegrity_init_.k_;
     (*this_).sigma_ = tensegrity_init_.sigma_;
     (*this_).h_     = tensegrity_init_.h_;
     (*this_).r_     = tensegrity_init_.r_;

     (*this_).l_b_     = sqrt(((*this_).h_*(*this_).h_)+ (2.+sqrt(2.))*((*this_).r_*(*this_).r_));
     (*this_).I_0_     = 1./3.* (*this_).rho_b_ * pow((*this_).l_b_,3);
     (*this_).alpha_1_ = atan(sqrt(2.)-1.);
     (*this_).l_per_   = (2.*(*this_).r_) / (cos((*this_).alpha_1_)+sin((*this_).alpha_1_));
     (*this_).l_v_1_   = sqrt(((*this_).h_*(*this_).h_)+ (2.-sqrt(2.))*((*this_).r_*(*this_).r_));
     (*this_).l_h_1_   = sqrt(2.)*(*this_).r_;
     (*this_).l_u_l_   = (2.-sqrt(2.))*(*this_).l_h_1_;
     (*this_).l_u_s_   = (*this_).l_h_1_ - (*this_).l_u_l_;
     (*this_).l_u_l_0_ = (*this_).l_u_l_ / 3.;
     (*this_).l_h_0_   = (2.*(*this_).l_u_l_0_*(*this_).l_h_1_)/((*this_).l_u_l_ + (*this_).l_u_l_0_);
     (*this_).l_u_s_0_ = (*this_).l_h_0_ * (*this_).l_u_s_ / (*this_).l_h_1_;
     (*this_).l_i_0_   = pow((((*this_).l_h_1_/(*this_).l_h_0_-1.)/(*this_).r_ + 1./(*this_).l_v_1_),( - 1));

    tensegrity_7B_con_comp(1,(*this_).n_B_,(ssize_t)sizeof(int)*2,1,2,(ssize_t)sizeof(int),TENSEGRITY_s-channel_1st+(char*)(this_) ,tensegrity_init_.n_B_ ,tensegrity_init_.n_C_);
    tensegrity_8T_comp(1,(*this_).n_T_,(ssize_t)sizeof(int)*2,(TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)-channel_1st+(char*)(this_) ,1,(*this_).n_G_,(ssize_t)sizeof(int)*3,((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)-channel_2st+(char*)(this_) ,1,(*this_).n_T_,(ssize_t)sizeof(double),(((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)-((ssize_t)sizeof(double))+(char*)(this_) ,(*this_).nx_ ,(*this_).nz_ ,(*this_).n_C_ ,(*this_).n_T_ ,(*this_).n_G_ ,(*this_).l_u_s_0_ ,(*this_).l_u_l_0_ ,(*this_).l_i_0_);
     for(int i_=  1 ;i_<= (*this_).n_P_ ;i_+=1){ for(int j_=  1 ;j_<= 3 ;j_+=1){ for(int k_=  1 ;k_<= 2;k_+=1){
      ssize_t _22i;
_22i=(ssize_t)sizeof(int)*2*3*((*this_).n_P_); memset(channel_3st+((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)-channel_3st+(char*)(this_),0,_22i);
    }}}
    tensegrity_12P_comp(1,(*this_).n_P_,(ssize_t)sizeof(int)*2*3,((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)-channel_3st+(char*)(this_) ,1,(*this_).n_G_,(ssize_t)sizeof(int)*3,1,3,(ssize_t)sizeof(int),((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)-channel_2st+(char*)(this_) ,(*this_).nx_ ,(*this_).nz_ ,(*this_).n_C_ ,(*this_).n_T_
           ,(*this_).n_G_);
    tensegrity_3X_0_comp(1,(*this_).n_N_dof_,(ssize_t)sizeof(double),((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)-((ssize_t)sizeof(double))+(char*)(this_) ,(*this_).h_ ,(*this_).r_ ,(*this_).alpha_1_ ,(*this_).l_per_ ,(*this_).nx_ ,(*this_).nz_
             ,(*this_).n_N_ ,(*this_).n_G_ ,(*this_).n_N_dof_ ,((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)-channel_2st+(char*)(this_));
    tensegrity_4q_0_tilde_comp(1,(*this_).n_q_tilde_,(ssize_t)sizeof(double),(((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)-((ssize_t)sizeof(double))+(char*)(this_) ,1,(*this_).n_N_dof_,(ssize_t)sizeof(double),((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)-((ssize_t)sizeof(double))+(char*)(this_) ,1,(*this_).n_B_,(ssize_t)sizeof(int)*2,1,2,(ssize_t)sizeof(int),TENSEGRITY_s-channel_1st+(char*)(this_) ,(*this_).l_b_ ,(*this_).n_q_tilde_ ,(*this_).n_B_);
    
    _23i=(ssize_t)sizeof(double)*((*this_).n_q_tilde_); memmove((ssize_t)sizeof(double)+(((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)-((ssize_t)sizeof(double))+(char*)(this_),(ssize_t)sizeof(double)+(((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)-((ssize_t)sizeof(double))+(char*)(this_),_23i);
    _24i=(ssize_t)sizeof(double)*((*this_).n_N_dof_); memmove((ssize_t)sizeof(double)+(((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)-((ssize_t)sizeof(double))+(char*)(this_),(ssize_t)sizeof(double)+((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)-((ssize_t)sizeof(double))+(char*)(this_),_24i);

    /*this.q_tilde_arr(*,1) = this.q_tilde */
     for(int i_=  1 ;i_<= (*this_).n_q_tilde_;i_+=1){
         (*(double *)((ssize_t)sizeof(double)+i_*(ssize_t)sizeof(double)*(*this_).n_t_+((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)-((ssize_t)sizeof(double)*(*this_).n_t_+(ssize_t)sizeof(double))+(char*)(this_)) )= (*(double *)(i_*(ssize_t)sizeof(double)+(((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)-((ssize_t)sizeof(double))+(char*)(this_)));
    }
     (*(double *)((ssize_t)sizeof(double)+((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)-((ssize_t)sizeof(double))+(char*)(this_)) )= 0.;
  }}


int tensegrity_18isInBody(struct TENSEGRITY_ *this_,const int coordinates_l,const int coordinates_h,const ssize_t coordinates_i,char *coordinates__){{struct freefunc* es=freestack;int RESULT_;
  
    tensegrity_15find_panel(this_ ,coordinates_l,coordinates_h,coordinates_i,coordinates__);
    /*WRITE this.bar_weights, this.vert_pos */

   RESULT_= (*(double *)((2+coordinates_l)*coordinates_i+coordinates__))<(*(double *)((ssize_t)sizeof(double)+(((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)-((ssize_t)sizeof(double))+(char*)(this_)))*(*(double *)((ssize_t)sizeof(double)+3*(ssize_t)sizeof(double)*3+((((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*3)-channel_4st+(char*)(this_)) )+
                             (*(double *)(2*(ssize_t)sizeof(double)+(((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)-((ssize_t)sizeof(double))+(char*)(this_)))*(*(double *)(2*(ssize_t)sizeof(double)+3*(ssize_t)sizeof(double)*3+((((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*3)-channel_4st+(char*)(this_)) )+
                             (*(double *)(3*(ssize_t)sizeof(double)+(((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)-((ssize_t)sizeof(double))+(char*)(this_)))*(*(double *)(3*(ssize_t)sizeof(double)+3*(ssize_t)sizeof(double)*3+((((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*3)-channel_4st+(char*)(this_)));
return RESULT_;}}

int tensegrity_19UisInBody(struct TENSEGRITY_ *this_,const int coordinates_l,const int coordinates_h,const ssize_t coordinates_i,char *coordinates__) {{struct freefunc* es=freestack;int RESULT_;
   RESULT_= (*(double *)((2+coordinates_l)*coordinates_i+coordinates__))>2.261313;
return RESULT_;}}

double tensegrity_20wbc(struct TENSEGRITY_ *this_,double x_,double y_){{struct freefunc* es=freestack;double RESULT_;
  char coordinates_[(ssize_t)sizeof(double)*3] ;


   (*(double *)((ssize_t)sizeof(double)+coordinates_-((ssize_t)sizeof(double))))=x_;(*(double *)((1+1)*(ssize_t)sizeof(double)+coordinates_-((ssize_t)sizeof(double))))=y_;(*(double *)((1+2)*(ssize_t)sizeof(double)+coordinates_-((ssize_t)sizeof(double))))=0.;tensegrity_15find_panel(this_ ,1,3,(ssize_t)sizeof(double),coordinates_-((ssize_t)sizeof(double)));

   RESULT_= (*(double *)((ssize_t)sizeof(double)+(((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)-((ssize_t)sizeof(double))+(char*)(this_)))*(*(double *)((ssize_t)sizeof(double)+(((((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*3)+(ssize_t)sizeof(double)*3*2)-((ssize_t)sizeof(double))+(char*)(this_)) )+
          (*(double *)(2*(ssize_t)sizeof(double)+(((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)-((ssize_t)sizeof(double))+(char*)(this_)))*(*(double *)(2*(ssize_t)sizeof(double)+(((((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*3)+(ssize_t)sizeof(double)*3*2)-((ssize_t)sizeof(double))+(char*)(this_)) )+
          (*(double *)(3*(ssize_t)sizeof(double)+(((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)-((ssize_t)sizeof(double))+(char*)(this_)))*(*(double *)(3*(ssize_t)sizeof(double)+(((((((((((((((TENSEGRITY_s+(ssize_t)sizeof(int)*2*(*this_).n_B_)+(ssize_t)sizeof(int)*2*(*this_).n_T_)+(ssize_t)sizeof(int)*3*(*this_).n_G_)+(ssize_t)sizeof(double)*(*this_).n_T_)+(ssize_t)sizeof(int)*2*3*(*this_).n_P_)+(ssize_t)sizeof(double)*3*(*this_).n_tri_int_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_N_dof_)+(ssize_t)sizeof(double)*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*(*this_).n_t_*(*this_).n_q_tilde_)+(ssize_t)sizeof(double)*3)+(ssize_t)sizeof(double)*3*2)-((ssize_t)sizeof(double))+(char*)(this_)));
return RESULT_;}}

double tensegrity_21Uwbc(struct TENSEGRITY_ *this_,double x_,double y_){{struct freefunc* es=freestack;double RESULT_;
  RESULT_=0.;
return RESULT_;}}


