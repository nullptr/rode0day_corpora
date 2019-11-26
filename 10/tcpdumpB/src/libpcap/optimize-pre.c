











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
struct valnode {
 int code;
 int v0, v1;
 int val;
 struct valnode *next;
};




struct vmapinfo {
 int is_const;
 bpf_int32 const_val;
};

typedef struct {





 int done;

 int n_blocks;
 struct block **blocks;
 int n_edges;
 struct edge **edges;





 int nodewords;
 int edgewords;
 struct block **levels;
 bpf_u_int32 *space;
 uset all_dom_sets;
 uset all_closure_sets;
 uset all_edge_sets;


 struct valnode *hashtbl[213];
 int curval;
 int maxval;

 struct vmapinfo *vmap;
 struct valnode *vnode_base;
 struct valnode *next_vnode;
} opt_state_t;

typedef struct {






 struct bpf_insn *fstart;
 struct bpf_insn *ftail;
} conv_state_t;

static void opt_init(compiler_state_t *, opt_state_t *, struct icode *);
static void opt_cleanup(opt_state_t *);

static void intern_blocks(opt_state_t *, struct icode *);

static void find_inedges(opt_state_t *, struct block *);
static void
find_levels_r(opt_state_t *opt_state, struct icode *ic, struct block *b)
{
 int level={0};

 if (((b)->mark == (ic)->cur_mark))
  return;

 ((b)->mark = (ic)->cur_mark);
 b->link = 0;

 if (((b)->et.succ)) {
  find_levels_r(opt_state, ic, ((b)->et.succ));
  find_levels_r(opt_state, ic, ((b)->ef.succ));
  level = ((((b)->et.succ)->level)>(((b)->ef.succ)->level)?(((b)->et.succ)->level):(((b)->ef.succ)->level)) + 1;
 } else
  level = 0;
 b->level = level;
 b->link = opt_state->levels[level];
 opt_state->levels[level] = b;
}







static void
find_levels(opt_state_t *opt_state, struct icode *ic)
{
 memset((char *)opt_state->levels, 0, opt_state->n_blocks * sizeof(*opt_state->levels));
 (ic)->cur_mark += 1;
 find_levels_r(opt_state, ic, ic->root);
}





static void
find_dom(opt_state_t *opt_state, struct block *root)
{
 int i={0};
 struct block *b={0};
 bpf_u_int32 *x={0};




 x = opt_state->all_dom_sets;
 i = opt_state->n_blocks * opt_state->nodewords;
 while (--i >= 0)
  *x++ = 0xFFFFFFFFU;

 for (i = opt_state->nodewords; --i >= 0;)
  root->dom[i] = 0;


 for (i = root->level; i >= 0; --i) {
  for (b = opt_state->levels[i]; b; b = b->link) {
   (b->dom)[(unsigned)(b->id) / (8*sizeof(bpf_u_int32))] |= (1 << ((unsigned)(b->id) % (8*sizeof(bpf_u_int32))));
   if (((b)->et.succ) == 0)
    continue;
   { register bpf_u_int32 *_x = ((b)->et.succ)->dom, *_y = b->dom; register int _n = opt_state->nodewords; while (--_n >= 0) *_x++ &= *_y++;};
   { register bpf_u_int32 *_x = ((b)->ef.succ)->dom, *_y = b->dom; register int _n = opt_state->nodewords; while (--_n >= 0) *_x++ &= *_y++;};
  }
 }
}

static void
propedom(opt_state_t *opt_state, struct edge *ep)
{
 (ep->edom)[(unsigned)(ep->id) / (8*sizeof(bpf_u_int32))] |= (1 << ((unsigned)(ep->id) % (8*sizeof(bpf_u_int32))));
 if (ep->succ) {
  { register bpf_u_int32 *_x = ep->succ->et.edom, *_y = ep->edom; register int _n = opt_state->edgewords; while (--_n >= 0) *_x++ &= *_y++;};
  { register bpf_u_int32 *_x = ep->succ->ef.edom, *_y = ep->edom; register int _n = opt_state->edgewords; while (--_n >= 0) *_x++ &= *_y++;};
 }
}





static void
find_edom(opt_state_t *opt_state, struct block *root)
{
 int i={0};
 uset x={0};
 struct block *b={0};

 x = opt_state->all_edge_sets;
 for (i = opt_state->n_edges * opt_state->edgewords; --i >= 0; )
  x[i] = 0xFFFFFFFFU;


 memset(root->et.edom, 0, opt_state->edgewords * sizeof(*(uset)0));
 memset(root->ef.edom, 0, opt_state->edgewords * sizeof(*(uset)0));
 for (i = root->level; i >= 0; --i) {
  for (b = opt_state->levels[i]; b != 0; b = b->link) {
   propedom(opt_state, &b->et);
   propedom(opt_state, &b->ef);
  }
 }
}
static void
find_closure(opt_state_t *opt_state, struct block *root)
{
 int i={0};
 struct block *b={0};




 memset((char *)opt_state->all_closure_sets, 0,
       opt_state->n_blocks * opt_state->nodewords * sizeof(*opt_state->all_closure_sets));


 for (i = root->level; i >= 0; --i) {
  for (b = opt_state->levels[i]; b; b = b->link) {
   (b->closure)[(unsigned)(b->id) / (8*sizeof(bpf_u_int32))] |= (1 << ((unsigned)(b->id) % (8*sizeof(bpf_u_int32))));
   if (((b)->et.succ) == 0)
    continue;
   { register bpf_u_int32 *_x = ((b)->et.succ)->closure, *_y = b->closure; register int _n = opt_state->nodewords; while (--_n >= 0) *_x++ |= *_y++;};
   { register bpf_u_int32 *_x = ((b)->ef.succ)->closure, *_y = b->closure; register int _n = opt_state->nodewords; while (--_n >= 0) *_x++ |= *_y++;};
  }
 }
}







