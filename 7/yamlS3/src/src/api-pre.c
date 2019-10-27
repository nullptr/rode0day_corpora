











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
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));




typedef __gnuc_va_list va_list;
typedef __off_t off_t;
typedef __ssize_t ssize_t;







typedef _G_fpos_t fpos_t;







extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (const char *__filename) __attribute__ ((__nothrow__ , __leaf__));

extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ , __leaf__));




extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ , __leaf__));








extern FILE *tmpfile (void) ;
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;
extern char *tempnam (const char *__dir, const char *__pfx)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

extern int fflush_unlocked (FILE *__stream);






extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;

extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__)) ;
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__)) ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__));





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ , __leaf__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));








extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));





extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));

extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));








extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                               ;
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__))

                      ;








extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));









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



extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;








extern void perror (const char *__s);






extern int sys_nerr;
extern const char *const sys_errlist[];




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__));
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));





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


extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__ , __leaf__)) ;




extern double atof (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern char *l64a (long int __n) __attribute__ ((__nothrow__ , __leaf__)) ;


extern long int a64l (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;










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
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));


typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));






static __inline unsigned int
__bswap_32 (int *data_flow, unsigned int __bsx)
{
  return __builtin_bswap32 (__bsx);
}
static __inline __uint64_t
__bswap_64 (int *data_flow, __uint64_t __bsx)
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
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






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









extern long int random (void) __attribute__ ((__nothrow__ , __leaf__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







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
       int32_t *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) __attribute__ ((__nothrow__ , __leaf__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));




extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__ , __leaf__));







extern double drand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__ , __leaf__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));









extern void *malloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;










extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));




extern void cfree (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));










extern void *alloca (size_t __size) __attribute__ ((__nothrow__ , __leaf__));











extern void *valloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;




extern void *aligned_alloc (size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__alloc_size__ (2))) ;




extern void abort (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (int *data_flowvoid)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int at_quick_exit (void (*__func) (int *data_flowvoid)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int on_exit (void (*__func) (int *data_flow, int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));





extern void quick_exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));







extern void _Exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));






extern char *getenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;

extern int putenv (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__ , __leaf__));
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;





extern int system (const char *__command) ;

extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ , __leaf__)) ;






typedef int (*__compar_fn_t) (int *data_flow, const void *, const void *);



extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;







extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
extern int abs (int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;



__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;







extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;

extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));






extern int mblen (const char *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__ , __leaf__));



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__));








extern int rpmatch (const char *__response) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3))) ;
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
















extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));






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
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    __locale_t __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));




extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));

extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));


extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) __attribute__ ((__nothrow__ , __leaf__));

extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__ , __leaf__))

                        __attribute__ ((__nonnull__ (2)));
extern char *strerror_l (int __errnum, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));





