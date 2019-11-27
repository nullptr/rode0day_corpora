











typedef unsigned int size_t;



typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;




__extension__ typedef signed long long int __int64_t;
__extension__ typedef unsigned long long int __uint64_t;







__extension__ typedef long long int __quad_t;
__extension__ typedef unsigned long long int __u_quad_t;


__extension__ typedef __u_quad_t __dev_t;
__extension__ typedef unsigned int __uid_t;
__extension__ typedef unsigned int __gid_t;
__extension__ typedef unsigned long int __ino_t;
__extension__ typedef __u_quad_t __ino64_t;
__extension__ typedef unsigned int __mode_t;
__extension__ typedef unsigned int __nlink_t;
__extension__ typedef long int __off_t;
__extension__ typedef __quad_t __off64_t;
__extension__ typedef int __pid_t;
__extension__ typedef struct { int __val[2]; } __fsid_t;
__extension__ typedef long int __clock_t;
__extension__ typedef unsigned long int __rlim_t;
__extension__ typedef __u_quad_t __rlim64_t;
__extension__ typedef unsigned int __id_t;
__extension__ typedef long int __time_t;
__extension__ typedef unsigned int __useconds_t;
__extension__ typedef long int __suseconds_t;

__extension__ typedef int __daddr_t;
__extension__ typedef int __key_t;


__extension__ typedef int __clockid_t;


__extension__ typedef void * __timer_t;


__extension__ typedef long int __blksize_t;




__extension__ typedef long int __blkcnt_t;
__extension__ typedef __quad_t __blkcnt64_t;


__extension__ typedef unsigned long int __fsblkcnt_t;
__extension__ typedef __u_quad_t __fsblkcnt64_t;


__extension__ typedef unsigned long int __fsfilcnt_t;
__extension__ typedef __u_quad_t __fsfilcnt64_t;


__extension__ typedef int __fsword_t;

__extension__ typedef int __ssize_t;


__extension__ typedef long int __syscall_slong_t;

__extension__ typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


__extension__ typedef int __intptr_t;


__extension__ typedef unsigned int __socklen_t;
struct _IO_FILE;



typedef struct _IO_FILE FILE;





typedef struct _IO_FILE __FILE;




typedef struct
{
  int __count;
  union
  {

    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
typedef __builtin_va_list __gnuc_va_list;
struct _IO_jump_t; struct _IO_FILE;





typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
  __off64_t _offset;







  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;

  size_t __pad5;
  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) ;
extern int _IO_ferror (_IO_FILE *__fp) ;

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) ;
extern void _IO_funlockfile (_IO_FILE *) ;
extern int _IO_ftrylockfile (_IO_FILE *) ;
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) ;




typedef __gnuc_va_list va_list;
typedef __off_t off_t;
typedef __ssize_t ssize_t;







typedef _G_fpos_t fpos_t;







extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (const char *__filename) ;

extern int rename (const char *__old, const char *__new) ;




extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) ;








extern FILE *tmpfile (void) ;
extern char *tmpnam (char *__s) ;





extern char *tmpnam_r (char *__s) ;
extern char *tempnam (const char *__dir, const char *__pfx)
     ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

extern int fflush_unlocked (FILE *__stream);






extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;

extern FILE *fdopen (int __fd, const char *__modes) ;
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) ;



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) ;





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) ;


extern void setlinebuf (FILE *__stream) ;








extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) ;





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) ;





extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     ;

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     ;

extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     ;
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     ;








extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) ;
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                               ;
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf")

                      ;








extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     ;
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf")



     ;









extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
extern int fgetc_unlocked (FILE *__stream);











extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;

extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;








extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);

extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);

extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);



extern void clearerr (FILE *__stream) ;

extern int feof (FILE *__stream) ;

extern int ferror (FILE *__stream) ;




extern void clearerr_unlocked (FILE *__stream) ;
extern int feof_unlocked (FILE *__stream) ;
extern int ferror_unlocked (FILE *__stream) ;








extern void perror (const char *__s);






extern int sys_nerr;
extern const char *const sys_errlist[];




extern int fileno (FILE *__stream) ;




extern int fileno_unlocked (FILE *__stream) ;
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) ;
extern void flockfile (FILE *__stream) ;



extern int ftrylockfile (FILE *__stream) ;


extern void funlockfile (FILE *__stream) ;



typedef long int wchar_t;








typedef enum
{
  P_ALL,
  P_PID,
  P_PGID
} idtype_t;


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;







__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;


extern size_t __ctype_get_mb_cur_max (void) ;




extern double atof (const char *__nptr)
     ;

extern int atoi (const char *__nptr)
     ;

extern long int atol (const char *__nptr)
     ;





__extension__ extern long long int atoll (const char *__nptr)
     ;





extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     ;





extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) ;

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     ;





extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     ;

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     ;




__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     ;

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     ;





__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     ;

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     ;

extern char *l64a (long int __n) ;


extern long int a64l (const char *__s)
     ;










typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;
typedef __pid_t pid_t;





typedef __id_t id_t;
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;


typedef __clock_t clock_t;





typedef __time_t time_t;



typedef __clockid_t clockid_t;
typedef __timer_t timer_t;



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
typedef int int8_t ;
typedef int int16_t ;
typedef int int32_t ;
typedef int int64_t ;


typedef unsigned int u_int8_t ;
typedef unsigned int u_int16_t ;
typedef unsigned int u_int32_t ;
typedef unsigned int u_int64_t ;

typedef int register_t ;






static __inline unsigned int
__bswap_32 (unsigned int __bsx)
{
  return __builtin_bswap32 (__bsx);
}
static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{
  return __builtin_bswap64 (__bsx);
}




typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;



typedef __sigset_t sigset_t;







struct timespec
  {
    __time_t tv_sec;
    __syscall_slong_t tv_nsec;
  };

struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };


typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];


  } fd_set;






typedef __fd_mask fd_mask;

extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);





__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     ;
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     ;
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     ;






typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
typedef unsigned long int pthread_t;


union pthread_attr_t
{
  char __size[36];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;
typedef struct __pthread_internal_slist
{
  struct __pthread_internal_slist *__next;
} __pthread_slist_t;





typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;





    int __kind;
    unsigned int __nusers;
    __extension__ union
    {
      struct
      {
 short __espins;
 short __elision;



      } __elision_data;
      __pthread_slist_t __list;
    };

  } __data;
  char __size[24];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{
  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;


    unsigned char __flags;
    unsigned char __shared;
    signed char __rwelision;

    unsigned char __pad2;
    int __writer;
  } __data;

  char __size[32];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[20];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;









extern long int random (void) ;


extern void srandom (unsigned int __seed) ;





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) ;



extern char *setstate (char *__statebuf) ;







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) ;

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     ;

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     ;

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     ;






extern int rand (void) ;

extern void srand (unsigned int __seed) ;




extern int rand_r (unsigned int *__seed) ;







extern double drand48 (void) ;
extern double erand48 (unsigned short int __xsubi[3]) ;


extern long int lrand48 (void) ;
extern long int nrand48 (unsigned short int __xsubi[3])
     ;


extern long int mrand48 (void) ;
extern long int jrand48 (unsigned short int __xsubi[3])
     ;


extern void srand48 (long int __seedval) ;
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     ;
extern void lcong48 (unsigned short int __param[7]) ;





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) ;
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) ;


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     ;
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     ;


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     ;
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     ;


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     ;

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) ;

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     ;









extern void *malloc (size_t __size) ;

extern void *calloc (size_t __nmemb, size_t __size)
     ;










extern void *realloc (void *__ptr, size_t __size)
     ;

extern void free (void *__ptr) ;




extern void cfree (void *__ptr) ;










extern void *alloca (size_t __size) ;











extern void *valloc (size_t __size) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     ;




extern void *aligned_alloc (size_t __alignment, size_t __size)
     ;




extern void abort (void) ;



extern int atexit (void (*__func) (void)) ;







extern int at_quick_exit (void (*__func) (void)) ;







extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     ;






extern void exit (int __status) ;





extern void quick_exit (int __status) ;







extern void _Exit (int __status) ;






extern char *getenv (const char *__name) ;

extern int putenv (char *__string) ;





extern int setenv (const char *__name, const char *__value, int __replace)
     ;


extern int unsetenv (const char *__name) ;






extern int clearenv (void) ;
extern char *mktemp (char *__template) ;
extern int mkstemp (char *__template) ;
extern int mkstemps (char *__template, int __suffixlen) ;
extern char *mkdtemp (char *__template) ;





extern int system (const char *__command) ;

extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) ;






typedef int (*__compar_fn_t) (const void *, const void *);



extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     ;







extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) ;
extern int abs (int __x) ;
extern long int labs (long int __x) ;



__extension__ extern long long int llabs (long long int __x)
     ;







extern div_t div (int __numer, int __denom)
     ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     ;

extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) ;
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) ;

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     ;
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     ;






extern int mblen (const char *__s, size_t __n) ;


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) ;


extern int wctomb (char *__s, wchar_t __wchar) ;



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) ;

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     ;








extern int rpmatch (const char *__response) ;
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     ;
extern int getloadavg (double __loadavg[], int __nelem)
     ;









struct iovec
  {
    void *iov_base;
    size_t iov_len;
  };
extern ssize_t readv (int __fd, const struct iovec *__iovec, int __count)
  ;
extern ssize_t writev (int __fd, const struct iovec *__iovec, int __count)
  ;
extern ssize_t preadv (int __fd, const struct iovec *__iovec, int __count,
         __off_t __offset) ;
extern ssize_t pwritev (int __fd, const struct iovec *__iovec, int __count,
   __off_t __offset) ;







typedef __socklen_t socklen_t;




enum __socket_type
{
  SOCK_STREAM = 1,


  SOCK_DGRAM = 2,


  SOCK_RAW = 3,

  SOCK_RDM = 4,

  SOCK_SEQPACKET = 5,


  SOCK_DCCP = 6,

  SOCK_PACKET = 10,







  SOCK_CLOEXEC = 02000000,


  SOCK_NONBLOCK = 00004000


};
typedef unsigned short int sa_family_t;


struct sockaddr
  {
    sa_family_t sa_family;
    char sa_data[14];
  };
struct sockaddr_storage
  {
    sa_family_t ss_family;
    char __ss_padding[(128 - (sizeof (unsigned short int)) - sizeof (unsigned long int))];
    unsigned long int __ss_align;
  };



enum
  {
    MSG_OOB = 0x01,

    MSG_PEEK = 0x02,

    MSG_DONTROUTE = 0x04,






    MSG_CTRUNC = 0x08,

    MSG_PROXY = 0x10,

    MSG_TRUNC = 0x20,

    MSG_DONTWAIT = 0x40,

    MSG_EOR = 0x80,

    MSG_WAITALL = 0x100,

    MSG_FIN = 0x200,

    MSG_SYN = 0x400,

    MSG_CONFIRM = 0x800,

    MSG_RST = 0x1000,

    MSG_ERRQUEUE = 0x2000,

    MSG_NOSIGNAL = 0x4000,

    MSG_MORE = 0x8000,

    MSG_WAITFORONE = 0x10000,

    MSG_BATCH = 0x40000,

    MSG_FASTOPEN = 0x20000000,


    MSG_CMSG_CLOEXEC = 0x40000000



  };




struct msghdr
  {
    void *msg_name;
    socklen_t msg_namelen;

    struct iovec *msg_iov;
    size_t msg_iovlen;

    void *msg_control;
    size_t msg_controllen;




    int msg_flags;
  };


struct cmsghdr
  {
    size_t cmsg_len;




    int cmsg_level;
    int cmsg_type;

    __extension__ unsigned char __cmsg_data [];

  };
extern struct cmsghdr *__cmsg_nxthdr (struct msghdr *__mhdr,
          struct cmsghdr *__cmsg) ;
enum
  {
    SCM_RIGHTS = 0x01





  };



struct linger
  {
    int l_onoff;
    int l_linger;
  };




struct osockaddr
  {
    unsigned short int sa_family;
    unsigned char sa_data[14];
  };




enum
{
  SHUT_RD = 0,

  SHUT_WR,

  SHUT_RDWR

};
extern int socket (int __domain, int __type, int __protocol) ;





extern int socketpair (int __domain, int __type, int __protocol,
         int __fds[2]) ;


extern int bind (int __fd, const struct sockaddr * __addr, socklen_t __len)
     ;


extern int getsockname (int __fd, struct sockaddr *__restrict __addr,
   socklen_t *__restrict __len) ;
extern int connect (int __fd, const struct sockaddr * __addr, socklen_t __len);



extern int getpeername (int __fd, struct sockaddr *__restrict __addr,
   socklen_t *__restrict __len) ;






extern ssize_t send (int __fd, const void *__buf, size_t __n, int __flags);






extern ssize_t recv (int __fd, void *__buf, size_t __n, int __flags);






extern ssize_t sendto (int __fd, const void *__buf, size_t __n,
         int __flags, const struct sockaddr * __addr,
         socklen_t __addr_len);
extern ssize_t recvfrom (int __fd, void *__restrict __buf, size_t __n,
    int __flags, struct sockaddr *__restrict __addr,
    socklen_t *__restrict __addr_len);







extern ssize_t sendmsg (int __fd, const struct msghdr *__message,
   int __flags);
extern ssize_t recvmsg (int __fd, struct msghdr *__message, int __flags);
extern int getsockopt (int __fd, int __level, int __optname,
         void *__restrict __optval,
         socklen_t *__restrict __optlen) ;




extern int setsockopt (int __fd, int __level, int __optname,
         const void *__optval, socklen_t __optlen) ;





extern int listen (int __fd, int __n) ;
extern int accept (int __fd, struct sockaddr *__restrict __addr,
     socklen_t *__restrict __addr_len);
extern int shutdown (int __fd, int __how) ;




extern int sockatmark (int __fd) ;







extern int isfdtype (int __fd, int __fdtype) ;




struct mbuf;
struct rtentry;



typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;





__extension__
typedef unsigned long long int uint64_t;






typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;



__extension__
typedef long long int int_least64_t;



typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;



__extension__
typedef unsigned long long int uint_least64_t;






typedef signed char int_fast8_t;





typedef int int_fast16_t;
typedef int int_fast32_t;
__extension__
typedef long long int int_fast64_t;



typedef unsigned char uint_fast8_t;





typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
__extension__
typedef unsigned long long int uint_fast64_t;
typedef int intptr_t;


typedef unsigned int uintptr_t;
__extension__
typedef long long int intmax_t;
__extension__
typedef unsigned long long int uintmax_t;







typedef uint32_t in_addr_t;
struct in_addr
  {
    in_addr_t s_addr;
  };


struct ip_opts
  {
    struct in_addr ip_dst;
    char ip_opts[40];
  };


struct ip_mreqn
  {
    struct in_addr imr_multiaddr;
    struct in_addr imr_address;
    int imr_ifindex;
  };


struct in_pktinfo
  {
    int ipi_ifindex;
    struct in_addr ipi_spec_dst;
    struct in_addr ipi_addr;
  };


enum
  {
    IPPROTO_IP = 0,

    IPPROTO_ICMP = 1,

    IPPROTO_IGMP = 2,

    IPPROTO_IPIP = 4,

    IPPROTO_TCP = 6,

    IPPROTO_EGP = 8,

    IPPROTO_PUP = 12,

    IPPROTO_UDP = 17,

    IPPROTO_IDP = 22,

    IPPROTO_TP = 29,

    IPPROTO_DCCP = 33,

    IPPROTO_IPV6 = 41,

    IPPROTO_RSVP = 46,

    IPPROTO_GRE = 47,

    IPPROTO_ESP = 50,

    IPPROTO_AH = 51,

    IPPROTO_MTP = 92,

    IPPROTO_BEETPH = 94,

    IPPROTO_ENCAP = 98,

    IPPROTO_PIM = 103,

    IPPROTO_COMP = 108,

    IPPROTO_SCTP = 132,

    IPPROTO_UDPLITE = 136,

    IPPROTO_MPLS = 137,

    IPPROTO_RAW = 255,

    IPPROTO_MAX
  };





enum
  {
    IPPROTO_HOPOPTS = 0,

    IPPROTO_ROUTING = 43,

    IPPROTO_FRAGMENT = 44,

    IPPROTO_ICMPV6 = 58,

    IPPROTO_NONE = 59,

    IPPROTO_DSTOPTS = 60,

    IPPROTO_MH = 135

  };



typedef uint16_t in_port_t;


enum
  {
    IPPORT_ECHO = 7,
    IPPORT_DISCARD = 9,
    IPPORT_SYSTAT = 11,
    IPPORT_DAYTIME = 13,
    IPPORT_NETSTAT = 15,
    IPPORT_FTP = 21,
    IPPORT_TELNET = 23,
    IPPORT_SMTP = 25,
    IPPORT_TIMESERVER = 37,
    IPPORT_NAMESERVER = 42,
    IPPORT_WHOIS = 43,
    IPPORT_MTP = 57,

    IPPORT_TFTP = 69,
    IPPORT_RJE = 77,
    IPPORT_FINGER = 79,
    IPPORT_TTYLINK = 87,
    IPPORT_SUPDUP = 95,


    IPPORT_EXECSERVER = 512,
    IPPORT_LOGINSERVER = 513,
    IPPORT_CMDSERVER = 514,
    IPPORT_EFSSERVER = 520,


    IPPORT_BIFFUDP = 512,
    IPPORT_WHOSERVER = 513,
    IPPORT_ROUTESERVER = 520,


    IPPORT_RESERVED = 1024,


    IPPORT_USERRESERVED = 5000
  };