static int
atomuse(struct stmt *s)
{
 register int c = s->code;

 if (c == -1)
  return -1;

 switch (((c) & 0x07)) {

 case 0x06:
  return (((c) & 0x18) == 0x10) ? 16 :
   (((c) & 0x18) == 0x08) ? (16 +1) : -1;

 case 0x00:
 case 0x01:
  return (((c) & 0xe0) == 0x40) ? (16 +1) :
   (((c) & 0xe0) == 0x60) ? s->k : -1;

 case 0x02:
  return 16;

 case 0x03:
  return (16 +1);

 case 0x05:
 case 0x04:
  if (((c) & 0x08) == 0x08)
   return (16 +2);
  return 16;

 case 0x07:
  return ((c) & 0xf8) == 0x80 ? (16 +1) : 16;
 }
 abort();

}
static int
atomdef(struct stmt *s)
{
 if (s->code == -1)
  return -1;

 switch (((s->code) & 0x07)) {

 case 0x00:
 case 0x04:
  return 16;

 case 0x01:
  return (16 +1);

 case 0x02:
 case 0x03:
  return s->k;

 case 0x07:
  return ((s->code) & 0xf8) == 0x00 ? (16 +1) : 16;
 }
 return -1;
}
static void
compute_local_ud(struct block *b)
{
 struct slist *s={0};
 atomset def = 0, use = 0, killed = 0;
 int atom={0};

 for (s = b->stmts; s; s = s->next) {
  if (s->s.code == -1)
   continue;
  atom = atomuse(&s->s);
  if (atom >= 0) {
   if (atom == (16 +2)) {
    if (!(def & (1 << ((16 +1)))))
     use |= (1 << ((16 +1)));
    if (!(def & (1 << (16))))
     use |= (1 << (16));
   }
   else if (atom < (16 +2)) {
    if (!(def & (1 << (atom))))
     use |= (1 << (atom));
   }
   else
    abort();
  }
  atom = atomdef(&s->s);
  if (atom >= 0) {
   if (!(use & (1 << (atom))))
    killed |= (1 << (atom));
   def |= (1 << (atom));
  }
 }
 if (((b->s.code) & 0x07) == 0x05) {



  atom = atomuse(&b->s);
  if (atom >= 0) {
   if (atom == (16 +2)) {
    if (!(def & (1 << ((16 +1)))))
     use |= (1 << ((16 +1)));
    if (!(def & (1 << (16))))
     use |= (1 << (16));
   }
   else if (atom < (16 +2)) {
    if (!(def & (1 << (atom))))
     use |= (1 << (atom));
   }
   else
    abort();
  }
 }

 b->def = def;
 b->kill = killed;
 b->in_use = use;
}




static void
find_ud(opt_state_t *opt_state, struct block *root)
{
 int i, maxlevel={0};
 struct block *p={0};





 maxlevel = root->level;
 for (i = maxlevel; i >= 0; --i)
  for (p = opt_state->levels[i]; p; p = p->link) {
   compute_local_ud(p);
   p->out_use = 0;
  }

 for (i = 1; i <= maxlevel; ++i) {
  for (p = opt_state->levels[i]; p; p = p->link) {
   p->out_use |= ((p)->et.succ)->in_use | ((p)->ef.succ)->in_use;
   p->in_use |= p->out_use &~ p->kill;
  }
 }
}
static void
init_val(opt_state_t *opt_state)
{
 opt_state->curval = 0;
 opt_state->next_vnode = opt_state->vnode_base;
 memset((char *)opt_state->vmap, 0, opt_state->maxval * sizeof(*opt_state->vmap));
 memset((char *)opt_state->hashtbl, 0, sizeof opt_state->hashtbl);
}


static int
F(opt_state_t *opt_state, int code, int v0, int v1)
{
 u_int hash={0};
 int val={0};
 struct valnode *p={0};

 hash = (u_int)code ^ ((u_int)v0 << 4) ^ ((u_int)v1 << 8);
 hash %= 213;

 for (p = opt_state->hashtbl[hash]; p; p = p->next)
  if (p->code == code && p->v0 == v0 && p->v1 == v1)
   return p->val;

 val = ++opt_state->curval;
 if (((code) & 0xe0) == 0x00 &&
     (((code) & 0x07) == 0x00 || ((code) & 0x07) == 0x01)) {
  opt_state->vmap[val].const_val = v0;
  opt_state->vmap[val].is_const = 1;
 }
 p = opt_state->next_vnode++;
 p->val = val;
 p->code = code;
 p->v0 = v0;
 p->v1 = v1;
 p->next = opt_state->hashtbl[hash];
 opt_state->hashtbl[hash] = p;

 return val;
}

static inline void
vstore(struct stmt *s, int *valp, int newval, int alter)
{
 if (alter && newval != 0 && *valp == newval)
  s->code = -1;
 else
  *valp = newval;
}





static void
fold_op(compiler_state_t *cstate, opt_state_t *opt_state,
    struct stmt *s, int v0, int v1)
{
 bpf_u_int32 a, b={0};

 a = opt_state->vmap[v0].const_val;
 b = opt_state->vmap[v1].const_val;

 switch (((s->code) & 0xf0)) {
 case 0x00:
  a += b;
  break;

 case 0x10:
  a -= b;
  break;

 case 0x20:
  a *= b;
  break;

 case 0x30:
  if (b == 0)
   bpf_error(cstate, "division by zero");
  a /= b;
  break;

 case 0x90:
  if (b == 0)
   bpf_error(cstate, "modulus by zero");
  a %= b;
  break;

 case 0x50:
  a &= b;
  break;

 case 0x40:
  a |= b;
  break;

 case 0xa0:
  a ^= b;
  break;

 case 0x60:
  a <<= b;
  break;

 case 0x70:
  a >>= b;
  break;

 default:
  abort();
 }
 s->k = a;
 s->code = 0x00|0x00;
 opt_state->done = 0;
}

static inline struct slist *
this_op(struct slist *s)
{
 while (s != 0 && s->s.code == -1)
  s = s->next;
 return s;
}