extern void __bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern void bcopy (const void *__src, void *__dest, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern int ffs (int __i) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


const char *
yaml_get_version_string(int *data_flowvoid);
void
yaml_get_version(int *data_flow, int *major, int *minor, int *patch);
typedef unsigned char yaml_char_t;


typedef struct yaml_version_directive_s {

    int major;

    int minor;
} yaml_version_directive_t;


typedef struct yaml_tag_directive_s {

    yaml_char_t *handle;

    yaml_char_t *prefix;
} yaml_tag_directive_t;


typedef enum yaml_encoding_e {

    YAML_ANY_ENCODING,

    YAML_UTF8_ENCODING,

    YAML_UTF16LE_ENCODING,

    YAML_UTF16BE_ENCODING
} yaml_encoding_t;



typedef enum yaml_break_e {

    YAML_ANY_BREAK,

    YAML_CR_BREAK,

    YAML_LN_BREAK,

    YAML_CRLN_BREAK
} yaml_break_t;


typedef enum yaml_error_type_e {

    YAML_NO_ERROR,


    YAML_MEMORY_ERROR,


    YAML_READER_ERROR,

    YAML_SCANNER_ERROR,

    YAML_PARSER_ERROR,

    YAML_COMPOSER_ERROR,


    YAML_WRITER_ERROR,

    YAML_EMITTER_ERROR
} yaml_error_type_t;


typedef struct yaml_mark_s {

    size_t index;


    size_t line;


    size_t column;
} yaml_mark_t;
typedef enum yaml_scalar_style_e {

    YAML_ANY_SCALAR_STYLE,


    YAML_PLAIN_SCALAR_STYLE,


    YAML_SINGLE_QUOTED_SCALAR_STYLE,

    YAML_DOUBLE_QUOTED_SCALAR_STYLE,


    YAML_LITERAL_SCALAR_STYLE,

    YAML_FOLDED_SCALAR_STYLE
} yaml_scalar_style_t;


typedef enum yaml_sequence_style_e {

    YAML_ANY_SEQUENCE_STYLE,


    YAML_BLOCK_SEQUENCE_STYLE,

    YAML_FLOW_SEQUENCE_STYLE
} yaml_sequence_style_t;


typedef enum yaml_mapping_style_e {

    YAML_ANY_MAPPING_STYLE,


    YAML_BLOCK_MAPPING_STYLE,

    YAML_FLOW_MAPPING_STYLE

} yaml_mapping_style_t;
typedef enum yaml_token_type_e {

    YAML_NO_TOKEN,


    YAML_STREAM_START_TOKEN,

    YAML_STREAM_END_TOKEN,


    YAML_VERSION_DIRECTIVE_TOKEN,

    YAML_TAG_DIRECTIVE_TOKEN,

    YAML_DOCUMENT_START_TOKEN,

    YAML_DOCUMENT_END_TOKEN,


    YAML_BLOCK_SEQUENCE_START_TOKEN,

    YAML_BLOCK_MAPPING_START_TOKEN,

    YAML_BLOCK_END_TOKEN,


    YAML_FLOW_SEQUENCE_START_TOKEN,

    YAML_FLOW_SEQUENCE_END_TOKEN,

    YAML_FLOW_MAPPING_START_TOKEN,

    YAML_FLOW_MAPPING_END_TOKEN,


    YAML_BLOCK_ENTRY_TOKEN,

    YAML_FLOW_ENTRY_TOKEN,

    YAML_KEY_TOKEN,

    YAML_VALUE_TOKEN,


    YAML_ALIAS_TOKEN,

    YAML_ANCHOR_TOKEN,

    YAML_TAG_TOKEN,

    YAML_SCALAR_TOKEN
} yaml_token_type_t;


typedef struct yaml_token_s {


    yaml_token_type_t type;


    union {


        struct {

            yaml_encoding_t encoding;
        } stream_start;


        struct {

            yaml_char_t *value;
        } alias;


        struct {

            yaml_char_t *value;
        } anchor;


        struct {

            yaml_char_t *handle;

            yaml_char_t *suffix;
        } tag;


        struct {

            yaml_char_t *value;

            size_t length;

            yaml_scalar_style_t style;
        } scalar;


        struct {

            int major;

            int minor;
        } version_directive;


        struct {

            yaml_char_t *handle;

            yaml_char_t *prefix;
        } tag_directive;

    } data;


    yaml_mark_t start_mark;

    yaml_mark_t end_mark;

} yaml_token_t;







void
yaml_token_delete(int *data_flow, yaml_token_t *token);
typedef enum yaml_event_type_e {

    YAML_NO_EVENT,


    YAML_STREAM_START_EVENT,

    YAML_STREAM_END_EVENT,


    YAML_DOCUMENT_START_EVENT,

    YAML_DOCUMENT_END_EVENT,


    YAML_ALIAS_EVENT,

    YAML_SCALAR_EVENT,


    YAML_SEQUENCE_START_EVENT,

    YAML_SEQUENCE_END_EVENT,


    YAML_MAPPING_START_EVENT,

    YAML_MAPPING_END_EVENT
} yaml_event_type_t;


typedef struct yaml_event_s {


    yaml_event_type_t type;


    union {


        struct {

            yaml_encoding_t encoding;
        } stream_start;


        struct {

            yaml_version_directive_t *version_directive;


            struct {

                yaml_tag_directive_t *start;

                yaml_tag_directive_t *end;
            } tag_directives;


            int implicit;
        } document_start;


        struct {

            int implicit;
        } document_end;


        struct {

            yaml_char_t *anchor;
        } alias;


        struct {

            yaml_char_t *anchor;

            yaml_char_t *tag;

            yaml_char_t *value;

            size_t length;

            int plain_implicit;

            int quoted_implicit;

            yaml_scalar_style_t style;
        } scalar;


        struct {

            yaml_char_t *anchor;

            yaml_char_t *tag;

            int implicit;

            yaml_sequence_style_t style;
        } sequence_start;


        struct {

            yaml_char_t *anchor;

            yaml_char_t *tag;

            int implicit;

            yaml_mapping_style_t style;
        } mapping_start;

    } data;


    yaml_mark_t start_mark;

    yaml_mark_t end_mark;

} yaml_event_t;
int
yaml_stream_start_event_initialize(int *data_flow, yaml_event_t *event,
        yaml_encoding_t encoding);
int
yaml_stream_end_event_initialize(int *data_flow, yaml_event_t *event);
int
yaml_document_start_event_initialize(int *data_flow, yaml_event_t *event,
        yaml_version_directive_t *version_directive,
        yaml_tag_directive_t *tag_directives_start,
        yaml_tag_directive_t *tag_directives_end,
        int implicit);
int
yaml_document_end_event_initialize(int *data_flow, yaml_event_t *event, int implicit);
int
yaml_alias_event_initialize(int *data_flow, yaml_event_t *event, yaml_char_t *anchor);
int
yaml_scalar_event_initialize(int *data_flow, yaml_event_t *event,
        yaml_char_t *anchor, yaml_char_t *tag,
        yaml_char_t *value, int length,
        int plain_implicit, int quoted_implicit,
        yaml_scalar_style_t style);
int
yaml_sequence_start_event_initialize(int *data_flow, yaml_event_t *event,
        yaml_char_t *anchor, yaml_char_t *tag, int implicit,
        yaml_sequence_style_t style);
int
yaml_sequence_end_event_initialize(int *data_flow, yaml_event_t *event);
int
yaml_mapping_start_event_initialize(int *data_flow, yaml_event_t *event,
        yaml_char_t *anchor, yaml_char_t *tag, int implicit,
        yaml_mapping_style_t style);
int
yaml_mapping_end_event_initialize(int *data_flow, yaml_event_t *event);







void
yaml_event_delete(int *data_flow, yaml_event_t *event);
typedef enum yaml_node_type_e {

    YAML_NO_NODE,


    YAML_SCALAR_NODE,

    YAML_SEQUENCE_NODE,

    YAML_MAPPING_NODE
} yaml_node_type_t;


typedef struct yaml_node_s yaml_node_t;


typedef int yaml_node_item_t;


typedef struct yaml_node_pair_s {

    int key;

    int value;
} yaml_node_pair_t;


struct yaml_node_s {


    yaml_node_type_t type;


    yaml_char_t *tag;


    union {


        struct {

            yaml_char_t *value;

            size_t length;

            yaml_scalar_style_t style;
        } scalar;


        struct {

            struct {

                yaml_node_item_t *start;

                yaml_node_item_t *end;

                yaml_node_item_t *top;
            } items;

            yaml_sequence_style_t style;
        } sequence;


        struct {

            struct {

                yaml_node_pair_t *start;

                yaml_node_pair_t *end;

                yaml_node_pair_t *top;
            } pairs;

            yaml_mapping_style_t style;
        } mapping;

    } data;


    yaml_mark_t start_mark;

    yaml_mark_t end_mark;

};


typedef struct yaml_document_s {


    struct {

        yaml_node_t *start;

        yaml_node_t *end;

        yaml_node_t *top;
    } nodes;


    yaml_version_directive_t *version_directive;


    struct {

        yaml_tag_directive_t *start;

        yaml_tag_directive_t *end;
    } tag_directives;


    int start_implicit;

    int end_implicit;


    yaml_mark_t start_mark;

    yaml_mark_t end_mark;

} yaml_document_t;
int
yaml_document_initialize(int *data_flow, yaml_document_t *document,
        yaml_version_directive_t *version_directive,
        yaml_tag_directive_t *tag_directives_start,
        yaml_tag_directive_t *tag_directives_end,
        int start_implicit, int end_implicit);







void
yaml_document_delete(int *data_flow, yaml_document_t *document);
yaml_node_t *
yaml_document_get_node(int *data_flow, yaml_document_t *document, int index);
yaml_node_t *
yaml_document_get_root_node(int *data_flow, yaml_document_t *document);
int
yaml_document_add_scalar(int *data_flow, yaml_document_t *document,
        yaml_char_t *tag, yaml_char_t *value, int length,
        yaml_scalar_style_t style);
int
yaml_document_add_sequence(int *data_flow, yaml_document_t *document,
        yaml_char_t *tag, yaml_sequence_style_t style);
int
yaml_document_add_mapping(int *data_flow, yaml_document_t *document,
        yaml_char_t *tag, yaml_mapping_style_t style);
int
yaml_document_append_sequence_item(int *data_flow, yaml_document_t *document,
        int sequence, int item);
int
yaml_document_append_mapping_pair(int *data_flow, yaml_document_t *document,
        int mapping, int key, int value);
typedef int yaml_read_handler_t(int* data_flow, void *data, unsigned char *buffer, size_t size,
        size_t *size_read);





typedef struct yaml_simple_key_s {

    int possible;


    int required;


    size_t token_number;


    yaml_mark_t mark;
} yaml_simple_key_t;




typedef enum yaml_parser_state_e {

    YAML_PARSE_STREAM_START_STATE,

    YAML_PARSE_IMPLICIT_DOCUMENT_START_STATE,

    YAML_PARSE_DOCUMENT_START_STATE,

    YAML_PARSE_DOCUMENT_CONTENT_STATE,

    YAML_PARSE_DOCUMENT_END_STATE,

    YAML_PARSE_BLOCK_NODE_STATE,

    YAML_PARSE_BLOCK_NODE_OR_INDENTLESS_SEQUENCE_STATE,

    YAML_PARSE_FLOW_NODE_STATE,

    YAML_PARSE_BLOCK_SEQUENCE_FIRST_ENTRY_STATE,

    YAML_PARSE_BLOCK_SEQUENCE_ENTRY_STATE,

    YAML_PARSE_INDENTLESS_SEQUENCE_ENTRY_STATE,

    YAML_PARSE_BLOCK_MAPPING_FIRST_KEY_STATE,

    YAML_PARSE_BLOCK_MAPPING_KEY_STATE,

    YAML_PARSE_BLOCK_MAPPING_VALUE_STATE,

    YAML_PARSE_FLOW_SEQUENCE_FIRST_ENTRY_STATE,

    YAML_PARSE_FLOW_SEQUENCE_ENTRY_STATE,

    YAML_PARSE_FLOW_SEQUENCE_ENTRY_MAPPING_KEY_STATE,

    YAML_PARSE_FLOW_SEQUENCE_ENTRY_MAPPING_VALUE_STATE,

    YAML_PARSE_FLOW_SEQUENCE_ENTRY_MAPPING_END_STATE,

    YAML_PARSE_FLOW_MAPPING_FIRST_KEY_STATE,

    YAML_PARSE_FLOW_MAPPING_KEY_STATE,

    YAML_PARSE_FLOW_MAPPING_VALUE_STATE,

    YAML_PARSE_FLOW_MAPPING_EMPTY_VALUE_STATE,

    YAML_PARSE_END_STATE
} yaml_parser_state_t;





typedef struct yaml_alias_data_s {

    yaml_char_t *anchor;

    int index;

    yaml_mark_t mark;
} yaml_alias_data_t;
typedef struct yaml_parser_s {







    yaml_error_type_t error;

    const char *problem;

    size_t problem_offset;

    int problem_value;

    yaml_mark_t problem_mark;

    const char *context;

    yaml_mark_t context_mark;
    yaml_read_handler_t *read_handler;


    void *read_handler_data;


    union {

        struct {

            const unsigned char *start;

            const unsigned char *end;

            const unsigned char *current;
        } string;


        FILE *file;
    } input;


    int eof;


    struct {

        yaml_char_t *start;

        yaml_char_t *end;

        yaml_char_t *pointer;

        yaml_char_t *last;
    } buffer;


    size_t unread;


    struct {

        unsigned char *start;

        unsigned char *end;

        unsigned char *pointer;

        unsigned char *last;
    } raw_buffer;


    yaml_encoding_t encoding;


    size_t offset;


    yaml_mark_t mark;
    int stream_start_produced;


    int stream_end_produced;


    int flow_level;


    struct {

        yaml_token_t *start;

        yaml_token_t *end;

        yaml_token_t *head;

        yaml_token_t *tail;
    } tokens;


    size_t tokens_parsed;


    int token_available;


    struct {

        int *start;

        int *end;

        int *top;
    } indents;


    int indent;


    int simple_key_allowed;


    struct {

        yaml_simple_key_t *start;

        yaml_simple_key_t *end;

        yaml_simple_key_t *top;
    } simple_keys;
    struct {

        yaml_parser_state_t *start;

        yaml_parser_state_t *end;

        yaml_parser_state_t *top;
    } states;


    yaml_parser_state_t state;


    struct {

        yaml_mark_t *start;

        yaml_mark_t *end;

        yaml_mark_t *top;
    } marks;


    struct {

        yaml_tag_directive_t *start;

        yaml_tag_directive_t *end;

        yaml_tag_directive_t *top;
    } tag_directives;
    struct {

        yaml_alias_data_t *start;

        yaml_alias_data_t *end;

        yaml_alias_data_t *top;
    } aliases;


    yaml_document_t *document;





} yaml_parser_t;
int
yaml_parser_initialize(int *data_flow, yaml_parser_t *parser);







void
yaml_parser_delete(int *data_flow, yaml_parser_t *parser);
void
yaml_parser_set_input_string(int *data_flow, yaml_parser_t *parser,
        const unsigned char *input, size_t size);
void
yaml_parser_set_input_file(int *data_flow, yaml_parser_t *parser, FILE *file);
void
yaml_parser_set_input(int *data_flow, yaml_parser_t *parser,
        yaml_read_handler_t *handler, void *data);
void
yaml_parser_set_encoding(int *data_flow, yaml_parser_t *parser, yaml_encoding_t encoding);
int
yaml_parser_scan(int *data_flow, yaml_parser_t *parser, yaml_token_t *token);
int
yaml_parser_parse(int *data_flow, yaml_parser_t *parser, yaml_event_t *event);
int
yaml_parser_load(int *data_flow, yaml_parser_t *parser, yaml_document_t *document);
typedef int yaml_write_handler_t(int* data_flow, void *data, unsigned char *buffer, size_t size);


typedef enum yaml_emitter_state_e {

    YAML_EMIT_STREAM_START_STATE,

    YAML_EMIT_FIRST_DOCUMENT_START_STATE,

    YAML_EMIT_DOCUMENT_START_STATE,

    YAML_EMIT_DOCUMENT_CONTENT_STATE,

    YAML_EMIT_DOCUMENT_END_STATE,

    YAML_EMIT_FLOW_SEQUENCE_FIRST_ITEM_STATE,

    YAML_EMIT_FLOW_SEQUENCE_ITEM_STATE,

    YAML_EMIT_FLOW_MAPPING_FIRST_KEY_STATE,

    YAML_EMIT_FLOW_MAPPING_KEY_STATE,

    YAML_EMIT_FLOW_MAPPING_SIMPLE_VALUE_STATE,

    YAML_EMIT_FLOW_MAPPING_VALUE_STATE,

    YAML_EMIT_BLOCK_SEQUENCE_FIRST_ITEM_STATE,

    YAML_EMIT_BLOCK_SEQUENCE_ITEM_STATE,

    YAML_EMIT_BLOCK_MAPPING_FIRST_KEY_STATE,

    YAML_EMIT_BLOCK_MAPPING_KEY_STATE,

    YAML_EMIT_BLOCK_MAPPING_SIMPLE_VALUE_STATE,

    YAML_EMIT_BLOCK_MAPPING_VALUE_STATE,

    YAML_EMIT_END_STATE
} yaml_emitter_state_t;
typedef struct yaml_emitter_s {







    yaml_error_type_t error;

    const char *problem;
    yaml_write_handler_t *write_handler;


    void *write_handler_data;


    union {

        struct {

            unsigned char *buffer;

            size_t size;

            size_t *size_written;
        } string;


        FILE *file;
    } output;


    struct {

        yaml_char_t *start;

        yaml_char_t *end;

        yaml_char_t *pointer;

        yaml_char_t *last;
    } buffer;


    struct {

        unsigned char *start;

        unsigned char *end;

        unsigned char *pointer;

        unsigned char *last;
    } raw_buffer;


    yaml_encoding_t encoding;
    int canonical;

    int best_indent;

    int best_width;

    int unicode;

    yaml_break_t line_break;


    struct {

        yaml_emitter_state_t *start;

        yaml_emitter_state_t *end;

        yaml_emitter_state_t *top;
    } states;


    yaml_emitter_state_t state;


    struct {

        yaml_event_t *start;

        yaml_event_t *end;

        yaml_event_t *head;

        yaml_event_t *tail;
    } events;


    struct {

        int *start;

        int *end;

        int *top;
    } indents;


    struct {

        yaml_tag_directive_t *start;

        yaml_tag_directive_t *end;

        yaml_tag_directive_t *top;
    } tag_directives;


    int indent;


    int flow_level;


    int root_context;

    int sequence_context;

    int mapping_context;

    int simple_key_context;


    int line;

    int column;

    int whitespace;

    int indention;

    int open_ended;


    struct {

        yaml_char_t *anchor;

        size_t anchor_length;

        int alias;
    } anchor_data;


    struct {

        yaml_char_t *handle;

        size_t handle_length;

        yaml_char_t *suffix;

        size_t suffix_length;
    } tag_data;


    struct {

        yaml_char_t *value;

        size_t length;

        int multiline;

        int flow_plain_allowed;

        int block_plain_allowed;

        int single_quoted_allowed;

        int block_allowed;

        yaml_scalar_style_t style;
    } scalar_data;
    int opened;

    int closed;


    struct {

        int references;

        int anchor;

        int serialized;
    } *anchors;


    int last_anchor_id;


    yaml_document_t *document;





} yaml_emitter_t;
int
yaml_emitter_initialize(int *data_flow, yaml_emitter_t *emitter);







void
yaml_emitter_delete(int *data_flow, yaml_emitter_t *emitter);
void
yaml_emitter_set_output_string(int *data_flow, yaml_emitter_t *emitter,
        unsigned char *output, size_t size, size_t *size_written);
void
yaml_emitter_set_output_file(int *data_flow, yaml_emitter_t *emitter, FILE *file);
void
yaml_emitter_set_output(int *data_flow, yaml_emitter_t *emitter,
        yaml_write_handler_t *handler, void *data);
void
yaml_emitter_set_encoding(int *data_flow, yaml_emitter_t *emitter, yaml_encoding_t encoding);
void
yaml_emitter_set_canonical(int *data_flow, yaml_emitter_t *emitter, int canonical);
void
yaml_emitter_set_indent(int *data_flow, yaml_emitter_t *emitter, int indent);
void
yaml_emitter_set_width(int *data_flow, yaml_emitter_t *emitter, int width);
void
yaml_emitter_set_unicode(int *data_flow, yaml_emitter_t *emitter, int unicode);
void
yaml_emitter_set_break(int *data_flow, yaml_emitter_t *emitter, yaml_break_t line_break);
int
yaml_emitter_emit(int *data_flow, yaml_emitter_t *emitter, yaml_event_t *event);
int
yaml_emitter_open(int *data_flow, yaml_emitter_t *emitter);
int
yaml_emitter_close(int *data_flow, yaml_emitter_t *emitter);
int
yaml_emitter_dump(int *data_flow, yaml_emitter_t *emitter, yaml_document_t *document);
int
yaml_emitter_flush(int *data_flow, yaml_emitter_t *emitter);





extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));


extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));




extern void __assert (const char *__assertion, const char *__file, int __line)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));












typedef int ptrdiff_t;
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
} max_align_t;






void *
yaml_malloc(int *data_flow, size_t size);

void *
yaml_realloc(int *data_flow, void *ptr, size_t size);

void
yaml_free(int *data_flow, void *ptr);

yaml_char_t *
yaml_strdup(int *data_flow, const yaml_char_t *);





int
yaml_parser_update_buffer(int *data_flow, yaml_parser_t *parser, size_t length);





int
yaml_parser_fetch_more_tokens(int *data_flow, yaml_parser_t *parser);
typedef struct {
    yaml_char_t *start;
    yaml_char_t *end;
    yaml_char_t *pointer;
} yaml_string_t;

int
yaml_string_extend(int *data_flow, yaml_char_t **start,
        yaml_char_t **pointer, yaml_char_t **end);

int
yaml_string_join(int *data_flow, 
        yaml_char_t **a_start, yaml_char_t **a_pointer, yaml_char_t **a_end,
        yaml_char_t **b_start, yaml_char_t **b_pointer, yaml_char_t **b_end);
int
yaml_stack_extend(int *data_flow, void **start, void **top, void **end);

int
yaml_queue_extend(int *data_flow, void **start, void **head, void **tail, void **end);





const char *
yaml_get_version_string(int *data_flowvoid)
{
    return "0.1.7";
}





void
yaml_get_version(int *data_flow, int *major, int *minor, int *patch)
{
    *major = 0;
    *minor = 1;
    *patch = 7;
}





void *
yaml_malloc(int *data_flow, size_t size)
{
    return malloc(size ? size : 1);
}





void *
yaml_realloc(int *data_flow, void *ptr, size_t size)
{
    return ptr ? realloc(ptr, size ? size : 1) : malloc(size ? size : 1);
}





void
yaml_free(int *data_flow, void *ptr)
{
    if (ptr) free(ptr);
}





yaml_char_t *
yaml_strdup(int *data_flow, const yaml_char_t *str)
{
    if (!str)
        return 
              ((void *)0)
                  ;

    return (yaml_char_t *)strdup((char *)str);
}





int
yaml_string_extend(int *data_flow, yaml_char_t **start,
        yaml_char_t **pointer, yaml_char_t **end)
{
    yaml_char_t *new_start = (yaml_char_t *)yaml_realloc(data_flow, (void*)*start, (*end - *start)*2);

    if (!new_start) return 0;

    memset(new_start + (*end - *start), 0, *end - *start);

    *pointer = new_start + (*pointer - *start);
    *end = new_start + (*end - *start)*2;
    *start = new_start;

    return 1;
}





int
yaml_string_join(int *data_flow, 
        yaml_char_t **a_start, yaml_char_t **a_pointer, yaml_char_t **a_end,
        yaml_char_t **b_start, yaml_char_t **b_pointer, yaml_char_t **b_end __attribute__((__unused__)))
{
    if (0) (void)(b_end) ;
    if (*b_start == *b_pointer)
        return 1;

    while (*a_end - *a_pointer <= *b_pointer - *b_start) {
        if (!yaml_string_extend(data_flow, a_start, a_pointer, a_end))
            return 0;
    }

    memcpy(*a_pointer, *b_start, *b_pointer - *b_start);
    *a_pointer += *b_pointer - *b_start;

    return 1;
}





int
yaml_stack_extend(int *data_flow, void **start, void **top, void **end)
{
    void *new_start = yaml_realloc(data_flow, *start, ((char *)*end - (char *)*start)*2);

    if (!new_start) return 0;

    *top = (char *)new_start + ((char *)*top - (char *)*start);
    *end = (char *)new_start + ((char *)*end - (char *)*start)*2;
    *start = new_start;

    return 1;
}





int
yaml_queue_extend(int *data_flow, void **start, void **head, void **tail, void **end)
{


    if (*start == *head && *tail == *end) {
        void *new_start = yaml_realloc(data_flow, *start,
                ((char *)*end - (char *)*start)*2);

        if (!new_start) return 0;

        *head = (char *)new_start + ((char *)*head - (char *)*start);
        *tail = (char *)new_start + ((char *)*tail - (char *)*start);
        *end = (char *)new_start + ((char *)*end - (char *)*start)*2;
        *start = new_start;
    }



    if (*tail == *end) {
        if (*head != *tail) {
            memmove(*start, *head, (char *)*tail - (char *)*head);
        }
        *tail = (char *)*tail - (char *)*head + (char *)*start;
        *head = *start;
    }

    return 1;
}






int
yaml_parser_initialize(int *data_flow, yaml_parser_t *parser)
{
    
   ((
   parser
   ) ? (void) (0) : __assert_fail (
   "parser"
   , "api.c", 174, __PRETTY_FUNCTION__))
                 ;

    memset(parser, 0, sizeof(yaml_parser_t));
    if (!(((parser->raw_buffer).start = (yaml_char_t *)yaml_malloc(data_flow, 16384)) ? ((parser->raw_buffer).last = (parser->raw_buffer).pointer = (parser->raw_buffer).start, (parser->raw_buffer).end = (parser->raw_buffer).start+(16384), 1) : ((parser)->error = YAML_MEMORY_ERROR, 0)))
        goto error;
    if (!(((parser->buffer).start = (yaml_char_t *)yaml_malloc(data_flow, (16384*3))) ? ((parser->buffer).last = (parser->buffer).pointer = (parser->buffer).start, (parser->buffer).end = (parser->buffer).start+((16384*3)), 1) : ((parser)->error = YAML_MEMORY_ERROR, 0)))
        goto error;
    if (!(((parser->tokens).start = (yaml_token_t*)yaml_malloc(data_flow, (16)*sizeof(*(parser->tokens).start))) ? ((parser->tokens).head = (parser->tokens).tail = (parser->tokens).start, (parser->tokens).end = (parser->tokens).start+(16), 1) : ((parser)->error = YAML_MEMORY_ERROR, 0)))
        goto error;
    if (!(((parser->indents).start = (int*)yaml_malloc(data_flow, 16*sizeof(*(parser->indents).start))) ? ((parser->indents).top = (parser->indents).start, (parser->indents).end = (parser->indents).start+16, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0)))
        goto error;
    if (!(((parser->simple_keys).start = (yaml_simple_key_t*)yaml_malloc(data_flow, 16*sizeof(*(parser->simple_keys).start))) ? ((parser->simple_keys).top = (parser->simple_keys).start, (parser->simple_keys).end = (parser->simple_keys).start+16, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0)))
        goto error;
    if (!(((parser->states).start = (yaml_parser_state_t*)yaml_malloc(data_flow, 16*sizeof(*(parser->states).start))) ? ((parser->states).top = (parser->states).start, (parser->states).end = (parser->states).start+16, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0)))
        goto error;
    if (!(((parser->marks).start = (yaml_mark_t*)yaml_malloc(data_flow, 16*sizeof(*(parser->marks).start))) ? ((parser->marks).top = (parser->marks).start, (parser->marks).end = (parser->marks).start+16, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0)))
        goto error;
    if (!(((parser->tag_directives).start = (yaml_tag_directive_t*)yaml_malloc(data_flow, 16*sizeof(*(parser->tag_directives).start))) ? ((parser->tag_directives).top = (parser->tag_directives).start, (parser->tag_directives).end = (parser->tag_directives).start+16, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0)))
        goto error;

    return 1;

error:

    (yaml_free(data_flow, (parser->raw_buffer).start), (parser->raw_buffer).start = (parser->raw_buffer).pointer = (parser->raw_buffer).end = 0);
    (yaml_free(data_flow, (parser->buffer).start), (parser->buffer).start = (parser->buffer).pointer = (parser->buffer).end = 0);
    (yaml_free(data_flow, (parser->tokens).start), (parser->tokens).start = (parser->tokens).head = (parser->tokens).tail = (parser->tokens).end = 0);
    (yaml_free(data_flow, (parser->indents).start), (parser->indents).start = (parser->indents).top = (parser->indents).end = 0);
    (yaml_free(data_flow, (parser->simple_keys).start), (parser->simple_keys).start = (parser->simple_keys).top = (parser->simple_keys).end = 0);
    (yaml_free(data_flow, (parser->states).start), (parser->states).start = (parser->states).top = (parser->states).end = 0);
    (yaml_free(data_flow, (parser->marks).start), (parser->marks).start = (parser->marks).top = (parser->marks).end = 0);
    (yaml_free(data_flow, (parser->tag_directives).start), (parser->tag_directives).start = (parser->tag_directives).top = (parser->tag_directives).end = 0);

    return 0;
}