struct in6_addr
  {
    union
      {
 uint8_t __u6_addr8[16];

 uint16_t __u6_addr16[8];
 uint32_t __u6_addr32[4];

      } __in6_u;





  };


extern const struct in6_addr in6addr_any;
extern const struct in6_addr in6addr_loopback;
struct sockaddr_in
  {
    sa_family_t sin_family;
    in_port_t sin_port;
    struct in_addr sin_addr;


    unsigned char sin_zero[sizeof (struct sockaddr) -
      (sizeof (unsigned short int)) -
      sizeof (in_port_t) -
      sizeof (struct in_addr)];
  };



struct sockaddr_in6
  {
    sa_family_t sin6_family;
    in_port_t sin6_port;
    uint32_t sin6_flowinfo;
    struct in6_addr sin6_addr;
    uint32_t sin6_scope_id;
  };




struct ip_mreq
  {

    struct in_addr imr_multiaddr;


    struct in_addr imr_interface;
  };

struct ip_mreq_source
  {

    struct in_addr imr_multiaddr;


    struct in_addr imr_interface;


    struct in_addr imr_sourceaddr;
  };




struct ipv6_mreq
  {

    struct in6_addr ipv6mr_multiaddr;


    unsigned int ipv6mr_interface;
  };




struct group_req
  {

    uint32_t gr_interface;


    struct sockaddr_storage gr_group;
  };

struct group_source_req
  {

    uint32_t gsr_interface;


    struct sockaddr_storage gsr_group;


    struct sockaddr_storage gsr_source;
  };



struct ip_msfilter
  {

    struct in_addr imsf_multiaddr;


    struct in_addr imsf_interface;


    uint32_t imsf_fmode;


    uint32_t imsf_numsrc;

    struct in_addr imsf_slist[1];
  };





struct group_filter
  {

    uint32_t gf_interface;


    struct sockaddr_storage gf_group;


    uint32_t gf_fmode;


    uint32_t gf_numsrc;

    struct sockaddr_storage gf_slist[1];
};
extern uint32_t ntohl (uint32_t __netlong) ;
extern uint16_t ntohs (uint16_t __netshort)
     ;
extern uint32_t htonl (uint32_t __hostlong)
     ;
extern uint16_t htons (uint16_t __hostshort)
     ;




extern int bindresvport (int __sockfd, struct sockaddr_in *__sock_in) ;


extern int bindresvport6 (int __sockfd, struct sockaddr_in6 *__sock_in)
     ;





extern in_addr_t inet_addr (const char *__cp) ;


extern in_addr_t inet_lnaof (struct in_addr __in) ;



extern struct in_addr inet_makeaddr (in_addr_t __net, in_addr_t __host)
     ;


extern in_addr_t inet_netof (struct in_addr __in) ;



extern in_addr_t inet_network (const char *__cp) ;



extern char *inet_ntoa (struct in_addr __in) ;




extern int inet_pton (int __af, const char *__restrict __cp,
        void *__restrict __buf) ;




extern const char *inet_ntop (int __af, const void *__restrict __cp,
         char *__restrict __buf, socklen_t __len)
     ;






extern int inet_aton (const char *__cp, struct in_addr *__inp) ;



extern char *inet_neta (in_addr_t __net, char *__buf, size_t __len) ;




extern char *inet_net_ntop (int __af, const void *__cp, int __bits,
       char *__buf, size_t __len) ;




extern int inet_net_pton (int __af, const char *__cp,
     void *__buf, size_t __len) ;




extern unsigned int inet_nsap_addr (const char *__cp,
        unsigned char *__buf, int __len) ;



extern char *inet_nsap_ntoa (int __len, const unsigned char *__cp,
        char *__buf) ;










extern int __sigismember (const __sigset_t *, int);
extern int __sigaddset (__sigset_t *, int);
extern int __sigdelset (__sigset_t *, int);







typedef __sig_atomic_t sig_atomic_t;












typedef union sigval
  {
    int sival_int;
    void *sival_ptr;
  } sigval_t;
typedef __clock_t __sigchld_clock_t;



typedef struct
  {
    int si_signo;
    int si_errno;

    int si_code;

    union
      {
 int _pad[((128 / sizeof (int)) - 3)];


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
   } _kill;


 struct
   {
     int si_tid;
     int si_overrun;
     sigval_t si_sigval;
   } _timer;


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
     sigval_t si_sigval;
   } _rt;


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
     int si_status;
     __sigchld_clock_t si_utime;
     __sigchld_clock_t si_stime;
   } _sigchld;


 struct
   {
     void *si_addr;
     short int si_addr_lsb;
     struct
       {
  void *_lower;
  void *_upper;
       } si_addr_bnd;
   } _sigfault;


 struct
   {
     long int si_band;
     int si_fd;
   } _sigpoll;


 struct
   {
     void *_call_addr;
     int _syscall;
     unsigned int _arch;
   } _sigsys;
      } _sifields;
  } siginfo_t ;
enum
{
  SI_ASYNCNL = -60,

  SI_TKILL = -6,

  SI_SIGIO,

  SI_ASYNCIO,

  SI_MESGQ,

  SI_TIMER,

  SI_QUEUE,

  SI_USER,

  SI_KERNEL = 0x80

};




enum
{
  ILL_ILLOPC = 1,

  ILL_ILLOPN,

  ILL_ILLADR,

  ILL_ILLTRP,

  ILL_PRVOPC,

  ILL_PRVREG,

  ILL_COPROC,

  ILL_BADSTK

};


enum
{
  FPE_INTDIV = 1,

  FPE_INTOVF,

  FPE_FLTDIV,

  FPE_FLTOVF,

  FPE_FLTUND,

  FPE_FLTRES,

  FPE_FLTINV,

  FPE_FLTSUB

};


enum
{
  SEGV_MAPERR = 1,

  SEGV_ACCERR

};


enum
{
  BUS_ADRALN = 1,

  BUS_ADRERR,

  BUS_OBJERR,

  BUS_MCEERR_AR,

  BUS_MCEERR_AO

};
enum
{
  CLD_EXITED = 1,

  CLD_KILLED,

  CLD_DUMPED,

  CLD_TRAPPED,

  CLD_STOPPED,

  CLD_CONTINUED

};


enum
{
  POLL_IN = 1,

  POLL_OUT,

  POLL_MSG,

  POLL_ERR,

  POLL_PRI,

  POLL_HUP

};
typedef struct sigevent
  {
    sigval_t sigev_value;
    int sigev_signo;
    int sigev_notify;

    union
      {
 int _pad[((64 / sizeof (int)) - 3)];



 __pid_t _tid;

 struct
   {
     void (*_function) (sigval_t);
     pthread_attr_t *_attribute;
   } _sigev_thread;
      } _sigev_un;
  } sigevent_t;






enum
{
  SIGEV_SIGNAL = 0,

  SIGEV_NONE,

  SIGEV_THREAD,


  SIGEV_THREAD_ID = 4

};




typedef void (*__sighandler_t) (int);




extern __sighandler_t __sysv_signal (int __sig, __sighandler_t __handler)
     ;


extern __sighandler_t signal (int __sig, __sighandler_t __handler)
     ;

extern int kill (__pid_t __pid, int __sig) ;






extern int killpg (__pid_t __pgrp, int __sig) ;




extern int raise (int __sig) ;




extern __sighandler_t ssignal (int __sig, __sighandler_t __handler)
     ;
extern int gsignal (int __sig) ;




extern void psignal (int __sig, const char *__s);


extern void psiginfo (const siginfo_t *__pinfo, const char *__s);
extern int sigblock (int __mask) ;


extern int sigsetmask (int __mask) ;


extern int siggetmask (void) ;
typedef __sighandler_t sig_t;





extern int sigemptyset (sigset_t *__set) ;


extern int sigfillset (sigset_t *__set) ;


extern int sigaddset (sigset_t *__set, int __signo) ;


extern int sigdelset (sigset_t *__set, int __signo) ;


extern int sigismember (const sigset_t *__set, int __signo)
     ;
struct sigaction
  {


    union
      {

 __sighandler_t sa_handler;

 void (*sa_sigaction) (int, siginfo_t *, void *);
      }
    __sigaction_handler;







    __sigset_t sa_mask;


    int sa_flags;


    void (*sa_restorer) (void);
  };


extern int sigprocmask (int __how, const sigset_t *__restrict __set,
   sigset_t *__restrict __oset) ;






extern int sigsuspend (const sigset_t *__set) ;


extern int sigaction (int __sig, const struct sigaction *__restrict __act,
        struct sigaction *__restrict __oact) ;


extern int sigpending (sigset_t *__set) ;






extern int sigwait (const sigset_t *__restrict __set, int *__restrict __sig)
     ;






extern int sigwaitinfo (const sigset_t *__restrict __set,
   siginfo_t *__restrict __info) ;






extern int sigtimedwait (const sigset_t *__restrict __set,
    siginfo_t *__restrict __info,
    const struct timespec *__restrict __timeout)
     ;



extern int sigqueue (__pid_t __pid, int __sig, const union sigval __val)
     ;
extern const char *const _sys_siglist[65];
extern const char *const sys_siglist[65];



struct _fpx_sw_bytes
{
  __uint32_t magic1;
  __uint32_t extended_size;
  __uint64_t xstate_bv;
  __uint32_t xstate_size;
  __uint32_t padding[7];
};

struct _fpreg
{
  unsigned short significand[4];
  unsigned short exponent;
};

struct _fpxreg
{
  unsigned short significand[4];
  unsigned short exponent;
  unsigned short padding[3];
};

struct _xmmreg
{
  __uint32_t element[4];
};





struct _fpstate
{

  __uint32_t cw;
  __uint32_t sw;
  __uint32_t tag;
  __uint32_t ipoff;
  __uint32_t cssel;
  __uint32_t dataoff;
  __uint32_t datasel;
  struct _fpreg _st[8];
  unsigned short status;
  unsigned short magic;


  __uint32_t _fxsr_env[6];
  __uint32_t mxcsr;
  __uint32_t reserved;
  struct _fpxreg _fxsr_st[8];
  struct _xmmreg _xmm[8];
  __uint32_t padding[56];
};
struct sigcontext
{
  unsigned short gs, __gsh;
  unsigned short fs, __fsh;
  unsigned short es, __esh;
  unsigned short ds, __dsh;
  unsigned long edi;
  unsigned long esi;
  unsigned long ebp;
  unsigned long esp;
  unsigned long ebx;
  unsigned long edx;
  unsigned long ecx;
  unsigned long eax;
  unsigned long trapno;
  unsigned long err;
  unsigned long eip;
  unsigned short cs, __csh;
  unsigned long eflags;
  unsigned long esp_at_signal;
  unsigned short ss, __ssh;
  struct _fpstate * fpstate;
  unsigned long oldmask;
  unsigned long cr2;
};
struct _xsave_hdr
{
  __uint64_t xstate_bv;
  __uint64_t reserved1[2];
  __uint64_t reserved2[5];
};

struct _ymmh_state
{
  __uint32_t ymmh_space[64];
};

struct _xstate
{
  struct _fpstate fpstate;
  struct _xsave_hdr xstate_hdr;
  struct _ymmh_state ymmh;
};


extern int sigreturn (struct sigcontext *__scp) ;










extern int siginterrupt (int __sig, int __interrupt) ;

struct sigstack
  {
    void *ss_sp;
    int ss_onstack;
  };



enum
{
  SS_ONSTACK = 1,

  SS_DISABLE

};
typedef struct sigaltstack
  {
    void *ss_sp;
    int ss_flags;
    size_t ss_size;
  } stack_t;


typedef int greg_t;





typedef greg_t gregset_t[19];
struct _libc_fpreg
{
  unsigned short int significand[4];
  unsigned short int exponent;
};

struct _libc_fpstate
{
  unsigned long int cw;
  unsigned long int sw;
  unsigned long int tag;
  unsigned long int ipoff;
  unsigned long int cssel;
  unsigned long int dataoff;
  unsigned long int datasel;
  struct _libc_fpreg _st[8];
  unsigned long int status;
};


typedef struct _libc_fpstate *fpregset_t;


typedef struct
  {
    gregset_t gregs;


    fpregset_t fpregs;
    unsigned long int oldmask;
    unsigned long int cr2;
  } mcontext_t;


typedef struct ucontext
  {
    unsigned long int uc_flags;
    struct ucontext *uc_link;
    stack_t uc_stack;
    mcontext_t uc_mcontext;
    __sigset_t uc_sigmask;
    struct _libc_fpstate __fpregs_mem;
  } ucontext_t;





extern int sigstack (struct sigstack *__ss, struct sigstack *__oss)
     ;



extern int sigaltstack (const struct sigaltstack *__restrict __ss,
   struct sigaltstack *__restrict __oss) ;
extern int pthread_sigmask (int __how,
       const __sigset_t *__restrict __newmask,
       __sigset_t *__restrict __oldmask);


extern int pthread_kill (pthread_t __threadid, int __signo) ;






extern int __libc_current_sigrtmin (void) ;

extern int __libc_current_sigrtmax (void) ;






typedef long int __gwchar_t;

typedef struct
  {
    __extension__ long long int quot;
    __extension__ long long int rem;
  } imaxdiv_t;





extern intmax_t imaxabs (intmax_t __n) ;


extern imaxdiv_t imaxdiv (intmax_t __numer, intmax_t __denom)
      ;


extern intmax_t strtoimax (const char *__restrict __nptr,
      char **__restrict __endptr, int __base) ;


extern uintmax_t strtoumax (const char *__restrict __nptr,
       char ** __restrict __endptr, int __base) ;


extern intmax_t wcstoimax (const __gwchar_t *__restrict __nptr,
      __gwchar_t **__restrict __endptr, int __base)
     ;


extern uintmax_t wcstoumax (const __gwchar_t *__restrict __nptr,
       __gwchar_t ** __restrict __endptr, int __base)
     ;



struct timezone
  {
    int tz_minuteswest;
    int tz_dsttime;
  };

typedef struct timezone *__restrict __timezone_ptr_t;
extern int gettimeofday (struct timeval *__restrict __tv,
    __timezone_ptr_t __tz) ;




extern int settimeofday (const struct timeval *__tv,
    const struct timezone *__tz)
     ;





extern int adjtime (const struct timeval *__delta,
      struct timeval *__olddelta) ;




enum __itimer_which
  {

    ITIMER_REAL = 0,


    ITIMER_VIRTUAL = 1,



    ITIMER_PROF = 2

  };



struct itimerval
  {

    struct timeval it_interval;

    struct timeval it_value;
  };






typedef int __itimer_which_t;




extern int getitimer (__itimer_which_t __which,
        struct itimerval *__value) ;




extern int setitimer (__itimer_which_t __which,
        const struct itimerval *__restrict __new,
        struct itimerval *__restrict __old) ;




extern int utimes (const char *__file, const struct timeval __tvp[2])
     ;



extern int lutimes (const char *__file, const struct timeval __tvp[2])
     ;


extern int futimes (int __fd, const struct timeval __tvp[2]) ;





typedef int bpf_int32;
typedef u_int bpf_u_int32;
struct bpf_program {
 u_int bf_len;
 struct bpf_insn *bf_insns;
};

struct bpf_insn {
 u_short code;
 u_char jt;
 u_char jf;
 bpf_u_int32 k;
};






struct bpf_aux_data {
 u_short vlan_tag_present;
 u_short vlan_tag;
};







 extern int bpf_validate(const struct bpf_insn *, int);
 extern u_int bpf_filter(const struct bpf_insn *, const u_char *, u_int, u_int);
extern u_int bpf_filter_with_aux_data(const struct bpf_insn *, const u_char *, u_int, u_int, const struct bpf_aux_data *);
typedef struct pcap pcap_t;
typedef struct pcap_dumper pcap_dumper_t;
typedef struct pcap_if pcap_if_t;
typedef struct pcap_addr pcap_addr_t;
struct pcap_file_header {
 bpf_u_int32 magic;
 u_short version_major;
 u_short version_minor;
 bpf_int32 thiszone;
 bpf_u_int32 sigfigs;
 bpf_u_int32 snaplen;
 bpf_u_int32 linktype;
};
typedef enum {
       PCAP_D_INOUT = 0,
       PCAP_D_IN,
       PCAP_D_OUT
} pcap_direction_t;
struct pcap_pkthdr {
 struct timeval ts;
 bpf_u_int32 caplen;
 bpf_u_int32 len;
};




struct pcap_stat {
 u_int ps_recv;
 u_int ps_drop;
 u_int ps_ifdrop;





};
struct pcap_if {
 struct pcap_if *next;
 char *name;
 char *description;
 struct pcap_addr *addresses;
 bpf_u_int32 flags;
};
struct pcap_addr {
 struct pcap_addr *next;
 struct sockaddr *addr;
 struct sockaddr *netmask;
 struct sockaddr *broadaddr;
 struct sockaddr *dstaddr;
};

