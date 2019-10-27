











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


extern int asprintf(char **strp, const char *fmt, ...);


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










extern int *__errno_location (void) ;


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


enum
{
  _ISupper = ((0) < 8 ? ((1 << (0)) << 8) : ((1 << (0)) >> 8)),
  _ISlower = ((1) < 8 ? ((1 << (1)) << 8) : ((1 << (1)) >> 8)),
  _ISalpha = ((2) < 8 ? ((1 << (2)) << 8) : ((1 << (2)) >> 8)),
  _ISdigit = ((3) < 8 ? ((1 << (3)) << 8) : ((1 << (3)) >> 8)),
  _ISxdigit = ((4) < 8 ? ((1 << (4)) << 8) : ((1 << (4)) >> 8)),
  _ISspace = ((5) < 8 ? ((1 << (5)) << 8) : ((1 << (5)) >> 8)),
  _ISprint = ((6) < 8 ? ((1 << (6)) << 8) : ((1 << (6)) >> 8)),
  _ISgraph = ((7) < 8 ? ((1 << (7)) << 8) : ((1 << (7)) >> 8)),
  _ISblank = ((8) < 8 ? ((1 << (8)) << 8) : ((1 << (8)) >> 8)),
  _IScntrl = ((9) < 8 ? ((1 << (9)) << 8) : ((1 << (9)) >> 8)),
  _ISpunct = ((10) < 8 ? ((1 << (10)) << 8) : ((1 << (10)) >> 8)),
  _ISalnum = ((11) < 8 ? ((1 << (11)) << 8) : ((1 << (11)) >> 8))
};
extern const unsigned short int **__ctype_b_loc (void)
     ;
extern const __int32_t **__ctype_tolower_loc (void)
     ;
extern const __int32_t **__ctype_toupper_loc (void)
     ;






extern int isalnum (int) ;
extern int isalpha (int) ;
extern int iscntrl (int) ;
extern int isdigit (int) ;
extern int islower (int) ;
extern int isgraph (int) ;
extern int isprint (int) ;
extern int ispunct (int) ;
extern int isspace (int) ;
extern int isupper (int) ;
extern int isxdigit (int) ;



extern int tolower (int __c) ;


extern int toupper (int __c) ;








extern int isblank (int) ;


extern int isascii (int __c) ;



extern int toascii (int __c) ;



extern int _toupper (int) ;
extern int _tolower (int) ;
typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
extern int isalnum_l (int, __locale_t) ;
extern int isalpha_l (int, __locale_t) ;
extern int iscntrl_l (int, __locale_t) ;
extern int isdigit_l (int, __locale_t) ;
extern int islower_l (int, __locale_t) ;
extern int isgraph_l (int, __locale_t) ;
extern int isprint_l (int, __locale_t) ;
extern int ispunct_l (int, __locale_t) ;
extern int isspace_l (int, __locale_t) ;
extern int isupper_l (int, __locale_t) ;
extern int isxdigit_l (int, __locale_t) ;

extern int isblank_l (int, __locale_t) ;



extern int __tolower_l (int __c, __locale_t __l) ;
extern int tolower_l (int __c, __locale_t __l) ;


extern int __toupper_l (int __c, __locale_t __l) ;
extern int toupper_l (int __c, __locale_t __l) ;





typedef __useconds_t useconds_t;
typedef __intptr_t intptr_t;






typedef __socklen_t socklen_t;
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








struct flock
  {
    short int l_type;
    short int l_whence;

    __off_t l_start;
    __off_t l_len;




    __pid_t l_pid;
  };




struct stat
  {
    __dev_t st_dev;

    unsigned short int __pad1;


    __ino_t st_ino;




    __mode_t st_mode;
    __nlink_t st_nlink;




    __uid_t st_uid;
    __gid_t st_gid;



    __dev_t st_rdev;

    unsigned short int __pad2;


    __off_t st_size;



    __blksize_t st_blksize;

    __blkcnt_t st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    unsigned long int __glibc_reserved4;
    unsigned long int __glibc_reserved5;




  };
extern int fcntl (int __fd, int __cmd, ...);
extern int open (const char *__file, int __oflag, ...) ;
extern int openat (int __fd, const char *__file, int __oflag, ...)
     ;
extern int creat (const char *__file, mode_t __mode) ;
extern int posix_fadvise (int __fd, off_t __offset, off_t __len,
     int __advise) ;
extern int posix_fallocate (int __fd, off_t __offset, off_t __len);















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












extern int stat (const char *__restrict __file,
   struct stat *__restrict __buf) ;



extern int fstat (int __fd, struct stat *__buf) ;
extern int fstatat (int __fd, const char *__restrict __file,
      struct stat *__restrict __buf, int __flag)
     ;
extern int lstat (const char *__restrict __file,
    struct stat *__restrict __buf) ;
extern int chmod (const char *__file, __mode_t __mode)
     ;





extern int lchmod (const char *__file, __mode_t __mode)
     ;




extern int fchmod (int __fd, __mode_t __mode) ;





extern int fchmodat (int __fd, const char *__file, __mode_t __mode,
       int __flag)
     ;






extern __mode_t umask (__mode_t __mask) ;
extern int mkdir (const char *__path, __mode_t __mode)
     ;





extern int mkdirat (int __fd, const char *__path, __mode_t __mode)
     ;






extern int mknod (const char *__path, __mode_t __mode, __dev_t __dev)
     ;





extern int mknodat (int __fd, const char *__path, __mode_t __mode,
      __dev_t __dev) ;





extern int mkfifo (const char *__path, __mode_t __mode)
     ;





extern int mkfifoat (int __fd, const char *__path, __mode_t __mode)
     ;





extern int utimensat (int __fd, const char *__path,
        const struct timespec __times[2],
        int __flags)
     ;




extern int futimens (int __fd, const struct timespec __times[2]) ;
extern int __fxstat (int __ver, int __fildes, struct stat *__stat_buf)
     ;
extern int __xstat (int __ver, const char *__filename,
      struct stat *__stat_buf) ;
extern int __lxstat (int __ver, const char *__filename,
       struct stat *__stat_buf) ;
extern int __fxstatat (int __ver, int __fildes, const char *__filename,
         struct stat *__stat_buf, int __flag)
     ;
extern int __xmknod (int __ver, const char *__path, __mode_t __mode,
       __dev_t *__dev) ;

extern int __xmknodat (int __ver, int __fd, const char *__path,
         __mode_t __mode, __dev_t *__dev)
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














struct winsize
  {
    unsigned short int ws_row;
    unsigned short int ws_col;
    unsigned short int ws_xpixel;
    unsigned short int ws_ypixel;
  };


struct termio
  {
    unsigned short int c_iflag;
    unsigned short int c_oflag;
    unsigned short int c_cflag;
    unsigned short int c_lflag;
    unsigned char c_line;
    unsigned char c_cc[8];
};










extern int ioctl (int __fd, unsigned long int __request, ...) ;




struct utsname
  {

    char sysname[65];


    char nodename[65];


    char release[65];

    char version[65];


    char machine[65];






    char __domainname[65];


  };
extern int uname (struct utsname *__name) ;








extern void *mmap (void *__addr, size_t __len, int __prot,
     int __flags, int __fd, __off_t __offset) ;
extern int munmap (void *__addr, size_t __len) ;




extern int mprotect (void *__addr, size_t __len, int __prot) ;







extern int msync (void *__addr, size_t __len, int __flags);




extern int madvise (void *__addr, size_t __len, int __advice) ;



extern int posix_madvise (void *__addr, size_t __len, int __advice) ;




extern int mlock (const void *__addr, size_t __len) ;


extern int munlock (const void *__addr, size_t __len) ;




extern int mlockall (int __flags) ;



extern int munlockall (void) ;







extern int mincore (void *__start, size_t __len, unsigned char *__vec)
     ;
extern int shm_open (const char *__name, int __oflag, mode_t __mode);


extern int shm_unlink (const char *__name);




















typedef __signed__ char __s8;
typedef unsigned char __u8;

typedef __signed__ short __s16;
typedef unsigned short __u16;

typedef __signed__ int __s32;
typedef unsigned int __u32;


__extension__ typedef __signed__ long long __s64;
__extension__ typedef unsigned long long __u64;






typedef struct {
 unsigned long fds_bits[1024 / (8 * sizeof(long))];
} __kernel_fd_set;


typedef void (*__kernel_sighandler_t)(int);


typedef int __kernel_key_t;
typedef int __kernel_mqd_t;


typedef unsigned short __kernel_mode_t;


typedef unsigned short __kernel_ipc_pid_t;


typedef unsigned short __kernel_uid_t;
typedef unsigned short __kernel_gid_t;


typedef unsigned short __kernel_old_dev_t;


typedef long __kernel_long_t;
typedef unsigned long __kernel_ulong_t;



typedef __kernel_ulong_t __kernel_ino_t;







typedef int __kernel_pid_t;
typedef __kernel_long_t __kernel_suseconds_t;



typedef int __kernel_daddr_t;



typedef unsigned int __kernel_uid32_t;
typedef unsigned int __kernel_gid32_t;



typedef __kernel_uid_t __kernel_old_uid_t;
typedef __kernel_gid_t __kernel_old_gid_t;
typedef unsigned int __kernel_size_t;
typedef int __kernel_ssize_t;
typedef int __kernel_ptrdiff_t;
typedef struct {
 int val[2];
} __kernel_fsid_t;





typedef __kernel_long_t __kernel_off_t;
typedef long long __kernel_loff_t;
typedef __kernel_long_t __kernel_time_t;
typedef __kernel_long_t __kernel_clock_t;
typedef int __kernel_timer_t;
typedef int __kernel_clockid_t;
typedef char * __kernel_caddr_t;
typedef unsigned short __kernel_uid16_t;
typedef unsigned short __kernel_gid16_t;
typedef __u16 __le16;
typedef __u16 __be16;
typedef __u32 __le32;
typedef __u32 __be32;
typedef __u64 __le64;
typedef __u64 __be64;

typedef __u16 __sum16;
typedef __u32 __wsum;
typedef unsigned short __kernel_sa_family_t;

struct __kernel_sockaddr_storage {
 __kernel_sa_family_t ss_family;

 char __data[128 - sizeof(unsigned short)];


} ;






typedef struct {
 unsigned int clock_rate;
 unsigned int clock_type;
 unsigned short loopback;
} sync_serial_settings;

typedef struct {
 unsigned int clock_rate;
 unsigned int clock_type;
 unsigned short loopback;
 unsigned int slot_map;
} te1_settings;

typedef struct {
 unsigned short encoding;
 unsigned short parity;
} raw_hdlc_proto;

typedef struct {
 unsigned int t391;
 unsigned int t392;
 unsigned int n391;
 unsigned int n392;
 unsigned int n393;
 unsigned short lmi;
 unsigned short dce;
} fr_proto;

typedef struct {
 unsigned int dlci;
} fr_proto_pvc;

typedef struct {
 unsigned int dlci;
 char master[16];
}fr_proto_pvc_info;

typedef struct {
    unsigned int interval;
    unsigned int timeout;
} cisco_proto;
enum net_device_flags {


 IFF_UP = 1<<0,
 IFF_BROADCAST = 1<<1,
 IFF_DEBUG = 1<<2,
 IFF_LOOPBACK = 1<<3,
 IFF_POINTOPOINT = 1<<4,
 IFF_NOTRAILERS = 1<<5,
 IFF_RUNNING = 1<<6,
 IFF_NOARP = 1<<7,
 IFF_PROMISC = 1<<8,
 IFF_ALLMULTI = 1<<9,
 IFF_MASTER = 1<<10,
 IFF_SLAVE = 1<<11,
 IFF_MULTICAST = 1<<12,
 IFF_PORTSEL = 1<<13,
 IFF_AUTOMEDIA = 1<<14,
 IFF_DYNAMIC = 1<<15,


 IFF_LOWER_UP = 1<<16,
 IFF_DORMANT = 1<<17,
 IFF_ECHO = 1<<18,

};
enum {
 IF_OPER_UNKNOWN,
 IF_OPER_NOTPRESENT,
 IF_OPER_DOWN,
 IF_OPER_LOWERLAYERDOWN,
 IF_OPER_TESTING,
 IF_OPER_DORMANT,
 IF_OPER_UP,
};


enum {
 IF_LINK_MODE_DEFAULT,
 IF_LINK_MODE_DORMANT,
};
struct ifmap {
 unsigned long mem_start;
 unsigned long mem_end;
 unsigned short base_addr;
 unsigned char irq;
 unsigned char dma;
 unsigned char port;

};


struct if_settings {
 unsigned int type;
 unsigned int size;
 union {

  raw_hdlc_proto *raw_hdlc;
  cisco_proto *cisco;
  fr_proto *fr;
  fr_proto_pvc *fr_pvc;
  fr_proto_pvc_info *fr_pvc_info;


  sync_serial_settings *sync;
  te1_settings *te1;
 } ifs_ifsu;
};
struct ifreq {

 union
 {
  char ifrn_name[16];
 } ifr_ifrn;

 union {
  struct sockaddr ifru_addr;
  struct sockaddr ifru_dstaddr;
  struct sockaddr ifru_broadaddr;
  struct sockaddr ifru_netmask;
  struct sockaddr ifru_hwaddr;
  short ifru_flags;
  int ifru_ivalue;
  int ifru_mtu;
  struct ifmap ifru_map;
  char ifru_slave[16];
  char ifru_newname[16];
  void * ifru_data;
  struct if_settings ifru_settings;
 } ifr_ifru;
};
struct ifconf {
 int ifc_len;
 union {
  char *ifcu_buf;
  struct ifreq *ifcu_req;
 } ifc_ifcu;
};





struct sockaddr_pkt {
 unsigned short spkt_family;
 unsigned char spkt_device[14];
 __be16 spkt_protocol;
};

struct sockaddr_ll {
 unsigned short sll_family;
 __be16 sll_protocol;
 int sll_ifindex;
 unsigned short sll_hatype;
 unsigned char sll_pkttype;
 unsigned char sll_halen;
 unsigned char sll_addr[8];
};
struct tpacket_stats {
 unsigned int tp_packets;
 unsigned int tp_drops;
};

struct tpacket_stats_v3 {
 unsigned int tp_packets;
 unsigned int tp_drops;
 unsigned int tp_freeze_q_cnt;
};

struct tpacket_rollover_stats {
 __u64 tp_all;
 __u64 tp_huge;
 __u64 tp_failed;
};

union tpacket_stats_u {
 struct tpacket_stats stats1;
 struct tpacket_stats_v3 stats3;
};

struct tpacket_auxdata {
 __u32 tp_status;
 __u32 tp_len;
 __u32 tp_snaplen;
 __u16 tp_mac;
 __u16 tp_net;
 __u16 tp_vlan_tci;
 __u16 tp_vlan_tpid;
};
struct tpacket_hdr {
 unsigned long tp_status;
 unsigned int tp_len;
 unsigned int tp_snaplen;
 unsigned short tp_mac;
 unsigned short tp_net;
 unsigned int tp_sec;
 unsigned int tp_usec;
};





struct tpacket2_hdr {
 __u32 tp_status;
 __u32 tp_len;
 __u32 tp_snaplen;
 __u16 tp_mac;
 __u16 tp_net;
 __u32 tp_sec;
 __u32 tp_nsec;
 __u16 tp_vlan_tci;
 __u16 tp_vlan_tpid;
 __u8 tp_padding[4];
};

struct tpacket_hdr_variant1 {
 __u32 tp_rxhash;
 __u32 tp_vlan_tci;
 __u16 tp_vlan_tpid;
 __u16 tp_padding;
};

struct tpacket3_hdr {
 __u32 tp_next_offset;
 __u32 tp_sec;
 __u32 tp_nsec;
 __u32 tp_snaplen;
 __u32 tp_len;
 __u32 tp_status;
 __u16 tp_mac;
 __u16 tp_net;

 union {
  struct tpacket_hdr_variant1 hv1;
 };
 __u8 tp_padding[8];
};

struct tpacket_bd_ts {
 unsigned int ts_sec;
 union {
  unsigned int ts_usec;
  unsigned int ts_nsec;
 };
};

struct tpacket_hdr_v1 {
 __u32 block_status;
 __u32 num_pkts;
 __u32 offset_to_first_pkt;




 __u32 blk_len;
 __u64 seq_num;
 struct tpacket_bd_ts ts_first_pkt, ts_last_pkt;
};

union tpacket_bd_header_u {
 struct tpacket_hdr_v1 bh1;
};

struct tpacket_block_desc {
 __u32 version;
 __u32 offset_to_priv;
 union tpacket_bd_header_u hdr;
};




enum tpacket_versions {
 TPACKET_V1,
 TPACKET_V2,
 TPACKET_V3
};
struct tpacket_req {
 unsigned int tp_block_size;
 unsigned int tp_block_nr;
 unsigned int tp_frame_size;
 unsigned int tp_frame_nr;
};

struct tpacket_req3 {
 unsigned int tp_block_size;
 unsigned int tp_block_nr;
 unsigned int tp_frame_size;
 unsigned int tp_frame_nr;
 unsigned int tp_retire_blk_tov;
 unsigned int tp_sizeof_priv;
 unsigned int tp_feature_req_word;
};

union tpacket_req_u {
 struct tpacket_req req;
 struct tpacket_req3 req3;
};

struct packet_mreq {
 int mr_ifindex;
 unsigned short mr_type;
 unsigned short mr_alen;
 unsigned char mr_address[8];
};
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

struct ethhdr {
 unsigned char h_dest[6];
 unsigned char h_source[6];
 __be16 h_proto;
} ;

struct arphdr
  {
    unsigned short int ar_hrd;
    unsigned short int ar_pro;
    unsigned char ar_hln;
    unsigned char ar_pln;
    unsigned short int ar_op;
  };
struct arpreq
  {
    struct sockaddr arp_pa;
    struct sockaddr arp_ha;
    int arp_flags;
    struct sockaddr arp_netmask;
    char arp_dev[16];
  };

struct arpreq_old
  {
    struct sockaddr arp_pa;
    struct sockaddr arp_ha;
    int arp_flags;
    struct sockaddr arp_netmask;
  };
struct arpd_request
  {
    unsigned short int req;
    u_int32_t ip;
    unsigned long int dev;
    unsigned long int stamp;
    unsigned long int updated;
    unsigned char ha[7];
  };


typedef unsigned long int nfds_t;


struct pollfd
  {
    int fd;
    short int events;
    short int revents;
  };



extern int poll (struct pollfd *__fds, nfds_t __nfds, int __timeout);


struct dirent
  {

    __ino_t d_ino;
    __off_t d_off;




    unsigned short int d_reclen;
    unsigned char d_type;
    char d_name[256];
  };
enum
  {
    DT_UNKNOWN = 0,

    DT_FIFO = 1,

    DT_CHR = 2,

    DT_DIR = 4,

    DT_BLK = 6,

    DT_REG = 8,

    DT_LNK = 10,

    DT_SOCK = 12,

    DT_WHT = 14

  };
typedef struct __dirstream DIR;






extern DIR *opendir (const char *__name) ;






extern DIR *fdopendir (int __fd);







extern int closedir (DIR *__dirp) ;
extern struct dirent *readdir (DIR *__dirp) ;
extern int readdir_r (DIR *__restrict __dirp,
        struct dirent *__restrict __entry,
        struct dirent **__restrict __result)
     ;
extern void rewinddir (DIR *__dirp) ;





extern void seekdir (DIR *__dirp, long int __pos) ;


extern long int telldir (DIR *__dirp) ;





extern int dirfd (DIR *__dirp) ;
extern int scandir (const char *__restrict __dir,
      struct dirent ***__restrict __namelist,
      int (*__selector) (const struct dirent *),
      int (*__cmp) (const struct dirent **,
      const struct dirent **))
     ;
extern int alphasort (const struct dirent **__e1,
        const struct dirent **__e2)
     ;
extern __ssize_t getdirentries (int __fd, char *__restrict __buf,
    size_t __nbytes,
    __off_t *__restrict __basep)
     ;




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
struct sll_header {
 uint16_t sll_pkttype;
 uint16_t sll_hatype;
 uint16_t sll_halen;
 uint8_t sll_addr[8];
 uint16_t sll_protocol;
};
struct vlan_tag {
 uint16_t vlan_tpid;
 uint16_t vlan_tci;
};

struct sock_filter {
 __u16 code;
 __u8 jt;
 __u8 jf;
 __u32 k;
};

struct sock_fprog {
 unsigned short len;
 struct sock_filter *filter;
};



