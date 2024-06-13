/**/

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

char errortemp_[(80+1)];


struct arrptr{int l,h; ssize_t i; char *a;};
struct dynptr{void* p; int t;};
char INTERRUPT=0;
typedef void (*traphandler_t)(const char *);
struct jbtrap{traphandler_t tr; sigjmp_buf jb; struct freefunc *fs;} mainjb;
struct jbtrap* curjb=&mainjb;
#define traphandler curjb->tr

struct freefunc{struct freefunc *next; void (*f)(void *); void *ptr;};
struct freefunc* freestack=NULL;
#define freemem(upto) while(freestack!=upto){freestack->f(freestack->ptr); freestack=freestack->next;}
#define atblockexit(name,func,p) name.f=func;name.ptr=p;name.next=freestack;freestack=&name
#define commablockexit(name,func,p) name.f=func,name.ptr=p,name.next=freestack,freestack=&name
void traprestore(void *ptr){curjb=ptr;}
void condfree(void *ptr){if(*(void **)ptr!=NULL)free(*(void **)ptr);}
int friexecerror(char** s){
  fprintf(stderr,"\rprogram must be run under icpl\n");
  sleep(1);
  return 0;
}
int (*friexec)(char** s)=friexecerror;

int dynptrerr(int type){
  snprintf(errortemp_,sizeof(errortemp_),"Argument of incompatible TYPE %d",type);
  traphandler(errortemp_);
  return 0;
}
void *errmalloc(void){
  traphandler("Not enough memory");
  return NULL;
}
void ioerr(FILE *fil){
  char where[11];
  off_t cn;
  int fn;
  if(fil==NULL){
    snprintf(errortemp_,sizeof(errortemp_),"file not found");
  } else {
    fn=fileno(fil);
    cn=ftello(fil);
    if(ferror(fil)){
      snprintf(errortemp_,sizeof(errortemp_),"%s in fd %d char %ld",strerror(errno),fn,(long)cn);
    } else if(feof(fil)){
      snprintf(errortemp_,sizeof(errortemp_),"End of file in fd %d char %ld",fn,(long)cn);
    } else {
      if(!(cn>=0 && fscanf(fil,"%10s",where)>0)) where[0]=0;
      snprintf(errortemp_,sizeof(errortemp_),"Unrecognized input \"%s\" from fd %d char %ld",where,fn,(long)cn);
    }
  }
  traphandler(errortemp_);
}
void errfclose(void *voidf){
  FILE **f=(FILE **)voidf;
  int fn;
  if(*f==NULL)return;
  fn=fileno(*f);
  if(fn>=0 && ftell(*f)>=0 && fclose(*f)!=0){
    snprintf(errortemp_,sizeof(errortemp_),"Error in closing fd %d: %s",fn,strerror(errno));
    traphandler(errortemp_);
    }
  *f=NULL;
}
void errfopen(FILE **f, const char *name, int mode){
  int fd;
/*  if(*f)errfclose(f);  causes segfault if used on copies of closed FILE descriptors */
  fd=open(name,mode,0666);
  if(fd>0 || mode==O_RDONLY){
    *f=fdopen(fd,mode==O_RDONLY?"r":"r+");
    if(*f!=NULL || mode==O_RDONLY)return;
    } 
  snprintf(errortemp_,sizeof(errortemp_),"Error in opening %s: %s",name,strerror(errno));
  traphandler(errortemp_);
}
int scanrec(FILE *f, const char *format, void *var) {
  if(f==NULL)return 0;
  off_t pos; int res=0;
  register int c;
  if (friexec!=friexecerror && isatty(fileno(f))){
    char *s="\357\201i\362\371\376";
    if (friexec(&s) && sscanf(s,format,var)==1) return 1;
  }
  pos=ftello(f);
  while((c=getc(f))<=' '&&(c!='\n')&&(c!=EOF)){};
  if(c!='\n')ungetc(c,f);
  while((c=getc(f))=='!') {while(!feof(f)&&getc(f)!='\n'){};};
  ungetc(c,f);
  res=fscanf(f,format,var);
  if (res<=0 && var!=NULL && pos>=0) fseeko(f,pos,SEEK_SET);
  return res;
}
int scanbool(FILE *f, const char *format, int *var) {
  char c;
  return scanrec(f,format,&c)&&((*var=(c=='T')||(c=='Y')||(c=='t')||(c=='y'))||(c=='F')||(c=='N')||(c=='f')||(c=='n'));
  }
int myfgets(char *name, char *var, char *varend, FILE *f) {
  off_t pos;
  register int c;
  if(f==NULL)return 0;
  pos=ftello(f);
  if(feof(f))return 0;
  while(*name!=0){
    if(*name==' '){while((c=getc(f))<=' '){};ungetc(c,f);} else
    if(*name!=getc(f)){fseeko(f,pos,SEEK_SET);return 0;};
    name++;
  };
  if(var<varend){
    do{c=getc(f); *var=c;}while(c!=EOF && c!='\n' && ++var < varend);
    *var=0;
  }
  return 1;
}
int mygetline(char *name, char **var, FILE *f) {
  off_t pos;
  int c,oldc;
  if(f==NULL)return 0;
  pos=ftello(f);
  if(feof(f))return 0;
  while(*name!=0){
    if(*name==' '){while((c=getc(f))<=' '&&c>=0){};ungetc(c,f);} else
    if(*name!=getc(f)){fseeko(f,pos,SEEK_SET);return 0;};
    name++;
  };
  c=32; oldc=0;
  while(1){
  *var=realloc(*var,c);
  if (fgets(*var+oldc,c-oldc,f)==NULL) {fseeko(f,pos,SEEK_SET);return 0;};
  {char* c1=memchr(*var+oldc,'\n',c-oldc-1); if(c1) {*c1=0; return 1;}}
  oldc=c-1; c=2*c;
  }
  /*
  c=0;
  getline(var,&c,f);
  {char* c1=strchr(*var,'\n'); if(c1) *c1=0;}
  return 1;
  */
}
/* Note: fetestexcept always returns zero. Detecting the type of floating point
   exception requires testing the si_code field of sig_info (man sigaction) */