typedef void (*pcap_handler)(u_char *, const struct pcap_pkthdr *,
        const u_char *);
 extern char *pcap_lookupdev(char *)
;

 extern int pcap_lookupnet(const char *, bpf_u_int32 *, bpf_u_int32 *, char *);

 extern pcap_t *pcap_create(const char *, char *);
 extern int pcap_set_snaplen(pcap_t *, int);
 extern int pcap_set_promisc(pcap_t *, int);
 extern int pcap_can_set_rfmon(pcap_t *);
 extern int pcap_set_rfmon(pcap_t *, int);
 extern int pcap_set_timeout(pcap_t *, int);
 extern int pcap_set_tstamp_type(pcap_t *, int);
 extern int pcap_set_immediate_mode(pcap_t *, int);
 extern int pcap_set_buffer_size(pcap_t *, int);
 extern int pcap_set_tstamp_precision(pcap_t *, int);
 extern int pcap_get_tstamp_precision(pcap_t *);
 extern int pcap_activate(pcap_t *);

 extern int pcap_list_tstamp_types(pcap_t *, int **);
 extern void pcap_free_tstamp_types(int *);
 extern int pcap_tstamp_type_name_to_val(const char *);
 extern const char *pcap_tstamp_type_val_to_name(int);
 extern const char *pcap_tstamp_type_val_to_description(int);


 extern int pcap_set_protocol_linux(pcap_t *, int);
 extern pcap_t *pcap_open_live(const char *, int, int, int, char *);
 extern pcap_t *pcap_open_dead(int, int);
 extern pcap_t *pcap_open_dead_with_tstamp_precision(int, int, u_int);
 extern pcap_t *pcap_open_offline_with_tstamp_precision(const char *, u_int, char *);
 extern pcap_t *pcap_open_offline(const char *, char *);
  extern pcap_t *pcap_fopen_offline_with_tstamp_precision(FILE *, u_int, char *);
  extern pcap_t *pcap_fopen_offline(FILE *, char *);


 extern void pcap_close(pcap_t *);
 extern int pcap_loop(pcap_t *, int, pcap_handler, u_char *);
 extern int pcap_dispatch(pcap_t *, int, pcap_handler, u_char *);
 extern const u_char *pcap_next(pcap_t *, struct pcap_pkthdr *);
 extern int pcap_next_ex(pcap_t *, struct pcap_pkthdr **, const u_char **);
 extern void pcap_breakloop(pcap_t *);
 extern int pcap_stats(pcap_t *, struct pcap_stat *);
 extern int pcap_setfilter(pcap_t *, struct bpf_program *);
 extern int pcap_setdirection(pcap_t *, pcap_direction_t);
 extern int pcap_getnonblock(pcap_t *, char *);
 extern int pcap_setnonblock(pcap_t *, int, char *);
 extern int pcap_inject(pcap_t *, const void *, size_t);
 extern int pcap_sendpacket(pcap_t *, const u_char *, int);
 extern const char *pcap_statustostr(int);
 extern const char *pcap_strerror(int);
 extern char *pcap_geterr(pcap_t *);
 extern void pcap_perror(pcap_t *, const char *);
 extern int pcap_compile(pcap_t *, struct bpf_program *, const char *, int,
     bpf_u_int32);
 extern int pcap_compile_nopcap(int, int, struct bpf_program *,
     const char *, int, bpf_u_int32);
 extern void pcap_freecode(struct bpf_program *);
 extern int pcap_offline_filter(const struct bpf_program *,
     const struct pcap_pkthdr *, const u_char *);
 extern int pcap_datalink(pcap_t *);
 extern int pcap_datalink_ext(pcap_t *);
 extern int pcap_list_datalinks(pcap_t *, int **);
 extern int pcap_set_datalink(pcap_t *, int);
 extern void pcap_free_datalinks(int *);
 extern int pcap_datalink_name_to_val(const char *);
 extern const char *pcap_datalink_val_to_name(int);
 extern const char *pcap_datalink_val_to_description(int);
 extern int pcap_snapshot(pcap_t *);
 extern int pcap_is_swapped(pcap_t *);
 extern int pcap_major_version(pcap_t *);
 extern int pcap_minor_version(pcap_t *);
 extern int pcap_bufsize(pcap_t *);


 extern FILE *pcap_file(pcap_t *);
 extern int pcap_fileno(pcap_t *);





 extern pcap_dumper_t *pcap_dump_open(pcap_t *, const char *);
 extern pcap_dumper_t *pcap_dump_fopen(pcap_t *, FILE *fp);
 extern pcap_dumper_t *pcap_dump_open_append(pcap_t *, const char *);
 extern FILE *pcap_dump_file(pcap_dumper_t *);
 extern long pcap_dump_ftell(pcap_dumper_t *);
 extern int64_t pcap_dump_ftell64(pcap_dumper_t *);
 extern int pcap_dump_flush(pcap_dumper_t *);
 extern void pcap_dump_close(pcap_dumper_t *);
 extern void pcap_dump(u_char *, const struct pcap_pkthdr *, const u_char *);

 extern int pcap_findalldevs(pcap_if_t **, char *);
 extern void pcap_freealldevs(pcap_if_t *);
 extern const char *pcap_lib_version(void);
  extern u_int bpf_filter(const struct bpf_insn *, const u_char *, u_int, u_int);

 extern int bpf_validate(const struct bpf_insn *f, int len);
 extern char *bpf_image(const struct bpf_insn *, int);
 extern void bpf_dump(const struct bpf_program *, int);
  extern int pcap_get_selectable_fd(pcap_t *);
  extern struct timeval *pcap_get_required_select_timeout(pcap_t *);
struct pcap_rmtauth
{
 int type;







 char *username;







 char *password;
};
 extern pcap_t *pcap_open(const char *source, int snaplen, int flags,
     int read_timeout, struct pcap_rmtauth *auth, char *errbuf);
 extern int pcap_createsrcstr(char *source, int type, const char *host,
     const char *port, const char *name, char *errbuf);
 extern int pcap_parsesrcstr(const char *source, int *type, char *host,
     char *port, char *name, char *errbuf);
 extern int pcap_findalldevs_ex(char *source, struct pcap_rmtauth *auth,
     pcap_if_t **alldevs, char *errbuf);
struct pcap_samp
{



 int method;





 int value;
};




 extern struct pcap_samp *pcap_setsampling(pcap_t *p);
 extern int pcap_remoteact_accept(const char *address, const char *port,
     const char *hostlist, char *connectinghost,
     struct pcap_rmtauth *auth, char *errbuf);
 extern int pcap_remoteact_list(char *hostlist, char sep, int size,
     char *errbuf);
 extern int pcap_remoteact_close(const char *host, char *errbuf);
 extern void pcap_remoteact_cleanup(void);






void pcap_fmt_errmsg_for_errno(char *, size_t, int,
    const char *, ...) ;
struct pcap_opt {
 char *device;
 int timeout;
 u_int buffer_size;
 int promisc;
 int rfmon;
 int immediate;
 int nonblock;
 int tstamp_type;
 int tstamp_precision;





 int protocol;




};

typedef int (*activate_op_t)(pcap_t *);
typedef int (*can_set_rfmon_op_t)(pcap_t *);
typedef int (*read_op_t)(pcap_t *, int cnt, pcap_handler, u_char *);
typedef int (*next_packet_op_t)(pcap_t *, struct pcap_pkthdr *, u_char **);
typedef int (*inject_op_t)(pcap_t *, const void *, size_t);
typedef void (*save_current_filter_op_t)(pcap_t *, const char *);
typedef int (*setfilter_op_t)(pcap_t *, struct bpf_program *);
typedef int (*setdirection_op_t)(pcap_t *, pcap_direction_t);
typedef int (*set_datalink_op_t)(pcap_t *, int);
typedef int (*getnonblock_op_t)(pcap_t *);
typedef int (*setnonblock_op_t)(pcap_t *, int);
typedef int (*stats_op_t)(pcap_t *, struct pcap_stat *);
typedef void (*cleanup_op_t)(pcap_t *);





struct pcap {



 read_op_t read_op;




 next_packet_op_t next_packet_op;




 int fd;





 u_int bufsize;
 void *buffer;
 u_char *bp;
 int cc;

 sig_atomic_t break_loop;

 void *priv;





 int swapped;
 FILE *rfile;
 u_int fddipad;
 struct pcap *next;







 int version_major;
 int version_minor;

 int snapshot;
 int linktype;
 int linktype_ext;
 int tzoff;
 int offset;
 int activated;
 int oldstyle;

 struct pcap_opt opt;




 u_char *pkt;






 pcap_direction_t direction;




 int bpf_codegen_flags;


 int selectable_fd;
 struct timeval *required_select_timeout;





 struct bpf_program fcode;

 char errbuf[256 + 1];
 int dlt_count;
 u_int *dlt_list;
 int tstamp_type_count;
 u_int *tstamp_type_list;
 int tstamp_precision_count;
 u_int *tstamp_precision_list;

 struct pcap_pkthdr pcap_header;




 activate_op_t activate_op;
 can_set_rfmon_op_t can_set_rfmon_op;
 inject_op_t inject_op;
 save_current_filter_op_t save_current_filter_op;
 setfilter_op_t setfilter_op;
 setdirection_op_t setdirection_op;
 set_datalink_op_t set_datalink_op;
 getnonblock_op_t getnonblock_op;
 setnonblock_op_t setnonblock_op;
 stats_op_t stats_op;




 pcap_handler oneshot_callback;
 cleanup_op_t cleanup_op;
};
struct pcap_timeval {
    bpf_int32 tv_sec;
    bpf_int32 tv_usec;
};
struct pcap_sf_pkthdr {
    struct pcap_timeval ts;
    bpf_u_int32 caplen;
    bpf_u_int32 len;
};
struct pcap_sf_patched_pkthdr {
    struct pcap_timeval ts;
    bpf_u_int32 caplen;
    bpf_u_int32 len;
    int index;
    unsigned short protocol;
    unsigned char pkt_type;
};





struct oneshot_userdata {
 struct pcap_pkthdr *hdr;
 const u_char **pkt;
 pcap_t *pd;
};





int pcap_offline_read(pcap_t *, int, pcap_handler, u_char *);


int pcap_getnonblock_fd(pcap_t *);
int pcap_setnonblock_fd(pcap_t *p, int);
pcap_t *pcap_create_interface(const char *, char *);
pcap_t *pcap_create_common(char *, size_t);
int pcap_do_addexit(pcap_t *);
void pcap_add_to_pcaps_to_close(pcap_t *);
void pcap_remove_from_pcaps_to_close(pcap_t *);
void pcap_cleanup_live_common(pcap_t *);
int pcap_check_activated(pcap_t *);
struct pcap_if_list;
typedef struct pcap_if_list pcap_if_list_t;
typedef int (*get_if_flags_func)(const char *, bpf_u_int32 *, char *);
int pcap_platform_finddevs(pcap_if_list_t *, char *);

int pcap_findalldevs_interfaces(pcap_if_list_t *, char *,
     int (*)(const char *), get_if_flags_func);

pcap_if_t *find_or_add_dev(pcap_if_list_t *, const char *, bpf_u_int32,
     get_if_flags_func, const char *, char *);
pcap_if_t *find_dev(pcap_if_list_t *, const char *);
pcap_if_t *add_dev(pcap_if_list_t *, const char *, bpf_u_int32, const char *,
     char *);
int add_addr_to_dev(pcap_if_t *, struct sockaddr *, size_t,
     struct sockaddr *, size_t, struct sockaddr *, size_t,
     struct sockaddr *dstaddr, size_t, char *errbuf);

pcap_if_t *find_or_add_if(pcap_if_list_t *, const char *, bpf_u_int32,
     get_if_flags_func, char *);
int add_addr_to_if(pcap_if_list_t *, const char *, bpf_u_int32,
     get_if_flags_func,
     struct sockaddr *, size_t, struct sockaddr *, size_t,
     struct sockaddr *, size_t, struct sockaddr *, size_t, char *);
pcap_t *pcap_open_offline_common(char *ebuf, size_t size);
void sf_cleanup(pcap_t *p);
void pcap_oneshot(u_char *, const struct pcap_pkthdr *, const u_char *);





int install_bpf_program(pcap_t *, struct bpf_program *);

int pcap_strcasecmp(const char *, const char *);

struct slist;

struct stmt {
 int code;
 struct slist *jt;
 struct slist *jf;
 bpf_int32 k;
};

struct slist {
 struct stmt s;
 struct slist *next;
};





typedef bpf_u_int32 atomset;






typedef bpf_u_int32 *uset;







struct edge {
 int id;
 int code;
 uset edom;
 struct block *succ;
 struct block *pred;
 struct edge *next;
};

struct block {
 int id;
 struct slist *stmts;
 struct stmt s;
 int mark;
 u_int longjt;
 u_int longjf;
 int level;
 int offset;
 int sense;
 struct edge et;
 struct edge ef;
 struct block *head;
 struct block *link;
 uset dom;
 uset closure;
 struct edge *in_edges;
 atomset def, kill;
 atomset in_use;
 atomset out_use;
 int oval;
 int val[(16 +2)];
};






struct arth {
 struct block *b;
 struct slist *s;
 int regno;
};

struct qual {
 unsigned char addr;
 unsigned char proto;
 unsigned char dir;
 unsigned char pad;
};

struct _compiler_state;

typedef struct _compiler_state compiler_state_t;

struct arth *gen_loadi(compiler_state_t *, int);
struct arth *gen_load(compiler_state_t *, int, struct arth *, int);
struct arth *gen_loadlen(compiler_state_t *);
struct arth *gen_neg(compiler_state_t *, struct arth *);
struct arth *gen_arth(compiler_state_t *, int, struct arth *, struct arth *);

void gen_and(struct block *, struct block *);
void gen_or(struct block *, struct block *);
void gen_not(struct block *);

struct block *gen_scode(compiler_state_t *, const char *, struct qual);
struct block *gen_ecode(compiler_state_t *, const u_char *, struct qual);
struct block *gen_acode(compiler_state_t *, const u_char *, struct qual);
struct block *gen_mcode(compiler_state_t *, const char *, const char *,
    unsigned int, struct qual);

struct block *gen_mcode6(compiler_state_t *, const char *, const char *,
    unsigned int, struct qual);

struct block *gen_ncode(compiler_state_t *, const char *, bpf_u_int32,
    struct qual);
struct block *gen_proto_abbrev(compiler_state_t *, int);
struct block *gen_relation(compiler_state_t *, int, struct arth *,
    struct arth *, int);
struct block *gen_less(compiler_state_t *, int);
struct block *gen_greater(compiler_state_t *, int);
struct block *gen_byteop(compiler_state_t *, int, int, int);
struct block *gen_broadcast(compiler_state_t *, int);
struct block *gen_multicast(compiler_state_t *, int);
struct block *gen_inbound(compiler_state_t *, int);

struct block *gen_llc(compiler_state_t *);
struct block *gen_llc_i(compiler_state_t *);
struct block *gen_llc_s(compiler_state_t *);
struct block *gen_llc_u(compiler_state_t *);
struct block *gen_llc_s_subtype(compiler_state_t *, bpf_u_int32);
struct block *gen_llc_u_subtype(compiler_state_t *, bpf_u_int32);

struct block *gen_vlan(compiler_state_t *, int);
struct block *gen_mpls(compiler_state_t *, int);

struct block *gen_pppoed(compiler_state_t *);
struct block *gen_pppoes(compiler_state_t *, int);

struct block *gen_geneve(compiler_state_t *, int);

struct block *gen_atmfield_code(compiler_state_t *, int, bpf_int32,
    bpf_u_int32, int);
struct block *gen_atmtype_abbrev(compiler_state_t *, int type);
struct block *gen_atmmulti_abbrev(compiler_state_t *, int type);

struct block *gen_mtp2type_abbrev(compiler_state_t *, int type);
struct block *gen_mtp3field_code(compiler_state_t *, int, bpf_u_int32,
    bpf_u_int32, int);


__attribute((noreturn))

struct block *gen_pf_ifname(compiler_state_t *, const char *);

__attribute((noreturn))

struct block *gen_pf_rnr(compiler_state_t *, int);

__attribute((noreturn))

struct block *gen_pf_srnr(compiler_state_t *, int);

__attribute((noreturn))

struct block *gen_pf_ruleset(compiler_state_t *, char *);

__attribute((noreturn))

struct block *gen_pf_reason(compiler_state_t *, int);

__attribute((noreturn))

struct block *gen_pf_action(compiler_state_t *, int);

struct block *gen_p80211_type(compiler_state_t *, int, int);
struct block *gen_p80211_fcdir(compiler_state_t *, int);
struct icode {
 struct block *root;
 int cur_mark;
};

void bpf_optimize(compiler_state_t *, struct icode *ic);
void __attribute((noreturn)) bpf_syntax_error(compiler_state_t *, const char *);
void __attribute((noreturn)) bpf_error(compiler_state_t *, const char *, ...)
    ;

void finish_parse(compiler_state_t *, struct block *);
char *sdup(compiler_state_t *, const char *);