void
yaml_parser_delete(int *data_flow, yaml_parser_t *parser)
{
    
   ((
   parser
   ) ? (void) (0) : __assert_fail (
   "parser"
   , "api.c", 217, __PRETTY_FUNCTION__))
                 ;

    (yaml_free(data_flow, (parser->raw_buffer).start), (parser->raw_buffer).start = (parser->raw_buffer).pointer = (parser->raw_buffer).end = 0);
    (yaml_free(data_flow, (parser->buffer).start), (parser->buffer).start = (parser->buffer).pointer = (parser->buffer).end = 0);
    while (!((parser->tokens).head == (parser->tokens).tail)) {
        yaml_token_delete(data_flow, &(*((parser->tokens).head++)));
    }
    (yaml_free(data_flow, (parser->tokens).start), (parser->tokens).start = (parser->tokens).head = (parser->tokens).tail = (parser->tokens).end = 0);
    (yaml_free(data_flow, (parser->indents).start), (parser->indents).start = (parser->indents).top = (parser->indents).end = 0);
    (yaml_free(data_flow, (parser->simple_keys).start), (parser->simple_keys).start = (parser->simple_keys).top = (parser->simple_keys).end = 0);
    (yaml_free(data_flow, (parser->states).start), (parser->states).start = (parser->states).top = (parser->states).end = 0);
    (yaml_free(data_flow, (parser->marks).start), (parser->marks).start = (parser->marks).top = (parser->marks).end = 0);
    while (!((parser->tag_directives).start == (parser->tag_directives).top)) {
        yaml_tag_directive_t tag_directive = (*(--(parser->tag_directives).top));
        yaml_free(data_flow, tag_directive.handle);
        yaml_free(data_flow, tag_directive.prefix);
    }
    (yaml_free(data_flow, (parser->tag_directives).start), (parser->tag_directives).start = (parser->tag_directives).top = (parser->tag_directives).end = 0);

    memset(parser, 0, sizeof(yaml_parser_t));
}





static int
yaml_string_read_handler(int *data_flow, void *data, unsigned char *buffer, size_t size,
        size_t *size_read)
{
    yaml_parser_t *parser = (yaml_parser_t *)data;

    if (parser->input.string.current == parser->input.string.end) {
        *size_read = 0;
        return 1;
    }

    if (size > (size_t)(parser->input.string.end
                - parser->input.string.current)) {
        size = parser->input.string.end - parser->input.string.current;
    }

    memcpy(buffer, parser->input.string.current, size);
    parser->input.string.current += size;
    *size_read = size;
    return 1;
}





static int
yaml_file_read_handler(int *data_flow, void *data, unsigned char *buffer, size_t size,
        size_t *size_read)
{
    yaml_parser_t *parser = (yaml_parser_t *)data;

    *size_read = fread(buffer, 1, size, parser->input.file);
    if (buffer) {
data_flow[27] = *(const unsigned int *)buffer;
}
if (buffer) {
data_flow[9] = *((const unsigned int *)buffer + 1);
}
if ( (parser) && (((*parser).raw_buffer).start)) {
data_flow[6] = *((const unsigned int *)(((*parser).raw_buffer).start) + 2);
}
if ( (parser) && (((*parser).raw_buffer).last)) {
data_flow[5] = *((const unsigned int *)(((*parser).raw_buffer).last) + 1);
}
return !ferror(parser->input.file);
}





void
yaml_parser_set_input_string(int *data_flow, yaml_parser_t *parser,
        const unsigned char *input, size_t size)
{
    
   ((
   parser
   ) ? (void) (0) : __assert_fail (
   "parser"
   , "api.c", 287, __PRETTY_FUNCTION__))
                 ;
    
   ((
   !parser->read_handler
   ) ? (void) (0) : __assert_fail (
   "!parser->read_handler"
   , "api.c", 288, __PRETTY_FUNCTION__))
                                ;
    
   ((
   input
   ) ? (void) (0) : __assert_fail (
   "input"
   , "api.c", 289, __PRETTY_FUNCTION__))
                ;

    parser->read_handler = yaml_string_read_handler;
    parser->read_handler_data = parser;

    parser->input.string.start = input;
    parser->input.string.current = input;
    parser->input.string.end = input+size;
}





void
yaml_parser_set_input_file(int *data_flow, yaml_parser_t *parser, FILE *file)
{
    
   ((
   parser
   ) ? (void) (0) : __assert_fail (
   "parser"
   , "api.c", 306, __PRETTY_FUNCTION__))
                 ;
    
   ((
   !parser->read_handler
   ) ? (void) (0) : __assert_fail (
   "!parser->read_handler"
   , "api.c", 307, __PRETTY_FUNCTION__))
                                ;
    
   ((
   file
   ) ? (void) (0) : __assert_fail (
   "file"
   , "api.c", 308, __PRETTY_FUNCTION__))
               ;

    parser->read_handler = yaml_file_read_handler;
    parser->read_handler_data = parser;

    parser->input.file = file;
}





void
yaml_parser_set_input(int *data_flow, yaml_parser_t *parser,
        yaml_read_handler_t *handler, void *data)
{
    
   ((
   parser
   ) ? (void) (0) : __assert_fail (
   "parser"
   , "api.c", 324, __PRETTY_FUNCTION__))
                 ;
    
   ((
   !parser->read_handler
   ) ? (void) (0) : __assert_fail (
   "!parser->read_handler"
   , "api.c", 325, __PRETTY_FUNCTION__))
                                ;
    
   ((
   handler
   ) ? (void) (0) : __assert_fail (
   "handler"
   , "api.c", 326, __PRETTY_FUNCTION__))
                  ;

    parser->read_handler = handler;
    parser->read_handler_data = data;
}





void
yaml_parser_set_encoding(int *data_flow, yaml_parser_t *parser, yaml_encoding_t encoding)
{
    
   ((
   parser
   ) ? (void) (0) : __assert_fail (
   "parser"
   , "api.c", 339, __PRETTY_FUNCTION__))
                 ;
    
   ((
   !parser->encoding
   ) ? (void) (0) : __assert_fail (
   "!parser->encoding"
   , "api.c", 340, __PRETTY_FUNCTION__))
                            ;

    parser->encoding = encoding;
}





int
yaml_emitter_initialize(int *data_flow, yaml_emitter_t *emitter)
{
    
   ((
   emitter
   ) ? (void) (0) : __assert_fail (
   "emitter"
   , "api.c", 352, __PRETTY_FUNCTION__))
                  ;

    memset(emitter, 0, sizeof(yaml_emitter_t));
    if (!(((emitter->buffer).start = (yaml_char_t *)yaml_malloc(data_flow, 16384)) ? ((emitter->buffer).last = (emitter->buffer).pointer = (emitter->buffer).start, (emitter->buffer).end = (emitter->buffer).start+(16384), 1) : ((emitter)->error = YAML_MEMORY_ERROR, 0)))
        goto error;
    if (!(((emitter->raw_buffer).start = (yaml_char_t *)yaml_malloc(data_flow, (16384*2+2))) ? ((emitter->raw_buffer).last = (emitter->raw_buffer).pointer = (emitter->raw_buffer).start, (emitter->raw_buffer).end = (emitter->raw_buffer).start+((16384*2+2)), 1) : ((emitter)->error = YAML_MEMORY_ERROR, 0)))
        goto error;
    if (!(((emitter->states).start = (yaml_emitter_state_t*)yaml_malloc(data_flow, 16*sizeof(*(emitter->states).start))) ? ((emitter->states).top = (emitter->states).start, (emitter->states).end = (emitter->states).start+16, 1) : ((emitter)->error = YAML_MEMORY_ERROR, 0)))
        goto error;
    if (!(((emitter->events).start = (yaml_event_t*)yaml_malloc(data_flow, (16)*sizeof(*(emitter->events).start))) ? ((emitter->events).head = (emitter->events).tail = (emitter->events).start, (emitter->events).end = (emitter->events).start+(16), 1) : ((emitter)->error = YAML_MEMORY_ERROR, 0)))
        goto error;
    if (!(((emitter->indents).start = (int*)yaml_malloc(data_flow, 16*sizeof(*(emitter->indents).start))) ? ((emitter->indents).top = (emitter->indents).start, (emitter->indents).end = (emitter->indents).start+16, 1) : ((emitter)->error = YAML_MEMORY_ERROR, 0)))
        goto error;
    if (!(((emitter->tag_directives).start = (yaml_tag_directive_t*)yaml_malloc(data_flow, 16*sizeof(*(emitter->tag_directives).start))) ? ((emitter->tag_directives).top = (emitter->tag_directives).start, (emitter->tag_directives).end = (emitter->tag_directives).start+16, 1) : ((emitter)->error = YAML_MEMORY_ERROR, 0)))
        goto error;

    return 1;

error:

    (yaml_free(data_flow, (emitter->buffer).start), (emitter->buffer).start = (emitter->buffer).pointer = (emitter->buffer).end = 0);
    (yaml_free(data_flow, (emitter->raw_buffer).start), (emitter->raw_buffer).start = (emitter->raw_buffer).pointer = (emitter->raw_buffer).end = 0);
    (yaml_free(data_flow, (emitter->states).start), (emitter->states).start = (emitter->states).top = (emitter->states).end = 0);
    (yaml_free(data_flow, (emitter->events).start), (emitter->events).start = (emitter->events).head = (emitter->events).tail = (emitter->events).end = 0);
    (yaml_free(data_flow, (emitter->indents).start), (emitter->indents).start = (emitter->indents).top = (emitter->indents).end = 0);
    (yaml_free(data_flow, (emitter->tag_directives).start), (emitter->tag_directives).start = (emitter->tag_directives).top = (emitter->tag_directives).end = 0);

    return 0;
}





void
yaml_emitter_delete(int *data_flow, yaml_emitter_t *emitter)
{
    
   ((
   emitter
   ) ? (void) (0) : __assert_fail (
   "emitter"
   , "api.c", 389, __PRETTY_FUNCTION__))
                  ;

    (yaml_free(data_flow, (emitter->buffer).start), (emitter->buffer).start = (emitter->buffer).pointer = (emitter->buffer).end = 0);
    (yaml_free(data_flow, (emitter->raw_buffer).start), (emitter->raw_buffer).start = (emitter->raw_buffer).pointer = (emitter->raw_buffer).end = 0);
    (yaml_free(data_flow, (emitter->states).start), (emitter->states).start = (emitter->states).top = (emitter->states).end = 0);
    while (!((emitter->events).head == (emitter->events).tail)) {
        yaml_event_delete(data_flow, &(*((emitter->events).head++)));
    }
    (yaml_free(data_flow, (emitter->events).start), (emitter->events).start = (emitter->events).head = (emitter->events).tail = (emitter->events).end = 0);
    (yaml_free(data_flow, (emitter->indents).start), (emitter->indents).start = (emitter->indents).top = (emitter->indents).end = 0);
    while (!((emitter->tag_directives).start == (emitter->tag_directives).top)) {
        yaml_tag_directive_t tag_directive = (*(--(emitter->tag_directives).top));
        yaml_free(data_flow, tag_directive.handle);
        yaml_free(data_flow, tag_directive.prefix);
    }
    (yaml_free(data_flow, (emitter->tag_directives).start), (emitter->tag_directives).start = (emitter->tag_directives).top = (emitter->tag_directives).end = 0);
    yaml_free(data_flow, emitter->anchors);

    memset(emitter, 0, sizeof(yaml_emitter_t));
}