void trapsignal(int signum, siginfo_t *info, void *ucontext){
  feclearexcept(FE_ALL_EXCEPT);
  feenableexcept(fpe);
  if(signum==SIGINT) traphandler(&INTERRUPT);
  else if (signum==SIGFPE){
    switch(info->si_code){
    case FPE_INTDIV: traphandler("*** ERROR: integer division by zero");
    case FPE_FLTDIV: traphandler("*** ERROR: floating-point division by zero");
    case FPE_FLTOVF: traphandler("*** ERROR: floating-point overflow");
    default: traphandler("*** ERROR: invalid or unassigned floating-point value");
    }
  }
  else traphandler(strsignal(signum));
}
#if (defined __i386__ || defined __x86_64__)
#define mmovefrom(var,buf,type) *(type *)(buf)=*var
#define mmoveto(var,buf,type) *var=*(type *)(buf)
#else
#define mmovefrom(var,buf,type) memmove(buf,var,sizeof(type))
#define mmoveto(var,buf,type) memmove(var,buf,sizeof(type))
#endif
#define mainstart \
void default_traphandler(const char *errormessage){ \
  if(errormessage[0]){ \
    printERR; \
    freemem(NULL); \
    exit(EXIT_FAILURE); \
  }else{ \
    freemem(NULL); \
    exit(EXIT_SUCCESS); \
  } \
} \
int main(int argc, char **argv){ \
struct freefunc* es; \
			\
{struct sigaction act,oldact; \
act.sa_sigaction=trapsignal; \
sigemptyset(&act.sa_mask); \
act.sa_flags=SA_RESTART|SA_SIGINFO|SA_NODEFER; \
sigaction(SIGSEGV,&act,&oldact); \
if (oldact.sa_handler!=SIG_DFL)sigaction(SIGSEGV,&oldact,NULL); \
sigaction(SIGFPE,&act,&oldact); \
if (oldact.sa_handler!=SIG_DFL)sigaction(SIGFPE,&oldact,NULL); \
sigaction(SIGILL,&act,&oldact); \
if (oldact.sa_handler!=SIG_DFL)sigaction(SIGILL,&oldact,NULL); \
sigaction(SIGINT,&act,&oldact); \
if (oldact.sa_handler!=SIG_DFL)sigaction(SIGINT,&oldact,NULL); \
/* \
{void (*sig)(int); \
if((sig=signal(SIGSEGV,trapsignal))!=SIG_DFL)signal(SIGSEGV,sig); \
if((sig=signal(SIGFPE,trapsignal))!=SIG_DFL)signal(SIGFPE,sig); \
if((sig=signal(SIGILL,trapsignal))!=SIG_DFL)signal(SIGILL,sig); \
if((sig=signal(SIGINT,trapsignal))!=SIG_DFL)signal(SIGINT,sig); \
*/ \
else {traphandler=default_traphandler; \
      freestack=NULL; \
      feenableexcept(fpe); \
     }; \
} \
es=freestack;





/* INTEGER LIBRARY FUNCTION INTEGER[(int)rint](REAL x) */
/* INTEGER LIBRARY FUNCTION int[(int)](REAL x) */






/* to-do list
1) modificare STRUCTURED ARRAY in modo da evitare malloc quando possibile
2) separare il #define CPL da quello C
*/
/* Inclusioni */

void main_1X_dot_comp(const int X_dot_l,const int X_dot_h,const ssize_t X_dot_i,char *X_dot__,int n_N_dof_,int n_N_,int n_G_,double l_b_,const int q_tilde_l,const int q_tilde_h,const ssize_t q_tilde_i,char *q_tilde__,const int ghost_nodes_l,const int ghost_nodes_h,const ssize_t ghost_nodes_i,const int ghost_nodes__l,const int ghost_nodes__h,const ssize_t ghost_nodes__i,char *ghost_nodes___){{struct freefunc* es=freestack;

     for(int i_=  1 ;i_<= (int)floor((double)((n_N_-n_G_))/2.);i_+=1){
         (*(double *)((3*i_-2)*X_dot_i+X_dot__) )= l_b_*(cos((*(double *)((2*i_-1+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*cos((*(double *)((2*i_+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*(*(double *)((2*i_-1)*q_tilde_i+q_tilde__))-sin((*(double *)((2*i_-1+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*sin((*(double *)((2*i_+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*(*(double *)((2*i_)*q_tilde_i+q_tilde__)));
         (*(double *)((3*i_-1)*X_dot_i+X_dot__) )= l_b_*(cos((*(double *)((2*i_-1+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*sin((*(double *)((2*i_+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*(*(double *)((2*i_-1)*q_tilde_i+q_tilde__))+sin((*(double *)((2*i_-1+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*cos((*(double *)((2*i_+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*(*(double *)((2*i_)*q_tilde_i+q_tilde__)));
         (*(double *)((3*i_)*X_dot_i+X_dot__)   )=  - l_b_*sin((*(double *)((2*i_-1+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*(*(double *)((2*i_-1)*q_tilde_i+q_tilde__));
    }

     for(int i_=  1 ;i_<= n_G_;i_+=1){
        int _2ghost_ind;
int _3parent_ind;
_2ghost_ind=(*(int*)(ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___)); 
        _3parent_ind=(*(int*)(2*ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___)); 

         (*(double *)((3*_2ghost_ind-2)*X_dot_i+X_dot__) )= (*(double *)((3*_3parent_ind-2)*X_dot_i+X_dot__));
         (*(double *)((3*_2ghost_ind-1)*X_dot_i+X_dot__) )= (*(double *)((3*_3parent_ind-1)*X_dot_i+X_dot__));
         (*(double *)((3*_2ghost_ind)*X_dot_i+X_dot__)   )= (*(double *)((3*_3parent_ind)*X_dot_i+X_dot__));
    }
}}

void main_2X_comp(const int X_l,const int X_h,const ssize_t X_i,char *X__,int n_N_dof_,int n_N_,int n_G_,int nx_,int nz_,double l_per_,double l_b_,const int q_tilde_l,const int q_tilde_h,const ssize_t q_tilde_i,char *q_tilde__,const int X_0_l,const int X_0_h,const ssize_t X_0_i,char *X_0__,const int ghost_nodes_l,const int ghost_nodes_h,const ssize_t ghost_nodes_i,const int ghost_nodes__l,const int ghost_nodes__h,const ssize_t ghost_nodes__i,char *ghost_nodes___){{struct freefunc* es=freestack;

    {char *_4_;

_4_=X_l*X_0_i+X_0__; {char *_3_=X_l*X_i+X__;int _3_1=X_h-X_l; do{{ (*(double *)(_3_))=(*(double *)(_4_)); _4_ =X_0_i+_4_;}_3_+=X_i;_3_1--;}while(_3_1>=0);}} 

     for(int i_=  1 ;i_<= (int)floor((double)((n_N_-n_G_))/2.);i_+=1){
         (*(double *)((3*i_-2)*X_i+X__) )= (*(double *)((3*i_-2+3*(int)floor((double)((n_N_-n_G_))/2.))*X_0_i+X_0__)) + l_b_*sin((*(double *)((2*i_-1+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*cos((*(double *)((2*i_+(n_N_-n_G_))*q_tilde_i+q_tilde__)));
         (*(double *)((3*i_-1)*X_i+X__) )= (*(double *)((3*i_-1+3*(int)floor((double)((n_N_-n_G_))/2.))*X_0_i+X_0__)) + l_b_*sin((*(double *)((2*i_-1+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*sin((*(double *)((2*i_+(n_N_-n_G_))*q_tilde_i+q_tilde__)));
         (*(double *)((3*i_)*X_i+X__)   )= (*(double *)((3*i_+3*(int)floor((double)((n_N_-n_G_))/2.))*X_0_i+X_0__)) + l_b_*cos((*(double *)((2*i_-1+(n_N_-n_G_))*q_tilde_i+q_tilde__)));
    }

     for(int i_=  1 ;i_<= n_G_;i_+=1){
        int _5ghost_ind;
int _6parent_ind;
int _7per_dir;
_5ghost_ind=(*(int*)(ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___)); 
        _6parent_ind=(*(int*)(2*ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___)); 
        _7per_dir=(*(int*)(3*ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___)); 

        if( _7per_dir == 1 ){
             (*(double *)((3*_5ghost_ind-2)*X_i+X__) )= (*(double *)((3*_6parent_ind-2)*X_i+X__) )- (double)(nx_)*l_per_;
             (*(double *)((3*_5ghost_ind-1)*X_i+X__) )= (*(double *)((3*_6parent_ind-1)*X_i+X__) );
             (*(double *)((3*_5ghost_ind)*X_i+X__)   )= (*(double *)((3*_6parent_ind)*X_i+X__));
        }else{ if( _7per_dir == 2 ){
             (*(double *)((3*_5ghost_ind-2)*X_i+X__) )= (*(double *)((3*_6parent_ind-2)*X_i+X__) );
             (*(double *)((3*_5ghost_ind-1)*X_i+X__) )= (*(double *)((3*_6parent_ind-1)*X_i+X__));
             (*(double *)((3*_5ghost_ind)*X_i+X__)   )= (*(double *)((3*_6parent_ind)*X_i+X__)   )- (double)(nz_)*l_per_;
        }else{ if( _7per_dir == 3 ){
             (*(double *)((3*_5ghost_ind-2)*X_i+X__) )= (*(double *)((3*_6parent_ind-2)*X_i+X__) );
             (*(double *)((3*_5ghost_ind-1)*X_i+X__) )= (*(double *)((3*_6parent_ind-1)*X_i+X__));
             (*(double *)((3*_5ghost_ind)*X_i+X__)   )= (*(double *)((3*_6parent_ind)*X_i+X__)   )+ (double)(nz_)*l_per_;
        }else{ if( _7per_dir == 4 ){
             (*(double *)((3*_5ghost_ind-2)*X_i+X__) )= (*(double *)((3*_6parent_ind-2)*X_i+X__) )+ (double)(nx_)*l_per_;
             (*(double *)((3*_5ghost_ind-1)*X_i+X__) )= (*(double *)((3*_6parent_ind-1)*X_i+X__) );
             (*(double *)((3*_5ghost_ind)*X_i+X__)   )= (*(double *)((3*_6parent_ind)*X_i+X__));
        };};};};
    }
}}
void main_3B_con_comp(const int B_con_l,const int B_con_h,const ssize_t B_con_i,const int B_con__l,const int B_con__h,const ssize_t B_con__i,char *B_con___,int n_B_,int n_C_){{struct freefunc* es=freestack;
    
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


void main_4T_comp(const int T_con_l,const int T_con_h,const ssize_t T_con_i,char *T_con__,const int ghost_nodes_l,const int ghost_nodes_h,const ssize_t ghost_nodes_i,char *ghost_nodes__,const int l_0_l,const int l_0_h,const ssize_t l_0_i,char *l_0__,int nx_,int nz_,int n_C_,int n_T_,int n_G_,double l_u_s_0_,double l_u_l_0_,double l_i_0_){{struct freefunc* es=freestack;

    ssize_t _5i;
ssize_t _6st;
struct freefunc Ten_cell_up_f;char *Ten_cell_up_;


    int count_1_ ;


    int count_2_ ;

    int count_g_ ;


    int count_3_ ;


    int count_4_ ;


    _5i=(ssize_t)sizeof(int)*10*n_C_;_6st=(ssize_t)sizeof(int)*10+(ssize_t)sizeof(int);
Ten_cell_up_=malloc(_5i);if(Ten_cell_up_==NULL)Ten_cell_up_=errmalloc();Ten_cell_up_-=_6st;atblockexit(Ten_cell_up_f,free,Ten_cell_up_+_6st);
 for(int j_=  1 ;j_<= nx_ ;j_+=1){ for(int i_=  1 ;i_<= nz_;i_+=1){

        int _7ind;
int mtemp8;
int mtemp9;
_7ind=(int)floor((double)(i_+nz_*(j_-1))); 
        
         (*(int *)((ssize_t)sizeof(int)+_7ind*(ssize_t)sizeof(int)*10+Ten_cell_up_) )= (int)floor((double)(4*(i_+(j_-1)*nz_)-3));
         (*(int *)(2*(ssize_t)sizeof(int)+_7ind*(ssize_t)sizeof(int)*10+Ten_cell_up_) )= (int)floor((double)(4*(i_+(j_-1)*nz_)-2));
         (*(int *)(3*(ssize_t)sizeof(int)+_7ind*(ssize_t)sizeof(int)*10+Ten_cell_up_) )= (int)floor((double)(4*(i_+(j_-1)*nz_)-1));
         (*(int *)(4*(ssize_t)sizeof(int)+_7ind*(ssize_t)sizeof(int)*10+Ten_cell_up_) )= (int)floor((double)(4*(i_+(j_-1)*nz_)));

        if( !(((mtemp8=i_ ,mtemp8% nz_+((mtemp8>=0)==(nz_>=0)?0:nz_))==0) )){
             (*(int *)(5*(ssize_t)sizeof(int)+_7ind*(ssize_t)sizeof(int)*10+Ten_cell_up_) )= (int)floor((double)(i_+(j_-1)*nz_+1));
        };

        if( !(((mtemp9=j_ ,mtemp9% nx_+((mtemp9>=0)==(nx_>=0)?0:nx_))==0) )){
             (*(int *)(6*(ssize_t)sizeof(int)+_7ind*(ssize_t)sizeof(int)*10+Ten_cell_up_) )= (int)floor((double)(i_+j_*nz_));
        };

        if( j_ == 1 ){
             (*(int *)(7*(ssize_t)sizeof(int)+_7ind*(ssize_t)sizeof(int)*10+Ten_cell_up_) )= (int)floor((double)(i_+nz_*(nx_-1)));
        };

        if( i_ == 1 ){
             (*(int *)(8*(ssize_t)sizeof(int)+_7ind*(ssize_t)sizeof(int)*10+Ten_cell_up_) )= (int)floor((double)(nz_+nz_*(j_-1)));
        };

        if( i_ == nz_ ){
             (*(int *)(9*(ssize_t)sizeof(int)+_7ind*(ssize_t)sizeof(int)*10+Ten_cell_up_) )= (int)floor((double)(1+nz_*(j_-1)));
        };

        if( j_ == nx_ ){ 
             (*(int *)(10*(ssize_t)sizeof(int)+_7ind*(ssize_t)sizeof(int)*10+Ten_cell_up_) )= i_;
        };
    }}

     count_1_= 0; for(int i_=  1 ;i_<= (int)floor((double)(nx_*nz_));i_+=1){

        int _10r_con;
int _11u_con;
_10r_con=(*(int *)(5*(ssize_t)sizeof(int)+i_*(ssize_t)sizeof(int)*10+Ten_cell_up_)); 
        _11u_con=(*(int *)(6*(ssize_t)sizeof(int)+i_*(ssize_t)sizeof(int)*10+Ten_cell_up_)); 

        if( !((_10r_con == 0) )){
             count_1_ +=  1;

             (*(int *)((ssize_t)sizeof(int)+(3*count_1_-2)*T_con_i+T_con__) )= (*(int *)(2*(ssize_t)sizeof(int)+i_*(ssize_t)sizeof(int)*10+Ten_cell_up_));
             (*(int *)(2*(ssize_t)sizeof(int)+(3*count_1_-2)*T_con_i+T_con__) )= (*(int *)((ssize_t)sizeof(int)+_10r_con*(ssize_t)sizeof(int)*10+Ten_cell_up_));
             (*(int *)((ssize_t)sizeof(int)+(3*count_1_-1)*T_con_i+T_con__) )= (*(int *)((ssize_t)sizeof(int)+_10r_con*(ssize_t)sizeof(int)*10+Ten_cell_up_));
             (*(int *)(2*(ssize_t)sizeof(int)+(3*count_1_-1)*T_con_i+T_con__) )= (*(int *)(3*(ssize_t)sizeof(int)+i_*(ssize_t)sizeof(int)*10+Ten_cell_up_));
             (*(int *)((ssize_t)sizeof(int)+(3*count_1_)*T_con_i+T_con__)   )= (*(int *)(3*(ssize_t)sizeof(int)+i_*(ssize_t)sizeof(int)*10+Ten_cell_up_));
             (*(int *)(2*(ssize_t)sizeof(int)+(3*count_1_)*T_con_i+T_con__)   )= (*(int *)(4*(ssize_t)sizeof(int)+_10r_con*(ssize_t)sizeof(int)*10+Ten_cell_up_));

             (*(double *)((3*count_1_-2)*l_0_i+l_0__) )= l_u_s_0_;
             (*(double *)((3*count_1_-1)*l_0_i+l_0__) )= l_u_l_0_;
             (*(double *)((3*count_1_)*l_0_i+l_0__)   )= l_u_s_0_;
        };
        if( !((_11u_con == 0) )){
             count_1_ +=  1;

             (*(int *)((ssize_t)sizeof(int)+(3*count_1_-2)*T_con_i+T_con__) )= (*(int *)((ssize_t)sizeof(int)+_11u_con*(ssize_t)sizeof(int)*10+Ten_cell_up_));
             (*(int *)(2*(ssize_t)sizeof(int)+(3*count_1_-2)*T_con_i+T_con__) )= (*(int *)(4*(ssize_t)sizeof(int)+i_*(ssize_t)sizeof(int)*10+Ten_cell_up_));
             (*(int *)((ssize_t)sizeof(int)+(3*count_1_-1)*T_con_i+T_con__) )= (*(int *)(4*(ssize_t)sizeof(int)+i_*(ssize_t)sizeof(int)*10+Ten_cell_up_));
             (*(int *)(2*(ssize_t)sizeof(int)+(3*count_1_-1)*T_con_i+T_con__) )= (*(int *)(2*(ssize_t)sizeof(int)+_11u_con*(ssize_t)sizeof(int)*10+Ten_cell_up_));
             (*(int *)((ssize_t)sizeof(int)+(3*count_1_)*T_con_i+T_con__)   )= (*(int *)(2*(ssize_t)sizeof(int)+_11u_con*(ssize_t)sizeof(int)*10+Ten_cell_up_));
             (*(int *)(2*(ssize_t)sizeof(int)+(3*count_1_)*T_con_i+T_con__)   )= (*(int *)(3*(ssize_t)sizeof(int)+i_*(ssize_t)sizeof(int)*10+Ten_cell_up_));

             (*(double *)((3*count_1_-2)*l_0_i+l_0__) )= l_u_s_0_;
             (*(double *)((3*count_1_-1)*l_0_i+l_0__) )= l_u_l_0_;
             (*(double *)((3*count_1_)*l_0_i+l_0__)   )= l_u_s_0_;
        };
    }

     count_2_= 0; count_g_= 0; for(int i_=  1 ;i_<= nz_;i_+=1){
        int _12ghost_down_cell_ind;
int _13ghost_node;
 count_g_             = count_g_ + 1;
         count_2_             = count_2_ + 1;
        _12ghost_down_cell_ind=(*(int *)(7*(ssize_t)sizeof(int)+i_*(ssize_t)sizeof(int)*10+Ten_cell_up_)); 
        _13ghost_node=8*nx_*nz_ + count_g_; 

         (*(int *)((ssize_t)sizeof(int)+(2*count_2_-1+3*count_1_)*T_con_i+T_con__) )= (*(int *)((ssize_t)sizeof(int)+i_*(ssize_t)sizeof(int)*10+Ten_cell_up_));
         (*(int *)(2*(ssize_t)sizeof(int)+(2*count_2_-1+3*count_1_)*T_con_i+T_con__) )= _13ghost_node;
         (*(int *)((ssize_t)sizeof(int)+(2*count_2_+3*count_1_)*T_con_i+T_con__)   )= _13ghost_node;
         (*(int *)(2*(ssize_t)sizeof(int)+(2*count_2_+3*count_1_)*T_con_i+T_con__)   )= (*(int *)(2*(ssize_t)sizeof(int)+i_*(ssize_t)sizeof(int)*10+Ten_cell_up_));

         (*(double *)((2*count_2_-1+3*count_1_)*l_0_i+l_0__) )= l_u_s_0_;
         (*(double *)((2*count_2_+3*count_1_)*l_0_i+l_0__)   )= l_u_l_0_;

         (*(int *)((ssize_t)sizeof(int)+count_g_*ghost_nodes_i+ghost_nodes__) )= _13ghost_node;
         (*(int *)(2*(ssize_t)sizeof(int)+count_g_*ghost_nodes_i+ghost_nodes__) )= (*(int *)(4*(ssize_t)sizeof(int)+_12ghost_down_cell_ind*(ssize_t)sizeof(int)*10+Ten_cell_up_));
         (*(int *)(3*(ssize_t)sizeof(int)+count_g_*ghost_nodes_i+ghost_nodes__) )= 1;
    }

     for(int i_=  1 ;i_<= nx_;i_+=1){
        int _14j;
int _15ghost_left_cell_ind;
int _16ghost_node;
 count_g_ +=  1;
         count_2_ +=  1;

        _14j=1+(i_-1)*nz_; 

        _15ghost_left_cell_ind=(*(int *)(8*(ssize_t)sizeof(int)+_14j*(ssize_t)sizeof(int)*10+Ten_cell_up_)); 
        _16ghost_node=8*nx_*nz_ + count_g_; 

         (*(int *)((ssize_t)sizeof(int)+(2*count_2_-1+3*count_1_)*T_con_i+T_con__) )= (*(int *)(4*(ssize_t)sizeof(int)+_14j*(ssize_t)sizeof(int)*10+Ten_cell_up_));
         (*(int *)(2*(ssize_t)sizeof(int)+(2*count_2_-1+3*count_1_)*T_con_i+T_con__) )= _16ghost_node;
         (*(int *)((ssize_t)sizeof(int)+(2*count_2_+3*count_1_)*T_con_i+T_con__)   )= _16ghost_node;
         (*(int *)(2*(ssize_t)sizeof(int)+(2*count_2_+3*count_1_)*T_con_i+T_con__)   )= (*(int *)((ssize_t)sizeof(int)+_14j*(ssize_t)sizeof(int)*10+Ten_cell_up_));

         (*(double *)((2*count_2_-1+3*count_1_)*l_0_i+l_0__) )= l_u_s_0_;
         (*(double *)((2*count_2_+3*count_1_)*l_0_i+l_0__)   )= l_u_l_0_;

         (*(int *)((ssize_t)sizeof(int)+count_g_*ghost_nodes_i+ghost_nodes__) )= _16ghost_node;
         (*(int *)(2*(ssize_t)sizeof(int)+count_g_*ghost_nodes_i+ghost_nodes__) )= (*(int *)(3*(ssize_t)sizeof(int)+_15ghost_left_cell_ind*(ssize_t)sizeof(int)*10+Ten_cell_up_));
         (*(int *)(3*(ssize_t)sizeof(int)+count_g_*ghost_nodes_i+ghost_nodes__) )= 2;
    }

     count_3_= 0; for(int i_=  1 ;i_<= nx_;i_+=1){
        int _17j;
int _18ghost_right_cell_ind;
int _19ghost_node;
 count_g_ +=  1;
         count_3_ +=  1;

        _17j=i_*nz_; 

        _18ghost_right_cell_ind=(*(int *)(9*(ssize_t)sizeof(int)+_17j*(ssize_t)sizeof(int)*10+Ten_cell_up_)); 
        _19ghost_node=8*nx_*nz_ + count_g_; 

         (*(int *)((ssize_t)sizeof(int)+(count_3_+2*count_2_+3*count_1_)*T_con_i+T_con__) )= _19ghost_node;
         (*(int *)(2*(ssize_t)sizeof(int)+(count_3_+2*count_2_+3*count_1_)*T_con_i+T_con__) )= (*(int *)(2*(ssize_t)sizeof(int)+_17j*(ssize_t)sizeof(int)*10+Ten_cell_up_));

         (*(double *)((count_3_+2*count_2_+3*count_1_)*l_0_i+l_0__) )= l_u_s_0_;

         (*(int *)((ssize_t)sizeof(int)+count_g_*ghost_nodes_i+ghost_nodes__) )= _19ghost_node;
         (*(int *)(2*(ssize_t)sizeof(int)+count_g_*ghost_nodes_i+ghost_nodes__) )= (*(int *)((ssize_t)sizeof(int)+_18ghost_right_cell_ind*(ssize_t)sizeof(int)*10+Ten_cell_up_));
         (*(int *)(3*(ssize_t)sizeof(int)+count_g_*ghost_nodes_i+ghost_nodes__) )= 3;
    }

     for(int i_=  1 ;i_<= nz_;i_+=1){
        int _20j;
int _21ghost_up_cell_ind;
int _22ghost_node;
 count_g_ +=  1;
         count_3_ +=  1;

        _20j=i_+(nx_-1)*nz_; 

        _21ghost_up_cell_ind=(*(int *)(10*(ssize_t)sizeof(int)+_20j*(ssize_t)sizeof(int)*10+Ten_cell_up_)); 
        _22ghost_node=8*nx_*nz_ + count_g_; 

         (*(int *)((ssize_t)sizeof(int)+(count_3_+2*count_2_+3*count_1_)*T_con_i+T_con__) )= _22ghost_node;
         (*(int *)(2*(ssize_t)sizeof(int)+(count_3_+2*count_2_+3*count_1_)*T_con_i+T_con__) )= (*(int *)(3*(ssize_t)sizeof(int)+_20j*(ssize_t)sizeof(int)*10+Ten_cell_up_));

         (*(double *)((count_3_+2*count_2_+3*count_1_)*l_0_i+l_0__) )= l_u_s_0_;

         (*(int *)((ssize_t)sizeof(int)+count_g_*ghost_nodes_i+ghost_nodes__) )= _22ghost_node;
         (*(int *)(2*(ssize_t)sizeof(int)+count_g_*ghost_nodes_i+ghost_nodes__) )= (*(int *)(2*(ssize_t)sizeof(int)+_21ghost_up_cell_ind*(ssize_t)sizeof(int)*10+Ten_cell_up_));
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


void main_5f_n_comp(const int f_n_l,const int f_n_h,const ssize_t f_n_i,char *f_n__,int n_N_dof_,int n_N_,int n_T_,int n_G_,int nx_,int ny_,double l_per_,double l_b_,double k_,double sigma_,const int q_tilde_l,const int q_tilde_h,const ssize_t q_tilde_i,char *q_tilde__,const int X_0_l,const int X_0_h,const ssize_t X_0_i,char *X_0__,const int l_0_l,const int l_0_h,const ssize_t l_0_i,char *l_0__,const int T_con_l,const int T_con_h,const ssize_t T_con_i,const int T_con__l,const int T_con__h,const ssize_t T_con__i,char *T_con___,const int ghost_nodes_l,const int ghost_nodes_h,const ssize_t ghost_nodes_i,const int ghost_nodes__l,const int ghost_nodes__h,const ssize_t ghost_nodes__i,char *ghost_nodes___){{struct freefunc* es=freestack;
    
    char f_t_[(ssize_t)sizeof(double)*3];
char l_i_[(ssize_t)sizeof(double)*3];
char l_i_dot_[(ssize_t)sizeof(double)*3];


    double l_i_norm_;

    
    int _6h;
ssize_t _7i;
struct freefunc f_n_ghost_f;char *f_n_ghost_;

    int ind_A_;
int ind_B_;
int ind_G_;


    ssize_t _8i;
struct freefunc X_f;char *X_     ;

    struct freefunc X_dot_f;char *X_dot_ ;

    
    _6h=3*n_G_;_7i=(ssize_t)sizeof(double)*_6h;
f_n_ghost_=malloc(_7i);if(f_n_ghost_==NULL)f_n_ghost_=errmalloc();f_n_ghost_-=(ssize_t)sizeof(double);atblockexit(f_n_ghost_f,free,f_n_ghost_+(ssize_t)sizeof(double));
 for(int i_=  1 ;i_<= n_G_;i_+=1){
         memset((ssize_t)sizeof(double)+f_n_ghost_,0,_7i);
    }
    
    _8i=(ssize_t)sizeof(double)*n_N_dof_;
X_=malloc(_8i);if(X_==NULL)X_=errmalloc();X_-=(ssize_t)sizeof(double);atblockexit(X_f,free,X_+(ssize_t)sizeof(double));
 memset((ssize_t)sizeof(double)+X_,0,_8i);
X_dot_=malloc(_8i);if(X_dot_==NULL)X_dot_=errmalloc();X_dot_-=(ssize_t)sizeof(double);atblockexit(X_dot_f,free,X_dot_+(ssize_t)sizeof(double));
 memset((ssize_t)sizeof(double)+X_dot_,0,_8i);main_2X_comp(1,n_N_dof_,(ssize_t)sizeof(double),X_ ,n_N_dof_ ,n_N_ ,n_G_ ,nx_ ,ny_ ,l_per_ ,l_b_ ,q_tilde_l,q_tilde_h,q_tilde_i,q_tilde__ ,X_0_l,X_0_h,X_0_i,X_0__ ,ghost_nodes_l,ghost_nodes_h,ghost_nodes_i,ghost_nodes__l,ghost_nodes__h,ghost_nodes__i,ghost_nodes___);
    main_1X_dot_comp(1,n_N_dof_,(ssize_t)sizeof(double),X_dot_ ,n_N_dof_ ,n_N_ ,n_G_ ,l_b_ ,q_tilde_l,q_tilde_h,q_tilde_i,q_tilde__ ,ghost_nodes_l,ghost_nodes_h,ghost_nodes_i,ghost_nodes__l,ghost_nodes__h,ghost_nodes__i,ghost_nodes___);
    
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
        int _9parent_ind;
_9parent_ind=(*(int*)(2*ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___)); 

         (*(double *)((3*_9parent_ind-2)*f_n_i+f_n__) )+=  (*(double *)((3*i_-2)*(ssize_t)sizeof(double)+f_n_ghost_));
         (*(double *)((3*_9parent_ind-1)*f_n_i+f_n__) )+=  (*(double *)((3*i_-1)*(ssize_t)sizeof(double)+f_n_ghost_));
         (*(double *)((3*_9parent_ind)*f_n_i+f_n__)   )= (*(double *)((3*_9parent_ind)*f_n_i+f_n__) )+ (*(double *)((3*i_)*(ssize_t)sizeof(double)+f_n_ghost_));
    }
free(X_dot_f.ptr);free(X_f.ptr);free(f_n_ghost_f.ptr);freestack=es;}}


void main_6Cq_dot_compute(const int Cq_dot_l,const int Cq_dot_h,const ssize_t Cq_dot_i,char *Cq_dot__,int n_q_tilde_,int n_B_,double I_0_,const int q_tilde_l,const int q_tilde_h,const ssize_t q_tilde_i,char *q_tilde__){{struct freefunc* es=freestack;

     for(int i_=  1 ;i_<= n_B_;i_+=1){
         (*(double *)((2*i_-1)*Cq_dot_i+Cq_dot__) )=  - 0.5*I_0_*sin(2.*(*(double *)((2*i_-1+(int)floor((double)(n_q_tilde_)/2.))*q_tilde_i+q_tilde__)))*((*(double *)((2*i_)*q_tilde_i+q_tilde__))*(*(double *)((2*i_)*q_tilde_i+q_tilde__)));
         (*(double *)((2*i_)*Cq_dot_i+Cq_dot__)   )= I_0_*sin(2.*(*(double *)((2*i_-1+(int)floor((double)(n_q_tilde_)/2.))*q_tilde_i+q_tilde__)))*(*(double *)((2*i_-1)*q_tilde_i+q_tilde__))*(*(double *)((2*i_)*q_tilde_i+q_tilde__));
    }
}}


void main_7f_mom_comp(const int f_mom_l,const int f_mom_h,const ssize_t f_mom_i,char *f_mom__,int n_q_,int n_q_tilde_,double l_b_,const int f_n_l,const int f_n_h,const ssize_t f_n_i,char *f_n__,const int q_tilde_l,const int q_tilde_h,const ssize_t q_tilde_i,char *q_tilde__){{struct freefunc* es=freestack;

     for(int i_=  1 ;i_<= (int)floor((double)(n_q_)/2.);i_+=1){
         (*(double *)((2*i_-1)*f_mom_i+f_mom__) )= l_b_*(cos((*(double *)((2*i_-1+n_q_)*q_tilde_i+q_tilde__)))*cos((*(double *)((2*i_+n_q_)*q_tilde_i+q_tilde__)))*(*(double *)((3*i_-2)*f_n_i+f_n__)) + cos((*(double *)((2*i_-1+n_q_)*q_tilde_i+q_tilde__)))*sin((*(double *)((2*i_+n_q_)*q_tilde_i+q_tilde__)))*(*(double *)((3*i_-1)*f_n_i+f_n__)) - sin((*(double *)((2*i_-1+n_q_)*q_tilde_i+q_tilde__)))*(*(double *)((3*i_)*f_n_i+f_n__)));
         (*(double *)((2*i_)*f_mom_i+f_mom__)   )= l_b_*( - sin((*(double *)((2*i_-1+n_q_)*q_tilde_i+q_tilde__)))*sin((*(double *)((2*i_+n_q_)*q_tilde_i+q_tilde__)))*(*(double *)((3*i_-2)*f_n_i+f_n__)) + sin((*(double *)((2*i_-1+n_q_)*q_tilde_i+q_tilde__)))*cos((*(double *)((2*i_+n_q_)*q_tilde_i+q_tilde__)))*(*(double *)((3*i_-1)*f_n_i+f_n__)));
    }
}}


void main_8P_comp(const int P_mat_l,const int P_mat_h,const ssize_t P_mat_i,char *P_mat__,const int ghost_nodes_l,const int ghost_nodes_h,const ssize_t ghost_nodes_i,const int ghost_nodes__l,const int ghost_nodes__h,const ssize_t ghost_nodes__i,char *ghost_nodes___,int nx_,int nz_,int n_C_,int n_T_,int n_G_){{struct freefunc* es=freestack;

    int ghost_ind_ ;

    int floor_ind_ ;


     ghost_ind_= 0; floor_ind_= 0; for(int j_=  1 ;j_<= nx_;j_+=1){
         for(int i_=  1 ;i_<= nz_;i_+=1){
            int _9ind;
_9ind=i_+(j_-1)*nz_; 

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
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind+1) - 3;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 3;

                 floor_ind_ +=  6;
            };

            if( ((i_ >1 )&&( i_ <nz_ ))&&( j_ == 1 )){
                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*_9ind - 3;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-1) - 1;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind+nz_) - 2;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-1) - 1;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind+1) - 3;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind+nz_) - 2;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*_9ind - 2;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind+1) - 3;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-1) - 1;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind+nz_) - 2;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*_9ind;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind+nz_) - 2;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind+1) - 3;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*_9ind - 1;

                 floor_ind_ +=  6;
            };

            if( (i_ == nz_ )&&( j_ == 1 )){
                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*_9ind - 3;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-1) - 1;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind+nz_) - 2;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-1) - 1;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+nx_+1)*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind+nz_) - 2;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*_9ind - 2;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+nx_+1)*ghost_nodes_i+ghost_nodes___));

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-1) - 1;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind+nz_) - 2;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*_9ind;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind+nz_) - 2;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+nx_+1)*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*_9ind - 1;

                 floor_ind_ +=  6;
            };

            if( ((i_ == 1 )&&( j_ >1 ))&&( j_ <nx_ )){
                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*_9ind - 3;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+j_)*ghost_nodes_i+ghost_nodes___));

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind+nz_) - 2;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+j_)*ghost_nodes_i+ghost_nodes___));

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind+1) - 3;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind+nz_) - 2;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*_9ind - 2;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind+1) - 3;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+j_)*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind+nz_) - 2;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*_9ind;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind+nz_) - 2;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind+1) - 3;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*_9ind - 1;

                 floor_ind_ +=  6;
            };

            if( (((j_ >1 )&&( j_ <nx_ ))&&( i_ >1 ))&&( i_ <nz_ )){
                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-1) - 2;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-1-nz_) - 1;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*_9ind - 3;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*_9ind - 3;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-1-nz_) - 1;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-nz_);

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-1) - 1;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*_9ind - 3;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-nz_);

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-1) - 1;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind+nz_) - 2;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind+1) - 3;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind+nz_) - 2;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*_9ind - 2;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind+1) - 3;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*_9ind;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-1) - 1;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind+nz_) - 2;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind+nz_) - 2;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind+1) - 3;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 4*_9ind - 1;

                 floor_ind_ = 8 + floor_ind_;
            };

            if( ((i_ == nz_ )&&( j_ >1 ))&&( j_ <nx_ )){
                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-1) - 2;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-1-nz_) - 1;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*_9ind - 3;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*_9ind - 3;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-1-nz_) - 1;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-nz_);

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-1) - 1;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*_9ind - 3;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-nz_);

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-1) - 1;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind+nz_) - 2;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+nx_+j_)*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind+nz_) - 2;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*_9ind - 2;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+nx_+j_)*ghost_nodes_i+ghost_nodes___));

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-1) - 1;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind+nz_) - 2;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*_9ind;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind+nz_) - 2;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+nx_+j_)*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 4*_9ind - 1;

                 floor_ind_ = 8 + floor_ind_;
            };

            if( (i_ == 1 )&&( j_ == nx_ )){
                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*_9ind - 3;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+nx_)*ghost_nodes_i+ghost_nodes___));

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+2*nx_+1)*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+nx_)*ghost_nodes_i+ghost_nodes___));

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind+1) - 3;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+2*nx_+1)*ghost_nodes_i+ghost_nodes___));

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*_9ind - 2;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind+1) - 3;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+nx_)*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+2*nx_+1)*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*_9ind;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+2*nx_+1)*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind+1) - 3;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*_9ind - 1;

                 floor_ind_ +=  6;
            };

            if( ((i_ >1 )&&( i_ <nz_ ))&&( j_ == nx_ )){
                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-1) - 2;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-1-nz_) - 1;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*_9ind - 3;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*_9ind - 3;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-1-nz_) - 1;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-nz_);

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-1) - 1;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*_9ind - 3;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-1) - 1;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+2*nx_+i_)*ghost_nodes_i+ghost_nodes___));

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind+1) - 3;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+2*nx_+i_)*ghost_nodes_i+ghost_nodes___));

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*_9ind - 2;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind+1) - 3;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*_9ind;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-1) - 1;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+2*nx_+i_)*ghost_nodes_i+ghost_nodes___));

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind+1) - 3;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 4*_9ind - 1;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+2*nx_+i_)*ghost_nodes_i+ghost_nodes___));

                 floor_ind_ = 8 + floor_ind_;
            };

            if( (i_ == nz_ )&&( j_ == nx_ )){
                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-1) - 2;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-1-nz_) - 1;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*_9ind - 3;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*_9ind - 3;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-1-nz_) - 1;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-nz_);

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-1) - 1;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*_9ind - 3;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-1) - 1;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(2*nz_+2*nx_)*ghost_nodes_i+ghost_nodes___));

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+2*nx_)*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(2*nz_+2*nx_)*ghost_nodes_i+ghost_nodes___));

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*_9ind - 2;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+2*nx_)*ghost_nodes_i+ghost_nodes___));

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*_9ind;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*(_9ind-1) - 1;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(2*nz_+2*nx_)*ghost_nodes_i+ghost_nodes___));

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+2*nx_)*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 4*_9ind - 1;
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