struct bpf_insn *icode_to_fcode(compiler_state_t *, struct icode *,
    struct block *, u_int *);
void sappend(struct slist *, struct slist *);





int pcap_parse(void *, compiler_state_t *);
  enum yytokentype
  {
    DST = 258,
    SRC = 259,
    HOST = 260,
    GATEWAY = 261,
    NET = 262,
    NETMASK = 263,
    PORT = 264,
    PORTRANGE = 265,
    LESS = 266,
    GREATER = 267,
    PROTO = 268,
    PROTOCHAIN = 269,
    CBYTE = 270,
    ARP = 271,
    RARP = 272,
    IP = 273,
    SCTP = 274,
    TCP = 275,
    UDP = 276,
    ICMP = 277,
    IGMP = 278,
    IGRP = 279,
    PIM = 280,
    VRRP = 281,
    CARP = 282,
    ATALK = 283,
    AARP = 284,
    DECNET = 285,
    LAT = 286,
    SCA = 287,
    MOPRC = 288,
    MOPDL = 289,
    TK_BROADCAST = 290,
    TK_MULTICAST = 291,
    NUM = 292,
    INBOUND = 293,
    OUTBOUND = 294,
    PF_IFNAME = 295,
    PF_RSET = 296,
    PF_RNR = 297,
    PF_SRNR = 298,
    PF_REASON = 299,
    PF_ACTION = 300,
    TYPE = 301,
    SUBTYPE = 302,
    DIR = 303,
    ADDR1 = 304,
    ADDR2 = 305,
    ADDR3 = 306,
    ADDR4 = 307,
    RA = 308,
    TA = 309,
    LINK = 310,
    GEQ = 311,
    LEQ = 312,
    NEQ = 313,
    ID = 314,
    EID = 315,
    HID = 316,
    HID6 = 317,
    AID = 318,
    LSH = 319,
    RSH = 320,
    LEN = 321,
    IPV6 = 322,
    ICMPV6 = 323,
    AH = 324,
    ESP = 325,
    VLAN = 326,
    MPLS = 327,
    PPPOED = 328,
    PPPOES = 329,
    GENEVE = 330,
    ISO = 331,
    ESIS = 332,
    CLNP = 333,
    ISIS = 334,
    L1 = 335,
    L2 = 336,
    IIH = 337,
    LSP = 338,
    SNP = 339,
    CSNP = 340,
    PSNP = 341,
    STP = 342,
    IPX = 343,
    NETBEUI = 344,
    LANE = 345,
    LLC = 346,
    METAC = 347,
    BCC = 348,
    SC = 349,
    ILMIC = 350,
    OAMF4EC = 351,
    OAMF4SC = 352,
    OAM = 353,
    OAMF4 = 354,
    CONNECTMSG = 355,
    METACONNECT = 356,
    VPI = 357,
    VCI = 358,
    RADIO = 359,
    FISU = 360,
    LSSU = 361,
    MSU = 362,
    HFISU = 363,
    HLSSU = 364,
    HMSU = 365,
    SIO = 366,
    OPC = 367,
    DPC = 368,
    SLS = 369,
    HSIO = 370,
    HOPC = 371,
    HDPC = 372,
    HSLS = 373,
    OR = 374,
    AND = 375,
    UMINUS = 376
  };
union YYSTYPE
{

 int i;
 bpf_u_int32 h;
 u_char *e;
 char *s;
 struct stmt *stmt;
 struct arth *a;
 struct {
  struct qual q;
  int atmfieldtype;
  int mtp3fieldtype;
  struct block *b;
 } blk;
 struct block *rblk;
};

typedef union YYSTYPE YYSTYPE;






int pcap_parse (void *yyscanner, compiler_state_t *cstate);

















extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) ;


extern void *memmove (void *__dest, const void *__src, size_t __n)
     ;






extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     ;





extern void *memset (void *__s, int __c, size_t __n) ;


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     ;
extern void *memchr (const void *__s, int __c, size_t __n)
      ;




extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     ;

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     ;


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     ;

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) ;


extern int strcmp (const char *__s1, const char *__s2)
     ;

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     ;


extern int strcoll (const char *__s1, const char *__s2)
     ;

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     ;






typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;


extern int strcoll_l (const char *__s1, const char *__s2, __locale_t __l)
     ;

extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    __locale_t __l) ;




extern char *strdup (const char *__s)
     ;






extern char *strndup (const char *__string, size_t __n)
     ;

extern char *strchr (const char *__s, int __c)
     ;
extern char *strrchr (const char *__s, int __c)
     ;





extern size_t strcspn (const char *__s, const char *__reject)
     ;


extern size_t strspn (const char *__s, const char *__accept)
     ;
extern char *strpbrk (const char *__s, const char *__accept)
     ;
extern char *strstr (const char *__haystack, const char *__needle)
     ;




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     ;




extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     ;

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     ;


extern size_t strlen (const char *__s)
     ;





extern size_t strnlen (const char *__string, size_t __maxlen)
     ;





extern char *strerror (int __errnum) ;

extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r")

                                       ;
extern char *strerror_l (int __errnum, __locale_t __l) ;





extern void __bzero (void *__s, size_t __n) ;



extern void bcopy (const void *__src, void *__dest, size_t __n)
     ;


extern void bzero (void *__s, size_t __n) ;


extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     ;
extern char *index (const char *__s, int __c)
     ;
extern char *rindex (const char *__s, int __c)
     ;




extern int ffs (int __i) ;
extern int strcasecmp (const char *__s1, const char *__s2)
     ;


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     ;
extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     ;




extern char *strsignal (int __sig) ;


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     ;
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     ;



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     ;
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     ;








extern int *__errno_location (void) ;


typedef int8_t flex_int8_t;
typedef uint8_t flex_uint8_t;
typedef int16_t flex_int16_t;
typedef uint16_t flex_uint16_t;
typedef int32_t flex_int32_t;
typedef uint32_t flex_uint32_t;
typedef void* yyscan_t;
typedef struct yy_buffer_state *YY_BUFFER_STATE;




typedef size_t yy_size_t;




struct yy_buffer_state
 {
 FILE *yy_input_file;

 char *yy_ch_buf;
 char *yy_buf_pos;




 int yy_buf_size;




 int yy_n_chars;





 int yy_is_our_buffer;






 int yy_is_interactive;





 int yy_at_bol;

    int yy_bs_lineno;
    int yy_bs_column;




 int yy_fill_buffer;

 int yy_buffer_status;

 };


void pcap_restart (FILE *input_file ,yyscan_t yyscanner );
void pcap__switch_to_buffer (YY_BUFFER_STATE new_buffer ,yyscan_t yyscanner );
YY_BUFFER_STATE pcap__create_buffer (FILE *file,int size ,yyscan_t yyscanner );
void pcap__delete_buffer (YY_BUFFER_STATE b ,yyscan_t yyscanner );
void pcap__flush_buffer (YY_BUFFER_STATE b ,yyscan_t yyscanner );
void pcap_push_buffer_state (YY_BUFFER_STATE new_buffer ,yyscan_t yyscanner );
void pcap_pop_buffer_state (yyscan_t yyscanner );

YY_BUFFER_STATE pcap__scan_buffer (char *base,yy_size_t size ,yyscan_t yyscanner );
YY_BUFFER_STATE pcap__scan_string (const char *yy_str ,yyscan_t yyscanner );
YY_BUFFER_STATE pcap__scan_bytes (const char *bytes,int len ,yyscan_t yyscanner );

void *pcap_alloc (yy_size_t ,yyscan_t yyscanner );
void *pcap_realloc (void *,yy_size_t ,yyscan_t yyscanner );
void pcap_free (void * ,yyscan_t yyscanner );





typedef __useconds_t useconds_t;
extern int access (const char *__name, int __type) ;
extern int faccessat (int __fd, const char *__file, int __type, int __flag)
     ;
extern __off_t lseek (int __fd, __off_t __offset, int __whence) ;
extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) ;





extern ssize_t write (int __fd, const void *__buf, size_t __n) ;
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes,
        __off_t __offset) ;






extern ssize_t pwrite (int __fd, const void *__buf, size_t __n,
         __off_t __offset) ;
extern int pipe (int __pipedes[2]) ;
extern unsigned int alarm (unsigned int __seconds) ;
extern unsigned int sleep (unsigned int __seconds);







extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     ;






extern int usleep (__useconds_t __useconds);
extern int pause (void);



extern int chown (const char *__file, __uid_t __owner, __gid_t __group)
     ;



extern int fchown (int __fd, __uid_t __owner, __gid_t __group) ;




extern int lchown (const char *__file, __uid_t __owner, __gid_t __group)
     ;






extern int fchownat (int __fd, const char *__file, __uid_t __owner,
       __gid_t __group, int __flag)
     ;



extern int chdir (const char *__path) ;



extern int fchdir (int __fd) ;
extern char *getcwd (char *__buf, size_t __size) ;
extern char *getwd (char *__buf)
     ;




extern int dup (int __fd) ;


extern int dup2 (int __fd, int __fd2) ;
extern char **__environ;







extern int execve (const char *__path, char *const __argv[],
     char *const __envp[]) ;




extern int fexecve (int __fd, char *const __argv[], char *const __envp[])
     ;




extern int execv (const char *__path, char *const __argv[])
     ;



extern int execle (const char *__path, const char *__arg, ...)
     ;



extern int execl (const char *__path, const char *__arg, ...)
     ;



extern int execvp (const char *__file, char *const __argv[])
     ;




extern int execlp (const char *__file, const char *__arg, ...)
     ;
extern int nice (int __inc) ;




extern void _exit (int __status) ;





enum
  {
    _PC_LINK_MAX,

    _PC_MAX_CANON,

    _PC_MAX_INPUT,

    _PC_NAME_MAX,

    _PC_PATH_MAX,

    _PC_PIPE_BUF,

    _PC_CHOWN_RESTRICTED,

    _PC_NO_TRUNC,

    _PC_VDISABLE,

    _PC_SYNC_IO,

    _PC_ASYNC_IO,

    _PC_PRIO_IO,

    _PC_SOCK_MAXBUF,

    _PC_FILESIZEBITS,

    _PC_REC_INCR_XFER_SIZE,

    _PC_REC_MAX_XFER_SIZE,

    _PC_REC_MIN_XFER_SIZE,

    _PC_REC_XFER_ALIGN,

    _PC_ALLOC_SIZE_MIN,

    _PC_SYMLINK_MAX,

    _PC_2_SYMLINKS

  };


enum
  {
    _SC_ARG_MAX,

    _SC_CHILD_MAX,

    _SC_CLK_TCK,

    _SC_NGROUPS_MAX,

    _SC_OPEN_MAX,

    _SC_STREAM_MAX,

    _SC_TZNAME_MAX,

    _SC_JOB_CONTROL,

    _SC_SAVED_IDS,

    _SC_REALTIME_SIGNALS,

    _SC_PRIORITY_SCHEDULING,

    _SC_TIMERS,

    _SC_ASYNCHRONOUS_IO,

    _SC_PRIORITIZED_IO,

    _SC_SYNCHRONIZED_IO,

    _SC_FSYNC,

    _SC_MAPPED_FILES,

    _SC_MEMLOCK,

    _SC_MEMLOCK_RANGE,

    _SC_MEMORY_PROTECTION,

    _SC_MESSAGE_PASSING,

    _SC_SEMAPHORES,

    _SC_SHARED_MEMORY_OBJECTS,

    _SC_AIO_LISTIO_MAX,

    _SC_AIO_MAX,

    _SC_AIO_PRIO_DELTA_MAX,

    _SC_DELAYTIMER_MAX,

    _SC_MQ_OPEN_MAX,

    _SC_MQ_PRIO_MAX,

    _SC_VERSION,

    _SC_PAGESIZE,


    _SC_RTSIG_MAX,

    _SC_SEM_NSEMS_MAX,

    _SC_SEM_VALUE_MAX,

    _SC_SIGQUEUE_MAX,

    _SC_TIMER_MAX,




    _SC_BC_BASE_MAX,

    _SC_BC_DIM_MAX,

    _SC_BC_SCALE_MAX,

    _SC_BC_STRING_MAX,

    _SC_COLL_WEIGHTS_MAX,

    _SC_EQUIV_CLASS_MAX,

    _SC_EXPR_NEST_MAX,

    _SC_LINE_MAX,

    _SC_RE_DUP_MAX,

    _SC_CHARCLASS_NAME_MAX,


    _SC_2_VERSION,

    _SC_2_C_BIND,

    _SC_2_C_DEV,

    _SC_2_FORT_DEV,

    _SC_2_FORT_RUN,

    _SC_2_SW_DEV,

    _SC_2_LOCALEDEF,


    _SC_PII,

    _SC_PII_XTI,

    _SC_PII_SOCKET,

    _SC_PII_INTERNET,

    _SC_PII_OSI,

    _SC_POLL,

    _SC_SELECT,

    _SC_UIO_MAXIOV,

    _SC_IOV_MAX = _SC_UIO_MAXIOV,

    _SC_PII_INTERNET_STREAM,

    _SC_PII_INTERNET_DGRAM,

    _SC_PII_OSI_COTS,

    _SC_PII_OSI_CLTS,

    _SC_PII_OSI_M,

    _SC_T_IOV_MAX,



    _SC_THREADS,

    _SC_THREAD_SAFE_FUNCTIONS,

    _SC_GETGR_R_SIZE_MAX,

    _SC_GETPW_R_SIZE_MAX,

    _SC_LOGIN_NAME_MAX,

    _SC_TTY_NAME_MAX,

    _SC_THREAD_DESTRUCTOR_ITERATIONS,

    _SC_THREAD_KEYS_MAX,

    _SC_THREAD_STACK_MIN,

    _SC_THREAD_THREADS_MAX,

    _SC_THREAD_ATTR_STACKADDR,

    _SC_THREAD_ATTR_STACKSIZE,

    _SC_THREAD_PRIORITY_SCHEDULING,

    _SC_THREAD_PRIO_INHERIT,

    _SC_THREAD_PRIO_PROTECT,

    _SC_THREAD_PROCESS_SHARED,


    _SC_NPROCESSORS_CONF,

    _SC_NPROCESSORS_ONLN,

    _SC_PHYS_PAGES,

    _SC_AVPHYS_PAGES,

    _SC_ATEXIT_MAX,

    _SC_PASS_MAX,


    _SC_XOPEN_VERSION,

    _SC_XOPEN_XCU_VERSION,

    _SC_XOPEN_UNIX,

    _SC_XOPEN_CRYPT,

    _SC_XOPEN_ENH_I18N,

    _SC_XOPEN_SHM,


    _SC_2_CHAR_TERM,

    _SC_2_C_VERSION,

    _SC_2_UPE,


    _SC_XOPEN_XPG2,

    _SC_XOPEN_XPG3,

    _SC_XOPEN_XPG4,


    _SC_CHAR_BIT,

    _SC_CHAR_MAX,

    _SC_CHAR_MIN,

    _SC_INT_MAX,

    _SC_INT_MIN,

    _SC_LONG_BIT,

    _SC_WORD_BIT,

    _SC_MB_LEN_MAX,

    _SC_NZERO,

    _SC_SSIZE_MAX,

    _SC_SCHAR_MAX,

    _SC_SCHAR_MIN,

    _SC_SHRT_MAX,

    _SC_SHRT_MIN,

    _SC_UCHAR_MAX,

    _SC_UINT_MAX,

    _SC_ULONG_MAX,

    _SC_USHRT_MAX,


    _SC_NL_ARGMAX,

    _SC_NL_LANGMAX,

    _SC_NL_MSGMAX,

    _SC_NL_NMAX,

    _SC_NL_SETMAX,

    _SC_NL_TEXTMAX,


    _SC_XBS5_ILP32_OFF32,

    _SC_XBS5_ILP32_OFFBIG,

    _SC_XBS5_LP64_OFF64,

    _SC_XBS5_LPBIG_OFFBIG,


    _SC_XOPEN_LEGACY,

    _SC_XOPEN_REALTIME,

    _SC_XOPEN_REALTIME_THREADS,


    _SC_ADVISORY_INFO,

    _SC_BARRIERS,

    _SC_BASE,

    _SC_C_LANG_SUPPORT,

    _SC_C_LANG_SUPPORT_R,

    _SC_CLOCK_SELECTION,

    _SC_CPUTIME,

    _SC_THREAD_CPUTIME,

    _SC_DEVICE_IO,

    _SC_DEVICE_SPECIFIC,

    _SC_DEVICE_SPECIFIC_R,

    _SC_FD_MGMT,

    _SC_FIFO,

    _SC_PIPE,

    _SC_FILE_ATTRIBUTES,

    _SC_FILE_LOCKING,

    _SC_FILE_SYSTEM,

    _SC_MONOTONIC_CLOCK,

    _SC_MULTI_PROCESS,

    _SC_SINGLE_PROCESS,

    _SC_NETWORKING,

    _SC_READER_WRITER_LOCKS,

    _SC_SPIN_LOCKS,

    _SC_REGEXP,

    _SC_REGEX_VERSION,

    _SC_SHELL,

    _SC_SIGNALS,

    _SC_SPAWN,

    _SC_SPORADIC_SERVER,

    _SC_THREAD_SPORADIC_SERVER,

    _SC_SYSTEM_DATABASE,

    _SC_SYSTEM_DATABASE_R,

    _SC_TIMEOUTS,

    _SC_TYPED_MEMORY_OBJECTS,

    _SC_USER_GROUPS,

    _SC_USER_GROUPS_R,

    _SC_2_PBS,

    _SC_2_PBS_ACCOUNTING,

    _SC_2_PBS_LOCATE,

    _SC_2_PBS_MESSAGE,

    _SC_2_PBS_TRACK,

    _SC_SYMLOOP_MAX,

    _SC_STREAMS,

    _SC_2_PBS_CHECKPOINT,


    _SC_V6_ILP32_OFF32,

    _SC_V6_ILP32_OFFBIG,

    _SC_V6_LP64_OFF64,

    _SC_V6_LPBIG_OFFBIG,


    _SC_HOST_NAME_MAX,

    _SC_TRACE,

    _SC_TRACE_EVENT_FILTER,

    _SC_TRACE_INHERIT,

    _SC_TRACE_LOG,


    _SC_LEVEL1_ICACHE_SIZE,

    _SC_LEVEL1_ICACHE_ASSOC,

    _SC_LEVEL1_ICACHE_LINESIZE,

    _SC_LEVEL1_DCACHE_SIZE,

    _SC_LEVEL1_DCACHE_ASSOC,

    _SC_LEVEL1_DCACHE_LINESIZE,

    _SC_LEVEL2_CACHE_SIZE,

    _SC_LEVEL2_CACHE_ASSOC,

    _SC_LEVEL2_CACHE_LINESIZE,

    _SC_LEVEL3_CACHE_SIZE,

    _SC_LEVEL3_CACHE_ASSOC,

    _SC_LEVEL3_CACHE_LINESIZE,

    _SC_LEVEL4_CACHE_SIZE,

    _SC_LEVEL4_CACHE_ASSOC,

    _SC_LEVEL4_CACHE_LINESIZE,



    _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50,

    _SC_RAW_SOCKETS,


    _SC_V7_ILP32_OFF32,

    _SC_V7_ILP32_OFFBIG,

    _SC_V7_LP64_OFF64,

    _SC_V7_LPBIG_OFFBIG,


    _SC_SS_REPL_MAX,


    _SC_TRACE_EVENT_NAME_MAX,

    _SC_TRACE_NAME_MAX,

    _SC_TRACE_SYS_MAX,

    _SC_TRACE_USER_EVENT_MAX,


    _SC_XOPEN_STREAMS,


    _SC_THREAD_ROBUST_PRIO_INHERIT,

    _SC_THREAD_ROBUST_PRIO_PROTECT

  };