enum {
 SOF_TIMESTAMPING_TX_HARDWARE = (1<<0),
 SOF_TIMESTAMPING_TX_SOFTWARE = (1<<1),
 SOF_TIMESTAMPING_RX_HARDWARE = (1<<2),
 SOF_TIMESTAMPING_RX_SOFTWARE = (1<<3),
 SOF_TIMESTAMPING_SOFTWARE = (1<<4),
 SOF_TIMESTAMPING_SYS_HARDWARE = (1<<5),
 SOF_TIMESTAMPING_RAW_HARDWARE = (1<<6),
 SOF_TIMESTAMPING_OPT_ID = (1<<7),
 SOF_TIMESTAMPING_TX_SCHED = (1<<8),
 SOF_TIMESTAMPING_TX_ACK = (1<<9),
 SOF_TIMESTAMPING_OPT_CMSG = (1<<10),
 SOF_TIMESTAMPING_OPT_TSONLY = (1<<11),

 SOF_TIMESTAMPING_LAST = SOF_TIMESTAMPING_OPT_TSONLY,
 SOF_TIMESTAMPING_MASK = (SOF_TIMESTAMPING_LAST - 1) |
     SOF_TIMESTAMPING_LAST
};
struct hwtstamp_config {
 int flags;
 int tx_type;
 int rx_filter;
};


enum hwtstamp_tx_types {





 HWTSTAMP_TX_OFF,







 HWTSTAMP_TX_ON,
 HWTSTAMP_TX_ONESTEP_SYNC,
};


enum hwtstamp_rx_filters {

 HWTSTAMP_FILTER_NONE,


 HWTSTAMP_FILTER_ALL,


 HWTSTAMP_FILTER_SOME,


 HWTSTAMP_FILTER_PTP_V1_L4_EVENT,

 HWTSTAMP_FILTER_PTP_V1_L4_SYNC,

 HWTSTAMP_FILTER_PTP_V1_L4_DELAY_REQ,

 HWTSTAMP_FILTER_PTP_V2_L4_EVENT,

 HWTSTAMP_FILTER_PTP_V2_L4_SYNC,

 HWTSTAMP_FILTER_PTP_V2_L4_DELAY_REQ,


 HWTSTAMP_FILTER_PTP_V2_L2_EVENT,

 HWTSTAMP_FILTER_PTP_V2_L2_SYNC,

 HWTSTAMP_FILTER_PTP_V2_L2_DELAY_REQ,


 HWTSTAMP_FILTER_PTP_V2_EVENT,

 HWTSTAMP_FILTER_PTP_V2_SYNC,

 HWTSTAMP_FILTER_PTP_V2_DELAY_REQ,
};







typedef struct ifbond {
 __s32 bond_mode;
 __s32 num_slaves;
 __s32 miimon;
} ifbond;

typedef struct ifslave {
 __s32 slave_id;
 char slave_name[16];
 __s8 link;
 __s8 state;
 __u32 link_failure_count;
} ifslave;

struct ad_info {
 __u16 aggregator_id;
 __u16 ports;
 __u16 actor_key;
 __u16 partner_key;
 __u8 partner_system[6];
};
struct iw_param {
  __s32 value;
  __u8 fixed;
  __u8 disabled;
  __u16 flags;
};





struct iw_point {
  void *pointer;
  __u16 length;
  __u16 flags;
};
struct iw_freq {
 __s32 m;
 __s16 e;
 __u8 i;
 __u8 flags;
};




struct iw_quality {
 __u8 qual;

 __u8 level;
 __u8 noise;
 __u8 updated;
};
struct iw_discarded {
 __u32 nwid;
 __u32 code;
 __u32 fragment;
 __u32 retries;
 __u32 misc;
};





struct iw_missed {
 __u32 beacon;
};




struct iw_thrspy {
 struct sockaddr addr;
 struct iw_quality qual;
 struct iw_quality low;
 struct iw_quality high;
};
struct iw_scan_req {
 __u8 scan_type;
 __u8 essid_len;
 __u8 num_channels;

 __u8 flags;


 struct sockaddr bssid;
 __u8 essid[32];
 __u32 min_channel_time;
 __u32 max_channel_time;

 struct iw_freq channel_list[32];
};
struct iw_encode_ext {
 __u32 ext_flags;
 __u8 tx_seq[8];
 __u8 rx_seq[8];
 struct sockaddr addr;


 __u16 alg;
 __u16 key_len;
 __u8 key[0];
};


struct iw_mlme {
 __u16 cmd;
 __u16 reason_code;
 struct sockaddr addr;
};
struct iw_pmksa {
 __u32 cmd;
 struct sockaddr bssid;
 __u8 pmkid[16];
};


struct iw_michaelmicfailure {
 __u32 flags;
 struct sockaddr src_addr;
 __u8 tsc[8];
};



struct iw_pmkid_cand {
 __u32 flags;
 __u32 index;

 struct sockaddr bssid;
};





struct iw_statistics {
 __u16 status;


 struct iw_quality qual;

 struct iw_discarded discard;
 struct iw_missed miss;
};
union iwreq_data {

 char name[16];



 struct iw_point essid;
 struct iw_param nwid;
 struct iw_freq freq;



 struct iw_param sens;
 struct iw_param bitrate;
 struct iw_param txpower;
 struct iw_param rts;
 struct iw_param frag;
 __u32 mode;
 struct iw_param retry;

 struct iw_point encoding;
 struct iw_param power;
 struct iw_quality qual;

 struct sockaddr ap_addr;
 struct sockaddr addr;

 struct iw_param param;
 struct iw_point data;
};







struct iwreq {
 union
 {
  char ifrn_name[16];
 } ifr_ifrn;


 union iwreq_data u;
};
struct iw_range {

 __u32 throughput;
 __u32 min_nwid;
 __u32 max_nwid;


 __u16 old_num_channels;
 __u8 old_num_frequency;


 __u8 scan_capa;


 __u32 event_capa[6];


 __s32 sensitivity;






 struct iw_quality max_qual;
 struct iw_quality avg_qual;


 __u8 num_bitrates;
 __s32 bitrate[32];


 __s32 min_rts;
 __s32 max_rts;


 __s32 min_frag;
 __s32 max_frag;


 __s32 min_pmp;
 __s32 max_pmp;
 __s32 min_pmt;
 __s32 max_pmt;
 __u16 pmp_flags;
 __u16 pmt_flags;
 __u16 pm_capa;


 __u16 encoding_size[8];
 __u8 num_encoding_sizes;
 __u8 max_encoding_tokens;

 __u8 encoding_login_index;


 __u16 txpower_capa;
 __u8 num_txpower;
 __s32 txpower[8];


 __u8 we_version_compiled;
 __u8 we_version_source;


 __u16 retry_capa;
 __u16 retry_flags;
 __u16 r_time_flags;
 __s32 min_retry;
 __s32 max_retry;
 __s32 min_r_time;
 __s32 max_r_time;


 __u16 num_channels;
 __u8 num_frequency;
 struct iw_freq freq[32];



 __u32 enc_capa;
};





struct iw_priv_args {
 __u32 cmd;
 __u16 set_args;
 __u16 get_args;
 char name[16];
};
struct iw_event {
 __u16 len;
 __u16 cmd;
 union iwreq_data u;
};









struct sysinfo {
 __kernel_long_t uptime;
 __kernel_ulong_t loads[3];
 __kernel_ulong_t totalram;
 __kernel_ulong_t freeram;
 __kernel_ulong_t sharedram;
 __kernel_ulong_t bufferram;
 __kernel_ulong_t totalswap;
 __kernel_ulong_t freeswap;
 __u16 procs;
 __u16 pad;
 __kernel_ulong_t totalhigh;
 __kernel_ulong_t freehigh;
 __u32 mem_unit;
 char _f[20-2*sizeof(__kernel_ulong_t)-sizeof(__u32)];
};



struct ethtool_cmd {
 __u32 cmd;
 __u32 supported;
 __u32 advertising;
 __u16 speed;
 __u8 duplex;
 __u8 port;
 __u8 phy_address;
 __u8 transceiver;
 __u8 autoneg;
 __u8 mdio_support;
 __u32 maxtxpkt;
 __u32 maxrxpkt;
 __u16 speed_hi;
 __u8 eth_tp_mdix;
 __u8 eth_tp_mdix_ctrl;
 __u32 lp_advertising;
 __u32 reserved[2];
};

static __inline__ void ethtool_cmd_speed_set(struct ethtool_cmd *ep,
      __u32 speed)
{
 ep->speed = (__u16)(speed & 0xFFFF);
 ep->speed_hi = (__u16)(speed >> 16);
}

static __inline__ __u32 ethtool_cmd_speed(const struct ethtool_cmd *ep)
{
 return (ep->speed_hi << 16) | ep->speed;
}
struct ethtool_drvinfo {
 __u32 cmd;
 char driver[32];
 char version[32];
 char fw_version[32];
 char bus_info[32];
 char erom_version[32];
 char reserved2[12];
 __u32 n_priv_flags;
 __u32 n_stats;
 __u32 testinfo_len;
 __u32 eedump_len;
 __u32 regdump_len;
};
struct ethtool_wolinfo {
 __u32 cmd;
 __u32 supported;
 __u32 wolopts;
 __u8 sopass[6];
};


struct ethtool_value {
 __u32 cmd;
 __u32 data;
};

enum tunable_id {
 ETHTOOL_ID_UNSPEC,
 ETHTOOL_RX_COPYBREAK,
 ETHTOOL_TX_COPYBREAK,




 __ETHTOOL_TUNABLE_COUNT,
};

enum tunable_type_id {
 ETHTOOL_TUNABLE_UNSPEC,
 ETHTOOL_TUNABLE_U8,
 ETHTOOL_TUNABLE_U16,
 ETHTOOL_TUNABLE_U32,
 ETHTOOL_TUNABLE_U64,
 ETHTOOL_TUNABLE_STRING,
 ETHTOOL_TUNABLE_S8,
 ETHTOOL_TUNABLE_S16,
 ETHTOOL_TUNABLE_S32,
 ETHTOOL_TUNABLE_S64,
};

struct ethtool_tunable {
 __u32 cmd;
 __u32 id;
 __u32 type_id;
 __u32 len;
 void *data[0];
};
struct ethtool_regs {
 __u32 cmd;
 __u32 version;
 __u32 len;
 __u8 data[0];
};
struct ethtool_eeprom {
 __u32 cmd;
 __u32 magic;
 __u32 offset;
 __u32 len;
 __u8 data[0];
};
struct ethtool_eee {
 __u32 cmd;
 __u32 supported;
 __u32 advertised;
 __u32 lp_advertised;
 __u32 eee_active;
 __u32 eee_enabled;
 __u32 tx_lpi_enabled;
 __u32 tx_lpi_timer;
 __u32 reserved[2];
};
struct ethtool_modinfo {
 __u32 cmd;
 __u32 type;
 __u32 eeprom_len;
 __u32 reserved[8];
};
struct ethtool_coalesce {
 __u32 cmd;
 __u32 rx_coalesce_usecs;
 __u32 rx_max_coalesced_frames;
 __u32 rx_coalesce_usecs_irq;
 __u32 rx_max_coalesced_frames_irq;
 __u32 tx_coalesce_usecs;
 __u32 tx_max_coalesced_frames;
 __u32 tx_coalesce_usecs_irq;
 __u32 tx_max_coalesced_frames_irq;
 __u32 stats_block_coalesce_usecs;
 __u32 use_adaptive_rx_coalesce;
 __u32 use_adaptive_tx_coalesce;
 __u32 pkt_rate_low;
 __u32 rx_coalesce_usecs_low;
 __u32 rx_max_coalesced_frames_low;
 __u32 tx_coalesce_usecs_low;
 __u32 tx_max_coalesced_frames_low;
 __u32 pkt_rate_high;
 __u32 rx_coalesce_usecs_high;
 __u32 rx_max_coalesced_frames_high;
 __u32 tx_coalesce_usecs_high;
 __u32 tx_max_coalesced_frames_high;
 __u32 rate_sample_interval;
};
struct ethtool_ringparam {
 __u32 cmd;
 __u32 rx_max_pending;
 __u32 rx_mini_max_pending;
 __u32 rx_jumbo_max_pending;
 __u32 tx_max_pending;
 __u32 rx_pending;
 __u32 rx_mini_pending;
 __u32 rx_jumbo_pending;
 __u32 tx_pending;
};
struct ethtool_channels {
 __u32 cmd;
 __u32 max_rx;
 __u32 max_tx;
 __u32 max_other;
 __u32 max_combined;
 __u32 rx_count;
 __u32 tx_count;
 __u32 other_count;
 __u32 combined_count;
};
struct ethtool_pauseparam {
 __u32 cmd;
 __u32 autoneg;
 __u32 rx_pause;
 __u32 tx_pause;
};
enum ethtool_stringset {
 ETH_SS_TEST = 0,
 ETH_SS_STATS,
 ETH_SS_PRIV_FLAGS,
 ETH_SS_NTUPLE_FILTERS,
 ETH_SS_FEATURES,
 ETH_SS_RSS_HASH_FUNCS,
 ETH_SS_TUNABLES,
 ETH_SS_PHY_STATS,
};
struct ethtool_gstrings {
 __u32 cmd;
 __u32 string_set;
 __u32 len;
 __u8 data[0];
};
struct ethtool_sset_info {
 __u32 cmd;
 __u32 reserved;
 __u64 sset_mask;
 __u32 data[0];
};
enum ethtool_test_flags {
 ETH_TEST_FL_OFFLINE = (1 << 0),
 ETH_TEST_FL_FAILED = (1 << 1),
 ETH_TEST_FL_EXTERNAL_LB = (1 << 2),
 ETH_TEST_FL_EXTERNAL_LB_DONE = (1 << 3),
};
struct ethtool_test {
 __u32 cmd;
 __u32 flags;
 __u32 reserved;
 __u32 len;
 __u64 data[0];
};
struct ethtool_stats {
 __u32 cmd;
 __u32 n_stats;
 __u64 data[0];
};
struct ethtool_perm_addr {
 __u32 cmd;
 __u32 size;
 __u8 data[0];
};
enum ethtool_flags {
 ETH_FLAG_TXVLAN = (1 << 7),
 ETH_FLAG_RXVLAN = (1 << 8),
 ETH_FLAG_LRO = (1 << 15),
 ETH_FLAG_NTUPLE = (1 << 27),
 ETH_FLAG_RXHASH = (1 << 28),
};
struct ethtool_tcpip4_spec {
 __be32 ip4src;
 __be32 ip4dst;
 __be16 psrc;
 __be16 pdst;
 __u8 tos;
};
struct ethtool_ah_espip4_spec {
 __be32 ip4src;
 __be32 ip4dst;
 __be32 spi;
 __u8 tos;
};
struct ethtool_usrip4_spec {
 __be32 ip4src;
 __be32 ip4dst;
 __be32 l4_4_bytes;
 __u8 tos;
 __u8 ip_ver;
 __u8 proto;
};
struct ethtool_tcpip6_spec {
 __be32 ip6src[4];
 __be32 ip6dst[4];
 __be16 psrc;
 __be16 pdst;
 __u8 tclass;
};
struct ethtool_ah_espip6_spec {
 __be32 ip6src[4];
 __be32 ip6dst[4];
 __be32 spi;
 __u8 tclass;
};
struct ethtool_usrip6_spec {
 __be32 ip6src[4];
 __be32 ip6dst[4];
 __be32 l4_4_bytes;
 __u8 tclass;
 __u8 l4_proto;
};

union ethtool_flow_union {
 struct ethtool_tcpip4_spec tcp_ip4_spec;
 struct ethtool_tcpip4_spec udp_ip4_spec;
 struct ethtool_tcpip4_spec sctp_ip4_spec;
 struct ethtool_ah_espip4_spec ah_ip4_spec;
 struct ethtool_ah_espip4_spec esp_ip4_spec;
 struct ethtool_usrip4_spec usr_ip4_spec;
 struct ethtool_tcpip6_spec tcp_ip6_spec;
 struct ethtool_tcpip6_spec udp_ip6_spec;
 struct ethtool_tcpip6_spec sctp_ip6_spec;
 struct ethtool_ah_espip6_spec ah_ip6_spec;
 struct ethtool_ah_espip6_spec esp_ip6_spec;
 struct ethtool_usrip6_spec usr_ip6_spec;
 struct ethhdr ether_spec;
 __u8 hdata[52];
};
struct ethtool_flow_ext {
 __u8 padding[2];
 unsigned char h_dest[6];
 __be16 vlan_etype;
 __be16 vlan_tci;
 __be32 data[2];
};
struct ethtool_rx_flow_spec {
 __u32 flow_type;
 union ethtool_flow_union h_u;
 struct ethtool_flow_ext h_ext;
 union ethtool_flow_union m_u;
 struct ethtool_flow_ext m_ext;
 __u64 ring_cookie;
 __u32 location;
};
static __inline__ __u64 ethtool_get_flow_spec_ring(__u64 ring_cookie)
{
 return 0x00000000FFFFFFFFLL & ring_cookie;
}

static __inline__ __u64 ethtool_get_flow_spec_ring_vf(__u64 ring_cookie)
{
 return (0x000000FF00000000LL & ring_cookie) >>
    32;
}
struct ethtool_rxnfc {
 __u32 cmd;
 __u32 flow_type;
 __u64 data;
 struct ethtool_rx_flow_spec fs;
 __u32 rule_cnt;
 __u32 rule_locs[0];
};
struct ethtool_rxfh_indir {
 __u32 cmd;
 __u32 size;
 __u32 ring_index[0];
};
struct ethtool_rxfh {
 __u32 cmd;
 __u32 rss_context;
 __u32 indir_size;
 __u32 key_size;
 __u8 hfunc;
 __u8 rsvd8[3];
 __u32 rsvd32;
 __u32 rss_config[0];
};
struct ethtool_rx_ntuple_flow_spec {
 __u32 flow_type;
 union {
  struct ethtool_tcpip4_spec tcp_ip4_spec;
  struct ethtool_tcpip4_spec udp_ip4_spec;
  struct ethtool_tcpip4_spec sctp_ip4_spec;
  struct ethtool_ah_espip4_spec ah_ip4_spec;
  struct ethtool_ah_espip4_spec esp_ip4_spec;
  struct ethtool_usrip4_spec usr_ip4_spec;
  struct ethhdr ether_spec;
  __u8 hdata[72];
 } h_u, m_u;

 __u16 vlan_tag;
 __u16 vlan_tag_mask;
 __u64 data;
 __u64 data_mask;

 __s32 action;


};






struct ethtool_rx_ntuple {
 __u32 cmd;
 struct ethtool_rx_ntuple_flow_spec fs;
};


enum ethtool_flash_op_type {
 ETHTOOL_FLASH_ALL_REGIONS = 0,
};


struct ethtool_flash {
 __u32 cmd;
 __u32 region;
 char data[128];
};
struct ethtool_dump {
 __u32 cmd;
 __u32 version;
 __u32 flag;
 __u32 len;
 __u8 data[0];
};
struct ethtool_get_features_block {
 __u32 available;
 __u32 requested;
 __u32 active;
 __u32 never_changed;
};
struct ethtool_gfeatures {
 __u32 cmd;
 __u32 size;
 struct ethtool_get_features_block features[0];
};






struct ethtool_set_features_block {
 __u32 valid;
 __u32 requested;
};