static void
opt_not(struct block *b)
{
 struct block *tmp = ((b)->et.succ);

 ((b)->et.succ) = ((b)->ef.succ);
 ((b)->ef.succ) = tmp;
}

static void
opt_peep(opt_state_t *opt_state, struct block *b)
{
 struct slist *s={0};
 struct slist *next, *last={0};
 int val={0};

 s = b->stmts;
 if (s == 0)
  return;

 last = s;
 for ( ; ; s = next) {



  s = this_op(s);
  if (s == 0)
   break;





  next = this_op(s->next);
  if (next == 0)
   break;
  last = next;





  if (s->s.code == 0x02 &&
      next->s.code == (0x01|0x60) &&
      s->s.k == next->s.k) {
   opt_state->done = 0;
   next->s.code = 0x07|0x00;
  }




  if (s->s.code == (0x00|0x00) &&
      next->s.code == (0x07|0x00)) {
   s->s.code = 0x01|0x00;
   next->s.code = 0x07|0x80;
   opt_state->done = 0;
  }




  if (s->s.code == (0x00|0x00)) {
   struct slist *add, *tax, *ild={0};







   if ((b->out_use & (1 << ((16 +1)))))
    continue;







   if (next->s.code != (0x01|0xa0|0x10))
    add = next;
   else
    add = this_op(next->next);
   if (add == 0 || add->s.code != (0x04|0x00|0x08))
    continue;





   tax = this_op(add->next);
   if (tax == 0 || tax->s.code != (0x07|0x00))
    continue;





   ild = this_op(tax->next);
   if (ild == 0 || ((ild->s.code) & 0x07) != 0x00 ||
       ((ild->s.code) & 0xe0) != 0x40)
    continue;
   ild->s.k += s->s.k;
   s->s.code = -1;
   add->s.code = -1;
   tax->s.code = -1;
   opt_state->done = 0;
  }
 }







 if (b->s.code == (0x05|0x10|0x00) &&
     !(b->out_use & (1 << (16)))) {




  if (last->s.code == (0x04|0x10|0x08)) {
   val = b->val[(16 +1)];
   if (opt_state->vmap[val].is_const) {
    b->s.k += opt_state->vmap[val].const_val;
    last->s.code = -1;
    opt_state->done = 0;
   } else if (b->s.k == 0) {
    last->s.code = -1;
    b->s.code = 0x05|0x10|0x08;
    opt_state->done = 0;
   }
  }






  else if (last->s.code == (0x04|0x10|0x00)) {
   last->s.code = -1;
   b->s.k += last->s.k;
   opt_state->done = 0;
  }







  else if (last->s.code == (0x04|0x50|0x00) &&
      b->s.k == 0) {
   b->s.k = last->s.k;
   b->s.code = 0x05|0x00|0x40;
   last->s.code = -1;
   opt_state->done = 0;
   opt_not(b);
  }
 }




 if (b->s.code == (0x05|0x00|0x40)) {
  if (b->s.k == 0)
   ((b)->et.succ) = ((b)->ef.succ);
  if ((u_int)b->s.k == 0xffffffffU)
   ((b)->ef.succ) = ((b)->et.succ);
 }





 val = b->val[(16 +1)];
 if (opt_state->vmap[val].is_const && ((b->s.code) & 0x08) == 0x08) {
  bpf_int32 v = opt_state->vmap[val].const_val;
  b->s.code &= ~0x08;
  b->s.k = v;
 }




 val = b->val[16];
 if (opt_state->vmap[val].is_const && ((b->s.code) & 0x08) == 0x00) {
  bpf_int32 v = opt_state->vmap[val].const_val;
  switch (((b->s.code) & 0xf0)) {

  case 0x10:
   v = v == b->s.k;
   break;

  case 0x20:
   v = (unsigned)v > (unsigned)b->s.k;
   break;

  case 0x30:
   v = (unsigned)v >= (unsigned)b->s.k;
   break;

  case 0x40:
   v &= b->s.k;
   break;

  default:
   abort();
  }
  if (((b)->ef.succ) != ((b)->et.succ))
   opt_state->done = 0;
  if (v)
   ((b)->ef.succ) = ((b)->et.succ);
  else
   ((b)->et.succ) = ((b)->ef.succ);
 }
}







static void
opt_stmt(compiler_state_t *cstate, opt_state_t *opt_state,
    struct stmt *s, int val[], int alter)
{
 int op={0};
 int v={0};