enum
  {
    _CS_PATH,


    _CS_V6_WIDTH_RESTRICTED_ENVS,



    _CS_GNU_LIBC_VERSION,

    _CS_GNU_LIBPTHREAD_VERSION,


    _CS_V5_WIDTH_RESTRICTED_ENVS,



    _CS_V7_WIDTH_RESTRICTED_ENVS,



    _CS_LFS_CFLAGS = 1000,

    _CS_LFS_LDFLAGS,

    _CS_LFS_LIBS,

    _CS_LFS_LINTFLAGS,

    _CS_LFS64_CFLAGS,

    _CS_LFS64_LDFLAGS,

    _CS_LFS64_LIBS,

    _CS_LFS64_LINTFLAGS,


    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,

    _CS_XBS5_ILP32_OFF32_LDFLAGS,

    _CS_XBS5_ILP32_OFF32_LIBS,

    _CS_XBS5_ILP32_OFF32_LINTFLAGS,

    _CS_XBS5_ILP32_OFFBIG_CFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LDFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LIBS,

    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,

    _CS_XBS5_LP64_OFF64_CFLAGS,

    _CS_XBS5_LP64_OFF64_LDFLAGS,

    _CS_XBS5_LP64_OFF64_LIBS,

    _CS_XBS5_LP64_OFF64_LINTFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_CFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LIBS,

    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V6_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LIBS,

    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V6_LP64_OFF64_CFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LIBS,

    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V7_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LIBS,

    _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V7_LP64_OFF64_CFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LIBS,

    _CS_POSIX_V7_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,


    _CS_V6_ENV,

    _CS_V7_ENV

  };


extern long int pathconf (const char *__path, int __name)
     ;


extern long int fpathconf (int __fd, int __name) ;


extern long int sysconf (int __name) ;



extern size_t confstr (int __name, char *__buf, size_t __len) ;




extern __pid_t getpid (void) ;


extern __pid_t getppid (void) ;


extern __pid_t getpgrp (void) ;


extern __pid_t __getpgid (__pid_t __pid) ;

extern __pid_t getpgid (__pid_t __pid) ;






extern int setpgid (__pid_t __pid, __pid_t __pgid) ;
extern int setpgrp (void) ;






extern __pid_t setsid (void) ;



extern __pid_t getsid (__pid_t __pid) ;



extern __uid_t getuid (void) ;


extern __uid_t geteuid (void) ;


extern __gid_t getgid (void) ;


extern __gid_t getegid (void) ;




extern int getgroups (int __size, __gid_t __list[]) ;
extern int setuid (__uid_t __uid) ;




extern int setreuid (__uid_t __ruid, __uid_t __euid) ;




extern int seteuid (__uid_t __uid) ;






extern int setgid (__gid_t __gid) ;




extern int setregid (__gid_t __rgid, __gid_t __egid) ;




extern int setegid (__gid_t __gid) ;
extern __pid_t fork (void) ;







extern __pid_t vfork (void) ;





extern char *ttyname (int __fd) ;



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     ;



extern int isatty (int __fd) ;




extern int ttyslot (void) ;




extern int link (const char *__from, const char *__to)
     ;




extern int linkat (int __fromfd, const char *__from, int __tofd,
     const char *__to, int __flags)
     ;




extern int symlink (const char *__from, const char *__to)
     ;




extern ssize_t readlink (const char *__restrict __path,
    char *__restrict __buf, size_t __len)
     ;




extern int symlinkat (const char *__from, int __tofd,
        const char *__to) ;


extern ssize_t readlinkat (int __fd, const char *__restrict __path,
      char *__restrict __buf, size_t __len)
     ;



extern int unlink (const char *__name) ;



extern int unlinkat (int __fd, const char *__name, int __flag)
     ;



extern int rmdir (const char *__path) ;



extern __pid_t tcgetpgrp (int __fd) ;


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) ;






extern char *getlogin (void);







extern int getlogin_r (char *__name, size_t __name_len) ;




extern int setlogin (const char *__name) ;
extern char *optarg;
extern int optind;




extern int opterr;



extern int optopt;
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       ;







extern int gethostname (char *__name, size_t __len) ;






extern int sethostname (const char *__name, size_t __len)
     ;



extern int sethostid (long int __id) ;





extern int getdomainname (char *__name, size_t __len)
     ;
extern int setdomainname (const char *__name, size_t __len)
     ;





extern int vhangup (void) ;


extern int revoke (const char *__file) ;







extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
     ;





extern int acct (const char *__name) ;



extern char *getusershell (void) ;
extern void endusershell (void) ;
extern void setusershell (void) ;





extern int daemon (int __nochdir, int __noclose) ;






extern int chroot (const char *__path) ;



extern char *getpass (const char *__prompt) ;







extern int fsync (int __fd);
extern long int gethostid (void);


extern void sync (void) ;





extern int getpagesize (void) ;




extern int getdtablesize (void) ;
extern int truncate (const char *__file, __off_t __length)
     ;
extern int ftruncate (int __fd, __off_t __length) ;
extern int brk (void *__addr) ;





extern void *sbrk (intptr_t __delta) ;
extern long int syscall (long int __sysno, ...) ;
extern int lockf (int __fd, int __cmd, __off_t __len) ;
extern int fdatasync (int __fildes);






int pcap_lex_init (yyscan_t* scanner);

int pcap_lex_init_extra (compiler_state_t * user_defined,yyscan_t* scanner);




int pcap_lex_destroy (yyscan_t yyscanner );

int pcap_get_debug (yyscan_t yyscanner );

void pcap_set_debug (int debug_flag ,yyscan_t yyscanner );

compiler_state_t * pcap_get_extra (yyscan_t yyscanner );

void pcap_set_extra (compiler_state_t * user_defined ,yyscan_t yyscanner );

FILE *pcap_get_in (yyscan_t yyscanner );

void pcap_set_in (FILE * _in_str ,yyscan_t yyscanner );

FILE *pcap_get_out (yyscan_t yyscanner );

void pcap_set_out (FILE * _out_str ,yyscan_t yyscanner );

   int pcap_get_leng (yyscan_t yyscanner );

char *pcap_get_text (yyscan_t yyscanner );

int pcap_get_lineno (yyscan_t yyscanner );

void pcap_set_lineno (int _line_number ,yyscan_t yyscanner );

int pcap_get_column (yyscan_t yyscanner );

void pcap_set_column (int _column_no ,yyscan_t yyscanner );

YYSTYPE * pcap_get_lval (yyscan_t yyscanner );

void pcap_set_lval (YYSTYPE * yylval_param ,yyscan_t yyscanner );
extern int pcap_lex
               (YYSTYPE * yylval_param ,yyscan_t yyscanner);






struct pcap_etherent {
 u_char addr[6];
 char name[122];
};



 extern struct pcap_etherent *pcap_next_etherent(FILE *);
 extern u_char *pcap_ether_hostton(const char*);
 extern u_char *pcap_ether_aton(const char *);

 extern bpf_u_int32 **pcap_nametoaddr(const char *);
 extern struct addrinfo *pcap_nametoaddrinfo(const char *);
 extern bpf_u_int32 pcap_nametonetaddr(const char *);

 extern int pcap_nametoport(const char *, int *, int *);
 extern int pcap_nametoportrange(const char *, int *, int *, int *);
 extern int pcap_nametoproto(const char *);
 extern int pcap_nametoeproto(const char *);
 extern int pcap_nametollc(const char *);
struct tok {
 int v;
 const char *s;
};

static const struct tok ieee80211_types[] = {
 { 0x08, "data" },
 { 0x00, "mgt" },
 { 0x00, "management" },
 { 0x04, "ctl" },
 { 0x04, "control" },
 { 0, 
     ((void *)0) 
          }
};
static const struct tok ieee80211_mgt_subtypes[] = {
 { 0x00, "assocreq" },
 { 0x00, "assoc-req" },
 { 0x10, "assocresp" },
 { 0x10, "assoc-resp" },
 { 0x20, "reassocreq" },
 { 0x20, "reassoc-req" },
 { 0x30, "reassocresp" },
 { 0x30, "reassoc-resp" },
 { 0x40, "probereq" },
 { 0x40, "probe-req" },
 { 0x50, "proberesp" },
 { 0x50, "probe-resp" },
 { 0x80, "beacon" },
 { 0x90, "atim" },
 { 0xa0, "disassoc" },
 { 0xa0, "disassociation" },
 { 0xb0, "auth" },
 { 0xb0, "authentication" },
 { 0xc0, "deauth" },
 { 0xc0, "deauthentication" },
 { 0, 
     ((void *)0) 
          }
};
static const struct tok ieee80211_ctl_subtypes[] = {
 { 0xa0, "ps-poll" },
 { 0xb0, "rts" },
 { 0xc0, "cts" },
 { 0xd0, "ack" },
 { 0xe0, "cf-end" },
 { 0xf0, "cf-end-ack" },
 { 0, 
     ((void *)0) 
          }
};
static const struct tok ieee80211_data_subtypes[] = {
 { 0x00, "data" },
 { 0x10, "data-cf-ack" },
 { 0x20, "data-cf-poll" },
 { 0x30, "data-cf-ack-poll" },
 { 0x40, "null" },
 { 0x50, "cf-ack" },
 { 0x60, "cf-poll" },
 { 0x70, "cf-ack-poll" },
 { 0x80|0x00, "qos-data" },
 { 0x80|0x10, "qos-data-cf-ack" },
 { 0x80|0x20, "qos-data-cf-poll" },
 { 0x80|0x30, "qos-data-cf-ack-poll" },
 { 0x80|0x40, "qos" },
 { 0x80|0x60, "qos-cf-poll" },
 { 0x80|0x70, "qos-cf-ack-poll" },
 { 0, 
     ((void *)0) 
          }
};
static const struct tok llc_s_subtypes[] = {
 { 0x0001, "rr" },
 { 0x0005, "rnr" },
 { 0x0009, "rej" },
 { 0, 
     ((void *)0) 
          }
};
static const struct tok llc_u_subtypes[] = {
 { 0x03, "ui" },
 { 0x63, "ua" },
 { 0x43, "disc" },
 { 0x0f, "dm" },
 { 0x6f, "sabme" },
 { 0xe3, "test" },
 { 0xaf, "xid" },
 { 0x87, "frmr" },
 { 0, 
     ((void *)0) 
          }
};
struct type2tok {
 int type;
 const struct tok *tok;
};
static const struct type2tok ieee80211_type_subtypes[] = {
 { 0x00, ieee80211_mgt_subtypes },
 { 0x04, ieee80211_ctl_subtypes },
 { 0x08, ieee80211_data_subtypes },
 { 0, 
     ((void *)0) 
          }
};

static int
str2tok(const char *str, const struct tok *toks)
{
 int i={0};

 for (i = 0; toks[i].s != 
                         ((void *)0)
                             ; i++) {
  if (pcap_strcasecmp(toks[i].s, str) == 0)
   return (toks[i].v);
 }
 return (-1);
}

static struct qual qerr = { 255, 255, 255, 255 };

static __attribute((noreturn)) void
pcap_error(void *yyscanner , compiler_state_t *cstate, const char *msg)
{
 bpf_syntax_error(cstate, msg);

}
static __attribute((noreturn)) int
pfreason_to_num(compiler_state_t *cstate, const char *reason )
{
 bpf_error(cstate, "libpcap was compiled on a machine without pf support");

}

static __attribute((noreturn)) int
pfaction_to_num(compiler_state_t *cstate, const char *action )
{
 bpf_error(cstate, "libpcap was compiled on a machine without pf support");

}





typedef unsigned char yytype_uint8;





typedef signed char yytype_int8;





typedef unsigned short int yytype_uint16;





typedef short int yytype_int16;
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};
static const yytype_uint8 yytranslate[] =
{
       0, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 121, 2, 2, 2, 137, 123, 2,
     130, 129, 126, 124, 2, 125, 2, 127, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 136, 2,
     133, 132, 131, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 134, 2, 135, 138, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 122, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
       2, 2, 2, 2, 2, 2, 1, 2, 3, 4,
       5, 6, 7, 8, 9, 10, 11, 12, 13, 14,
      15, 16, 17, 18, 19, 20, 21, 22, 23, 24,
      25, 26, 27, 28, 29, 30, 31, 32, 33, 34,
      35, 36, 37, 38, 39, 40, 41, 42, 43, 44,
      45, 46, 47, 48, 49, 50, 51, 52, 53, 54,
      55, 56, 57, 58, 59, 60, 61, 62, 63, 64,
      65, 66, 67, 68, 69, 70, 71, 72, 73, 74,
      75, 76, 77, 78, 79, 80, 81, 82, 83, 84,
      85, 86, 87, 88, 89, 90, 91, 92, 93, 94,
      95, 96, 97, 98, 99, 100, 101, 102, 103, 104,
     105, 106, 107, 108, 109, 110, 111, 112, 113, 114,
     115, 116, 117, 118, 119, 120, 128
};
static const yytype_int16 yypact[] =
{
    -216, 24, 257, -216, 0, 12, 17, -216, -216, -216,
    -216, -216, -216, -216, -216, -216, -216, -216, -216, -216,
    -216, -216, -216, -216, -216, -216, -216, -216, -216, 16,
      25, 29, 72, -18, 55, -216, -216, -216, -216, -216,
    -216, -25, -25, -216, -25, -25, -216, -216, -216, -216,
    -216, -216, -216, -216, -216, -216, -216, -216, -216, -216,
    -216, -24, -216, -216, -216, -216, -216, -216, -216, -216,
    -216, -216, -216, -216, -216, -216, -216, -216, -216, -216,
    -216, -216, -216, -216, -216, -216, -216, -216, -216, -216,
     604, -216, -30, 489, 489, -216, 125, -216, 734, 3,
    -216, -216, -216, 183, -216, -216, -216, -216, -5, -216,
      39, -216, -216, -54, -216, -216, -216, -216, -216, -216,
    -216, -216, -216, -25, -216, -216, -216, -216, -216, -216,
     604, -16, -108, -216, -216, 373, 373, -216, -103, -10,
       2, -216, -216, -7, 11, -216, -216, -216, 125, 125,
    -216, -3, 21, -216, -216, -216, -216, -216, -216, -216,
    -216, -216, -12, 77, -9, -216, -216, -216, -216, -216,
    -216, 78, -216, -216, -216, 604, -216, -216, -216, 604,
     604, 604, 604, 604, 604, 604, 604, -216, -216, -216,
     604, 604, 604, 604, -216, 111, 113, 114, -216, -216,
    -216, 115, 124, 126, -216, -216, -216, -216, -216, -216,
    -216, 131, 2, 575, -216, 373, 373, -216, 10, -216,
    -216, -216, -216, -216, 112, 137, 138, -216, -216, 47,
     -30, 2, 173, 176, 178, 186, -216, -216, 143, -216,
    -216, -216, -216, -216, -216, 127, -64, -64, 580, 598,
    -104, -104, -108, -108, 575, 575, 575, 575, -216, -98,
    -216, -216, -216, -47, -216, -216, -216, -49, -216, -216,
    -216, -216, 125, 125, -216, -216, -216, -216, -1, -216,
     156, -216, 111, -216, 115, -216, -216, -216, -216, -216,
      59, -216, -216, -216
};