struct ethtool_sfeatures {
 __u32 cmd;
 __u32 size;
 struct ethtool_set_features_block features[0];
};
struct ethtool_ts_info {
 __u32 cmd;
 __u32 so_timestamping;
 __s32 phc_index;
 __u32 tx_types;
 __u32 tx_reserved[3];
 __u32 rx_filters;
 __u32 rx_reserved[3];
};
enum ethtool_sfeatures_retval_bits {
 ETHTOOL_F_UNSUPPORTED__BIT,
 ETHTOOL_F_WISH__BIT,
 ETHTOOL_F_COMPAT__BIT,
};
struct ethtool_per_queue_op {
 __u32 cmd;
 __u32 sub_command;
 __u32 queue_mask[(((4096) + (32) - 1) / (32))];
 char data[];
};
enum ethtool_link_mode_bit_indices {
 ETHTOOL_LINK_MODE_10baseT_Half_BIT = 0,
 ETHTOOL_LINK_MODE_10baseT_Full_BIT = 1,
 ETHTOOL_LINK_MODE_100baseT_Half_BIT = 2,
 ETHTOOL_LINK_MODE_100baseT_Full_BIT = 3,
 ETHTOOL_LINK_MODE_1000baseT_Half_BIT = 4,
 ETHTOOL_LINK_MODE_1000baseT_Full_BIT = 5,
 ETHTOOL_LINK_MODE_Autoneg_BIT = 6,
 ETHTOOL_LINK_MODE_TP_BIT = 7,
 ETHTOOL_LINK_MODE_AUI_BIT = 8,
 ETHTOOL_LINK_MODE_MII_BIT = 9,
 ETHTOOL_LINK_MODE_FIBRE_BIT = 10,
 ETHTOOL_LINK_MODE_BNC_BIT = 11,
 ETHTOOL_LINK_MODE_10000baseT_Full_BIT = 12,
 ETHTOOL_LINK_MODE_Pause_BIT = 13,
 ETHTOOL_LINK_MODE_Asym_Pause_BIT = 14,
 ETHTOOL_LINK_MODE_2500baseX_Full_BIT = 15,
 ETHTOOL_LINK_MODE_Backplane_BIT = 16,
 ETHTOOL_LINK_MODE_1000baseKX_Full_BIT = 17,
 ETHTOOL_LINK_MODE_10000baseKX4_Full_BIT = 18,
 ETHTOOL_LINK_MODE_10000baseKR_Full_BIT = 19,
 ETHTOOL_LINK_MODE_10000baseR_FEC_BIT = 20,
 ETHTOOL_LINK_MODE_20000baseMLD2_Full_BIT = 21,
 ETHTOOL_LINK_MODE_20000baseKR2_Full_BIT = 22,
 ETHTOOL_LINK_MODE_40000baseKR4_Full_BIT = 23,
 ETHTOOL_LINK_MODE_40000baseCR4_Full_BIT = 24,
 ETHTOOL_LINK_MODE_40000baseSR4_Full_BIT = 25,
 ETHTOOL_LINK_MODE_40000baseLR4_Full_BIT = 26,
 ETHTOOL_LINK_MODE_56000baseKR4_Full_BIT = 27,
 ETHTOOL_LINK_MODE_56000baseCR4_Full_BIT = 28,
 ETHTOOL_LINK_MODE_56000baseSR4_Full_BIT = 29,
 ETHTOOL_LINK_MODE_56000baseLR4_Full_BIT = 30,
 ETHTOOL_LINK_MODE_25000baseCR_Full_BIT = 31,
 ETHTOOL_LINK_MODE_25000baseKR_Full_BIT = 32,
 ETHTOOL_LINK_MODE_25000baseSR_Full_BIT = 33,
 ETHTOOL_LINK_MODE_50000baseCR2_Full_BIT = 34,
 ETHTOOL_LINK_MODE_50000baseKR2_Full_BIT = 35,
 ETHTOOL_LINK_MODE_100000baseKR4_Full_BIT = 36,
 ETHTOOL_LINK_MODE_100000baseSR4_Full_BIT = 37,
 ETHTOOL_LINK_MODE_100000baseCR4_Full_BIT = 38,
 ETHTOOL_LINK_MODE_100000baseLR4_ER4_Full_BIT = 39,
 ETHTOOL_LINK_MODE_50000baseSR2_Full_BIT = 40,
 ETHTOOL_LINK_MODE_1000baseX_Full_BIT = 41,
 ETHTOOL_LINK_MODE_10000baseCR_Full_BIT = 42,
 ETHTOOL_LINK_MODE_10000baseSR_Full_BIT = 43,
 ETHTOOL_LINK_MODE_10000baseLR_Full_BIT = 44,
 ETHTOOL_LINK_MODE_10000baseLRM_Full_BIT = 45,
 ETHTOOL_LINK_MODE_10000baseER_Full_BIT = 46,
 ETHTOOL_LINK_MODE_2500baseT_Full_BIT = 47,
 ETHTOOL_LINK_MODE_5000baseT_Full_BIT = 48,
 __ETHTOOL_LINK_MODE_LAST
   = ETHTOOL_LINK_MODE_5000baseT_Full_BIT,
};
static __inline__ int ethtool_validate_speed(__u32 speed)
{
 return speed <= 0x7fffffff || speed == -1;
}






static __inline__ int ethtool_validate_duplex(__u8 duplex)
{
 switch (duplex) {
 case 0x00:
 case 0x01:
 case 0xff:
  return 1;
 }

 return 0;
}
enum ethtool_reset_flags {





 ETH_RESET_MGMT = 1 << 0,
 ETH_RESET_IRQ = 1 << 1,
 ETH_RESET_DMA = 1 << 2,
 ETH_RESET_FILTER = 1 << 3,
 ETH_RESET_OFFLOAD = 1 << 4,
 ETH_RESET_MAC = 1 << 5,
 ETH_RESET_PHY = 1 << 6,
 ETH_RESET_RAM = 1 << 7,


 ETH_RESET_DEDICATED = 0x0000ffff,

 ETH_RESET_ALL = 0xffffffff,

};
struct ethtool_link_settings {
 __u32 cmd;
 __u32 speed;
 __u8 duplex;
 __u8 port;
 __u8 phy_address;
 __u8 autoneg;
 __u8 mdio_support;
 __u8 eth_tp_mdix;
 __u8 eth_tp_mdix_ctrl;
 __s8 link_mode_masks_nwords;
 __u32 reserved[8];
 __u32 link_mode_masks[0];





};

struct pcap_linux {
 u_int packets_read;
 long proc_dropped;
 struct pcap_stat stat;

 char *device;
 int filter_in_userland;
 int blocks_to_filter_in_userland;
 int must_do_on_close;
 int timeout;
 int sock_packet;
 int cooked;
 int ifindex;
 int lo_ifindex;
 bpf_u_int32 oldmode;
 char *mondevice;
 u_char *mmapbuf;
 size_t mmapbuflen;
 int vlan_offset;
 u_int tp_version;
 u_int tp_hdrlen;
 u_char *oneshot_buffer;
 int poll_timeout;

 unsigned char *current_packet;
 int packets_left;

};
static int get_if_flags(const char *, bpf_u_int32 *, char *);
static int is_wifi(int, const char *);
static void map_arphrd_to_dlt(pcap_t *, int, int, const char *, int);

static short int map_packet_type_to_sll_type(short int);

static int pcap_activate_linux(pcap_t *);
static int activate_old(pcap_t *);
static int activate_new(pcap_t *);
static int activate_mmap(pcap_t *, int *);
static int pcap_can_set_rfmon_linux(pcap_t *);
static int pcap_read_linux(pcap_t *, int, pcap_handler, u_char *);
static int pcap_read_packet(pcap_t *, pcap_handler, u_char *);
static int pcap_inject_linux(pcap_t *, const void *, size_t);
static int pcap_stats_linux(pcap_t *, struct pcap_stat *);
static int pcap_setfilter_linux(pcap_t *, struct bpf_program *);
static int pcap_setdirection_linux(pcap_t *, pcap_direction_t);
static int pcap_set_datalink_linux(pcap_t *, int);
static void pcap_cleanup_linux(pcap_t *);






struct tpacket_hdr_64 {
 uint64_t tp_status;
 unsigned int tp_len;
 unsigned int tp_snaplen;
 unsigned short tp_mac;
 unsigned short tp_net;
 unsigned int tp_sec;
 unsigned int tp_usec;
};







union thdr {
 struct tpacket_hdr *h1;
 struct tpacket_hdr_64 *h1_64;

 struct tpacket2_hdr *h2;


 struct tpacket_block_desc *h3;

 void *raw;
};





static void destroy_ring(pcap_t *handle);
static int create_ring(pcap_t *handle, int *status);
static int prepare_tpacket_socket(pcap_t *handle);
static void pcap_cleanup_linux_mmap(pcap_t *);
static int pcap_read_linux_mmap_v1(pcap_t *, int, pcap_handler , u_char *);
static int pcap_read_linux_mmap_v1_64(pcap_t *, int, pcap_handler , u_char *);

static int pcap_read_linux_mmap_v2(pcap_t *, int, pcap_handler , u_char *);


static int pcap_read_linux_mmap_v3(pcap_t *, int, pcap_handler , u_char *);

static int pcap_setfilter_linux_mmap(pcap_t *, struct bpf_program *);
static int pcap_setnonblock_mmap(pcap_t *p, int nonblock);
static int pcap_getnonblock_mmap(pcap_t *p);
static void pcap_oneshot_mmap(u_char *user, const struct pcap_pkthdr *h,
    const u_char *bytes);
static int iface_get_id(int fd, const char *device, char *ebuf);

static int iface_get_mtu(int fd, const char *device, char *ebuf);
static int iface_get_arptype(int fd, const char *device, char *ebuf);

static int iface_bind(int fd, int ifindex, char *ebuf, int protocol);

static int has_wext(int sock_fd, const char *device, char *ebuf);

static int enter_rfmon_mode(pcap_t *handle, int sock_fd,
    const char *device);


static int iface_ethtool_get_ts_info(const char *device, pcap_t *handle,
    char *ebuf);


static int iface_get_offload(pcap_t *handle);

static int iface_bind_old(int fd, const char *device, char *ebuf);


static int fix_program(pcap_t *handle, struct sock_fprog *fcode,
    int is_mapped);
static int fix_offset(struct bpf_insn *p);
static int set_kernel_filter(pcap_t *handle, struct sock_fprog *fcode);
static int reset_kernel_filter(pcap_t *handle);

static struct sock_filter total_insn
 = { (u_short)(
  0x06 
  | 
  0x00
  ), 0, 0, 0 };
static struct sock_fprog total_fcode
 = { 1, &total_insn };


pcap_t *
pcap_create_interface(const char *device, char *ebuf)
{
 pcap_t *handle={0};

 handle = pcap_create_common(ebuf, sizeof (struct pcap_linux));
 if (handle == 
              ((void *)0)
                  )
  return 
        ((void *)0)
            ;

 handle->activate_op = pcap_activate_linux;
 handle->can_set_rfmon_op = pcap_can_set_rfmon_linux;





 if (iface_ethtool_get_ts_info(device, handle, ebuf) == -1) {
  pcap_close(handle);
  return 
        ((void *)0)
            ;
 }
 handle->tstamp_precision_count = 2;
 handle->tstamp_precision_list = malloc(2 * sizeof(u_int));
 if (handle->tstamp_precision_list == 
                                     ((void *)0)
                                         ) {
  pcap_fmt_errmsg_for_errno(ebuf, 256,
      
     (*__errno_location ())
          , "malloc");
  pcap_close(handle);
  return 
        ((void *)0)
            ;
 }
 handle->tstamp_precision_list[0] = 0;
 handle->tstamp_precision_list[1] = 1;


 return handle;
}
static int
is_bonding_device(int fd, const char *device)
{

 struct ifreq ifr={0};
 ifbond ifb={0};

 memset(&ifr, 0, sizeof ifr);
 (strncpy((ifr.
ifr_ifrn.ifrn_name
), (device), (sizeof ifr.
ifr_ifrn.ifrn_name
)), ((sizeof ifr.
ifr_ifrn.ifrn_name
) <= 0 ? 0 : ((ifr.
ifr_ifrn.ifrn_name
)[(sizeof ifr.
ifr_ifrn.ifrn_name
) - 1] = '\0')), (void) strlen((device)));
 memset(&ifb, 0, sizeof ifb);
 ifr.
    ifr_ifru.ifru_data 
             = (caddr_t)&ifb;
 if (ioctl(fd, 
              0x8994
                                   , &ifr) == 0)
  return 1;


 return 0;
}


static int pcap_protocol(pcap_t *handle)
{
 int protocol={0};

 protocol = handle->opt.protocol;
 if (protocol == 0)
  protocol = 
            0x0003
                     ;

 return htons(protocol);
}

static int
pcap_can_set_rfmon_linux(pcap_t *handle)
{





 int sock_fd={0};
 struct iwreq ireq={0};


 if (strcmp(handle->opt.device, "any") == 0) {



  return 0;
 }
 sock_fd = socket(
                 17
                          , 
                            SOCK_RAW
                                    , pcap_protocol(handle));
 if (sock_fd == -1) {
  pcap_fmt_errmsg_for_errno(handle->errbuf, 256,
      
     (*__errno_location ())
          , "socket");
  return -1;
 }

 if (is_bonding_device(sock_fd, handle->opt.device)) {

  close(sock_fd);
  return 0;
 }




 (strncpy((ireq.ifr_ifrn.ifrn_name), (handle->opt.device), (sizeof ireq.ifr_ifrn.ifrn_name)), ((sizeof ireq.ifr_ifrn.ifrn_name) <= 0 ? 0 : ((ireq.ifr_ifrn.ifrn_name)[(sizeof ireq.ifr_ifrn.ifrn_name) - 1] = '\0')), (void) strlen((handle->opt.device)))
                                    ;
 if (ioctl(sock_fd, 
                   0x8B07
                              , &ireq) != -1) {



  close(sock_fd);
  return 1;
 }
 if (
    (*__errno_location ()) 
          == 
             19
                   ) {

  pcap_fmt_errmsg_for_errno(handle->errbuf, 256,
      
     (*__errno_location ())
          , "SIOCGIWMODE failed");
  close(sock_fd);
  return -5;
 }
 close(sock_fd);

 return 0;
}
static long int
linux_if_drops(const char * if_name)
{
 char buffer[512]={0};
 char * bufptr={0};
 FILE * file={0};
 int field_to_convert = 3, if_name_sz = strlen(if_name);
 long int dropped_pkts = 0;

 file = fopen("/proc/net/dev", "r");
 if (!file)
  return 0;

 while (!dropped_pkts && fgets( buffer, sizeof(buffer), file ))
 {



  if (field_to_convert != 4 && strstr(buffer, "bytes"))
  {
   field_to_convert = 4;
   continue;
  }


  if ((bufptr = strstr(buffer, if_name)) &&
   (bufptr == buffer || *(bufptr-1) == ' ') &&
   *(bufptr + if_name_sz) == ':')
  {
   bufptr = bufptr + if_name_sz + 1;


   while( --field_to_convert && *bufptr != '\0')
   {
    while (*bufptr != '\0' && *(bufptr++) == ' ');
    while (*bufptr != '\0' && *(bufptr++) != ' ');
   }


   while (*bufptr != '\0' && *bufptr == ' ') bufptr++;

   if (*bufptr != '\0')
    dropped_pkts = strtol(bufptr, 
                                 ((void *)0)
                                     , 10);

   break;
  }
 }

 fclose(file);
 return dropped_pkts;
}
static void pcap_cleanup_linux( pcap_t *handle )
{
 struct pcap_linux *handlep = handle->priv;
 struct ifreq ifr={0};





 int oldflags={0};
 struct iwreq ireq={0};


 if (handlep->must_do_on_close != 0) {




  if (handlep->must_do_on_close & 0x00000001) {
   memset(&ifr, 0, sizeof(ifr));
   (strncpy((ifr.
  ifr_ifrn.ifrn_name
  ), (handlep->device), (sizeof(ifr.
  ifr_ifrn.ifrn_name
  ))), ((sizeof(ifr.
  ifr_ifrn.ifrn_name
  )) <= 0 ? 0 : ((ifr.
  ifr_ifrn.ifrn_name
  )[(sizeof(ifr.
  ifr_ifrn.ifrn_name
  )) - 1] = '\0')), (void) strlen((handlep->device)))
                            ;
   if (ioctl(handle->fd, 
                        0x8913
                                    , &ifr) == -1) {
    fprintf(
           stderr
                 ,
        "Can't restore interface %s flags (SIOCGIFFLAGS failed: %s).\n"
        "Please adjust manually.\n"
        "Hint: This can't happen with Linux >= 2.2.0.\n",
        handlep->device, strerror(
                                 (*__errno_location ())
                                      ));
   } else {
    if (ifr.
           ifr_ifru.ifru_flags 
                     & 
                       IFF_PROMISC
                                  ) {




     ifr.
        ifr_ifru.ifru_flags 
                  &= ~
                      IFF_PROMISC
                                 ;
     if (ioctl(handle->fd, 
                          0x8914
                                      ,
         &ifr) == -1) {
      fprintf(
             stderr
                   ,
          "Can't restore interface %s flags (SIOCSIFFLAGS failed: %s).\n"
          "Please adjust manually.\n"
          "Hint: This can't happen with Linux >= 2.2.0.\n",
          handlep->device,
          strerror(
                  (*__errno_location ())
                       ));
     }
    }
   }
  }
  if (handlep->must_do_on_close & 0x00000002) {
   oldflags = 0;
   memset(&ifr, 0, sizeof(ifr));
   (strncpy((ifr.
  ifr_ifrn.ifrn_name
  ), (handlep->device), (sizeof(ifr.
  ifr_ifrn.ifrn_name
  ))), ((sizeof(ifr.
  ifr_ifrn.ifrn_name
  )) <= 0 ? 0 : ((ifr.
  ifr_ifrn.ifrn_name
  )[(sizeof(ifr.
  ifr_ifrn.ifrn_name
  )) - 1] = '\0')), (void) strlen((handlep->device)))
                            ;
   if (ioctl(handle->fd, 
                        0x8913
                                    , &ifr) != -1) {
    if (ifr.
           ifr_ifru.ifru_flags 
                     & 
                       IFF_UP
                             ) {
     oldflags = ifr.
                   ifr_ifru.ifru_flags
                            ;
     ifr.
        ifr_ifru.ifru_flags 
                  &= ~
                      IFF_UP
                            ;
     if (ioctl(handle->fd, 
                          0x8914
                                      , &ifr) == -1)
      oldflags = 0;
    }
   }




   (strncpy((ireq.ifr_ifrn.ifrn_name), (handlep->device), (sizeof ireq.ifr_ifrn.ifrn_name)), ((sizeof ireq.ifr_ifrn.ifrn_name) <= 0 ? 0 : ((ireq.ifr_ifrn.ifrn_name)[(sizeof ireq.ifr_ifrn.ifrn_name) - 1] = '\0')), (void) strlen((handlep->device)))
                                      ;
   ireq.u.mode = handlep->oldmode;
   if (ioctl(handle->fd, 
                        0x8B06
                                   , &ireq) == -1) {



    fprintf(
           stderr
                 ,
        "Can't restore interface %s wireless mode (SIOCSIWMODE failed: %s).\n"
        "Please adjust manually.\n",
        handlep->device, strerror(
                                 (*__errno_location ())
                                      ));
   }





   if (oldflags != 0) {
    ifr.
       ifr_ifru.ifru_flags 
                 = oldflags;
    if (ioctl(handle->fd, 
                         0x8914
                                     , &ifr) == -1) {
     fprintf(
            stderr
                  ,
         "Can't bring interface %s back up (SIOCSIFFLAGS failed: %s).\n"
         "Please adjust manually.\n",
         handlep->device, strerror(
                                  (*__errno_location ())
                                       ));
    }
   }
  }






  pcap_remove_from_pcaps_to_close(handle);
 }

 if (handlep->mondevice != 
                          ((void *)0)
                              ) {
  free(handlep->mondevice);
  handlep->mondevice = 
                      ((void *)0)
                          ;
 }
 if (handlep->device != 
                       ((void *)0)
                           ) {
  free(handlep->device);
  handlep->device = 
                   ((void *)0)
                       ;
 }
 pcap_cleanup_live_common(handle);
}




static void
set_poll_timeout(struct pcap_linux *handlep)
{

 struct utsname utsname={0};
 char *version_component, *endp={0};
 int major, minor={0};
 int broken_tpacket_v3 = 1;






 if (uname(&utsname) == 0) {






  version_component = utsname.release;
  major = strtol(version_component, &endp, 10);
  if (endp != version_component && *endp == '.') {




   version_component = endp + 1;
   minor = strtol(version_component, &endp, 10);
   if (endp != version_component &&
       (*endp == '.' || *endp == '\0')) {




    if (major >= 4 || (major == 3 && minor >= 19)) {

     broken_tpacket_v3 = 0;
    }
   }
  }
 }

 if (handlep->timeout == 0) {
  if (handlep->tp_version == TPACKET_V3 && broken_tpacket_v3)
   handlep->poll_timeout = 1;
  else

   handlep->poll_timeout = -1;
 } else if (handlep->timeout > 0) {






  if (handlep->tp_version == TPACKET_V3 && !broken_tpacket_v3)
   handlep->poll_timeout = -1;
  else

   handlep->poll_timeout = handlep->timeout;
 } else {





  handlep->poll_timeout = 0;
 }
}
static int
pcap_activate_linux(pcap_t *handle)
{
 struct pcap_linux *handlep = handle->priv;
 const char *device={0};
 struct ifreq ifr={0};
 int status = 0;
 int ret={0};

 device = handle->opt.device;
 if (strlen(device) >= sizeof(ifr.
                                 ifr_ifrn.ifrn_name
                                         )) {
  status = -5;
  goto fail;
 }
 if (handle->snapshot <= 0 || handle->snapshot > 262144)
  handle->snapshot = 262144;

 handle->inject_op = pcap_inject_linux;
 handle->setfilter_op = pcap_setfilter_linux;
 handle->setdirection_op = pcap_setdirection_linux;
 handle->set_datalink_op = pcap_set_datalink_linux;
 handle->getnonblock_op = pcap_getnonblock_fd;
 handle->setnonblock_op = pcap_setnonblock_fd;
 handle->cleanup_op = pcap_cleanup_linux;
 handle->read_op = pcap_read_linux;
 handle->stats_op = pcap_stats_linux;






 if (strcmp(device, "any") == 0) {
  if (handle->opt.promisc) {
   handle->opt.promisc = 0;

   snprintf(handle->errbuf, 256,
       "Promiscuous mode not supported on the \"any\" device");
   status = 2;
  }
 }

 handlep->device = strdup(device);
 if (handlep->device == 
                       ((void *)0)
                           ) {
  pcap_fmt_errmsg_for_errno(handle->errbuf, 256,
      
     (*__errno_location ())
          , "strdup");
  return -1;
 }


 handlep->timeout = handle->opt.timeout;






 if (handle->opt.promisc)
  handlep->proc_dropped = linux_if_drops(handlep->device);
 ret = activate_new(handle);
 if (ret < 0) {





  status = ret;
  goto fail;
 }
 if (ret == 1) {




  switch (activate_mmap(handle, &status)) {

  case 1:
   set_poll_timeout(handlep);
   return status;

  case 0:




   break;

  case -1:







   status = ret;
   goto fail;
  }
 }
 else if (ret == 0) {

  if ((ret = activate_old(handle)) != 1) {





   status = ret;
   goto fail;
  }
 }




 if (handle->opt.buffer_size != 0) {



  if (setsockopt(handle->fd, 
                            1
                                      , 
                                        8
                                                 ,
      &handle->opt.buffer_size,
      sizeof(handle->opt.buffer_size)) == -1) {
   pcap_fmt_errmsg_for_errno(handle->errbuf,
       256, 
                        (*__errno_location ())
                             , "SO_RCVBUF");
   status = -1;
   goto fail;
  }
 }



 handle->buffer = malloc(handle->bufsize + handle->offset);
 if (!handle->buffer) {
  pcap_fmt_errmsg_for_errno(handle->errbuf, 256,
      
     (*__errno_location ())
          , "malloc");
  status = -1;
  goto fail;
 }





 handle->selectable_fd = handle->fd;

 return status;

fail:
 pcap_cleanup_linux(handle);
 return status;
}






