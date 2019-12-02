#ifdef LAVA_LOGGING
#define LAVALOG(bugid, x, trigger)  ({(trigger && fprintf(stderr, "\nLAVALOG: %d: %s:%d\n", bugid, __FILE__, __LINE__)), (x);})
#endif
#ifdef FULL_LAVA_LOGGING
#define LAVALOG(bugid, x, trigger)  ({(trigger && fprintf(stderr, "\nLAVALOG: %d: %s:%d\n", bugid, __FILE__, __LINE__), (!trigger && fprintf(stderr, "\nLAVALOG_MISS: %d: %s:%d\n", bugid, __FILE__, __LINE__))) && fflush(0), (x);})
#endif
#ifndef LAVALOG
#define LAVALOG(y,x,z)  (x)
#endif
#ifdef DUA_LOGGING
#define DFLOG(idx, val)  ({fprintf(stderr, "\nDFLOG:%d=%d: %s:%d\n", idx, val, __FILE__, __LINE__) && fflush(0), data_flow[idx]=val;})
#else
#define DFLOG(idx, val) {data_flow[idx]=val;}
#endif












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
int
yaml_emitter_emit(int *data_flow, yaml_emitter_t *emitter, yaml_event_t *event);





static int
yaml_emitter_set_emitter_error(int *data_flow, yaml_emitter_t *emitter, const char *problem);

static int
yaml_emitter_need_more_events(int *data_flow, yaml_emitter_t *emitter);

static int
yaml_emitter_append_tag_directive(int *data_flow, yaml_emitter_t *emitter,
        yaml_tag_directive_t value, int allow_duplicates);

static int
yaml_emitter_increase_indent(int *data_flow, yaml_emitter_t *emitter,
        int flow, int indentless);





static int
yaml_emitter_state_machine(int *data_flow, yaml_emitter_t *emitter, yaml_event_t *event);

static int
yaml_emitter_emit_stream_start(int *data_flow, yaml_emitter_t *emitter,
        yaml_event_t *event);

static int
yaml_emitter_emit_document_start(int *data_flow, yaml_emitter_t *emitter,
        yaml_event_t *event, int first);

static int
yaml_emitter_emit_document_content(int *data_flow, yaml_emitter_t *emitter,
        yaml_event_t *event);

static int
yaml_emitter_emit_document_end(int *data_flow, yaml_emitter_t *emitter,
        yaml_event_t *event);

static int
yaml_emitter_emit_flow_sequence_item(int *data_flow, yaml_emitter_t *emitter,
        yaml_event_t *event, int first);

static int
yaml_emitter_emit_flow_mapping_key(int *data_flow, yaml_emitter_t *emitter,
        yaml_event_t *event, int first);

static int
yaml_emitter_emit_flow_mapping_value(int *data_flow, yaml_emitter_t *emitter,
        yaml_event_t *event, int simple);

static int
yaml_emitter_emit_block_sequence_item(int *data_flow, yaml_emitter_t *emitter,
        yaml_event_t *event, int first);

static int
yaml_emitter_emit_block_mapping_key(int *data_flow, yaml_emitter_t *emitter,
        yaml_event_t *event, int first);

static int
yaml_emitter_emit_block_mapping_value(int *data_flow, yaml_emitter_t *emitter,
        yaml_event_t *event, int simple);

static int
yaml_emitter_emit_node(int *data_flow, yaml_emitter_t *emitter, yaml_event_t *event,
        int root, int sequence, int mapping, int simple_key);

static int
yaml_emitter_emit_alias(int *data_flow, yaml_emitter_t *emitter, yaml_event_t *event);

static int
yaml_emitter_emit_scalar(int *data_flow, yaml_emitter_t *emitter, yaml_event_t *event);

static int
yaml_emitter_emit_sequence_start(int *data_flow, yaml_emitter_t *emitter, yaml_event_t *event);

static int
yaml_emitter_emit_mapping_start(int *data_flow, yaml_emitter_t *emitter, yaml_event_t *event);





static int
yaml_emitter_check_empty_document(int *data_flow, yaml_emitter_t *emitter);

static int
yaml_emitter_check_empty_sequence(int *data_flow, yaml_emitter_t *emitter);

static int
yaml_emitter_check_empty_mapping(int *data_flow, yaml_emitter_t *emitter);

static int
yaml_emitter_check_simple_key(int *data_flow, yaml_emitter_t *emitter);

static int
yaml_emitter_select_scalar_style(int *data_flow, yaml_emitter_t *emitter, yaml_event_t *event);





static int
yaml_emitter_process_anchor(int *data_flow, yaml_emitter_t *emitter);

static int
yaml_emitter_process_tag(int *data_flow, yaml_emitter_t *emitter);

static int
yaml_emitter_process_scalar(int *data_flow, yaml_emitter_t *emitter);





static int
yaml_emitter_analyze_version_directive(int *data_flow, yaml_emitter_t *emitter,
        yaml_version_directive_t version_directive);

static int
yaml_emitter_analyze_tag_directive(int *data_flow, yaml_emitter_t *emitter,
        yaml_tag_directive_t tag_directive);

static int
yaml_emitter_analyze_anchor(int *data_flow, yaml_emitter_t *emitter,
        yaml_char_t *anchor, int alias);

static int
yaml_emitter_analyze_tag(int *data_flow, yaml_emitter_t *emitter,
        yaml_char_t *tag);

static int
yaml_emitter_analyze_scalar(int *data_flow, yaml_emitter_t *emitter,
        yaml_char_t *value, size_t length);

static int
yaml_emitter_analyze_event(int *data_flow, yaml_emitter_t *emitter,
        yaml_event_t *event);





static int
yaml_emitter_write_bom(int *data_flow, yaml_emitter_t *emitter);

static int
yaml_emitter_write_indent(int *data_flow, yaml_emitter_t *emitter);

static int
yaml_emitter_write_indicator(int *data_flow, yaml_emitter_t *emitter,
        char *indicator, int need_whitespace,
        int is_whitespace, int is_indention);

static int
yaml_emitter_write_anchor(int *data_flow, yaml_emitter_t *emitter,
        yaml_char_t *value, size_t length);

static int
yaml_emitter_write_tag_handle(int *data_flow, yaml_emitter_t *emitter,
        yaml_char_t *value, size_t length);

static int
yaml_emitter_write_tag_content(int *data_flow, yaml_emitter_t *emitter,
        yaml_char_t *value, size_t length, int need_whitespace);

static int
yaml_emitter_write_plain_scalar(int *data_flow, yaml_emitter_t *emitter,
        yaml_char_t *value, size_t length, int allow_breaks);

static int
yaml_emitter_write_single_quoted_scalar(int *data_flow, yaml_emitter_t *emitter,
        yaml_char_t *value, size_t length, int allow_breaks);

static int
yaml_emitter_write_double_quoted_scalar(int *data_flow, yaml_emitter_t *emitter,
        yaml_char_t *value, size_t length, int allow_breaks);

static int
yaml_emitter_write_block_scalar_hints(int *data_flow, yaml_emitter_t *emitter,
        yaml_string_t string);

static int
yaml_emitter_write_literal_scalar(int *data_flow, yaml_emitter_t *emitter,
        yaml_char_t *value, size_t length);

static int
yaml_emitter_write_folded_scalar(int *data_flow, yaml_emitter_t *emitter,
        yaml_char_t *value, size_t length);





static int
yaml_emitter_set_emitter_error(int *data_flow, yaml_emitter_t *emitter, const char *problem)
{
    emitter->error = YAML_EMITTER_ERROR;
    emitter->problem = problem;

    return 0;
}





int
yaml_emitter_emit(int *data_flow, yaml_emitter_t *emitter, yaml_event_t *event)
{
    if (!(((emitter->events).tail != (emitter->events).end || yaml_queue_extend(data_flow, (void **)&(emitter->events).start, (void **)&(emitter->events).head, (void **)&(emitter->events).tail, (void **)&(emitter->events).end)) ? (*((emitter->events).tail++) = *event, 1) : ((emitter)->error = YAML_MEMORY_ERROR, 0))) {
        yaml_event_delete(data_flow, event);
        return 0;
    }

    while (!yaml_emitter_need_more_events(data_flow, emitter)) {
        if (!yaml_emitter_analyze_event(data_flow, emitter, emitter->events.head))
            return 0;
        if (!yaml_emitter_state_machine(data_flow, emitter, emitter->events.head))
            return 0;
        yaml_event_delete(data_flow, &(*((emitter->events).head++)));
    }

    return 1;
}
static int
yaml_emitter_need_more_events(int *data_flow, yaml_emitter_t *emitter)
{
    int level = 0;
    int accumulate = 0;
    yaml_event_t *event={0};

    if (((emitter->events).head == (emitter->events).tail))
        return 1;

    switch (emitter->events.head->type) {
        case YAML_DOCUMENT_START_EVENT:
            accumulate = 1;
            break;
        case YAML_SEQUENCE_START_EVENT:
            accumulate = 2;
            break;
        case YAML_MAPPING_START_EVENT:
            accumulate = 3;
            break;
        default:
            return 0;
    }

    if (emitter->events.tail - emitter->events.head > accumulate)
        return 0;

    for (event = emitter->events.head; event != emitter->events.tail; event ++) {
        switch (event->type) {
            case YAML_STREAM_START_EVENT:
            case YAML_DOCUMENT_START_EVENT:
            case YAML_SEQUENCE_START_EVENT:
            case YAML_MAPPING_START_EVENT:
                level += 1;
                break;
            case YAML_STREAM_END_EVENT:
            case YAML_DOCUMENT_END_EVENT:
            case YAML_SEQUENCE_END_EVENT:
            case YAML_MAPPING_END_EVENT:
                level -= 1;
                break;
            default:
                break;
        }
        if (!level)
            return 0;
    }

    return 1;
}





static int
yaml_emitter_append_tag_directive(int *data_flow, yaml_emitter_t *emitter,
        yaml_tag_directive_t value, int allow_duplicates)
{
    yaml_tag_directive_t *tag_directive={0};
    yaml_tag_directive_t copy = { 
                                 ((void *)0)
                                     , 
                                       ((void *)0) 
                                            };

    for (tag_directive = emitter->tag_directives.start;
            tag_directive != emitter->tag_directives.top; tag_directive ++) {
        if (strcmp((char *)value.handle, (char *)tag_directive->handle) == 0) {
            if (allow_duplicates)
                return 1;
            return yaml_emitter_set_emitter_error(data_flow, emitter,
                    "duplicate %TAG directive");
        }
    }

    copy.handle = yaml_strdup(data_flow, value.handle);
    copy.prefix = yaml_strdup(data_flow, value.prefix);
    if (!copy.handle || !copy.prefix) {
        emitter->error = YAML_MEMORY_ERROR;
        goto error;
    }

    if (!(((emitter->tag_directives).top != (emitter->tag_directives).end || yaml_stack_extend(data_flow, (void **)&(emitter->tag_directives).start, (void **)&(emitter->tag_directives).top, (void **)&(emitter->tag_directives).end)) ? (*((emitter->tag_directives).top++) = copy, 1) : ((emitter)->error = YAML_MEMORY_ERROR, 0)))
        goto error;

    return 1;

error:
    yaml_free(data_flow, copy.handle);
    yaml_free(data_flow, copy.prefix);
    return 0;
}





static int
yaml_emitter_increase_indent(int *data_flow, yaml_emitter_t *emitter,
        int flow, int indentless)
{
    if (!(((emitter->indents).top != (emitter->indents).end || yaml_stack_extend(data_flow, (void **)&(emitter->indents).start, (void **)&(emitter->indents).top, (void **)&(emitter->indents).end)) ? (*((emitter->indents).top++) = emitter->indent, 1) : ((emitter)->error = YAML_MEMORY_ERROR, 0)))
        return 0;

    if (emitter->indent < 0) {
        emitter->indent = flow ? emitter->best_indent : 0;
    }
    else if (!indentless) {
        emitter->indent += emitter->best_indent;
    }

    return 1;
}