static const yytype_uint8 yydefact[] =
{
       4, 0, 51, 1, 0, 0, 0, 71, 72, 70,
      73, 74, 75, 76, 77, 78, 79, 80, 81, 82,
      83, 84, 85, 86, 88, 87, 178, 113, 114, 0,
       0, 0, 0, 0, 0, 69, 172, 89, 90, 91,
      92, 116, 118, 119, 121, 123, 93, 94, 103, 95,
      96, 97, 98, 99, 100, 102, 101, 104, 105, 106,
     180, 142, 181, 182, 185, 186, 183, 184, 187, 188,
     189, 190, 191, 192, 107, 200, 201, 202, 203, 204,
     205, 206, 207, 208, 209, 210, 211, 212, 213, 24,
       0, 25, 2, 51, 51, 5, 0, 31, 0, 50,
      44, 124, 126, 0, 157, 156, 45, 46, 0, 48,
       0, 110, 111, 0, 127, 128, 129, 130, 147, 148,
     131, 149, 132, 0, 115, 117, 120, 122, 144, 143,
       0, 0, 170, 11, 10, 51, 51, 32, 0, 157,
     156, 15, 21, 18, 20, 22, 39, 12, 0, 0,
      13, 53, 52, 64, 68, 65, 66, 67, 36, 37,
     108, 109, 0, 0, 0, 58, 59, 60, 61, 62,
      63, 34, 35, 38, 125, 0, 151, 153, 155, 0,
       0, 0, 0, 0, 0, 0, 0, 150, 152, 154,
       0, 0, 0, 0, 197, 0, 0, 0, 47, 193,
     218, 0, 0, 0, 49, 214, 174, 173, 176, 177,
     175, 0, 0, 0, 7, 51, 51, 6, 156, 9,
       8, 40, 171, 179, 0, 0, 0, 23, 26, 30,
       0, 29, 0, 0, 0, 0, 137, 138, 134, 141,
     135, 145, 146, 136, 33, 0, 168, 169, 166, 165,
     160, 161, 162, 163, 164, 167, 42, 43, 198, 0,
     194, 195, 219, 0, 215, 216, 112, 156, 17, 16,
      19, 14, 0, 0, 55, 57, 54, 56, 0, 158,
       0, 196, 0, 217, 0, 27, 28, 139, 140, 133,
       0, 199, 220, 159
};


static const yytype_int16 yypgoto[] =
{
    -216, -216, -216, 193, -34, -215, -90, -135, 7, -2,
    -216, -216, -80, -216, -216, -216, -216, 26, -216, 9,
    -216, -216, -216, -216, -216, -216, -216, -216, -216, -216,
     -43, 5, -26, -92, -216, -37, -216, -216, -216, -216,
    -175, -216, -216, -216, -216, -174, -216
};


static const yytype_int16 yydefgoto[] =
{
      -1, 1, 2, 138, 135, 136, 227, 147, 148, 130,
     229, 230, 95, 96, 97, 98, 171, 172, 173, 131,
     100, 101, 174, 238, 289, 240, 102, 243, 120, 122,
     192, 193, 103, 104, 211, 105, 106, 107, 108, 198,
     199, 259, 109, 110, 204, 205, 263
};




static const yytype_int16 yytable[] =
{
      94, 224, 139, -41, 124, 125, 146, 126, 127, 93,
     -13, 99, 26, 137, 228, 273, 133, 134, 128, 118,
     258, 133, 185, 186, 3, 236, 221, 262, 241, 190,
     191, 281, 194, 190, 191, 129, 287, 111, 139, 123,
     123, 119, 123, 123, 282, 214, 219, 237, 284, 112,
     242, 176, 177, 178, 113, 217, 220, 140, 288, 150,
     183, 184, 185, 186, 132, 196, 116, 202, 206, 207,
     -29, -29, 133, 190, 191, 114, 200, 208, 209, 210,
     223, 228, 283, 153, 115, 155, 212, 156, 157, 133,
     134, 94, 94, 140, 149, 176, 177, 178, 218, 218,
      93, 93, 99, 99, 213, 91, 195, 291, 201, 117,
     292, 150, 231, 197, 121, 203, 232, 233, 175, 222,
     225, 123, -41, -41, 139, 91, 187, 188, 189, -13,
     -13, 223, -41, 216, 216, 137, 239, 175, 226, -13,
     234, 235, 215, 215, 99, 99, 149, 123, 194, 245,
     260, 261, 200, 246, 247, 248, 249, 250, 251, 252,
     253, 264, 26, 265, 254, 255, 256, 257, 266, 91,
     187, 188, 189, 268, 269, 270, 271, 274, 218, 267,
     275, 276, 285, 286, 141, 142, 143, 144, 145, 277,
     278, 179, 180, 290, 293, 92, 272, 244, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 216, 94, 0, 0, 0, 0, 0,
       0, 0, 215, 215, 99, 99, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 150, 150, 0, 0, 176,
     177, 178, 0, 0, 0, 0, 89, 179, 180, 181,
     182, 183, 184, 185, 186, 91, 0, -3, 0, 0,
       0, 0, 279, 280, 190, 191, 0, 0, 4, 5,
     149, 149, 6, 7, 8, 9, 10, 11, 12, 13,
      14, 15, 16, 17, 18, 19, 20, 21, 22, 23,
      24, 25, 0, 0, 26, 27, 28, 29, 30, 31,
      32, 33, 34, 0, 0, 181, 182, 183, 184, 185,
     186, 0, 35, 0, 187, 188, 189, 0, 0, 0,
     190, 191, 0, 36, 37, 38, 39, 40, 41, 42,
      43, 44, 45, 46, 47, 48, 49, 50, 51, 52,
      53, 54, 55, 56, 57, 58, 59, 60, 61, 62,
      63, 64, 65, 66, 67, 68, 69, 70, 71, 72,
      73, 74, 75, 76, 77, 78, 79, 80, 81, 82,
      83, 84, 85, 86, 87, 88, 0, 0, 89, 0,
       0, 0, 90, 0, 4, 5, 0, 91, 6, 7,
       8, 9, 10, 11, 12, 13, 14, 15, 16, 17,
      18, 19, 20, 21, 22, 23, 24, 25, 0, 0,
      26, 27, 28, 29, 30, 31, 32, 33, 34, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 35, 0,
       0, 0, 141, 142, 143, 144, 145, 0, 0, 36,
      37, 38, 39, 40, 41, 42, 43, 44, 45, 46,
      47, 48, 49, 50, 51, 52, 53, 54, 55, 56,
      57, 58, 59, 60, 61, 62, 63, 64, 65, 66,
      67, 68, 69, 70, 71, 72, 73, 74, 75, 76,
      77, 78, 79, 80, 81, 82, 83, 84, 85, 86,
      87, 88, 0, 0, 89, 0, 0, 0, 90, 0,
       4, 5, 0, 91, 6, 7, 8, 9, 10, 11,
      12, 13, 14, 15, 16, 17, 18, 19, 20, 21,
      22, 23, 24, 25, 0, 0, 26, 27, 28, 29,
      30, 31, 32, 33, 34, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 35, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 36, 37, 38, 39, 40,
      41, 42, 43, 44, 45, 46, 47, 48, 49, 50,
      51, 52, 53, 54, 55, 56, 57, 58, 59, 60,
      61, 62, 63, 64, 65, 66, 67, 68, 69, 70,
      71, 72, 73, 74, 75, 76, 77, 78, 79, 80,
      81, 82, 83, 84, 85, 86, 87, 88, 0, 0,
      89, 0, 0, 0, 90, 0, 0, 0, 0, 91,
       7, 8, 9, 10, 11, 12, 13, 14, 15, 16,
      17, 18, 19, 20, 21, 22, 23, 24, 25, 179,
     180, 26, 0, 0, 179, 180, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 35,
       0, 0, 179, 180, 0, 0, 0, 0, 0, 0,
      36, 37, 38, 39, 40, 0, 0, 0, 0, 0,
      46, 47, 48, 49, 50, 51, 52, 53, 54, 55,
      56, 57, 58, 59, 0, 0, 0, 181, 182, 183,
     184, 185, 186, 182, 183, 184, 185, 186, 74, 0,
       0, 0, 190, 191, 0, 0, 0, 190, 191, 0,
       0, 0, 183, 184, 185, 186, 0, 0, 0, 90,
       0, 0, 0, 0, 91, 190, 191, 151, 152, 153,
     154, 155, 0, 156, 157, 0, 0, 158, 159, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
       0, 0, 0, 0, 0, 0, 0, 0, 0, 160,
     161, 0, 0, 0, 0, 0, 0, 0, 0, 0,
     162, 163, 164, 165, 166, 167, 168, 169, 170
};

static const yytype_int16 yycheck[] =
{
       2, 8, 94, 0, 41, 42, 96, 44, 45, 2,
       0, 2, 37, 93, 149, 230, 119, 120, 42, 37,
     195, 119, 126, 127, 0, 37, 129, 201, 37, 137,
     138, 129, 37, 137, 138, 59, 37, 37, 130, 41,
      42, 59, 44, 45, 259, 135, 136, 59, 263, 37,
      59, 56, 57, 58, 37, 135, 136, 94, 59, 96,
     124, 125, 126, 127, 90, 108, 37, 110, 122, 123,
     119, 120, 119, 137, 138, 59, 37, 131, 132, 133,
     129, 216, 129, 5, 59, 7, 123, 9, 10, 119,
     120, 93, 94, 130, 96, 56, 57, 58, 135, 136,
      93, 94, 93, 94, 130, 130, 108, 282, 110, 37,
     284, 148, 149, 108, 59, 110, 119, 120, 134, 129,
     127, 123, 119, 120, 216, 130, 131, 132, 133, 119,
     120, 129, 129, 135, 136, 215, 59, 134, 127, 129,
     119, 120, 135, 136, 135, 136, 148, 149, 37, 175,
      37, 37, 37, 179, 180, 181, 182, 183, 184, 185,
     186, 37, 37, 37, 190, 191, 192, 193, 37, 130,
     131, 132, 133, 61, 37, 37, 129, 4, 215, 216,
       4, 3, 272, 273, 59, 60, 61, 62, 63, 3,
      47, 64, 65, 37, 135, 2, 230, 171, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, 215, 216, -1, -1, -1, -1, -1,
      -1, -1, 215, 216, 215, 216, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, 272, 273, -1, -1, 56,
      57, 58, -1, -1, -1, -1, 121, 64, 65, 122,
     123, 124, 125, 126, 127, 130, -1, 0, -1, -1,
      -1, -1, 135, 136, 137, 138, -1, -1, 11, 12,
     272, 273, 15, 16, 17, 18, 19, 20, 21, 22,
      23, 24, 25, 26, 27, 28, 29, 30, 31, 32,
      33, 34, -1, -1, 37, 38, 39, 40, 41, 42,
      43, 44, 45, -1, -1, 122, 123, 124, 125, 126,
     127, -1, 55, -1, 131, 132, 133, -1, -1, -1,
     137, 138, -1, 66, 67, 68, 69, 70, 71, 72,
      73, 74, 75, 76, 77, 78, 79, 80, 81, 82,
      83, 84, 85, 86, 87, 88, 89, 90, 91, 92,
      93, 94, 95, 96, 97, 98, 99, 100, 101, 102,
     103, 104, 105, 106, 107, 108, 109, 110, 111, 112,
     113, 114, 115, 116, 117, 118, -1, -1, 121, -1,
      -1, -1, 125, -1, 11, 12, -1, 130, 15, 16,
      17, 18, 19, 20, 21, 22, 23, 24, 25, 26,
      27, 28, 29, 30, 31, 32, 33, 34, -1, -1,
      37, 38, 39, 40, 41, 42, 43, 44, 45, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, 55, -1,
      -1, -1, 59, 60, 61, 62, 63, -1, -1, 66,
      67, 68, 69, 70, 71, 72, 73, 74, 75, 76,
      77, 78, 79, 80, 81, 82, 83, 84, 85, 86,
      87, 88, 89, 90, 91, 92, 93, 94, 95, 96,
      97, 98, 99, 100, 101, 102, 103, 104, 105, 106,
     107, 108, 109, 110, 111, 112, 113, 114, 115, 116,
     117, 118, -1, -1, 121, -1, -1, -1, 125, -1,
      11, 12, -1, 130, 15, 16, 17, 18, 19, 20,
      21, 22, 23, 24, 25, 26, 27, 28, 29, 30,
      31, 32, 33, 34, -1, -1, 37, 38, 39, 40,
      41, 42, 43, 44, 45, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, 55, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, 66, 67, 68, 69, 70,
      71, 72, 73, 74, 75, 76, 77, 78, 79, 80,
      81, 82, 83, 84, 85, 86, 87, 88, 89, 90,
      91, 92, 93, 94, 95, 96, 97, 98, 99, 100,
     101, 102, 103, 104, 105, 106, 107, 108, 109, 110,
     111, 112, 113, 114, 115, 116, 117, 118, -1, -1,
     121, -1, -1, -1, 125, -1, -1, -1, -1, 130,
      16, 17, 18, 19, 20, 21, 22, 23, 24, 25,
      26, 27, 28, 29, 30, 31, 32, 33, 34, 64,
      65, 37, -1, -1, 64, 65, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, 55,
      -1, -1, 64, 65, -1, -1, -1, -1, -1, -1,
      66, 67, 68, 69, 70, -1, -1, -1, -1, -1,
      76, 77, 78, 79, 80, 81, 82, 83, 84, 85,
      86, 87, 88, 89, -1, -1, -1, 122, 123, 124,
     125, 126, 127, 123, 124, 125, 126, 127, 104, -1,
      -1, -1, 137, 138, -1, -1, -1, 137, 138, -1,
      -1, -1, 124, 125, 126, 127, -1, -1, -1, 125,
      -1, -1, -1, -1, 130, 137, 138, 3, 4, 5,
       6, 7, -1, 9, 10, -1, -1, 13, 14, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      -1, -1, -1, -1, -1, -1, -1, -1, -1, 35,
      36, -1, -1, -1, -1, -1, -1, -1, -1, -1,
      46, 47, 48, 49, 50, 51, 52, 53, 54
};



static const yytype_uint8 yystos[] =
{
       0, 140, 141, 0, 11, 12, 15, 16, 17, 18,
      19, 20, 21, 22, 23, 24, 25, 26, 27, 28,
      29, 30, 31, 32, 33, 34, 37, 38, 39, 40,
      41, 42, 43, 44, 45, 55, 66, 67, 68, 69,
      70, 71, 72, 73, 74, 75, 76, 77, 78, 79,
      80, 81, 82, 83, 84, 85, 86, 87, 88, 89,
      90, 91, 92, 93, 94, 95, 96, 97, 98, 99,
     100, 101, 102, 103, 104, 105, 106, 107, 108, 109,
     110, 111, 112, 113, 114, 115, 116, 117, 118, 121,
     125, 130, 142, 147, 148, 151, 152, 153, 154, 158,
     159, 160, 165, 171, 172, 174, 175, 176, 177, 181,
     182, 37, 37, 37, 59, 59, 37, 37, 37, 59,
     167, 59, 168, 148, 174, 174, 174, 174, 42, 59,
     148, 158, 171, 119, 120, 143, 144, 151, 142, 172,
     174, 59, 60, 61, 62, 63, 145, 146, 147, 148,
     174, 3, 4, 5, 6, 7, 9, 10, 13, 14,
      35, 36, 46, 47, 48, 49, 50, 51, 52, 53,
      54, 155, 156, 157, 161, 134, 56, 57, 58, 64,
      65, 122, 123, 124, 125, 126, 127, 131, 132, 133,
     137, 138, 169, 170, 37, 148, 169, 170, 178, 179,
      37, 148, 169, 170, 183, 184, 122, 123, 131, 132,
     133, 173, 174, 171, 145, 147, 148, 151, 174, 145,
     151, 129, 129, 129, 8, 127, 127, 145, 146, 149,
     150, 174, 119, 120, 119, 120, 37, 59, 162, 59,
     164, 37, 59, 166, 156, 171, 171, 171, 171, 171,
     171, 171, 171, 171, 171, 171, 171, 171, 179, 180,
      37, 37, 184, 185, 37, 37, 37, 174, 61, 37,
      37, 129, 143, 144, 4, 4, 3, 3, 47, 135,
     136, 129, 144, 129, 144, 145, 145, 37, 59, 163,
      37, 179, 184, 135
};