static int
pcap_read_linux(pcap_t *handle, int max_packets , pcap_handler callback, u_char *user)
{




 return pcap_read_packet(handle, callback, user);
}

static int
pcap_set_datalink_linux(pcap_t *handle, int dlt)
{
 handle->linktype = dlt;
 return 0;
}






static inline int
linux_check_direction(const pcap_t *handle, const struct sockaddr_ll *sll)
{
 struct pcap_linux *handlep = handle->priv;

 if (sll->sll_pkttype == 
                        4
                                       ) {






  if (sll->sll_ifindex == handlep->lo_ifindex)
   return 0;
  if ((sll->sll_protocol == 0x000C ||
       sll->sll_protocol == 0x000D) &&
       handle->direction != PCAP_D_OUT)
   return 0;




  if (handle->direction == PCAP_D_IN)
   return 0;
 } else {




  if (handle->direction == PCAP_D_OUT)
   return 0;
 }
 return 1;
}






static int
pcap_read_packet(pcap_t *handle, pcap_handler callback, u_char *userdata)
{
 struct pcap_linux *handlep = handle->priv;
 u_char *bp={0};
 int offset={0};

 struct sockaddr_ll from={0};
 struct sll_header *hdrp={0};




 struct iovec iov={0};
 struct msghdr msg={0};
 struct cmsghdr *cmsg={0};
 union {
  struct cmsghdr cmsg;
  char buf[
           ((((
           sizeof(struct tpacket_auxdata)
           ) + sizeof (size_t) - 1) & (size_t) ~(sizeof (size_t) - 1)) + (((sizeof (struct cmsghdr)) + sizeof (size_t) - 1) & (size_t) ~(sizeof (size_t) - 1)))
                                                     ];
 } cmsg_buf={0};



 int packet_len, caplen={0};
 struct pcap_pkthdr pcap_header={0};

        struct bpf_aux_data aux_data={0};





 if (handlep->cooked)
  offset = 16;
 else
  offset = 0;
 bp = (u_char *)handle->buffer + handle->offset;


 msg.msg_name = &from;
 msg.msg_namelen = sizeof(from);
 msg.msg_iov = &iov;
 msg.msg_iovlen = 1;
 msg.msg_control = &cmsg_buf;
 msg.msg_controllen = sizeof(cmsg_buf);
 msg.msg_flags = 0;

 iov.iov_len = handle->bufsize - offset;
 iov.iov_base = bp + offset;


 do {



  if (handle->break_loop) {





   handle->break_loop = 0;
   return -2;
  }


  packet_len = recvmsg(handle->fd, &msg, 
                                        MSG_TRUNC
                                                 );







 } while (packet_len == -1 && 
                             (*__errno_location ()) 
                                   == 
                                      4
                                           );



 if (packet_len == -1) {
  switch (
         (*__errno_location ())
              ) {

  case 
      11
            :
   return 0;

  case 
      100
              :







   snprintf(handle->errbuf, 256,
    "The interface went down");
   return -1;

  default:
   pcap_fmt_errmsg_for_errno(handle->errbuf,
       256, 
                        (*__errno_location ())
                             , "recvfrom");
   return -1;
  }
 }


 if (!handlep->sock_packet) {
  if (handlep->ifindex != -1 &&
      from.sll_ifindex != handlep->ifindex)
   return 0;







  if (!linux_check_direction(handle, &from))
   return 0;
 }






 if (handlep->cooked) {




  packet_len += 16;

  hdrp = (struct sll_header *)bp;
  hdrp->sll_pkttype = map_packet_type_to_sll_type(from.sll_pkttype);
  hdrp->sll_hatype = htons(from.sll_hatype);
  hdrp->sll_halen = htons(from.sll_halen);
  memcpy(hdrp->sll_addr, from.sll_addr,
      (from.sll_halen > 8) ?
        8 :
        from.sll_halen);
  hdrp->sll_protocol = from.sll_protocol;
 }




 aux_data.vlan_tag_present = 0;
 aux_data.vlan_tag = 0;

 if (handlep->vlan_offset != -1) {
  for (cmsg = 
             ((size_t) (
             &msg
             )->msg_controllen >= sizeof (struct cmsghdr) ? (struct cmsghdr *) (
             &msg
             )->msg_control : (struct cmsghdr *) 0)
                                ; cmsg; cmsg = 
                                               __cmsg_nxthdr (
                                               &msg
                                               , 
                                               cmsg
                                               )
                                                                      ) {
   struct tpacket_auxdata *aux={0};
   unsigned int len={0};
   struct vlan_tag *tag={0};

   if (cmsg->cmsg_len < 
                       ((((sizeof (struct cmsghdr)) + sizeof (size_t) - 1) & (size_t) ~(sizeof (size_t) - 1)) + (
                       sizeof(struct tpacket_auxdata)
                       )) 
                                                                ||
       cmsg->cmsg_level != 
                          263 
                                     ||
       cmsg->cmsg_type != 
                         8
                                       ) {




    continue;
   }

   aux = (struct tpacket_auxdata *)
                                  ((
                                  cmsg
                                  )->__cmsg_data)
                                                 ;
   if (!((aux)->tp_vlan_tci != 0 || ((aux)->tp_status & 
       (1 << 4)
       ))) {




    continue;
   }

   len = (u_int)packet_len > iov.iov_len ? iov.iov_len : (u_int)packet_len;
   if (len < (u_int)handlep->vlan_offset)
    break;







   bp -= 4;
   memmove(bp, bp + 4, handlep->vlan_offset);




   tag = (struct vlan_tag *)(bp + handlep->vlan_offset);
   tag->vlan_tpid = htons((((aux)->tp_vlan_tpid || ((aux)->tp_status & 
                         (1 << 6)
                         )) ? (aux)->tp_vlan_tpid : 
                         0x8100
                         ));
   tag->vlan_tci = htons(aux->tp_vlan_tci);







   aux_data.vlan_tag_present = 1;
   aux_data.vlan_tag = htons(aux->tp_vlan_tci) & 0x0fff;




   packet_len += 4;
  }
 }
 caplen = packet_len;
 if (caplen > handle->snapshot)
  caplen = handle->snapshot;


 if (handlep->filter_in_userland && handle->fcode.bf_insns) {
  if (bpf_filter_with_aux_data(handle->fcode.bf_insns, bp,
      packet_len, caplen, &aux_data) == 0) {

   return 0;
  }
 }





 if (handle->opt.tstamp_precision == 1) {
  if (ioctl(handle->fd, 
                       0x8907
                                   , &pcap_header.ts) == -1) {
   pcap_fmt_errmsg_for_errno(handle->errbuf,
       256, 
                        (*__errno_location ())
                             , "SIOCGSTAMPNS");
   return -1;
  }
        } else

 {
  if (ioctl(handle->fd, 
                       0x8906
                                 , &pcap_header.ts) == -1) {
   pcap_fmt_errmsg_for_errno(handle->errbuf,
       256, 
                        (*__errno_location ())
                             , "SIOCGSTAMP");
   return -1;
  }
        }

 pcap_header.caplen = caplen;
 pcap_header.len = packet_len;
 handlep->packets_read++;


 callback(userdata, &pcap_header, bp);

 return 1;
}

static int
pcap_inject_linux(pcap_t *handle, const void *buf, size_t size)
{
 struct pcap_linux *handlep = handle->priv;
 int ret={0};


 if (!handlep->sock_packet) {

  if (handlep->ifindex == -1) {



   (strncpy((handle->errbuf), ("Sending packets isn't supported on the \"any\" device"), (256)), ((256) <= 0 ? 0 : ((handle->errbuf)[(256) - 1] = '\0')), (void) strlen(("Sending packets isn't supported on the \"any\" device")))

                        ;
   return (-1);
  }

  if (handlep->cooked) {







   (strncpy((handle->errbuf), ("Sending packets isn't supported in cooked mode"), (256)), ((256) <= 0 ? 0 : ((handle->errbuf)[(256) - 1] = '\0')), (void) strlen(("Sending packets isn't supported in cooked mode")))

                        ;
   return (-1);
  }
 }


 ret = send(handle->fd, buf, size, 0);
 if (ret == -1) {
  pcap_fmt_errmsg_for_errno(handle->errbuf, 256,
      
     (*__errno_location ())
          , "send");
  return (-1);
 }
 return (ret);
}
static int
pcap_stats_linux(pcap_t *handle, struct pcap_stat *stats)
{
 struct pcap_linux *handlep = handle->priv;
 struct tpacket_stats_v3 kstats={0};



 socklen_t len = sizeof (struct tpacket_stats);


 long if_dropped = 0;




 if (handle->opt.promisc)
 {
  if_dropped = handlep->proc_dropped;
  handlep->proc_dropped = linux_if_drops(handlep->device);
  handlep->stat.ps_ifdrop += (handlep->proc_dropped - if_dropped);
 }





 if (getsockopt(handle->fd, 
                           263
                                     , 
                                       6
                                                        ,
   &kstats, &len) > -1) {
  handlep->stat.ps_recv += kstats.tp_packets;
  handlep->stat.ps_drop += kstats.tp_drops;
  *stats = handlep->stat;
  return 0;
 }
 else
 {







  if (
     (*__errno_location ()) 
           != 
              95
                        ) {
   pcap_fmt_errmsg_for_errno(handle->errbuf,
       256, 
                        (*__errno_location ())
                             , "pcap_stats");
   return -1;
  }
 }
 stats->ps_recv = handlep->packets_read;
 stats->ps_drop = 0;
 stats->ps_ifdrop = handlep->stat.ps_ifdrop;
 return 0;
}

static int
add_linux_if(pcap_if_list_t *devlistp, const char *ifname, int fd, char *errbuf)
{
 const char *p={0};
 char name[512]={0};
 char *q, *saveq={0};
 struct ifreq ifrflags={0};




 p = ifname;
 q = &name[0];
 while (*p != '\0' && 
                     (((
                     *p
                     ) & ~0x7f) == 0) 
                                 && !
                                     ((*__ctype_b_loc ())[(int) ((
                                     *p
                                     ))] & (unsigned short int) _ISspace)
                                                ) {
  if (*p == ':') {
   saveq = q;
   while (
         (((
         *p
         ) & ~0x7f) == 0) 
                     && 
                        ((*__ctype_b_loc ())[(int) ((
                        *p
                        ))] & (unsigned short int) _ISdigit)
                                   )
    *q++ = *p++;
   if (*p != ':') {




    q = saveq;
   }
   break;
  } else
   *q++ = *p++;
 }
 *q = '\0';




 (strncpy((ifrflags.
ifr_ifrn.ifrn_name
), (name), (sizeof(ifrflags.
ifr_ifrn.ifrn_name
))), ((sizeof(ifrflags.
ifr_ifrn.ifrn_name
)) <= 0 ? 0 : ((ifrflags.
ifr_ifrn.ifrn_name
)[(sizeof(ifrflags.
ifr_ifrn.ifrn_name
)) - 1] = '\0')), (void) strlen((name)));
 if (ioctl(fd, 
              0x8913
                          , (char *)&ifrflags) < 0) {
  if (
     (*__errno_location ()) 
           == 
              6 
                    || 
                       (*__errno_location ()) 
                             == 
                                19
                                      )
   return (0);
  pcap_fmt_errmsg_for_errno(errbuf, 256,
      
     (*__errno_location ())
          , "SIOCGIFFLAGS: %.*s",
      (int)sizeof(ifrflags.
                          ifr_ifrn.ifrn_name
                                  ),
      ifrflags.
              ifr_ifrn.ifrn_name
                      );
  return (-1);
 }





 if (find_or_add_if(devlistp, name, ifrflags.
                                            ifr_ifru.ifru_flags
                                                     ,
     get_if_flags, errbuf) == 
                             ((void *)0)
                                 ) {



  return (-1);
 }

 return (0);
}
static int
scan_sys_class_net(pcap_if_list_t *devlistp, char *errbuf)
{
 DIR *sys_class_net_d={0};
 int fd={0};
 struct dirent *ent={0};
 char subsystem_path[
                    4096
                            +1]={0};
 struct stat statb={0};
 int ret = 1;

 sys_class_net_d = opendir("/sys/class/net");
 if (sys_class_net_d == 
                       ((void *)0)
                           ) {



  if (
     (*__errno_location ()) 
           == 
              2
                    )
   return (0);




  pcap_fmt_errmsg_for_errno(errbuf, 256,
      
     (*__errno_location ())
          , "Can't open /sys/class/net");
  return (-1);
 }




 fd = socket(
            1
                   , 
                     SOCK_RAW
                             , 0);
 if (fd < 0) {
  pcap_fmt_errmsg_for_errno(errbuf, 256,
      
     (*__errno_location ())
          , "socket");
  (void)closedir(sys_class_net_d);
  return (-1);
 }

 for (;;) {
  
 (*__errno_location ()) 
       = 0;
  ent = readdir(sys_class_net_d);
  if (ent == 
            ((void *)0)
                ) {



   break;
  }




  if (strcmp(ent->d_name, ".") == 0 ||
      strcmp(ent->d_name, "..") == 0)
   continue;





  if (ent->d_type == 
                    DT_REG
                          )
   continue;
  snprintf(subsystem_path, sizeof subsystem_path,
      "/sys/class/net/%s/ifindex", ent->d_name);
  if (lstat(subsystem_path, &statb) != 0) {
   continue;
  }




  if (add_linux_if(devlistp, &ent->d_name[0], fd, errbuf) == -1) {

   ret = -1;
   break;
  }
 }
 if (ret != -1) {




  if (
     (*__errno_location ()) 
           != 0) {
   pcap_fmt_errmsg_for_errno(errbuf, 256,
       
      (*__errno_location ())
           , "Error reading /sys/class/net");
   ret = -1;
  }
 }

 (void)close(fd);
 (void)closedir(sys_class_net_d);
 return (ret);
}
static int
scan_proc_net_dev(pcap_if_list_t *devlistp, char *errbuf)
{
 FILE *proc_net_f={0};
 int fd={0};
 char linebuf[512]={0};
 int linenum={0};
 char *p={0};
 int ret = 0;

 proc_net_f = fopen("/proc/net/dev", "r");
 if (proc_net_f == 
                  ((void *)0)
                      ) {



  if (
     (*__errno_location ()) 
           == 
              2
                    )
   return (0);




  pcap_fmt_errmsg_for_errno(errbuf, 256,
      
     (*__errno_location ())
          , "Can't open /proc/net/dev");
  return (-1);
 }




 fd = socket(
            1
                   , 
                     SOCK_RAW
                             , 0);
 if (fd < 0) {
  pcap_fmt_errmsg_for_errno(errbuf, 256,
      
     (*__errno_location ())
          , "socket");
  (void)fclose(proc_net_f);
  return (-1);
 }

 for (linenum = 1;
     fgets(linebuf, sizeof linebuf, proc_net_f) != 
                                                  ((void *)0)
                                                      ; linenum++) {



  if (linenum <= 2)
   continue;

  p = &linebuf[0];




  while (*p != '\0' && 
                      (((
                      *p
                      ) & ~0x7f) == 0) 
                                  && 
                                     ((*__ctype_b_loc ())[(int) ((
                                     *p
                                     ))] & (unsigned short int) _ISspace)
                                                )
   p++;
  if (*p == '\0' || *p == '\n')
   continue;




  if (add_linux_if(devlistp, p, fd, errbuf) == -1) {

   ret = -1;
   break;
  }
 }
 if (ret != -1) {




  if (ferror(proc_net_f)) {
   pcap_fmt_errmsg_for_errno(errbuf, 256,
       
      (*__errno_location ())
           , "Error reading /proc/net/dev");
   ret = -1;
  }
 }

 (void)close(fd);
 (void)fclose(proc_net_f);
 return (ret);
}




static const char any_descr[] = "Pseudo-device that captures on all interfaces";




static int
can_be_bound(const char *name )
{
 return (1);
}




static int
get_if_flags(const char *name, bpf_u_int32 *flags, char *errbuf)
{
 int sock={0};
 FILE *fh={0};
 unsigned int arptype={0};
 struct ifreq ifr={0};
 struct ethtool_value info={0};

 if (*flags & 0x00000001) {




  *flags |= 0x00000030;
  return 0;
 }

 sock = socket(
              2
                     , 
                       SOCK_DGRAM
                                 , 0);
 if (sock == -1) {
  pcap_fmt_errmsg_for_errno(errbuf, 256, 
                                                     (*__errno_location ())
                                                          ,
      "Can't create socket to get ethtool information for %s",
      name);
  return -1;
 }





 if (is_wifi(sock, name)) {



  *flags |= 0x00000008;
 } else {






  char *pathstr={0};

  if (asprintf(&pathstr, "/sys/class/net/%s/type", name) == -1) {
   snprintf(errbuf, 256,
       "%s: Can't generate path name string for /sys/class/net device",
       name);
   close(sock);
   return -1;
  }
  fh = fopen(pathstr, "r");
  if (fh != 
           ((void *)0)
               ) {
   if (fscanf(fh, "%u", &arptype) == 1) {



    switch (arptype) {


    case 
        772
                       :
     close(sock);
     fclose(fh);
     free(pathstr);
     return 0;


    case 
        783
                   :
    case 
        801
                        :
    case 
        802
                              :
    case 
        803
                                 :

    case 
        804
                         :
     *flags |= 0x00000008;
     break;
    }
   }
   fclose(fh);
   free(pathstr);
  }
 }


 memset(&ifr, 0, sizeof(ifr));
 (strncpy((ifr.
ifr_ifrn.ifrn_name
), (name), (sizeof(ifr.
ifr_ifrn.ifrn_name
))), ((sizeof(ifr.
ifr_ifrn.ifrn_name
)) <= 0 ? 0 : ((ifr.
ifr_ifrn.ifrn_name
)[(sizeof(ifr.
ifr_ifrn.ifrn_name
)) - 1] = '\0')), (void) strlen((name)));
 info.cmd = 
           0x0000000a
                        ;
 ifr.
    ifr_ifru.ifru_data 
             = (caddr_t)&info;
 if (ioctl(sock, 
                0x8946
                           , &ifr) == -1) {
  int save_errno = 
                  (*__errno_location ())
                       ;

  switch (save_errno) {

  case 
      95
                :
  case 
      22
            :
   *flags |= 0x00000030;
   close(sock);
   return 0;

  case 
      19
            :






   close(sock);
   return 0;

  default:



   pcap_fmt_errmsg_for_errno(errbuf, 256,
       save_errno,
       "%s: SIOCETHTOOL(ETHTOOL_GLINK) ioctl failed",
       name);
   close(sock);
   return -1;
  }
 }




 if (info.data) {



  *flags |= 0x00000010;
 } else {



  *flags |= 0x00000020;
 }


 close(sock);
 return 0;
}