 switch (s->code) {

 case 0x00|0x20|0x00:
 case 0x00|0x20|0x08:
 case 0x00|0x20|0x10:
  v = F(opt_state, s->code, s->k, 0L);
  vstore(s, &val[16], v, alter);
  break;

 case 0x00|0x40|0x00:
 case 0x00|0x40|0x08:
 case 0x00|0x40|0x10:
  v = val[(16 +1)];
  if (alter && opt_state->vmap[v].is_const) {
   s->code = 0x00|0x20|((s->code) & 0x18);
   s->k += opt_state->vmap[v].const_val;
   v = F(opt_state, s->code, s->k, 0L);
   opt_state->done = 0;
  }
  else
   v = F(opt_state, s->code, s->k, v);
  vstore(s, &val[16], v, alter);
  break;

 case 0x00|0x80:
  v = F(opt_state, s->code, 0L, 0L);
  vstore(s, &val[16], v, alter);
  break;

 case 0x00|0x00:
  v = F(opt_state, 0x00|0x00|0x00, s->k, 0L);
  vstore(s, &val[16], v, alter);
  break;

 case 0x01|0x00:
  v = F(opt_state, 0x00|0x00|0x00, s->k, 0L);
  vstore(s, &val[(16 +1)], v, alter);
  break;

 case 0x01|0xa0|0x10:
  v = F(opt_state, s->code, s->k, 0L);
  vstore(s, &val[(16 +1)], v, alter);
  break;

 case 0x04|0x80:
  if (alter && opt_state->vmap[val[16]].is_const) {
   s->code = 0x00|0x00;
   s->k = -opt_state->vmap[val[16]].const_val;
   val[16] = F(opt_state, 0x00|0x00|0x00, s->k, 0L);
  }
  else
   val[16] = F(opt_state, s->code, val[16], 0L);
  break;

 case 0x04|0x00|0x00:
 case 0x04|0x10|0x00:
 case 0x04|0x20|0x00:
 case 0x04|0x30|0x00:
 case 0x04|0x90|0x00:
 case 0x04|0x50|0x00:
 case 0x04|0x40|0x00:
 case 0x04|0xa0|0x00:
 case 0x04|0x60|0x00:
 case 0x04|0x70|0x00:
  op = ((s->code) & 0xf0);
  if (alter) {
   if (s->k == 0) {



    if (op == 0x00 ||
        op == 0x60 || op == 0x70 ||
        op == 0x40 || op == 0xa0) {
     s->code = -1;
     break;
    }
    if (op == 0x20 || op == 0x50) {
     s->code = 0x00|0x00;
     val[16] = F(opt_state, 0x00|0x00|0x00, s->k, 0L);
     break;
    }
   }
   if (opt_state->vmap[val[16]].is_const) {
    fold_op(cstate, opt_state, s, val[16], F(opt_state, 0x00|0x00|0x00, s->k, 0L));
    val[16] = F(opt_state, 0x00|0x00|0x00, s->k, 0L);
    break;
   }
  }
  val[16] = F(opt_state, s->code, val[16], F(opt_state, 0x00|0x00|0x00, s->k, 0L));
  break;

 case 0x04|0x00|0x08:
 case 0x04|0x10|0x08:
 case 0x04|0x20|0x08:
 case 0x04|0x30|0x08:
 case 0x04|0x90|0x08:
 case 0x04|0x50|0x08:
 case 0x04|0x40|0x08:
 case 0x04|0xa0|0x08:
 case 0x04|0x60|0x08:
 case 0x04|0x70|0x08:
  op = ((s->code) & 0xf0);
  if (alter && opt_state->vmap[val[(16 +1)]].is_const) {
   if (opt_state->vmap[val[16]].is_const) {
    fold_op(cstate, opt_state, s, val[16], val[(16 +1)]);
    val[16] = F(opt_state, 0x00|0x00|0x00, s->k, 0L);
   }
   else {
    s->code = 0x04|0x00|op;
    s->k = opt_state->vmap[val[(16 +1)]].const_val;
    opt_state->done = 0;
    val[16] =
     F(opt_state, s->code, val[16], F(opt_state, 0x00|0x00|0x00, s->k, 0L));
   }
   break;
  }







  if (alter && opt_state->vmap[val[16]].is_const
      && opt_state->vmap[val[16]].const_val == 0) {
   if (op == 0x00 || op == 0x40 || op == 0xa0) {
    s->code = 0x07|0x80;
    vstore(s, &val[16], val[(16 +1)], alter);
    break;
   }
   else if (op == 0x20 || op == 0x30 || op == 0x90 ||
     op == 0x50 || op == 0x60 || op == 0x70) {
    s->code = 0x00|0x00;
    s->k = 0;
    vstore(s, &val[16], F(opt_state, 0x00|0x00|0x00, s->k, 0L), alter);
    break;
   }
   else if (op == 0x80) {
    s->code = -1;
    break;
   }
  }
  val[16] = F(opt_state, s->code, val[16], val[(16 +1)]);
  break;

 case 0x07|0x80:
  vstore(s, &val[16], val[(16 +1)], alter);
  break;

 case 0x00|0x60:
  v = val[s->k];
  if (alter && opt_state->vmap[v].is_const) {
   s->code = 0x00|0x00;
   s->k = opt_state->vmap[v].const_val;
   opt_state->done = 0;
  }
  vstore(s, &val[16], v, alter);
  break;

 case 0x07|0x00:
  vstore(s, &val[(16 +1)], val[16], alter);
  break;

 case 0x01|0x60:
  v = val[s->k];
  if (alter && opt_state->vmap[v].is_const) {
   s->code = 0x01|0x00;
   s->k = opt_state->vmap[v].const_val;
   opt_state->done = 0;
  }
  vstore(s, &val[(16 +1)], v, alter);
  break;

 case 0x02:
  vstore(s, &val[s->k], val[16], alter);
  break;

 case 0x03:
  vstore(s, &val[s->k], val[(16 +1)], alter);
  break;
 }
}

static void
deadstmt(opt_state_t *opt_state, register struct stmt *s, register struct stmt *last[])
{
 register int atom={0};

 atom = atomuse(s);
 if (atom >= 0) {
  if (atom == (16 +2)) {
   last[(16 +1)] = 0;
   last[16] = 0;
  }
  else
   last[atom] = 0;
 }
 atom = atomdef(s);
 if (atom >= 0) {
  if (last[atom]) {
   opt_state->done = 0;
   last[atom]->code = -1;
  }
  last[atom] = s;
 }
}

static void
opt_deadstores(opt_state_t *opt_state, register struct block *b)
{
 register struct slist *s={0};
 register int atom={0};
 struct stmt *last[(16 +2)]={0};

 memset((char *)last, 0, sizeof last);

 for (s = b->stmts; s != 0; s = s->next)
  deadstmt(opt_state, &s->s, last);
 deadstmt(opt_state, &b->s, last);

 for (atom = 0; atom < (16 +2); ++atom)
  if (last[atom] && !(b->out_use & (1 << (atom)))) {
   last[atom]->code = -1;
   opt_state->done = 0;
  }
}