static int
yaml_string_write_handler(int *data_flow, void *data, unsigned char *buffer, size_t size)
{
  yaml_emitter_t *emitter = (yaml_emitter_t *)data;

    if (emitter->output.string.size - *emitter->output.string.size_written
            < size) {
        memcpy(emitter->output.string.buffer
                + *emitter->output.string.size_written,
                buffer,
                emitter->output.string.size
                - *emitter->output.string.size_written);
        *emitter->output.string.size_written = emitter->output.string.size;
        return 0;
    }

    memcpy(emitter->output.string.buffer
            + *emitter->output.string.size_written, buffer, size);
    *emitter->output.string.size_written += size;
    return 1;
}





static int
yaml_file_write_handler(int *data_flow, void *data, unsigned char *buffer, size_t size)
{
    yaml_emitter_t *emitter = (yaml_emitter_t *)data;

    return (fwrite(buffer, 1, size, emitter->output.file) == size);
}




void
yaml_emitter_set_output_string(int *data_flow, yaml_emitter_t *emitter,
        unsigned char *output, size_t size, size_t *size_written)
{
    
   ((
   emitter
   ) ? (void) (0) : __assert_fail (
   "emitter"
   , "api.c", 455, __PRETTY_FUNCTION__))
                  ;
    
   ((
   !emitter->write_handler
   ) ? (void) (0) : __assert_fail (
   "!emitter->write_handler"
   , "api.c", 456, __PRETTY_FUNCTION__))
                                  ;
    
   ((
   output
   ) ? (void) (0) : __assert_fail (
   "output"
   , "api.c", 457, __PRETTY_FUNCTION__))
                 ;

    emitter->write_handler = yaml_string_write_handler;
    emitter->write_handler_data = emitter;

    emitter->output.string.buffer = output;
    emitter->output.string.size = size;
    emitter->output.string.size_written = size_written;
    *size_written = 0;
}





void
yaml_emitter_set_output_file(int *data_flow, yaml_emitter_t *emitter, FILE *file)
{
    
   ((
   emitter
   ) ? (void) (0) : __assert_fail (
   "emitter"
   , "api.c", 475, __PRETTY_FUNCTION__))
                  ;
    
   ((
   !emitter->write_handler
   ) ? (void) (0) : __assert_fail (
   "!emitter->write_handler"
   , "api.c", 476, __PRETTY_FUNCTION__))
                                  ;
    
   ((
   file
   ) ? (void) (0) : __assert_fail (
   "file"
   , "api.c", 477, __PRETTY_FUNCTION__))
               ;

    emitter->write_handler = yaml_file_write_handler;
    emitter->write_handler_data = emitter;

    emitter->output.file = file;
}





void
yaml_emitter_set_output(int *data_flow, yaml_emitter_t *emitter,
        yaml_write_handler_t *handler, void *data)
{
    
   ((
   emitter
   ) ? (void) (0) : __assert_fail (
   "emitter"
   , "api.c", 493, __PRETTY_FUNCTION__))
                  ;
    
   ((
   !emitter->write_handler
   ) ? (void) (0) : __assert_fail (
   "!emitter->write_handler"
   , "api.c", 494, __PRETTY_FUNCTION__))
                                  ;
    
   ((
   handler
   ) ? (void) (0) : __assert_fail (
   "handler"
   , "api.c", 495, __PRETTY_FUNCTION__))
                  ;

    emitter->write_handler = handler;
    emitter->write_handler_data = data;
}





void
yaml_emitter_set_encoding(int *data_flow, yaml_emitter_t *emitter, yaml_encoding_t encoding)
{
    
   ((
   emitter
   ) ? (void) (0) : __assert_fail (
   "emitter"
   , "api.c", 508, __PRETTY_FUNCTION__))
                  ;
    
   ((
   !emitter->encoding
   ) ? (void) (0) : __assert_fail (
   "!emitter->encoding"
   , "api.c", 509, __PRETTY_FUNCTION__))
                             ;

    emitter->encoding = encoding;
}





void
yaml_emitter_set_canonical(int *data_flow, yaml_emitter_t *emitter, int canonical)
{
    
   ((
   emitter
   ) ? (void) (0) : __assert_fail (
   "emitter"
   , "api.c", 521, __PRETTY_FUNCTION__))
                  ;

    emitter->canonical = (canonical != 0);
}





void
yaml_emitter_set_indent(int *data_flow, yaml_emitter_t *emitter, int indent)
{
    
   ((
   emitter
   ) ? (void) (0) : __assert_fail (
   "emitter"
   , "api.c", 533, __PRETTY_FUNCTION__))
                  ;

    emitter->best_indent = (1 < indent && indent < 10) ? indent : 2;
}





void
yaml_emitter_set_width(int *data_flow, yaml_emitter_t *emitter, int width)
{
    
   ((
   emitter
   ) ? (void) (0) : __assert_fail (
   "emitter"
   , "api.c", 545, __PRETTY_FUNCTION__))
                  ;

    emitter->best_width = (width >= 0) ? width : -1;
}





void
yaml_emitter_set_unicode(int *data_flow, yaml_emitter_t *emitter, int unicode)
{
    
   ((
   emitter
   ) ? (void) (0) : __assert_fail (
   "emitter"
   , "api.c", 557, __PRETTY_FUNCTION__))
                  ;

    emitter->unicode = (unicode != 0);
}





void
yaml_emitter_set_break(int *data_flow, yaml_emitter_t *emitter, yaml_break_t line_break)
{
    
   ((
   emitter
   ) ? (void) (0) : __assert_fail (
   "emitter"
   , "api.c", 569, __PRETTY_FUNCTION__))
                  ;

    emitter->line_break = line_break;
}





void
yaml_token_delete(int *data_flow, yaml_token_t *token)
{
    
   ((
   token
   ) ? (void) (0) : __assert_fail (
   "token"
   , "api.c", 581, __PRETTY_FUNCTION__))
                ;

    switch (token->type)
    {
        case YAML_TAG_DIRECTIVE_TOKEN:
            yaml_free(data_flow, token->data.tag_directive.handle);
            yaml_free(data_flow, token->data.tag_directive.prefix);
            break;

        case YAML_ALIAS_TOKEN:
            yaml_free(data_flow, token->data.alias.value);
            break;

        case YAML_ANCHOR_TOKEN:
            yaml_free(data_flow, token->data.anchor.value);
            break;

        case YAML_TAG_TOKEN:
            yaml_free(data_flow, token->data.tag.handle);
            yaml_free(data_flow, token->data.tag.suffix);
            break;

        case YAML_SCALAR_TOKEN:
            yaml_free(data_flow, token->data.scalar.value);
            break;

        default:
            break;
    }

    memset(token, 0, sizeof(yaml_token_t));
}







static int
yaml_check_utf8(int *data_flow, yaml_char_t *start, size_t length)
{
    yaml_char_t *end = start+length;
    yaml_char_t *pointer = start;

    while (pointer < end) {
        unsigned char octet={0};
        unsigned int width={0};
        unsigned int value={0};
        size_t k={0};

        octet = pointer[0];
        width = (octet & 0x80) == 0x00 ? 1 :
                (octet & 0xE0) == 0xC0 ? 2 :
                (octet & 0xF0) == 0xE0 ? 3 :
                (octet & 0xF8) == 0xF0 ? 4 : 0;
        value = (octet & 0x80) == 0x00 ? octet & 0x7F :
                (octet & 0xE0) == 0xC0 ? octet & 0x1F :
                (octet & 0xF0) == 0xE0 ? octet & 0x0F :
                (octet & 0xF8) == 0xF0 ? octet & 0x07 : 0;
        if (!width) return 0;
        if (pointer+width > end) return 0;
        for (k = 1; k < width; k ++) {
            octet = pointer[k];
            if ((octet & 0xC0) != 0x80) return 0;
            value = (value << 6) + (octet & 0x3F);
        }
        if (!((width == 1) ||
            (width == 2 && value >= 0x80) ||
            (width == 3 && value >= 0x800) ||
            (width == 4 && value >= 0x10000))) return 0;

        pointer += width;
    }

    return 1;
}





int
yaml_stream_start_event_initialize(int *data_flow, yaml_event_t *event,
        yaml_encoding_t encoding)
{
    yaml_mark_t mark = { 0, 0, 0 };

    
   ((
   event
   ) ? (void) (0) : __assert_fail (
   "event"
   , "api.c", 669, __PRETTY_FUNCTION__))
                ;

    ((memset(&((*event)), 0, sizeof(yaml_event_t)), ((*event)).type = (YAML_STREAM_START_EVENT), ((*event)).start_mark = ((mark)), ((*event)).end_mark = ((mark))), (*event).data.stream_start.encoding = (encoding));

    return 1;
}





int
yaml_stream_end_event_initialize(int *data_flow, yaml_event_t *event)
{
    yaml_mark_t mark = { 0, 0, 0 };

    
   ((
   event
   ) ? (void) (0) : __assert_fail (
   "event"
   , "api.c", 685, __PRETTY_FUNCTION__))
                ;

    ((memset(&((*event)), 0, sizeof(yaml_event_t)), ((*event)).type = (YAML_STREAM_END_EVENT), ((*event)).start_mark = ((mark)), ((*event)).end_mark = ((mark))));

    return 1;
}