static int
yaml_emitter_state_machine(int *data_flow, yaml_emitter_t *emitter, yaml_event_t *event)
{
    switch (emitter->state)
    {
        case YAML_EMIT_STREAM_START_STATE:
            return yaml_emitter_emit_stream_start(data_flow, emitter, event);

        case YAML_EMIT_FIRST_DOCUMENT_START_STATE:
            return yaml_emitter_emit_document_start(data_flow, emitter, event, 1);

        case YAML_EMIT_DOCUMENT_START_STATE:
            return yaml_emitter_emit_document_start(data_flow, emitter, event, 0);

        case YAML_EMIT_DOCUMENT_CONTENT_STATE:
            return yaml_emitter_emit_document_content(data_flow, emitter, event);

        case YAML_EMIT_DOCUMENT_END_STATE:
            return yaml_emitter_emit_document_end(data_flow, emitter, event);

        case YAML_EMIT_FLOW_SEQUENCE_FIRST_ITEM_STATE:
            return yaml_emitter_emit_flow_sequence_item(data_flow, emitter, event, 1);

        case YAML_EMIT_FLOW_SEQUENCE_ITEM_STATE:
            return yaml_emitter_emit_flow_sequence_item(data_flow, emitter, event, 0);

        case YAML_EMIT_FLOW_MAPPING_FIRST_KEY_STATE:
            return yaml_emitter_emit_flow_mapping_key(data_flow, emitter, event, 1);

        case YAML_EMIT_FLOW_MAPPING_KEY_STATE:
            return yaml_emitter_emit_flow_mapping_key(data_flow, emitter, event, 0);

        case YAML_EMIT_FLOW_MAPPING_SIMPLE_VALUE_STATE:
            return yaml_emitter_emit_flow_mapping_value(data_flow, emitter, event, 1);

        case YAML_EMIT_FLOW_MAPPING_VALUE_STATE:
            return yaml_emitter_emit_flow_mapping_value(data_flow, emitter, event, 0);

        case YAML_EMIT_BLOCK_SEQUENCE_FIRST_ITEM_STATE:
            return yaml_emitter_emit_block_sequence_item(data_flow, emitter, event, 1);

        case YAML_EMIT_BLOCK_SEQUENCE_ITEM_STATE:
            return yaml_emitter_emit_block_sequence_item(data_flow, emitter, event, 0);

        case YAML_EMIT_BLOCK_MAPPING_FIRST_KEY_STATE:
            return yaml_emitter_emit_block_mapping_key(data_flow, emitter, event, 1);

        case YAML_EMIT_BLOCK_MAPPING_KEY_STATE:
            return yaml_emitter_emit_block_mapping_key(data_flow, emitter, event, 0);

        case YAML_EMIT_BLOCK_MAPPING_SIMPLE_VALUE_STATE:
            return yaml_emitter_emit_block_mapping_value(data_flow, emitter, event, 1);

        case YAML_EMIT_BLOCK_MAPPING_VALUE_STATE:
            return yaml_emitter_emit_block_mapping_value(data_flow, emitter, event, 0);

        case YAML_EMIT_END_STATE:
            return yaml_emitter_set_emitter_error(data_flow, emitter,
                    "expected nothing after STREAM-END");

        default:
            
           ((
           1
           ) ? (void) (0) : __assert_fail (
           "1"
           , "emitter.c", 484, __PRETTY_FUNCTION__))
                    ;
    }

    return 0;
}





static int
yaml_emitter_emit_stream_start(int *data_flow, yaml_emitter_t *emitter,
        yaml_event_t *event)
{
    if (event->type == YAML_STREAM_START_EVENT)
    {
        if (!emitter->encoding) {
            emitter->encoding = event->data.stream_start.encoding;
        }

        if (!emitter->encoding) {
            emitter->encoding = YAML_UTF8_ENCODING;
        }

        if (emitter->best_indent < 2 || emitter->best_indent > 9) {
            emitter->best_indent = 2;
        }

        if (emitter->best_width >= 0
                && emitter->best_width <= emitter->best_indent*2) {
            emitter->best_width = 80;
        }

        if (emitter->best_width < 0) {
            emitter->best_width = 0x7fffffff;
        }

        if (!emitter->line_break) {
            emitter->line_break = YAML_LN_BREAK;
        }

        emitter->indent = -1;

        emitter->line = 0;
        emitter->column = 0;
        emitter->whitespace = 1;
        emitter->indention = 1;

        if (emitter->encoding != YAML_UTF8_ENCODING) {
            if (!yaml_emitter_write_bom(data_flow, emitter))
                return 0;
        }

        emitter->state = YAML_EMIT_FIRST_DOCUMENT_START_STATE;

        return 1;
    }

    return yaml_emitter_set_emitter_error(data_flow, emitter,
            "expected STREAM-START");
}





static int
yaml_emitter_emit_document_start(int *data_flow, yaml_emitter_t *emitter,
        yaml_event_t *event, int first)
{
    if (event->type == YAML_DOCUMENT_START_EVENT)
    {
        yaml_tag_directive_t default_tag_directives[] = {
            {(yaml_char_t *)"!", (yaml_char_t *)"!"},
            {(yaml_char_t *)"!!", (yaml_char_t *)"tag:yaml.org,2002:"},
            {
            ((void *)0)
                , 
                  ((void *)0)
                      }
        };
        yaml_tag_directive_t *tag_directive={0};
        int implicit={0};

        if (event->data.document_start.version_directive) {
            if (!yaml_emitter_analyze_version_directive(data_flow, emitter,
                        *event->data.document_start.version_directive))
                return 0;
        }

        for (tag_directive = event->data.document_start.tag_directives.start;
                tag_directive != event->data.document_start.tag_directives.end;
                tag_directive ++) {
            if (!yaml_emitter_analyze_tag_directive(data_flow, emitter, *tag_directive))
                return 0;
            if (!yaml_emitter_append_tag_directive(data_flow, emitter, *tag_directive, 0))
                return 0;
        }

        for (tag_directive = default_tag_directives;
                tag_directive->handle; tag_directive ++) {
            if (!yaml_emitter_append_tag_directive(data_flow, emitter, *tag_directive, 1))
                return 0;
        }

        implicit = event->data.document_start.implicit;
        if (!first || emitter->canonical) {
            implicit = 0;
        }

        if ((event->data.document_start.version_directive ||
                    (event->data.document_start.tag_directives.start
                     != event->data.document_start.tag_directives.end)) &&
                emitter->open_ended)
        {
            if (!yaml_emitter_write_indicator(data_flow, emitter, "...", 1, 0, 0))
                return 0;
            if (!yaml_emitter_write_indent(data_flow, emitter))
                return 0;
        }

        if (event->data.document_start.version_directive) {
            implicit = 0;
            if (!yaml_emitter_write_indicator(data_flow, emitter, "%YAML", 1, 0, 0))
                return 0;
            if (!yaml_emitter_write_indicator(data_flow, emitter, "1.1", 1, 0, 0))
                return 0;
            if (!yaml_emitter_write_indent(data_flow, emitter))
                return 0;
        }

        if (event->data.document_start.tag_directives.start
                != event->data.document_start.tag_directives.end) {
            implicit = 0;
            for (tag_directive = event->data.document_start.tag_directives.start;
                    tag_directive != event->data.document_start.tag_directives.end;
                    tag_directive ++) {
                if (!yaml_emitter_write_indicator(data_flow, emitter, "%TAG", 1, 0, 0))
                    return 0;
                if (!yaml_emitter_write_tag_handle(data_flow, emitter, tag_directive->handle,
                            strlen((char *)tag_directive->handle)))
                    return 0;
                if (!yaml_emitter_write_tag_content(data_flow, emitter, tag_directive->prefix,
                            strlen((char *)tag_directive->prefix), 1))
                    return 0;
                if (!yaml_emitter_write_indent(data_flow, emitter))
                    return 0;
            }
        }

        if (yaml_emitter_check_empty_document(data_flow, emitter)) {
            implicit = 0;
        }

        if (!implicit) {
            if (!yaml_emitter_write_indent(data_flow, emitter))
                return 0;
            if (!yaml_emitter_write_indicator(data_flow, emitter, "---", 1, 0, 0))
                return 0;
            if (emitter->canonical) {
                if (!yaml_emitter_write_indent(data_flow, emitter))
                    return 0;
            }
        }

        emitter->state = YAML_EMIT_DOCUMENT_CONTENT_STATE;

        return 1;
    }

    else if (event->type == YAML_STREAM_END_EVENT)
    {
        if (emitter->open_ended)
        {
            if (!yaml_emitter_write_indicator(data_flow, emitter, "...", 1, 0, 0))
                return 0;
            if (!yaml_emitter_write_indent(data_flow, emitter))
                return 0;
        }

        if (!yaml_emitter_flush(data_flow, emitter))
            return 0;

        emitter->state = YAML_EMIT_END_STATE;

        return 1;
    }

    return yaml_emitter_set_emitter_error(data_flow, emitter,
            "expected DOCUMENT-START or STREAM-END");
}





static int
yaml_emitter_emit_document_content(int *data_flow, yaml_emitter_t *emitter,
        yaml_event_t *event)
{
    if (!(((emitter->states).top != (emitter->states).end || yaml_stack_extend(data_flow, (void **)&(emitter->states).start, (void **)&(emitter->states).top, (void **)&(emitter->states).end)) ? (*((emitter->states).top++) = YAML_EMIT_DOCUMENT_END_STATE, 1) : ((emitter)->error = YAML_MEMORY_ERROR, 0)))
        return 0;

    return yaml_emitter_emit_node(data_flow, emitter, event, 1, 0, 0, 0);
}





static int
yaml_emitter_emit_document_end(int *data_flow, yaml_emitter_t *emitter,
        yaml_event_t *event)
{
    if (event->type == YAML_DOCUMENT_END_EVENT)
    {
        if (!yaml_emitter_write_indent(data_flow, emitter))
            return 0;
        if (!event->data.document_end.implicit) {
            if (!yaml_emitter_write_indicator(data_flow, emitter, "...", 1, 0, 0))
                return 0;
            if (!yaml_emitter_write_indent(data_flow, emitter))
                return 0;
        }
        if (!yaml_emitter_flush(data_flow, emitter))
            return 0;

        emitter->state = YAML_EMIT_DOCUMENT_START_STATE;

        while (!((emitter->tag_directives).start == (emitter->tag_directives).top)) {
            yaml_tag_directive_t tag_directive = (*(--(emitter->tag_directives).top))
                                            ;
            yaml_free(data_flow, tag_directive.handle);
            yaml_free(data_flow, tag_directive.prefix);
        }

        return 1;
    }

    return yaml_emitter_set_emitter_error(data_flow, emitter,
            "expected DOCUMENT-END");
}






static int
yaml_emitter_emit_flow_sequence_item(int *data_flow, yaml_emitter_t *emitter,
        yaml_event_t *event, int first)
{
    if (first)
    {
        if (!yaml_emitter_write_indicator(data_flow, emitter, "[", 1, 1, 0))
            return 0;
        if (!yaml_emitter_increase_indent(data_flow, emitter, 1, 0))
            return 0;
        emitter->flow_level ++;
    }

    if (event->type == YAML_SEQUENCE_END_EVENT)
    {
        emitter->flow_level --;
        emitter->indent = (*(--(emitter->indents).top));
        if (emitter->canonical && !first) {
            if (!yaml_emitter_write_indicator(data_flow, emitter, ",", 0, 0, 0))
                return 0;
            if (!yaml_emitter_write_indent(data_flow, emitter))
                return 0;
        }
        if (!yaml_emitter_write_indicator(data_flow, emitter, "]", 0, 0, 0))
            return 0;
        emitter->state = (*(--(emitter->states).top));

        return 1;
    }

    if (!first) {
        if (!yaml_emitter_write_indicator(data_flow, emitter, ",", 0, 0, 0))
            return 0;
    }

    if (emitter->canonical || emitter->column > emitter->best_width) {
        if (!yaml_emitter_write_indent(data_flow, emitter))
            return 0;
    }
    if (!(((emitter->states).top != (emitter->states).end || yaml_stack_extend(data_flow, (void **)&(emitter->states).start, (void **)&(emitter->states).top, (void **)&(emitter->states).end)) ? (*((emitter->states).top++) = YAML_EMIT_FLOW_SEQUENCE_ITEM_STATE, 1) : ((emitter)->error = YAML_MEMORY_ERROR, 0)))
        return 0;

    return yaml_emitter_emit_node(data_flow, emitter, event, 0, 1, 0, 0);
}





static int
yaml_emitter_emit_flow_mapping_key(int *data_flow, yaml_emitter_t *emitter,
        yaml_event_t *event, int first)
{
    if (first)
    {
        if (!yaml_emitter_write_indicator(data_flow, emitter, "{", 1, 1, 0))
            return 0;
        if (!yaml_emitter_increase_indent(data_flow, emitter, 1, 0))
            return 0;
        emitter->flow_level ++;
    }

    if (event->type == YAML_MAPPING_END_EVENT)
    {
        emitter->flow_level --;
        emitter->indent = (*(--(emitter->indents).top));
        if (emitter->canonical && !first) {
            if (!yaml_emitter_write_indicator(data_flow, emitter, ",", 0, 0, 0))
                return 0;
            if (!yaml_emitter_write_indent(data_flow, emitter))
                return 0;
        }
        if (!yaml_emitter_write_indicator(data_flow, emitter, "}", 0, 0, 0))
            return 0;
        emitter->state = (*(--(emitter->states).top));

        return 1;
    }

    if (!first) {
        if (!yaml_emitter_write_indicator(data_flow, emitter, ",", 0, 0, 0))
            return 0;
    }
    if (emitter->canonical || emitter->column > emitter->best_width) {
        if (!yaml_emitter_write_indent(data_flow, emitter))
            return 0;
    }

    if (!emitter->canonical && yaml_emitter_check_simple_key(data_flow, emitter))
    {
        if (!(((emitter->states).top != (emitter->states).end || yaml_stack_extend(data_flow, (void **)&(emitter->states).start, (void **)&(emitter->states).top, (void **)&(emitter->states).end)) ? (*((emitter->states).top++) = YAML_EMIT_FLOW_MAPPING_SIMPLE_VALUE_STATE, 1) : ((emitter)->error = YAML_MEMORY_ERROR, 0))
                                                              )
            return 0;

        return yaml_emitter_emit_node(data_flow, emitter, event, 0, 0, 1, 1);
    }
    else
    {
        if (!yaml_emitter_write_indicator(data_flow, emitter, "?", 1, 0, 0))
            return 0;
        if (!(((emitter->states).top != (emitter->states).end || yaml_stack_extend(data_flow, (void **)&(emitter->states).start, (void **)&(emitter->states).top, (void **)&(emitter->states).end)) ? (*((emitter->states).top++) = YAML_EMIT_FLOW_MAPPING_VALUE_STATE, 1) : ((emitter)->error = YAML_MEMORY_ERROR, 0))
                                                       )
            return 0;

        return yaml_emitter_emit_node(data_flow, emitter, event, 0, 0, 1, 0);
    }
}