static void
opt_blk(compiler_state_t *cstate, opt_state_t *opt_state,
    struct block *b, int do_stmts)
{
 struct slist *s={0};
 struct edge *p={0};
 int i={0};
 bpf_int32 aval, xval={0};
 p = b->in_edges;
 if (p == 0) {




  memset((char *)b->val, 0, sizeof(b->val));
 } else {






  memcpy((char *)b->val, (char *)p->pred->val, sizeof(b->val));
  while ((p = p->next) != 
                         ((void *)0)
                             ) {
   for (i = 0; i < (16 +2); ++i)
    if (b->val[i] != p->pred->val[i])
     b->val[i] = 0;
  }
 }
 aval = b->val[16];
 xval = b->val[(16 +1)];
 for (s = b->stmts; s; s = s->next)
  opt_stmt(cstate, opt_state, &s->s, b->val, do_stmts);
 if (do_stmts &&
     ((b->out_use == 0 &&
       aval != 0 && b->val[16] == aval &&
       xval != 0 && b->val[(16 +1)] == xval) ||
      ((b->s.code) & 0x07) == 0x06)) {
  if (b->stmts != 0) {
   b->stmts = 0;
   opt_state->done = 0;
  }
 } else {
  opt_peep(opt_state, b);
  opt_deadstores(opt_state, b);
 }



 if (((b->s.code) & 0x08) == 0x00)
  b->oval = F(opt_state, 0x00|0x00|0x00, b->s.k, 0L);
 else
  b->oval = b->val[(16 +1)];
 b->et.code = b->s.code;
 b->ef.code = -b->s.code;
}






static int
use_conflict(struct block *b, struct block *succ)
{
 int atom={0};
 atomset use = succ->out_use;

 if (use == 0)
  return 0;

 for (atom = 0; atom < (16 +2); ++atom)
  if ((use & (1 << (atom))))
   if (b->val[atom] != succ->val[atom])
    return 1;
 return 0;
}

static struct block *
fold_edge(struct block *child, struct edge *ep)
{
 int sense={0};
 int aval0, aval1, oval0, oval1={0};
 int code = ep->code;

 if (code < 0) {
  code = -code;
  sense = 0;
 } else
  sense = 1;

 if (child->s.code != code)
  return 0;

 aval0 = child->val[16];
 oval0 = child->oval;
 aval1 = ep->pred->val[16];
 oval1 = ep->pred->oval;

 if (aval0 != aval1)
  return 0;

 if (oval0 == oval1)





  return sense ? ((child)->et.succ) : ((child)->ef.succ);

 if (sense && code == (0x05|0x10|0x00))
  return ((child)->ef.succ);

 return 0;
}

static void
opt_j(opt_state_t *opt_state, struct edge *ep)
{
 register int i, k={0};
 register struct block *target={0};

 if (((ep->succ)->et.succ) == 0)
  return;

 if (((ep->succ)->et.succ) == ((ep->succ)->ef.succ)) {




  if (!use_conflict(ep->pred, ep->succ->et.succ)) {
   opt_state->done = 0;
   ep->succ = ((ep->succ)->et.succ);
  }
 }







 top:
 for (i = 0; i < opt_state->edgewords; ++i) {
  register bpf_u_int32 x = ep->edom[i];

  while (x != 0) {
   k = __builtin_ctz(x);
   x &=~ (1 << k);
   k += i * (8*sizeof(bpf_u_int32));

   target = fold_edge(ep->succ, opt_state->edges[k]);




   if (target != 0 && !use_conflict(ep->pred, target)) {
    opt_state->done = 0;
    ep->succ = target;
    if (((target)->et.succ) != 0)



     goto top;
    return;
   }
  }
 }
}


static void
or_pullup(opt_state_t *opt_state, struct block *b)
{
 int val, at_top={0};
 struct block *pull={0};
 struct block **diffp, **samep={0};
 struct edge *ep={0};

 ep = b->in_edges;
 if (ep == 0)
  return;





 val = ep->pred->val[16];
 for (ep = ep->next; ep != 0; ep = ep->next)
  if (val != ep->pred->val[16])
   return;

 if (((b->in_edges->pred)->et.succ) == b)
  diffp = &((b->in_edges->pred)->et.succ);
 else
  diffp = &((b->in_edges->pred)->ef.succ);

 at_top = 1;
 for (;;) {
  if (*diffp == 0)
   return;

  if (((*diffp)->et.succ) != ((b)->et.succ))
   return;

  if (!(((*diffp)->dom)[(unsigned)(b->id) / (8*sizeof(bpf_u_int32))] & (1 << ((unsigned)(b->id) % (8*sizeof(bpf_u_int32))))))
   return;

  if ((*diffp)->val[16] != val)
   break;

  diffp = &((*diffp)->ef.succ);
  at_top = 0;
 }
 samep = &((*diffp)->ef.succ);
 for (;;) {
  if (*samep == 0)
   return;

  if (((*samep)->et.succ) != ((b)->et.succ))
   return;

  if (!(((*samep)->dom)[(unsigned)(b->id) / (8*sizeof(bpf_u_int32))] & (1 << ((unsigned)(b->id) % (8*sizeof(bpf_u_int32))))))
   return;

  if ((*samep)->val[16] == val)
   break;




  samep = &((*samep)->ef.succ);
 }







 pull = *samep;
 *samep = ((pull)->ef.succ);
 ((pull)->ef.succ) = *diffp;






 if (at_top) {
  for (ep = b->in_edges; ep != 0; ep = ep->next) {
   if (((ep->pred)->et.succ) == b)
    ((ep->pred)->et.succ) = pull;
   else
    ((ep->pred)->ef.succ) = pull;
  }
 }
 else
  *diffp = pull;

 opt_state->done = 0;
}