static const yytype_uint8 yyr1[] =
{
       0, 139, 140, 140, 141, 142, 142, 142, 142, 142,
     143, 144, 145, 145, 145, 146, 146, 146, 146, 146,
     146, 146, 146, 146, 147, 148, 149, 149, 149, 150,
     150, 151, 151, 152, 152, 152, 152, 152, 152, 153,
     153, 153, 153, 153, 153, 153, 153, 153, 153, 153,
     154, 154, 155, 155, 155, 155, 155, 155, 155, 155,
     155, 155, 155, 155, 156, 156, 156, 156, 157, 158,
     158, 158, 158, 158, 158, 158, 158, 158, 158, 158,
     158, 158, 158, 158, 158, 158, 158, 158, 158, 158,
     158, 158, 158, 158, 158, 158, 158, 158, 158, 158,
     158, 158, 158, 158, 158, 158, 158, 158, 159, 159,
     159, 159, 159, 159, 159, 159, 159, 159, 159, 159,
     159, 159, 159, 159, 159, 159, 159, 160, 160, 160,
     160, 160, 160, 161, 161, 161, 161, 162, 162, 163,
     163, 164, 165, 165, 165, 166, 166, 167, 167, 168,
     169, 169, 169, 170, 170, 170, 171, 171, 172, 172,
     172, 172, 172, 172, 172, 172, 172, 172, 172, 172,
     172, 172, 172, 173, 173, 173, 173, 173, 174, 174,
     175, 175, 175, 175, 175, 175, 175, 176, 176, 176,
     176, 177, 177, 178, 178, 178, 178, 179, 180, 180,
     181, 181, 181, 181, 181, 181, 182, 182, 182, 182,
     182, 182, 182, 182, 183, 183, 183, 183, 184, 185,
     185
};


static const yytype_uint8 yyr2[] =
{
       0, 2, 2, 1, 0, 1, 3, 3, 3, 3,
       1, 1, 1, 1, 3, 1, 3, 3, 1, 3,
       1, 1, 1, 2, 1, 1, 1, 3, 3, 1,
       1, 1, 2, 3, 2, 2, 2, 2, 2, 2,
       3, 1, 3, 3, 1, 1, 1, 2, 1, 2,
       1, 0, 1, 1, 3, 3, 3, 3, 1, 1,
       1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
       1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
       1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
       1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
       1, 1, 1, 1, 1, 1, 1, 1, 2, 2,
       2, 2, 4, 1, 1, 2, 1, 2, 1, 1,
       2, 1, 2, 1, 1, 2, 1, 2, 2, 2,
       2, 2, 2, 4, 2, 2, 2, 1, 1, 1,
       1, 1, 1, 2, 2, 1, 1, 1, 1, 1,
       1, 1, 1, 1, 1, 1, 1, 1, 4, 6,
       3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
       2, 3, 1, 1, 1, 1, 1, 1, 1, 3,
       1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
       1, 1, 1, 1, 2, 2, 3, 1, 1, 3,
       1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
       1, 1, 1, 1, 1, 2, 2, 3, 1, 1,
       3
};
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, void *yyscanner, compiler_state_t *cstate)
{
  ((void) (yyvaluep));
  ((void) (yyscanner));
  ((void) (cstate));
  if (!yymsg)
    yymsg = "Deleting";
  ;

 
 
 
 
  ((void) (yytype));
 
 
}
int
pcap_parse (void *yyscanner, compiler_state_t *cstate)
{

int yychar={0};






YYSTYPE yylval ={0};


    int pcap_nerrs={0};

    int yystate={0};

    int yyerrstatus={0};
    yytype_int16 yyssa[200]={0};
    yytype_int16 *yyss={0};
    yytype_int16 *yyssp={0};


    YYSTYPE yyvsa[200]={0};
    YYSTYPE *yyvs={0};
    YYSTYPE *yyvsp={0};

    unsigned int yystacksize={0};

  int yyn={0};
  int yyresult={0};

  int yytoken = 0;


  YYSTYPE yyval={0};
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = 200;

  ;

  yystate = 0;
  yyerrstatus = 0;
  pcap_nerrs = 0;
  yychar = (-2);
  goto yysetstate;




 yynewstate:


  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {

      unsigned int yysize = yyssp - yyss + 1;
      if (10000 <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (10000 < yystacksize)
        yystacksize = 10000;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) malloc (((yystacksize) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) + (sizeof (union yyalloc) - 1)));
        if (! yyptr)
          goto yyexhaustedlab;
        do { unsigned int yynewbytes={0}; __builtin_memcpy (&yyptr->yyss_alloc, yyss, (yysize) * sizeof (*(yyss))); yyss = &yyptr->yyss_alloc; yynewbytes = yystacksize * sizeof (*yyss) + (sizeof (union yyalloc) - 1); yyptr += yynewbytes / sizeof (*yyptr); } while (0);
        do { unsigned int yynewbytes={0}; __builtin_memcpy (&yyptr->yyvs_alloc, yyvs, (yysize) * sizeof (*(yyvs))); yyvs = &yyptr->yyvs_alloc; yynewbytes = yystacksize * sizeof (*yyvs) + (sizeof (union yyalloc) - 1); yyptr += yynewbytes / sizeof (*yyptr); } while (0);

        if (yyss1 != yyssa)
          free (yyss1);
      }



      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

     
                                                   ;

      if (yyss + yystacksize - 1 <= yyssp)
        goto yyabortlab;
    }

  ;

  if (yystate == 3)
    goto yyacceptlab;

  goto yybackup;




yybackup:





  yyn = yypact[yystate];
  if ((!!((yyn) == (-216))))
    goto yydefault;




  if (yychar == (-2))
    {
      ;
      yychar = pcap_lex (&yylval, yyscanner);
    }

  if (yychar <= 0)
    {
      yychar = yytoken = 0;
      ;
    }
  else
    {
      yytoken = ((unsigned int) (yychar) <= 376 ? yytranslate[yychar] : 2);
      ;
    }



  yyn += yytoken;
  if (yyn < 0 || 788 < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (0)
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }



  if (yyerrstatus)
    yyerrstatus--;


  ;


  yychar = (-2);

  yystate = yyn;
 
 
 
 
  *++yyvsp = yylval;
 
 

  goto yynewstate;





yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;