int
pcap_platform_finddevs(pcap_if_list_t *devlistp, char *errbuf)
{
 int ret={0};




 if (pcap_findalldevs_interfaces(devlistp, errbuf, can_be_bound,
     get_if_flags) == -1)
  return (-1);
 ret = scan_sys_class_net(devlistp, errbuf);
 if (ret == -1)
  return (-1);
 if (ret == 0) {



  if (scan_proc_net_dev(devlistp, errbuf) == -1)
   return (-1);
 }







 if (add_dev(devlistp, "any",
     0x00000002|0x00000004|0x00000030,
     any_descr, errbuf) == 
                          ((void *)0)
                              )
  return (-1);

 return (0);
}




static int
pcap_setfilter_linux_common(pcap_t *handle, struct bpf_program *filter,
    int is_mmapped)
{
 struct pcap_linux *handlep={0};

 struct sock_fprog fcode={0};
 int can_filter_in_kernel={0};
 int err = 0;


 if (!handle)
  return -1;
 if (!filter) {
         (strncpy((handle->errbuf), ("setfilter: No filter specified"), (256)), ((256) <= 0 ? 0 : ((handle->errbuf)[(256) - 1] = '\0')), (void) strlen(("setfilter: No filter specified")))
                    ;
  return -1;
 }

 handlep = handle->priv;



 if (install_bpf_program(handle, filter) < 0)

  return -1;





 handlep->filter_in_userland = 1;





 if (handle->fcode.bf_len > 
                           (0x7fff * 2 + 1)
                                    ) {






  fprintf(
         stderr
               , "Warning: Filter too complex for kernel\n");
  fcode.len = 0;
  fcode.filter = 
                ((void *)0)
                    ;
  can_filter_in_kernel = 0;
 } else

 {
  switch (fix_program(handle, &fcode, is_mmapped)) {

  case -1:
  default:





   return -1;

  case 0:




   can_filter_in_kernel = 0;
   break;

  case 1:



   can_filter_in_kernel = 1;
   break;
  }
 }
 if (can_filter_in_kernel) {
  if ((err = set_kernel_filter(handle, &fcode)) == 0)
  {




   handlep->filter_in_userland = 0;
  }
  else if (err == -1)
  {





   if (
      (*__errno_location ()) 
            != 
               92 
                           && 
                              (*__errno_location ()) 
                                    != 
                                       95
                                                 ) {
    fprintf(
           stderr
                 ,
        "Warning: Kernel filter failed: %s\n",
     pcap_strerror(
                  (*__errno_location ())
                       ));
   }
  }
 }
 if (handlep->filter_in_userland) {
  if (reset_kernel_filter(handle) == -1) {
   pcap_fmt_errmsg_for_errno(handle->errbuf,
       256, 
                        (*__errno_location ())
                             ,
       "can't remove kernel filter");
   err = -2;
  }
 }




 if (fcode.filter != 
                    ((void *)0)
                        )
  free(fcode.filter);

 if (err == -2)

  return -1;


 return 0;
}

static int
pcap_setfilter_linux(pcap_t *handle, struct bpf_program *filter)
{
 return pcap_setfilter_linux_common(handle, filter, 0);
}






static int
pcap_setdirection_linux(pcap_t *handle, pcap_direction_t d)
{

 struct pcap_linux *handlep = handle->priv;

 if (!handlep->sock_packet) {
  handle->direction = d;
  return 0;
 }





 snprintf(handle->errbuf, 256,
     "Setting direction is not supported on SOCK_PACKET sockets");
 return -1;
}
static short int
map_packet_type_to_sll_type(short int sll_pkttype)
{
 switch (sll_pkttype) {

 case 
     0
                :
  return htons(0);

 case 
     1
                     :
  return htons(1);

 case 
     2
                     :
  return htons(2);

 case 
     3
                     :
  return htons(3);

 case 
     4
                    :
  return htons(4);

 default:
  return -1;
 }
}


static int
is_wifi(int sock_fd



, const char *device)
{
 char *pathstr={0};
 struct stat statb={0};

 char errbuf[256]={0};






 if (asprintf(&pathstr, "/sys/class/net/%s/wireless", device) == -1) {



  return 0;
 }
 if (stat(pathstr, &statb) == 0) {
  free(pathstr);
  return 1;
 }
 free(pathstr);






 if (has_wext(sock_fd, device, errbuf) == 1) {




  return 1;
 }

 return 0;
}
static void map_arphrd_to_dlt(pcap_t *handle, int sock_fd, int arptype,
         const char *device, int cooked_ok)
{
 static const char cdma_rmnet[] = "cdma_rmnet";

 switch (arptype) {

 case 
     1
                 :
  if (strncmp(device, cdma_rmnet, sizeof cdma_rmnet - 1) == 0) {
   handle->linktype = 12;
   return;
  }
  if (!is_wifi(sock_fd, device)) {



   handle->dlt_list = (u_int *) malloc(sizeof(u_int) * 2);



   if (handle->dlt_list != 
                          ((void *)0)
                              ) {
    handle->dlt_list[0] = 1;
    handle->dlt_list[1] = 143;
    handle->dlt_count = 2;
   }
  }


 case 
     23
                    :
 case 
     772
                    :
  handle->linktype = 1;
  handle->offset = 2;
  break;

 case 
     2
                  :
  handle->linktype = 2;
  break;

 case 
     3
                :
  handle->linktype = 202;
  break;

 case 
     4
                  :
  handle->linktype = 4;
  break;

 case 
     5
                 :
  handle->linktype = 5;
  break;



 case 280:







  handle->linktype = 113;
  break;




 case 
     800
                      :
 case 
     6
                   :
  handle->linktype = 6;
  handle->offset = 2;
  break;

 case 
     7
                  :
  handle->linktype = 129;
  break;




 case 
     774
                :
  handle->linktype = 10;
  handle->offset = 3;
  break;




 case 
     19
               :
  if (cooked_ok)
   handle->linktype = 113;
  else
   handle->linktype = -1;
  break;




 case 
     801
                     :
  handle->linktype = 105;
  break;




 case 
     802
                           :
  handle->linktype = 119;
  break;




 case 
     803
                              :
  handle->linktype = 127;
  break;

 case 
     512
               :
  if (cooked_ok)
   handle->linktype = 113;
  else {
   handle->linktype = 12;
  }
  break;




 case 
     513
                 :
  handle->linktype = 104;
  break;



 case 
     768
                  :



 case 
     776
               :
 case 
     257
                 :
 case 
     258
                 :
 case 
     259
                  :
 case 
     264
                 :
 case 
     256
                :



 case 
     518
                   :



 case 
     15
                :




  handle->linktype = 12;
  break;




 case 
     770
                :
  handle->linktype = 107;
  break;

 case 
     773
                    :
  handle->linktype = 114;
  break;

 case 18:
  handle->linktype = 122;
  break;




 case 
     784
                :



 case 
     785
                :



 case 
     786
                :



 case 
     787
                    :
  handle->dlt_list = (u_int *) malloc(sizeof(u_int) * 3);



  if (handle->dlt_list != 
                         ((void *)0)
                             ) {
   handle->dlt_list[0] = 224;
   handle->dlt_list[1] = 225;
   handle->dlt_list[2] = 122;
   handle->dlt_count = 3;
  }
  handle->linktype = 224;
  break;




 case 
     783
                :

  handle->linktype = 144;





  break;






 case 8445:

  handle->linktype = 177;
  break;




 case 
     0xFFFE
                :




  handle->linktype = 12;
  break;




       case 
           804
                            :
               handle->linktype = 230;
               break;




 case 824:
  handle->linktype = 253;
  break;




 case 826:
  handle->linktype = 271;
  break;

 default:
  handle->linktype = -1;
  break;
 }
}
static int
activate_new(pcap_t *handle)
{

 struct pcap_linux *handlep = handle->priv;
 const char *device = handle->opt.device;
 int is_any_device = (strcmp(device, "any") == 0);
 int protocol = pcap_protocol(handle);
 int sock_fd = -1, arptype={0};

 int val={0};

 int err = 0;
 struct packet_mreq mr={0};

 int bpf_extensions={0};
 socklen_t len = sizeof(bpf_extensions);
 sock_fd = is_any_device ?
  socket(
        17
                 , 
                   SOCK_DGRAM
                             , protocol) :
  socket(
        17
                 , 
                   SOCK_RAW
                           , protocol);

 if (sock_fd == -1) {
  if (
     (*__errno_location ()) 
           == 
              22 
                     || 
                        (*__errno_location ()) 
                              == 
                                 97
                                             ) {




   return 0;
  }

  pcap_fmt_errmsg_for_errno(handle->errbuf, 256,
      
     (*__errno_location ())
          , "socket");
  if (
     (*__errno_location ()) 
           == 
              1 
                    || 
                       (*__errno_location ()) 
                             == 
                                13
                                      ) {




   return -8;
  } else {



   return -1;
  }
 }


 handlep->sock_packet = 0;
 handlep->lo_ifindex = iface_get_id(sock_fd, "lo", handle->errbuf);





 handle->offset = 0;






 if (!is_any_device) {

  handlep->cooked = 0;

  if (handle->opt.rfmon) {






   err = enter_rfmon_mode(handle, sock_fd, device);
   if (err < 0) {

    close(sock_fd);
    return err;
   }
   if (err == 0) {




    close(sock_fd);
    return -6;
   }







   if (handlep->mondevice != 
                            ((void *)0)
                                )
    device = handlep->mondevice;
  }
  arptype = iface_get_arptype(sock_fd, device, handle->errbuf);
  if (arptype < 0) {
   close(sock_fd);
   return arptype;
  }
  map_arphrd_to_dlt(handle, sock_fd, arptype, device, 1);
  if (handle->linktype == -1 ||
      handle->linktype == 113 ||
      handle->linktype == 144 ||
      handle->linktype == 177 ||
      handle->linktype == 253 ||
      (handle->linktype == 1 &&
       (strncmp("isdn", device, 4) == 0 ||
        strncmp("isdY", device, 4) == 0))) {
   if (close(sock_fd) == -1) {
    pcap_fmt_errmsg_for_errno(handle->errbuf,
        256, 
                         (*__errno_location ())
                              , "close");
    return -1;
   }
   sock_fd = socket(
                   17
                            , 
                              SOCK_DGRAM
                                        , protocol);
   if (sock_fd == -1) {
    pcap_fmt_errmsg_for_errno(handle->errbuf,
        256, 
                         (*__errno_location ())
                              , "socket");
    if (
       (*__errno_location ()) 
             == 
                1 
                      || 
                         (*__errno_location ()) 
                               == 
                                  13
                                        ) {




     return -8;
    } else {



     return -1;
    }
   }
   handlep->cooked = 1;






   if (handle->dlt_list != 
                          ((void *)0)
                              ) {
    free(handle->dlt_list);
    handle->dlt_list = 
                      ((void *)0)
                          ;
    handle->dlt_count = 0;
   }

   if (handle->linktype == -1) {






    snprintf(handle->errbuf, 256,
     "arptype %d not "
     "supported by libpcap - "
     "falling back to cooked "
     "socket",
     arptype);
   }






   if (handle->linktype != 144 &&
       handle->linktype != 177 &&
       handle->linktype != 253)
    handle->linktype = 113;
  }

  handlep->ifindex = iface_get_id(sock_fd, device,
      handle->errbuf);
  if (handlep->ifindex == -1) {
   close(sock_fd);
   return -1;
  }

  if ((err = iface_bind(sock_fd, handlep->ifindex,
      handle->errbuf, protocol)) != 1) {
       close(sock_fd);
   if (err < 0)
    return err;
   else
    return 0;
  }
 } else {



  if (handle->opt.rfmon) {



   close(sock_fd);
   return -6;
  }




  handlep->cooked = 1;
  handle->linktype = 113;
  handlep->ifindex = -1;
 }
 if (!is_any_device && handle->opt.promisc) {
  memset(&mr, 0, sizeof(mr));
  mr.mr_ifindex = handlep->ifindex;
  mr.mr_type = 
                 1
                                  ;
  if (setsockopt(sock_fd, 
                         263
                                   , 
                                     1
                                                          ,
      &mr, sizeof(mr)) == -1) {
   pcap_fmt_errmsg_for_errno(handle->errbuf,
       256, 
                        (*__errno_location ())
                             , "setsockopt");
   close(sock_fd);
   return -1;
  }
 }




 val = 1;
 if (setsockopt(sock_fd, 
                        263
                                  , 
                                    8
                                                  , &val,
         sizeof(val)) == -1 && 
                              (*__errno_location ()) 
                                    != 
                                       92
                                                  ) {
  pcap_fmt_errmsg_for_errno(handle->errbuf, 256,
      
     (*__errno_location ())
          , "setsockopt");
  close(sock_fd);
  return -1;
 }
 handle->offset += 4;
 if (handlep->cooked) {
  if (handle->snapshot < 16 + 1)
   handle->snapshot = 16 + 1;
 }
 handle->bufsize = handle->snapshot;





 switch (handle->linktype) {

 case 1:




  handlep->vlan_offset = 2 * 
                            6
                                    ;
  break;

 case 113:




  handlep->vlan_offset = 16 - 2;
  break;

 default:
  handlep->vlan_offset = -1;
  break;
 }


 if (handle->opt.tstamp_precision == 1) {
  int nsec_tstamps = 1;

  if (setsockopt(sock_fd, 
                         1
                                   , 
                                     35
                                                   , &nsec_tstamps, sizeof(nsec_tstamps)) < 0) {
   snprintf(handle->errbuf, 256, "setsockopt: unable to set SO_TIMESTAMPNS");
   close(sock_fd);
   return -1;
  }
 }





 handle->fd = sock_fd;







 if (getsockopt(sock_fd, 
                        1
                                  , 
                                    48
                                                     ,
     &bpf_extensions, &len) == 0) {
  if (bpf_extensions >= 
                       48
                                              ) {



   handle->bpf_codegen_flags |= 0x00000001;
  }
 }


 return 1;






}
static int
activate_mmap(pcap_t *handle, int *status)
{
 struct pcap_linux *handlep = handle->priv;
 int ret={0};





 handlep->oneshot_buffer = malloc(handle->snapshot);
 if (handlep->oneshot_buffer == 
                               ((void *)0)
                                   ) {
  pcap_fmt_errmsg_for_errno(handle->errbuf, 256,
      
     (*__errno_location ())
          , "can't allocate oneshot buffer");
  *status = -1;
  return -1;
 }

 if (handle->opt.buffer_size == 0) {

  handle->opt.buffer_size = 2*1024*1024;
 }
 ret = prepare_tpacket_socket(handle);
 if (ret == -1) {
  free(handlep->oneshot_buffer);
  *status = -1;
  return ret;
 }
 ret = create_ring(handle, status);
 if (ret == 0) {




  free(handlep->oneshot_buffer);
  return 0;
 }
 if (ret == -1) {




  free(handlep->oneshot_buffer);
  return -1;
 }
 switch (handlep->tp_version) {
 case TPACKET_V1:
  handle->read_op = pcap_read_linux_mmap_v1;
  break;
 case 99:
  handle->read_op = pcap_read_linux_mmap_v1_64;
  break;

 case TPACKET_V2:
  handle->read_op = pcap_read_linux_mmap_v2;
  break;


 case TPACKET_V3:
  handle->read_op = pcap_read_linux_mmap_v3;
  break;

 }
 handle->cleanup_op = pcap_cleanup_linux_mmap;
 handle->setfilter_op = pcap_setfilter_linux_mmap;
 handle->setnonblock_op = pcap_setnonblock_mmap;
 handle->getnonblock_op = pcap_getnonblock_mmap;
 handle->oneshot_callback = pcap_oneshot_mmap;
 handle->selectable_fd = handle->fd;
 return 1;
}
static int
init_tpacket(pcap_t *handle, int version, const char *version_str)
{
 struct pcap_linux *handlep = handle->priv;
 int val = version;
 socklen_t len = sizeof(val);





 if (getsockopt(handle->fd, 
                           263
                                     , 
                                       11
                                                    , &val, &len) < 0) {
  if (
     (*__errno_location ()) 
           == 
              92 
                          || 
                             (*__errno_location ()) 
                                   == 
                                      22
                                            )
   return 1;


  pcap_fmt_errmsg_for_errno(handle->errbuf, 256,
      
     (*__errno_location ())
          , "can't get %s header len on packet socket",
      version_str);
  return -1;
 }
 handlep->tp_hdrlen = val;

 val = version;
 if (setsockopt(handle->fd, 
                           263
                                     , 
                                       10
                                                     , &val,
      sizeof(val)) < 0) {
  pcap_fmt_errmsg_for_errno(handle->errbuf, 256,
      
     (*__errno_location ())
          , "can't activate %s on packet socket", version_str);
  return -1;
 }
 handlep->tp_version = version;


 val = 4;
 if (setsockopt(handle->fd, 
                           263
                                     , 
                                       12
                                                     , &val,
      sizeof(val)) < 0) {
  pcap_fmt_errmsg_for_errno(handle->errbuf, 256,
      
     (*__errno_location ())
          , "can't set up reserve on packet socket");
  return -1;
 }

 return 0;
}
static int
prepare_tpacket_socket(pcap_t *handle)
{
 struct pcap_linux *handlep = handle->priv;

 int ret={0};
 if (!handle->opt.immediate) {
  ret = init_tpacket(handle, TPACKET_V3, "TPACKET_V3");
  if (ret == 0) {



   return 1;
  }
  if (ret == -1) {




   return -1;
  }
 }






 ret = init_tpacket(handle, TPACKET_V2, "TPACKET_V2");
 if (ret == 0) {



  return 1;
 }
 if (ret == -1) {




  return -1;
 }





 handlep->tp_version = TPACKET_V1;
 handlep->tp_hdrlen = sizeof(struct tpacket_hdr);
 if (sizeof(long) == 4) {



  struct utsname utsname={0};

  if (uname(&utsname) == -1) {



   pcap_fmt_errmsg_for_errno(handle->errbuf,
       256, 
                        (*__errno_location ())
                             , "uname failed");
   return -1;
  }
  if (strcmp(utsname.machine, "x86_64") == 0) {
   handlep->tp_version = 99;
   handlep->tp_hdrlen = sizeof(struct tpacket_hdr_64);
  }
 }


 return 1;
}
static int
create_ring(pcap_t *handle, int *status)
{
 struct pcap_linux *handlep = handle->priv;
 unsigned i, j, frames_per_block={0};






 struct tpacket_req3 req={0};



 socklen_t len={0};
 unsigned int sk_type, tp_reserve, maclen, tp_hdrlen, netoff, macoff={0};
 unsigned int frame_size={0};




 *status = 0;

 switch (handlep->tp_version) {

 case TPACKET_V1:
 case 99:

 case TPACKET_V2:
  frame_size = handle->snapshot;
  if (handle->linktype == 1) {
   unsigned int max_frame_len={0};
   int mtu={0};
   int offload={0};

   mtu = iface_get_mtu(handle->fd, handle->opt.device,
       handle->errbuf);
   if (mtu == -1) {
    *status = -1;
    return -1;
   }
   offload = iface_get_offload(handle);
   if (offload == -1) {
    *status = -1;
    return -1;
   }
   if (offload)
    max_frame_len = ((mtu)>(65535)?(mtu):(65535));
   else
    max_frame_len = mtu;
   max_frame_len += 18;

   if (frame_size > max_frame_len)
    frame_size = max_frame_len;
  }




  len = sizeof(sk_type);
  if (getsockopt(handle->fd, 
                            1
                                      , 
                                        3
                                               , &sk_type,
      &len) < 0) {
   pcap_fmt_errmsg_for_errno(handle->errbuf,
       256, 
                        (*__errno_location ())
                             , "getsockopt");
   *status = -1;
   return -1;
  }

  len = sizeof(tp_reserve);
  if (getsockopt(handle->fd, 
                            263
                                      , 
                                        12
                                                      ,
      &tp_reserve, &len) < 0) {
   if (
      (*__errno_location ()) 
            != 
               92
                          ) {





    pcap_fmt_errmsg_for_errno(handle->errbuf,
        256, 
                         (*__errno_location ())
                              , "getsockopt");
    *status = -1;
    return -1;
   }
   tp_reserve = 0;
  }



  maclen = (sk_type == 
                      SOCK_DGRAM
                                ) ? 0 : 256;
  tp_hdrlen = 
             (((
             handlep->tp_hdrlen
             )+16 -1)&~(16 -1)) 
                                               + sizeof(struct sockaddr_ll) ;
  netoff = 
          (((
          tp_hdrlen + (maclen < 16 ? 16 : maclen)
          )+16 -1)&~(16 -1)) 
                                                                 + tp_reserve;
  macoff = netoff - maclen;
  req.tp_frame_size = 
                     (((
                     macoff + frame_size
                     )+16 -1)&~(16 -1))
                                                       ;







  req.tp_frame_nr = (handle->opt.buffer_size + req.tp_frame_size - 1)/req.tp_frame_size;
  break;


 case TPACKET_V3:






  req.tp_frame_size = 262144;







  req.tp_frame_nr = (handle->opt.buffer_size + req.tp_frame_size - 1)/req.tp_frame_size;
  break;

 default:
  snprintf(handle->errbuf, 256,
      "Internal error: unknown TPACKET_ value %u",
      handlep->tp_version);
  *status = -1;
  return -1;
 }





 req.tp_block_size = getpagesize();
 while (req.tp_block_size < req.tp_frame_size)
  req.tp_block_size <<= 1;

 frames_per_block = req.tp_block_size/req.tp_frame_size;
 if (handle->opt.tstamp_type == 3 ||
     handle->opt.tstamp_type == 4) {
  struct hwtstamp_config hwconfig={0};
  struct ifreq ifr={0};
  int timesource={0};





  memset(&hwconfig, 0, sizeof(hwconfig));
  hwconfig.tx_type = HWTSTAMP_TX_ON;
  hwconfig.rx_filter = HWTSTAMP_FILTER_ALL;

  memset(&ifr, 0, sizeof(ifr));
  (strncpy((ifr.
 ifr_ifrn.ifrn_name
 ), (handle->opt.device), (sizeof(ifr.
 ifr_ifrn.ifrn_name
 ))), ((sizeof(ifr.
 ifr_ifrn.ifrn_name
 )) <= 0 ? 0 : ((ifr.
 ifr_ifrn.ifrn_name
 )[(sizeof(ifr.
 ifr_ifrn.ifrn_name
 )) - 1] = '\0')), (void) strlen((handle->opt.device)));
  ifr.
     ifr_ifru.ifru_data 
              = (void *)&hwconfig;

  if (ioctl(handle->fd, 
                       0x89b0
                                    , &ifr) < 0) {
   switch (
          (*__errno_location ())
               ) {

   case 
       1
            :







    *status = -8;
    return -1;

   case 
       95
                 :
   case 
       34
             :
    *status = 3;
    break;

   default:
    pcap_fmt_errmsg_for_errno(handle->errbuf,
        256, 
                         (*__errno_location ())
                              ,
        "SIOCSHWTSTAMP failed");
    *status = -1;
    return -1;
   }
  } else {





   if (handle->opt.tstamp_type == 3) {




    timesource = SOF_TIMESTAMPING_SYS_HARDWARE;
   } else {





    timesource = SOF_TIMESTAMPING_RAW_HARDWARE;
   }
   if (setsockopt(handle->fd, 
                             263
                                       , 
                                         17
                                                         ,
    (void *)&timesource, sizeof(timesource))) {
    pcap_fmt_errmsg_for_errno(handle->errbuf,
        256, 
                         (*__errno_location ())
                              ,
        "can't set PACKET_TIMESTAMP");
    *status = -1;
    return -1;
   }
  }
 }



retry:
 req.tp_block_nr = req.tp_frame_nr / frames_per_block;


 req.tp_frame_nr = req.tp_block_nr * frames_per_block;



 req.tp_retire_blk_tov = (handlep->timeout>=0)?handlep->timeout:0;

 req.tp_sizeof_priv = 0;

 req.tp_feature_req_word = 0;


 if (setsockopt(handle->fd, 
                           263
                                     , 
                                       5
                                                     ,
     (void *) &req, sizeof(req))) {
  if ((
      (*__errno_location ()) 
            == 
               12
                     ) && (req.tp_block_nr > 1)) {
   if (req.tp_frame_nr < 20)
    req.tp_frame_nr -= 1;
   else
    req.tp_frame_nr -= req.tp_frame_nr/20;
   goto retry;
  }
  if (
     (*__errno_location ()) 
           == 
              92
                         ) {



   return 0;
  }
  pcap_fmt_errmsg_for_errno(handle->errbuf, 256,
      
     (*__errno_location ())
          , "can't create rx ring on packet socket");
  *status = -1;
  return -1;
 }


 handlep->mmapbuflen = req.tp_block_nr * req.tp_block_size;
 handlep->mmapbuf = mmap(0, handlep->mmapbuflen,
     
    0x1
             |
              0x2
                        , 
                          0x01
                                    , handle->fd, 0);
 if (handlep->mmapbuf == 
                        ((void *) -1)
                                  ) {
  pcap_fmt_errmsg_for_errno(handle->errbuf, 256,
      
     (*__errno_location ())
          , "can't mmap rx ring");


  destroy_ring(handle);
  *status = -1;
  return -1;
 }


 handle->cc = req.tp_frame_nr;
 handle->buffer = malloc(handle->cc * sizeof(union thdr *));
 if (!handle->buffer) {
  pcap_fmt_errmsg_for_errno(handle->errbuf, 256,
      
     (*__errno_location ())
          , "can't allocate ring of frame headers");

  destroy_ring(handle);
  *status = -1;
  return -1;
 }


 handle->offset = 0;
 for (i=0; i<req.tp_block_nr; ++i) {
  void *base = &handlep->mmapbuf[i*req.tp_block_size];
  for (j=0; j<frames_per_block; ++j, ++handle->offset) {
   (((union thdr **)handle->buffer)[(handle->offset)]) = base;
   base += req.tp_frame_size;
  }
 }

 handle->bufsize = req.tp_frame_size;
 handle->offset = 0;
 return 1;
}