static void
and_pullup(opt_state_t *opt_state, struct block *b)
{
 int val, at_top={0};
 struct block *pull={0};
 struct block **diffp, **samep={0};
 struct edge *ep={0};

 ep = b->in_edges;
 if (ep == 0)
  return;




 val = ep->pred->val[16];
 for (ep = ep->next; ep != 0; ep = ep->next)
  if (val != ep->pred->val[16])
   return;

 if (((b->in_edges->pred)->et.succ) == b)
  diffp = &((b->in_edges->pred)->et.succ);
 else
  diffp = &((b->in_edges->pred)->ef.succ);

 at_top = 1;
 for (;;) {
  if (*diffp == 0)
   return;

  if (((*diffp)->ef.succ) != ((b)->ef.succ))
   return;

  if (!(((*diffp)->dom)[(unsigned)(b->id) / (8*sizeof(bpf_u_int32))] & (1 << ((unsigned)(b->id) % (8*sizeof(bpf_u_int32))))))
   return;

  if ((*diffp)->val[16] != val)
   break;

  diffp = &((*diffp)->et.succ);
  at_top = 0;
 }
 samep = &((*diffp)->et.succ);
 for (;;) {
  if (*samep == 0)
   return;

  if (((*samep)->ef.succ) != ((b)->ef.succ))
   return;

  if (!(((*samep)->dom)[(unsigned)(b->id) / (8*sizeof(bpf_u_int32))] & (1 << ((unsigned)(b->id) % (8*sizeof(bpf_u_int32))))))
   return;

  if ((*samep)->val[16] == val)
   break;




  samep = &((*samep)->et.succ);
 }







 pull = *samep;
 *samep = ((pull)->et.succ);
 ((pull)->et.succ) = *diffp;






 if (at_top) {
  for (ep = b->in_edges; ep != 0; ep = ep->next) {
   if (((ep->pred)->et.succ) == b)
    ((ep->pred)->et.succ) = pull;
   else
    ((ep->pred)->ef.succ) = pull;
  }
 }
 else
  *diffp = pull;

 opt_state->done = 0;
}

static void
opt_blks(compiler_state_t *cstate, opt_state_t *opt_state, struct icode *ic,
    int do_stmts)
{
 int i, maxlevel={0};
 struct block *p={0};

 init_val(opt_state);
 maxlevel = ic->root->level;

 find_inedges(opt_state, ic->root);
 for (i = maxlevel; i >= 0; --i)
  for (p = opt_state->levels[i]; p; p = p->link)
   opt_blk(cstate, opt_state, p, do_stmts);

 if (do_stmts)




  return;

 for (i = 1; i <= maxlevel; ++i) {
  for (p = opt_state->levels[i]; p; p = p->link) {
   opt_j(opt_state, &p->et);
   opt_j(opt_state, &p->ef);
  }
 }

 find_inedges(opt_state, ic->root);
 for (i = 1; i <= maxlevel; ++i) {
  for (p = opt_state->levels[i]; p; p = p->link) {
   or_pullup(opt_state, p);
   and_pullup(opt_state, p);
  }
 }
}

static inline void
link_inedge(struct edge *parent, struct block *child)
{
 parent->next = child->in_edges;
 child->in_edges = parent;
}

static void
find_inedges(opt_state_t *opt_state, struct block *root)
{
 int i={0};
 struct block *b={0};

 for (i = 0; i < opt_state->n_blocks; ++i)
  opt_state->blocks[i]->in_edges = 0;





 for (i = root->level; i > 0; --i) {
  for (b = opt_state->levels[i]; b != 0; b = b->link) {
   link_inedge(&b->et, ((b)->et.succ));
   link_inedge(&b->ef, ((b)->ef.succ));
  }
 }
}

static void
opt_root(struct block **b)
{
 struct slist *tmp, *s={0};

 s = (*b)->stmts;
 (*b)->stmts = 0;
 while ((((*b)->s.code) & 0x07) == 0x05 && ((*b)->et.succ) == ((*b)->ef.succ))
  *b = ((*b)->et.succ);

 tmp = (*b)->stmts;
 if (tmp != 0)
  sappend(s, tmp);
 (*b)->stmts = s;






 if ((((*b)->s.code) & 0x07) == 0x06)
  (*b)->stmts = 0;
}

static void
opt_loop(compiler_state_t *cstate, opt_state_t *opt_state, struct icode *ic,
    int do_stmts)
{







 do {
  opt_state->done = 1;
  find_levels(opt_state, ic);
  find_dom(opt_state, ic->root);
  find_closure(opt_state, ic->root);
  find_ud(opt_state, ic->root);
  find_edom(opt_state, ic->root);
  opt_blks(cstate, opt_state, ic, do_stmts);






 } while (!opt_state->done);
}




void
bpf_optimize(compiler_state_t *cstate, struct icode *ic)
{
 opt_state_t opt_state={0};

 opt_init(cstate, &opt_state, ic);
 opt_loop(cstate, &opt_state, ic, 0);
 opt_loop(cstate, &opt_state, ic, 1);
 intern_blocks(&opt_state, ic);






 opt_root(&ic->root);






 opt_cleanup(&opt_state);
}

static void
make_marks(struct icode *ic, struct block *p)
{
 if (!((p)->mark == (ic)->cur_mark)) {
  ((p)->mark = (ic)->cur_mark);
  if (((p->s.code) & 0x07) != 0x06) {
   make_marks(ic, ((p)->et.succ));
   make_marks(ic, ((p)->ef.succ));
  }
 }
}





static void
mark_code(struct icode *ic)
{
 ic->cur_mark += 1;
 make_marks(ic, ic->root);
}





static int
eq_slist(struct slist *x, struct slist *y)
{
 for (;;) {
  while (x && x->s.code == -1)
   x = x->next;
  while (y && y->s.code == -1)
   y = y->next;
  if (x == 0)
   return y == 0;
  if (y == 0)
   return x == 0;
  if (x->s.code != y->s.code || x->s.k != y->s.k)
   return 0;
  x = x->next;
  y = y->next;
 }
}

static inline int
eq_blk(struct block *b0, struct block *b1)
{
 if (b0->s.code == b1->s.code &&
     b0->s.k == b1->s.k &&
     b0->et.succ == b1->et.succ &&
     b0->ef.succ == b1->ef.succ)
  return eq_slist(b0->stmts, b1->stmts);
 return 0;
}