int
yaml_document_start_event_initialize(int *data_flow, yaml_event_t *event,
        yaml_version_directive_t *version_directive,
        yaml_tag_directive_t *tag_directives_start,
        yaml_tag_directive_t *tag_directives_end,
        int implicit)
{
    struct {
        yaml_error_type_t error;
    } context={0};
    yaml_mark_t mark = { 0, 0, 0 };
    yaml_version_directive_t *version_directive_copy = 
                                                      ((void *)0)
                                                          ;
    struct {
        yaml_tag_directive_t *start;
        yaml_tag_directive_t *end;
        yaml_tag_directive_t *top;
    } tag_directives_copy = { 
                             ((void *)0)
                                 , 
                                   ((void *)0)
                                       , 
                                         ((void *)0) 
                                              };
    yaml_tag_directive_t value = { 
                                  ((void *)0)
                                      , 
                                        ((void *)0) 
                                             };

    
   ((
   event
   ) ? (void) (0) : __assert_fail (
   "event"
   , "api.c", 715, __PRETTY_FUNCTION__))
                ;
    
   ((
   (tag_directives_start && tag_directives_end) || (tag_directives_start == tag_directives_end)
   ) ? (void) (0) : __assert_fail (
   "(tag_directives_start && tag_directives_end) || (tag_directives_start == tag_directives_end)"
   ,
                                                        "api.c"
    ,
                                                        717
    , __PRETTY_FUNCTION__))
                                                         
                                                        ;


    if (version_directive) {
        version_directive_copy = (yaml_version_directive_t*)yaml_malloc(data_flow, sizeof(yaml_version_directive_t));
        if (!version_directive_copy) goto error;
        version_directive_copy->major = version_directive->major;
        version_directive_copy->minor = version_directive->minor;
    }

    if (tag_directives_start != tag_directives_end) {
        yaml_tag_directive_t *tag_directive={0};
        if (!(((tag_directives_copy).start = (yaml_tag_directive_t*)yaml_malloc(data_flow, 16*sizeof(*(tag_directives_copy).start))) ? ((tag_directives_copy).top = (tag_directives_copy).start, (tag_directives_copy).end = (tag_directives_copy).start+16, 1) : ((&context)->error = YAML_MEMORY_ERROR, 0)))
            goto error;
        for (tag_directive = tag_directives_start;
                tag_directive != tag_directives_end; tag_directive ++) {
            
           ((
           tag_directive->handle
           ) ? (void) (0) : __assert_fail (
           "tag_directive->handle"
           , "api.c", 733, __PRETTY_FUNCTION__))
                                        ;
            
           ((
           tag_directive->prefix
           ) ? (void) (0) : __assert_fail (
           "tag_directive->prefix"
           , "api.c", 734, __PRETTY_FUNCTION__))
                                        ;
            if (!yaml_check_utf8(data_flow, tag_directive->handle,
                        strlen((char *)tag_directive->handle)))
                goto error;
            if (!yaml_check_utf8(data_flow, tag_directive->prefix,
                        strlen((char *)tag_directive->prefix)))
                goto error;
            value.handle = yaml_strdup(data_flow, tag_directive->handle);
            value.prefix = yaml_strdup(data_flow, tag_directive->prefix);
            if (!value.handle || !value.prefix) goto error;
            if (!(((tag_directives_copy).top != (tag_directives_copy).end || yaml_stack_extend(data_flow, (void **)&(tag_directives_copy).start, (void **)&(tag_directives_copy).top, (void **)&(tag_directives_copy).end)) ? (*((tag_directives_copy).top++) = value, 1) : ((&context)->error = YAML_MEMORY_ERROR, 0)))
                goto error;
            value.handle = 
                          ((void *)0)
                              ;
            value.prefix = 
                          ((void *)0)
                              ;
        }
    }

    ((memset(&((*event)), 0, sizeof(yaml_event_t)), ((*event)).type = (YAML_DOCUMENT_START_EVENT), ((*event)).start_mark = ((mark)), ((*event)).end_mark = ((mark))), (*event).data.document_start.version_directive = (version_directive_copy), (*event).data.document_start.tag_directives.start = (tag_directives_copy.start), (*event).data.document_start.tag_directives.end = (tag_directives_copy.top), (*event).data.document_start.implicit = (implicit))

                                 ;

    return 1;

error:
    yaml_free(data_flow, version_directive_copy);
    while (!((tag_directives_copy).start == (tag_directives_copy).top)) {
        yaml_tag_directive_t value = (*(--(tag_directives_copy).top));
        yaml_free(data_flow, value.handle);
        yaml_free(data_flow, value.prefix);
    }
    (yaml_free(data_flow, (tag_directives_copy).start), (tag_directives_copy).start = (tag_directives_copy).top = (tag_directives_copy).end = 0);
    yaml_free(data_flow, value.handle);
    yaml_free(data_flow, value.prefix);

    return 0;
}





int
yaml_document_end_event_initialize(int *data_flow, yaml_event_t *event, int implicit)
{
    yaml_mark_t mark = { 0, 0, 0 };

    
   ((
   event
   ) ? (void) (0) : __assert_fail (
   "event"
   , "api.c", 780, __PRETTY_FUNCTION__))
                ;

    ((memset(&((*event)), 0, sizeof(yaml_event_t)), ((*event)).type = (YAML_DOCUMENT_END_EVENT), ((*event)).start_mark = ((mark)), ((*event)).end_mark = ((mark))), (*event).data.document_end.implicit = (implicit));

    return 1;
}





int
yaml_alias_event_initialize(int *data_flow, yaml_event_t *event, yaml_char_t *anchor)
{
    yaml_mark_t mark = { 0, 0, 0 };
    yaml_char_t *anchor_copy = 
                              ((void *)0)
                                  ;

    
   ((
   event
   ) ? (void) (0) : __assert_fail (
   "event"
   , "api.c", 797, __PRETTY_FUNCTION__))
                ;
    
   ((
   anchor
   ) ? (void) (0) : __assert_fail (
   "anchor"
   , "api.c", 798, __PRETTY_FUNCTION__))
                 ;

    if (!yaml_check_utf8(data_flow, anchor, strlen((char *)anchor))) return 0;

    anchor_copy = yaml_strdup(data_flow, anchor);
    if (!anchor_copy)
        return 0;

    ((memset(&((*event)), 0, sizeof(yaml_event_t)), ((*event)).type = (YAML_ALIAS_EVENT), ((*event)).start_mark = ((mark)), ((*event)).end_mark = ((mark))), (*event).data.alias.anchor = (anchor_copy));

    return 1;
}





int
yaml_scalar_event_initialize(int *data_flow, yaml_event_t *event,
        yaml_char_t *anchor, yaml_char_t *tag,
        yaml_char_t *value, int length,
        int plain_implicit, int quoted_implicit,
        yaml_scalar_style_t style)
{
    yaml_mark_t mark = { 0, 0, 0 };
    yaml_char_t *anchor_copy = 
                              ((void *)0)
                                  ;
    yaml_char_t *tag_copy = 
                           ((void *)0)
                               ;
    yaml_char_t *value_copy = 
                             ((void *)0)
                                 ;

    
   ((
   event
   ) ? (void) (0) : __assert_fail (
   "event"
   , "api.c", 827, __PRETTY_FUNCTION__))
                ;
    
   ((
   value
   ) ? (void) (0) : __assert_fail (
   "value"
   , "api.c", 828, __PRETTY_FUNCTION__))
                ;

    if (anchor) {
        if (!yaml_check_utf8(data_flow, anchor, strlen((char *)anchor))) goto error;
        anchor_copy = yaml_strdup(data_flow, anchor);
        if (!anchor_copy) goto error;
    }

    if (tag) {
        if (!yaml_check_utf8(data_flow, tag, strlen((char *)tag))) goto error;
        tag_copy = yaml_strdup(data_flow, tag);
        if (!tag_copy) goto error;
    }

    if (length < 0) {
        length = strlen((char *)value);
    }

    if (!yaml_check_utf8(data_flow, value, length)) goto error;
    value_copy = (yaml_char_t *)yaml_malloc(data_flow, length+1);
    if (!value_copy) goto error;
    memcpy(value_copy, value, length);
    value_copy[length] = '\0';

    ((memset(&((*event)), 0, sizeof(yaml_event_t)), ((*event)).type = (YAML_SCALAR_EVENT), ((*event)).start_mark = ((mark)), ((*event)).end_mark = ((mark))), (*event).data.scalar.anchor = (anchor_copy), (*event).data.scalar.tag = (tag_copy), (*event).data.scalar.value = (value_copy), (*event).data.scalar.length = (length), (*event).data.scalar.plain_implicit = (plain_implicit), (*event).data.scalar.quoted_implicit = (quoted_implicit), (*event).data.scalar.style = (style))
                                                               ;

    return 1;

error:
    yaml_free(data_flow, anchor_copy);
    yaml_free(data_flow, tag_copy);
    yaml_free(data_flow, value_copy);

    return 0;
}





int
yaml_sequence_start_event_initialize(int *data_flow, yaml_event_t *event,
        yaml_char_t *anchor, yaml_char_t *tag, int implicit,
        yaml_sequence_style_t style)
{
    yaml_mark_t mark = { 0, 0, 0 };
    yaml_char_t *anchor_copy = 
                              ((void *)0)
                                  ;
    yaml_char_t *tag_copy = 
                           ((void *)0)
                               ;

    
   ((
   event
   ) ? (void) (0) : __assert_fail (
   "event"
   , "api.c", 878, __PRETTY_FUNCTION__))
                ;

    if (anchor) {
        if (!yaml_check_utf8(data_flow, anchor, strlen((char *)anchor))) goto error;
        anchor_copy = yaml_strdup(data_flow, anchor);
        if (!anchor_copy) goto error;
    }

    if (tag) {
        if (!yaml_check_utf8(data_flow, tag, strlen((char *)tag))) goto error;
        tag_copy = yaml_strdup(data_flow, tag);
        if (!tag_copy) goto error;
    }

    ((memset(&((*event)), 0, sizeof(yaml_event_t)), ((*event)).type = (YAML_SEQUENCE_START_EVENT), ((*event)).start_mark = ((mark)), ((*event)).end_mark = ((mark))), (*event).data.sequence_start.anchor = (anchor_copy), (*event).data.sequence_start.tag = (tag_copy), (*event).data.sequence_start.implicit = (implicit), (*event).data.sequence_start.style = (style))
                                        ;

    return 1;

error:
    yaml_free(data_flow, anchor_copy);
    yaml_free(data_flow, tag_copy);

    return 0;
}





int
yaml_sequence_end_event_initialize(int *data_flow, yaml_event_t *event)
{
    yaml_mark_t mark = { 0, 0, 0 };

    
   ((
   event
   ) ? (void) (0) : __assert_fail (
   "event"
   , "api.c", 913, __PRETTY_FUNCTION__))
                ;

    ((memset(&((*event)), 0, sizeof(yaml_event_t)), ((*event)).type = (YAML_SEQUENCE_END_EVENT), ((*event)).start_mark = ((mark)), ((*event)).end_mark = ((mark))));

    return 1;
}





int
yaml_mapping_start_event_initialize(int *data_flow, yaml_event_t *event,
        yaml_char_t *anchor, yaml_char_t *tag, int implicit,
        yaml_mapping_style_t style)
{
    yaml_mark_t mark = { 0, 0, 0 };
    yaml_char_t *anchor_copy = 
                              ((void *)0)
                                  ;
    yaml_char_t *tag_copy = 
                           ((void *)0)
                               ;

    
   ((
   event
   ) ? (void) (0) : __assert_fail (
   "event"
   , "api.c", 933, __PRETTY_FUNCTION__))
                ;

    if (anchor) {
        if (!yaml_check_utf8(data_flow, anchor, strlen((char *)anchor))) goto error;
        anchor_copy = yaml_strdup(data_flow, anchor);
        if (!anchor_copy) goto error;
    }

    if (tag) {
        if (!yaml_check_utf8(data_flow, tag, strlen((char *)tag))) goto error;
        tag_copy = yaml_strdup(data_flow, tag);
        if (!tag_copy) goto error;
    }

    ((memset(&((*event)), 0, sizeof(yaml_event_t)), ((*event)).type = (YAML_MAPPING_START_EVENT), ((*event)).start_mark = ((mark)), ((*event)).end_mark = ((mark))), (*event).data.mapping_start.anchor = (anchor_copy), (*event).data.mapping_start.tag = (tag_copy), (*event).data.mapping_start.implicit = (implicit), (*event).data.mapping_start.style = (style))
                                        ;

    return 1;

error:
    yaml_free(data_flow, anchor_copy);
    yaml_free(data_flow, tag_copy);

    return 0;
}