static void
destroy_ring(pcap_t *handle)
{
 struct pcap_linux *handlep = handle->priv;


 struct tpacket_req req={0};
 memset(&req, 0, sizeof(req));

 (void)setsockopt(handle->fd, 
                             263
                                       , 
                                         5
                                                       ,
    (void *) &req, sizeof(req));


 if (handlep->mmapbuf) {

  (void)munmap(handlep->mmapbuf, handlep->mmapbuflen);
  handlep->mmapbuf = 
                    ((void *)0)
                        ;
 }
}
static void
pcap_oneshot_mmap(u_char *user, const struct pcap_pkthdr *h,
    const u_char *bytes)
{
 struct oneshot_userdata *sp = (struct oneshot_userdata *)user;
 pcap_t *handle = sp->pd;
 struct pcap_linux *handlep = handle->priv;

 *sp->hdr = *h;
 memcpy(handlep->oneshot_buffer, bytes, h->caplen);
 *sp->pkt = handlep->oneshot_buffer;
}

static void
pcap_cleanup_linux_mmap( pcap_t *handle )
{
 struct pcap_linux *handlep = handle->priv;

 destroy_ring(handle);
 if (handlep->oneshot_buffer != 
                               ((void *)0)
                                   ) {
  free(handlep->oneshot_buffer);
  handlep->oneshot_buffer = 
                           ((void *)0)
                               ;
 }
 pcap_cleanup_linux(handle);
}


static int
pcap_getnonblock_mmap(pcap_t *handle)
{
 struct pcap_linux *handlep = handle->priv;


 return (handlep->timeout<0);
}

static int
pcap_setnonblock_mmap(pcap_t *handle, int nonblock)
{
 struct pcap_linux *handlep = handle->priv;





 if (pcap_setnonblock_fd(handle, nonblock) == -1)
  return -1;





 if (nonblock) {
  if (handlep->timeout >= 0) {




   handlep->timeout = ~handlep->timeout;
  }
 } else {
  if (handlep->timeout < 0) {
   handlep->timeout = ~handlep->timeout;
  }
 }

 set_poll_timeout(handlep);
 return 0;
}




static inline int
pcap_get_ring_frame_status(pcap_t *handle, int offset)
{
 struct pcap_linux *handlep = handle->priv;
 union thdr h={0};

 h.raw = (((union thdr **)handle->buffer)[(offset)]);
 switch (handlep->tp_version) {
 case TPACKET_V1:
  return (h.h1->tp_status);
  break;
 case 99:
  return (h.h1_64->tp_status);
  break;

 case TPACKET_V2:
  return (h.h2->tp_status);
  break;


 case TPACKET_V3:
  return (h.h3->hdr.bh1.block_status);
  break;

 }

 return 0;
}
static int pcap_wait_for_frames_mmap(pcap_t *handle)
{
 struct pcap_linux *handlep = handle->priv;
 char c={0};
 struct pollfd pollinfo={0};
 int ret={0};

 pollinfo.fd = handle->fd;
 pollinfo.events = 
                  0x001
                        ;

 do {
  ret = poll(&pollinfo, 1, handlep->poll_timeout);
  if (ret < 0 && 
                (*__errno_location ()) 
                      != 
                         4
                              ) {
   pcap_fmt_errmsg_for_errno(handle->errbuf,
       256, 
                        (*__errno_location ())
                             ,
       "can't poll on packet socket");
   return -1;
  } else if (ret > 0 &&
   (pollinfo.revents & (
                       0x010
                              |0|
                                         0x008
                                                |
                                                 0x020
                                                         ))) {





   if (pollinfo.revents & (
                          0x010 
                                  | 0)) {
    snprintf(handle->errbuf,
     256,
     "Hangup on packet socket");
    return -1;
   }
   if (pollinfo.revents & 
                         0x008
                                ) {





    if (recv(handle->fd, &c, sizeof c,
     
    MSG_PEEK
            ) != -1)
     continue;
    if (
       (*__errno_location ()) 
             == 
                100
                        ) {
     snprintf(handle->errbuf,
      256,
      "The interface went down");
    } else {
     pcap_fmt_errmsg_for_errno(handle->errbuf,
         256, 
                          (*__errno_location ())
                               ,
         "Error condition on packet socket");
    }
    return -1;
   }
   if (pollinfo.revents & 
                         0x020
                                 ) {
    snprintf(handle->errbuf,
     256,
     "Invalid polling request on packet socket");
    return -1;
   }
  }

  if (handle->break_loop) {
   handle->break_loop = 0;
   return -2;
  }
 } while (ret < 0);
 return 0;
}


static int pcap_handle_packet_mmap(
  pcap_t *handle,
  pcap_handler callback,
  u_char *user,
  unsigned char *frame,
  unsigned int tp_len,
  unsigned int tp_mac,
  unsigned int tp_snaplen,
  unsigned int tp_sec,
  unsigned int tp_usec,
  int tp_vlan_tci_valid,
  __u16 tp_vlan_tci,
  __u16 tp_vlan_tpid)
{
 struct pcap_linux *handlep = handle->priv;
 unsigned char *bp={0};
 struct sockaddr_ll *sll={0};
 struct pcap_pkthdr pcaphdr={0};
 unsigned int snaplen = tp_snaplen;


 if (tp_mac + tp_snaplen > handle->bufsize) {
  snprintf(handle->errbuf, 256,
   "corrupted frame on kernel ring mac "
   "offset %u + caplen %u > frame len %d",
   tp_mac, tp_snaplen, handle->bufsize);
  return -1;
 }
 bp = frame + tp_mac;


 sll = (void *)frame + 
                      (((
                      handlep->tp_hdrlen
                      )+16 -1)&~(16 -1))
                                                       ;
 if (handlep->cooked) {
  struct sll_header *hdrp={0};
  bp -= 16;
  if (bp < (u_char *)frame +
       
      (((
      handlep->tp_hdrlen
      )+16 -1)&~(16 -1)) 
                                        +
       sizeof(struct sockaddr_ll)) {
   snprintf(handle->errbuf, 256,
    "cooked-mode frame doesn't have room for sll header");
   return -1;
  }




  hdrp = (struct sll_header *)bp;
  hdrp->sll_pkttype = map_packet_type_to_sll_type(
      sll->sll_pkttype);
  hdrp->sll_hatype = htons(sll->sll_hatype);
  hdrp->sll_halen = htons(sll->sll_halen);
  memcpy(hdrp->sll_addr, sll->sll_addr, 8);
  hdrp->sll_protocol = sll->sll_protocol;

  snaplen += sizeof(struct sll_header);
 }

 if (handlep->filter_in_userland && handle->fcode.bf_insns) {
  struct bpf_aux_data aux_data={0};

  aux_data.vlan_tag_present = tp_vlan_tci_valid;
  aux_data.vlan_tag = tp_vlan_tci & 0x0fff;

  if (bpf_filter_with_aux_data(handle->fcode.bf_insns,
          bp,
          tp_len,
          snaplen,
          &aux_data) == 0)
   return 0;
 }

 if (!linux_check_direction(handle, sll))
  return 0;


 pcaphdr.ts.tv_sec = tp_sec;
 pcaphdr.ts.tv_usec = tp_usec;
 pcaphdr.caplen = tp_snaplen;
 pcaphdr.len = tp_len;


 if (handlep->cooked) {

  pcaphdr.caplen += 16;
  pcaphdr.len += 16;
 }


 if (tp_vlan_tci_valid &&
  handlep->vlan_offset != -1 &&
  tp_snaplen >= (unsigned int) handlep->vlan_offset)
 {
  struct vlan_tag *tag={0};






  bp -= 4;
  memmove(bp, bp + 4, handlep->vlan_offset);




  tag = (struct vlan_tag *)(bp + handlep->vlan_offset);
  tag->vlan_tpid = htons(tp_vlan_tpid);
  tag->vlan_tci = htons(tp_vlan_tci);




  pcaphdr.caplen += 4;
  pcaphdr.len += 4;
 }
 if (pcaphdr.caplen > (bpf_u_int32)handle->snapshot)
  pcaphdr.caplen = handle->snapshot;


 callback(user, &pcaphdr, bp);

 return 1;
}

static int
pcap_read_linux_mmap_v1(pcap_t *handle, int max_packets, pcap_handler callback,
  u_char *user)
{
 struct pcap_linux *handlep = handle->priv;
 union thdr h={0};
 int pkts = 0;
 int ret={0};


 h.raw = (((union thdr **)handle->buffer)[(handle->offset)]);
 if (h.h1->tp_status == 
                       0
                                       ) {




  ret = pcap_wait_for_frames_mmap(handle);
  if (ret) {
   return ret;
  }
 }



 while ((pkts < max_packets) || ((max_packets) <= 0)) {




  h.raw = (((union thdr **)handle->buffer)[(handle->offset)]);
  if (h.h1->tp_status == 
                        0
                                        )
   break;

  ret = pcap_handle_packet_mmap(
    handle,
    callback,
    user,
    h.raw,
    h.h1->tp_len,
    h.h1->tp_mac,
    h.h1->tp_snaplen,
    h.h1->tp_sec,
    h.h1->tp_usec,
    0,
    0,
    0);
  if (ret == 1) {
   pkts++;
   handlep->packets_read++;
  } else if (ret < 0) {
   return ret;
  }







  h.h1->tp_status = 
                   0
                                   ;
  if (handlep->blocks_to_filter_in_userland > 0) {
   handlep->blocks_to_filter_in_userland--;
   if (handlep->blocks_to_filter_in_userland == 0) {




    handlep->filter_in_userland = 0;
   }
  }


  if (++handle->offset >= handle->cc)
   handle->offset = 0;


  if (handle->break_loop) {
   handle->break_loop = 0;
   return -2;
  }
 }
 return pkts;
}

static int
pcap_read_linux_mmap_v1_64(pcap_t *handle, int max_packets, pcap_handler callback,
  u_char *user)
{
 struct pcap_linux *handlep = handle->priv;
 union thdr h={0};
 int pkts = 0;
 int ret={0};


 h.raw = (((union thdr **)handle->buffer)[(handle->offset)]);
 if (h.h1_64->tp_status == 
                          0
                                          ) {




  ret = pcap_wait_for_frames_mmap(handle);
  if (ret) {
   return ret;
  }
 }



 while ((pkts < max_packets) || ((max_packets) <= 0)) {




  h.raw = (((union thdr **)handle->buffer)[(handle->offset)]);
  if (h.h1_64->tp_status == 
                           0
                                           )
   break;

  ret = pcap_handle_packet_mmap(
    handle,
    callback,
    user,
    h.raw,
    h.h1_64->tp_len,
    h.h1_64->tp_mac,
    h.h1_64->tp_snaplen,
    h.h1_64->tp_sec,
    h.h1_64->tp_usec,
    0,
    0,
    0);
  if (ret == 1) {
   pkts++;
   handlep->packets_read++;
  } else if (ret < 0) {
   return ret;
  }







  h.h1_64->tp_status = 
                      0
                                      ;
  if (handlep->blocks_to_filter_in_userland > 0) {
   handlep->blocks_to_filter_in_userland--;
   if (handlep->blocks_to_filter_in_userland == 0) {




    handlep->filter_in_userland = 0;
   }
  }


  if (++handle->offset >= handle->cc)
   handle->offset = 0;


  if (handle->break_loop) {
   handle->break_loop = 0;
   return -2;
  }
 }
 return pkts;
}


static int
pcap_read_linux_mmap_v2(pcap_t *handle, int max_packets, pcap_handler callback,
  u_char *user)
{
 struct pcap_linux *handlep = handle->priv;
 union thdr h={0};
 int pkts = 0;
 int ret={0};


 h.raw = (((union thdr **)handle->buffer)[(handle->offset)]);
 if (h.h2->tp_status == 
                       0
                                       ) {




  ret = pcap_wait_for_frames_mmap(handle);
  if (ret) {
   return ret;
  }
 }



 while ((pkts < max_packets) || ((max_packets) <= 0)) {




  h.raw = (((union thdr **)handle->buffer)[(handle->offset)]);
  if (h.h2->tp_status == 
                        0
                                        )
   break;

  ret = pcap_handle_packet_mmap(
    handle,
    callback,
    user,
    h.raw,
    h.h2->tp_len,
    h.h2->tp_mac,
    h.h2->tp_snaplen,
    h.h2->tp_sec,
    handle->opt.tstamp_precision == 1 ? h.h2->tp_nsec : h.h2->tp_nsec / 1000,
    ((h.h2)->tp_vlan_tci != 0 || ((h.h2)->tp_status & 
   (1 << 4)
   )),
    h.h2->tp_vlan_tci,
    (((h.h2)->tp_vlan_tpid || ((h.h2)->tp_status & 
   (1 << 6)
   )) ? (h.h2)->tp_vlan_tpid : 
   0x8100
   ));
  if (ret == 1) {
   pkts++;
   handlep->packets_read++;
  } else if (ret < 0) {
   return ret;
  }







  h.h2->tp_status = 
                   0
                                   ;
  if (handlep->blocks_to_filter_in_userland > 0) {
   handlep->blocks_to_filter_in_userland--;
   if (handlep->blocks_to_filter_in_userland == 0) {




    handlep->filter_in_userland = 0;
   }
  }


  if (++handle->offset >= handle->cc)
   handle->offset = 0;


  if (handle->break_loop) {
   handle->break_loop = 0;
   return -2;
  }
 }
 return pkts;
}



static int
pcap_read_linux_mmap_v3(pcap_t *handle, int max_packets, pcap_handler callback,
  u_char *user)
{
 struct pcap_linux *handlep = handle->priv;
 union thdr h={0};
 int pkts = 0;
 int ret={0};

again:
 if (handlep->current_packet == 
                               ((void *)0)
                                   ) {

  h.raw = (((union thdr **)handle->buffer)[(handle->offset)]);
  if (h.h3->hdr.bh1.block_status == 
                                   0
                                                   ) {




   ret = pcap_wait_for_frames_mmap(handle);
   if (ret) {
    return ret;
   }
  }
 }
 h.raw = (((union thdr **)handle->buffer)[(handle->offset)]);
 if (h.h3->hdr.bh1.block_status == 
                                  0
                                                  ) {
  if (pkts == 0 && handlep->timeout == 0) {

   goto again;
  }
  return pkts;
 }



 while ((pkts < max_packets) || ((max_packets) <= 0)) {
  int packets_to_read={0};

  if (handlep->current_packet == 
                                ((void *)0)
                                    ) {
   h.raw = (((union thdr **)handle->buffer)[(handle->offset)]);
   if (h.h3->hdr.bh1.block_status == 
                                    0
                                                    )
    break;

   handlep->current_packet = h.raw + h.h3->hdr.bh1.offset_to_first_pkt;
   handlep->packets_left = h.h3->hdr.bh1.num_pkts;
  }
  packets_to_read = handlep->packets_left;

  if (!((max_packets) <= 0) &&
      packets_to_read > (max_packets - pkts)) {






   packets_to_read = max_packets - pkts;
  }

  while (packets_to_read-- && !handle->break_loop) {
   struct tpacket3_hdr* tp3_hdr = (struct tpacket3_hdr*) handlep->current_packet;
   ret = pcap_handle_packet_mmap(
     handle,
     callback,
     user,
     handlep->current_packet,
     tp3_hdr->tp_len,
     tp3_hdr->tp_mac,
     tp3_hdr->tp_snaplen,
     tp3_hdr->tp_sec,
     handle->opt.tstamp_precision == 1 ? tp3_hdr->tp_nsec : tp3_hdr->tp_nsec / 1000,
     ((&tp3_hdr->hv1)->tp_vlan_tci != 0 || ((tp3_hdr)->tp_status & 
    (1 << 4)
    )),
     tp3_hdr->hv1.tp_vlan_tci,
     (((&tp3_hdr->hv1)->tp_vlan_tpid || ((tp3_hdr)->tp_status & 
    (1 << 6)
    )) ? (&tp3_hdr->hv1)->tp_vlan_tpid : 
    0x8100
    ));
   if (ret == 1) {
    pkts++;
    handlep->packets_read++;
   } else if (ret < 0) {
    handlep->current_packet = 
                             ((void *)0)
                                 ;
    return ret;
   }
   handlep->current_packet += tp3_hdr->tp_next_offset;
   handlep->packets_left--;
  }

  if (handlep->packets_left <= 0) {







   h.h3->hdr.bh1.block_status = 
                               0
                                               ;
   if (handlep->blocks_to_filter_in_userland > 0) {
    handlep->blocks_to_filter_in_userland--;
    if (handlep->blocks_to_filter_in_userland == 0) {




     handlep->filter_in_userland = 0;
    }
   }


   if (++handle->offset >= handle->cc)
    handle->offset = 0;

   handlep->current_packet = 
                            ((void *)0)
                                ;
  }


  if (handle->break_loop) {
   handle->break_loop = 0;
   return -2;
  }
 }
 if (pkts == 0 && handlep->timeout == 0) {

  goto again;
 }
 return pkts;
}