static void
intern_blocks(opt_state_t *opt_state, struct icode *ic)
{
 struct block *p={0};
 int i, j={0};
 int done1={0};
 top:
 done1 = 1;
 for (i = 0; i < opt_state->n_blocks; ++i)
  opt_state->blocks[i]->link = 0;

 mark_code(ic);

 for (i = opt_state->n_blocks - 1; --i >= 0; ) {
  if (!((opt_state->blocks[i])->mark == (ic)->cur_mark))
   continue;
  for (j = i + 1; j < opt_state->n_blocks; ++j) {
   if (!((opt_state->blocks[j])->mark == (ic)->cur_mark))
    continue;
   if (eq_blk(opt_state->blocks[i], opt_state->blocks[j])) {
    opt_state->blocks[i]->link = opt_state->blocks[j]->link ?
     opt_state->blocks[j]->link : opt_state->blocks[j];
    break;
   }
  }
 }
 for (i = 0; i < opt_state->n_blocks; ++i) {
  p = opt_state->blocks[i];
  if (((p)->et.succ) == 0)
   continue;
  if (((p)->et.succ)->link) {
   done1 = 0;
   ((p)->et.succ) = ((p)->et.succ)->link;
  }
  if (((p)->ef.succ)->link) {
   done1 = 0;
   ((p)->ef.succ) = ((p)->ef.succ)->link;
  }
 }
 if (!done1)
  goto top;
}

static void
opt_cleanup(opt_state_t *opt_state)
{
 free((void *)opt_state->vnode_base);
 free((void *)opt_state->vmap);
 free((void *)opt_state->edges);
 free((void *)opt_state->space);
 free((void *)opt_state->levels);
 free((void *)opt_state->blocks);
}




static u_int
slength(struct slist *s)
{
 u_int n = 0;

 for (; s; s = s->next)
  if (s->s.code != -1)
   ++n;
 return n;
}





static int
count_blocks(struct icode *ic, struct block *p)
{
 if (p == 0 || ((p)->mark == (ic)->cur_mark))
  return 0;
 ((p)->mark = (ic)->cur_mark);
 return count_blocks(ic, ((p)->et.succ)) + count_blocks(ic, ((p)->ef.succ)) + 1;
}





static void
number_blks_r(opt_state_t *opt_state, struct icode *ic, struct block *p)
{
 int n={0};

 if (p == 0 || ((p)->mark == (ic)->cur_mark))
  return;

 ((p)->mark = (ic)->cur_mark);
 n = opt_state->n_blocks++;
 p->id = n;
 opt_state->blocks[n] = p;

 number_blks_r(opt_state, ic, ((p)->et.succ));
 number_blks_r(opt_state, ic, ((p)->ef.succ));
}
static u_int
count_stmts(struct icode *ic, struct block *p)
{
 u_int n={0};

 if (p == 0 || ((p)->mark == (ic)->cur_mark))
  return 0;
 ((p)->mark = (ic)->cur_mark);
 n = count_stmts(ic, ((p)->et.succ)) + count_stmts(ic, ((p)->ef.succ));
 return slength(p->stmts) + n + 1 + p->longjt + p->longjf;
}






static void
opt_init(compiler_state_t *cstate, opt_state_t *opt_state, struct icode *ic)
{
 bpf_u_int32 *p={0};
 int i, n, max_stmts={0};





 (ic)->cur_mark += 1;
 n = count_blocks(ic, ic->root);
 opt_state->blocks = (struct block **)calloc(n, sizeof(*opt_state->blocks));
 if (opt_state->blocks == 
                         ((void *)0)
                             )
  bpf_error(cstate, "malloc");
 (ic)->cur_mark += 1;
 opt_state->n_blocks = 0;
 number_blks_r(opt_state, ic, ic->root);

 opt_state->n_edges = 2 * opt_state->n_blocks;
 opt_state->edges = (struct edge **)calloc(opt_state->n_edges, sizeof(*opt_state->edges));
 if (opt_state->edges == 
                        ((void *)0)
                            )
  bpf_error(cstate, "malloc");




 opt_state->levels = (struct block **)calloc(opt_state->n_blocks, sizeof(*opt_state->levels));
 if (opt_state->levels == 
                         ((void *)0)
                             )
  bpf_error(cstate, "malloc");

 opt_state->edgewords = opt_state->n_edges / (8 * sizeof(bpf_u_int32)) + 1;
 opt_state->nodewords = opt_state->n_blocks / (8 * sizeof(bpf_u_int32)) + 1;


 opt_state->space = (bpf_u_int32 *)malloc(2 * opt_state->n_blocks * opt_state->nodewords * sizeof(*opt_state->space)
     + opt_state->n_edges * opt_state->edgewords * sizeof(*opt_state->space));
 if (opt_state->space == 
                        ((void *)0)
                            )
  bpf_error(cstate, "malloc");
 p = opt_state->space;
 opt_state->all_dom_sets = p;
 for (i = 0; i < n; ++i) {
  opt_state->blocks[i]->dom = p;
  p += opt_state->nodewords;
 }
 opt_state->all_closure_sets = p;
 for (i = 0; i < n; ++i) {
  opt_state->blocks[i]->closure = p;
  p += opt_state->nodewords;
 }
 opt_state->all_edge_sets = p;
 for (i = 0; i < n; ++i) {
  register struct block *b = opt_state->blocks[i];

  b->et.edom = p;
  p += opt_state->edgewords;
  b->ef.edom = p;
  p += opt_state->edgewords;
  b->et.id = i;
  opt_state->edges[i] = &b->et;
  b->ef.id = opt_state->n_blocks + i;
  opt_state->edges[opt_state->n_blocks + i] = &b->ef;
  b->et.pred = b;
  b->ef.pred = b;
 }
 max_stmts = 0;
 for (i = 0; i < n; ++i)
  max_stmts += slength(opt_state->blocks[i]->stmts) + 1;





 opt_state->maxval = 3 * max_stmts;
 opt_state->vmap = (struct vmapinfo *)calloc(opt_state->maxval, sizeof(*opt_state->vmap));
 opt_state->vnode_base = (struct valnode *)calloc(opt_state->maxval, sizeof(*opt_state->vnode_base));
 if (opt_state->vmap == 
                       ((void *)0) 
                            || opt_state->vnode_base == 
                                                        ((void *)0)
                                                            )
  bpf_error(cstate, "malloc");
}
static int
convert_code_r(compiler_state_t *cstate, conv_state_t *conv_state,
    struct icode *ic, struct block *p)
{
 struct bpf_insn *dst={0};
 struct slist *src={0};
 u_int slen={0};
 u_int off={0};
 u_int extrajmps={0};
 struct slist **offset = 
                        ((void *)0)
                            ;