void main_9bar_lambda_comp(const int bar_lambda_mat_l,const int bar_lambda_mat_h,const ssize_t bar_lambda_mat_i,char *bar_lambda_mat__,int n_int_){{struct freefunc* es=freestack;

    int _10h;
ssize_t _11i;
ssize_t _12st;
struct freefunc lambda_mat_f;char *lambda_mat_ ;


    double d_lambda_ ;

    double lambda_1_;
double lambda_2_;
double lambda_3_ ;


    int count_ ;


    char sub_tri_vert_even_[(ssize_t)sizeof(int)*3] ;

    char sub_tri_vert_odd_[(ssize_t)sizeof(int)*3]  ;


    _10h=(int)floor((double)(n_int_*(n_int_+1))/2.);_11i=(ssize_t)sizeof(double)*3*_10h;_12st=(ssize_t)sizeof(double)*3+(ssize_t)sizeof(double);
lambda_mat_=malloc(_11i);if(lambda_mat_==NULL)lambda_mat_=errmalloc();lambda_mat_-=_12st;atblockexit(lambda_mat_f,free,lambda_mat_+_12st);
 memset(_12st+lambda_mat_,0,_11i); d_lambda_= 1.0/(double)((n_int_-1)); lambda_3_= 0.; for(int i_=  0 ;i_<= n_int_-1;i_+=1){
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
            int mtemp13;
if( (mtemp13=j_ ,mtemp13% 2 +((mtemp13>=0)==(2 >=0)?0:2 ))== 0 ){
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


/* Cose in più per evitare doppie inclusioni */


void main_10X_dot_comp(const int X_dot_l,const int X_dot_h,const ssize_t X_dot_i,char *X_dot__,int n_N_dof_,int n_N_,int n_G_,double l_b_,const int q_tilde_l,const int q_tilde_h,const ssize_t q_tilde_i,char *q_tilde__,const int ghost_nodes_l,const int ghost_nodes_h,const ssize_t ghost_nodes_i,const int ghost_nodes__l,const int ghost_nodes__h,const ssize_t ghost_nodes__i,char *ghost_nodes___){{struct freefunc* es=freestack;

     for(int i_=  1 ;i_<= (int)floor((double)((n_N_-n_G_))/2.);i_+=1){
         (*(double *)((3*i_-2)*X_dot_i+X_dot__) )= l_b_*(cos((*(double *)((2*i_-1+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*cos((*(double *)((2*i_+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*(*(double *)((2*i_-1)*q_tilde_i+q_tilde__))-sin((*(double *)((2*i_-1+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*sin((*(double *)((2*i_+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*(*(double *)((2*i_)*q_tilde_i+q_tilde__)));
         (*(double *)((3*i_-1)*X_dot_i+X_dot__) )= l_b_*(cos((*(double *)((2*i_-1+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*sin((*(double *)((2*i_+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*(*(double *)((2*i_-1)*q_tilde_i+q_tilde__))+sin((*(double *)((2*i_-1+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*cos((*(double *)((2*i_+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*(*(double *)((2*i_)*q_tilde_i+q_tilde__)));
         (*(double *)((3*i_)*X_dot_i+X_dot__)   )=  - l_b_*sin((*(double *)((2*i_-1+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*(*(double *)((2*i_-1)*q_tilde_i+q_tilde__));
    }

     for(int i_=  1 ;i_<= n_G_;i_+=1){
        int _11ghost_ind;
int _12parent_ind;
_11ghost_ind=(*(int*)(ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___)); 
        _12parent_ind=(*(int*)(2*ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___)); 

         (*(double *)((3*_11ghost_ind-2)*X_dot_i+X_dot__) )= (*(double *)((3*_12parent_ind-2)*X_dot_i+X_dot__));
         (*(double *)((3*_11ghost_ind-1)*X_dot_i+X_dot__) )= (*(double *)((3*_12parent_ind-1)*X_dot_i+X_dot__));
         (*(double *)((3*_11ghost_ind)*X_dot_i+X_dot__)   )= (*(double *)((3*_12parent_ind)*X_dot_i+X_dot__));
    }
}}

void main_11X_comp(const int X_l,const int X_h,const ssize_t X_i,char *X__,int n_N_dof_,int n_N_,int n_G_,int nx_,int nz_,double l_per_,double l_b_,const int q_tilde_l,const int q_tilde_h,const ssize_t q_tilde_i,char *q_tilde__,const int X_0_l,const int X_0_h,const ssize_t X_0_i,char *X_0__,const int ghost_nodes_l,const int ghost_nodes_h,const ssize_t ghost_nodes_i,const int ghost_nodes__l,const int ghost_nodes__h,const ssize_t ghost_nodes__i,char *ghost_nodes___){{struct freefunc* es=freestack;

    {char *_13_;

_13_=X_l*X_0_i+X_0__; {char *_12_=X_l*X_i+X__;int _12_1=X_h-X_l; do{{ (*(double *)(_12_))=(*(double *)(_13_)); _13_ =X_0_i+_13_;}_12_+=X_i;_12_1--;}while(_12_1>=0);}} 

     for(int i_=  1 ;i_<= (int)floor((double)((n_N_-n_G_))/2.);i_+=1){
         (*(double *)((3*i_-2)*X_i+X__) )= (*(double *)((3*i_-2+3*(int)floor((double)((n_N_-n_G_))/2.))*X_0_i+X_0__)) + l_b_*sin((*(double *)((2*i_-1+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*cos((*(double *)((2*i_+(n_N_-n_G_))*q_tilde_i+q_tilde__)));
         (*(double *)((3*i_-1)*X_i+X__) )= (*(double *)((3*i_-1+3*(int)floor((double)((n_N_-n_G_))/2.))*X_0_i+X_0__)) + l_b_*sin((*(double *)((2*i_-1+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*sin((*(double *)((2*i_+(n_N_-n_G_))*q_tilde_i+q_tilde__)));
         (*(double *)((3*i_)*X_i+X__)   )= (*(double *)((3*i_+3*(int)floor((double)((n_N_-n_G_))/2.))*X_0_i+X_0__)) + l_b_*cos((*(double *)((2*i_-1+(n_N_-n_G_))*q_tilde_i+q_tilde__)));
    }

     for(int i_=  1 ;i_<= n_G_;i_+=1){
        int _14ghost_ind;
int _15parent_ind;
int _16per_dir;
_14ghost_ind=(*(int*)(ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___)); 
        _15parent_ind=(*(int*)(2*ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___)); 
        _16per_dir=(*(int*)(3*ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___)); 

        if( _16per_dir == 1 ){
             (*(double *)((3*_14ghost_ind-2)*X_i+X__) )= (*(double *)((3*_15parent_ind-2)*X_i+X__) )- (double)(nx_)*l_per_;
             (*(double *)((3*_14ghost_ind-1)*X_i+X__) )= (*(double *)((3*_15parent_ind-1)*X_i+X__) );
             (*(double *)((3*_14ghost_ind)*X_i+X__)   )= (*(double *)((3*_15parent_ind)*X_i+X__));
        }else{ if( _16per_dir == 2 ){
             (*(double *)((3*_14ghost_ind-2)*X_i+X__) )= (*(double *)((3*_15parent_ind-2)*X_i+X__) );
             (*(double *)((3*_14ghost_ind-1)*X_i+X__) )= (*(double *)((3*_15parent_ind-1)*X_i+X__));
             (*(double *)((3*_14ghost_ind)*X_i+X__)   )= (*(double *)((3*_15parent_ind)*X_i+X__)   )- (double)(nz_)*l_per_;
        }else{ if( _16per_dir == 3 ){
             (*(double *)((3*_14ghost_ind-2)*X_i+X__) )= (*(double *)((3*_15parent_ind-2)*X_i+X__) );
             (*(double *)((3*_14ghost_ind-1)*X_i+X__) )= (*(double *)((3*_15parent_ind-1)*X_i+X__));
             (*(double *)((3*_14ghost_ind)*X_i+X__)   )= (*(double *)((3*_15parent_ind)*X_i+X__)   )+ (double)(nz_)*l_per_;
        }else{ if( _16per_dir == 4 ){
             (*(double *)((3*_14ghost_ind-2)*X_i+X__) )= (*(double *)((3*_15parent_ind-2)*X_i+X__) )+ (double)(nx_)*l_per_;
             (*(double *)((3*_14ghost_ind-1)*X_i+X__) )= (*(double *)((3*_15parent_ind-1)*X_i+X__) );
             (*(double *)((3*_14ghost_ind)*X_i+X__)   )= (*(double *)((3*_15parent_ind)*X_i+X__));
        };};};};
    }
}}void main_12MatMult(const int A_l,const int A_h,const ssize_t A_i,const int A__l,const int A__h,const ssize_t A__i,char *A___,const int B_l,const int B_h,const ssize_t B_i,const int B__l,const int B__h,const ssize_t B__i,char *B___,const int C_l,const int C_h,const ssize_t C_i,const int C__l,const int C__h,const ssize_t C__i,char *C___){{struct freefunc* es=freestack;
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

void main_13MatDiff(const int A_l,const int A_h,const ssize_t A_i,const int A__l,const int A__h,const ssize_t A__i,char *A___,const int B_l,const int B_h,const ssize_t B_i,const int B__l,const int B__h,const ssize_t B__i,char *B___,const int C_l,const int C_h,const ssize_t C_i,const int C__l,const int C__h,const ssize_t C__i,char *C___){{struct freefunc* es=freestack;
     for(int i_=  1 ;i_<= A_h;i_+=1){
         for(int j_=  1 ;j_<= B__h;j_+=1){
             (*(double *)(j_*C__i+i_*C_i+C___) )= (*(double *)(j_*A__i+i_*A_i+A___)) - (*(double *)(j_*B__i+i_*B_i+B___));
        }
    }
}}
void main_14X_0_comp(const int X_0_l,const int X_0_h,const ssize_t X_0_i,char *X_0__,double h_,double r_,double alpha_1_,double l_per_,int nx_,int nz_,int n_N_,int n_G_,int n_N_dof_,char *ghost_nodes_){{struct freefunc* es=freestack;
    double PI_;

    char T_1_[(ssize_t)sizeof(double)*3*3];

    char T_2_[(ssize_t)sizeof(double)*3*3];

    char vert_low_[(ssize_t)sizeof(double)*4*3];
char vert_low_temp_[(ssize_t)sizeof(double)*4*3];

    ssize_t _15st;
char cell_center_pos_[(ssize_t)sizeof(double)*3];

    char vert_up_[(ssize_t)sizeof(double)*4*3];

    char dx_0_[(ssize_t)sizeof(double)*3] ;

    char dz_0_[(ssize_t)sizeof(double)*3] ;


    int _16n_N_ng;
int _17h;
ssize_t _18i;
struct freefunc X_0_sup_f;char *X_0_sup_;

    int _19h;
ssize_t _20i;
struct freefunc X_0_inf_f;char *X_0_inf_;


    char vert_low_i_[(ssize_t)sizeof(double)*4*3];

    char vert_up_i_[(ssize_t)sizeof(double)*4*3];


    char dx_[(ssize_t)sizeof(double)*3];

    char dz_[(ssize_t)sizeof(double)*3];

    char Dx_[(ssize_t)sizeof(double)*3];

    char Dz_[(ssize_t)sizeof(double)*3] ;


    int _21h;
ssize_t _22i;
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

    _15st=(ssize_t)sizeof(double)*4+(ssize_t)sizeof(double); memmove(_15st+vert_low_temp_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double)),_15st+vert_low_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double)),(ssize_t)sizeof(double)*4*3);
    main_12MatMult(1,3,(ssize_t)sizeof(double)*3,1,3,(ssize_t)sizeof(double),T_1_-((ssize_t)sizeof(double)*3+(ssize_t)sizeof(double)) ,1,3,(ssize_t)sizeof(double)*4,1,4,(ssize_t)sizeof(double),vert_low_temp_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double)) ,1,3,(ssize_t)sizeof(double)*4,1,4,(ssize_t)sizeof(double),vert_low_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double)));

     (*(double *)((ssize_t)sizeof(double)+cell_center_pos_-((ssize_t)sizeof(double))))=(*(double *)((ssize_t)sizeof(double)+(ssize_t)sizeof(double)*4+vert_low_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))))/2.;(*(double *)((1+1)*(ssize_t)sizeof(double)+cell_center_pos_-((ssize_t)sizeof(double))))=0.;(*(double *)((1+2)*(ssize_t)sizeof(double)+cell_center_pos_-((ssize_t)sizeof(double))))=(*(double *)((ssize_t)sizeof(double)+3*(ssize_t)sizeof(double)*4+vert_low_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))))/2.;
    
     for(int i_=  1 ;i_<= 3 ;i_+=1){ for(int j_=  1 ;j_<= 4;j_+=1){
         (*(double *)(j_*(ssize_t)sizeof(double)+i_*(ssize_t)sizeof(double)*4+vert_low_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))) )-=  (*(double *)(i_*(ssize_t)sizeof(double)+cell_center_pos_-((ssize_t)sizeof(double))));
    }}
    
    main_12MatMult(1,3,(ssize_t)sizeof(double)*3,1,3,(ssize_t)sizeof(double),T_2_-((ssize_t)sizeof(double)*3+(ssize_t)sizeof(double)) ,1,3,(ssize_t)sizeof(double)*4,1,4,(ssize_t)sizeof(double),vert_low_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double)) ,1,3,(ssize_t)sizeof(double)*4,1,4,(ssize_t)sizeof(double),vert_up_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double)));
     (*(double *)((ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*4+vert_up_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))))=h_;(*(double *)((1+1)*(ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*4+vert_up_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))))=h_;(*(double *)((1+2)*(ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*4+vert_up_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))))=h_;(*(double *)((1+3)*(ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*4+vert_up_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))))=h_;

     (*(double *)((ssize_t)sizeof(double)+dx_0_-((ssize_t)sizeof(double))))=(*(double *)(2*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*4+vert_up_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))));(*(double *)((1+1)*(ssize_t)sizeof(double)+dx_0_-((ssize_t)sizeof(double))))=0.;(*(double *)((1+2)*(ssize_t)sizeof(double)+dx_0_-((ssize_t)sizeof(double))))=0.; (*(double *)((ssize_t)sizeof(double)+dz_0_-((ssize_t)sizeof(double))))=0.;(*(double *)((1+1)*(ssize_t)sizeof(double)+dz_0_-((ssize_t)sizeof(double))))=0.;(*(double *)((1+2)*(ssize_t)sizeof(double)+dz_0_-((ssize_t)sizeof(double))))=(*(double *)((ssize_t)sizeof(double)+3*(ssize_t)sizeof(double)*4+vert_up_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double)))); for(int i_=  1 ;i_<= 3 ;i_+=1){ for(int j_=  1 ;j_<= 4;j_+=1){
         (*(double *)(j_*(ssize_t)sizeof(double)+i_*(ssize_t)sizeof(double)*4+vert_low_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))) )= (*(double *)(j_*(ssize_t)sizeof(double)+i_*(ssize_t)sizeof(double)*4+vert_low_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double))) )- (*(double *)(i_*(ssize_t)sizeof(double)+dx_0_-((ssize_t)sizeof(double))) )- (*(double *)(i_*(ssize_t)sizeof(double)+dz_0_-((ssize_t)sizeof(double))));
         (*(double *)(j_*(ssize_t)sizeof(double)+i_*(ssize_t)sizeof(double)*4+vert_up_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double)))  )= (*(double *)(j_*(ssize_t)sizeof(double)+i_*(ssize_t)sizeof(double)*4+vert_up_-((ssize_t)sizeof(double)*4+(ssize_t)sizeof(double)))  )- (*(double *)(i_*(ssize_t)sizeof(double)+dx_0_-((ssize_t)sizeof(double))) )- (*(double *)(i_*(ssize_t)sizeof(double)+dz_0_-((ssize_t)sizeof(double))));
    }}

    _16n_N_ng=n_N_-n_G_; 

    _17h=(int)floor((double)(3*_16n_N_ng)/2.);_18i=(ssize_t)sizeof(double)*_17h;
X_0_sup_=malloc(_18i);if(X_0_sup_==NULL)X_0_sup_=errmalloc();X_0_sup_-=(ssize_t)sizeof(double);atblockexit(X_0_sup_f,free,X_0_sup_+(ssize_t)sizeof(double));
_19h=(int)floor((double)(3*_16n_N_ng)/2.);_20i=(ssize_t)sizeof(double)*_19h;
X_0_inf_=malloc(_20i);if(X_0_inf_==NULL)X_0_inf_=errmalloc();X_0_inf_-=(ssize_t)sizeof(double);atblockexit(X_0_inf_f,free,X_0_inf_+(ssize_t)sizeof(double));
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

    _21h=3*n_G_;_22i=(ssize_t)sizeof(double)*_21h;
X_0_g_=malloc(_22i);if(X_0_g_==NULL)X_0_g_=errmalloc();X_0_g_-=(ssize_t)sizeof(double);atblockexit(X_0_g_f,free,X_0_g_+(ssize_t)sizeof(double));
 for(int i_=  1 ;i_<= n_G_;i_+=1){
        int _23parent_ind;
int _24per_dir;
_23parent_ind=(*(int*)(2*(ssize_t)sizeof(int)+i_*(ssize_t)sizeof(int)*3+ghost_nodes_)); 
        _24per_dir=(*(int*)(3*(ssize_t)sizeof(int)+i_*(ssize_t)sizeof(int)*3+ghost_nodes_)); 

        if( _24per_dir == 1 ){
             (*(double *)((ssize_t)sizeof(double)+X_g_-((ssize_t)sizeof(double))) )= (*(double *)(((int)floor((double)(3*_23parent_ind-2)))*(ssize_t)sizeof(double)+X_0_sup_) )- (*(double *)((ssize_t)sizeof(double)+Dx_-((ssize_t)sizeof(double))));
             (*(double *)(2*(ssize_t)sizeof(double)+X_g_-((ssize_t)sizeof(double))) )= (*(double *)(((int)floor((double)(3*_23parent_ind-1)))*(ssize_t)sizeof(double)+X_0_sup_) )- (*(double *)(2*(ssize_t)sizeof(double)+Dx_-((ssize_t)sizeof(double))));
             (*(double *)(3*(ssize_t)sizeof(double)+X_g_-((ssize_t)sizeof(double))) )= (*(double *)(((int)floor((double)(3*_23parent_ind)))*(ssize_t)sizeof(double)+X_0_sup_)   )- (*(double *)(3*(ssize_t)sizeof(double)+Dx_-((ssize_t)sizeof(double))));
        }else{ if( _24per_dir == 2 ){
             (*(double *)((ssize_t)sizeof(double)+X_g_-((ssize_t)sizeof(double))) )= (*(double *)(((int)floor((double)(3*_23parent_ind-2)))*(ssize_t)sizeof(double)+X_0_sup_) )- (*(double *)((ssize_t)sizeof(double)+Dz_-((ssize_t)sizeof(double))));
             (*(double *)(2*(ssize_t)sizeof(double)+X_g_-((ssize_t)sizeof(double))) )= (*(double *)(((int)floor((double)(3*_23parent_ind-1)))*(ssize_t)sizeof(double)+X_0_sup_) )- (*(double *)(2*(ssize_t)sizeof(double)+Dz_-((ssize_t)sizeof(double))));
             (*(double *)(3*(ssize_t)sizeof(double)+X_g_-((ssize_t)sizeof(double))) )= (*(double *)(((int)floor((double)(3*_23parent_ind)))*(ssize_t)sizeof(double)+X_0_sup_)   )- (*(double *)(3*(ssize_t)sizeof(double)+Dz_-((ssize_t)sizeof(double))));
        }else{ if( _24per_dir == 3 ){
             (*(double *)((ssize_t)sizeof(double)+X_g_-((ssize_t)sizeof(double))) )= (*(double *)(((int)floor((double)(3*_23parent_ind-2)))*(ssize_t)sizeof(double)+X_0_sup_) )+ (*(double *)((ssize_t)sizeof(double)+Dz_-((ssize_t)sizeof(double))));
             (*(double *)(2*(ssize_t)sizeof(double)+X_g_-((ssize_t)sizeof(double))) )= (*(double *)(((int)floor((double)(3*_23parent_ind-1)))*(ssize_t)sizeof(double)+X_0_sup_) )+ (*(double *)(2*(ssize_t)sizeof(double)+Dz_-((ssize_t)sizeof(double))));
             (*(double *)(3*(ssize_t)sizeof(double)+X_g_-((ssize_t)sizeof(double))) )= (*(double *)(((int)floor((double)(3*_23parent_ind)))*(ssize_t)sizeof(double)+X_0_sup_)   )+ (*(double *)(3*(ssize_t)sizeof(double)+Dz_-((ssize_t)sizeof(double))));
        }else{ if( _24per_dir == 4 ){
             (*(double *)((ssize_t)sizeof(double)+X_g_-((ssize_t)sizeof(double))) )= (*(double *)(((int)floor((double)(3*_23parent_ind-2)))*(ssize_t)sizeof(double)+X_0_sup_) )+ (*(double *)((ssize_t)sizeof(double)+Dx_-((ssize_t)sizeof(double))));
             (*(double *)(2*(ssize_t)sizeof(double)+X_g_-((ssize_t)sizeof(double))) )= (*(double *)(((int)floor((double)(3*_23parent_ind-1)))*(ssize_t)sizeof(double)+X_0_sup_) )+ (*(double *)(2*(ssize_t)sizeof(double)+Dx_-((ssize_t)sizeof(double))));
             (*(double *)(3*(ssize_t)sizeof(double)+X_g_-((ssize_t)sizeof(double))) )= (*(double *)(((int)floor((double)(3*_23parent_ind)))*(ssize_t)sizeof(double)+X_0_sup_)   )+ (*(double *)(3*(ssize_t)sizeof(double)+Dx_-((ssize_t)sizeof(double))));
        };};};};

      (*(double *)((3*i_-2)*(ssize_t)sizeof(double)+X_0_g_) )= (*(double *)((ssize_t)sizeof(double)+X_g_-((ssize_t)sizeof(double))));
      (*(double *)((3*i_-1)*(ssize_t)sizeof(double)+X_0_g_) )= (*(double *)(2*(ssize_t)sizeof(double)+X_g_-((ssize_t)sizeof(double))));
      (*(double *)((3*i_)*(ssize_t)sizeof(double)+X_0_g_)   )= (*(double *)(3*(ssize_t)sizeof(double)+X_g_-((ssize_t)sizeof(double)))  );
    }

     for(int i_=  1 ;i_<= (int)floor((double)(3*_16n_N_ng)/2.);i_+=1){
         (*(double *)(i_*X_0_i+X_0__) )= (*(double *)(i_*(ssize_t)sizeof(double)+X_0_sup_));
    }

     for(int i_=  (int)floor((double)(3*_16n_N_ng)/2.+1.) ;i_<= (int)floor((double)(2*3*_16n_N_ng)/2.);i_+=1){
         (*(double *)(i_*X_0_i+X_0__) )= (*(double *)((i_-(int)floor((double)(3*_16n_N_ng)/2.+1.)+1)*(ssize_t)sizeof(double)+X_0_inf_));
    }

     for(int i_=  (int)floor((double)(2*3*_16n_N_ng)/2.+1.) ;i_<= (int)floor((double)(2*3*_16n_N_ng)/2.+(double)(3*n_G_));i_+=1){
         (*(double *)(i_*X_0_i+X_0__) )= (*(double *)((i_-(int)floor((double)(2*3*_16n_N_ng)/2.+1.)+1)*(ssize_t)sizeof(double)+X_0_g_));
    }
free(X_0_g_f.ptr);free(X_0_inf_f.ptr);free(X_0_sup_f.ptr);freestack=es;}}


void main_15q_0_tilde_comp(const int q_0_tilde_l,const int q_0_tilde_h,const ssize_t q_0_tilde_i,char *q_0_tilde__,const int X_0_l,const int X_0_h,const ssize_t X_0_i,char *X_0__,const int B_con_l,const int B_con_h,const ssize_t B_con_i,const int B_con__l,const int B_con__h,const ssize_t B_con__i,char *B_con___,double l_b_,int n_q_tilde_,int n_B_){{struct freefunc* es=freestack;

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
}}void main_16X_dot_comp(const int X_dot_l,const int X_dot_h,const ssize_t X_dot_i,char *X_dot__,int n_N_dof_,int n_N_,int n_G_,double l_b_,const int q_tilde_l,const int q_tilde_h,const ssize_t q_tilde_i,char *q_tilde__,const int ghost_nodes_l,const int ghost_nodes_h,const ssize_t ghost_nodes_i,const int ghost_nodes__l,const int ghost_nodes__h,const ssize_t ghost_nodes__i,char *ghost_nodes___){{struct freefunc* es=freestack;

     for(int i_=  1 ;i_<= (int)floor((double)((n_N_-n_G_))/2.);i_+=1){
         (*(double *)((3*i_-2)*X_dot_i+X_dot__) )= l_b_*(cos((*(double *)((2*i_-1+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*cos((*(double *)((2*i_+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*(*(double *)((2*i_-1)*q_tilde_i+q_tilde__))-sin((*(double *)((2*i_-1+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*sin((*(double *)((2*i_+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*(*(double *)((2*i_)*q_tilde_i+q_tilde__)));
         (*(double *)((3*i_-1)*X_dot_i+X_dot__) )= l_b_*(cos((*(double *)((2*i_-1+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*sin((*(double *)((2*i_+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*(*(double *)((2*i_-1)*q_tilde_i+q_tilde__))+sin((*(double *)((2*i_-1+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*cos((*(double *)((2*i_+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*(*(double *)((2*i_)*q_tilde_i+q_tilde__)));
         (*(double *)((3*i_)*X_dot_i+X_dot__)   )=  - l_b_*sin((*(double *)((2*i_-1+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*(*(double *)((2*i_-1)*q_tilde_i+q_tilde__));
    }

     for(int i_=  1 ;i_<= n_G_;i_+=1){
        int _17ghost_ind;
int _18parent_ind;
_17ghost_ind=(*(int*)(ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___)); 
        _18parent_ind=(*(int*)(2*ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___)); 

         (*(double *)((3*_17ghost_ind-2)*X_dot_i+X_dot__) )= (*(double *)((3*_18parent_ind-2)*X_dot_i+X_dot__));
         (*(double *)((3*_17ghost_ind-1)*X_dot_i+X_dot__) )= (*(double *)((3*_18parent_ind-1)*X_dot_i+X_dot__));
         (*(double *)((3*_17ghost_ind)*X_dot_i+X_dot__)   )= (*(double *)((3*_18parent_ind)*X_dot_i+X_dot__));
    }
}}

void main_17X_comp(const int X_l,const int X_h,const ssize_t X_i,char *X__,int n_N_dof_,int n_N_,int n_G_,int nx_,int nz_,double l_per_,double l_b_,const int q_tilde_l,const int q_tilde_h,const ssize_t q_tilde_i,char *q_tilde__,const int X_0_l,const int X_0_h,const ssize_t X_0_i,char *X_0__,const int ghost_nodes_l,const int ghost_nodes_h,const ssize_t ghost_nodes_i,const int ghost_nodes__l,const int ghost_nodes__h,const ssize_t ghost_nodes__i,char *ghost_nodes___){{struct freefunc* es=freestack;

    {char *_19_;

_19_=X_l*X_0_i+X_0__; {char *_18_=X_l*X_i+X__;int _18_1=X_h-X_l; do{{ (*(double *)(_18_))=(*(double *)(_19_)); _19_ =X_0_i+_19_;}_18_+=X_i;_18_1--;}while(_18_1>=0);}} 

     for(int i_=  1 ;i_<= (int)floor((double)((n_N_-n_G_))/2.);i_+=1){
         (*(double *)((3*i_-2)*X_i+X__) )= (*(double *)((3*i_-2+3*(int)floor((double)((n_N_-n_G_))/2.))*X_0_i+X_0__)) + l_b_*sin((*(double *)((2*i_-1+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*cos((*(double *)((2*i_+(n_N_-n_G_))*q_tilde_i+q_tilde__)));
         (*(double *)((3*i_-1)*X_i+X__) )= (*(double *)((3*i_-1+3*(int)floor((double)((n_N_-n_G_))/2.))*X_0_i+X_0__)) + l_b_*sin((*(double *)((2*i_-1+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*sin((*(double *)((2*i_+(n_N_-n_G_))*q_tilde_i+q_tilde__)));
         (*(double *)((3*i_)*X_i+X__)   )= (*(double *)((3*i_+3*(int)floor((double)((n_N_-n_G_))/2.))*X_0_i+X_0__)) + l_b_*cos((*(double *)((2*i_-1+(n_N_-n_G_))*q_tilde_i+q_tilde__)));
    }

     for(int i_=  1 ;i_<= n_G_;i_+=1){
        int _20ghost_ind;
int _21parent_ind;
int _22per_dir;
_20ghost_ind=(*(int*)(ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___)); 
        _21parent_ind=(*(int*)(2*ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___)); 
        _22per_dir=(*(int*)(3*ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___)); 

        if( _22per_dir == 1 ){
             (*(double *)((3*_20ghost_ind-2)*X_i+X__) )= (*(double *)((3*_21parent_ind-2)*X_i+X__) )- (double)(nx_)*l_per_;
             (*(double *)((3*_20ghost_ind-1)*X_i+X__) )= (*(double *)((3*_21parent_ind-1)*X_i+X__) );
             (*(double *)((3*_20ghost_ind)*X_i+X__)   )= (*(double *)((3*_21parent_ind)*X_i+X__));
        }else{ if( _22per_dir == 2 ){
             (*(double *)((3*_20ghost_ind-2)*X_i+X__) )= (*(double *)((3*_21parent_ind-2)*X_i+X__) );
             (*(double *)((3*_20ghost_ind-1)*X_i+X__) )= (*(double *)((3*_21parent_ind-1)*X_i+X__));
             (*(double *)((3*_20ghost_ind)*X_i+X__)   )= (*(double *)((3*_21parent_ind)*X_i+X__)   )- (double)(nz_)*l_per_;
        }else{ if( _22per_dir == 3 ){
             (*(double *)((3*_20ghost_ind-2)*X_i+X__) )= (*(double *)((3*_21parent_ind-2)*X_i+X__) );
             (*(double *)((3*_20ghost_ind-1)*X_i+X__) )= (*(double *)((3*_21parent_ind-1)*X_i+X__));
             (*(double *)((3*_20ghost_ind)*X_i+X__)   )= (*(double *)((3*_21parent_ind)*X_i+X__)   )+ (double)(nz_)*l_per_;
        }else{ if( _22per_dir == 4 ){
             (*(double *)((3*_20ghost_ind-2)*X_i+X__) )= (*(double *)((3*_21parent_ind-2)*X_i+X__) )+ (double)(nx_)*l_per_;
             (*(double *)((3*_20ghost_ind-1)*X_i+X__) )= (*(double *)((3*_21parent_ind-1)*X_i+X__) );
             (*(double *)((3*_20ghost_ind)*X_i+X__)   )= (*(double *)((3*_21parent_ind)*X_i+X__));
        };};};};
    }
}}
void main_18df_comp(char *df_,char *x_,char *normal_,double t_,double dA_,double Lx_,double Lz_,double l_per_,int nx_,int nz_){{struct freefunc* es=freestack;
    
  double c_ ;

  double A_ ;

  int n_per_ ;

  double k_z_ ;


  double p_ ;

  /*REAL p = A */
   c_= 2.; A_= 50.; n_per_= 6; k_z_= (2.*(3.14159265358979323846)*(double)(n_per_))/(l_per_*(double)(nz_)); p_= A_*cos(k_z_*((*(double *)(3*(ssize_t)sizeof(double)+x_))-c_*t_)); (*(double *)((ssize_t)sizeof(double)+df_) )=  - p_*dA_*(*(double *)((ssize_t)sizeof(double)+normal_));
   (*(double *)(2*(ssize_t)sizeof(double)+df_) )=  - p_*dA_*(*(double *)(2*(ssize_t)sizeof(double)+normal_));
   (*(double *)(3*(ssize_t)sizeof(double)+df_) )=  - p_*dA_*(*(double *)(3*(ssize_t)sizeof(double)+normal_));
}}

void main_19f_ext_sub(const int f_ext_l,const int f_ext_h,const ssize_t f_ext_i,char *f_ext__,int n_B_,int n_P_,int n_N_,int n_N_dof_,int n_G_,int nx_,int nz_,int n_int_,double t_,double l_per_,double l_b_,const int X_0_l,const int X_0_h,const ssize_t X_0_i,char *X_0__,const int q_tilde_l,const int q_tilde_h,const ssize_t q_tilde_i,char *q_tilde__,const int ghost_nodes_l,const int ghost_nodes_h,const ssize_t ghost_nodes_i,const int ghost_nodes__l,const int ghost_nodes__h,const ssize_t ghost_nodes__i,char *ghost_nodes___,const int bar_lambda_mat_l,const int bar_lambda_mat_h,const ssize_t bar_lambda_mat_i,char *bar_lambda_mat__,const int P_mat_l,const int P_mat_h,const ssize_t P_mat_i,const int P_mat__l,const int P_mat__h,const ssize_t P_mat__i,const int P_mat___l,const int P_mat___h,const ssize_t P_mat___i,char *P_mat____){{struct freefunc* es=freestack;

  int _20h;
ssize_t _21i;
struct freefunc X_f;char *X_ ;

  char normal_[(ssize_t)sizeof(double)*3];
char dir_1_[(ssize_t)sizeof(double)*3];
char dir_2_[(ssize_t)sizeof(double)*3];
char X_1_[(ssize_t)sizeof(double)*3];
char X_2_[(ssize_t)sizeof(double)*3];
char X_3_[(ssize_t)sizeof(double)*3];
char x_[(ssize_t)sizeof(double)*3];
char df_[(ssize_t)sizeof(double)*3] ;

  int ind_1_;
int ind_2_;
int ind_3_ ;

  double lambda_1_;
double lambda_2_;
double lambda_3_ ;

  double dA_ ;


  double Lx_;
double Lz_;

  double d_lambda_ ;


  _20h=3*n_N_;_21i=(ssize_t)sizeof(double)*_20h;
X_=malloc(_21i);if(X_==NULL)X_=errmalloc();X_-=(ssize_t)sizeof(double);atblockexit(X_f,free,X_+(ssize_t)sizeof(double));
 memset((ssize_t)sizeof(double)+X_,0,_21i);main_17X_comp(1,_20h,(ssize_t)sizeof(double),X_ ,n_N_dof_ ,n_N_ ,n_G_ ,nx_ ,nz_ ,l_per_ ,l_b_ ,q_tilde_l,q_tilde_h,q_tilde_i,q_tilde__ ,X_0_l,X_0_h,X_0_i,X_0__ ,ghost_nodes_l,ghost_nodes_h,ghost_nodes_i,ghost_nodes__l,ghost_nodes__h,ghost_nodes__i,ghost_nodes___);

   for(int i_=  1 ;i_<= n_B_;i_+=1){
     (*(double *)((3*i_-2)*f_ext_i+f_ext__) )= 0.;
     (*(double *)((3*i_-1)*f_ext_i+f_ext__) )= 0.;
     (*(double *)((3*i_)*f_ext_i+f_ext__)   )= 0.;
  }

   memset((ssize_t)sizeof(double)+df_-((ssize_t)sizeof(double)),0,(ssize_t)sizeof(double)*3); ind_3_= 0; lambda_3_= 0.; dA_= 0.; Lx_ = l_per_*(double)(nx_);
   Lz_ = l_per_*(double)(nz_);

   d_lambda_= 1./ (double)((n_int_-1)); for(int i_=  1 ;i_<= n_P_;i_+=1){
    double _22normal_norm;
 ind_1_ = (*(int *)(P_mat___i+P_mat__i+i_*P_mat_i+P_mat____));
     ind_2_ = (*(int *)(P_mat___i+2*P_mat__i+i_*P_mat_i+P_mat____));
     ind_3_ = (*(int *)(P_mat___i+3*P_mat__i+i_*P_mat_i+P_mat____));

     (*(double *)((ssize_t)sizeof(double)+X_1_-((ssize_t)sizeof(double))) )= (*(double *)((3*ind_1_-2)*(ssize_t)sizeof(double)+X_));
     (*(double *)(2*(ssize_t)sizeof(double)+X_1_-((ssize_t)sizeof(double))) )= (*(double *)((3*ind_1_-1)*(ssize_t)sizeof(double)+X_));
     (*(double *)(3*(ssize_t)sizeof(double)+X_1_-((ssize_t)sizeof(double))) )= (*(double *)((3*ind_1_)*(ssize_t)sizeof(double)+X_));

     (*(double *)((ssize_t)sizeof(double)+X_2_-((ssize_t)sizeof(double))) )= (*(double *)((3*ind_2_-2)*(ssize_t)sizeof(double)+X_));
     (*(double *)(2*(ssize_t)sizeof(double)+X_2_-((ssize_t)sizeof(double))) )= (*(double *)((3*ind_2_-1)*(ssize_t)sizeof(double)+X_));
     (*(double *)(3*(ssize_t)sizeof(double)+X_2_-((ssize_t)sizeof(double))) )= (*(double *)((3*ind_2_)*(ssize_t)sizeof(double)+X_));

     (*(double *)((ssize_t)sizeof(double)+X_3_-((ssize_t)sizeof(double))) )= (*(double *)((3*ind_3_-2)*(ssize_t)sizeof(double)+X_));
     (*(double *)(2*(ssize_t)sizeof(double)+X_3_-((ssize_t)sizeof(double))) )= (*(double *)((3*ind_3_-1)*(ssize_t)sizeof(double)+X_));
     (*(double *)(3*(ssize_t)sizeof(double)+X_3_-((ssize_t)sizeof(double))) )= (*(double *)((3*ind_3_)*(ssize_t)sizeof(double)+X_));

    switch( (*(int *)(2*P_mat___i+P_mat__i+i_*P_mat_i+P_mat____)) ){
        case 1:{
             (*(double *)((ssize_t)sizeof(double)+X_1_-((ssize_t)sizeof(double))) )-=  (double)(nx_)*l_per_;
             (*(double *)(3*(ssize_t)sizeof(double)+X_1_-((ssize_t)sizeof(double))) )-=  (double)(nz_)*l_per_;
        }break;
case 2:{
             (*(double *)(3*(ssize_t)sizeof(double)+X_1_-((ssize_t)sizeof(double))) )-=  (double)(nz_)*l_per_;
        }break;
case 3:{
             (*(double *)((ssize_t)sizeof(double)+X_1_-((ssize_t)sizeof(double))) )-=  (double)(nx_)*l_per_;
        }break;
case 4:{
             (*(double *)((ssize_t)sizeof(double)+X_1_-((ssize_t)sizeof(double))) )-=  (double)(nx_)*l_per_;
             (*(double *)(3*(ssize_t)sizeof(double)+X_1_-((ssize_t)sizeof(double))) )+=  (double)(nz_)*l_per_;
        }break;
case 5:{
             (*(double *)(3*(ssize_t)sizeof(double)+X_1_-((ssize_t)sizeof(double))) )+=  (double)(nz_)*l_per_;
        }break;
case 6:{
             (*(double *)((ssize_t)sizeof(double)+X_1_-((ssize_t)sizeof(double))) )+=  (double)(nx_)*l_per_;
             (*(double *)(3*(ssize_t)sizeof(double)+X_1_-((ssize_t)sizeof(double))) )-=  (double)(nz_)*l_per_;
        }break;
case 7:{
             (*(double *)((ssize_t)sizeof(double)+X_1_-((ssize_t)sizeof(double))) )+=  (double)(nx_)*l_per_;
        }break;
case 8:{
             (*(double *)((ssize_t)sizeof(double)+X_1_-((ssize_t)sizeof(double))) )+=  (double)(nx_)*l_per_;
             (*(double *)(3*(ssize_t)sizeof(double)+X_1_-((ssize_t)sizeof(double))) )+=  (double)(nz_)*l_per_;
    }break;
};

    switch( (*(int *)(2*P_mat___i+2*P_mat__i+i_*P_mat_i+P_mat____)) ){
        case 1:{
             (*(double *)((ssize_t)sizeof(double)+X_2_-((ssize_t)sizeof(double))) )-=  (double)(nx_)*l_per_;
             (*(double *)(3*(ssize_t)sizeof(double)+X_2_-((ssize_t)sizeof(double))) )-=  (double)(nz_)*l_per_;
        }break;
case 2:{
             (*(double *)(3*(ssize_t)sizeof(double)+X_2_-((ssize_t)sizeof(double))) )-=  (double)(nz_)*l_per_;
        }break;
case 3:{
             (*(double *)((ssize_t)sizeof(double)+X_2_-((ssize_t)sizeof(double))) )-=  (double)(nx_)*l_per_;
        }break;
case 4:{
             (*(double *)((ssize_t)sizeof(double)+X_2_-((ssize_t)sizeof(double))) )-=  (double)(nx_)*l_per_;
             (*(double *)(3*(ssize_t)sizeof(double)+X_2_-((ssize_t)sizeof(double))) )+=  (double)(nz_)*l_per_;
        }break;
case 5:{
             (*(double *)(3*(ssize_t)sizeof(double)+X_2_-((ssize_t)sizeof(double))) )+=  (double)(nz_)*l_per_;
        }break;
case 6:{
             (*(double *)((ssize_t)sizeof(double)+X_2_-((ssize_t)sizeof(double))) )+=  (double)(nx_)*l_per_;
             (*(double *)(3*(ssize_t)sizeof(double)+X_2_-((ssize_t)sizeof(double))) )-=  (double)(nz_)*l_per_;
        }break;
case 7:{
             (*(double *)((ssize_t)sizeof(double)+X_2_-((ssize_t)sizeof(double))) )+=  (double)(nx_)*l_per_;
        }break;
case 8:{
             (*(double *)((ssize_t)sizeof(double)+X_2_-((ssize_t)sizeof(double))) )+=  (double)(nx_)*l_per_;
             (*(double *)(3*(ssize_t)sizeof(double)+X_2_-((ssize_t)sizeof(double))) )+=  (double)(nz_)*l_per_;
    }break;
};

    switch( (*(int *)(2*P_mat___i+3*P_mat__i+i_*P_mat_i+P_mat____)) ){
        case 1:{
             (*(double *)((ssize_t)sizeof(double)+X_3_-((ssize_t)sizeof(double))) )-=  (double)(nx_)*l_per_;
             (*(double *)(3*(ssize_t)sizeof(double)+X_3_-((ssize_t)sizeof(double))) )-=  (double)(nz_)*l_per_;
        }break;
case 2:{
             (*(double *)(3*(ssize_t)sizeof(double)+X_3_-((ssize_t)sizeof(double))) )-=  (double)(nz_)*l_per_;
        }break;
case 3:{
             (*(double *)((ssize_t)sizeof(double)+X_3_-((ssize_t)sizeof(double))) )-=  (double)(nx_)*l_per_;
        }break;
case 4:{
             (*(double *)((ssize_t)sizeof(double)+X_3_-((ssize_t)sizeof(double))) )-=  (double)(nx_)*l_per_;
             (*(double *)(3*(ssize_t)sizeof(double)+X_3_-((ssize_t)sizeof(double))) )+=  (double)(nz_)*l_per_;
        }break;
case 5:{
             (*(double *)(3*(ssize_t)sizeof(double)+X_3_-((ssize_t)sizeof(double))) )+=  (double)(nz_)*l_per_;
        }break;
case 6:{
             (*(double *)((ssize_t)sizeof(double)+X_3_-((ssize_t)sizeof(double))) )+=  (double)(nx_)*l_per_;
             (*(double *)(3*(ssize_t)sizeof(double)+X_3_-((ssize_t)sizeof(double))) )-=  (double)(nz_)*l_per_;
        }break;
case 7:{
             (*(double *)((ssize_t)sizeof(double)+X_3_-((ssize_t)sizeof(double))) )+=  (double)(nx_)*l_per_;
        }break;
case 8:{
             (*(double *)((ssize_t)sizeof(double)+X_3_-((ssize_t)sizeof(double))) )+=  (double)(nx_)*l_per_;
             (*(double *)(3*(ssize_t)sizeof(double)+X_3_-((ssize_t)sizeof(double))) )+=  (double)(nz_)*l_per_;
    }break;
};

     (*(double *)((ssize_t)sizeof(double)+dir_1_-((ssize_t)sizeof(double))) )= (*(double *)((ssize_t)sizeof(double)+X_2_-((ssize_t)sizeof(double))) )- (*(double *)((ssize_t)sizeof(double)+X_1_-((ssize_t)sizeof(double))));
     (*(double *)(2*(ssize_t)sizeof(double)+dir_1_-((ssize_t)sizeof(double))) )= (*(double *)(2*(ssize_t)sizeof(double)+X_2_-((ssize_t)sizeof(double))) )- (*(double *)(2*(ssize_t)sizeof(double)+X_1_-((ssize_t)sizeof(double))));
     (*(double *)(3*(ssize_t)sizeof(double)+dir_1_-((ssize_t)sizeof(double))) )= (*(double *)(3*(ssize_t)sizeof(double)+X_2_-((ssize_t)sizeof(double))) )- (*(double *)(3*(ssize_t)sizeof(double)+X_1_-((ssize_t)sizeof(double))));

     (*(double *)((ssize_t)sizeof(double)+dir_2_-((ssize_t)sizeof(double))) )= (*(double *)((ssize_t)sizeof(double)+X_3_-((ssize_t)sizeof(double))) )- (*(double *)((ssize_t)sizeof(double)+X_1_-((ssize_t)sizeof(double))));
     (*(double *)(2*(ssize_t)sizeof(double)+dir_2_-((ssize_t)sizeof(double))) )= (*(double *)(2*(ssize_t)sizeof(double)+X_3_-((ssize_t)sizeof(double))) )- (*(double *)(2*(ssize_t)sizeof(double)+X_1_-((ssize_t)sizeof(double))));
     (*(double *)(3*(ssize_t)sizeof(double)+dir_2_-((ssize_t)sizeof(double))) )= (*(double *)(3*(ssize_t)sizeof(double)+X_3_-((ssize_t)sizeof(double))) )- (*(double *)(3*(ssize_t)sizeof(double)+X_1_-((ssize_t)sizeof(double))));
    
     (*(double *)((ssize_t)sizeof(double)+normal_-((ssize_t)sizeof(double))) )= (*(double *)(2*(ssize_t)sizeof(double)+dir_1_-((ssize_t)sizeof(double))))*(*(double *)(3*(ssize_t)sizeof(double)+dir_2_-((ssize_t)sizeof(double))) )- (*(double *)(2*(ssize_t)sizeof(double)+dir_2_-((ssize_t)sizeof(double))))*(*(double *)(3*(ssize_t)sizeof(double)+dir_1_-((ssize_t)sizeof(double))));
     (*(double *)(2*(ssize_t)sizeof(double)+normal_-((ssize_t)sizeof(double))) )= (*(double *)((ssize_t)sizeof(double)+dir_2_-((ssize_t)sizeof(double))))*(*(double *)(3*(ssize_t)sizeof(double)+dir_1_-((ssize_t)sizeof(double))) )- (*(double *)((ssize_t)sizeof(double)+dir_1_-((ssize_t)sizeof(double))))*(*(double *)(3*(ssize_t)sizeof(double)+dir_2_-((ssize_t)sizeof(double))));
     (*(double *)(3*(ssize_t)sizeof(double)+normal_-((ssize_t)sizeof(double))) )= (*(double *)((ssize_t)sizeof(double)+dir_1_-((ssize_t)sizeof(double))))*(*(double *)(2*(ssize_t)sizeof(double)+dir_2_-((ssize_t)sizeof(double))) )- (*(double *)((ssize_t)sizeof(double)+dir_2_-((ssize_t)sizeof(double))))*(*(double *)(2*(ssize_t)sizeof(double)+dir_1_-((ssize_t)sizeof(double))));

    _22normal_norm=sqrt(((*(double *)((ssize_t)sizeof(double)+normal_-((ssize_t)sizeof(double))))*(*(double *)((ssize_t)sizeof(double)+normal_-((ssize_t)sizeof(double)))))+ ((*(double *)(2*(ssize_t)sizeof(double)+normal_-((ssize_t)sizeof(double))))*(*(double *)(2*(ssize_t)sizeof(double)+normal_-((ssize_t)sizeof(double)))))+ ((*(double *)(3*(ssize_t)sizeof(double)+normal_-((ssize_t)sizeof(double))))*(*(double *)(3*(ssize_t)sizeof(double)+normal_-((ssize_t)sizeof(double)))))); 
    
     dA_ = (_22normal_norm / 2.) / (double)(((n_int_-1)*(n_int_-1)));

     for(int k_=  1 ;k_<= 3;k_+=1){
       (*(double *)(k_*(ssize_t)sizeof(double)+normal_-((ssize_t)sizeof(double))) )/=  _22normal_norm;
    }

     for(int j_=  1 ;j_<= ((n_int_-1)*(n_int_-1));j_+=1){
       lambda_1_ = (*(double *)((ssize_t)sizeof(double)+j_*bar_lambda_mat_i+bar_lambda_mat__));
       lambda_2_ = (*(double *)(2*(ssize_t)sizeof(double)+j_*bar_lambda_mat_i+bar_lambda_mat__));
       lambda_3_ = (*(double *)(3*(ssize_t)sizeof(double)+j_*bar_lambda_mat_i+bar_lambda_mat__));

       (*(double *)((ssize_t)sizeof(double)+x_-((ssize_t)sizeof(double))) )= lambda_1_*(*(double *)((ssize_t)sizeof(double)+X_1_-((ssize_t)sizeof(double))) )+ lambda_2_*(*(double *)((ssize_t)sizeof(double)+X_2_-((ssize_t)sizeof(double))) )+ lambda_3_*(*(double *)((ssize_t)sizeof(double)+X_3_-((ssize_t)sizeof(double))));
       (*(double *)(2*(ssize_t)sizeof(double)+x_-((ssize_t)sizeof(double))) )= lambda_1_*(*(double *)(2*(ssize_t)sizeof(double)+X_1_-((ssize_t)sizeof(double))) )+ lambda_2_*(*(double *)(2*(ssize_t)sizeof(double)+X_2_-((ssize_t)sizeof(double))) )+ lambda_3_*(*(double *)(2*(ssize_t)sizeof(double)+X_3_-((ssize_t)sizeof(double))));
       (*(double *)(3*(ssize_t)sizeof(double)+x_-((ssize_t)sizeof(double))) )= lambda_1_*(*(double *)(3*(ssize_t)sizeof(double)+X_1_-((ssize_t)sizeof(double))) )+ lambda_2_*(*(double *)(3*(ssize_t)sizeof(double)+X_2_-((ssize_t)sizeof(double))) )+ lambda_3_*(*(double *)(3*(ssize_t)sizeof(double)+X_3_-((ssize_t)sizeof(double))));

      main_18df_comp(df_-((ssize_t)sizeof(double)) ,x_-((ssize_t)sizeof(double)) ,normal_-((ssize_t)sizeof(double)) ,t_ ,dA_ ,Lx_ ,Lz_ ,l_per_ ,nx_ ,nz_);

      if( ((*(int *)(2*P_mat___i+P_mat__i+i_*P_mat_i+P_mat____)) == 0 )&&( ind_1_ <=n_B_ )){
         (*(double *)((3*ind_1_-2)*f_ext_i+f_ext__) )+=  lambda_1_*(*(double *)((ssize_t)sizeof(double)+df_-((ssize_t)sizeof(double))));
         (*(double *)((3*ind_1_-1)*f_ext_i+f_ext__) )+=  lambda_1_*(*(double *)(2*(ssize_t)sizeof(double)+df_-((ssize_t)sizeof(double))));
         (*(double *)((3*ind_1_)*f_ext_i+f_ext__)   )+=  lambda_1_*(*(double *)(3*(ssize_t)sizeof(double)+df_-((ssize_t)sizeof(double))));
      };
      if( ((*(int *)(2*P_mat___i+2*P_mat__i+i_*P_mat_i+P_mat____)) == 0 )&&( ind_2_ <=n_B_ )){
         (*(double *)((3*ind_2_-2)*f_ext_i+f_ext__) )+=  lambda_2_*(*(double *)((ssize_t)sizeof(double)+df_-((ssize_t)sizeof(double))));
         (*(double *)((3*ind_2_-1)*f_ext_i+f_ext__) )+=  lambda_2_*(*(double *)(2*(ssize_t)sizeof(double)+df_-((ssize_t)sizeof(double))));
         (*(double *)((3*ind_2_)*f_ext_i+f_ext__)   )+=  lambda_2_*(*(double *)(3*(ssize_t)sizeof(double)+df_-((ssize_t)sizeof(double))));
      };
      if( ((*(int *)(2*P_mat___i+3*P_mat__i+i_*P_mat_i+P_mat____)) == 0 )&&( ind_3_ <=n_B_ )){
         (*(double *)((3*ind_3_-2)*f_ext_i+f_ext__) )+=  lambda_3_*(*(double *)((ssize_t)sizeof(double)+df_-((ssize_t)sizeof(double))));
         (*(double *)((3*ind_3_-1)*f_ext_i+f_ext__) )+=  lambda_3_*(*(double *)(2*(ssize_t)sizeof(double)+df_-((ssize_t)sizeof(double))));
         (*(double *)((3*ind_3_)*f_ext_i+f_ext__)   )+=  lambda_3_*(*(double *)(3*(ssize_t)sizeof(double)+df_-((ssize_t)sizeof(double))));
      };
    }

    if( (i_ == 125 )&&( (*(double *)(2*(ssize_t)sizeof(double)+normal_-((ssize_t)sizeof(double))))<0.)){
       {int _23i_=1 ;do{{  fprintf(stdout,"%g \t",(*(double *)(_23i_*(ssize_t)sizeof(double)+normal_-((ssize_t)sizeof(double)))) );fflush(stdout); }_23i_+=1;}while(_23i_<= 3);}{} putc('\n',stdout);
    };

    /*IF t = 0.001 AND (f_ext(3*ind_1-1) > 0 OR f_ext(3*ind_2-1) > 0 OR f_ext(3*ind_3-1) > 0) THEN
      WRITE i, normal(2), df
      IF f_ext(3*ind_1-1) > 0 THEN
        WRITE f_ext(3*ind_1-1)
      ELSE IF f_ext(ind_2-1) > 0 THEN 
        WRITE f_ext(3*ind_2-1)
      ELSE IF f_ext(3*ind_3-1) > 0 THEN
        WRITE f_ext(3*ind_3-1)
      END IF
    END IF*/
    
  }





  /*LOOP FOR i = 1 TO n_B
    f_ext(3*i-2) = 0
    IF i > 4*(ind_mc-1) AND i <= 4*ind_mc THEN
      f_ext(3*i-1) = A*SIN(w*t)
    ELSE
      f_ext(3*i-1) = 0
    END IF
    f_ext(3*i) = 0
  REPEAT

  LOOP FOR i = 1 TO n_B
    f_ext(3*i-2) = 0
    f_ext(3*i-1) = 0
    f_ext(3*i) = 2
  REPEAT*/

free(X_f.ptr);freestack=es;}}void main_20X_dot_comp(const int X_dot_l,const int X_dot_h,const ssize_t X_dot_i,char *X_dot__,int n_N_dof_,int n_N_,int n_G_,double l_b_,const int q_tilde_l,const int q_tilde_h,const ssize_t q_tilde_i,char *q_tilde__,const int ghost_nodes_l,const int ghost_nodes_h,const ssize_t ghost_nodes_i,const int ghost_nodes__l,const int ghost_nodes__h,const ssize_t ghost_nodes__i,char *ghost_nodes___){{struct freefunc* es=freestack;

     for(int i_=  1 ;i_<= (int)floor((double)((n_N_-n_G_))/2.);i_+=1){
         (*(double *)((3*i_-2)*X_dot_i+X_dot__) )= l_b_*(cos((*(double *)((2*i_-1+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*cos((*(double *)((2*i_+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*(*(double *)((2*i_-1)*q_tilde_i+q_tilde__))-sin((*(double *)((2*i_-1+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*sin((*(double *)((2*i_+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*(*(double *)((2*i_)*q_tilde_i+q_tilde__)));
         (*(double *)((3*i_-1)*X_dot_i+X_dot__) )= l_b_*(cos((*(double *)((2*i_-1+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*sin((*(double *)((2*i_+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*(*(double *)((2*i_-1)*q_tilde_i+q_tilde__))+sin((*(double *)((2*i_-1+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*cos((*(double *)((2*i_+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*(*(double *)((2*i_)*q_tilde_i+q_tilde__)));
         (*(double *)((3*i_)*X_dot_i+X_dot__)   )=  - l_b_*sin((*(double *)((2*i_-1+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*(*(double *)((2*i_-1)*q_tilde_i+q_tilde__));
    }

     for(int i_=  1 ;i_<= n_G_;i_+=1){
        int _21ghost_ind;
int _22parent_ind;
_21ghost_ind=(*(int*)(ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___)); 
        _22parent_ind=(*(int*)(2*ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___)); 

         (*(double *)((3*_21ghost_ind-2)*X_dot_i+X_dot__) )= (*(double *)((3*_22parent_ind-2)*X_dot_i+X_dot__));
         (*(double *)((3*_21ghost_ind-1)*X_dot_i+X_dot__) )= (*(double *)((3*_22parent_ind-1)*X_dot_i+X_dot__));
         (*(double *)((3*_21ghost_ind)*X_dot_i+X_dot__)   )= (*(double *)((3*_22parent_ind)*X_dot_i+X_dot__));
    }
}}

void main_21X_comp(const int X_l,const int X_h,const ssize_t X_i,char *X__,int n_N_dof_,int n_N_,int n_G_,int nx_,int nz_,double l_per_,double l_b_,const int q_tilde_l,const int q_tilde_h,const ssize_t q_tilde_i,char *q_tilde__,const int X_0_l,const int X_0_h,const ssize_t X_0_i,char *X_0__,const int ghost_nodes_l,const int ghost_nodes_h,const ssize_t ghost_nodes_i,const int ghost_nodes__l,const int ghost_nodes__h,const ssize_t ghost_nodes__i,char *ghost_nodes___){{struct freefunc* es=freestack;

    {char *_23_;

_23_=X_l*X_0_i+X_0__; {char *_22_=X_l*X_i+X__;int _22_1=X_h-X_l; do{{ (*(double *)(_22_))=(*(double *)(_23_)); _23_ =X_0_i+_23_;}_22_+=X_i;_22_1--;}while(_22_1>=0);}} 

     for(int i_=  1 ;i_<= (int)floor((double)((n_N_-n_G_))/2.);i_+=1){
         (*(double *)((3*i_-2)*X_i+X__) )= (*(double *)((3*i_-2+3*(int)floor((double)((n_N_-n_G_))/2.))*X_0_i+X_0__)) + l_b_*sin((*(double *)((2*i_-1+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*cos((*(double *)((2*i_+(n_N_-n_G_))*q_tilde_i+q_tilde__)));
         (*(double *)((3*i_-1)*X_i+X__) )= (*(double *)((3*i_-1+3*(int)floor((double)((n_N_-n_G_))/2.))*X_0_i+X_0__)) + l_b_*sin((*(double *)((2*i_-1+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*sin((*(double *)((2*i_+(n_N_-n_G_))*q_tilde_i+q_tilde__)));
         (*(double *)((3*i_)*X_i+X__)   )= (*(double *)((3*i_+3*(int)floor((double)((n_N_-n_G_))/2.))*X_0_i+X_0__)) + l_b_*cos((*(double *)((2*i_-1+(n_N_-n_G_))*q_tilde_i+q_tilde__)));
    }

     for(int i_=  1 ;i_<= n_G_;i_+=1){
        int _24ghost_ind;
int _25parent_ind;
int _26per_dir;
_24ghost_ind=(*(int*)(ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___)); 
        _25parent_ind=(*(int*)(2*ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___)); 
        _26per_dir=(*(int*)(3*ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___)); 

        if( _26per_dir == 1 ){
             (*(double *)((3*_24ghost_ind-2)*X_i+X__) )= (*(double *)((3*_25parent_ind-2)*X_i+X__) )- (double)(nx_)*l_per_;
             (*(double *)((3*_24ghost_ind-1)*X_i+X__) )= (*(double *)((3*_25parent_ind-1)*X_i+X__) );
             (*(double *)((3*_24ghost_ind)*X_i+X__)   )= (*(double *)((3*_25parent_ind)*X_i+X__));
        }else{ if( _26per_dir == 2 ){
             (*(double *)((3*_24ghost_ind-2)*X_i+X__) )= (*(double *)((3*_25parent_ind-2)*X_i+X__) );
             (*(double *)((3*_24ghost_ind-1)*X_i+X__) )= (*(double *)((3*_25parent_ind-1)*X_i+X__));
             (*(double *)((3*_24ghost_ind)*X_i+X__)   )= (*(double *)((3*_25parent_ind)*X_i+X__)   )- (double)(nz_)*l_per_;
        }else{ if( _26per_dir == 3 ){
             (*(double *)((3*_24ghost_ind-2)*X_i+X__) )= (*(double *)((3*_25parent_ind-2)*X_i+X__) );
             (*(double *)((3*_24ghost_ind-1)*X_i+X__) )= (*(double *)((3*_25parent_ind-1)*X_i+X__));
             (*(double *)((3*_24ghost_ind)*X_i+X__)   )= (*(double *)((3*_25parent_ind)*X_i+X__)   )+ (double)(nz_)*l_per_;
        }else{ if( _26per_dir == 4 ){
             (*(double *)((3*_24ghost_ind-2)*X_i+X__) )= (*(double *)((3*_25parent_ind-2)*X_i+X__) )+ (double)(nx_)*l_per_;
             (*(double *)((3*_24ghost_ind-1)*X_i+X__) )= (*(double *)((3*_25parent_ind-1)*X_i+X__) );
             (*(double *)((3*_24ghost_ind)*X_i+X__)   )= (*(double *)((3*_25parent_ind)*X_i+X__));
        };};};};
    }
}}
void main_22B_con_comp(const int B_con_l,const int B_con_h,const ssize_t B_con_i,const int B_con__l,const int B_con__h,const ssize_t B_con__i,char *B_con___,int n_B_,int n_C_){{struct freefunc* es=freestack;
    
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


void main_23T_comp(const int T_con_l,const int T_con_h,const ssize_t T_con_i,char *T_con__,const int ghost_nodes_l,const int ghost_nodes_h,const ssize_t ghost_nodes_i,char *ghost_nodes__,const int l_0_l,const int l_0_h,const ssize_t l_0_i,char *l_0__,int nx_,int nz_,int n_C_,int n_T_,int n_G_,double l_u_s_0_,double l_u_l_0_,double l_i_0_){{struct freefunc* es=freestack;

    ssize_t _24i;
ssize_t _25st;
struct freefunc Ten_cell_up_f;char *Ten_cell_up_;


    int count_1_ ;


    int count_2_ ;

    int count_g_ ;


    int count_3_ ;


    int count_4_ ;


    _24i=(ssize_t)sizeof(int)*10*n_C_;_25st=(ssize_t)sizeof(int)*10+(ssize_t)sizeof(int);
Ten_cell_up_=malloc(_24i);if(Ten_cell_up_==NULL)Ten_cell_up_=errmalloc();Ten_cell_up_-=_25st;atblockexit(Ten_cell_up_f,free,Ten_cell_up_+_25st);
 for(int j_=  1 ;j_<= nx_ ;j_+=1){ for(int i_=  1 ;i_<= nz_;i_+=1){

        int _26ind;
int mtemp27;
int mtemp28;
_26ind=(int)floor((double)(i_+nz_*(j_-1))); 
        
         (*(int *)((ssize_t)sizeof(int)+_26ind*(ssize_t)sizeof(int)*10+Ten_cell_up_) )= (int)floor((double)(4*(i_+(j_-1)*nz_)-3));
         (*(int *)(2*(ssize_t)sizeof(int)+_26ind*(ssize_t)sizeof(int)*10+Ten_cell_up_) )= (int)floor((double)(4*(i_+(j_-1)*nz_)-2));
         (*(int *)(3*(ssize_t)sizeof(int)+_26ind*(ssize_t)sizeof(int)*10+Ten_cell_up_) )= (int)floor((double)(4*(i_+(j_-1)*nz_)-1));
         (*(int *)(4*(ssize_t)sizeof(int)+_26ind*(ssize_t)sizeof(int)*10+Ten_cell_up_) )= (int)floor((double)(4*(i_+(j_-1)*nz_)));

        if( !(((mtemp27=i_ ,mtemp27% nz_+((mtemp27>=0)==(nz_>=0)?0:nz_))==0) )){
             (*(int *)(5*(ssize_t)sizeof(int)+_26ind*(ssize_t)sizeof(int)*10+Ten_cell_up_) )= (int)floor((double)(i_+(j_-1)*nz_+1));
        };

        if( !(((mtemp28=j_ ,mtemp28% nx_+((mtemp28>=0)==(nx_>=0)?0:nx_))==0) )){
             (*(int *)(6*(ssize_t)sizeof(int)+_26ind*(ssize_t)sizeof(int)*10+Ten_cell_up_) )= (int)floor((double)(i_+j_*nz_));
        };

        if( j_ == 1 ){
             (*(int *)(7*(ssize_t)sizeof(int)+_26ind*(ssize_t)sizeof(int)*10+Ten_cell_up_) )= (int)floor((double)(i_+nz_*(nx_-1)));
        };

        if( i_ == 1 ){
             (*(int *)(8*(ssize_t)sizeof(int)+_26ind*(ssize_t)sizeof(int)*10+Ten_cell_up_) )= (int)floor((double)(nz_+nz_*(j_-1)));
        };

        if( i_ == nz_ ){
             (*(int *)(9*(ssize_t)sizeof(int)+_26ind*(ssize_t)sizeof(int)*10+Ten_cell_up_) )= (int)floor((double)(1+nz_*(j_-1)));
        };

        if( j_ == nx_ ){ 
             (*(int *)(10*(ssize_t)sizeof(int)+_26ind*(ssize_t)sizeof(int)*10+Ten_cell_up_) )= i_;
        };
    }}

     count_1_= 0; for(int i_=  1 ;i_<= (int)floor((double)(nx_*nz_));i_+=1){

        int _29r_con;
int _30u_con;
_29r_con=(*(int *)(5*(ssize_t)sizeof(int)+i_*(ssize_t)sizeof(int)*10+Ten_cell_up_)); 
        _30u_con=(*(int *)(6*(ssize_t)sizeof(int)+i_*(ssize_t)sizeof(int)*10+Ten_cell_up_)); 

        if( !((_29r_con == 0) )){
             count_1_ +=  1;

             (*(int *)((ssize_t)sizeof(int)+(3*count_1_-2)*T_con_i+T_con__) )= (*(int *)(2*(ssize_t)sizeof(int)+i_*(ssize_t)sizeof(int)*10+Ten_cell_up_));
             (*(int *)(2*(ssize_t)sizeof(int)+(3*count_1_-2)*T_con_i+T_con__) )= (*(int *)((ssize_t)sizeof(int)+_29r_con*(ssize_t)sizeof(int)*10+Ten_cell_up_));
             (*(int *)((ssize_t)sizeof(int)+(3*count_1_-1)*T_con_i+T_con__) )= (*(int *)((ssize_t)sizeof(int)+_29r_con*(ssize_t)sizeof(int)*10+Ten_cell_up_));
             (*(int *)(2*(ssize_t)sizeof(int)+(3*count_1_-1)*T_con_i+T_con__) )= (*(int *)(3*(ssize_t)sizeof(int)+i_*(ssize_t)sizeof(int)*10+Ten_cell_up_));
             (*(int *)((ssize_t)sizeof(int)+(3*count_1_)*T_con_i+T_con__)   )= (*(int *)(3*(ssize_t)sizeof(int)+i_*(ssize_t)sizeof(int)*10+Ten_cell_up_));
             (*(int *)(2*(ssize_t)sizeof(int)+(3*count_1_)*T_con_i+T_con__)   )= (*(int *)(4*(ssize_t)sizeof(int)+_29r_con*(ssize_t)sizeof(int)*10+Ten_cell_up_));

             (*(double *)((3*count_1_-2)*l_0_i+l_0__) )= l_u_s_0_;
             (*(double *)((3*count_1_-1)*l_0_i+l_0__) )= l_u_l_0_;
             (*(double *)((3*count_1_)*l_0_i+l_0__)   )= l_u_s_0_;
        };
        if( !((_30u_con == 0) )){
             count_1_ +=  1;

             (*(int *)((ssize_t)sizeof(int)+(3*count_1_-2)*T_con_i+T_con__) )= (*(int *)((ssize_t)sizeof(int)+_30u_con*(ssize_t)sizeof(int)*10+Ten_cell_up_));
             (*(int *)(2*(ssize_t)sizeof(int)+(3*count_1_-2)*T_con_i+T_con__) )= (*(int *)(4*(ssize_t)sizeof(int)+i_*(ssize_t)sizeof(int)*10+Ten_cell_up_));
             (*(int *)((ssize_t)sizeof(int)+(3*count_1_-1)*T_con_i+T_con__) )= (*(int *)(4*(ssize_t)sizeof(int)+i_*(ssize_t)sizeof(int)*10+Ten_cell_up_));
             (*(int *)(2*(ssize_t)sizeof(int)+(3*count_1_-1)*T_con_i+T_con__) )= (*(int *)(2*(ssize_t)sizeof(int)+_30u_con*(ssize_t)sizeof(int)*10+Ten_cell_up_));
             (*(int *)((ssize_t)sizeof(int)+(3*count_1_)*T_con_i+T_con__)   )= (*(int *)(2*(ssize_t)sizeof(int)+_30u_con*(ssize_t)sizeof(int)*10+Ten_cell_up_));
             (*(int *)(2*(ssize_t)sizeof(int)+(3*count_1_)*T_con_i+T_con__)   )= (*(int *)(3*(ssize_t)sizeof(int)+i_*(ssize_t)sizeof(int)*10+Ten_cell_up_));

             (*(double *)((3*count_1_-2)*l_0_i+l_0__) )= l_u_s_0_;
             (*(double *)((3*count_1_-1)*l_0_i+l_0__) )= l_u_l_0_;
             (*(double *)((3*count_1_)*l_0_i+l_0__)   )= l_u_s_0_;
        };
    }

     count_2_= 0; count_g_= 0; for(int i_=  1 ;i_<= nz_;i_+=1){
        int _31ghost_down_cell_ind;
int _32ghost_node;
 count_g_             = count_g_ + 1;
         count_2_             = count_2_ + 1;
        _31ghost_down_cell_ind=(*(int *)(7*(ssize_t)sizeof(int)+i_*(ssize_t)sizeof(int)*10+Ten_cell_up_)); 
        _32ghost_node=8*nx_*nz_ + count_g_; 

         (*(int *)((ssize_t)sizeof(int)+(2*count_2_-1+3*count_1_)*T_con_i+T_con__) )= (*(int *)((ssize_t)sizeof(int)+i_*(ssize_t)sizeof(int)*10+Ten_cell_up_));
         (*(int *)(2*(ssize_t)sizeof(int)+(2*count_2_-1+3*count_1_)*T_con_i+T_con__) )= _32ghost_node;
         (*(int *)((ssize_t)sizeof(int)+(2*count_2_+3*count_1_)*T_con_i+T_con__)   )= _32ghost_node;
         (*(int *)(2*(ssize_t)sizeof(int)+(2*count_2_+3*count_1_)*T_con_i+T_con__)   )= (*(int *)(2*(ssize_t)sizeof(int)+i_*(ssize_t)sizeof(int)*10+Ten_cell_up_));

         (*(double *)((2*count_2_-1+3*count_1_)*l_0_i+l_0__) )= l_u_s_0_;
         (*(double *)((2*count_2_+3*count_1_)*l_0_i+l_0__)   )= l_u_l_0_;

         (*(int *)((ssize_t)sizeof(int)+count_g_*ghost_nodes_i+ghost_nodes__) )= _32ghost_node;
         (*(int *)(2*(ssize_t)sizeof(int)+count_g_*ghost_nodes_i+ghost_nodes__) )= (*(int *)(4*(ssize_t)sizeof(int)+_31ghost_down_cell_ind*(ssize_t)sizeof(int)*10+Ten_cell_up_));
         (*(int *)(3*(ssize_t)sizeof(int)+count_g_*ghost_nodes_i+ghost_nodes__) )= 1;
    }

     for(int i_=  1 ;i_<= nx_;i_+=1){
        int _33j;
int _34ghost_left_cell_ind;
int _35ghost_node;
 count_g_ +=  1;
         count_2_ +=  1;

        _33j=1+(i_-1)*nz_; 

        _34ghost_left_cell_ind=(*(int *)(8*(ssize_t)sizeof(int)+_33j*(ssize_t)sizeof(int)*10+Ten_cell_up_)); 
        _35ghost_node=8*nx_*nz_ + count_g_; 

         (*(int *)((ssize_t)sizeof(int)+(2*count_2_-1+3*count_1_)*T_con_i+T_con__) )= (*(int *)(4*(ssize_t)sizeof(int)+_33j*(ssize_t)sizeof(int)*10+Ten_cell_up_));
         (*(int *)(2*(ssize_t)sizeof(int)+(2*count_2_-1+3*count_1_)*T_con_i+T_con__) )= _35ghost_node;
         (*(int *)((ssize_t)sizeof(int)+(2*count_2_+3*count_1_)*T_con_i+T_con__)   )= _35ghost_node;
         (*(int *)(2*(ssize_t)sizeof(int)+(2*count_2_+3*count_1_)*T_con_i+T_con__)   )= (*(int *)((ssize_t)sizeof(int)+_33j*(ssize_t)sizeof(int)*10+Ten_cell_up_));

         (*(double *)((2*count_2_-1+3*count_1_)*l_0_i+l_0__) )= l_u_s_0_;
         (*(double *)((2*count_2_+3*count_1_)*l_0_i+l_0__)   )= l_u_l_0_;

         (*(int *)((ssize_t)sizeof(int)+count_g_*ghost_nodes_i+ghost_nodes__) )= _35ghost_node;
         (*(int *)(2*(ssize_t)sizeof(int)+count_g_*ghost_nodes_i+ghost_nodes__) )= (*(int *)(3*(ssize_t)sizeof(int)+_34ghost_left_cell_ind*(ssize_t)sizeof(int)*10+Ten_cell_up_));
         (*(int *)(3*(ssize_t)sizeof(int)+count_g_*ghost_nodes_i+ghost_nodes__) )= 2;
    }

     count_3_= 0; for(int i_=  1 ;i_<= nx_;i_+=1){
        int _36j;
int _37ghost_right_cell_ind;
int _38ghost_node;
 count_g_ +=  1;
         count_3_ +=  1;

        _36j=i_*nz_; 

        _37ghost_right_cell_ind=(*(int *)(9*(ssize_t)sizeof(int)+_36j*(ssize_t)sizeof(int)*10+Ten_cell_up_)); 
        _38ghost_node=8*nx_*nz_ + count_g_; 

         (*(int *)((ssize_t)sizeof(int)+(count_3_+2*count_2_+3*count_1_)*T_con_i+T_con__) )= _38ghost_node;
         (*(int *)(2*(ssize_t)sizeof(int)+(count_3_+2*count_2_+3*count_1_)*T_con_i+T_con__) )= (*(int *)(2*(ssize_t)sizeof(int)+_36j*(ssize_t)sizeof(int)*10+Ten_cell_up_));

         (*(double *)((count_3_+2*count_2_+3*count_1_)*l_0_i+l_0__) )= l_u_s_0_;

         (*(int *)((ssize_t)sizeof(int)+count_g_*ghost_nodes_i+ghost_nodes__) )= _38ghost_node;
         (*(int *)(2*(ssize_t)sizeof(int)+count_g_*ghost_nodes_i+ghost_nodes__) )= (*(int *)((ssize_t)sizeof(int)+_37ghost_right_cell_ind*(ssize_t)sizeof(int)*10+Ten_cell_up_));
         (*(int *)(3*(ssize_t)sizeof(int)+count_g_*ghost_nodes_i+ghost_nodes__) )= 3;
    }

     for(int i_=  1 ;i_<= nz_;i_+=1){
        int _39j;
int _40ghost_up_cell_ind;
int _41ghost_node;
 count_g_ +=  1;
         count_3_ +=  1;

        _39j=i_+(nx_-1)*nz_; 

        _40ghost_up_cell_ind=(*(int *)(10*(ssize_t)sizeof(int)+_39j*(ssize_t)sizeof(int)*10+Ten_cell_up_)); 
        _41ghost_node=8*nx_*nz_ + count_g_; 

         (*(int *)((ssize_t)sizeof(int)+(count_3_+2*count_2_+3*count_1_)*T_con_i+T_con__) )= _41ghost_node;
         (*(int *)(2*(ssize_t)sizeof(int)+(count_3_+2*count_2_+3*count_1_)*T_con_i+T_con__) )= (*(int *)(3*(ssize_t)sizeof(int)+_39j*(ssize_t)sizeof(int)*10+Ten_cell_up_));

         (*(double *)((count_3_+2*count_2_+3*count_1_)*l_0_i+l_0__) )= l_u_s_0_;

         (*(int *)((ssize_t)sizeof(int)+count_g_*ghost_nodes_i+ghost_nodes__) )= _41ghost_node;
         (*(int *)(2*(ssize_t)sizeof(int)+count_g_*ghost_nodes_i+ghost_nodes__) )= (*(int *)(2*(ssize_t)sizeof(int)+_40ghost_up_cell_ind*(ssize_t)sizeof(int)*10+Ten_cell_up_));
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


void main_24f_n_comp(const int f_n_l,const int f_n_h,const ssize_t f_n_i,char *f_n__,int n_N_dof_,int n_N_,int n_T_,int n_G_,int nx_,int ny_,double l_per_,double l_b_,double k_,double sigma_,const int q_tilde_l,const int q_tilde_h,const ssize_t q_tilde_i,char *q_tilde__,const int X_0_l,const int X_0_h,const ssize_t X_0_i,char *X_0__,const int l_0_l,const int l_0_h,const ssize_t l_0_i,char *l_0__,const int T_con_l,const int T_con_h,const ssize_t T_con_i,const int T_con__l,const int T_con__h,const ssize_t T_con__i,char *T_con___,const int ghost_nodes_l,const int ghost_nodes_h,const ssize_t ghost_nodes_i,const int ghost_nodes__l,const int ghost_nodes__h,const ssize_t ghost_nodes__i,char *ghost_nodes___){{struct freefunc* es=freestack;
    
    char f_t_[(ssize_t)sizeof(double)*3];
char l_i_[(ssize_t)sizeof(double)*3];
char l_i_dot_[(ssize_t)sizeof(double)*3];


    double l_i_norm_;

    
    int _25h;
ssize_t _26i;
struct freefunc f_n_ghost_f;char *f_n_ghost_;

    int ind_A_;
int ind_B_;
int ind_G_;


    ssize_t _27i;
struct freefunc X_f;char *X_     ;

    struct freefunc X_dot_f;char *X_dot_ ;

    
    _25h=3*n_G_;_26i=(ssize_t)sizeof(double)*_25h;
f_n_ghost_=malloc(_26i);if(f_n_ghost_==NULL)f_n_ghost_=errmalloc();f_n_ghost_-=(ssize_t)sizeof(double);atblockexit(f_n_ghost_f,free,f_n_ghost_+(ssize_t)sizeof(double));
 for(int i_=  1 ;i_<= n_G_;i_+=1){
         memset((ssize_t)sizeof(double)+f_n_ghost_,0,_26i);
    }
    
    _27i=(ssize_t)sizeof(double)*n_N_dof_;
X_=malloc(_27i);if(X_==NULL)X_=errmalloc();X_-=(ssize_t)sizeof(double);atblockexit(X_f,free,X_+(ssize_t)sizeof(double));
 memset((ssize_t)sizeof(double)+X_,0,_27i);
X_dot_=malloc(_27i);if(X_dot_==NULL)X_dot_=errmalloc();X_dot_-=(ssize_t)sizeof(double);atblockexit(X_dot_f,free,X_dot_+(ssize_t)sizeof(double));
 memset((ssize_t)sizeof(double)+X_dot_,0,_27i);main_21X_comp(1,n_N_dof_,(ssize_t)sizeof(double),X_ ,n_N_dof_ ,n_N_ ,n_G_ ,nx_ ,ny_ ,l_per_ ,l_b_ ,q_tilde_l,q_tilde_h,q_tilde_i,q_tilde__ ,X_0_l,X_0_h,X_0_i,X_0__ ,ghost_nodes_l,ghost_nodes_h,ghost_nodes_i,ghost_nodes__l,ghost_nodes__h,ghost_nodes__i,ghost_nodes___);
    main_20X_dot_comp(1,n_N_dof_,(ssize_t)sizeof(double),X_dot_ ,n_N_dof_ ,n_N_ ,n_G_ ,l_b_ ,q_tilde_l,q_tilde_h,q_tilde_i,q_tilde__ ,ghost_nodes_l,ghost_nodes_h,ghost_nodes_i,ghost_nodes__l,ghost_nodes__h,ghost_nodes__i,ghost_nodes___);
    
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
        int _28parent_ind;
_28parent_ind=(*(int*)(2*ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___)); 

         (*(double *)((3*_28parent_ind-2)*f_n_i+f_n__) )+=  (*(double *)((3*i_-2)*(ssize_t)sizeof(double)+f_n_ghost_));
         (*(double *)((3*_28parent_ind-1)*f_n_i+f_n__) )+=  (*(double *)((3*i_-1)*(ssize_t)sizeof(double)+f_n_ghost_));
         (*(double *)((3*_28parent_ind)*f_n_i+f_n__)   )= (*(double *)((3*_28parent_ind)*f_n_i+f_n__) )+ (*(double *)((3*i_)*(ssize_t)sizeof(double)+f_n_ghost_));
    }
free(X_dot_f.ptr);free(X_f.ptr);free(f_n_ghost_f.ptr);freestack=es;}}


void main_25Cq_dot_compute(const int Cq_dot_l,const int Cq_dot_h,const ssize_t Cq_dot_i,char *Cq_dot__,int n_q_tilde_,int n_B_,double I_0_,const int q_tilde_l,const int q_tilde_h,const ssize_t q_tilde_i,char *q_tilde__){{struct freefunc* es=freestack;

     for(int i_=  1 ;i_<= n_B_;i_+=1){
         (*(double *)((2*i_-1)*Cq_dot_i+Cq_dot__) )=  - 0.5*I_0_*sin(2.*(*(double *)((2*i_-1+(int)floor((double)(n_q_tilde_)/2.))*q_tilde_i+q_tilde__)))*((*(double *)((2*i_)*q_tilde_i+q_tilde__))*(*(double *)((2*i_)*q_tilde_i+q_tilde__)));
         (*(double *)((2*i_)*Cq_dot_i+Cq_dot__)   )= I_0_*sin(2.*(*(double *)((2*i_-1+(int)floor((double)(n_q_tilde_)/2.))*q_tilde_i+q_tilde__)))*(*(double *)((2*i_-1)*q_tilde_i+q_tilde__))*(*(double *)((2*i_)*q_tilde_i+q_tilde__));
    }
}}


void main_26f_mom_comp(const int f_mom_l,const int f_mom_h,const ssize_t f_mom_i,char *f_mom__,int n_q_,int n_q_tilde_,double l_b_,const int f_n_l,const int f_n_h,const ssize_t f_n_i,char *f_n__,const int q_tilde_l,const int q_tilde_h,const ssize_t q_tilde_i,char *q_tilde__){{struct freefunc* es=freestack;

     for(int i_=  1 ;i_<= (int)floor((double)(n_q_)/2.);i_+=1){
         (*(double *)((2*i_-1)*f_mom_i+f_mom__) )= l_b_*(cos((*(double *)((2*i_-1+n_q_)*q_tilde_i+q_tilde__)))*cos((*(double *)((2*i_+n_q_)*q_tilde_i+q_tilde__)))*(*(double *)((3*i_-2)*f_n_i+f_n__)) + cos((*(double *)((2*i_-1+n_q_)*q_tilde_i+q_tilde__)))*sin((*(double *)((2*i_+n_q_)*q_tilde_i+q_tilde__)))*(*(double *)((3*i_-1)*f_n_i+f_n__)) - sin((*(double *)((2*i_-1+n_q_)*q_tilde_i+q_tilde__)))*(*(double *)((3*i_)*f_n_i+f_n__)));
         (*(double *)((2*i_)*f_mom_i+f_mom__)   )= l_b_*( - sin((*(double *)((2*i_-1+n_q_)*q_tilde_i+q_tilde__)))*sin((*(double *)((2*i_+n_q_)*q_tilde_i+q_tilde__)))*(*(double *)((3*i_-2)*f_n_i+f_n__)) + sin((*(double *)((2*i_-1+n_q_)*q_tilde_i+q_tilde__)))*cos((*(double *)((2*i_+n_q_)*q_tilde_i+q_tilde__)))*(*(double *)((3*i_-1)*f_n_i+f_n__)));
    }
}}


void main_27P_comp(const int P_mat_l,const int P_mat_h,const ssize_t P_mat_i,char *P_mat__,const int ghost_nodes_l,const int ghost_nodes_h,const ssize_t ghost_nodes_i,const int ghost_nodes__l,const int ghost_nodes__h,const ssize_t ghost_nodes__i,char *ghost_nodes___,int nx_,int nz_,int n_C_,int n_T_,int n_G_){{struct freefunc* es=freestack;

    int ghost_ind_ ;

    int floor_ind_ ;


     ghost_ind_= 0; floor_ind_= 0; for(int j_=  1 ;j_<= nx_;j_+=1){
         for(int i_=  1 ;i_<= nz_;i_+=1){
            int _28ind;
_28ind=i_+(j_-1)*nz_; 

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
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind+1) - 3;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 3;

                 floor_ind_ +=  6;
            };

            if( ((i_ >1 )&&( i_ <nz_ ))&&( j_ == 1 )){
                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*_28ind - 3;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-1) - 1;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind+nz_) - 2;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-1) - 1;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind+1) - 3;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind+nz_) - 2;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*_28ind - 2;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind+1) - 3;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-1) - 1;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind+nz_) - 2;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*_28ind;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind+nz_) - 2;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind+1) - 3;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*_28ind - 1;

                 floor_ind_ +=  6;
            };

            if( (i_ == nz_ )&&( j_ == 1 )){
                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*_28ind - 3;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-1) - 1;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind+nz_) - 2;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-1) - 1;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+nx_+1)*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind+nz_) - 2;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*_28ind - 2;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+nx_+1)*ghost_nodes_i+ghost_nodes___));

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-1) - 1;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind+nz_) - 2;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*_28ind;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind+nz_) - 2;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+nx_+1)*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*_28ind - 1;

                 floor_ind_ +=  6;
            };

            if( ((i_ == 1 )&&( j_ >1 ))&&( j_ <nx_ )){
                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*_28ind - 3;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+j_)*ghost_nodes_i+ghost_nodes___));

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind+nz_) - 2;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+j_)*ghost_nodes_i+ghost_nodes___));

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind+1) - 3;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind+nz_) - 2;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*_28ind - 2;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind+1) - 3;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+j_)*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind+nz_) - 2;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*_28ind;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind+nz_) - 2;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind+1) - 3;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*_28ind - 1;

                 floor_ind_ +=  6;
            };

            if( (((j_ >1 )&&( j_ <nx_ ))&&( i_ >1 ))&&( i_ <nz_ )){
                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-1) - 2;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-1-nz_) - 1;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*_28ind - 3;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*_28ind - 3;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-1-nz_) - 1;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-nz_);

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-1) - 1;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*_28ind - 3;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-nz_);

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-1) - 1;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind+nz_) - 2;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind+1) - 3;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind+nz_) - 2;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*_28ind - 2;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind+1) - 3;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*_28ind;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-1) - 1;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind+nz_) - 2;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind+nz_) - 2;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind+1) - 3;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 4*_28ind - 1;

                 floor_ind_ = 8 + floor_ind_;
            };

            if( ((i_ == nz_ )&&( j_ >1 ))&&( j_ <nx_ )){
                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-1) - 2;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-1-nz_) - 1;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*_28ind - 3;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*_28ind - 3;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-1-nz_) - 1;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-nz_);

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-1) - 1;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*_28ind - 3;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-nz_);

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-1) - 1;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind+nz_) - 2;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+nx_+j_)*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind+nz_) - 2;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*_28ind - 2;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+nx_+j_)*ghost_nodes_i+ghost_nodes___));

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-1) - 1;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind+nz_) - 2;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*_28ind;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind+nz_) - 2;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+nx_+j_)*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 4*_28ind - 1;

                 floor_ind_ = 8 + floor_ind_;
            };

            if( (i_ == 1 )&&( j_ == nx_ )){
                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*_28ind - 3;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+nx_)*ghost_nodes_i+ghost_nodes___));

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+2*nx_+1)*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+nx_)*ghost_nodes_i+ghost_nodes___));

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind+1) - 3;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+2*nx_+1)*ghost_nodes_i+ghost_nodes___));

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*_28ind - 2;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind+1) - 3;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+nx_)*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+2*nx_+1)*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*_28ind;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+2*nx_+1)*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind+1) - 3;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*_28ind - 1;

                 floor_ind_ +=  6;
            };

            if( ((i_ >1 )&&( i_ <nz_ ))&&( j_ == nx_ )){
                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-1) - 2;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-1-nz_) - 1;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*_28ind - 3;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*_28ind - 3;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-1-nz_) - 1;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-nz_);

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-1) - 1;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*_28ind - 3;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-1) - 1;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+2*nx_+i_)*ghost_nodes_i+ghost_nodes___));

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind+1) - 3;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+2*nx_+i_)*ghost_nodes_i+ghost_nodes___));

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*_28ind - 2;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind+1) - 3;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*_28ind;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-1) - 1;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+2*nx_+i_)*ghost_nodes_i+ghost_nodes___));

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind+1) - 3;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 4*_28ind - 1;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+2*nx_+i_)*ghost_nodes_i+ghost_nodes___));

                 floor_ind_ = 8 + floor_ind_;
            };

            if( (i_ == nz_ )&&( j_ == nx_ )){
                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-1) - 2;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-1-nz_) - 1;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(1+floor_ind_)*P_mat_i+P_mat__) )= 4*_28ind - 3;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*_28ind - 3;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-1-nz_) - 1;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(2+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-nz_);

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-1) - 1;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(3+floor_ind_)*P_mat_i+P_mat__) )= 4*_28ind - 3;

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-1) - 1;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(4+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(2*nz_+2*nx_)*ghost_nodes_i+ghost_nodes___));

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+2*nx_)*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(5+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(2*nz_+2*nx_)*ghost_nodes_i+ghost_nodes___));

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-nz_);
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= 4*_28ind - 2;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(6+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+2*nx_)*ghost_nodes_i+ghost_nodes___));

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*_28ind;
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= 4*(_28ind-1) - 1;
                 (*(int *)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+(7+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(2*nz_+2*nx_)*ghost_nodes_i+ghost_nodes___));

                 (*(int *)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= (*(int *)(ghost_nodes__i+(nz_+2*nx_)*ghost_nodes_i+ghost_nodes___));
                 (*(int *)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+(8+floor_ind_)*P_mat_i+P_mat__) )= 4*_28ind - 1;
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