static int
yaml_emitter_emit_flow_mapping_value(int *data_flow, yaml_emitter_t *emitter,
        yaml_event_t *event, int simple)
{
    if (simple) {
        if (!yaml_emitter_write_indicator(data_flow, emitter, ":", 0, 0, 0))
            return 0;
    }
    else {
        if (emitter->canonical || emitter->column > emitter->best_width) {
            if (!yaml_emitter_write_indent(data_flow, emitter))
                return 0;
        }
        if (!yaml_emitter_write_indicator(data_flow, emitter, ":", 1, 0, 0))
            return 0;
    }
    if (!(((emitter->states).top != (emitter->states).end || yaml_stack_extend(data_flow, (void **)&(emitter->states).start, (void **)&(emitter->states).top, (void **)&(emitter->states).end)) ? (*((emitter->states).top++) = YAML_EMIT_FLOW_MAPPING_KEY_STATE, 1) : ((emitter)->error = YAML_MEMORY_ERROR, 0)))
        return 0;
    return yaml_emitter_emit_node(data_flow, emitter, event, 0, 0, 1, 0);
}





static int
yaml_emitter_emit_block_sequence_item(int *data_flow, yaml_emitter_t *emitter,
        yaml_event_t *event, int first)
{
    if (first)
    {
        if (!yaml_emitter_increase_indent(data_flow, emitter, 0,
                    (emitter->mapping_context && !emitter->indention)))
            return 0;
    }

    if (event->type == YAML_SEQUENCE_END_EVENT)
    {
        emitter->indent = (*(--(emitter->indents).top));
        emitter->state = (*(--(emitter->states).top));

        return 1;
    }

    if (!yaml_emitter_write_indent(data_flow, emitter))
        return 0;
    if (!yaml_emitter_write_indicator(data_flow, emitter, "-", 1, 0, 1))
        return 0;
    if (!(((emitter->states).top != (emitter->states).end || yaml_stack_extend(data_flow, (void **)&(emitter->states).start, (void **)&(emitter->states).top, (void **)&(emitter->states).end)) ? (*((emitter->states).top++) = YAML_EMIT_BLOCK_SEQUENCE_ITEM_STATE, 1) : ((emitter)->error = YAML_MEMORY_ERROR, 0))
                                                    )
        return 0;

    return yaml_emitter_emit_node(data_flow, emitter, event, 0, 1, 0, 0);
}





static int
yaml_emitter_emit_block_mapping_key(int *data_flow, yaml_emitter_t *emitter,
        yaml_event_t *event, int first)
{
    if (first)
    {
        if (!yaml_emitter_increase_indent(data_flow, emitter, 0, 0))
            return 0;
    }

    if (event->type == YAML_MAPPING_END_EVENT)
    {
        emitter->indent = (*(--(emitter->indents).top));
        emitter->state = (*(--(emitter->states).top));

        return 1;
    }

    if (!yaml_emitter_write_indent(data_flow, emitter))
        return 0;

    if (yaml_emitter_check_simple_key(data_flow, emitter))
    {
        if (!(((emitter->states).top != (emitter->states).end || yaml_stack_extend(data_flow, (void **)&(emitter->states).start, (void **)&(emitter->states).top, (void **)&(emitter->states).end)) ? (*((emitter->states).top++) = YAML_EMIT_BLOCK_MAPPING_SIMPLE_VALUE_STATE, 1) : ((emitter)->error = YAML_MEMORY_ERROR, 0))
                                                               )
            return 0;

        return yaml_emitter_emit_node(data_flow, emitter, event, 0, 0, 1, 1);
    }
    else
    {
        if (!yaml_emitter_write_indicator(data_flow, emitter, "?", 1, 0, 1))
            return 0;
        if (!(((emitter->states).top != (emitter->states).end || yaml_stack_extend(data_flow, (void **)&(emitter->states).start, (void **)&(emitter->states).top, (void **)&(emitter->states).end)) ? (*((emitter->states).top++) = YAML_EMIT_BLOCK_MAPPING_VALUE_STATE, 1) : ((emitter)->error = YAML_MEMORY_ERROR, 0))
                                                        )
            return 0;

        return yaml_emitter_emit_node(data_flow, emitter, event, 0, 0, 1, 0);
    }
}





static int
yaml_emitter_emit_block_mapping_value(int *data_flow, yaml_emitter_t *emitter,
        yaml_event_t *event, int simple)
{
    if (simple) {
        if (!yaml_emitter_write_indicator(data_flow, emitter, ":", 0, 0, 0))
            return 0;
    }
    else {
        if (!yaml_emitter_write_indent(data_flow, emitter))
            return 0;
        if (!yaml_emitter_write_indicator(data_flow, emitter, ":", 1, 0, 1))
            return 0;
    }
    if (!(((emitter->states).top != (emitter->states).end || yaml_stack_extend(data_flow, (void **)&(emitter->states).start, (void **)&(emitter->states).top, (void **)&(emitter->states).end)) ? (*((emitter->states).top++) = YAML_EMIT_BLOCK_MAPPING_KEY_STATE, 1) : ((emitter)->error = YAML_MEMORY_ERROR, 0))
                                                  )
        return 0;

    return yaml_emitter_emit_node(data_flow, emitter, event, 0, 0, 1, 0);
}





static int
yaml_emitter_emit_node(int *data_flow, yaml_emitter_t *emitter, yaml_event_t *event,
        int root, int sequence, int mapping, int simple_key)
{
    emitter->root_context = root;
    emitter->sequence_context = sequence;
    emitter->mapping_context = mapping;
    emitter->simple_key_context = simple_key;

    switch (event->type)
    {
        case YAML_ALIAS_EVENT:
            return yaml_emitter_emit_alias(data_flow, emitter, event);

        case YAML_SCALAR_EVENT:
            return yaml_emitter_emit_scalar(data_flow, emitter, event);

        case YAML_SEQUENCE_START_EVENT:
            return yaml_emitter_emit_sequence_start(data_flow, emitter, event);

        case YAML_MAPPING_START_EVENT:
            return yaml_emitter_emit_mapping_start(data_flow, emitter, event);

        default:
            return yaml_emitter_set_emitter_error(data_flow, emitter,
                    "expected SCALAR, SEQUENCE-START, MAPPING-START, or ALIAS");
    }

    return 0;
}





static int
yaml_emitter_emit_alias(int *data_flow, yaml_emitter_t *emitter, yaml_event_t *event __attribute__((__unused__)))
{
    if (!yaml_emitter_process_anchor(data_flow, emitter))
        return 0;
    emitter->state = (*(--(emitter->states).top));

    return 1;
}





static int
yaml_emitter_emit_scalar(int *data_flow, yaml_emitter_t *emitter, yaml_event_t *event)
{
    if (!yaml_emitter_select_scalar_style(data_flow, emitter, event))
        return 0;
    if (!yaml_emitter_process_anchor(data_flow, emitter))
        return 0;
    if (!yaml_emitter_process_tag(data_flow, emitter))
        return 0;
    if (!yaml_emitter_increase_indent(data_flow, emitter, 1, 0))
        return 0;
    if (!yaml_emitter_process_scalar(data_flow, emitter))
        return 0;
    emitter->indent = (*(--(emitter->indents).top));
    emitter->state = (*(--(emitter->states).top));

    return 1;
}





static int
yaml_emitter_emit_sequence_start(int *data_flow, yaml_emitter_t *emitter, yaml_event_t *event)
{
    if (!yaml_emitter_process_anchor(data_flow, emitter))
        return 0;
    if (!yaml_emitter_process_tag(data_flow, emitter))
        return 0;

    if (emitter->flow_level || emitter->canonical
            || event->data.sequence_start.style == YAML_FLOW_SEQUENCE_STYLE
            || yaml_emitter_check_empty_sequence(data_flow, emitter)) {
        emitter->state = YAML_EMIT_FLOW_SEQUENCE_FIRST_ITEM_STATE;
    }
    else {
        emitter->state = YAML_EMIT_BLOCK_SEQUENCE_FIRST_ITEM_STATE;
    }

    return 1;
}





static int
yaml_emitter_emit_mapping_start(int *data_flow, yaml_emitter_t *emitter, yaml_event_t *event)
{
    if (!yaml_emitter_process_anchor(data_flow, emitter))
        return 0;
    if (!yaml_emitter_process_tag(data_flow, emitter))
        return 0;

    if (emitter->flow_level || emitter->canonical
            || event->data.mapping_start.style == YAML_FLOW_MAPPING_STYLE
            || yaml_emitter_check_empty_mapping(data_flow, emitter)) {
        emitter->state = YAML_EMIT_FLOW_MAPPING_FIRST_KEY_STATE;
    }
    else {
        emitter->state = YAML_EMIT_BLOCK_MAPPING_FIRST_KEY_STATE;
    }

    return 1;
}





static int
yaml_emitter_check_empty_document(int *data_flow, yaml_emitter_t *emitter __attribute__((__unused__)))
{
    return 0;
}





static int
yaml_emitter_check_empty_sequence(int *data_flow, yaml_emitter_t *emitter)
{
    if (emitter->events.tail - emitter->events.head < 2)
        return 0;

    return (emitter->events.head[0].type == YAML_SEQUENCE_START_EVENT
            && emitter->events.head[1].type == YAML_SEQUENCE_END_EVENT);
}





static int
yaml_emitter_check_empty_mapping(int *data_flow, yaml_emitter_t *emitter)
{
    if (emitter->events.tail - emitter->events.head < 2)
        return 0;

    return (emitter->events.head[0].type == YAML_MAPPING_START_EVENT
            && emitter->events.head[1].type == YAML_MAPPING_END_EVENT);
}





static int
yaml_emitter_check_simple_key(int *data_flow, yaml_emitter_t *emitter)
{
    yaml_event_t *event = emitter->events.head;
    size_t length = 0;

    switch (event->type)
    {
        case YAML_ALIAS_EVENT:
            length += emitter->anchor_data.anchor_length;
            break;

        case YAML_SCALAR_EVENT:
            if (emitter->scalar_data.multiline)
                return 0;
            length += emitter->anchor_data.anchor_length
                + emitter->tag_data.handle_length
                + emitter->tag_data.suffix_length
                + emitter->scalar_data.length;
            break;

        case YAML_SEQUENCE_START_EVENT:
            if (!yaml_emitter_check_empty_sequence(data_flow, emitter))
                return 0;
            length += emitter->anchor_data.anchor_length
                + emitter->tag_data.handle_length
                + emitter->tag_data.suffix_length;
            break;

        case YAML_MAPPING_START_EVENT:
            if (!yaml_emitter_check_empty_mapping(data_flow, emitter))
                return 0;
            length += emitter->anchor_data.anchor_length
                + emitter->tag_data.handle_length
                + emitter->tag_data.suffix_length;
            break;

        default:
            return 0;
    }

    if (length > 128)
        return 0;

    return 1;
}





static int
yaml_emitter_select_scalar_style(int *data_flow, yaml_emitter_t *emitter, yaml_event_t *event)
{
    yaml_scalar_style_t style = event->data.scalar.style;
    int no_tag = (!emitter->tag_data.handle && !emitter->tag_data.suffix);

    if (no_tag && !event->data.scalar.plain_implicit
            && !event->data.scalar.quoted_implicit) {
        return yaml_emitter_set_emitter_error(data_flow, emitter,
                "neither tag nor implicit flags are specified");
    }

    if (style == YAML_ANY_SCALAR_STYLE)
        style = YAML_PLAIN_SCALAR_STYLE;

    if (emitter->canonical)
        style = YAML_DOUBLE_QUOTED_SCALAR_STYLE;

    if (emitter->simple_key_context && emitter->scalar_data.multiline)
        style = YAML_DOUBLE_QUOTED_SCALAR_STYLE;

    if (style == YAML_PLAIN_SCALAR_STYLE)
    {
        if ((emitter->flow_level && !emitter->scalar_data.flow_plain_allowed)
                || (!emitter->flow_level && !emitter->scalar_data.block_plain_allowed))
            style = YAML_SINGLE_QUOTED_SCALAR_STYLE;
        if (!emitter->scalar_data.length
                && (emitter->flow_level || emitter->simple_key_context))
            style = YAML_SINGLE_QUOTED_SCALAR_STYLE;
        if (no_tag && !event->data.scalar.plain_implicit)
            style = YAML_SINGLE_QUOTED_SCALAR_STYLE;
    }

    if (style == YAML_SINGLE_QUOTED_SCALAR_STYLE)
    {
        if (!emitter->scalar_data.single_quoted_allowed)
            style = YAML_DOUBLE_QUOTED_SCALAR_STYLE;
    }

    if (style == YAML_LITERAL_SCALAR_STYLE || style == YAML_FOLDED_SCALAR_STYLE)
    {
        if (!emitter->scalar_data.block_allowed
                || emitter->flow_level || emitter->simple_key_context)
            style = YAML_DOUBLE_QUOTED_SCALAR_STYLE;
    }

    if (no_tag && !event->data.scalar.quoted_implicit
            && style != YAML_PLAIN_SCALAR_STYLE)
    {
        emitter->tag_data.handle = (yaml_char_t *)"!";
        emitter->tag_data.handle_length = 1;
    }

    emitter->scalar_data.style = style;

    return 1;
}