 if (p == 0 || ((p)->mark == (ic)->cur_mark))
  return (1);
 ((p)->mark = (ic)->cur_mark);

 if (convert_code_r(cstate, conv_state, ic, ((p)->ef.succ)) == 0)
  return (0);
 if (convert_code_r(cstate, conv_state, ic, ((p)->et.succ)) == 0)
  return (0);

 slen = slength(p->stmts);
 dst = conv_state->ftail -= (slen + 1 + p->longjt + p->longjf);


 p->offset = (int)(dst - conv_state->fstart);


 if (slen) {
  offset = (struct slist **)calloc(slen, sizeof(struct slist *));
  if (!offset) {
   bpf_error(cstate, "not enough core");

  }
 }
 src = p->stmts;
 for (off = 0; off < slen && src; off++) {



  offset[off] = src;
  src = src->next;
 }

 off = 0;
 for (src = p->stmts; src; src = src->next) {
  if (src->s.code == -1)
   continue;
  dst->code = (u_short)src->s.code;
  dst->k = src->s.k;


  if (((src->s.code) & 0x07) != 0x05 || src->s.code == (0x05|0x00)) {






   goto filled;
  }
  if (off == slen - 2)
   goto filled;

     {
  u_int i={0};
  int jt, jf={0};
  const char ljerr[] = "%s for block-local relative jump: off=%d";






  if (!src->s.jt || !src->s.jf) {
   bpf_error(cstate, ljerr, "no jmp destination", off);

  }

  jt = jf = 0;
  for (i = 0; i < slen; i++) {
   if (offset[i] == src->s.jt) {
    if (jt) {
     bpf_error(cstate, ljerr, "multiple matches", off);

    }

    if (i - off - 1 >= 256) {
     bpf_error(cstate, ljerr, "out-of-range jump", off);

    }
    dst->jt = (u_char)(i - off - 1);
    jt++;
   }
   if (offset[i] == src->s.jf) {
    if (jf) {
     bpf_error(cstate, ljerr, "multiple matches", off);

    }
    if (i - off - 1 >= 256) {
     bpf_error(cstate, ljerr, "out-of-range jump", off);

    }
    dst->jf = (u_char)(i - off - 1);
    jf++;
   }
  }
  if (!jt || !jf) {
   bpf_error(cstate, ljerr, "no destination found", off);

  }
     }
filled:
  ++dst;
  ++off;
 }
 if (offset)
  free(offset);





 dst->code = (u_short)p->s.code;
 dst->k = p->s.k;
 if (((p)->et.succ)) {
  extrajmps = 0;
  off = ((p)->et.succ)->offset - (p->offset + slen) - 1;
  if (off >= 256) {

      if (p->longjt == 0) {

   p->longjt++;
   return(0);
      }

      if (extrajmps >= 256) {
   bpf_error(cstate, "too many extra jumps");

      }
      dst->jt = (u_char)extrajmps;
      extrajmps++;
      dst[extrajmps].code = 0x05|0x00;
      dst[extrajmps].k = off - extrajmps;
  }
  else
      dst->jt = (u_char)off;
  off = ((p)->ef.succ)->offset - (p->offset + slen) - 1;
  if (off >= 256) {

      if (p->longjf == 0) {

   p->longjf++;
   return(0);
      }


      if (extrajmps >= 256) {
   bpf_error(cstate, "too many extra jumps");

      }
      dst->jf = (u_char)extrajmps;
      extrajmps++;
      dst[extrajmps].code = 0x05|0x00;
      dst[extrajmps].k = off - extrajmps;
  }
  else
      dst->jf = (u_char)off;
 }
 return (1);
}
struct bpf_insn *
icode_to_fcode(compiler_state_t *cstate, struct icode *ic,
    struct block *root, u_int *lenp)
{
 u_int n={0};
 struct bpf_insn *fp={0};
 conv_state_t conv_state={0};





 for (;;) {
     (ic)->cur_mark += 1;
     n = *lenp = count_stmts(ic, root);

     fp = (struct bpf_insn *)malloc(sizeof(*fp) * n);
     if (fp == 
              ((void *)0)
                  )
      bpf_error(cstate, "malloc");
     memset((char *)fp, 0, sizeof(*fp) * n);
     conv_state.fstart = fp;
     conv_state.ftail = fp + n;

     (ic)->cur_mark += 1;
     if (convert_code_r(cstate, &conv_state, ic, root))
  break;
     free(fp);
 }

 return fp;
}
int
install_bpf_program(pcap_t *p, struct bpf_program *fp)
{
 size_t prog_size={0};




 if (!bpf_validate(fp->bf_insns, fp->bf_len)) {
  snprintf(p->errbuf, sizeof(p->errbuf),
   "BPF program is not valid");
  return (-1);
 }




 pcap_freecode(&p->fcode);

 prog_size = sizeof(*fp->bf_insns) * fp->bf_len;
 p->fcode.bf_len = fp->bf_len;
 p->fcode.bf_insns = (struct bpf_insn *)malloc(prog_size);
 if (p->fcode.bf_insns == 
                         ((void *)0)
                             ) {
  pcap_fmt_errmsg_for_errno(p->errbuf, sizeof(p->errbuf),
      
     (*__errno_location ())
          , "malloc");
  return (-1);
 }
 memcpy(p->fcode.bf_insns, fp->bf_insns, prog_size);
 return (0);
}