void main_28bar_lambda_comp(const int bar_lambda_mat_l,const int bar_lambda_mat_h,const ssize_t bar_lambda_mat_i,char *bar_lambda_mat__,int n_int_){{struct freefunc* es=freestack;

    int _29h;
ssize_t _30i;
ssize_t _31st;
struct freefunc lambda_mat_f;char *lambda_mat_ ;


    double d_lambda_ ;

    double lambda_1_;
double lambda_2_;
double lambda_3_ ;


    int count_ ;


    char sub_tri_vert_even_[(ssize_t)sizeof(int)*3] ;

    char sub_tri_vert_odd_[(ssize_t)sizeof(int)*3]  ;


    _29h=(int)floor((double)(n_int_*(n_int_+1))/2.);_30i=(ssize_t)sizeof(double)*3*_29h;_31st=(ssize_t)sizeof(double)*3+(ssize_t)sizeof(double);
lambda_mat_=malloc(_30i);if(lambda_mat_==NULL)lambda_mat_=errmalloc();lambda_mat_-=_31st;atblockexit(lambda_mat_f,free,lambda_mat_+_31st);
 memset(_31st+lambda_mat_,0,_30i); d_lambda_= 1.0/(double)((n_int_-1)); lambda_3_= 0.; for(int i_=  0 ;i_<= n_int_-1;i_+=1){
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
            int mtemp32;
if( (mtemp32=j_ ,mtemp32% 2 +((mtemp32>=0)==(2 >=0)?0:2 ))== 0 ){
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


/* Cose in più per evitare doppie inclusioni */


void main_29X_dot_comp(const int X_dot_l,const int X_dot_h,const ssize_t X_dot_i,char *X_dot__,int n_N_dof_,int n_N_,int n_G_,double l_b_,const int q_tilde_l,const int q_tilde_h,const ssize_t q_tilde_i,char *q_tilde__,const int ghost_nodes_l,const int ghost_nodes_h,const ssize_t ghost_nodes_i,const int ghost_nodes__l,const int ghost_nodes__h,const ssize_t ghost_nodes__i,char *ghost_nodes___){{struct freefunc* es=freestack;

     for(int i_=  1 ;i_<= (int)floor((double)((n_N_-n_G_))/2.);i_+=1){
         (*(double *)((3*i_-2)*X_dot_i+X_dot__) )= l_b_*(cos((*(double *)((2*i_-1+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*cos((*(double *)((2*i_+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*(*(double *)((2*i_-1)*q_tilde_i+q_tilde__))-sin((*(double *)((2*i_-1+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*sin((*(double *)((2*i_+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*(*(double *)((2*i_)*q_tilde_i+q_tilde__)));
         (*(double *)((3*i_-1)*X_dot_i+X_dot__) )= l_b_*(cos((*(double *)((2*i_-1+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*sin((*(double *)((2*i_+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*(*(double *)((2*i_-1)*q_tilde_i+q_tilde__))+sin((*(double *)((2*i_-1+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*cos((*(double *)((2*i_+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*(*(double *)((2*i_)*q_tilde_i+q_tilde__)));
         (*(double *)((3*i_)*X_dot_i+X_dot__)   )=  - l_b_*sin((*(double *)((2*i_-1+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*(*(double *)((2*i_-1)*q_tilde_i+q_tilde__));
    }

     for(int i_=  1 ;i_<= n_G_;i_+=1){
        int _30ghost_ind;
int _31parent_ind;
_30ghost_ind=(*(int*)(ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___)); 
        _31parent_ind=(*(int*)(2*ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___)); 

         (*(double *)((3*_30ghost_ind-2)*X_dot_i+X_dot__) )= (*(double *)((3*_31parent_ind-2)*X_dot_i+X_dot__));
         (*(double *)((3*_30ghost_ind-1)*X_dot_i+X_dot__) )= (*(double *)((3*_31parent_ind-1)*X_dot_i+X_dot__));
         (*(double *)((3*_30ghost_ind)*X_dot_i+X_dot__)   )= (*(double *)((3*_31parent_ind)*X_dot_i+X_dot__));
    }
}}

void main_30X_comp(const int X_l,const int X_h,const ssize_t X_i,char *X__,int n_N_dof_,int n_N_,int n_G_,int nx_,int nz_,double l_per_,double l_b_,const int q_tilde_l,const int q_tilde_h,const ssize_t q_tilde_i,char *q_tilde__,const int X_0_l,const int X_0_h,const ssize_t X_0_i,char *X_0__,const int ghost_nodes_l,const int ghost_nodes_h,const ssize_t ghost_nodes_i,const int ghost_nodes__l,const int ghost_nodes__h,const ssize_t ghost_nodes__i,char *ghost_nodes___){{struct freefunc* es=freestack;

    {char *_32_;

_32_=X_l*X_0_i+X_0__; {char *_31_=X_l*X_i+X__;int _31_1=X_h-X_l; do{{ (*(double *)(_31_))=(*(double *)(_32_)); _32_ =X_0_i+_32_;}_31_+=X_i;_31_1--;}while(_31_1>=0);}} 

     for(int i_=  1 ;i_<= (int)floor((double)((n_N_-n_G_))/2.);i_+=1){
         (*(double *)((3*i_-2)*X_i+X__) )= (*(double *)((3*i_-2+3*(int)floor((double)((n_N_-n_G_))/2.))*X_0_i+X_0__)) + l_b_*sin((*(double *)((2*i_-1+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*cos((*(double *)((2*i_+(n_N_-n_G_))*q_tilde_i+q_tilde__)));
         (*(double *)((3*i_-1)*X_i+X__) )= (*(double *)((3*i_-1+3*(int)floor((double)((n_N_-n_G_))/2.))*X_0_i+X_0__)) + l_b_*sin((*(double *)((2*i_-1+(n_N_-n_G_))*q_tilde_i+q_tilde__)))*sin((*(double *)((2*i_+(n_N_-n_G_))*q_tilde_i+q_tilde__)));
         (*(double *)((3*i_)*X_i+X__)   )= (*(double *)((3*i_+3*(int)floor((double)((n_N_-n_G_))/2.))*X_0_i+X_0__)) + l_b_*cos((*(double *)((2*i_-1+(n_N_-n_G_))*q_tilde_i+q_tilde__)));
    }

     for(int i_=  1 ;i_<= n_G_;i_+=1){
        int _33ghost_ind;
int _34parent_ind;
int _35per_dir;
_33ghost_ind=(*(int*)(ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___)); 
        _34parent_ind=(*(int*)(2*ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___)); 
        _35per_dir=(*(int*)(3*ghost_nodes__i+i_*ghost_nodes_i+ghost_nodes___)); 

        if( _35per_dir == 1 ){
             (*(double *)((3*_33ghost_ind-2)*X_i+X__) )= (*(double *)((3*_34parent_ind-2)*X_i+X__) )- (double)(nx_)*l_per_;
             (*(double *)((3*_33ghost_ind-1)*X_i+X__) )= (*(double *)((3*_34parent_ind-1)*X_i+X__) );
             (*(double *)((3*_33ghost_ind)*X_i+X__)   )= (*(double *)((3*_34parent_ind)*X_i+X__));
        }else{ if( _35per_dir == 2 ){
             (*(double *)((3*_33ghost_ind-2)*X_i+X__) )= (*(double *)((3*_34parent_ind-2)*X_i+X__) );
             (*(double *)((3*_33ghost_ind-1)*X_i+X__) )= (*(double *)((3*_34parent_ind-1)*X_i+X__));
             (*(double *)((3*_33ghost_ind)*X_i+X__)   )= (*(double *)((3*_34parent_ind)*X_i+X__)   )- (double)(nz_)*l_per_;
        }else{ if( _35per_dir == 3 ){
             (*(double *)((3*_33ghost_ind-2)*X_i+X__) )= (*(double *)((3*_34parent_ind-2)*X_i+X__) );
             (*(double *)((3*_33ghost_ind-1)*X_i+X__) )= (*(double *)((3*_34parent_ind-1)*X_i+X__));
             (*(double *)((3*_33ghost_ind)*X_i+X__)   )= (*(double *)((3*_34parent_ind)*X_i+X__)   )+ (double)(nz_)*l_per_;
        }else{ if( _35per_dir == 4 ){
             (*(double *)((3*_33ghost_ind-2)*X_i+X__) )= (*(double *)((3*_34parent_ind-2)*X_i+X__) )+ (double)(nx_)*l_per_;
             (*(double *)((3*_33ghost_ind-1)*X_i+X__) )= (*(double *)((3*_34parent_ind-1)*X_i+X__) );
             (*(double *)((3*_33ghost_ind)*X_i+X__)   )= (*(double *)((3*_34parent_ind)*X_i+X__));
        };};};};
    }
}}void main_31K_i_compute(const int K_i_l,const int K_i_h,const ssize_t K_i_i,char *K_i__,int n_q_tilde_,int n_T_dof_,double t_,int n_N_dof_,int n_N_,int n_G_,int n_T_,int n_B_,int n_P_,int nx_,int nz_,int n_int_,double l_per_,double l_b_,double sigma_,double k_,double I_0_,const int q_tilde_l,const int q_tilde_h,const ssize_t q_tilde_i,char *q_tilde__,const int X_0_l,const int X_0_h,const ssize_t X_0_i,char *X_0__,const int l_0_l,const int l_0_h,const ssize_t l_0_i,char *l_0__,const int T_con_l,const int T_con_h,const ssize_t T_con_i,const int T_con__l,const int T_con__h,const ssize_t T_con__i,char *T_con___,const int ghost_nodes_l,const int ghost_nodes_h,const ssize_t ghost_nodes_i,const int ghost_nodes__l,const int ghost_nodes__h,const ssize_t ghost_nodes__i,char *ghost_nodes___,const int P_mat_l,const int P_mat_h,const ssize_t P_mat_i,const int P_mat__l,const int P_mat__h,const ssize_t P_mat__i,const int P_mat___l,const int P_mat___h,const ssize_t P_mat___i,char *P_mat____,const int bar_lambda_mat_l,const int bar_lambda_mat_h,const ssize_t bar_lambda_mat_i,const int bar_lambda_mat__l,const int bar_lambda_mat__h,const ssize_t bar_lambda_mat__i,char *bar_lambda_mat___){{struct freefunc* es=freestack;
    int _32h;
ssize_t _33i;
struct freefunc Cq_dot_f;char *Cq_dot_;

    int _34h;
ssize_t _35i;
struct freefunc f_ext_f;char *f_ext_ ;

    int _36h;
ssize_t _37i;
struct freefunc f_mom_f;char *f_mom_;


     int _38h;
ssize_t _39i;
struct freefunc f_n_f;char *f_n_ ;

    /*LOOP FOR i = 1 TO 3*n_B
        f_n(i) = 0
    REPEAT*/
    
    ssize_t _40st;
_32h=2*n_B_;_33i=(ssize_t)sizeof(double)*_32h;
Cq_dot_=malloc(_33i);if(Cq_dot_==NULL)Cq_dot_=errmalloc();Cq_dot_-=(ssize_t)sizeof(double);atblockexit(Cq_dot_f,free,Cq_dot_+(ssize_t)sizeof(double));
_34h=3*n_B_;_35i=(ssize_t)sizeof(double)*_34h;
f_ext_=malloc(_35i);if(f_ext_==NULL)f_ext_=errmalloc();f_ext_-=(ssize_t)sizeof(double);atblockexit(f_ext_f,free,f_ext_+(ssize_t)sizeof(double));
 memset((ssize_t)sizeof(double)+f_ext_,0,_35i);_36h=2*n_B_;_37i=(ssize_t)sizeof(double)*_36h;
f_mom_=malloc(_37i);if(f_mom_==NULL)f_mom_=errmalloc();f_mom_-=(ssize_t)sizeof(double);atblockexit(f_mom_f,free,f_mom_+(ssize_t)sizeof(double));
 for(int i_=  1 ;i_<= n_B_;i_+=1){
     (*(double *)((3*i_-2)*(ssize_t)sizeof(double)+f_ext_) )= 0.;
     (*(double *)((3*i_-1)*(ssize_t)sizeof(double)+f_ext_) )= 0.;
     (*(double *)((3*i_)*(ssize_t)sizeof(double)+f_ext_)   )= 0.;
  }

    _38h=3*n_B_;_39i=(ssize_t)sizeof(double)*_38h;
f_n_=malloc(_39i);if(f_n_==NULL)f_n_=errmalloc();f_n_-=(ssize_t)sizeof(double);atblockexit(f_n_f,free,f_n_+(ssize_t)sizeof(double));
 memset((ssize_t)sizeof(double)+f_n_,0,_39i);main_24f_n_comp(1,_38h,(ssize_t)sizeof(double),f_n_ ,n_N_dof_ ,n_N_ ,n_T_ ,n_G_ ,nx_ ,nz_ ,l_per_ ,l_b_ ,k_ ,sigma_ ,q_tilde_l,q_tilde_h,q_tilde_i,q_tilde__ ,X_0_l,X_0_h,X_0_i,X_0__ ,l_0_l,l_0_h,l_0_i,l_0__ ,T_con_l,T_con_h,T_con_i,T_con__l,T_con__h,T_con__i,T_con___ ,ghost_nodes_l,ghost_nodes_h,ghost_nodes_i,ghost_nodes__l,ghost_nodes__h,ghost_nodes__i,ghost_nodes___);

    /*f_ext_sub(f_ext, n_B, t) */
    /*f_ext_sub_wave(f_ext, q_tilde, n_B, t, n_N_dof, n_G, nx, nz, n_N, l_per, l_b, X_0, ghost_nodes) */
    
    _40st=bar_lambda_mat__l*bar_lambda_mat__i;main_19f_ext_sub(1,_34h,(ssize_t)sizeof(double),f_ext_ ,n_B_ ,n_P_ ,n_N_ ,n_N_dof_ ,n_G_ ,nx_ ,nz_ ,n_int_ ,t_ ,l_per_ ,l_b_ ,X_0_l,X_0_h,X_0_i,X_0__ ,q_tilde_l,q_tilde_h,q_tilde_i,q_tilde__ ,ghost_nodes_l,ghost_nodes_h,ghost_nodes_i,ghost_nodes__l,ghost_nodes__h,ghost_nodes__i,ghost_nodes___ ,bar_lambda_mat_l,bar_lambda_mat_h,bar_lambda_mat_i,bar_lambda_mat___+_40st-((ssize_t)sizeof(double)) ,P_mat_l,P_mat_h,P_mat_i,P_mat__l,P_mat__h,P_mat__i,P_mat___l,P_mat___h,P_mat___i,P_mat____);
    /*WRITE f_ext(3*32) */

     for(int i_=  1 ;i_<= 3*n_B_;i_+=1){
         (*(double *)(i_*(ssize_t)sizeof(double)+f_n_) )+=  (*(double *)(i_*(ssize_t)sizeof(double)+f_ext_));
    }
    
    main_26f_mom_comp(1,_36h,(ssize_t)sizeof(double),f_mom_ ,2*n_B_ ,n_q_tilde_ ,l_b_ ,1,_38h,(ssize_t)sizeof(double),f_n_ ,q_tilde_l,q_tilde_h,q_tilde_i,q_tilde__);

    main_25Cq_dot_compute(1,_32h,(ssize_t)sizeof(double),Cq_dot_ ,n_q_tilde_ ,n_B_ ,I_0_ ,q_tilde_l,q_tilde_h,q_tilde_i,q_tilde__);

     for(int i_=  1 ;i_<= n_B_;i_+=1){
         (*(double *)((2*i_-1)*K_i_i+K_i__) )= ((*(double *)((2*i_-1)*(ssize_t)sizeof(double)+f_mom_) )- (*(double *)((2*i_-1)*(ssize_t)sizeof(double)+Cq_dot_)))/I_0_;
         (*(double *)((2*i_)*K_i_i+K_i__)   )= ((*(double *)((2*i_)*(ssize_t)sizeof(double)+f_mom_) )- (*(double *)((2*i_)*(ssize_t)sizeof(double)+Cq_dot_)))/(I_0_*(sin((*(double *)((2*i_-1+2*n_B_)*q_tilde_i+q_tilde__)))*sin((*(double *)((2*i_-1+2*n_B_)*q_tilde_i+q_tilde__)))))    ;
    }

     for(int i_=  1 ;i_<= n_B_;i_+=1){
         (*(double *)((2*i_-1+2*n_B_)*K_i_i+K_i__) )= (*(double *)((2*i_-1)*q_tilde_i+q_tilde__));
         (*(double *)((2*i_+2*n_B_)*K_i_i+K_i__)   )= (*(double *)((2*i_)*q_tilde_i+q_tilde__));
    }
free(f_n_f.ptr);free(f_mom_f.ptr);free(f_ext_f.ptr);free(Cq_dot_f.ptr);freestack=es;}}void main_32simulate(const int t_vec_l,const int t_vec_h,const ssize_t t_vec_i,char *t_vec__,const int q_tilde_arr_l,const int q_tilde_arr_h,const ssize_t q_tilde_arr_i,const int q_tilde_arr__l,const int q_tilde_arr__h,const ssize_t q_tilde_arr__i,char *q_tilde_arr___,int n_t_,int n_q_tilde_,double dt_,int n_T_,int n_B_,int n_P_,int n_N_,int n_N_dof_,int n_T_dof_,int n_G_,int nx_,int nz_,int n_int_,const int q_0_tilde_l,const int q_0_tilde_h,const ssize_t q_0_tilde_i,char *q_0_tilde__,const int X_0_l,const int X_0_h,const ssize_t X_0_i,char *X_0__,double I_0_,double l_b_,double l_per_,double sigma_,double k_,const int T_con_l,const int T_con_h,const ssize_t T_con_i,const int T_con__l,const int T_con__h,const ssize_t T_con__i,char *T_con___,const int ghost_nodes_l,const int ghost_nodes_h,const ssize_t ghost_nodes_i,const int ghost_nodes__l,const int ghost_nodes__h,const ssize_t ghost_nodes__i,char *ghost_nodes___,const int l_0_l,const int l_0_h,const ssize_t l_0_i,char *l_0__,const int P_mat_l,const int P_mat_h,const ssize_t P_mat_i,const int P_mat__l,const int P_mat__h,const ssize_t P_mat__i,const int P_mat___l,const int P_mat___h,const ssize_t P_mat___i,char *P_mat____,const int bar_lambda_mat_l,const int bar_lambda_mat_h,const ssize_t bar_lambda_mat_i,const int bar_lambda_mat__l,const int bar_lambda_mat__h,const ssize_t bar_lambda_mat__i,char *bar_lambda_mat___){{struct freefunc* es=freestack;

    ssize_t _33i;
struct freefunc K_1_f;char *K_1_ ;
struct freefunc K_2_f;char *K_2_ ;
struct freefunc K_3_f;char *K_3_ ;

    struct freefunc q_tilde_i_f;char *q_tilde_i_ ;
struct freefunc q_tilde_i_temp_f;char *q_tilde_i_temp_ ;

    double t_i_ ;

    
    _33i=(ssize_t)sizeof(double)*n_q_tilde_;
K_1_=malloc(_33i);if(K_1_==NULL)K_1_=errmalloc();K_1_-=(ssize_t)sizeof(double);atblockexit(K_1_f,free,K_1_+(ssize_t)sizeof(double));
 memset((ssize_t)sizeof(double)+K_1_,0,_33i);
K_2_=malloc(_33i);if(K_2_==NULL)K_2_=errmalloc();K_2_-=(ssize_t)sizeof(double);atblockexit(K_2_f,free,K_2_+(ssize_t)sizeof(double));
 memset((ssize_t)sizeof(double)+K_2_,0,_33i);
K_3_=malloc(_33i);if(K_3_==NULL)K_3_=errmalloc();K_3_-=(ssize_t)sizeof(double);atblockexit(K_3_f,free,K_3_+(ssize_t)sizeof(double));
 memset((ssize_t)sizeof(double)+K_3_,0,_33i);
q_tilde_i_=malloc(_33i);if(q_tilde_i_==NULL)q_tilde_i_=errmalloc();q_tilde_i_-=(ssize_t)sizeof(double);atblockexit(q_tilde_i_f,free,q_tilde_i_+(ssize_t)sizeof(double));
 memset((ssize_t)sizeof(double)+q_tilde_i_,0,_33i);
q_tilde_i_temp_=malloc(_33i);if(q_tilde_i_temp_==NULL)q_tilde_i_temp_=errmalloc();q_tilde_i_temp_-=(ssize_t)sizeof(double);atblockexit(q_tilde_i_temp_f,free,q_tilde_i_temp_+(ssize_t)sizeof(double));
 memset((ssize_t)sizeof(double)+q_tilde_i_temp_,0,_33i);{char *_35_;

_35_=q_0_tilde_i+q_0_tilde__; {char *_34_=(ssize_t)sizeof(double)+q_tilde_i_;int _34_1=n_q_tilde_-1; do{{ (*(double *)(_34_))=(*(double *)(_35_)); _35_ =q_0_tilde_i+_35_;}_34_+=(ssize_t)sizeof(double);_34_1--;}while(_34_1>=0);}} 

     for(int i_=  1 ;i_<= n_q_tilde_;i_+=1){
             (*(double *)(q_tilde_arr__i+i_*q_tilde_arr_i+q_tilde_arr___) )= (*(double *)(i_*(ssize_t)sizeof(double)+q_tilde_i_));
    }
    
     for(int i_=  1 ;i_<= n_t_-1;i_+=1){
         t_i_ = (*(double *)(i_*t_vec_i+t_vec__));
        
         memmove((ssize_t)sizeof(double)+q_tilde_i_temp_,(ssize_t)sizeof(double)+q_tilde_i_,_33i);
        
        main_31K_i_compute(1,n_q_tilde_,(ssize_t)sizeof(double),K_1_ ,n_q_tilde_ ,n_T_dof_ ,t_i_ ,n_N_dof_ ,n_N_ ,n_G_ ,n_T_ ,n_B_ ,n_P_ ,nx_ ,nz_ ,n_int_ ,l_per_ ,l_b_ ,sigma_ ,k_ ,I_0_ ,1,n_q_tilde_,(ssize_t)sizeof(double),q_tilde_i_temp_ ,X_0_l,X_0_h,X_0_i,X_0__ ,l_0_l,l_0_h,l_0_i,l_0__ ,T_con_l,T_con_h,T_con_i,T_con__l,T_con__h,T_con__i,T_con___ ,ghost_nodes_l,ghost_nodes_h,ghost_nodes_i,ghost_nodes__l,ghost_nodes__h,ghost_nodes__i,ghost_nodes___ ,P_mat_l,P_mat_h,P_mat_i,P_mat__l,P_mat__h,P_mat__i,P_mat___l,P_mat___h,P_mat___i,P_mat____ ,bar_lambda_mat_l,bar_lambda_mat_h,bar_lambda_mat_i,bar_lambda_mat__l,bar_lambda_mat__h,bar_lambda_mat__i,bar_lambda_mat___);

         for(int j_=  1 ;j_<= n_q_tilde_;j_+=1){
             (*(double *)(j_*(ssize_t)sizeof(double)+q_tilde_i_temp_) )+=  dt_/2.*(*(double *)(j_*(ssize_t)sizeof(double)+K_1_));
        }
        main_31K_i_compute(1,n_q_tilde_,(ssize_t)sizeof(double),K_2_ ,n_q_tilde_ ,n_T_dof_ ,t_i_ + 0.5*dt_ ,n_N_dof_ ,n_N_ ,n_G_ ,n_T_ ,n_B_ ,n_P_ ,nx_ ,nz_ ,n_int_ ,l_per_ ,l_b_ ,sigma_ ,k_ ,I_0_ ,1,n_q_tilde_,(ssize_t)sizeof(double),q_tilde_i_temp_ ,X_0_l,X_0_h,X_0_i,X_0__ ,l_0_l,l_0_h,l_0_i,l_0__ ,T_con_l,T_con_h,T_con_i,T_con__l,T_con__h,T_con__i,T_con___ ,ghost_nodes_l,ghost_nodes_h,ghost_nodes_i,ghost_nodes__l,ghost_nodes__h,ghost_nodes__i,ghost_nodes___ ,P_mat_l,P_mat_h,P_mat_i,P_mat__l,P_mat__h,P_mat__i,P_mat___l,P_mat___h,P_mat___i,P_mat____ ,bar_lambda_mat_l,bar_lambda_mat_h,bar_lambda_mat_i,bar_lambda_mat__l,bar_lambda_mat__h,bar_lambda_mat__i,bar_lambda_mat___);

         for(int j_=  1 ;j_<= n_q_tilde_;j_+=1){
             (*(double *)(j_*(ssize_t)sizeof(double)+q_tilde_i_temp_) )= (*(double *)(j_*(ssize_t)sizeof(double)+q_tilde_i_temp_) )- dt_*(*(double *)(j_*(ssize_t)sizeof(double)+K_1_) )+ 2.*dt_*(*(double *)(j_*(ssize_t)sizeof(double)+K_2_));
        }
        main_31K_i_compute(1,n_q_tilde_,(ssize_t)sizeof(double),K_3_ ,n_q_tilde_ ,n_T_dof_ ,t_i_ + dt_ ,n_N_dof_ ,n_N_ ,n_G_ ,n_T_ ,n_B_ ,n_P_ ,nx_ ,nz_ ,n_int_ ,l_per_ ,l_b_ ,sigma_ ,k_ ,I_0_ ,1,n_q_tilde_,(ssize_t)sizeof(double),q_tilde_i_temp_ ,X_0_l,X_0_h,X_0_i,X_0__ ,l_0_l,l_0_h,l_0_i,l_0__ ,T_con_l,T_con_h,T_con_i,T_con__l,T_con__h,T_con__i,T_con___ ,ghost_nodes_l,ghost_nodes_h,ghost_nodes_i,ghost_nodes__l,ghost_nodes__h,ghost_nodes__i,ghost_nodes___ ,P_mat_l,P_mat_h,P_mat_i,P_mat__l,P_mat__h,P_mat__i,P_mat___l,P_mat___h,P_mat___i,P_mat____ ,bar_lambda_mat_l,bar_lambda_mat_h,bar_lambda_mat_i,bar_lambda_mat__l,bar_lambda_mat__h,bar_lambda_mat__i,bar_lambda_mat___);

         for(int j_=  1 ;j_<= n_q_tilde_;j_+=1){
             (*(double *)(j_*(ssize_t)sizeof(double)+q_tilde_i_) )+=  dt_*(1./6.*(*(double *)(j_*(ssize_t)sizeof(double)+K_1_) )+ 2./3.*(*(double *)(j_*(ssize_t)sizeof(double)+K_2_) )+ 1./6.*(*(double *)(j_*(ssize_t)sizeof(double)+K_3_))) ;
        }

         for(int j_=  1 ;j_<= n_q_tilde_;j_+=1){
             (*(double *)((i_+1)*q_tilde_arr__i+j_*q_tilde_arr_i+q_tilde_arr___) )= (*(double *)(j_*(ssize_t)sizeof(double)+q_tilde_i_));
        }
        
         (*(double *)((i_+1)*t_vec_i+t_vec__) )= t_i_ + dt_;
    }
free(q_tilde_i_temp_f.ptr);free(q_tilde_i_f.ptr);free(K_3_f.ptr);free(K_2_f.ptr);free(K_1_f.ptr);freestack=es;}}
void main_33mat_to_csv_real(const int arr_l,const int arr_h,const ssize_t arr_i,const int arr__l,const int arr__h,const ssize_t arr__i,char *arr___,char *file_name_){{struct freefunc* es=freestack;

    FILE *_34output;
_34output=NULL;errfopen(&_34output,file_name_,O_RDWR|O_CREAT|O_TRUNC); 

     for(int i_=  arr_l ;i_<= arr_h;i_+=1){
         for(int j_=  arr__l ;j_<= arr__h;j_+=1){
             fprintf( _34output ,"%g",(*(double *)(j_*arr__i+i_*arr_i+arr___)) );
            if( j_ == arr__h ){
                 putc('\n', _34output);
            }else{
                 fprintf( _34output ,""", " "");
            };
        }
    }
}}


void main_34vec_to_csv_real(const int arr_l,const int arr_h,const ssize_t arr_i,char *arr__,char *file_name_){{struct freefunc* es=freestack;

    FILE *_35output;
_35output=NULL;errfopen(&_35output,file_name_,O_RDWR|O_CREAT|O_TRUNC); 

     for(int i_=  arr_l ;i_<= arr_h;i_+=1){
         fprintf( _35output ,"%g",(*(double *)(i_*arr_i+arr__)) );
         putc('\n', _35output);
    }
}}


void main_35mat_to_csv_int(const int arr_l,const int arr_h,const ssize_t arr_i,const int arr__l,const int arr__h,const ssize_t arr__i,char *arr___,char *file_name_){{struct freefunc* es=freestack;

    FILE *_36output;
_36output=NULL;errfopen(&_36output,file_name_,O_RDWR|O_CREAT|O_TRUNC); 

     for(int i_=  arr_l ;i_<= arr_h;i_+=1){
         for(int j_=  arr__l ;j_<= arr__h;j_+=1){
             fprintf( _36output ,"%d",(*(int *)(j_*arr__i+i_*arr_i+arr___)) );
            if( j_ == arr__h ){
                 putc('\n', _36output);
            }else{
                 fprintf( _36output ,""", " "");
            };
        }
    }
}}


void main_36vec_to_csv_int(const int arr_l,const int arr_h,const ssize_t arr_i,char *arr__,char *file_name_){{struct freefunc* es=freestack;

    FILE *_37output;
_37output=NULL;errfopen(&_37output,file_name_,O_RDWR|O_CREAT|O_TRUNC); 

     for(int i_=  arr_l ;i_<= arr_h;i_+=1){
         fprintf( _37output ,"%d",(*(int *)(i_*arr_i+arr__)) );
         putc('\n', _37output);
    }
}}void main_37bar_coord_2D(char *RESULT_,char *position_,char *vert_pos_){{struct freefunc* es=freestack;
    char bar_weights_[(ssize_t)sizeof(double)*3];


    double det_T_ ;

     det_T_= ((*(double *)((ssize_t)sizeof(double)+(ssize_t)sizeof(double)*3+vert_pos_))-(*(double *)(3*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*3+vert_pos_)))*((*(double *)(2*(ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*3+vert_pos_))-(*(double *)(3*(ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*3+vert_pos_))) - ((*(double *)((ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*3+vert_pos_))-(*(double *)(3*(ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*3+vert_pos_)))*((*(double *)(2*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*3+vert_pos_))-(*(double *)(3*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*3+vert_pos_))); (*(double *)((ssize_t)sizeof(double)+bar_weights_-((ssize_t)sizeof(double))) )= (((*(double *)(2*(ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*3+vert_pos_))-(*(double *)(3*(ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*3+vert_pos_)))*((*(double *)((ssize_t)sizeof(double)+position_))-(*(double *)(3*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*3+vert_pos_))) + ((*(double *)(3*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*3+vert_pos_))-(*(double *)(2*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*3+vert_pos_)))*((*(double *)(2*(ssize_t)sizeof(double)+position_))-(*(double *)(3*(ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*3+vert_pos_)))) / det_T_;
     (*(double *)(2*(ssize_t)sizeof(double)+bar_weights_-((ssize_t)sizeof(double))) )= (((*(double *)(3*(ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*3+vert_pos_))-(*(double *)((ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*3+vert_pos_)))*((*(double *)((ssize_t)sizeof(double)+position_))-(*(double *)(3*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*3+vert_pos_))) + ((*(double *)((ssize_t)sizeof(double)+(ssize_t)sizeof(double)*3+vert_pos_))-(*(double *)(3*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*3+vert_pos_)))*((*(double *)(2*(ssize_t)sizeof(double)+position_))-(*(double *)(3*(ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*3+vert_pos_)))) / det_T_;
     (*(double *)(3*(ssize_t)sizeof(double)+bar_weights_-((ssize_t)sizeof(double))) )= 1.- (*(double *)((ssize_t)sizeof(double)+bar_weights_-((ssize_t)sizeof(double))) )- (*(double *)(2*(ssize_t)sizeof(double)+bar_weights_-((ssize_t)sizeof(double))));

     memmove((ssize_t)sizeof(double)+RESULT_,(ssize_t)sizeof(double)+bar_weights_-((ssize_t)sizeof(double)),(ssize_t)sizeof(double)*3);return;
}}void main_38grid_comp_2D(const int grid_points_2D_l,const int grid_points_2D_h,const ssize_t grid_points_2D_i,const int grid_points_2D__l,const int grid_points_2D__h,const ssize_t grid_points_2D__i,char *grid_points_2D___,const int grid_pan_l,const int grid_pan_h,const ssize_t grid_pan_i,const int grid_pan__l,const int grid_pan__h,const ssize_t grid_pan__i,char *grid_pan___,const int P_mat_l,const int P_mat_h,const ssize_t P_mat_i,char *P_mat__,const int X_0_l,const int X_0_h,const ssize_t X_0_i,char *X_0__,int nx_f_,int ny_f_,int nz_f_,int n_pan_,double Lx_,double Ly_,double Lz_){{struct freefunc* es=freestack;

    double dx_;
double dy_;
double dz_;

    char bar_weights_[(ssize_t)sizeof(double)*3] ;

    char vert_pos_[(ssize_t)sizeof(double)*3*2] ;
ssize_t _39st;

    char position_[(ssize_t)sizeof(double)*2] ;

    int pan_ind_ ;


     dx_ = Lx_ / (double)((nx_f_-1));
     dz_ = Lz_ / (double)((nz_f_-1));

     memset((ssize_t)sizeof(double)+bar_weights_-((ssize_t)sizeof(double)),0,(ssize_t)sizeof(double)*3);_39st=(ssize_t)sizeof(double)*3+(ssize_t)sizeof(double); memset(_39st+vert_pos_-((ssize_t)sizeof(double)*3+(ssize_t)sizeof(double)),0,(ssize_t)sizeof(double)*3*2); memset((ssize_t)sizeof(double)+position_-((ssize_t)sizeof(double)),0,(ssize_t)sizeof(double)*2); pan_ind_= 0; for(int i_=  1 ;i_<= nx_f_;i_+=1){
         for(int j_=  1 ;j_<= nz_f_;j_+=1){
             (*(double *)((ssize_t)sizeof(double)+j_*grid_points_2D__i+i_*grid_points_2D_i+grid_points_2D___) )= (double)((j_-1))*dz_;
             (*(double *)(2*(ssize_t)sizeof(double)+j_*grid_points_2D__i+i_*grid_points_2D_i+grid_points_2D___) )= (double)((i_-1))*dx_;

             (*(double *)((ssize_t)sizeof(double)+position_-((ssize_t)sizeof(double))))=(*(double *)((ssize_t)sizeof(double)+j_*grid_points_2D__i+i_*grid_points_2D_i+grid_points_2D___));(*(double *)((1+1)*(ssize_t)sizeof(double)+position_-((ssize_t)sizeof(double))))=(*(double *)(2*(ssize_t)sizeof(double)+j_*grid_points_2D__i+i_*grid_points_2D_i+grid_points_2D___));

             (*(double *)((ssize_t)sizeof(double)+bar_weights_-((ssize_t)sizeof(double))) )= -1.;
             pan_ind_ = 0;

            while( (((((*(double *)((ssize_t)sizeof(double)+bar_weights_-((ssize_t)sizeof(double))) )<0.)||( (*(double *)(2*(ssize_t)sizeof(double)+bar_weights_-((ssize_t)sizeof(double))) )<0.))||( (*(double *)(3*(ssize_t)sizeof(double)+bar_weights_-((ssize_t)sizeof(double))) )<0.)) )&&( pan_ind_ <n_pan_)){
                 pan_ind_ +=  1;

                 (*(double *)((ssize_t)sizeof(double)+(ssize_t)sizeof(double)*3+vert_pos_-((ssize_t)sizeof(double)*3+(ssize_t)sizeof(double))) )= (*(double *)((3*(*(int*)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+pan_ind_*P_mat_i+P_mat__)))*X_0_i+X_0__));
                 (*(double *)((ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*3+vert_pos_-((ssize_t)sizeof(double)*3+(ssize_t)sizeof(double))) )= (*(double *)((3*(*(int*)((ssize_t)sizeof(int)+(ssize_t)sizeof(int)*2+pan_ind_*P_mat_i+P_mat__))-2)*X_0_i+X_0__));
                 (*(double *)(2*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*3+vert_pos_-((ssize_t)sizeof(double)*3+(ssize_t)sizeof(double))) )= (*(double *)((3*(*(int*)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+pan_ind_*P_mat_i+P_mat__)))*X_0_i+X_0__));
                 (*(double *)(2*(ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*3+vert_pos_-((ssize_t)sizeof(double)*3+(ssize_t)sizeof(double))) )= (*(double *)((3*(*(int*)((ssize_t)sizeof(int)+2*(ssize_t)sizeof(int)*2+pan_ind_*P_mat_i+P_mat__))-2)*X_0_i+X_0__));
                 (*(double *)(3*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*3+vert_pos_-((ssize_t)sizeof(double)*3+(ssize_t)sizeof(double))) )= (*(double *)((3*(*(int*)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+pan_ind_*P_mat_i+P_mat__)))*X_0_i+X_0__));
                 (*(double *)(3*(ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*3+vert_pos_-((ssize_t)sizeof(double)*3+(ssize_t)sizeof(double))) )= (*(double *)((3*(*(int*)((ssize_t)sizeof(int)+3*(ssize_t)sizeof(int)*2+pan_ind_*P_mat_i+P_mat__))-2)*X_0_i+X_0__));
                
                 for(int m_=  1 ;m_<= 3;m_+=1){
                    if( (((*(int *)(2*(ssize_t)sizeof(int)+m_*(ssize_t)sizeof(int)*2+pan_ind_*P_mat_i+P_mat__)) == 1 )||( (*(int *)(2*(ssize_t)sizeof(int)+m_*(ssize_t)sizeof(int)*2+pan_ind_*P_mat_i+P_mat__)) == 3 ))||( (*(int *)(2*(ssize_t)sizeof(int)+m_*(ssize_t)sizeof(int)*2+pan_ind_*P_mat_i+P_mat__)) == 4 )){
                         (*(double *)(m_*(ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*3+vert_pos_-((ssize_t)sizeof(double)*3+(ssize_t)sizeof(double))) )-=  Lx_;
                    };
                    if( (((*(int *)(2*(ssize_t)sizeof(int)+m_*(ssize_t)sizeof(int)*2+pan_ind_*P_mat_i+P_mat__)) == 6 )||( (*(int *)(2*(ssize_t)sizeof(int)+m_*(ssize_t)sizeof(int)*2+pan_ind_*P_mat_i+P_mat__)) == 7 ))||( (*(int *)(2*(ssize_t)sizeof(int)+m_*(ssize_t)sizeof(int)*2+pan_ind_*P_mat_i+P_mat__)) == 8 )){
                         (*(double *)(m_*(ssize_t)sizeof(double)+2*(ssize_t)sizeof(double)*3+vert_pos_-((ssize_t)sizeof(double)*3+(ssize_t)sizeof(double))) )+=  Lx_;
                    };
                    if( (((*(int *)(2*(ssize_t)sizeof(int)+m_*(ssize_t)sizeof(int)*2+pan_ind_*P_mat_i+P_mat__)) == 1 )||( (*(int *)(2*(ssize_t)sizeof(int)+m_*(ssize_t)sizeof(int)*2+pan_ind_*P_mat_i+P_mat__)) == 2 ))||( (*(int *)(2*(ssize_t)sizeof(int)+m_*(ssize_t)sizeof(int)*2+pan_ind_*P_mat_i+P_mat__)) == 6 )){
                         (*(double *)(m_*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*3+vert_pos_-((ssize_t)sizeof(double)*3+(ssize_t)sizeof(double))) )-=  Lz_;
                    };
                    if( (((*(int *)(2*(ssize_t)sizeof(int)+m_*(ssize_t)sizeof(int)*2+pan_ind_*P_mat_i+P_mat__)) == 4 )||( (*(int *)(2*(ssize_t)sizeof(int)+m_*(ssize_t)sizeof(int)*2+pan_ind_*P_mat_i+P_mat__)) == 5 ))||( (*(int *)(2*(ssize_t)sizeof(int)+m_*(ssize_t)sizeof(int)*2+pan_ind_*P_mat_i+P_mat__)) == 8 )){
                         (*(double *)(m_*(ssize_t)sizeof(double)+(ssize_t)sizeof(double)*3+vert_pos_-((ssize_t)sizeof(double)*3+(ssize_t)sizeof(double))) )+=  Lz_;
                    };
                }

                 {main_37bar_coord_2D(bar_weights_-((ssize_t)sizeof(double)) ,position_-((ssize_t)sizeof(double)) ,vert_pos_-((ssize_t)sizeof(double)*3+(ssize_t)sizeof(double)));}

                if( (((*(double *)((ssize_t)sizeof(double)+bar_weights_-((ssize_t)sizeof(double))) )>0.)&&( (*(double *)(2*(ssize_t)sizeof(double)+bar_weights_-((ssize_t)sizeof(double))) )>0.))&&( (*(double *)(3*(ssize_t)sizeof(double)+bar_weights_-((ssize_t)sizeof(double))) )>0.)){
                     (*(int *)((ssize_t)sizeof(int)+j_*grid_pan__i+i_*grid_pan_i+grid_pan___) )= pan_ind_ ;
                };
            }
        }
    }

}}double dt_    ;

double t_end_ ;


int n_t_ ;


/* Parametri Tensegrity  */

double rho_b_ ;

double k_     ;

double sigma_ ;


double h_ ;

double r_ ;


double l_b_ ;


double I_0_ ;


int n_N_i_ ;

int n_B_i_ ;

int n_T_i_ ;


/* Parametri fabric  */

int nx_ ;

int nz_ ;


int main_39n_C;
int main_40n_B;
int main_41n_T;
int main_42n_G;
int main_43n_N;
int main_44n_N_dof;
int main_45n_q_tilde;
int main_46n_P;
double main_47alpha_1;
double main_48l_per;
ssize_t main_49i;
ssize_t main_50st;
struct freefunc B_con_f;char *B_con_;

double main_51l_v_1;
double main_52l_h_1;
double main_53l_u_l;
double main_54l_u_s;
double main_55l_u_l_0;
double main_56l_h_0;
double main_57l_u_s_0;
double main_58l_i_0;
ssize_t main_59i;
struct freefunc T_con_f;char *T_con_;

ssize_t main_60i;
ssize_t main_61st;
struct freefunc ghost_nodes_f;char *ghost_nodes_;

ssize_t main_62i;
struct freefunc l_0_f;char *l_0_;


ssize_t main_63i;
ssize_t main_64st;
struct freefunc P_mat_f;char *P_mat_ ;


int n_int_ ;


int main_65h;
ssize_t main_66i;
ssize_t main_67st;
struct freefunc bar_lambda_mat_f;char *bar_lambda_mat_ ;


ssize_t main_68i;
struct freefunc X_0_f;char *X_0_ ;

ssize_t main_69i;
struct freefunc q_0_tilde_f;char *q_0_tilde_ ;


int main_70h;
ssize_t main_71i;
struct freefunc t_vec_f;char *t_vec_;

int main_72h;
ssize_t main_73i;
ssize_t main_74i;
ssize_t main_75st;
struct freefunc q_tilde_arr_f;char *q_tilde_arr_;


char par_int_arr_[(ssize_t)sizeof(int)*10] ;

char par_real_arr_[(ssize_t)sizeof(double)*2] ;


mainstart

/*USE rtchecks */

/* Definizione funzioni e subroutine */






/* Definizione funzioni */







/*USE rtchecks */

/* Definizione funzioni e subroutine */


/*USE rtchecks */


/*USE rtchecks */

/* Definizione funzioni */







/*USE rtchecks */


/*USE rtchecks */

/* Parametri Simulazione */

 dt_= 0.001  /* [s] Passo temporale */; t_end_= 3./* [s] Tempo finale */; n_t_= (int)ceil(t_end_/dt_ + 1.); rho_b_= 0.08 /* [kg/m] Massa per unità di lunghezza delle aste  */; k_= 5./* [N/m]  Costante elastica dei cavi  */; sigma_= 1./* [-]    Damping  */; h_= 0.261313 /* [m] Altezza cella  */; r_= 0.261313 /* [m] Raggio cella  */; l_b_= sqrt((h_*h_)+ (2.+sqrt(2.))*(r_*r_)) /* [m] Lunghezza bielle */; I_0_= 1./3.* rho_b_ * pow(l_b_,3 /* [.] Momento di inerzia delle bielle */); n_N_i_= 8  /* Numero nodi singola cella  */; n_B_i_= 4  /* Numero bielle singola cella */; n_T_i_= 12 /* Numero cavi singola cella */; nx_= 5 /* Numero celle in direzione x  */; nz_= 15 /* Numero celle in direzione z */;main_39n_C=nx_*nz_             /* Numero totale celle */; 
main_40n_B=4*nx_*nz_           /* Numero totale bielle */; 
main_41n_T=12*(nx_-1)*(nz_-1) - 3*((nx_-2)*(nz_-1)+(nz_-2)*(nx_-1)) + 3*4 + 3*(nx_-2) + 3*(nz_-2) + 4*nx_*nz_; 
main_42n_G=2*nx_ + 2*nz_; 
main_43n_N=main_39n_C * n_N_i_ + main_42n_G /* Numero nodi */; 
main_44n_N_dof=3*main_43n_N/* Numero di coordinate di tutti i nodi */; 
/*n_T_dof=(3*main_41n_T)*/
main_45n_q_tilde=2*2*main_40n_B/* Numero stati sistema */; 
/*n_P       = 6*n_C + 2*(nx-1)*(nz-1) + 6*2*(nz+nx+2) + 2*2*(nz+nx) ! Numero di patch triangolazione superficie */
main_46n_P=6*(nx_+2)*(nz_+2) + 2*(nx_+1)*(nz_+1); 

main_47alpha_1=atan(sqrt(2.)-1.)                     /* Rotazione della singola cella */; 
main_48l_per=(2.*r_) / (cos(main_47alpha_1)+sin(main_47alpha_1)) /* Lunghezza vettore periodicità per una cella */; 

/* Definizione connettività bielle fabric  */

main_49i=(ssize_t)sizeof(int)*2*main_40n_B;main_50st=(ssize_t)sizeof(int)*2+(ssize_t)sizeof(int);
B_con_=malloc(main_49i);if(B_con_==NULL)B_con_=errmalloc();B_con_-=main_50st;atblockexit(B_con_f,free,B_con_+main_50st);
main_22B_con_comp(1,main_40n_B,(ssize_t)sizeof(int)*2,1,2,(ssize_t)sizeof(int),B_con_ ,main_40n_B ,main_39n_C);

/* Definizione Connettività cavi fabric  */

main_51l_v_1=sqrt((h_*h_)+ (2.-sqrt(2.))*(r_*r_)) /* Lunghezza cavi "verticali"  */; 
main_52l_h_1=sqrt(2.)*r_                   /* Lunghezza cavi orizzontali singola cella  */; 

main_53l_u_l=(2.-sqrt(2.))*main_52l_h_1 /* Lunghezza cavi lato superiore lunghi */; 
main_54l_u_s=main_52l_h_1-main_53l_u_l/* Lunghezza cavi lato superiore corti */; 

main_55l_u_l_0=main_53l_u_l/3./* Scelta lunghezza iniziale cavi superiori lunghi come parametro del prestress */; 

main_56l_h_0=(2.*main_55l_u_l_0*main_52l_h_1)/(main_53l_u_l+main_55l_u_l_0); 
main_57l_u_s_0=main_56l_h_0*main_54l_u_s/main_52l_h_1; 
main_58l_i_0=pow(((main_52l_h_1/main_56l_h_0-1.)/r_ + 1./main_51l_v_1),( - 1)); 

main_59i=(ssize_t)sizeof(int)*2*main_41n_T;
T_con_=malloc(main_59i);if(T_con_==NULL)T_con_=errmalloc();T_con_-=main_50st;atblockexit(T_con_f,free,T_con_+main_50st);
main_60i=(ssize_t)sizeof(int)*3*main_42n_G;main_61st=(ssize_t)sizeof(int)*3+(ssize_t)sizeof(int);
ghost_nodes_=malloc(main_60i);if(ghost_nodes_==NULL)ghost_nodes_=errmalloc();ghost_nodes_-=main_61st;atblockexit(ghost_nodes_f,free,ghost_nodes_+main_61st);
main_62i=(ssize_t)sizeof(double)*main_41n_T;
l_0_=malloc(main_62i);if(l_0_==NULL)l_0_=errmalloc();l_0_-=(ssize_t)sizeof(double);atblockexit(l_0_f,free,l_0_+(ssize_t)sizeof(double));
main_23T_comp(1,main_41n_T,(ssize_t)sizeof(int)*2,T_con_ ,1,main_42n_G,(ssize_t)sizeof(int)*3,ghost_nodes_ ,1,main_41n_T,(ssize_t)sizeof(double),l_0_ ,nx_ ,nz_ ,main_39n_C ,main_41n_T ,main_42n_G ,main_57l_u_s_0 ,main_55l_u_l_0 ,main_58l_i_0);

/* Costruzione matrice superficie interfaccia */

main_63i=(ssize_t)sizeof(int)*2*3*main_46n_P;main_64st=(ssize_t)sizeof(int)*2*3+main_50st;
P_mat_=malloc(main_63i);if(P_mat_==NULL)P_mat_=errmalloc();P_mat_-=main_64st;atblockexit(P_mat_f,free,P_mat_+main_64st);
 memset(main_64st+P_mat_,0,main_63i);main_27P_comp(1,main_46n_P,(ssize_t)sizeof(int)*2*3,P_mat_ ,1,main_42n_G,(ssize_t)sizeof(int)*3,1,3,(ssize_t)sizeof(int),ghost_nodes_ ,nx_ ,nz_ ,main_39n_C ,main_41n_T ,main_42n_G);

/* Costruzione matrice coordinate baricentriche per integrazione forze */

 n_int_= 7;main_65h=((n_int_-1)*(n_int_-1));main_66i=(ssize_t)sizeof(double)*3*main_65h;main_67st=(ssize_t)sizeof(double)*3+(ssize_t)sizeof(double);
bar_lambda_mat_=malloc(main_66i);if(bar_lambda_mat_==NULL)bar_lambda_mat_=errmalloc();bar_lambda_mat_-=main_67st;atblockexit(bar_lambda_mat_f,free,bar_lambda_mat_+main_67st);
 memset(main_67st+bar_lambda_mat_,0,main_66i);main_28bar_lambda_comp(1,main_65h,(ssize_t)sizeof(double)*3,bar_lambda_mat_ ,n_int_);

/* Costruzione vettore DOF iniziale */

main_68i=(ssize_t)sizeof(double)*main_44n_N_dof;
X_0_=malloc(main_68i);if(X_0_==NULL)X_0_=errmalloc();X_0_-=(ssize_t)sizeof(double);atblockexit(X_0_f,free,X_0_+(ssize_t)sizeof(double));
 memset((ssize_t)sizeof(double)+X_0_,0,main_68i);main_69i=(ssize_t)sizeof(double)*main_45n_q_tilde;
q_0_tilde_=malloc(main_69i);if(q_0_tilde_==NULL)q_0_tilde_=errmalloc();q_0_tilde_-=(ssize_t)sizeof(double);atblockexit(q_0_tilde_f,free,q_0_tilde_+(ssize_t)sizeof(double));
 memset((ssize_t)sizeof(double)+q_0_tilde_,0,main_69i);main_14X_0_comp(1,main_44n_N_dof,(ssize_t)sizeof(double),X_0_ ,h_ ,r_ ,main_47alpha_1 ,main_48l_per ,nx_ ,nz_ ,main_43n_N ,main_42n_G ,main_44n_N_dof ,ghost_nodes_);
main_15q_0_tilde_comp(1,main_45n_q_tilde,(ssize_t)sizeof(double),q_0_tilde_ ,1,main_44n_N_dof,(ssize_t)sizeof(double),X_0_ ,1,main_40n_B,(ssize_t)sizeof(int)*2,1,2,(ssize_t)sizeof(int),B_con_ ,l_b_ ,main_45n_q_tilde ,main_40n_B);

/* Simulazione */

main_70h=n_t_;main_71i=(ssize_t)sizeof(double)*main_70h;
t_vec_=malloc(main_71i);if(t_vec_==NULL)t_vec_=errmalloc();t_vec_-=(ssize_t)sizeof(double);atblockexit(t_vec_f,free,t_vec_+(ssize_t)sizeof(double));
main_72h=n_t_;main_73i=(ssize_t)sizeof(double)*main_72h;main_74i=main_73i*main_45n_q_tilde;main_75st=main_73i+(ssize_t)sizeof(double);
q_tilde_arr_=malloc(main_74i);if(q_tilde_arr_==NULL)q_tilde_arr_=errmalloc();q_tilde_arr_-=main_75st;atblockexit(q_tilde_arr_f,free,q_tilde_arr_+main_75st);
main_32simulate(1,main_70h,(ssize_t)sizeof(double),t_vec_ ,1,main_45n_q_tilde,main_73i,1,main_72h,(ssize_t)sizeof(double),q_tilde_arr_ ,n_t_ ,main_45n_q_tilde ,dt_ ,main_41n_T ,main_40n_B ,main_46n_P ,main_43n_N ,main_44n_N_dof ,(3*main_41n_T) ,main_42n_G ,nx_ ,nz_ ,n_int_ ,1,main_45n_q_tilde,(ssize_t)sizeof(double),q_0_tilde_ ,1,main_44n_N_dof,(ssize_t)sizeof(double),X_0_ ,I_0_ ,l_b_ ,main_48l_per ,sigma_ ,k_ ,1,main_41n_T,(ssize_t)sizeof(int)*2,1,2,(ssize_t)sizeof(int),T_con_ ,1,main_42n_G,(ssize_t)sizeof(int)*3,1,3,(ssize_t)sizeof(int),ghost_nodes_ ,1,main_41n_T,(ssize_t)sizeof(double),l_0_ ,1,main_46n_P,(ssize_t)sizeof(int)*2*3,1,3,(ssize_t)sizeof(int)*2,1,2,(ssize_t)sizeof(int),P_mat_ ,1,main_65h,(ssize_t)sizeof(double)*3,1,3,(ssize_t)sizeof(double),bar_lambda_mat_);
/*q_tilde_arr(*,1) = q_0_tilde */

/* Output parametri fabric */

 (*(int *)((ssize_t)sizeof(int)+par_int_arr_-((ssize_t)sizeof(int))))=nx_;(*(int *)((1+1)*(ssize_t)sizeof(int)+par_int_arr_-((ssize_t)sizeof(int))))=nz_;(*(int *)((1+2)*(ssize_t)sizeof(int)+par_int_arr_-((ssize_t)sizeof(int))))=main_39n_C;(*(int *)((1+3)*(ssize_t)sizeof(int)+par_int_arr_-((ssize_t)sizeof(int))))=main_40n_B;(*(int *)((1+4)*(ssize_t)sizeof(int)+par_int_arr_-((ssize_t)sizeof(int))))=main_41n_T;(*(int *)((1+5)*(ssize_t)sizeof(int)+par_int_arr_-((ssize_t)sizeof(int))))=main_42n_G;(*(int *)((1+6)*(ssize_t)sizeof(int)+par_int_arr_-((ssize_t)sizeof(int))))=main_43n_N;(*(int *)((1+7)*(ssize_t)sizeof(int)+par_int_arr_-((ssize_t)sizeof(int))))=main_44n_N_dof;(*(int *)((1+8)*(ssize_t)sizeof(int)+par_int_arr_-((ssize_t)sizeof(int))))=(3*main_41n_T);(*(int *)((1+9)*(ssize_t)sizeof(int)+par_int_arr_-((ssize_t)sizeof(int))))=main_45n_q_tilde; (*(double *)((ssize_t)sizeof(double)+par_real_arr_-((ssize_t)sizeof(double))))=l_b_;(*(double *)((1+1)*(ssize_t)sizeof(double)+par_real_arr_-((ssize_t)sizeof(double))))=main_48l_per;main_36vec_to_csv_int(1,10,(ssize_t)sizeof(int),par_int_arr_-((ssize_t)sizeof(int)) ,"../../output/par_int_arr.csv");
main_34vec_to_csv_real(1,2,(ssize_t)sizeof(double),par_real_arr_-((ssize_t)sizeof(double)) ,"../../output/par_real_arr.csv");

/* Output */

main_35mat_to_csv_int(1,main_40n_B,(ssize_t)sizeof(int)*2,1,2,(ssize_t)sizeof(int),B_con_ ,"../../output/B_con.csv");
main_35mat_to_csv_int(1,main_41n_T,(ssize_t)sizeof(int)*2,1,2,(ssize_t)sizeof(int),T_con_ ,"../../output/T_con.csv");
main_35mat_to_csv_int(1,main_46n_P,(ssize_t)sizeof(int)*2*3,1,3,(ssize_t)sizeof(int)*2,(ssize_t)sizeof(int)+P_mat_ ,"../../output/P_mat.csv");
main_35mat_to_csv_int(1,main_46n_P,(ssize_t)sizeof(int)*2*3,1,3,(ssize_t)sizeof(int)*2,2*(ssize_t)sizeof(int)+P_mat_ ,"../../output/P_mat_per.csv");
main_35mat_to_csv_int(1,main_42n_G,(ssize_t)sizeof(int)*3,1,3,(ssize_t)sizeof(int),ghost_nodes_ ,"../../output/ghost_nodes.csv");
main_34vec_to_csv_real(1,main_44n_N_dof,(ssize_t)sizeof(double),X_0_ ,"../../output/X_0.csv");

main_33mat_to_csv_real(1,main_45n_q_tilde,main_73i,1,main_72h,(ssize_t)sizeof(double),q_tilde_arr_ ,"../../output/q_tilde.csv");
main_34vec_to_csv_real(1,main_70h,(ssize_t)sizeof(double),t_vec_ ,"../../output/t.csv");

/* Check  */free(q_tilde_arr_f.ptr);free(t_vec_f.ptr);free(q_0_tilde_f.ptr);free(X_0_f.ptr);free(bar_lambda_mat_f.ptr);free(P_mat_f.ptr);free(l_0_f.ptr);free(ghost_nodes_f.ptr);free(T_con_f.ptr);free(B_con_f.ptr);freestack=es;return 0;}