static int
yaml_emitter_process_anchor(int *data_flow, yaml_emitter_t *emitter)
{
    if (!emitter->anchor_data.anchor)
        return 1;

    if (!yaml_emitter_write_indicator(data_flow, emitter,
                (emitter->anchor_data.alias ? "*" : "&"), 1, 0, 0))
        return 0;

    return yaml_emitter_write_anchor(data_flow, emitter,
            emitter->anchor_data.anchor, emitter->anchor_data.anchor_length);
}





static int
yaml_emitter_process_tag(int *data_flow, yaml_emitter_t *emitter)
{
    if (!emitter->tag_data.handle && !emitter->tag_data.suffix)
        return 1;

    if (emitter->tag_data.handle)
    {
        if (!yaml_emitter_write_tag_handle(data_flow, emitter, emitter->tag_data.handle,
                    emitter->tag_data.handle_length))
            return 0;
        if (emitter->tag_data.suffix) {
            if (!yaml_emitter_write_tag_content(data_flow, emitter, emitter->tag_data.suffix,
                        emitter->tag_data.suffix_length, 0))
                return 0;
        }
    }
    else
    {
        if (!yaml_emitter_write_indicator(data_flow, emitter, "!<", 1, 0, 0))
            return 0;
        if (!yaml_emitter_write_tag_content(data_flow, emitter, emitter->tag_data.suffix,
                    emitter->tag_data.suffix_length, 0))
            return 0;
        if (!yaml_emitter_write_indicator(data_flow, emitter, ">", 0, 0, 0))
            return 0;
    }

    return 1;
}





static int
yaml_emitter_process_scalar(int *data_flow, yaml_emitter_t *emitter)
{
    switch (emitter->scalar_data.style)
    {
        case YAML_PLAIN_SCALAR_STYLE:
            return yaml_emitter_write_plain_scalar(data_flow, emitter,
                    emitter->scalar_data.value, emitter->scalar_data.length,
                    !emitter->simple_key_context);

        case YAML_SINGLE_QUOTED_SCALAR_STYLE:
            return yaml_emitter_write_single_quoted_scalar(data_flow, emitter,
                    emitter->scalar_data.value, emitter->scalar_data.length,
                    !emitter->simple_key_context);

        case YAML_DOUBLE_QUOTED_SCALAR_STYLE:
            return yaml_emitter_write_double_quoted_scalar(data_flow, emitter,
                    emitter->scalar_data.value, emitter->scalar_data.length,
                    !emitter->simple_key_context);

        case YAML_LITERAL_SCALAR_STYLE:
            return yaml_emitter_write_literal_scalar(data_flow, emitter,
                    emitter->scalar_data.value, emitter->scalar_data.length);

        case YAML_FOLDED_SCALAR_STYLE:
            return yaml_emitter_write_folded_scalar(data_flow, emitter,
                    emitter->scalar_data.value, emitter->scalar_data.length);

        default:
            
           ((
           1
           ) ? (void) (0) : __assert_fail (
           "1"
           , "emitter.c", 1322, __PRETTY_FUNCTION__))
                    ;
    }

    return 0;
}





static int
yaml_emitter_analyze_version_directive(int *data_flow, yaml_emitter_t *emitter,
        yaml_version_directive_t version_directive)
{
    if (version_directive.major != 1 || version_directive.minor != 1) {
        return yaml_emitter_set_emitter_error(data_flow, emitter,
                "incompatible %YAML directive");
    }

    return 1;
}