int
yaml_mapping_end_event_initialize(int *data_flow, yaml_event_t *event)
{
    yaml_mark_t mark = { 0, 0, 0 };

    
   ((
   event
   ) ? (void) (0) : __assert_fail (
   "event"
   , "api.c", 968, __PRETTY_FUNCTION__))
                ;

    ((memset(&((*event)), 0, sizeof(yaml_event_t)), ((*event)).type = (YAML_MAPPING_END_EVENT), ((*event)).start_mark = ((mark)), ((*event)).end_mark = ((mark))));

    return 1;
}





void
yaml_event_delete(int *data_flow, yaml_event_t *event)
{
    yaml_tag_directive_t *tag_directive={0};

    
   ((
   event
   ) ? (void) (0) : __assert_fail (
   "event"
   , "api.c", 984, __PRETTY_FUNCTION__))
                ;

    switch (event->type)
    {
        case YAML_DOCUMENT_START_EVENT:
            yaml_free(data_flow, event->data.document_start.version_directive);
            for (tag_directive = event->data.document_start.tag_directives.start;
                    tag_directive != event->data.document_start.tag_directives.end;
                    tag_directive++) {
                yaml_free(data_flow, tag_directive->handle);
                yaml_free(data_flow, tag_directive->prefix);
            }
            yaml_free(data_flow, event->data.document_start.tag_directives.start);
            break;

        case YAML_ALIAS_EVENT:
            yaml_free(data_flow, event->data.alias.anchor);
            break;

        case YAML_SCALAR_EVENT:
            yaml_free(data_flow, event->data.scalar.anchor);
            yaml_free(data_flow, event->data.scalar.tag);
            yaml_free(data_flow, event->data.scalar.value);
            break;

        case YAML_SEQUENCE_START_EVENT:
            yaml_free(data_flow, event->data.sequence_start.anchor);
            yaml_free(data_flow, event->data.sequence_start.tag);
            break;

        case YAML_MAPPING_START_EVENT:
            yaml_free(data_flow, event->data.mapping_start.anchor);
            yaml_free(data_flow, event->data.mapping_start.tag);
            break;

        default:
            break;
    }

    memset(event, 0, sizeof(yaml_event_t));
}





int
yaml_document_initialize(int *data_flow, yaml_document_t *document,
        yaml_version_directive_t *version_directive,
        yaml_tag_directive_t *tag_directives_start,
        yaml_tag_directive_t *tag_directives_end,
        int start_implicit, int end_implicit)
{
    struct {
        yaml_error_type_t error;
    } context={0};
    struct {
        yaml_node_t *start;
        yaml_node_t *end;
        yaml_node_t *top;
    } nodes = { 
               ((void *)0)
                   , 
                     ((void *)0)
                         , 
                           ((void *)0) 
                                };
    yaml_version_directive_t *version_directive_copy = 
                                                      ((void *)0)
                                                          ;
    struct {
        yaml_tag_directive_t *start;
        yaml_tag_directive_t *end;
        yaml_tag_directive_t *top;
    } tag_directives_copy = { 
                             ((void *)0)
                                 , 
                                   ((void *)0)
                                       , 
                                         ((void *)0) 
                                              };
    yaml_tag_directive_t value = { 
                                  ((void *)0)
                                      , 
                                        ((void *)0) 
                                             };
    yaml_mark_t mark = { 0, 0, 0 };

    
   ((
   document
   ) ? (void) (0) : __assert_fail (
   "document"
   , "api.c", 1054, __PRETTY_FUNCTION__))
                   ;
    
   ((
   (tag_directives_start && tag_directives_end) || (tag_directives_start == tag_directives_end)
   ) ? (void) (0) : __assert_fail (
   "(tag_directives_start && tag_directives_end) || (tag_directives_start == tag_directives_end)"
   ,
                                                        "api.c"
    ,
                                                        1056
    , __PRETTY_FUNCTION__))
                                                         
                                                        ;


    if (!(((nodes).start = (yaml_node_t*)yaml_malloc(data_flow, 16*sizeof(*(nodes).start))) ? ((nodes).top = (nodes).start, (nodes).end = (nodes).start+16, 1) : ((&context)->error = YAML_MEMORY_ERROR, 0))) goto error;

    if (version_directive) {
        version_directive_copy = (yaml_version_directive_t*)yaml_malloc(data_flow, sizeof(yaml_version_directive_t));
        if (!version_directive_copy) goto error;
        version_directive_copy->major = version_directive->major;
        version_directive_copy->minor = version_directive->minor;
    }

    if (tag_directives_start != tag_directives_end) {
        yaml_tag_directive_t *tag_directive={0};
        if (!(((tag_directives_copy).start = (yaml_tag_directive_t*)yaml_malloc(data_flow, 16*sizeof(*(tag_directives_copy).start))) ? ((tag_directives_copy).top = (tag_directives_copy).start, (tag_directives_copy).end = (tag_directives_copy).start+16, 1) : ((&context)->error = YAML_MEMORY_ERROR, 0)))
            goto error;
        for (tag_directive = tag_directives_start;
                tag_directive != tag_directives_end; tag_directive ++) {
            
           ((
           tag_directive->handle
           ) ? (void) (0) : __assert_fail (
           "tag_directive->handle"
           , "api.c", 1074, __PRETTY_FUNCTION__))
                                        ;
            
           ((
           tag_directive->prefix
           ) ? (void) (0) : __assert_fail (
           "tag_directive->prefix"
           , "api.c", 1075, __PRETTY_FUNCTION__))
                                        ;
            if (!yaml_check_utf8(data_flow, tag_directive->handle,
                        strlen((char *)tag_directive->handle)))
                goto error;
            if (!yaml_check_utf8(data_flow, tag_directive->prefix,
                        strlen((char *)tag_directive->prefix)))
                goto error;
            value.handle = yaml_strdup(data_flow, tag_directive->handle);
            value.prefix = yaml_strdup(data_flow, tag_directive->prefix);
            if (!value.handle || !value.prefix) goto error;
            if (!(((tag_directives_copy).top != (tag_directives_copy).end || yaml_stack_extend(data_flow, (void **)&(tag_directives_copy).start, (void **)&(tag_directives_copy).top, (void **)&(tag_directives_copy).end)) ? (*((tag_directives_copy).top++) = value, 1) : ((&context)->error = YAML_MEMORY_ERROR, 0)))
                goto error;
            value.handle = 
                          ((void *)0)
                              ;
            value.prefix = 
                          ((void *)0)
                              ;
        }
    }

    (memset(&(*document), 0, sizeof(yaml_document_t)), (*document).nodes.start = (nodes.start), (*document).nodes.end = (nodes.end), (*document).nodes.top = (nodes.start), (*document).version_directive = (version_directive_copy), (*document).tag_directives.start = (tag_directives_copy.start), (*document).tag_directives.end = (tag_directives_copy.top), (*document).start_implicit = (start_implicit), (*document).end_implicit = (end_implicit), (*document).start_mark = (mark), (*document).end_mark = (mark))

                                                     ;

    return 1;

error:
    (yaml_free(data_flow, (nodes).start), (nodes).start = (nodes).top = (nodes).end = 0);
    yaml_free(data_flow, version_directive_copy);
    while (!((tag_directives_copy).start == (tag_directives_copy).top)) {
        yaml_tag_directive_t value = (*(--(tag_directives_copy).top));
        yaml_free(data_flow, value.handle);
        yaml_free(data_flow, value.prefix);
    }
    (yaml_free(data_flow, (tag_directives_copy).start), (tag_directives_copy).start = (tag_directives_copy).top = (tag_directives_copy).end = 0);
    yaml_free(data_flow, value.handle);
    yaml_free(data_flow, value.prefix);

    return 0;
}





void
yaml_document_delete(int *data_flow, yaml_document_t *document)
{
    struct {
        yaml_error_type_t error;
    } context={0};
    yaml_tag_directive_t *tag_directive={0};

    context.error = YAML_NO_ERROR;

    
   ((
   document
   ) ? (void) (0) : __assert_fail (
   "document"
   , "api.c", 1127, __PRETTY_FUNCTION__))
                   ;

    while (!((document->nodes).start == (document->nodes).top)) {
        yaml_node_t node = (*(--(document->nodes).top));
        yaml_free(data_flow, node.tag);
        switch (node.type) {
            case YAML_SCALAR_NODE:
                yaml_free(data_flow, node.data.scalar.value);
                break;
            case YAML_SEQUENCE_NODE:
                (yaml_free(data_flow, (node.data.sequence.items).start), (node.data.sequence.items).start = (node.data.sequence.items).top = (node.data.sequence.items).end = 0);
                break;
            case YAML_MAPPING_NODE:
                (yaml_free(data_flow, (node.data.mapping.pairs).start), (node.data.mapping.pairs).start = (node.data.mapping.pairs).top = (node.data.mapping.pairs).end = 0);
                break;
            default:
                
               ((
               0
               ) ? (void) (0) : __assert_fail (
               "0"
               , "api.c", 1143, __PRETTY_FUNCTION__))
                        ;
        }
    }
    (yaml_free(data_flow, (document->nodes).start), (document->nodes).start = (document->nodes).top = (document->nodes).end = 0);

    yaml_free(data_flow, document->version_directive);
    for (tag_directive = document->tag_directives.start;
            tag_directive != document->tag_directives.end;
            tag_directive++) {
        yaml_free(data_flow, tag_directive->handle);
        yaml_free(data_flow, tag_directive->prefix);
    }
    yaml_free(data_flow, document->tag_directives.start);

    memset(document, 0, sizeof(yaml_document_t));
}





yaml_node_t *
yaml_document_get_node(int *data_flow, yaml_document_t *document, int index)
{
    
   ((
   document
   ) ? (void) (0) : __assert_fail (
   "document"
   , "api.c", 1167, __PRETTY_FUNCTION__))
                   ;

    if (index > 0 && document->nodes.start + index <= document->nodes.top) {
        return document->nodes.start + index - 1;
    }
    return 
          ((void *)0)
              ;
}





yaml_node_t *
yaml_document_get_root_node(int *data_flow, yaml_document_t *document)
{
    
   ((
   document
   ) ? (void) (0) : __assert_fail (
   "document"
   , "api.c", 1182, __PRETTY_FUNCTION__))
                   ;

    if (document->nodes.top != document->nodes.start) {
        return document->nodes.start;
    }
    return 
          ((void *)0)
              ;
}