static int
pcap_setfilter_linux_mmap(pcap_t *handle, struct bpf_program *filter)
{
 struct pcap_linux *handlep = handle->priv;
 int n, offset={0};
 int ret={0};







 ret = pcap_setfilter_linux_common(handle, filter, 1);
 if (ret < 0)
  return ret;





 if (handlep->filter_in_userland)
  return ret;
 offset = handle->offset;
 if (--offset < 0)
  offset = handle->cc - 1;
 for (n=0; n < handle->cc; ++n) {
  if (--offset < 0)
   offset = handle->cc - 1;
  if (pcap_get_ring_frame_status(handle, offset) != 
                                                   0
                                                                   )
   break;
 }
 if (n != 0)
  n--;
 handlep->blocks_to_filter_in_userland = handle->cc - n;
 handlep->filter_in_userland = 1;
 return ret;
}
static int
iface_get_id(int fd, const char *device, char *ebuf)
{
 struct ifreq ifr={0};

 memset(&ifr, 0, sizeof(ifr));
 (strncpy((ifr.
ifr_ifrn.ifrn_name
), (device), (sizeof(ifr.
ifr_ifrn.ifrn_name
))), ((sizeof(ifr.
ifr_ifrn.ifrn_name
)) <= 0 ? 0 : ((ifr.
ifr_ifrn.ifrn_name
)[(sizeof(ifr.
ifr_ifrn.ifrn_name
)) - 1] = '\0')), (void) strlen((device)));

 if (ioctl(fd, 
              0x8933
                          , &ifr) == -1) {
  pcap_fmt_errmsg_for_errno(ebuf, 256,
      
     (*__errno_location ())
          , "SIOCGIFINDEX");
  return -1;
 }

 return ifr.
           ifr_ifru.ifru_ivalue
                      ;
}






static int
iface_bind(int fd, int ifindex, char *ebuf, int protocol)
{
 struct sockaddr_ll sll={0};
 int err={0};
 socklen_t errlen = sizeof(err);

 memset(&sll, 0, sizeof(sll));
 sll.sll_family = 
                  17
                           ;
 sll.sll_ifindex = ifindex;
 sll.sll_protocol = protocol;

 if (bind(fd, (struct sockaddr *) &sll, sizeof(sll)) == -1) {
  if (
     (*__errno_location ()) 
           == 
              100
                      ) {







   return -9;
  } else {
   pcap_fmt_errmsg_for_errno(ebuf, 256,
       
      (*__errno_location ())
           , "bind");
   return -1;
  }
 }



 if (getsockopt(fd, 
                   1
                             , 
                               4
                                       , &err, &errlen) == -1) {
  pcap_fmt_errmsg_for_errno(ebuf, 256,
      
     (*__errno_location ())
          , "getsockopt");
  return 0;
 }

 if (err == 
           100
                   ) {







  return -9;
 } else if (err > 0) {
  pcap_fmt_errmsg_for_errno(ebuf, 256,
      err, "bind");
  return 0;
 }

 return 1;
}







static int
has_wext(int sock_fd, const char *device, char *ebuf)
{
 struct iwreq ireq={0};

 if (is_bonding_device(sock_fd, device))
  return 0;

 (strncpy((ireq.ifr_ifrn.ifrn_name), (device), (sizeof ireq.ifr_ifrn.ifrn_name)), ((sizeof ireq.ifr_ifrn.ifrn_name) <= 0 ? 0 : ((ireq.ifr_ifrn.ifrn_name)[(sizeof ireq.ifr_ifrn.ifrn_name) - 1] = '\0')), (void) strlen((device)))
                                    ;
 if (ioctl(sock_fd, 
                   0x8B01
                              , &ireq) >= 0)
  return 1;
 pcap_fmt_errmsg_for_errno(ebuf, 256, 
                                                  (*__errno_location ())
                                                       ,
     "%s: SIOCGIWNAME", device);
 if (
    (*__errno_location ()) 
          == 
             19
                   )
  return -5;
 return 0;
}
typedef enum {
 MONITOR_WEXT,
 MONITOR_HOSTAP,
 MONITOR_PRISM,
 MONITOR_PRISM54,
 MONITOR_ACX100,
 MONITOR_RT2500,
 MONITOR_RT2570,
 MONITOR_RT73,
 MONITOR_RTL8XXX
} monitor_type;
static int
enter_rfmon_mode_wext(pcap_t *handle, int sock_fd, const char *device)
{
 struct pcap_linux *handlep = handle->priv;
 int err={0};
 struct iwreq ireq={0};
 struct iw_priv_args *priv={0};
 monitor_type montype={0};
 int i={0};
 __u32 cmd={0};
 struct ifreq ifr={0};
 int oldflags={0};
 int args[2]={0};
 int channel={0};




 err = has_wext(sock_fd, device, handle->errbuf);
 if (err <= 0)
  return err;




 montype = MONITOR_WEXT;
 cmd = 0;
 memset(&ireq, 0, sizeof ireq);
 (strncpy((ireq.ifr_ifrn.ifrn_name), (device), (sizeof ireq.ifr_ifrn.ifrn_name)), ((sizeof ireq.ifr_ifrn.ifrn_name) <= 0 ? 0 : ((ireq.ifr_ifrn.ifrn_name)[(sizeof ireq.ifr_ifrn.ifrn_name) - 1] = '\0')), (void) strlen((device)))
                                    ;
 ireq.u.data.pointer = (void *)args;
 ireq.u.data.length = 0;
 ireq.u.data.flags = 0;
 if (ioctl(sock_fd, 
                   0x8B0D
                              , &ireq) != -1) {
  snprintf(handle->errbuf, 256,
      "%s: SIOCGIWPRIV with a zero-length buffer didn't fail!",
      device);
  return -1;
 }
 if (
    (*__errno_location ()) 
          != 
             95
                       ) {



  if (
     (*__errno_location ()) 
           != 
              7
                   ) {



   pcap_fmt_errmsg_for_errno(handle->errbuf,
       256, 
                        (*__errno_location ())
                             , "%s: SIOCGIWPRIV", device);
   return -1;
  }




  priv = malloc(ireq.u.data.length * sizeof (struct iw_priv_args));
  if (priv == 
             ((void *)0)
                 ) {
   pcap_fmt_errmsg_for_errno(handle->errbuf,
       256, 
                        (*__errno_location ())
                             , "malloc");
   return -1;
  }
  ireq.u.data.pointer = (void *)priv;
  if (ioctl(sock_fd, 
                    0x8B0D
                               , &ireq) == -1) {
   pcap_fmt_errmsg_for_errno(handle->errbuf,
       256, 
                        (*__errno_location ())
                             , "%s: SIOCGIWPRIV", device);
   free(priv);
   return -1;
  }





  for (i = 0; i < ireq.u.data.length; i++) {
   if (strcmp(priv[i].name, "monitor_type") == 0) {
    if ((priv[i].set_args & 
                           0x7000
                                            ) != 
                                                 0x4000
                                                                 )
     break;
    if (!(priv[i].set_args & 
                            0x0800
                                              ))
     break;
    if ((priv[i].set_args & 
                           0x07FF
                                            ) != 1)
     break;
    montype = MONITOR_HOSTAP;
    cmd = priv[i].cmd;
    break;
   }
   if (strcmp(priv[i].name, "set_prismhdr") == 0) {






    if ((priv[i].set_args & 
                           0x7000
                                            ) != 
                                                 0x4000
                                                                 )
     break;
    if (!(priv[i].set_args & 
                            0x0800
                                              ))
     break;
    if ((priv[i].set_args & 
                           0x07FF
                                            ) != 1)
     break;
    montype = MONITOR_PRISM54;
    cmd = priv[i].cmd;
    break;
   }
   if (strcmp(priv[i].name, "forceprismheader") == 0) {






    if ((priv[i].set_args & 
                           0x7000
                                            ) != 
                                                 0x4000
                                                                 )
     break;
    if (!(priv[i].set_args & 
                            0x0800
                                              ))
     break;
    if ((priv[i].set_args & 
                           0x07FF
                                            ) != 1)
     break;
    montype = MONITOR_RT2570;
    cmd = priv[i].cmd;
    break;
   }
   if (strcmp(priv[i].name, "forceprism") == 0) {







    if ((priv[i].set_args & 
                           0x7000
                                            ) != 
                                                 0x2000
                                                                  )
     break;
    if (priv[i].set_args & 
                          0x0800
                                            )
     break;
    montype = MONITOR_RT73;
    cmd = priv[i].cmd;
    break;
   }
   if (strcmp(priv[i].name, "prismhdr") == 0) {






    if ((priv[i].set_args & 
                           0x7000
                                            ) != 
                                                 0x4000
                                                                 )
     break;
    if (!(priv[i].set_args & 
                            0x0800
                                              ))
     break;
    if ((priv[i].set_args & 
                           0x07FF
                                            ) != 1)
     break;
    montype = MONITOR_RTL8XXX;
    cmd = priv[i].cmd;
    break;
   }
   if (strcmp(priv[i].name, "rfmontx") == 0) {
    if ((priv[i].set_args & 
                           0x7000
                                            ) != 
                                                 0x4000
                                                                 )
     break;
    if ((priv[i].set_args & 
                           0x07FF
                                            ) != 2)
     break;
    montype = MONITOR_RT2500;
    cmd = priv[i].cmd;
    break;
   }
   if (strcmp(priv[i].name, "monitor") == 0) {
    if ((priv[i].set_args & 
                           0x7000
                                            ) != 
                                                 0x4000
                                                                 )
     break;
    if (!(priv[i].set_args & 
                            0x0800
                                              ))
     break;
    switch (priv[i].set_args & 
                              0x07FF
                                               ) {

    case 1:
     montype = MONITOR_PRISM;
     cmd = priv[i].cmd;
     break;

    case 2:
     montype = MONITOR_ACX100;
     cmd = priv[i].cmd;
     break;

    default:
     break;
    }
   }
  }
  free(priv);
 }
 (strncpy((ireq.ifr_ifrn.ifrn_name), (device), (sizeof ireq.ifr_ifrn.ifrn_name)), ((sizeof ireq.ifr_ifrn.ifrn_name) <= 0 ? 0 : ((ireq.ifr_ifrn.ifrn_name)[(sizeof ireq.ifr_ifrn.ifrn_name) - 1] = '\0')), (void) strlen((device)))
                                    ;
 if (ioctl(sock_fd, 
                   0x8B07
                              , &ireq) == -1) {



  return -6;
 }




 if (ireq.u.mode == 
                   6
                                  ) {







  return 1;
 }
 if (!pcap_do_addexit(handle)) {




  return -6;
 }




 handlep->oldmode = ireq.u.mode;





 if (montype == MONITOR_PRISM) {







  memset(&ireq, 0, sizeof ireq);
  (strncpy((ireq.ifr_ifrn.ifrn_name), (device), (sizeof ireq.ifr_ifrn.ifrn_name)), ((sizeof ireq.ifr_ifrn.ifrn_name) <= 0 ? 0 : ((ireq.ifr_ifrn.ifrn_name)[(sizeof ireq.ifr_ifrn.ifrn_name) - 1] = '\0')), (void) strlen((device)))
                                     ;
  ireq.u.data.length = 1;
  args[0] = 3;
  memcpy(ireq.u.name, args, sizeof (int));
  if (ioctl(sock_fd, cmd, &ireq) != -1) {





   handlep->must_do_on_close |= 0x00000002;





   pcap_add_to_pcaps_to_close(handle);

   return 1;
  }




 }





 memset(&ifr, 0, sizeof(ifr));
 (strncpy((ifr.
ifr_ifrn.ifrn_name
), (device), (sizeof(ifr.
ifr_ifrn.ifrn_name
))), ((sizeof(ifr.
ifr_ifrn.ifrn_name
)) <= 0 ? 0 : ((ifr.
ifr_ifrn.ifrn_name
)[(sizeof(ifr.
ifr_ifrn.ifrn_name
)) - 1] = '\0')), (void) strlen((device)));
 if (ioctl(sock_fd, 
                   0x8913
                               , &ifr) == -1) {
  pcap_fmt_errmsg_for_errno(handle->errbuf, 256,
      
     (*__errno_location ())
          , "%s: Can't get flags", device);
  return -1;
 }
 oldflags = 0;
 if (ifr.
        ifr_ifru.ifru_flags 
                  & 
                    IFF_UP
                          ) {
  oldflags = ifr.
                ifr_ifru.ifru_flags
                         ;
  ifr.
     ifr_ifru.ifru_flags 
               &= ~
                   IFF_UP
                         ;
  if (ioctl(sock_fd, 
                    0x8914
                                , &ifr) == -1) {
   pcap_fmt_errmsg_for_errno(handle->errbuf,
       256, 
                        (*__errno_location ())
                             , "%s: Can't set flags",
       device);
   return -1;
  }
 }




 (strncpy((ireq.ifr_ifrn.ifrn_name), (device), (sizeof ireq.ifr_ifrn.ifrn_name)), ((sizeof ireq.ifr_ifrn.ifrn_name) <= 0 ? 0 : ((ireq.ifr_ifrn.ifrn_name)[(sizeof ireq.ifr_ifrn.ifrn_name) - 1] = '\0')), (void) strlen((device)))
                                    ;
 ireq.u.mode = 
              6
                             ;
 if (ioctl(sock_fd, 
                   0x8B06
                              , &ireq) == -1) {




  ifr.
     ifr_ifru.ifru_flags 
               = oldflags;
  if (ioctl(sock_fd, 
                    0x8914
                                , &ifr) == -1) {
   pcap_fmt_errmsg_for_errno(handle->errbuf,
       256, 
                        (*__errno_location ())
                             , "%s: Can't set flags",
       device);
   return -1;
  }
  return -6;
 }
 switch (montype) {

 case MONITOR_WEXT:



  break;

 case MONITOR_HOSTAP:



  memset(&ireq, 0, sizeof ireq);
  (strncpy((ireq.ifr_ifrn.ifrn_name), (device), (sizeof ireq.ifr_ifrn.ifrn_name)), ((sizeof ireq.ifr_ifrn.ifrn_name) <= 0 ? 0 : ((ireq.ifr_ifrn.ifrn_name)[(sizeof ireq.ifr_ifrn.ifrn_name) - 1] = '\0')), (void) strlen((device)))
                                     ;
  args[0] = 3;
  memcpy(ireq.u.name, args, sizeof (int));
  if (ioctl(sock_fd, cmd, &ireq) != -1)
   break;




  memset(&ireq, 0, sizeof ireq);
  (strncpy((ireq.ifr_ifrn.ifrn_name), (device), (sizeof ireq.ifr_ifrn.ifrn_name)), ((sizeof ireq.ifr_ifrn.ifrn_name) <= 0 ? 0 : ((ireq.ifr_ifrn.ifrn_name)[(sizeof ireq.ifr_ifrn.ifrn_name) - 1] = '\0')), (void) strlen((device)))
                                     ;
  args[0] = 2;
  memcpy(ireq.u.name, args, sizeof (int));
  if (ioctl(sock_fd, cmd, &ireq) != -1)
   break;




  memset(&ireq, 0, sizeof ireq);
  (strncpy((ireq.ifr_ifrn.ifrn_name), (device), (sizeof ireq.ifr_ifrn.ifrn_name)), ((sizeof ireq.ifr_ifrn.ifrn_name) <= 0 ? 0 : ((ireq.ifr_ifrn.ifrn_name)[(sizeof ireq.ifr_ifrn.ifrn_name) - 1] = '\0')), (void) strlen((device)))
                                     ;
  args[0] = 1;
  memcpy(ireq.u.name, args, sizeof (int));
  ioctl(sock_fd, cmd, &ireq);
  break;

 case MONITOR_PRISM:



  break;

 case MONITOR_PRISM54:



  memset(&ireq, 0, sizeof ireq);
  (strncpy((ireq.ifr_ifrn.ifrn_name), (device), (sizeof ireq.ifr_ifrn.ifrn_name)), ((sizeof ireq.ifr_ifrn.ifrn_name) <= 0 ? 0 : ((ireq.ifr_ifrn.ifrn_name)[(sizeof ireq.ifr_ifrn.ifrn_name) - 1] = '\0')), (void) strlen((device)))
                                     ;
  args[0] = 3;
  memcpy(ireq.u.name, args, sizeof (int));
  ioctl(sock_fd, cmd, &ireq);
  break;

 case MONITOR_ACX100:



  memset(&ireq, 0, sizeof ireq);
  (strncpy((ireq.ifr_ifrn.ifrn_name), (device), (sizeof ireq.ifr_ifrn.ifrn_name)), ((sizeof ireq.ifr_ifrn.ifrn_name) <= 0 ? 0 : ((ireq.ifr_ifrn.ifrn_name)[(sizeof ireq.ifr_ifrn.ifrn_name) - 1] = '\0')), (void) strlen((device)))
                                     ;
  if (ioctl(sock_fd, 
                    0x8B05
                               , &ireq) == -1) {
   pcap_fmt_errmsg_for_errno(handle->errbuf,
       256, 
                        (*__errno_location ())
                             , "%s: SIOCGIWFREQ", device);
   return -1;
  }
  channel = ireq.u.freq.m;





  memset(&ireq, 0, sizeof ireq);
  (strncpy((ireq.ifr_ifrn.ifrn_name), (device), (sizeof ireq.ifr_ifrn.ifrn_name)), ((sizeof ireq.ifr_ifrn.ifrn_name) <= 0 ? 0 : ((ireq.ifr_ifrn.ifrn_name)[(sizeof ireq.ifr_ifrn.ifrn_name) - 1] = '\0')), (void) strlen((device)))
                                     ;
  args[0] = 1;
  args[1] = channel;
  memcpy(ireq.u.name, args, 2*sizeof (int));
  ioctl(sock_fd, cmd, &ireq);
  break;

 case MONITOR_RT2500:




  memset(&ireq, 0, sizeof ireq);
  (strncpy((ireq.ifr_ifrn.ifrn_name), (device), (sizeof ireq.ifr_ifrn.ifrn_name)), ((sizeof ireq.ifr_ifrn.ifrn_name) <= 0 ? 0 : ((ireq.ifr_ifrn.ifrn_name)[(sizeof ireq.ifr_ifrn.ifrn_name) - 1] = '\0')), (void) strlen((device)))
                                     ;
  args[0] = 0;
  memcpy(ireq.u.name, args, sizeof (int));
  ioctl(sock_fd, cmd, &ireq);
  break;

 case MONITOR_RT2570:



  memset(&ireq, 0, sizeof ireq);
  (strncpy((ireq.ifr_ifrn.ifrn_name), (device), (sizeof ireq.ifr_ifrn.ifrn_name)), ((sizeof ireq.ifr_ifrn.ifrn_name) <= 0 ? 0 : ((ireq.ifr_ifrn.ifrn_name)[(sizeof ireq.ifr_ifrn.ifrn_name) - 1] = '\0')), (void) strlen((device)))
                                     ;
  args[0] = 1;
  memcpy(ireq.u.name, args, sizeof (int));
  ioctl(sock_fd, cmd, &ireq);
  break;

 case MONITOR_RT73:



  memset(&ireq, 0, sizeof ireq);
  (strncpy((ireq.ifr_ifrn.ifrn_name), (device), (sizeof ireq.ifr_ifrn.ifrn_name)), ((sizeof ireq.ifr_ifrn.ifrn_name) <= 0 ? 0 : ((ireq.ifr_ifrn.ifrn_name)[(sizeof ireq.ifr_ifrn.ifrn_name) - 1] = '\0')), (void) strlen((device)))
                                     ;
  ireq.u.data.length = 1;
  ireq.u.data.pointer = "1";
  ireq.u.data.flags = 0;
  ioctl(sock_fd, cmd, &ireq);
  break;

 case MONITOR_RTL8XXX:



  memset(&ireq, 0, sizeof ireq);
  (strncpy((ireq.ifr_ifrn.ifrn_name), (device), (sizeof ireq.ifr_ifrn.ifrn_name)), ((sizeof ireq.ifr_ifrn.ifrn_name) <= 0 ? 0 : ((ireq.ifr_ifrn.ifrn_name)[(sizeof ireq.ifr_ifrn.ifrn_name) - 1] = '\0')), (void) strlen((device)))
                                     ;
  args[0] = 1;
  memcpy(ireq.u.name, args, sizeof (int));
  ioctl(sock_fd, cmd, &ireq);
  break;
 }




 if (oldflags != 0) {
  ifr.
     ifr_ifru.ifru_flags 
               = oldflags;
  if (ioctl(sock_fd, 
                    0x8914
                                , &ifr) == -1) {
   pcap_fmt_errmsg_for_errno(handle->errbuf,
       256, 
                        (*__errno_location ())
                             , "%s: Can't set flags",
       device);





   if (ioctl(handle->fd, 
                        0x8B06
                                   , &ireq) == -1) {



    fprintf(
           stderr
                 ,
        "Can't restore interface wireless mode (SIOCSIWMODE failed: %s).\n"
        "Please adjust manually.\n",
        strerror(
                (*__errno_location ())
                     ));
   }
   return -1;
  }
 }





 handlep->must_do_on_close |= 0x00000002;




 pcap_add_to_pcaps_to_close(handle);

 return 1;
}