static int
yaml_emitter_analyze_tag_directive(int *data_flow, yaml_emitter_t *emitter,
        yaml_tag_directive_t tag_directive)
{
    yaml_string_t handle={0};
    yaml_string_t prefix={0};
    size_t handle_length={0};
    size_t prefix_length={0};

    handle_length = strlen((char *)tag_directive.handle);
    prefix_length = strlen((char *)tag_directive.prefix);
    ((handle).start = (tag_directive.handle), (handle).end = (tag_directive.handle)+(handle_length), (handle).pointer = (tag_directive.handle));
    ((prefix).start = (tag_directive.prefix), (prefix).end = (tag_directive.prefix)+(prefix_length), (prefix).pointer = (tag_directive.prefix));

    if (handle.start == handle.end) {
        return yaml_emitter_set_emitter_error(data_flow, emitter,
                "tag handle must not be empty");
    }

    if (handle.start[0] != '!') {
        return yaml_emitter_set_emitter_error(data_flow, emitter,
                "tag handle must start with '!'");
    }

    if (handle.end[-1] != '!') {
        return yaml_emitter_set_emitter_error(data_flow, emitter,
                "tag handle must end with '!'");
    }

    handle.pointer ++;

    while (handle.pointer < handle.end-1) {
        if (!((((handle)).pointer[0] >= (yaml_char_t) '0' && ((handle)).pointer[0] <= (yaml_char_t) '9') || (((handle)).pointer[0] >= (yaml_char_t) 'A' && ((handle)).pointer[0] <= (yaml_char_t) 'Z') || (((handle)).pointer[0] >= (yaml_char_t) 'a' && ((handle)).pointer[0] <= (yaml_char_t) 'z') || ((handle)).pointer[0] == '_' || ((handle)).pointer[0] == '-')) {
            return yaml_emitter_set_emitter_error(data_flow, emitter,
                    "tag handle must contain alphanumerical characters only");
        }
        ((handle).pointer += (((((handle))).pointer[0] & 0x80) == 0x00 ? 1 : ((((handle))).pointer[0] & 0xE0) == 0xC0 ? 2 : ((((handle))).pointer[0] & 0xF0) == 0xE0 ? 3 : ((((handle))).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
    }

    if (prefix.start == prefix.end) {
        return yaml_emitter_set_emitter_error(data_flow, emitter,
                "tag prefix must not be empty");
    }

    return 1;
}





static int
yaml_emitter_analyze_anchor(int *data_flow, yaml_emitter_t *emitter,
        yaml_char_t *anchor, int alias)
{
    size_t anchor_length={0};
    yaml_string_t string={0};

    anchor_length = strlen((char *)anchor);
    ((string).start = (anchor), (string).end = (anchor)+(anchor_length), (string).pointer = (anchor));

    if (string.start == string.end) {
        return yaml_emitter_set_emitter_error(data_flow, emitter, alias ?
                "alias value must not be empty" :
                "anchor value must not be empty");
    }

    while (string.pointer != string.end) {
        if (!((((string)).pointer[0] >= (yaml_char_t) '0' && ((string)).pointer[0] <= (yaml_char_t) '9') || (((string)).pointer[0] >= (yaml_char_t) 'A' && ((string)).pointer[0] <= (yaml_char_t) 'Z') || (((string)).pointer[0] >= (yaml_char_t) 'a' && ((string)).pointer[0] <= (yaml_char_t) 'z') || ((string)).pointer[0] == '_' || ((string)).pointer[0] == '-')) {
            return yaml_emitter_set_emitter_error(data_flow, emitter, alias ?
                    "alias value must contain alphanumerical characters only" :
                    "anchor value must contain alphanumerical characters only");
        }
        ((string).pointer += (((((string))).pointer[0] & 0x80) == 0x00 ? 1 : ((((string))).pointer[0] & 0xE0) == 0xC0 ? 2 : ((((string))).pointer[0] & 0xF0) == 0xE0 ? 3 : ((((string))).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
    }

    emitter->anchor_data.anchor = string.start;
    emitter->anchor_data.anchor_length = string.end - string.start;
    emitter->anchor_data.alias = alias;

    return 1;
}





static int
yaml_emitter_analyze_tag(int *data_flow, yaml_emitter_t *emitter,
        yaml_char_t *tag)
{
    size_t tag_length={0};
    yaml_string_t string={0};
    yaml_tag_directive_t *tag_directive={0};

    tag_length = strlen((char *)tag);
    ((string).start = (tag), (string).end = (tag)+(tag_length), (string).pointer = (tag));

    if (string.start == string.end) {
        return yaml_emitter_set_emitter_error(data_flow, emitter,
                "tag value must not be empty");
    }

    for (tag_directive = emitter->tag_directives.start;
            tag_directive != emitter->tag_directives.top; tag_directive ++) {
        size_t prefix_length = strlen((char *)tag_directive->prefix);
        if (prefix_length < (size_t)(string.end - string.start)
                && strncmp((char *)tag_directive->prefix, (char *)string.start,
                    prefix_length) == 0)
        {
            emitter->tag_data.handle = tag_directive->handle;
            emitter->tag_data.handle_length =
                strlen((char *)tag_directive->handle);
            emitter->tag_data.suffix = string.start + prefix_length;
            emitter->tag_data.suffix_length =
                (string.end - string.start) - prefix_length;
            return 1;
        }
    }

    emitter->tag_data.suffix = string.start;
    emitter->tag_data.suffix_length = string.end - string.start;

    return 1;
}





static int
yaml_emitter_analyze_scalar(int *data_flow, yaml_emitter_t *emitter,
        yaml_char_t *value, size_t length)
{
    yaml_string_t string={0};

    int block_indicators = 0;
    int flow_indicators = 0;
    int line_breaks = 0;
    int special_characters = 0;

    int leading_space = 0;
    int leading_break = 0;
    int trailing_space = 0;
    int trailing_break = 0;
    int break_space = 0;
    int space_break = 0;

    int preceded_by_whitespace = 0;
    int followed_by_whitespace = 0;
    int previous_space = 0;
    int previous_break = 0;

    ((string).start = (value), (string).end = (value)+(length), (string).pointer = (value));

    emitter->scalar_data.value = value;
    emitter->scalar_data.length = length;

    if (string.start == string.end)
    {
        emitter->scalar_data.multiline = 0;
        emitter->scalar_data.flow_plain_allowed = 0;
        emitter->scalar_data.block_plain_allowed = 1;
        emitter->scalar_data.single_quoted_allowed = 1;
        emitter->scalar_data.block_allowed = 0;

        return 1;
    }

    if ((((string).pointer[0] == (yaml_char_t)('-'))
                && ((string).pointer[1] == (yaml_char_t)('-'))
                && ((string).pointer[2] == (yaml_char_t)('-')))
            || (((string).pointer[0] == (yaml_char_t)('.'))
                && ((string).pointer[1] == (yaml_char_t)('.'))
                && ((string).pointer[2] == (yaml_char_t)('.')))) {
        block_indicators = 1;
        flow_indicators = 1;
    }

    preceded_by_whitespace = 1;
    followed_by_whitespace = (((((((string)))).pointer[(((((((string)).pointer[0] & 0x80) == 0x00 ? 1 : (((string)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((string)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((string)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0))))] == (yaml_char_t)(' ')) || (((((string)))).pointer[(((((((string)).pointer[0] & 0x80) == 0x00 ? 1 : (((string)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((string)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((string)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0))))] == (yaml_char_t)('\t'))) || (((((((string)))).pointer[(((((((string)).pointer[0] & 0x80) == 0x00 ? 1 : (((string)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((string)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((string)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0))))] == (yaml_char_t)('\r')) || (((((string)))).pointer[(((((((string)).pointer[0] & 0x80) == 0x00 ? 1 : (((string)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((string)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((string)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0))))] == (yaml_char_t)('\n')) || ((((((string)))).pointer[(((((((string)).pointer[0] & 0x80) == 0x00 ? 1 : (((string)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((string)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((string)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0))))] == (yaml_char_t)('\xC2')) && (((((string)))).pointer[(((((((string)).pointer[0] & 0x80) == 0x00 ? 1 : (((string)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((string)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((string)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0))))+1] == (yaml_char_t)('\x85'))) || ((((((string)))).pointer[(((((((string)).pointer[0] & 0x80) == 0x00 ? 1 : (((string)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((string)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((string)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0))))] == (yaml_char_t)('\xE2')) && (((((string)))).pointer[(((((((string)).pointer[0] & 0x80) == 0x00 ? 1 : (((string)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((string)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((string)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0))))+1] == (yaml_char_t)('\x80')) && (((((string)))).pointer[(((((((string)).pointer[0] & 0x80) == 0x00 ? 1 : (((string)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((string)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((string)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0))))+2] == (yaml_char_t)('\xA8'))) || ((((((string)))).pointer[(((((((string)).pointer[0] & 0x80) == 0x00 ? 1 : (((string)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((string)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((string)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0))))] == (yaml_char_t)('\xE2')) && (((((string)))).pointer[(((((((string)).pointer[0] & 0x80) == 0x00 ? 1 : (((string)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((string)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((string)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0))))+1] == (yaml_char_t)('\x80')) && (((((string)))).pointer[(((((((string)).pointer[0] & 0x80) == 0x00 ? 1 : (((string)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((string)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((string)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0))))+2] == (yaml_char_t)('\xA9')))) || (((((string)))).pointer[(((((((string)).pointer[0] & 0x80) == 0x00 ? 1 : (((string)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((string)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((string)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0))))] == (yaml_char_t)('\0'))));

    while (string.pointer != string.end)
    {
        if (string.start == string.pointer)
        {
            if ((((string)).pointer[0] == (yaml_char_t)(('#'))) || (((string)).pointer[0] == (yaml_char_t)((',')))
                    || (((string)).pointer[0] == (yaml_char_t)(('['))) || (((string)).pointer[0] == (yaml_char_t)((']')))
                    || (((string)).pointer[0] == (yaml_char_t)(('{'))) || (((string)).pointer[0] == (yaml_char_t)(('}')))
                    || (((string)).pointer[0] == (yaml_char_t)(('&'))) || (((string)).pointer[0] == (yaml_char_t)(('*')))
                    || (((string)).pointer[0] == (yaml_char_t)(('!'))) || (((string)).pointer[0] == (yaml_char_t)(('|')))
                    || (((string)).pointer[0] == (yaml_char_t)(('>'))) || (((string)).pointer[0] == (yaml_char_t)(('\'')))
                    || (((string)).pointer[0] == (yaml_char_t)(('"'))) || (((string)).pointer[0] == (yaml_char_t)(('%')))
                    || (((string)).pointer[0] == (yaml_char_t)(('@'))) || (((string)).pointer[0] == (yaml_char_t)(('`')))) {
                flow_indicators = 1;
                block_indicators = 1;
            }

            if ((((string)).pointer[0] == (yaml_char_t)(('?'))) || (((string)).pointer[0] == (yaml_char_t)((':')))) {
                flow_indicators = 1;
                if (followed_by_whitespace) {
                    block_indicators = 1;
                }
            }

            if ((((string)).pointer[0] == (yaml_char_t)(('-'))) && followed_by_whitespace) {
                flow_indicators = 1;
                block_indicators = 1;
            }
        }
        else
        {
            if ((((string)).pointer[0] == (yaml_char_t)((','))) || (((string)).pointer[0] == (yaml_char_t)(('?')))
                    || (((string)).pointer[0] == (yaml_char_t)(('['))) || (((string)).pointer[0] == (yaml_char_t)((']')))
                    || (((string)).pointer[0] == (yaml_char_t)(('{'))) || (((string)).pointer[0] == (yaml_char_t)(('}')))) {
                flow_indicators = 1;
            }

            if ((((string)).pointer[0] == (yaml_char_t)((':')))) {
                flow_indicators = 1;
                if (followed_by_whitespace) {
                    block_indicators = 1;
                }
            }

            if ((((string)).pointer[0] == (yaml_char_t)(('#'))) && preceded_by_whitespace) {
                flow_indicators = 1;
                block_indicators = 1;
            }
        }

        if (!((((string)).pointer[0] == 0x0A) || (((string)).pointer[0] >= 0x20 && ((string)).pointer[0] <= 0x7E) || (((string)).pointer[0] == 0xC2 && ((string)).pointer[0 +1] >= 0xA0) || (((string)).pointer[0] > 0xC2 && ((string)).pointer[0] < 0xED) || (((string)).pointer[0] == 0xED && ((string)).pointer[0 +1] < 0xA0) || (((string)).pointer[0] == 0xEE) || (((string)).pointer[0] == 0xEF && !(((string)).pointer[0 +1] == 0xBB && ((string)).pointer[0 +2] == 0xBF) && !(((string)).pointer[0 +1] == 0xBF && (((string)).pointer[0 +2] == 0xBE || ((string)).pointer[0 +2] == 0xBF))))
                || (!(((string)).pointer[0] <= (yaml_char_t) '\x7F') && !emitter->unicode)) {
            special_characters = 1;
        }

        if ((((((string))).pointer[(0)] == (yaml_char_t)('\r')) || ((((string))).pointer[(0)] == (yaml_char_t)('\n')) || (((((string))).pointer[(0)] == (yaml_char_t)('\xC2')) && ((((string))).pointer[(0)+1] == (yaml_char_t)('\x85'))) || (((((string))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((string))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((string))).pointer[(0)+2] == (yaml_char_t)('\xA8'))) || (((((string))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((string))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((string))).pointer[(0)+2] == (yaml_char_t)('\xA9'))))) {
            line_breaks = 1;
        }

        if (((((string))).pointer[(0)] == (yaml_char_t)(' ')))
        {
            if (string.start == string.pointer) {
                leading_space = 1;
            }
            if (string.pointer+((((string)).pointer[0] & 0x80) == 0x00 ? 1 : (((string)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((string)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((string)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0) == string.end) {
                trailing_space = 1;
            }
            if (previous_break) {
                break_space = 1;
            }
            previous_space = 1;
            previous_break = 0;
        }
        else if ((((((string))).pointer[(0)] == (yaml_char_t)('\r')) || ((((string))).pointer[(0)] == (yaml_char_t)('\n')) || (((((string))).pointer[(0)] == (yaml_char_t)('\xC2')) && ((((string))).pointer[(0)+1] == (yaml_char_t)('\x85'))) || (((((string))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((string))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((string))).pointer[(0)+2] == (yaml_char_t)('\xA8'))) || (((((string))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((string))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((string))).pointer[(0)+2] == (yaml_char_t)('\xA9')))))
        {
            if (string.start == string.pointer) {
                leading_break = 1;
            }
            if (string.pointer+((((string)).pointer[0] & 0x80) == 0x00 ? 1 : (((string)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((string)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((string)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0) == string.end) {
                trailing_break = 1;
            }
            if (previous_space) {
                space_break = 1;
            }
            previous_space = 0;
            previous_break = 1;
        }
        else
        {
            previous_space = 0;
            previous_break = 0;
        }

        preceded_by_whitespace = ((((((((string))))).pointer[(((0)))] == (yaml_char_t)(' ')) || ((((((string))))).pointer[(((0)))] == (yaml_char_t)('\t'))) || ((((((((string))))).pointer[(((0)))] == (yaml_char_t)('\r')) || ((((((string))))).pointer[(((0)))] == (yaml_char_t)('\n')) || (((((((string))))).pointer[(((0)))] == (yaml_char_t)('\xC2')) && ((((((string))))).pointer[(((0)))+1] == (yaml_char_t)('\x85'))) || (((((((string))))).pointer[(((0)))] == (yaml_char_t)('\xE2')) && ((((((string))))).pointer[(((0)))+1] == (yaml_char_t)('\x80')) && ((((((string))))).pointer[(((0)))+2] == (yaml_char_t)('\xA8'))) || (((((((string))))).pointer[(((0)))] == (yaml_char_t)('\xE2')) && ((((((string))))).pointer[(((0)))+1] == (yaml_char_t)('\x80')) && ((((((string))))).pointer[(((0)))+2] == (yaml_char_t)('\xA9')))) || ((((((string))))).pointer[(((0)))] == (yaml_char_t)('\0'))));
        ((string).pointer += (((((string))).pointer[0] & 0x80) == 0x00 ? 1 : ((((string))).pointer[0] & 0xE0) == 0xC0 ? 2 : ((((string))).pointer[0] & 0xF0) == 0xE0 ? 3 : ((((string))).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
        if (string.pointer != string.end) {
            followed_by_whitespace = (((((((string)))).pointer[(((((((string)).pointer[0] & 0x80) == 0x00 ? 1 : (((string)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((string)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((string)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0))))] == (yaml_char_t)(' ')) || (((((string)))).pointer[(((((((string)).pointer[0] & 0x80) == 0x00 ? 1 : (((string)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((string)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((string)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0))))] == (yaml_char_t)('\t'))) || (((((((string)))).pointer[(((((((string)).pointer[0] & 0x80) == 0x00 ? 1 : (((string)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((string)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((string)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0))))] == (yaml_char_t)('\r')) || (((((string)))).pointer[(((((((string)).pointer[0] & 0x80) == 0x00 ? 1 : (((string)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((string)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((string)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0))))] == (yaml_char_t)('\n')) || ((((((string)))).pointer[(((((((string)).pointer[0] & 0x80) == 0x00 ? 1 : (((string)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((string)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((string)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0))))] == (yaml_char_t)('\xC2')) && (((((string)))).pointer[(((((((string)).pointer[0] & 0x80) == 0x00 ? 1 : (((string)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((string)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((string)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0))))+1] == (yaml_char_t)('\x85'))) || ((((((string)))).pointer[(((((((string)).pointer[0] & 0x80) == 0x00 ? 1 : (((string)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((string)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((string)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0))))] == (yaml_char_t)('\xE2')) && (((((string)))).pointer[(((((((string)).pointer[0] & 0x80) == 0x00 ? 1 : (((string)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((string)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((string)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0))))+1] == (yaml_char_t)('\x80')) && (((((string)))).pointer[(((((((string)).pointer[0] & 0x80) == 0x00 ? 1 : (((string)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((string)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((string)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0))))+2] == (yaml_char_t)('\xA8'))) || ((((((string)))).pointer[(((((((string)).pointer[0] & 0x80) == 0x00 ? 1 : (((string)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((string)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((string)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0))))] == (yaml_char_t)('\xE2')) && (((((string)))).pointer[(((((((string)).pointer[0] & 0x80) == 0x00 ? 1 : (((string)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((string)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((string)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0))))+1] == (yaml_char_t)('\x80')) && (((((string)))).pointer[(((((((string)).pointer[0] & 0x80) == 0x00 ? 1 : (((string)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((string)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((string)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0))))+2] == (yaml_char_t)('\xA9')))) || (((((string)))).pointer[(((((((string)).pointer[0] & 0x80) == 0x00 ? 1 : (((string)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((string)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((string)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0))))] == (yaml_char_t)('\0'))));
        }
    }

    emitter->scalar_data.multiline = line_breaks;

    emitter->scalar_data.flow_plain_allowed = 1;
    emitter->scalar_data.block_plain_allowed = 1;
    emitter->scalar_data.single_quoted_allowed = 1;
    emitter->scalar_data.block_allowed = 1;

    if (leading_space || leading_break || trailing_space || trailing_break) {
        emitter->scalar_data.flow_plain_allowed = 0;
        emitter->scalar_data.block_plain_allowed = 0;
    }

    if (trailing_space) {
        emitter->scalar_data.block_allowed = 0;
    }

    if (break_space) {
        emitter->scalar_data.flow_plain_allowed = 0;
        emitter->scalar_data.block_plain_allowed = 0;
        emitter->scalar_data.single_quoted_allowed = 0;
    }

    if (space_break || special_characters) {
        emitter->scalar_data.flow_plain_allowed = 0;
        emitter->scalar_data.block_plain_allowed = 0;
        emitter->scalar_data.single_quoted_allowed = 0;
        emitter->scalar_data.block_allowed = 0;
    }

    if (line_breaks) {
        emitter->scalar_data.flow_plain_allowed = 0;
        emitter->scalar_data.block_plain_allowed = 0;
    }

    if (flow_indicators) {
        emitter->scalar_data.flow_plain_allowed = 0;
    }

    if (block_indicators) {
        emitter->scalar_data.block_plain_allowed = 0;
    }

    return 1;
}





static int
yaml_emitter_analyze_event(int *data_flow, yaml_emitter_t *emitter,
        yaml_event_t *event)
{
    emitter->anchor_data.anchor = 
                                 ((void *)0)
                                     ;
    emitter->anchor_data.anchor_length = 0;
    emitter->tag_data.handle = 
                              ((void *)0)
                                  ;
    emitter->tag_data.handle_length = 0;
    emitter->tag_data.suffix = 
                              ((void *)0)
                                  ;
    emitter->tag_data.suffix_length = 0;
    emitter->scalar_data.value = 
                                ((void *)0)
                                    ;
    emitter->scalar_data.length = 0;

    switch (event->type)
    {
        case YAML_ALIAS_EVENT:
            if (!yaml_emitter_analyze_anchor(data_flow, emitter,
                        event->data.alias.anchor, 1))
                return 0;
            return 1;

        case YAML_SCALAR_EVENT:
            if (event->data.scalar.anchor) {
                if (!yaml_emitter_analyze_anchor(data_flow, emitter,
                            event->data.scalar.anchor, 0))
                    return 0;
            }
            if (event->data.scalar.tag && (emitter->canonical ||
                        (!event->data.scalar.plain_implicit
                         && !event->data.scalar.quoted_implicit))) {
                if (!yaml_emitter_analyze_tag(data_flow, emitter, event->data.scalar.tag))
                    return 0;
            }
            if (!yaml_emitter_analyze_scalar(data_flow, emitter,
                        event->data.scalar.value, event->data.scalar.length))
                return 0;
            return 1;

        case YAML_SEQUENCE_START_EVENT:
            if (event->data.sequence_start.anchor) {
                if (!yaml_emitter_analyze_anchor(data_flow, emitter,
                            event->data.sequence_start.anchor, 0))
                    return 0;
            }
            if (event->data.sequence_start.tag && (emitter->canonical ||
                        !event->data.sequence_start.implicit)) {
                if (!yaml_emitter_analyze_tag(data_flow, emitter,
                            event->data.sequence_start.tag))
                    return 0;
            }
            return 1;

        case YAML_MAPPING_START_EVENT:
            if (event->data.mapping_start.anchor) {
                if (!yaml_emitter_analyze_anchor(data_flow, emitter,
                            event->data.mapping_start.anchor, 0))
                    return 0;
            }
            if (event->data.mapping_start.tag && (emitter->canonical ||
                        !event->data.mapping_start.implicit)) {
                if (!yaml_emitter_analyze_tag(data_flow, emitter,
                            event->data.mapping_start.tag))
                    return 0;
            }
            return 1;

        default:
            return 1;
    }
}





static int
yaml_emitter_write_bom(int *data_flow, yaml_emitter_t *emitter)
{
    if (!((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter))) return 0;

    *(emitter->buffer.pointer++) = (yaml_char_t) '\xEF';
    *(emitter->buffer.pointer++) = (yaml_char_t) '\xBB';
    *(emitter->buffer.pointer++) = (yaml_char_t) '\xBF';

    return 1;
}

static int
yaml_emitter_write_indent(int *data_flow, yaml_emitter_t *emitter)
{
    int indent = (emitter->indent >= 0) ? emitter->indent : 0;

    if (!emitter->indention || emitter->column > indent
            || (emitter->column == indent && !emitter->whitespace)) {
        if (!(((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter)) && ((emitter->line_break == YAML_CR_BREAK ? (*(emitter->buffer.pointer++) = (yaml_char_t) '\r') : emitter->line_break == YAML_LN_BREAK ? (*(emitter->buffer.pointer++) = (yaml_char_t) '\n') : emitter->line_break == YAML_CRLN_BREAK ? (*(emitter->buffer.pointer++) = (yaml_char_t) '\r', *(emitter->buffer.pointer++) = (yaml_char_t) '\n') : 0), emitter->column = 0, emitter->line ++, 1))) return 0;
    }

    while (emitter->column < indent) {
        if (!(((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter)) && (*(emitter->buffer.pointer++) = (yaml_char_t)(' '), emitter->column ++, 1))) return 0;
    }

    emitter->whitespace = 1;
    emitter->indention = 1;

    return 1;
}

static int
yaml_emitter_write_indicator(int *data_flow, yaml_emitter_t *emitter,
        char *indicator, int need_whitespace,
        int is_whitespace, int is_indention)
{
    size_t indicator_length={0};
    yaml_string_t string={0};

    indicator_length = strlen(indicator);
    ((string).start = ((yaml_char_t *)indicator), (string).end = ((yaml_char_t *)indicator)+(indicator_length), (string).pointer = ((yaml_char_t *)indicator));

    if (need_whitespace && !emitter->whitespace) {
        if (!(((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter)) && (*(emitter->buffer.pointer++) = (yaml_char_t)(' '), emitter->column ++, 1))) return 0;
    }

    while (string.pointer != string.end) {
        if (!(((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter)) && (((*(string).pointer & 0x80) == 0x00 ? (*((emitter->buffer).pointer++) = *((string).pointer++)) : (*(string).pointer & 0xE0) == 0xC0 ? (*((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++)) : (*(string).pointer & 0xF0) == 0xE0 ? (*((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++)) : (*(string).pointer & 0xF8) == 0xF0 ? (*((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++)) : 0), emitter->column ++, 1))) return 0;
    }

    emitter->whitespace = is_whitespace;
    emitter->indention = (emitter->indention && is_indention);
    emitter->open_ended = 0;

    return 1;
}

static int
yaml_emitter_write_anchor(int *data_flow, yaml_emitter_t *emitter,
        yaml_char_t *value, size_t length)
{
    yaml_string_t string={0};
    ((string).start = (value), (string).end = (value)+(length), (string).pointer = (value));

    while (string.pointer != string.end) {
        if (!(((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter)) && (((*(string).pointer & 0x80) == 0x00 ? (*((emitter->buffer).pointer++) = *((string).pointer++)) : (*(string).pointer & 0xE0) == 0xC0 ? (*((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++)) : (*(string).pointer & 0xF0) == 0xE0 ? (*((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++)) : (*(string).pointer & 0xF8) == 0xF0 ? (*((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++)) : 0), emitter->column ++, 1))) return 0;
    }

    emitter->whitespace = 0;
    emitter->indention = 0;

    return 1;
}

static int
yaml_emitter_write_tag_handle(int *data_flow, yaml_emitter_t *emitter,
        yaml_char_t *value, size_t length)
{
    yaml_string_t string={0};
    ((string).start = (value), (string).end = (value)+(length), (string).pointer = (value));

    if (!emitter->whitespace) {
        if (!(((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter)) && (*(emitter->buffer.pointer++) = (yaml_char_t)(' '), emitter->column ++, 1))) return 0;
    }

    while (string.pointer != string.end) {
        if (!(((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter)) && (((*(string).pointer & 0x80) == 0x00 ? (*((emitter->buffer).pointer++) = *((string).pointer++)) : (*(string).pointer & 0xE0) == 0xC0 ? (*((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++)) : (*(string).pointer & 0xF0) == 0xE0 ? (*((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++)) : (*(string).pointer & 0xF8) == 0xF0 ? (*((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++)) : 0), emitter->column ++, 1))) return 0;
    }

    emitter->whitespace = 0;
    emitter->indention = 0;

    return 1;
}

static int
yaml_emitter_write_tag_content(int *data_flow, yaml_emitter_t *emitter,
        yaml_char_t *value, size_t length,
        int need_whitespace)
{
    yaml_string_t string={0};
    ((string).start = (value), (string).end = (value)+(length), (string).pointer = (value));

    if (need_whitespace && !emitter->whitespace) {
        if (!(((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter)) && (*(emitter->buffer.pointer++) = (yaml_char_t)(' '), emitter->column ++, 1))) return 0;
    }

    while (string.pointer != string.end) {
        if (((((string)).pointer[0] >= (yaml_char_t) '0' && ((string)).pointer[0] <= (yaml_char_t) '9') || (((string)).pointer[0] >= (yaml_char_t) 'A' && ((string)).pointer[0] <= (yaml_char_t) 'Z') || (((string)).pointer[0] >= (yaml_char_t) 'a' && ((string)).pointer[0] <= (yaml_char_t) 'z') || ((string)).pointer[0] == '_' || ((string)).pointer[0] == '-')
                || (((string)).pointer[0] == (yaml_char_t)((';'))) || (((string)).pointer[0] == (yaml_char_t)(('/')))
                || (((string)).pointer[0] == (yaml_char_t)(('?'))) || (((string)).pointer[0] == (yaml_char_t)((':')))
                || (((string)).pointer[0] == (yaml_char_t)(('@'))) || (((string)).pointer[0] == (yaml_char_t)(('&')))
                || (((string)).pointer[0] == (yaml_char_t)(('='))) || (((string)).pointer[0] == (yaml_char_t)(('+')))
                || (((string)).pointer[0] == (yaml_char_t)(('$'))) || (((string)).pointer[0] == (yaml_char_t)((',')))
                || (((string)).pointer[0] == (yaml_char_t)(('_'))) || (((string)).pointer[0] == (yaml_char_t)(('.')))
                || (((string)).pointer[0] == (yaml_char_t)(('~'))) || (((string)).pointer[0] == (yaml_char_t)(('*')))
                || (((string)).pointer[0] == (yaml_char_t)(('\''))) || (((string)).pointer[0] == (yaml_char_t)(('(')))
                || (((string)).pointer[0] == (yaml_char_t)((')'))) || (((string)).pointer[0] == (yaml_char_t)(('[')))
                || (((string)).pointer[0] == (yaml_char_t)((']')))) {
            if (!(((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter)) && (((*(string).pointer & 0x80) == 0x00 ? (*((emitter->buffer).pointer++) = *((string).pointer++)) : (*(string).pointer & 0xE0) == 0xC0 ? (*((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++)) : (*(string).pointer & 0xF0) == 0xE0 ? (*((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++)) : (*(string).pointer & 0xF8) == 0xF0 ? (*((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++)) : 0), emitter->column ++, 1))) return 0;
        }
        else {
            int width = ((((string)).pointer[0] & 0x80) == 0x00 ? 1 : (((string)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((string)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((string)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0);
            unsigned int value={0};
            while (width --) {
                value = *(string.pointer++);
                if (!(((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter)) && (*(emitter->buffer.pointer++) = (yaml_char_t)('%'), emitter->column ++, 1))) return 0;
                if (!(((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter)) && (*(emitter->buffer.pointer++) = (yaml_char_t)((value >> 4) + ((value >> 4) < 10 ? '0' : 'A' - 10)), emitter->column ++, 1))
                                                                   )
                    return 0;
                if (!(((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter)) && (*(emitter->buffer.pointer++) = (yaml_char_t)((value & 0x0F) + ((value & 0x0F) < 10 ? '0' : 'A' - 10)), emitter->column ++, 1))
                                                                     )
                    return 0;
            }
        }
    }

    emitter->whitespace = 0;
    emitter->indention = 0;

    return 1;
}

static int
yaml_emitter_write_plain_scalar(int *data_flow, yaml_emitter_t *emitter,
        yaml_char_t *value, size_t length, int allow_breaks)
{
    yaml_string_t string={0};
    int spaces = 0;
    int breaks = 0;

    ((string).start = (value), (string).end = (value)+(length), (string).pointer = (value));

    if (!emitter->whitespace) {
        if (!(((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter)) && (*(emitter->buffer.pointer++) = (yaml_char_t)(' '), emitter->column ++, 1))) return 0;
    }

    while (string.pointer != string.end)
    {
        if (((((string))).pointer[(0)] == (yaml_char_t)(' ')))
        {
            if (allow_breaks && !spaces
                    && emitter->column > emitter->best_width
                    && !(((string)).pointer[(1)] == (yaml_char_t)(' '))) {
                if (!yaml_emitter_write_indent(data_flow, emitter)) return 0;
                ((string).pointer += (((((string))).pointer[0] & 0x80) == 0x00 ? 1 : ((((string))).pointer[0] & 0xE0) == 0xC0 ? 2 : ((((string))).pointer[0] & 0xF0) == 0xE0 ? 3 : ((((string))).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
            }
            else {
                if (!(((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter)) && (((*(string).pointer & 0x80) == 0x00 ? (*((emitter->buffer).pointer++) = *((string).pointer++)) : (*(string).pointer & 0xE0) == 0xC0 ? (*((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++)) : (*(string).pointer & 0xF0) == 0xE0 ? (*((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++)) : (*(string).pointer & 0xF8) == 0xF0 ? (*((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++)) : 0), emitter->column ++, 1))) return 0;
            }
            spaces = 1;
        }
        else if ((((((string))).pointer[(0)] == (yaml_char_t)('\r')) || ((((string))).pointer[(0)] == (yaml_char_t)('\n')) || (((((string))).pointer[(0)] == (yaml_char_t)('\xC2')) && ((((string))).pointer[(0)+1] == (yaml_char_t)('\x85'))) || (((((string))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((string))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((string))).pointer[(0)+2] == (yaml_char_t)('\xA8'))) || (((((string))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((string))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((string))).pointer[(0)+2] == (yaml_char_t)('\xA9')))))
        {
            if (!breaks && (((string)).pointer[0] == (yaml_char_t)(('\n')))) {
                if (!(((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter)) && ((emitter->line_break == YAML_CR_BREAK ? (*(emitter->buffer.pointer++) = (yaml_char_t) '\r') : emitter->line_break == YAML_LN_BREAK ? (*(emitter->buffer.pointer++) = (yaml_char_t) '\n') : emitter->line_break == YAML_CRLN_BREAK ? (*(emitter->buffer.pointer++) = (yaml_char_t) '\r', *(emitter->buffer.pointer++) = (yaml_char_t) '\n') : 0), emitter->column = 0, emitter->line ++, 1))) return 0;
            }
            if (!(((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter)) && ((((string)).pointer[0] == (yaml_char_t)(('\n'))) ? ((((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter)) && ((emitter->line_break == YAML_CR_BREAK ? (*(emitter->buffer.pointer++) = (yaml_char_t) '\r') : emitter->line_break == YAML_LN_BREAK ? (*(emitter->buffer.pointer++) = (yaml_char_t) '\n') : emitter->line_break == YAML_CRLN_BREAK ? (*(emitter->buffer.pointer++) = (yaml_char_t) '\r', *(emitter->buffer.pointer++) = (yaml_char_t) '\n') : 0), emitter->column = 0, emitter->line ++, 1)), string.pointer ++, 1) : (((*(string).pointer & 0x80) == 0x00 ? (*((emitter->buffer).pointer++) = *((string).pointer++)) : (*(string).pointer & 0xE0) == 0xC0 ? (*((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++)) : (*(string).pointer & 0xF0) == 0xE0 ? (*((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++)) : (*(string).pointer & 0xF8) == 0xF0 ? (*((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++)) : 0), emitter->column = 0, emitter->line ++, 1)))) return 0;
            emitter->indention = 1;
            breaks = 1;
        }
        else
        {
            if (breaks) {
                if (!yaml_emitter_write_indent(data_flow, emitter)) return 0;
            }
            if (!(((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter)) && (((*(string).pointer & 0x80) == 0x00 ? (*((emitter->buffer).pointer++) = *((string).pointer++)) : (*(string).pointer & 0xE0) == 0xC0 ? (*((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++)) : (*(string).pointer & 0xF0) == 0xE0 ? (*((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++)) : (*(string).pointer & 0xF8) == 0xF0 ? (*((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++)) : 0), emitter->column ++, 1))) return 0;
            emitter->indention = 0;
            spaces = 0;
            breaks = 0;
        }
    }

    emitter->whitespace = 0;
    emitter->indention = 0;

    return 1;
}

static int
yaml_emitter_write_single_quoted_scalar(int *data_flow, yaml_emitter_t *emitter,
        yaml_char_t *value, size_t length, int allow_breaks)
{
    yaml_string_t string={0};
    int spaces = 0;
    int breaks = 0;

    ((string).start = (value), (string).end = (value)+(length), (string).pointer = (value));

    if (!yaml_emitter_write_indicator(data_flow, emitter, "'", 1, 0, 0))
        return 0;

    while (string.pointer != string.end)
    {
        if (((((string))).pointer[(0)] == (yaml_char_t)(' ')))
        {
            if (allow_breaks && !spaces
                    && emitter->column > emitter->best_width
                    && string.pointer != string.start
                    && string.pointer != string.end - 1
                    && !(((string)).pointer[(1)] == (yaml_char_t)(' '))) {
                if (!yaml_emitter_write_indent(data_flow, emitter)) return 0;
                ((string).pointer += (((((string))).pointer[0] & 0x80) == 0x00 ? 1 : ((((string))).pointer[0] & 0xE0) == 0xC0 ? 2 : ((((string))).pointer[0] & 0xF0) == 0xE0 ? 3 : ((((string))).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
            }
            else {
                if (!(((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter)) && (((*(string).pointer & 0x80) == 0x00 ? (*((emitter->buffer).pointer++) = *((string).pointer++)) : (*(string).pointer & 0xE0) == 0xC0 ? (*((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++)) : (*(string).pointer & 0xF0) == 0xE0 ? (*((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++)) : (*(string).pointer & 0xF8) == 0xF0 ? (*((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++)) : 0), emitter->column ++, 1))) return 0;
            }
            spaces = 1;
        }
        else if ((((((string))).pointer[(0)] == (yaml_char_t)('\r')) || ((((string))).pointer[(0)] == (yaml_char_t)('\n')) || (((((string))).pointer[(0)] == (yaml_char_t)('\xC2')) && ((((string))).pointer[(0)+1] == (yaml_char_t)('\x85'))) || (((((string))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((string))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((string))).pointer[(0)+2] == (yaml_char_t)('\xA8'))) || (((((string))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((string))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((string))).pointer[(0)+2] == (yaml_char_t)('\xA9')))))
        {
            if (!breaks && (((string)).pointer[0] == (yaml_char_t)(('\n')))) {
                if (!(((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter)) && ((emitter->line_break == YAML_CR_BREAK ? (*(emitter->buffer.pointer++) = (yaml_char_t) '\r') : emitter->line_break == YAML_LN_BREAK ? (*(emitter->buffer.pointer++) = (yaml_char_t) '\n') : emitter->line_break == YAML_CRLN_BREAK ? (*(emitter->buffer.pointer++) = (yaml_char_t) '\r', *(emitter->buffer.pointer++) = (yaml_char_t) '\n') : 0), emitter->column = 0, emitter->line ++, 1))) return 0;
            }
            if (!(((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter)) && ((((string)).pointer[0] == (yaml_char_t)(('\n'))) ? ((((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter)) && ((emitter->line_break == YAML_CR_BREAK ? (*(emitter->buffer.pointer++) = (yaml_char_t) '\r') : emitter->line_break == YAML_LN_BREAK ? (*(emitter->buffer.pointer++) = (yaml_char_t) '\n') : emitter->line_break == YAML_CRLN_BREAK ? (*(emitter->buffer.pointer++) = (yaml_char_t) '\r', *(emitter->buffer.pointer++) = (yaml_char_t) '\n') : 0), emitter->column = 0, emitter->line ++, 1)), string.pointer ++, 1) : (((*(string).pointer & 0x80) == 0x00 ? (*((emitter->buffer).pointer++) = *((string).pointer++)) : (*(string).pointer & 0xE0) == 0xC0 ? (*((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++)) : (*(string).pointer & 0xF0) == 0xE0 ? (*((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++)) : (*(string).pointer & 0xF8) == 0xF0 ? (*((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++)) : 0), emitter->column = 0, emitter->line ++, 1)))) return 0;
            emitter->indention = 1;
            breaks = 1;
        }
        else
        {
            if (breaks) {
                if (!yaml_emitter_write_indent(data_flow, emitter)) return 0;
            }
            if ((((string)).pointer[0] == (yaml_char_t)(('\'')))) {
                if (!(((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter)) && (*(emitter->buffer.pointer++) = (yaml_char_t)('\''), emitter->column ++, 1))) return 0;
            }
            if (!(((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter)) && (((*(string).pointer & 0x80) == 0x00 ? (*((emitter->buffer).pointer++) = *((string).pointer++)) : (*(string).pointer & 0xE0) == 0xC0 ? (*((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++)) : (*(string).pointer & 0xF0) == 0xE0 ? (*((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++)) : (*(string).pointer & 0xF8) == 0xF0 ? (*((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++)) : 0), emitter->column ++, 1))) return 0;
            emitter->indention = 0;
            spaces = 0;
            breaks = 0;
        }
    }

    if (!yaml_emitter_write_indicator(data_flow, emitter, "'", 0, 0, 0))
        return 0;

    emitter->whitespace = 0;
    emitter->indention = 0;

    return 1;
}

static int
yaml_emitter_write_double_quoted_scalar(int *data_flow, yaml_emitter_t *emitter,
        yaml_char_t *value, size_t length, int allow_breaks)
{
    yaml_string_t string={0};
    int spaces = 0;

    ((string).start = (value), (string).end = (value)+(length), (string).pointer = (value));

    if (!yaml_emitter_write_indicator(data_flow, emitter, "\"", 1, 0, 0))
        return 0;

    while (string.pointer != string.end)
    {
        if (!((((string)).pointer[0] == 0x0A) || (((string)).pointer[0] >= 0x20 && ((string)).pointer[0] <= 0x7E) || (((string)).pointer[0] == 0xC2 && ((string)).pointer[0 +1] >= 0xA0) || (((string)).pointer[0] > 0xC2 && ((string)).pointer[0] < 0xED) || (((string)).pointer[0] == 0xED && ((string)).pointer[0 +1] < 0xA0) || (((string)).pointer[0] == 0xEE) || (((string)).pointer[0] == 0xEF && !(((string)).pointer[0 +1] == 0xBB && ((string)).pointer[0 +2] == 0xBF) && !(((string)).pointer[0 +1] == 0xBF && (((string)).pointer[0 +2] == 0xBE || ((string)).pointer[0 +2] == 0xBF)))) || (!emitter->unicode && !(((string)).pointer[0] <= (yaml_char_t) '\x7F'))
                || ((((string)).pointer[(0)] == (yaml_char_t)('\xEF')) && (((string)).pointer[(0)+1] == (yaml_char_t)('\xBB')) && (((string)).pointer[(0)+2] == (yaml_char_t)('\xBF'))) || (((((string))).pointer[(0)] == (yaml_char_t)('\r')) || ((((string))).pointer[(0)] == (yaml_char_t)('\n')) || (((((string))).pointer[(0)] == (yaml_char_t)('\xC2')) && ((((string))).pointer[(0)+1] == (yaml_char_t)('\x85'))) || (((((string))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((string))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((string))).pointer[(0)+2] == (yaml_char_t)('\xA8'))) || (((((string))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((string))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((string))).pointer[(0)+2] == (yaml_char_t)('\xA9'))))
                || (((string)).pointer[0] == (yaml_char_t)(('"'))) || (((string)).pointer[0] == (yaml_char_t)(('\\'))))
        {
            unsigned char octet={0};
            unsigned int width={0};
            unsigned int value={0};
            int k={0};

            octet = string.pointer[0];
            width = (octet & 0x80) == 0x00 ? 1 :
                    (octet & 0xE0) == 0xC0 ? 2 :
                    (octet & 0xF0) == 0xE0 ? 3 :
                    (octet & 0xF8) == 0xF0 ? 4 : 0;
            value = (octet & 0x80) == 0x00 ? octet & 0x7F :
                    (octet & 0xE0) == 0xC0 ? octet & 0x1F :
                    (octet & 0xF0) == 0xE0 ? octet & 0x0F :
                    (octet & 0xF8) == 0xF0 ? octet & 0x07 : 0;
            for (k = 1; k < (int)width; k ++) {
                octet = string.pointer[k];
                value = (value << 6) + (octet & 0x3F);
            }
            string.pointer += width;

            if (!(((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter)) && (*(emitter->buffer.pointer++) = (yaml_char_t)('\\'), emitter->column ++, 1))) return 0;

            switch (value)
            {
                case 0x00:
                    if (!(((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter)) && (*(emitter->buffer.pointer++) = (yaml_char_t)('0'), emitter->column ++, 1))) return 0;
                    break;

                case 0x07:
                    if (!(((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter)) && (*(emitter->buffer.pointer++) = (yaml_char_t)('a'), emitter->column ++, 1))) return 0;
                    break;

                case 0x08:
                    if (!(((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter)) && (*(emitter->buffer.pointer++) = (yaml_char_t)('b'), emitter->column ++, 1))) return 0;
                    break;

                case 0x09:
                    if (!(((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter)) && (*(emitter->buffer.pointer++) = (yaml_char_t)('t'), emitter->column ++, 1))) return 0;
                    break;

                case 0x0A:
                    if (!(((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter)) && (*(emitter->buffer.pointer++) = (yaml_char_t)('n'), emitter->column ++, 1))) return 0;
                    break;

                case 0x0B:
                    if (!(((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter)) && (*(emitter->buffer.pointer++) = (yaml_char_t)('v'), emitter->column ++, 1))) return 0;
                    break;

                case 0x0C:
                    if (!(((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter)) && (*(emitter->buffer.pointer++) = (yaml_char_t)('f'), emitter->column ++, 1))) return 0;
                    break;

                case 0x0D:
                    if (!(((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter)) && (*(emitter->buffer.pointer++) = (yaml_char_t)('r'), emitter->column ++, 1))) return 0;
                    break;

                case 0x1B:
                    if (!(((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter)) && (*(emitter->buffer.pointer++) = (yaml_char_t)('e'), emitter->column ++, 1))) return 0;
                    break;

                case 0x22:
                    if (!(((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter)) && (*(emitter->buffer.pointer++) = (yaml_char_t)('\"'), emitter->column ++, 1))) return 0;
                    break;

                case 0x5C:
                    if (!(((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter)) && (*(emitter->buffer.pointer++) = (yaml_char_t)('\\'), emitter->column ++, 1))) return 0;
                    break;

                case 0x85:
                    if (!(((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter)) && (*(emitter->buffer.pointer++) = (yaml_char_t)('N'), emitter->column ++, 1))) return 0;
                    break;

                case 0xA0:
                    if (!(((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter)) && (*(emitter->buffer.pointer++) = (yaml_char_t)('_'), emitter->column ++, 1))) return 0;
                    break;

                case 0x2028:
                    if (!(((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter)) && (*(emitter->buffer.pointer++) = (yaml_char_t)('L'), emitter->column ++, 1))) return 0;
                    break;

                case 0x2029:
                    if (!(((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter)) && (*(emitter->buffer.pointer++) = (yaml_char_t)('P'), emitter->column ++, 1))) return 0;
                    break;

                default:
                    if (value <= 0xFF) {
                        if (!(((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter)) && (*(emitter->buffer.pointer++) = (yaml_char_t)('x'), emitter->column ++, 1))) return 0;
                        width = 2;
                    }
                    else if (value <= 0xFFFF) {
                        if (!(((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter)) && (*(emitter->buffer.pointer++) = (yaml_char_t)('u'), emitter->column ++, 1))) return 0;
                        width = 4;
                    }
                    else {
                        if (!(((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter)) && (*(emitter->buffer.pointer++) = (yaml_char_t)('U'), emitter->column ++, 1))) return 0;
                        width = 8;
                    }
                    for (k = (width-1)*4; k >= 0; k -= 4) {
                        int digit = (value >> k) & 0x0F;
                        if (!(((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter)) && (*(emitter->buffer.pointer++) = (yaml_char_t)(digit + (digit < 10 ? '0' : 'A'-10)), emitter->column ++, 1)))
                            return 0;
                    }
            }
            spaces = 0;
        }
        else if (((((string))).pointer[(0)] == (yaml_char_t)(' ')))
        {
            if (allow_breaks && !spaces
                    && emitter->column > emitter->best_width
                    && string.pointer != string.start
                    && string.pointer != string.end - 1) {
                if (!yaml_emitter_write_indent(data_flow, emitter)) return 0;
                if ((((string)).pointer[(1)] == (yaml_char_t)(' '))) {
                    if (!(((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter)) && (*(emitter->buffer.pointer++) = (yaml_char_t)('\\'), emitter->column ++, 1))) return 0;
                }
                ((string).pointer += (((((string))).pointer[0] & 0x80) == 0x00 ? 1 : ((((string))).pointer[0] & 0xE0) == 0xC0 ? 2 : ((((string))).pointer[0] & 0xF0) == 0xE0 ? 3 : ((((string))).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
            }
            else {
                if (!(((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter)) && (((*(string).pointer & 0x80) == 0x00 ? (*((emitter->buffer).pointer++) = *((string).pointer++)) : (*(string).pointer & 0xE0) == 0xC0 ? (*((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++)) : (*(string).pointer & 0xF0) == 0xE0 ? (*((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++)) : (*(string).pointer & 0xF8) == 0xF0 ? (*((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++)) : 0), emitter->column ++, 1))) return 0;
            }
            spaces = 1;
        }
        else
        {
            if (!(((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter)) && (((*(string).pointer & 0x80) == 0x00 ? (*((emitter->buffer).pointer++) = *((string).pointer++)) : (*(string).pointer & 0xE0) == 0xC0 ? (*((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++)) : (*(string).pointer & 0xF0) == 0xE0 ? (*((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++)) : (*(string).pointer & 0xF8) == 0xF0 ? (*((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++)) : 0), emitter->column ++, 1))) return 0;
            spaces = 0;
        }
    }

    if (!yaml_emitter_write_indicator(data_flow, emitter, "\"", 0, 0, 0))
        return 0;

    emitter->whitespace = 0;
    emitter->indention = 0;

    return 1;
}

static int
yaml_emitter_write_block_scalar_hints(int *data_flow, yaml_emitter_t *emitter,
        yaml_string_t string)
{
    char indent_hint[2]={0};
    char *chomp_hint = 
                      ((void *)0)
                          ;

    if (((((string))).pointer[(0)] == (yaml_char_t)(' ')) || (((((string))).pointer[(0)] == (yaml_char_t)('\r')) || ((((string))).pointer[(0)] == (yaml_char_t)('\n')) || (((((string))).pointer[(0)] == (yaml_char_t)('\xC2')) && ((((string))).pointer[(0)+1] == (yaml_char_t)('\x85'))) || (((((string))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((string))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((string))).pointer[(0)+2] == (yaml_char_t)('\xA8'))) || (((((string))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((string))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((string))).pointer[(0)+2] == (yaml_char_t)('\xA9')))))
    {
        indent_hint[0] = '0' + (char)emitter->best_indent;
        indent_hint[1] = '\0';
        if (!yaml_emitter_write_indicator(data_flow, emitter, indent_hint, 0, 0, 0))
            return 0;
    }

    emitter->open_ended = 0;

    string.pointer = string.end;
    if (string.start == string.pointer)
    {
        chomp_hint = "-";
    }
    else
    {
        do {
            string.pointer --;
        } while ((*string.pointer & 0xC0) == 0x80);
        if (!(((((string))).pointer[(0)] == (yaml_char_t)('\r')) || ((((string))).pointer[(0)] == (yaml_char_t)('\n')) || (((((string))).pointer[(0)] == (yaml_char_t)('\xC2')) && ((((string))).pointer[(0)+1] == (yaml_char_t)('\x85'))) || (((((string))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((string))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((string))).pointer[(0)+2] == (yaml_char_t)('\xA8'))) || (((((string))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((string))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((string))).pointer[(0)+2] == (yaml_char_t)('\xA9')))))
        {
            chomp_hint = "-";
        }
        else if (string.start == string.pointer)
        {
            chomp_hint = "+";
            emitter->open_ended = 1;
        }
        else
        {
            do {
                string.pointer --;
            } while ((*string.pointer & 0xC0) == 0x80);
            if ((((((string))).pointer[(0)] == (yaml_char_t)('\r')) || ((((string))).pointer[(0)] == (yaml_char_t)('\n')) || (((((string))).pointer[(0)] == (yaml_char_t)('\xC2')) && ((((string))).pointer[(0)+1] == (yaml_char_t)('\x85'))) || (((((string))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((string))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((string))).pointer[(0)+2] == (yaml_char_t)('\xA8'))) || (((((string))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((string))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((string))).pointer[(0)+2] == (yaml_char_t)('\xA9')))))
            {
                chomp_hint = "+";
                emitter->open_ended = 1;
            }
        }
    }

    if (chomp_hint)
    {
        if (!yaml_emitter_write_indicator(data_flow, emitter, chomp_hint, 0, 0, 0))
            return 0;
    }

    return 1;
}

static int
yaml_emitter_write_literal_scalar(int *data_flow, yaml_emitter_t *emitter,
        yaml_char_t *value, size_t length)
{
    yaml_string_t string={0};
    int breaks = 1;

    ((string).start = (value), (string).end = (value)+(length), (string).pointer = (value));

    if (!yaml_emitter_write_indicator(data_flow, emitter, "|", 1, 0, 0))
        return 0;
    if (!yaml_emitter_write_block_scalar_hints(data_flow, emitter, string))
        return 0;
    if (!(((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter)) && ((emitter->line_break == YAML_CR_BREAK ? (*(emitter->buffer.pointer++) = (yaml_char_t) '\r') : emitter->line_break == YAML_LN_BREAK ? (*(emitter->buffer.pointer++) = (yaml_char_t) '\n') : emitter->line_break == YAML_CRLN_BREAK ? (*(emitter->buffer.pointer++) = (yaml_char_t) '\r', *(emitter->buffer.pointer++) = (yaml_char_t) '\n') : 0), emitter->column = 0, emitter->line ++, 1))) return 0;
    emitter->indention = 1;
    emitter->whitespace = 1;

    while (string.pointer != string.end)
    {
        if ((((((string))).pointer[(0)] == (yaml_char_t)('\r')) || ((((string))).pointer[(0)] == (yaml_char_t)('\n')) || (((((string))).pointer[(0)] == (yaml_char_t)('\xC2')) && ((((string))).pointer[(0)+1] == (yaml_char_t)('\x85'))) || (((((string))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((string))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((string))).pointer[(0)+2] == (yaml_char_t)('\xA8'))) || (((((string))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((string))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((string))).pointer[(0)+2] == (yaml_char_t)('\xA9')))))
        {
            if (!(((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter)) && ((((string)).pointer[0] == (yaml_char_t)(('\n'))) ? ((((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter)) && ((emitter->line_break == YAML_CR_BREAK ? (*(emitter->buffer.pointer++) = (yaml_char_t) '\r') : emitter->line_break == YAML_LN_BREAK ? (*(emitter->buffer.pointer++) = (yaml_char_t) '\n') : emitter->line_break == YAML_CRLN_BREAK ? (*(emitter->buffer.pointer++) = (yaml_char_t) '\r', *(emitter->buffer.pointer++) = (yaml_char_t) '\n') : 0), emitter->column = 0, emitter->line ++, 1)), string.pointer ++, 1) : (((*(string).pointer & 0x80) == 0x00 ? (*((emitter->buffer).pointer++) = *((string).pointer++)) : (*(string).pointer & 0xE0) == 0xC0 ? (*((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++)) : (*(string).pointer & 0xF0) == 0xE0 ? (*((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++)) : (*(string).pointer & 0xF8) == 0xF0 ? (*((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++)) : 0), emitter->column = 0, emitter->line ++, 1)))) return 0;
            emitter->indention = 1;
            breaks = 1;
        }
        else
        {
            if (breaks) {
                if (!yaml_emitter_write_indent(data_flow, emitter)) return 0;
            }
            if (!(((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter)) && (((*(string).pointer & 0x80) == 0x00 ? (*((emitter->buffer).pointer++) = *((string).pointer++)) : (*(string).pointer & 0xE0) == 0xC0 ? (*((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++)) : (*(string).pointer & 0xF0) == 0xE0 ? (*((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++)) : (*(string).pointer & 0xF8) == 0xF0 ? (*((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++)) : 0), emitter->column ++, 1))) return 0;
            emitter->indention = 0;
            breaks = 0;
        }
    }

    return 1;
}

static int
yaml_emitter_write_folded_scalar(int *data_flow, yaml_emitter_t *emitter,
        yaml_char_t *value, size_t length)
{
    yaml_string_t string={0};
    int breaks = 1;
    int leading_spaces = 1;

    ((string).start = (value), (string).end = (value)+(length), (string).pointer = (value));

    if (!yaml_emitter_write_indicator(data_flow, emitter, ">", 1, 0, 0))
        return 0;
    if (!yaml_emitter_write_block_scalar_hints(data_flow, emitter, string))
        return 0;
    if (!(((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter)) && ((emitter->line_break == YAML_CR_BREAK ? (*(emitter->buffer.pointer++) = (yaml_char_t) '\r') : emitter->line_break == YAML_LN_BREAK ? (*(emitter->buffer.pointer++) = (yaml_char_t) '\n') : emitter->line_break == YAML_CRLN_BREAK ? (*(emitter->buffer.pointer++) = (yaml_char_t) '\r', *(emitter->buffer.pointer++) = (yaml_char_t) '\n') : 0), emitter->column = 0, emitter->line ++, 1))) return 0;
    emitter->indention = 1;
    emitter->whitespace = 1;

    while (string.pointer != string.end)
    {
        if ((((((string))).pointer[(0)] == (yaml_char_t)('\r')) || ((((string))).pointer[(0)] == (yaml_char_t)('\n')) || (((((string))).pointer[(0)] == (yaml_char_t)('\xC2')) && ((((string))).pointer[(0)+1] == (yaml_char_t)('\x85'))) || (((((string))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((string))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((string))).pointer[(0)+2] == (yaml_char_t)('\xA8'))) || (((((string))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((string))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((string))).pointer[(0)+2] == (yaml_char_t)('\xA9')))))
        {
            if (!breaks && !leading_spaces && (((string)).pointer[0] == (yaml_char_t)(('\n')))) {
                int k = 0;
                while (((((string)).pointer[(k)] == (yaml_char_t)('\r')) || (((string)).pointer[(k)] == (yaml_char_t)('\n')) || ((((string)).pointer[(k)] == (yaml_char_t)('\xC2')) && (((string)).pointer[(k)+1] == (yaml_char_t)('\x85'))) || ((((string)).pointer[(k)] == (yaml_char_t)('\xE2')) && (((string)).pointer[(k)+1] == (yaml_char_t)('\x80')) && (((string)).pointer[(k)+2] == (yaml_char_t)('\xA8'))) || ((((string)).pointer[(k)] == (yaml_char_t)('\xE2')) && (((string)).pointer[(k)+1] == (yaml_char_t)('\x80')) && (((string)).pointer[(k)+2] == (yaml_char_t)('\xA9'))))) {
                    k += (((string).pointer[k] & 0x80) == 0x00 ? 1 : ((string).pointer[k] & 0xE0) == 0xC0 ? 2 : ((string).pointer[k] & 0xF0) == 0xE0 ? 3 : ((string).pointer[k] & 0xF8) == 0xF0 ? 4 : 0);
                }
                if (!(((((((string)))).pointer[(((k)))] == (yaml_char_t)(' ')) || (((((string)))).pointer[(((k)))] == (yaml_char_t)('\t'))) || (((((((string)))).pointer[(((k)))] == (yaml_char_t)('\r')) || (((((string)))).pointer[(((k)))] == (yaml_char_t)('\n')) || ((((((string)))).pointer[(((k)))] == (yaml_char_t)('\xC2')) && (((((string)))).pointer[(((k)))+1] == (yaml_char_t)('\x85'))) || ((((((string)))).pointer[(((k)))] == (yaml_char_t)('\xE2')) && (((((string)))).pointer[(((k)))+1] == (yaml_char_t)('\x80')) && (((((string)))).pointer[(((k)))+2] == (yaml_char_t)('\xA8'))) || ((((((string)))).pointer[(((k)))] == (yaml_char_t)('\xE2')) && (((((string)))).pointer[(((k)))+1] == (yaml_char_t)('\x80')) && (((((string)))).pointer[(((k)))+2] == (yaml_char_t)('\xA9')))) || (((((string)))).pointer[(((k)))] == (yaml_char_t)('\0'))))) {
                    if (!(((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter)) && ((emitter->line_break == YAML_CR_BREAK ? (*(emitter->buffer.pointer++) = (yaml_char_t) '\r') : emitter->line_break == YAML_LN_BREAK ? (*(emitter->buffer.pointer++) = (yaml_char_t) '\n') : emitter->line_break == YAML_CRLN_BREAK ? (*(emitter->buffer.pointer++) = (yaml_char_t) '\r', *(emitter->buffer.pointer++) = (yaml_char_t) '\n') : 0), emitter->column = 0, emitter->line ++, 1))) return 0;
                }
            }
            if (!(((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter)) && ((((string)).pointer[0] == (yaml_char_t)(('\n'))) ? ((((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter)) && ((emitter->line_break == YAML_CR_BREAK ? (*(emitter->buffer.pointer++) = (yaml_char_t) '\r') : emitter->line_break == YAML_LN_BREAK ? (*(emitter->buffer.pointer++) = (yaml_char_t) '\n') : emitter->line_break == YAML_CRLN_BREAK ? (*(emitter->buffer.pointer++) = (yaml_char_t) '\r', *(emitter->buffer.pointer++) = (yaml_char_t) '\n') : 0), emitter->column = 0, emitter->line ++, 1)), string.pointer ++, 1) : (((*(string).pointer & 0x80) == 0x00 ? (*((emitter->buffer).pointer++) = *((string).pointer++)) : (*(string).pointer & 0xE0) == 0xC0 ? (*((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++)) : (*(string).pointer & 0xF0) == 0xE0 ? (*((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++)) : (*(string).pointer & 0xF8) == 0xF0 ? (*((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++)) : 0), emitter->column = 0, emitter->line ++, 1)))) return 0;
            emitter->indention = 1;
            breaks = 1;
        }
        else
        {
            if (breaks) {
                if (!yaml_emitter_write_indent(data_flow, emitter)) return 0;
                leading_spaces = ((((((string)))).pointer[((0))] == (yaml_char_t)(' ')) || (((((string)))).pointer[((0))] == (yaml_char_t)('\t')));
            }
            if (!breaks && ((((string))).pointer[(0)] == (yaml_char_t)(' ')) && !(((string)).pointer[(1)] == (yaml_char_t)(' '))
                    && emitter->column > emitter->best_width) {
                if (!yaml_emitter_write_indent(data_flow, emitter)) return 0;
                ((string).pointer += (((((string))).pointer[0] & 0x80) == 0x00 ? 1 : ((((string))).pointer[0] & 0xE0) == 0xC0 ? 2 : ((((string))).pointer[0] & 0xF0) == 0xE0 ? 3 : ((((string))).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
            }
            else {
                if (!(((emitter->buffer.pointer+5 < emitter->buffer.end) || yaml_emitter_flush(data_flow, emitter)) && (((*(string).pointer & 0x80) == 0x00 ? (*((emitter->buffer).pointer++) = *((string).pointer++)) : (*(string).pointer & 0xE0) == 0xC0 ? (*((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++)) : (*(string).pointer & 0xF0) == 0xE0 ? (*((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++)) : (*(string).pointer & 0xF8) == 0xF0 ? (*((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++), *((emitter->buffer).pointer++) = *((string).pointer++)) : 0), emitter->column ++, 1))) return 0;
            }
            emitter->indention = 0;
            breaks = 0;
        }
    }

    return 1;
}