yyreduce:

  yylen = yyr2[yyn];
  yyval = yyvsp[1-yylen];


  ;
  switch (yyn)
    {
        case 2:
    {
 finish_parse(cstate, (yyvsp[0].blk).b);
}
    break;

  case 4:
    { (yyval.blk).q = qerr; }
    break;

  case 6:
    { gen_and((yyvsp[-2].blk).b, (yyvsp[0].blk).b); (yyval.blk) = (yyvsp[0].blk); }
    break;

  case 7:
    { gen_and((yyvsp[-2].blk).b, (yyvsp[0].blk).b); (yyval.blk) = (yyvsp[0].blk); }
    break;

  case 8:
    { gen_or((yyvsp[-2].blk).b, (yyvsp[0].blk).b); (yyval.blk) = (yyvsp[0].blk); }
    break;

  case 9:
    { gen_or((yyvsp[-2].blk).b, (yyvsp[0].blk).b); (yyval.blk) = (yyvsp[0].blk); }
    break;

  case 10:
    { (yyval.blk) = (yyvsp[-1].blk); }
    break;

  case 11:
    { (yyval.blk) = (yyvsp[-1].blk); }
    break;

  case 13:
    { (yyval.blk).b = gen_ncode(cstate, 
                                       ((void *)0)
                                           , (bpf_u_int32)(yyvsp[0].i),
         (yyval.blk).q = (yyvsp[-1].blk).q); }
    break;

  case 14:
    { (yyval.blk) = (yyvsp[-1].blk); }
    break;

  case 15:
    { (yyval.blk).b = gen_scode(cstate, (yyvsp[0].s), (yyval.blk).q = (yyvsp[-1].blk).q); }
    break;

  case 16:
    { (yyval.blk).b = gen_mcode(cstate, (yyvsp[-2].s), 
                                                      ((void *)0)
                                                          , (yyvsp[0].i),
        (yyval.blk).q = (yyvsp[-3].blk).q); }
    break;

  case 17:
    { (yyval.blk).b = gen_mcode(cstate, (yyvsp[-2].s), (yyvsp[0].s), 0,
        (yyval.blk).q = (yyvsp[-3].blk).q); }
    break;

  case 18:
    {

      (yyval.blk).q = (yyvsp[-1].blk).q;
      if ((yyval.blk).q.addr == 3)
       bpf_error(cstate, "'port' modifier applied to ip host");
      else if ((yyval.blk).q.addr == 7)
       bpf_error(cstate, "'portrange' modifier applied to ip host");
      else if ((yyval.blk).q.addr == 5)
       bpf_error(cstate, "'proto' modifier applied to ip host");
      else if ((yyval.blk).q.addr == 6)
       bpf_error(cstate, "'protochain' modifier applied to ip host");
      (yyval.blk).b = gen_ncode(cstate, (yyvsp[0].s), 0, (yyval.blk).q);
    }
    break;

  case 19:
    {

      (yyval.blk).b = gen_mcode6(cstate, (yyvsp[-2].s), 
                                                       ((void *)0)
                                                           , (yyvsp[0].i),
        (yyval.blk).q = (yyvsp[-3].blk).q);




    }
    break;

  case 20:
    {

      (yyval.blk).b = gen_mcode6(cstate, (yyvsp[0].s), 0, 128,
        (yyval.blk).q = (yyvsp[-1].blk).q);




    }
    break;

  case 21:
    {
      (yyval.blk).b = gen_ecode(cstate, (yyvsp[0].e), (yyval.blk).q = (yyvsp[-1].blk).q);





      free((yyvsp[0].e));
    }
    break;

  case 22:
    {
      (yyval.blk).b = gen_acode(cstate, (yyvsp[0].e), (yyval.blk).q = (yyvsp[-1].blk).q);





      free((yyvsp[0].e));
    }
    break;

  case 23:
    { gen_not((yyvsp[0].blk).b); (yyval.blk) = (yyvsp[0].blk); }
    break;

  case 24:
    { (yyval.blk) = (yyvsp[-1].blk); }
    break;

  case 25:
    { (yyval.blk) = (yyvsp[-1].blk); }
    break;

  case 27:
    { gen_and((yyvsp[-2].blk).b, (yyvsp[0].blk).b); (yyval.blk) = (yyvsp[0].blk); }
    break;

  case 28:
    { gen_or((yyvsp[-2].blk).b, (yyvsp[0].blk).b); (yyval.blk) = (yyvsp[0].blk); }
    break;

  case 29:
    { (yyval.blk).b = gen_ncode(cstate, 
                                       ((void *)0)
                                           , (bpf_u_int32)(yyvsp[0].i),
         (yyval.blk).q = (yyvsp[-1].blk).q); }
    break;

  case 32:
    { gen_not((yyvsp[0].blk).b); (yyval.blk) = (yyvsp[0].blk); }
    break;

  case 33:
    { ((yyval.blk).q).proto = (unsigned char)((yyvsp[-2].i)), ((yyval.blk).q).dir = (unsigned char)((yyvsp[-1].i)), ((yyval.blk).q).addr = (unsigned char)((yyvsp[0].i)); }
    break;

  case 34:
    { ((yyval.blk).q).proto = (unsigned char)((yyvsp[-1].i)), ((yyval.blk).q).dir = (unsigned char)((yyvsp[0].i)), ((yyval.blk).q).addr = (unsigned char)(0); }
    break;

  case 35:
    { ((yyval.blk).q).proto = (unsigned char)((yyvsp[-1].i)), ((yyval.blk).q).dir = (unsigned char)(0), ((yyval.blk).q).addr = (unsigned char)((yyvsp[0].i)); }
    break;

  case 36:
    { ((yyval.blk).q).proto = (unsigned char)((yyvsp[-1].i)), ((yyval.blk).q).dir = (unsigned char)(0), ((yyval.blk).q).addr = (unsigned char)(5); }
    break;

  case 37:
    { ((yyval.blk).q).proto = (unsigned char)((yyvsp[-1].i)), ((yyval.blk).q).dir = (unsigned char)(0), ((yyval.blk).q).addr = (unsigned char)(6); }
    break;

  case 38:
    { ((yyval.blk).q).proto = (unsigned char)((yyvsp[-1].i)), ((yyval.blk).q).dir = (unsigned char)(0), ((yyval.blk).q).addr = (unsigned char)((yyvsp[0].i)); }
    break;

  case 39:
    { (yyval.blk) = (yyvsp[0].blk); }
    break;

  case 40:
    { (yyval.blk).b = (yyvsp[-1].blk).b; (yyval.blk).q = (yyvsp[-2].blk).q; }
    break;

  case 41:
    { (yyval.blk).b = gen_proto_abbrev(cstate, (yyvsp[0].i)); (yyval.blk).q = qerr; }
    break;

  case 42:
    { (yyval.blk).b = gen_relation(cstate, (yyvsp[-1].i), (yyvsp[-2].a), (yyvsp[0].a), 0);
      (yyval.blk).q = qerr; }
    break;

  case 43:
    { (yyval.blk).b = gen_relation(cstate, (yyvsp[-1].i), (yyvsp[-2].a), (yyvsp[0].a), 1);
      (yyval.blk).q = qerr; }
    break;

  case 44:
    { (yyval.blk).b = (yyvsp[0].rblk); (yyval.blk).q = qerr; }
    break;

  case 45:
    { (yyval.blk).b = gen_atmtype_abbrev(cstate, (yyvsp[0].i)); (yyval.blk).q = qerr; }
    break;

  case 46:
    { (yyval.blk).b = gen_atmmulti_abbrev(cstate, (yyvsp[0].i)); (yyval.blk).q = qerr; }
    break;

  case 47:
    { (yyval.blk).b = (yyvsp[0].blk).b; (yyval.blk).q = qerr; }
    break;

  case 48:
    { (yyval.blk).b = gen_mtp2type_abbrev(cstate, (yyvsp[0].i)); (yyval.blk).q = qerr; }
    break;

  case 49:
    { (yyval.blk).b = (yyvsp[0].blk).b; (yyval.blk).q = qerr; }
    break;

  case 51:
    { (yyval.i) = 0; }
    break;

  case 52:
    { (yyval.i) = 1; }
    break;

  case 53:
    { (yyval.i) = 2; }
    break;

  case 54:
    { (yyval.i) = 3; }
    break;

  case 55:
    { (yyval.i) = 3; }
    break;

  case 56:
    { (yyval.i) = 4; }
    break;

  case 57:
    { (yyval.i) = 4; }
    break;

  case 58:
    { (yyval.i) = 5; }
    break;

  case 59:
    { (yyval.i) = 6; }
    break;

  case 60:
    { (yyval.i) = 7; }
    break;

  case 61:
    { (yyval.i) = 8; }
    break;

  case 62:
    { (yyval.i) = 9; }
    break;

  case 63:
    { (yyval.i) = 10; }
    break;

  case 64:
    { (yyval.i) = 1; }
    break;

  case 65:
    { (yyval.i) = 2; }
    break;

  case 66:
    { (yyval.i) = 3; }
    break;

  case 67:
    { (yyval.i) = 7; }
    break;

  case 68:
    { (yyval.i) = 4; }
    break;

  case 69:
    { (yyval.i) = 1; }
    break;

  case 70:
    { (yyval.i) = 2; }
    break;

  case 71:
    { (yyval.i) = 3; }
    break;

  case 72:
    { (yyval.i) = 4; }
    break;

  case 73:
    { (yyval.i) = 5; }
    break;

  case 74:
    { (yyval.i) = 6; }
    break;

  case 75:
    { (yyval.i) = 7; }
    break;

  case 76:
    { (yyval.i) = 8; }
    break;

  case 77:
    { (yyval.i) = 9; }
    break;

  case 78:
    { (yyval.i) = 10; }
    break;

  case 79:
    { (yyval.i) = 21; }
    break;

  case 80:
    { (yyval.i) = 22; }
    break;

  case 81:
    { (yyval.i) = 41; }
    break;

  case 82:
    { (yyval.i) = 11; }
    break;

  case 83:
    { (yyval.i) = 23; }
    break;

  case 84:
    { (yyval.i) = 12; }
    break;

  case 85:
    { (yyval.i) = 13; }
    break;

  case 86:
    { (yyval.i) = 14; }
    break;

  case 87:
    { (yyval.i) = 16; }
    break;

  case 88:
    { (yyval.i) = 15; }
    break;

  case 89:
    { (yyval.i) = 17; }
    break;

  case 90:
    { (yyval.i) = 18; }
    break;

  case 91:
    { (yyval.i) = 19; }
    break;

  case 92:
    { (yyval.i) = 20; }
    break;

  case 93:
    { (yyval.i) = 24; }
    break;

  case 94:
    { (yyval.i) = 25; }
    break;

  case 95:
    { (yyval.i) = 26; }
    break;

  case 96:
    { (yyval.i) = 31; }
    break;

  case 97:
    { (yyval.i) = 32; }
    break;

  case 98:
    { (yyval.i) = 33; }
    break;

  case 99:
    { (yyval.i) = 39; }
    break;

  case 100:
    { (yyval.i) = 36; }
    break;

  case 101:
    { (yyval.i) = 38; }
    break;

  case 102:
    { (yyval.i) = 37; }
    break;

  case 103:
    { (yyval.i) = 27; }
    break;

  case 104:
    { (yyval.i) = 28; }
    break;

  case 105:
    { (yyval.i) = 29; }
    break;

  case 106:
    { (yyval.i) = 30; }
    break;

  case 107:
    { (yyval.i) = 40; }
    break;

  case 108:
    { (yyval.rblk) = gen_broadcast(cstate, (yyvsp[-1].i)); }
    break;

  case 109:
    { (yyval.rblk) = gen_multicast(cstate, (yyvsp[-1].i)); }
    break;

  case 110:
    { (yyval.rblk) = gen_less(cstate, (yyvsp[0].i)); }
    break;

  case 111:
    { (yyval.rblk) = gen_greater(cstate, (yyvsp[0].i)); }
    break;

  case 112:
    { (yyval.rblk) = gen_byteop(cstate, (yyvsp[-1].i), (yyvsp[-2].i), (yyvsp[0].i)); }
    break;

  case 113:
    { (yyval.rblk) = gen_inbound(cstate, 0); }
    break;

  case 114:
    { (yyval.rblk) = gen_inbound(cstate, 1); }
    break;

  case 115:
    { (yyval.rblk) = gen_vlan(cstate, (yyvsp[0].i)); }
    break;

  case 116:
    { (yyval.rblk) = gen_vlan(cstate, -1); }
    break;

  case 117:
    { (yyval.rblk) = gen_mpls(cstate, (yyvsp[0].i)); }
    break;

  case 118:
    { (yyval.rblk) = gen_mpls(cstate, -1); }
    break;

  case 119:
    { (yyval.rblk) = gen_pppoed(cstate); }
    break;

  case 120:
    { (yyval.rblk) = gen_pppoes(cstate, (yyvsp[0].i)); }
    break;

  case 121:
    { (yyval.rblk) = gen_pppoes(cstate, -1); }
    break;

  case 122:
    { (yyval.rblk) = gen_geneve(cstate, (yyvsp[0].i)); }
    break;

  case 123:
    { (yyval.rblk) = gen_geneve(cstate, -1); }
    break;

  case 124:
    { (yyval.rblk) = (yyvsp[0].rblk); }
    break;

  case 125:
    { (yyval.rblk) = (yyvsp[0].rblk); }
    break;

  case 126:
    { (yyval.rblk) = (yyvsp[0].rblk); }
    break;

  case 127:
    { (yyval.rblk) = gen_pf_ifname(cstate, (yyvsp[0].s)); }
    break;

  case 128:
    { (yyval.rblk) = gen_pf_ruleset(cstate, (yyvsp[0].s)); }
    break;

  case 129:
    { (yyval.rblk) = gen_pf_rnr(cstate, (yyvsp[0].i)); }
    break;

  case 130:
    { (yyval.rblk) = gen_pf_srnr(cstate, (yyvsp[0].i)); }
    break;

  case 131:
    { (yyval.rblk) = gen_pf_reason(cstate, (yyvsp[0].i)); }
    break;

  case 132:
    { (yyval.rblk) = gen_pf_action(cstate, (yyvsp[0].i)); }
    break;

  case 133:
    { (yyval.rblk) = gen_p80211_type(cstate, (yyvsp[-2].i) | (yyvsp[0].i),
     0x0c |
     0xf0);
    }
    break;

  case 134:
    { (yyval.rblk) = gen_p80211_type(cstate, (yyvsp[0].i),
     0x0c);
    }
    break;

  case 135:
    { (yyval.rblk) = gen_p80211_type(cstate, (yyvsp[0].i),
     0x0c |
     0xf0);
    }
    break;

  case 136:
    { (yyval.rblk) = gen_p80211_fcdir(cstate, (yyvsp[0].i)); }
    break;

  case 138:
    { (yyval.i) = str2tok((yyvsp[0].s), ieee80211_types);
      if ((yyval.i) == -1)
       bpf_error(cstate, "unknown 802.11 type name");
    }
    break;

  case 140:
    { const struct tok *types = 
                               ((void *)0)
                                   ;
      int i={0};
      for (i = 0;; i++) {
       if (ieee80211_type_subtypes[i].tok == 
                                            ((void *)0)
                                                ) {

      bpf_error(cstate, "unknown 802.11 type");
      break;
     }
     if ((yyvsp[(-1) - (1)].i) == ieee80211_type_subtypes[i].type) {
      types = ieee80211_type_subtypes[i].tok;
      break;
     }
      }

      (yyval.i) = str2tok((yyvsp[0].s), types);
      if ((yyval.i) == -1)
     bpf_error(cstate, "unknown 802.11 subtype name");
    }
    break;

  case 141:
    { int i={0};
      for (i = 0;; i++) {
       if (ieee80211_type_subtypes[i].tok == 
                                            ((void *)0)
                                                ) {

      bpf_error(cstate, "unknown 802.11 type name");
      break;
     }
     (yyval.i) = str2tok((yyvsp[0].s), ieee80211_type_subtypes[i].tok);
     if ((yyval.i) != -1) {
      (yyval.i) |= ieee80211_type_subtypes[i].type;
      break;
     }
      }
    }
    break;

  case 142:
    { (yyval.rblk) = gen_llc(cstate); }
    break;

  case 143:
    { if (pcap_strcasecmp((yyvsp[0].s), "i") == 0)
     (yyval.rblk) = gen_llc_i(cstate);
      else if (pcap_strcasecmp((yyvsp[0].s), "s") == 0)
     (yyval.rblk) = gen_llc_s(cstate);
      else if (pcap_strcasecmp((yyvsp[0].s), "u") == 0)
     (yyval.rblk) = gen_llc_u(cstate);
      else {
     int subtype={0};

     subtype = str2tok((yyvsp[0].s), llc_s_subtypes);
     if (subtype != -1)
      (yyval.rblk) = gen_llc_s_subtype(cstate, subtype);
     else {
      subtype = str2tok((yyvsp[0].s), llc_u_subtypes);
      if (subtype == -1)
         bpf_error(cstate, "unknown LLC type name \"%s\"", (yyvsp[0].s));
      (yyval.rblk) = gen_llc_u_subtype(cstate, subtype);
     }
      }
    }
    break;

  case 144:
    { (yyval.rblk) = gen_llc_s_subtype(cstate, 0x0005); }
    break;

  case 146:
    { if (pcap_strcasecmp((yyvsp[0].s), "nods") == 0)
     (yyval.i) = 0x00;
      else if (pcap_strcasecmp((yyvsp[0].s), "tods") == 0)
     (yyval.i) = 0x01;
      else if (pcap_strcasecmp((yyvsp[0].s), "fromds") == 0)
     (yyval.i) = 0x02;
      else if (pcap_strcasecmp((yyvsp[0].s), "dstods") == 0)
     (yyval.i) = 0x03;
      else
     bpf_error(cstate, "unknown 802.11 direction");
    }
    break;

  case 147:
    { (yyval.i) = (yyvsp[0].i); }
    break;

  case 148:
    { (yyval.i) = pfreason_to_num(cstate, (yyvsp[0].s)); }
    break;

  case 149:
    { (yyval.i) = pfaction_to_num(cstate, (yyvsp[0].s)); }
    break;

  case 150:
    { (yyval.i) = 0x20; }
    break;

  case 151:
    { (yyval.i) = 0x30; }
    break;

  case 152:
    { (yyval.i) = 0x10; }
    break;

  case 153:
    { (yyval.i) = 0x20; }
    break;

  case 154:
    { (yyval.i) = 0x30; }
    break;

  case 155:
    { (yyval.i) = 0x10; }
    break;

  case 156:
    { (yyval.a) = gen_loadi(cstate, (yyvsp[0].i)); }
    break;

  case 158:
    { (yyval.a) = gen_load(cstate, (yyvsp[-3].i), (yyvsp[-1].a), 1); }
    break;

  case 159:
    { (yyval.a) = gen_load(cstate, (yyvsp[-5].i), (yyvsp[-3].a), (yyvsp[-1].i)); }
    break;

  case 160:
    { (yyval.a) = gen_arth(cstate, 0x00, (yyvsp[-2].a), (yyvsp[0].a)); }
    break;

  case 161:
    { (yyval.a) = gen_arth(cstate, 0x10, (yyvsp[-2].a), (yyvsp[0].a)); }
    break;

  case 162:
    { (yyval.a) = gen_arth(cstate, 0x20, (yyvsp[-2].a), (yyvsp[0].a)); }
    break;

  case 163:
    { (yyval.a) = gen_arth(cstate, 0x30, (yyvsp[-2].a), (yyvsp[0].a)); }
    break;

  case 164:
    { (yyval.a) = gen_arth(cstate, 0x90, (yyvsp[-2].a), (yyvsp[0].a)); }
    break;

  case 165:
    { (yyval.a) = gen_arth(cstate, 0x50, (yyvsp[-2].a), (yyvsp[0].a)); }
    break;

  case 166:
    { (yyval.a) = gen_arth(cstate, 0x40, (yyvsp[-2].a), (yyvsp[0].a)); }
    break;

  case 167:
    { (yyval.a) = gen_arth(cstate, 0xa0, (yyvsp[-2].a), (yyvsp[0].a)); }
    break;

  case 168:
    { (yyval.a) = gen_arth(cstate, 0x60, (yyvsp[-2].a), (yyvsp[0].a)); }
    break;

  case 169:
    { (yyval.a) = gen_arth(cstate, 0x70, (yyvsp[-2].a), (yyvsp[0].a)); }
    break;

  case 170:
    { (yyval.a) = gen_neg(cstate, (yyvsp[0].a)); }
    break;

  case 171:
    { (yyval.a) = (yyvsp[-1].a); }
    break;

  case 172:
    { (yyval.a) = gen_loadlen(cstate); }
    break;

  case 173:
    { (yyval.i) = '&'; }
    break;

  case 174:
    { (yyval.i) = '|'; }
    break;

  case 175:
    { (yyval.i) = '<'; }
    break;

  case 176:
    { (yyval.i) = '>'; }
    break;

  case 177:
    { (yyval.i) = '='; }
    break;

  case 179:
    { (yyval.i) = (yyvsp[-1].i); }
    break;

  case 180:
    { (yyval.i) = 30; }
    break;

  case 181:
    { (yyval.i) = 22; }
    break;

  case 182:
    { (yyval.i) = 23; }
    break;

  case 183:
    { (yyval.i) = 25; }
    break;

  case 184:
    { (yyval.i) = 24; }
    break;

  case 185:
    { (yyval.i) = 26; }
    break;

  case 186:
    { (yyval.i) = 27; }
    break;

  case 187:
    { (yyval.i) = 28; }
    break;

  case 188:
    { (yyval.i) = 29; }
    break;

  case 189:
    { (yyval.i) = 70; }
    break;

  case 190:
    { (yyval.i) = 71; }
    break;

  case 191:
    { (yyval.blk).atmfieldtype = 51; }
    break;

  case 192:
    { (yyval.blk).atmfieldtype = 52; }
    break;

  case 194:
    { (yyval.blk).b = gen_atmfield_code(cstate, (yyvsp[-2].blk).atmfieldtype, (bpf_int32)(yyvsp[0].i), (bpf_u_int32)(yyvsp[-1].i), 0); }
    break;

  case 195:
    { (yyval.blk).b = gen_atmfield_code(cstate, (yyvsp[-2].blk).atmfieldtype, (bpf_int32)(yyvsp[0].i), (bpf_u_int32)(yyvsp[-1].i), 1); }
    break;

  case 196:
    { (yyval.blk).b = (yyvsp[-1].blk).b; (yyval.blk).q = qerr; }
    break;

  case 197:
    {
 (yyval.blk).atmfieldtype = (yyvsp[-1].blk).atmfieldtype;
 if ((yyval.blk).atmfieldtype == 51 ||
     (yyval.blk).atmfieldtype == 52)
  (yyval.blk).b = gen_atmfield_code(cstate, (yyval.blk).atmfieldtype, (bpf_int32) (yyvsp[0].i), 0x10, 0);
 }
    break;

  case 199:
    { gen_or((yyvsp[-2].blk).b, (yyvsp[0].blk).b); (yyval.blk) = (yyvsp[0].blk); }
    break;

  case 200:
    { (yyval.i) = 22; }
    break;

  case 201:
    { (yyval.i) = 23; }
    break;

  case 202:
    { (yyval.i) = 24; }
    break;

  case 203:
    { (yyval.i) = 25; }
    break;

  case 204:
    { (yyval.i) = 26; }
    break;

  case 205:
    { (yyval.i) = 27; }
    break;

  case 206:
    { (yyval.blk).mtp3fieldtype = 1; }
    break;

  case 207:
    { (yyval.blk).mtp3fieldtype = 2; }
    break;

  case 208:
    { (yyval.blk).mtp3fieldtype = 3; }
    break;

  case 209:
    { (yyval.blk).mtp3fieldtype = 4; }
    break;

  case 210:
    { (yyval.blk).mtp3fieldtype = 5; }
    break;

  case 211:
    { (yyval.blk).mtp3fieldtype = 6; }
    break;

  case 212:
    { (yyval.blk).mtp3fieldtype = 7; }
    break;

  case 213:
    { (yyval.blk).mtp3fieldtype = 8; }
    break;

  case 215:
    { (yyval.blk).b = gen_mtp3field_code(cstate, (yyvsp[-2].blk).mtp3fieldtype, (u_int)(yyvsp[0].i), (u_int)(yyvsp[-1].i), 0); }
    break;

  case 216:
    { (yyval.blk).b = gen_mtp3field_code(cstate, (yyvsp[-2].blk).mtp3fieldtype, (u_int)(yyvsp[0].i), (u_int)(yyvsp[-1].i), 1); }
    break;

  case 217:
    { (yyval.blk).b = (yyvsp[-1].blk).b; (yyval.blk).q = qerr; }
    break;

  case 218:
    {
 (yyval.blk).mtp3fieldtype = (yyvsp[-1].blk).mtp3fieldtype;
 if ((yyval.blk).mtp3fieldtype == 1 ||
     (yyval.blk).mtp3fieldtype == 2 ||
     (yyval.blk).mtp3fieldtype == 3 ||
     (yyval.blk).mtp3fieldtype == 4 ||
     (yyval.blk).mtp3fieldtype == 5 ||
     (yyval.blk).mtp3fieldtype == 6 ||
     (yyval.blk).mtp3fieldtype == 7 ||
     (yyval.blk).mtp3fieldtype == 8)
  (yyval.blk).b = gen_mtp3field_code(cstate, (yyval.blk).mtp3fieldtype, (u_int) (yyvsp[0].i), 0x10, 0);
 }
    break;

  case 220:
    { gen_or((yyvsp[-2].blk).b, (yyvsp[0].blk).b); (yyval.blk) = (yyvsp[0].blk); }
    break;
      default: break;
    }
  ;

  (yyvsp -= (yylen), yyssp -= (yylen));
  yylen = 0;
  ;

  *++yyvsp = yyval;





  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - 139] + *yyssp;
  if (0 <= yystate && yystate <= 788 && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - 139];

  goto yynewstate;





yyerrlab:


  yytoken = yychar == (-2) ? (-2) : ((unsigned int) (yychar) <= 376 ? yytranslate[yychar] : 2);


  if (!yyerrstatus)
    {
      ++pcap_nerrs;

      pcap_error (yyscanner, cstate, "syntax error");
    }



  if (yyerrstatus == 3)
    {



      if (yychar <= 0)
        {

          if (yychar == 0)
            goto yyabortlab;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, yyscanner, cstate);
          yychar = (-2);
        }
    }



  goto yyerrlab1;





yyerrorlab:




  if ( 0)
     goto yyerrorlab;



  (yyvsp -= (yylen), yyssp -= (yylen));
  yylen = 0;
  ;
  yystate = *yyssp;
  goto yyerrlab1;





yyerrlab1:
  yyerrstatus = 3;

  for (;;)
    {
      yyn = yypact[yystate];
      if (!(!!((yyn) == (-216))))
        {
          yyn += 1;
          if (0 <= yyn && yyn <= 788 && yycheck[yyn] == 1)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }


      if (yyssp == yyss)
        goto yyabortlab;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yyscanner, cstate);
      (yyvsp -= (1), yyssp -= (1));
      yystate = *yyssp;
      ;
    }

 
 
 
 
  *++yyvsp = yylval;
 
 



  ;

  yystate = yyn;
  goto yynewstate;





yyacceptlab:
  yyresult = 0;
  goto yyreturn;




yyabortlab:
  yyresult = 1;
  goto yyreturn;





yyexhaustedlab:
  pcap_error (yyscanner, cstate, "memory exhausted");
  yyresult = 2;



yyreturn:
  if (yychar != (-2))
    {


      yytoken = ((unsigned int) (yychar) <= 376 ? yytranslate[yychar] : 2);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, yyscanner, cstate);
    }


  (yyvsp -= (yylen), yyssp -= (yylen));
  ;
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yyscanner, cstate);
      (yyvsp -= (1), yyssp -= (1));
    }

  if (yyss != yyssa)
    free (yyss);





  return yyresult;
}