static int
enter_rfmon_mode(pcap_t *handle, int sock_fd, const char *device)
{

 int ret={0};
 ret = enter_rfmon_mode_wext(handle, sock_fd, device);
 if (ret < 0)
  return ret;
 if (ret == 1)
  return 1;







 return 0;
}





static const struct {
 int soft_timestamping_val;
 int pcap_tstamp_val;
} sof_ts_type_map[3] = {
 { SOF_TIMESTAMPING_SOFTWARE, 0 },
 { SOF_TIMESTAMPING_SYS_HARDWARE, 3 },
 { SOF_TIMESTAMPING_RAW_HARDWARE, 4 }
};





static void
iface_set_all_ts_types(pcap_t *handle)
{
 u_int i={0};

 handle->tstamp_type_count = (sizeof sof_ts_type_map / sizeof sof_ts_type_map[0]);
 handle->tstamp_type_list = malloc((sizeof sof_ts_type_map / sizeof sof_ts_type_map[0]) * sizeof(u_int));
 for (i = 0; i < (sizeof sof_ts_type_map / sizeof sof_ts_type_map[0]); i++)
  handle->tstamp_type_list[i] = sof_ts_type_map[i].pcap_tstamp_val;
}





static int
iface_ethtool_get_ts_info(const char *device, pcap_t *handle, char *ebuf)
{
 int fd={0};
 struct ifreq ifr={0};
 struct ethtool_ts_info info={0};
 int num_ts_types={0};
 u_int i, j={0};
 if (strcmp(device, "any") == 0) {
  handle->tstamp_type_list = 
                            ((void *)0)
                                ;
  return 0;
 }




 fd = socket(
            1
                   , 
                     SOCK_RAW
                             , 0);
 if (fd < 0) {
  pcap_fmt_errmsg_for_errno(ebuf, 256,
      
     (*__errno_location ())
          , "socket for SIOCETHTOOL(ETHTOOL_GET_TS_INFO)");
  return -1;
 }

 memset(&ifr, 0, sizeof(ifr));
 (strncpy((ifr.
ifr_ifrn.ifrn_name
), (device), (sizeof(ifr.
ifr_ifrn.ifrn_name
))), ((sizeof(ifr.
ifr_ifrn.ifrn_name
)) <= 0 ? 0 : ((ifr.
ifr_ifrn.ifrn_name
)[(sizeof(ifr.
ifr_ifrn.ifrn_name
)) - 1] = '\0')), (void) strlen((device)));
 memset(&info, 0, sizeof(info));
 info.cmd = 
           0x00000041
                              ;
 ifr.
    ifr_ifru.ifru_data 
             = (caddr_t)&info;
 if (ioctl(fd, 
              0x8946
                         , &ifr) == -1) {
  int save_errno = 
                  (*__errno_location ())
                       ;

  close(fd);
  switch (save_errno) {

  case 
      95
                :
  case 
      22
            :





   iface_set_all_ts_types(handle);
   return 0;

  case 
      19
            :






   handle->tstamp_type_list = 
                             ((void *)0)
                                 ;
   return 0;

  default:



   pcap_fmt_errmsg_for_errno(ebuf, 256,
       save_errno,
       "%s: SIOCETHTOOL(ETHTOOL_GET_TS_INFO) ioctl failed",
       device);
   return -1;
  }
 }
 close(fd);




 if (!(info.rx_filters & (1 << HWTSTAMP_FILTER_ALL))) {
  handle->tstamp_type_list = 
                            ((void *)0)
                                ;
  return 0;
 }

 num_ts_types = 0;
 for (i = 0; i < (sizeof sof_ts_type_map / sizeof sof_ts_type_map[0]); i++) {
  if (info.so_timestamping & sof_ts_type_map[i].soft_timestamping_val)
   num_ts_types++;
 }
 handle->tstamp_type_count = num_ts_types;
 if (num_ts_types != 0) {
  handle->tstamp_type_list = malloc(num_ts_types * sizeof(u_int));
  for (i = 0, j = 0; i < (sizeof sof_ts_type_map / sizeof sof_ts_type_map[0]); i++) {
   if (info.so_timestamping & sof_ts_type_map[i].soft_timestamping_val) {
    handle->tstamp_type_list[j] = sof_ts_type_map[i].pcap_tstamp_val;
    j++;
   }
  }
 } else
  handle->tstamp_type_list = 
                            ((void *)0)
                                ;

 return 0;
}
static int
iface_ethtool_flag_ioctl(pcap_t *handle, int cmd, const char *cmdname)
{
 struct ifreq ifr={0};
 struct ethtool_value eval={0};

 memset(&ifr, 0, sizeof(ifr));
 (strncpy((ifr.
ifr_ifrn.ifrn_name
), (handle->opt.device), (sizeof(ifr.
ifr_ifrn.ifrn_name
))), ((sizeof(ifr.
ifr_ifrn.ifrn_name
)) <= 0 ? 0 : ((ifr.
ifr_ifrn.ifrn_name
)[(sizeof(ifr.
ifr_ifrn.ifrn_name
)) - 1] = '\0')), (void) strlen((handle->opt.device)));
 eval.cmd = cmd;
 eval.data = 0;
 ifr.
    ifr_ifru.ifru_data 
             = (caddr_t)&eval;
 if (ioctl(handle->fd, 
                      0x8946
                                 , &ifr) == -1) {
  if (
     (*__errno_location ()) 
           == 
              95 
                         || 
                            (*__errno_location ()) 
                                  == 
                                     22
                                           ) {






   return 0;
  }
  pcap_fmt_errmsg_for_errno(handle->errbuf, 256,
      
     (*__errno_location ())
          , "%s: SIOCETHTOOL(%s) ioctl failed",
      handle->opt.device, cmdname);
  return -1;
 }
 return eval.data;
}

static int
iface_get_offload(pcap_t *handle)
{
 int ret={0};


 ret = iface_ethtool_flag_ioctl(handle, 
                                       0x0000001e
                                                   , "ETHTOOL_GTSO");
 if (ret == -1)
  return -1;
 if (ret)
  return 1;



 ret = iface_ethtool_flag_ioctl(handle, 
                                       0x00000021
                                                   , "ETHTOOL_GUFO");
 if (ret == -1)
  return -1;
 if (ret)
  return 1;
 ret = iface_ethtool_flag_ioctl(handle, 
                                       0x00000023
                                                   , "ETHTOOL_GGSO");
 if (ret == -1)
  return -1;
 if (ret)
  return 1;



 ret = iface_ethtool_flag_ioctl(handle, 
                                       0x00000025
                                                     , "ETHTOOL_GFLAGS");
 if (ret == -1)
  return -1;
 if (ret & ETH_FLAG_LRO)
  return 1;
 ret = iface_ethtool_flag_ioctl(handle, 
                                       0x0000002b
                                                   , "ETHTOOL_GGRO");
 if (ret == -1)
  return -1;
 if (ret)
  return 1;


 return 0;
}
static int
activate_old(pcap_t *handle)
{
 struct pcap_linux *handlep = handle->priv;
 int err={0};
 int arptype={0};
 struct ifreq ifr={0};
 const char *device = handle->opt.device;
 struct utsname utsname={0};
 int mtu={0};



 handle->fd = socket(
                    2
                           , 
                             SOCK_PACKET
                                        , htons(
                                                0x0003
                                                         ));
 if (handle->fd == -1) {
  err = 
       (*__errno_location ())
            ;
  pcap_fmt_errmsg_for_errno(handle->errbuf, 256,
      err, "socket");
  if (err == 
            1 
                  || err == 
                            13
                                  ) {




   return -8;
  } else {



   return -1;
  }
 }


 handlep->sock_packet = 1;


 handlep->cooked = 0;



 if (strcmp(device, "any") == 0) {
  (strncpy((handle->errbuf), ("pcap_activate: The \"any\" device isn't supported on 2.0[.x]-kernel systems"), (256)), ((256) <= 0 ? 0 : ((handle->errbuf)[(256) - 1] = '\0')), (void) strlen(("pcap_activate: The \"any\" device isn't supported on 2.0[.x]-kernel systems")))
                    ;
  return -1;
 }
 if (iface_bind_old(handle->fd, device, handle->errbuf) == -1)
  return -1;




 arptype = iface_get_arptype(handle->fd, device, handle->errbuf);
 if (arptype < 0)
  return -1;





 map_arphrd_to_dlt(handle, handle->fd, arptype, device, 0);
 if (handle->linktype == -1) {
  snprintf(handle->errbuf, 256,
    "unknown arptype %d", arptype);
  return -1;
 }



 if (handle->opt.promisc) {
  memset(&ifr, 0, sizeof(ifr));
  (strncpy((ifr.
 ifr_ifrn.ifrn_name
 ), (device), (sizeof(ifr.
 ifr_ifrn.ifrn_name
 ))), ((sizeof(ifr.
 ifr_ifrn.ifrn_name
 )) <= 0 ? 0 : ((ifr.
 ifr_ifrn.ifrn_name
 )[(sizeof(ifr.
 ifr_ifrn.ifrn_name
 )) - 1] = '\0')), (void) strlen((device)));
  if (ioctl(handle->fd, 
                       0x8913
                                   , &ifr) == -1) {
   pcap_fmt_errmsg_for_errno(handle->errbuf,
       256, 
                        (*__errno_location ())
                             , "SIOCGIFFLAGS");
   return -1;
  }
  if ((ifr.
          ifr_ifru.ifru_flags 
                    & 
                      IFF_PROMISC
                                 ) == 0) {
   if (!pcap_do_addexit(handle)) {





    return -1;
   }

   ifr.
      ifr_ifru.ifru_flags 
                |= 
                   IFF_PROMISC
                              ;
   if (ioctl(handle->fd, 
                        0x8914
                                    , &ifr) == -1) {
    pcap_fmt_errmsg_for_errno(handle->errbuf,
        256, 
                         (*__errno_location ())
                              , "SIOCSIFFLAGS");
    return -1;
   }
   handlep->must_do_on_close |= 0x00000001;





   pcap_add_to_pcaps_to_close(handle);
  }
 }







 if (uname(&utsname) < 0 ||
     strncmp(utsname.release, "2.0", 3) == 0) {
  mtu = iface_get_mtu(handle->fd, device, handle->errbuf);
  if (mtu == -1)
   return -1;
  handle->bufsize = 256 + mtu;
  if (handle->bufsize < (u_int)handle->snapshot)
   handle->bufsize = (u_int)handle->snapshot;
 } else {






  handle->bufsize = (u_int)handle->snapshot;
 }





 handle->offset = 0;





 handlep->vlan_offset = -1;

 return 1;
}





static int
iface_bind_old(int fd, const char *device, char *ebuf)
{
 struct sockaddr saddr={0};
 int err={0};
 socklen_t errlen = sizeof(err);

 memset(&saddr, 0, sizeof(saddr));
 (strncpy((saddr.sa_data), (device), (sizeof(saddr.sa_data))), ((sizeof(saddr.sa_data)) <= 0 ? 0 : ((saddr.sa_data)[(sizeof(saddr.sa_data)) - 1] = '\0')), (void) strlen((device)));
 if (bind(fd, &saddr, sizeof(saddr)) == -1) {
  pcap_fmt_errmsg_for_errno(ebuf, 256,
      
     (*__errno_location ())
          , "bind");
  return -1;
 }



 if (getsockopt(fd, 
                   1
                             , 
                               4
                                       , &err, &errlen) == -1) {
  pcap_fmt_errmsg_for_errno(ebuf, 256,
      
     (*__errno_location ())
          , "getsockopt");
  return -1;
 }

 if (err > 0) {
  pcap_fmt_errmsg_for_errno(ebuf, 256,
      err, "bind");
  return -1;
 }

 return 0;
}







static int
iface_get_mtu(int fd, const char *device, char *ebuf)
{
 struct ifreq ifr={0};

 if (!device)
  return (64*1024);

 memset(&ifr, 0, sizeof(ifr));
 (strncpy((ifr.
ifr_ifrn.ifrn_name
), (device), (sizeof(ifr.
ifr_ifrn.ifrn_name
))), ((sizeof(ifr.
ifr_ifrn.ifrn_name
)) <= 0 ? 0 : ((ifr.
ifr_ifrn.ifrn_name
)[(sizeof(ifr.
ifr_ifrn.ifrn_name
)) - 1] = '\0')), (void) strlen((device)));

 if (ioctl(fd, 
              0x8921
                        , &ifr) == -1) {
  pcap_fmt_errmsg_for_errno(ebuf, 256,
      
     (*__errno_location ())
          , "SIOCGIFMTU");
  return -1;
 }

 return ifr.
           ifr_ifru.ifru_mtu
                  ;
}




static int
iface_get_arptype(int fd, const char *device, char *ebuf)
{
 struct ifreq ifr={0};

 memset(&ifr, 0, sizeof(ifr));
 (strncpy((ifr.
ifr_ifrn.ifrn_name
), (device), (sizeof(ifr.
ifr_ifrn.ifrn_name
))), ((sizeof(ifr.
ifr_ifrn.ifrn_name
)) <= 0 ? 0 : ((ifr.
ifr_ifrn.ifrn_name
)[(sizeof(ifr.
ifr_ifrn.ifrn_name
)) - 1] = '\0')), (void) strlen((device)));

 if (ioctl(fd, 
              0x8927
                           , &ifr) == -1) {
  pcap_fmt_errmsg_for_errno(ebuf, 256,
      
     (*__errno_location ())
          , "SIOCGIFHWADDR");
  if (
     (*__errno_location ()) 
           == 
              19
                    ) {



   return -5;
  }
  return -1;
 }

 return ifr.
           ifr_ifru.ifru_hwaddr
                     .sa_family;
}


static int
fix_program(pcap_t *handle, struct sock_fprog *fcode, int is_mmapped)
{
 struct pcap_linux *handlep = handle->priv;
 size_t prog_size={0};
 register int i={0};
 register struct bpf_insn *p={0};
 struct bpf_insn *f={0};
 int len={0};





 prog_size = sizeof(*handle->fcode.bf_insns) * handle->fcode.bf_len;
 len = handle->fcode.bf_len;
 f = (struct bpf_insn *)malloc(prog_size);
 if (f == 
         ((void *)0)
             ) {
  pcap_fmt_errmsg_for_errno(handle->errbuf, 256,
      
     (*__errno_location ())
          , "malloc");
  return -1;
 }
 memcpy(f, handle->fcode.bf_insns, prog_size);
 fcode->len = len;
 fcode->filter = (struct sock_filter *) f;

 for (i = 0; i < len; ++i) {
  p = &f[i];



  switch (
         ((
         p->code
         ) & 0x07)
                           ) {

  case 
      0x06
             :




   if (!is_mmapped) {





    if (
       ((
       p->code
       ) & 0xe0) 
                         == 
                            0x00
                                 ) {
     if (p->k != 0)
      p->k = 262144;
    }
   }
   break;

  case 
      0x00
            :
  case 
      0x01
             :




   switch (
          ((
          p->code
          ) & 0xe0)
                           ) {

   case 
       0x20
              :
   case 
       0x40
              :
   case 
       0xa0
              :



    if (handlep->cooked) {




     if (fix_offset(p) < 0) {





      return 0;
     }
    }
    break;
   }
   break;
  }
 }
 return 1;
}

static int
fix_offset(struct bpf_insn *p)
{



 if (p->k >= 16) {






  p->k -= 16;
 } else if (p->k == 0) {




  p->k = 
        (-0x1000) 
                   + 
                     4
                                   ;
 } else if (p->k == 14) {




  p->k = 
        (-0x1000) 
                   + 
                     0
                                    ;
 } else if ((bpf_int32)(p->k) > 0) {





  return -1;
 }
 return 0;
}

static int
set_kernel_filter(pcap_t *handle, struct sock_fprog *fcode)
{
 int total_filter_on = 0;
 int save_mode={0};
 int ret={0};
 int save_errno={0};
 if (setsockopt(handle->fd, 
                           1
                                     , 
                                       26
                                                       ,
         &total_fcode, sizeof(total_fcode)) == 0) {
  char drain[1]={0};




  total_filter_on = 1;







  save_mode = fcntl(handle->fd, 
                               3
                                      , 0);
  if (save_mode == -1) {
   pcap_fmt_errmsg_for_errno(handle->errbuf,
       256, 
                        (*__errno_location ())
                             ,
       "can't get FD flags when changing filter");
   return -2;
  }
  if (fcntl(handle->fd, 
                       4
                              , save_mode | 
                                            04000
                                                      ) < 0) {
   pcap_fmt_errmsg_for_errno(handle->errbuf,
       256, 
                        (*__errno_location ())
                             ,
       "can't set nonblocking mode when changing filter");
   return -2;
  }
  while (recv(handle->fd, &drain, sizeof drain, 
                                               MSG_TRUNC
                                                        ) >= 0)
   ;
  save_errno = 
              (*__errno_location ())
                   ;
  if (save_errno != 
                   11
                         ) {






   (void)fcntl(handle->fd, 
                          4
                                 , save_mode);
   (void)reset_kernel_filter(handle);
   pcap_fmt_errmsg_for_errno(handle->errbuf,
       256, save_errno,
       "recv failed when changing filter");
   return -2;
  }
  if (fcntl(handle->fd, 
                       4
                              , save_mode) == -1) {
   pcap_fmt_errmsg_for_errno(handle->errbuf,
       256, 
                        (*__errno_location ())
                             ,
       "can't restore FD flags when changing filter");
   return -2;
  }
 }




 ret = setsockopt(handle->fd, 
                             1
                                       , 
                                         26
                                                         ,
    fcode, sizeof(*fcode));
 if (ret == -1 && total_filter_on) {
  save_errno = 
              (*__errno_location ())
                   ;






  if (reset_kernel_filter(handle) == -1) {
   pcap_fmt_errmsg_for_errno(handle->errbuf,
       256, 
                        (*__errno_location ())
                             ,
       "can't remove kernel total filter");
   return -2;
  }

  
 (*__errno_location ()) 
       = save_errno;
 }
 return ret;
}

static int
reset_kernel_filter(pcap_t *handle)
{
 int ret={0};






 int dummy = 0;

 ret = setsockopt(handle->fd, 
                             1
                                       , 
                                         27
                                                         ,
       &dummy, sizeof(dummy));







 if (ret == -1 && 
                 (*__errno_location ()) 
                       != 
                          2 
                                 && 
                                    (*__errno_location ()) 
                                          != 
                                             64
                                                   )
  return -1;
 return 0;
}


int
pcap_set_protocol_linux(pcap_t *p, int protocol)
{
 if (pcap_check_activated(p))
  return (-4);
 p->opt.protocol = protocol;
 return (0);
}




const char *
pcap_lib_version(void)
{


 return ("libpcap version " "1.9.0-PRE-GIT" " (with TPACKET_V3)");
}