int
yaml_document_add_scalar(int *data_flow, yaml_document_t *document,
        yaml_char_t *tag, yaml_char_t *value, int length,
        yaml_scalar_style_t style)
{
    struct {
        yaml_error_type_t error;
    } context={0};
    yaml_mark_t mark = { 0, 0, 0 };
    yaml_char_t *tag_copy = 
                           ((void *)0)
                               ;
    yaml_char_t *value_copy = 
                             ((void *)0)
                                 ;
    yaml_node_t node={0};

    
   ((
   document
   ) ? (void) (0) : __assert_fail (
   "document"
   , "api.c", 1207, __PRETTY_FUNCTION__))
                   ;
    
   ((
   value
   ) ? (void) (0) : __assert_fail (
   "value"
   , "api.c", 1208, __PRETTY_FUNCTION__))
                ;

    if (!tag) {
        tag = (yaml_char_t *)"tag:yaml.org,2002:str";
    }

    if (!yaml_check_utf8(data_flow, tag, strlen((char *)tag))) goto error;
    tag_copy = yaml_strdup(data_flow, tag);
    if (!tag_copy) goto error;

    if (length < 0) {
        length = strlen((char *)value);
    }

    if (!yaml_check_utf8(data_flow, value, length)) goto error;
    value_copy = (yaml_char_t *)yaml_malloc(data_flow, length+1);
    if (!value_copy) goto error;
    memcpy(value_copy, value, length);
    value_copy[length] = '\0';

    ((memset(&((node)), 0, sizeof(yaml_node_t)), ((node)).type = (YAML_SCALAR_NODE), ((node)).tag = ((tag_copy)), ((node)).start_mark = ((mark)), ((node)).end_mark = ((mark))), (node).data.scalar.value = (value_copy), (node).data.scalar.length = (length), (node).data.scalar.style = (style));
    if (!(((document->nodes).top != (document->nodes).end || yaml_stack_extend(data_flow, (void **)&(document->nodes).start, (void **)&(document->nodes).top, (void **)&(document->nodes).end)) ? (*((document->nodes).top++) = node, 1) : ((&context)->error = YAML_MEMORY_ERROR, 0))) goto error;

    return document->nodes.top - document->nodes.start;

error:
    yaml_free(data_flow, tag_copy);
    yaml_free(data_flow, value_copy);

    return 0;
}





int
yaml_document_add_sequence(int *data_flow, yaml_document_t *document,
        yaml_char_t *tag, yaml_sequence_style_t style)
{
    struct {
        yaml_error_type_t error;
    } context={0};
    yaml_mark_t mark = { 0, 0, 0 };
    yaml_char_t *tag_copy = 
                           ((void *)0)
                               ;
    struct {
        yaml_node_item_t *start;
        yaml_node_item_t *end;
        yaml_node_item_t *top;
    } items = { 
               ((void *)0)
                   , 
                     ((void *)0)
                         , 
                           ((void *)0) 
                                };
    yaml_node_t node={0};

    
   ((
   document
   ) ? (void) (0) : __assert_fail (
   "document"
   , "api.c", 1260, __PRETTY_FUNCTION__))
                   ;

    if (!tag) {
        tag = (yaml_char_t *)"tag:yaml.org,2002:seq";
    }

    if (!yaml_check_utf8(data_flow, tag, strlen((char *)tag))) goto error;
    tag_copy = yaml_strdup(data_flow, tag);
    if (!tag_copy) goto error;

    if (!(((items).start = (yaml_node_item_t*)yaml_malloc(data_flow, 16*sizeof(*(items).start))) ? ((items).top = (items).start, (items).end = (items).start+16, 1) : ((&context)->error = YAML_MEMORY_ERROR, 0))) goto error;

    ((memset(&((node)), 0, sizeof(yaml_node_t)), ((node)).type = (YAML_SEQUENCE_NODE), ((node)).tag = ((tag_copy)), ((node)).start_mark = ((mark)), ((node)).end_mark = ((mark))), (node).data.sequence.items.start = (items.start), (node).data.sequence.items.end = (items.end), (node).data.sequence.items.top = (items.start), (node).data.sequence.style = (style))
                              ;
    if (!(((document->nodes).top != (document->nodes).end || yaml_stack_extend(data_flow, (void **)&(document->nodes).start, (void **)&(document->nodes).top, (void **)&(document->nodes).end)) ? (*((document->nodes).top++) = node, 1) : ((&context)->error = YAML_MEMORY_ERROR, 0))) goto error;

    return document->nodes.top - document->nodes.start;

error:
    (yaml_free(data_flow, (items).start), (items).start = (items).top = (items).end = 0);
    yaml_free(data_flow, tag_copy);

    return 0;
}





int
yaml_document_add_mapping(int *data_flow, yaml_document_t *document,
        yaml_char_t *tag, yaml_mapping_style_t style)
{
    struct {
        yaml_error_type_t error;
    } context={0};
    yaml_mark_t mark = { 0, 0, 0 };
    yaml_char_t *tag_copy = 
                           ((void *)0)
                               ;
    struct {
        yaml_node_pair_t *start;
        yaml_node_pair_t *end;
        yaml_node_pair_t *top;
    } pairs = { 
               ((void *)0)
                   , 
                     ((void *)0)
                         , 
                           ((void *)0) 
                                };
    yaml_node_t node={0};

    
   ((
   document
   ) ? (void) (0) : __assert_fail (
   "document"
   , "api.c", 1305, __PRETTY_FUNCTION__))
                   ;

    if (!tag) {
        tag = (yaml_char_t *)"tag:yaml.org,2002:map";
    }

    if (!yaml_check_utf8(data_flow, tag, strlen((char *)tag))) goto error;
    tag_copy = yaml_strdup(data_flow, tag);
    if (!tag_copy) goto error;

    if (!(((pairs).start = (yaml_node_pair_t*)yaml_malloc(data_flow, 16*sizeof(*(pairs).start))) ? ((pairs).top = (pairs).start, (pairs).end = (pairs).start+16, 1) : ((&context)->error = YAML_MEMORY_ERROR, 0))) goto error;

    ((memset(&((node)), 0, sizeof(yaml_node_t)), ((node)).type = (YAML_MAPPING_NODE), ((node)).tag = ((tag_copy)), ((node)).start_mark = ((mark)), ((node)).end_mark = ((mark))), (node).data.mapping.pairs.start = (pairs.start), (node).data.mapping.pairs.end = (pairs.end), (node).data.mapping.pairs.top = (pairs.start), (node).data.mapping.style = (style))
                              ;
    if (!(((document->nodes).top != (document->nodes).end || yaml_stack_extend(data_flow, (void **)&(document->nodes).start, (void **)&(document->nodes).top, (void **)&(document->nodes).end)) ? (*((document->nodes).top++) = node, 1) : ((&context)->error = YAML_MEMORY_ERROR, 0))) goto error;

    return document->nodes.top - document->nodes.start;

error:
    (yaml_free(data_flow, (pairs).start), (pairs).start = (pairs).top = (pairs).end = 0);
    yaml_free(data_flow, tag_copy);

    return 0;
}





int
yaml_document_append_sequence_item(int *data_flow, yaml_document_t *document,
        int sequence, int item)
{
    struct {
        yaml_error_type_t error;
    } context={0};

    
   ((
   document
   ) ? (void) (0) : __assert_fail (
   "document"
   , "api.c", 1342, __PRETTY_FUNCTION__))
                   ;
    
   ((
   sequence > 0 && document->nodes.start + sequence <= document->nodes.top
   ) ? (void) (0) : __assert_fail (
   "sequence > 0 && document->nodes.start + sequence <= document->nodes.top"
   ,
                                                                      "api.c"
    ,
                                                                      1344
    , __PRETTY_FUNCTION__))
                                                                       
                                                                      ;

    
   ((
   document->nodes.start[sequence-1].type == YAML_SEQUENCE_NODE
   ) ? (void) (0) : __assert_fail (
   "document->nodes.start[sequence-1].type == YAML_SEQUENCE_NODE"
   , "api.c", 1346, __PRETTY_FUNCTION__))
                                                                       ;

    
   ((
   item > 0 && document->nodes.start + item <= document->nodes.top
   ) ? (void) (0) : __assert_fail (
   "item > 0 && document->nodes.start + item <= document->nodes.top"
   , "api.c", 1348, __PRETTY_FUNCTION__))
                                                                          ;


    if (!(((document->nodes.start[sequence-1].data.sequence.items).top != (document->nodes.start[sequence-1].data.sequence.items).end || yaml_stack_extend(data_flow, (void **)&(document->nodes.start[sequence-1].data.sequence.items).start, (void **)&(document->nodes.start[sequence-1].data.sequence.items).top, (void **)&(document->nodes.start[sequence-1].data.sequence.items).end)) ? (*((document->nodes.start[sequence-1].data.sequence.items).top++) = item, 1) : ((&context)->error = YAML_MEMORY_ERROR, 0))
                                                                            )
        return 0;

    return 1;
}





int
yaml_document_append_mapping_pair(int *data_flow, yaml_document_t *document,
        int mapping, int key, int value)
{
    struct {
        yaml_error_type_t error;
    } context={0};

    yaml_node_pair_t pair={0};

    
   ((
   document
   ) ? (void) (0) : __assert_fail (
   "document"
   , "api.c", 1372, __PRETTY_FUNCTION__))
                   ;
    
   ((
   mapping > 0 && document->nodes.start + mapping <= document->nodes.top
   ) ? (void) (0) : __assert_fail (
   "mapping > 0 && document->nodes.start + mapping <= document->nodes.top"
   ,
                                                                     "api.c"
    ,
                                                                     1374
    , __PRETTY_FUNCTION__))
                                                                      
                                                                     ;

    
   ((
   document->nodes.start[mapping-1].type == YAML_MAPPING_NODE
   ) ? (void) (0) : __assert_fail (
   "document->nodes.start[mapping-1].type == YAML_MAPPING_NODE"
   , "api.c", 1376, __PRETTY_FUNCTION__))
                                                                     ;

    
   ((
   key > 0 && document->nodes.start + key <= document->nodes.top
   ) ? (void) (0) : __assert_fail (
   "key > 0 && document->nodes.start + key <= document->nodes.top"
   , "api.c", 1378, __PRETTY_FUNCTION__))
                                                                        ;

    
   ((
   value > 0 && document->nodes.start + value <= document->nodes.top
   ) ? (void) (0) : __assert_fail (
   "value > 0 && document->nodes.start + value <= document->nodes.top"
   , "api.c", 1380, __PRETTY_FUNCTION__))
                                                                            ;


    pair.key = key;
    pair.value = value;

    if (!(((document->nodes.start[mapping-1].data.mapping.pairs).top != (document->nodes.start[mapping-1].data.mapping.pairs).end || yaml_stack_extend(data_flow, (void **)&(document->nodes.start[mapping-1].data.mapping.pairs).start, (void **)&(document->nodes.start[mapping-1].data.mapping.pairs).top, (void **)&(document->nodes.start[mapping-1].data.mapping.pairs).end)) ? (*((document->nodes.start[mapping-1].data.mapping.pairs).top++) = pair, 1) : ((&context)->error = YAML_MEMORY_ERROR, 0))
                                                                          )
        return 0;

    return 1;
}
