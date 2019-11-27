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
yaml_parser_scan(int *data_flow, yaml_parser_t *parser, yaml_token_t *token);





static int
yaml_parser_set_scanner_error(int *data_flow, yaml_parser_t *parser, const char *context,
        yaml_mark_t context_mark, const char *problem);





int
yaml_parser_fetch_more_tokens(int *data_flow, yaml_parser_t *parser);

static int
yaml_parser_fetch_next_token(int *data_flow, yaml_parser_t *parser);





static int
yaml_parser_stale_simple_keys(int *data_flow, yaml_parser_t *parser);

static int
yaml_parser_save_simple_key(int *data_flow, yaml_parser_t *parser);

static int
yaml_parser_remove_simple_key(int *data_flow, yaml_parser_t *parser);

static int
yaml_parser_increase_flow_level(int *data_flow, yaml_parser_t *parser);

static int
yaml_parser_decrease_flow_level(int *data_flow, yaml_parser_t *parser);





static int
yaml_parser_roll_indent(int *data_flow, yaml_parser_t *parser, ptrdiff_t column,
        ptrdiff_t number, yaml_token_type_t type, yaml_mark_t mark);

static int
yaml_parser_unroll_indent(int *data_flow, yaml_parser_t *parser, ptrdiff_t column);





static int
yaml_parser_fetch_stream_start(int *data_flow, yaml_parser_t *parser);

static int
yaml_parser_fetch_stream_end(int *data_flow, yaml_parser_t *parser);

static int
yaml_parser_fetch_directive(int *data_flow, yaml_parser_t *parser);

static int
yaml_parser_fetch_document_indicator(int *data_flow, yaml_parser_t *parser,
        yaml_token_type_t type);

static int
yaml_parser_fetch_flow_collection_start(int *data_flow, yaml_parser_t *parser,
        yaml_token_type_t type);

static int
yaml_parser_fetch_flow_collection_end(int *data_flow, yaml_parser_t *parser,
        yaml_token_type_t type);

static int
yaml_parser_fetch_flow_entry(int *data_flow, yaml_parser_t *parser);

static int
yaml_parser_fetch_block_entry(int *data_flow, yaml_parser_t *parser);

static int
yaml_parser_fetch_key(int *data_flow, yaml_parser_t *parser);

static int
yaml_parser_fetch_value(int *data_flow, yaml_parser_t *parser);

static int
yaml_parser_fetch_anchor(int *data_flow, yaml_parser_t *parser, yaml_token_type_t type);

static int
yaml_parser_fetch_tag(int *data_flow, yaml_parser_t *parser);

static int
yaml_parser_fetch_block_scalar(int *data_flow, yaml_parser_t *parser, int literal);

static int
yaml_parser_fetch_flow_scalar(int *data_flow, yaml_parser_t *parser, int single);

static int
yaml_parser_fetch_plain_scalar(int *data_flow, yaml_parser_t *parser);





static int
yaml_parser_scan_to_next_token(int *data_flow, yaml_parser_t *parser);

static int
yaml_parser_scan_directive(int *data_flow, yaml_parser_t *parser, yaml_token_t *token);

static int
yaml_parser_scan_directive_name(int *data_flow, yaml_parser_t *parser,
        yaml_mark_t start_mark, yaml_char_t **name);

static int
yaml_parser_scan_version_directive_value(int *data_flow, yaml_parser_t *parser,
        yaml_mark_t start_mark, int *major, int *minor);

static int
yaml_parser_scan_version_directive_number(int *data_flow, yaml_parser_t *parser,
        yaml_mark_t start_mark, int *number);

static int
yaml_parser_scan_tag_directive_value(int *data_flow, yaml_parser_t *parser,
        yaml_mark_t mark, yaml_char_t **handle, yaml_char_t **prefix);

static int
yaml_parser_scan_anchor(int *data_flow, yaml_parser_t *parser, yaml_token_t *token,
        yaml_token_type_t type);

static int
yaml_parser_scan_tag(int *data_flow, yaml_parser_t *parser, yaml_token_t *token);

static int
yaml_parser_scan_tag_handle(int *data_flow, yaml_parser_t *parser, int directive,
        yaml_mark_t start_mark, yaml_char_t **handle);

static int
yaml_parser_scan_tag_uri(int *data_flow, yaml_parser_t *parser, int directive,
        yaml_char_t *head, yaml_mark_t start_mark, yaml_char_t **uri);

static int
yaml_parser_scan_uri_escapes(int *data_flow, yaml_parser_t *parser, int directive,
        yaml_mark_t start_mark, yaml_string_t *string);

static int
yaml_parser_scan_block_scalar(int *data_flow, yaml_parser_t *parser, yaml_token_t *token,
        int literal);

static int
yaml_parser_scan_block_scalar_breaks(int *data_flow, yaml_parser_t *parser,
        int *indent, yaml_string_t *breaks,
        yaml_mark_t start_mark, yaml_mark_t *end_mark);

static int
yaml_parser_scan_flow_scalar(int *data_flow, yaml_parser_t *parser, yaml_token_t *token,
        int single);

static int
yaml_parser_scan_plain_scalar(int *data_flow, yaml_parser_t *parser, yaml_token_t *token);





int
yaml_parser_scan(int *data_flow, yaml_parser_t *parser, yaml_token_t *token)
{
    
   ((
   parser
   ) ? (void) (0) : __assert_fail (
   "parser"
   , "scanner.c", 744, __PRETTY_FUNCTION__))
                 ;
    
   ((
   token
   ) ? (void) (0) : __assert_fail (
   "token"
   , "scanner.c", 745, __PRETTY_FUNCTION__))
                ;



    memset(token, 0, sizeof(yaml_token_t));



    if (parser->stream_end_produced || parser->error) {
        return 1;
    }



    if (!parser->token_available) {
        if (!yaml_parser_fetch_more_tokens(data_flow, parser))
            return 0;
    }



    *token = (*((parser->tokens).head++));
    parser->token_available = 0;
    parser->tokens_parsed ++;

    if (token->type == YAML_STREAM_END_TOKEN) {
        parser->stream_end_produced = 1;
    }

    return 1;
}





static int
yaml_parser_set_scanner_error(int *data_flow, yaml_parser_t *parser, const char *context,
        yaml_mark_t context_mark, const char *problem)
{
    parser->error = YAML_SCANNER_ERROR;
    parser->context = context;
    parser->context_mark = context_mark;
    parser->problem = problem;
    parser->problem_mark = parser->mark;

    return 0;
}






int
yaml_parser_fetch_more_tokens(int *data_flow, yaml_parser_t *parser)
{
    int need_more_tokens={0};



    while (1)
    {




        need_more_tokens = 0;

        if (parser->tokens.head == parser->tokens.tail)
        {


            need_more_tokens = 1;
        }
        else
        {
            yaml_simple_key_t *simple_key={0};



            if (!yaml_parser_stale_simple_keys(data_flow, parser))
                return 0;

            for (simple_key = parser->simple_keys.start;
                    simple_key != parser->simple_keys.top; simple_key++) {
                if (simple_key->possible
                        && simple_key->token_number == parser->tokens_parsed) {
                    need_more_tokens = 1;
                    break;
                }
            }
        }



        if (!need_more_tokens)
            break;



        if (!yaml_parser_fetch_next_token(data_flow, parser))
            return 0;
    }

    parser->token_available = 1;

    return 1;
}





static int
yaml_parser_fetch_next_token(int *data_flow, yaml_parser_t *parser)
{


    if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(data_flow, parser, (1))))
        return 0;



    if (!parser->stream_start_produced)
        return yaml_parser_fetch_stream_start(data_flow, parser);



    if (!yaml_parser_scan_to_next_token(data_flow, parser))
        return 0;



    if (!yaml_parser_stale_simple_keys(data_flow, parser))
        return 0;



    if (!yaml_parser_unroll_indent(data_flow, parser, parser->mark.column))
        return 0;






    if (!(parser->unread >= (4) ? 1 : yaml_parser_update_buffer(data_flow, parser, (4))))
        return 0;



    if (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\0')))
        return yaml_parser_fetch_stream_end(data_flow, parser);



    if (parser->mark.column == 0 && (((parser->buffer)).pointer[0] == (yaml_char_t)(('%'))))
        return yaml_parser_fetch_directive(data_flow, parser);



    if (parser->mark.column == 0
            && ((parser->buffer).pointer[0] == (yaml_char_t)('-'))
            && ((parser->buffer).pointer[1] == (yaml_char_t)('-'))
            && ((parser->buffer).pointer[2] == (yaml_char_t)('-'))
            && (((((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)(' ')) || (((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)('\t'))) || (((((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)('\r')) || (((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)('\n')) || ((((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)('\xC2')) && (((((parser->buffer)))).pointer[(((3)))+1] == (yaml_char_t)('\x85'))) || ((((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[(((3)))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[(((3)))+2] == (yaml_char_t)('\xA8'))) || ((((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[(((3)))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[(((3)))+2] == (yaml_char_t)('\xA9')))) || (((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)('\0')))))
        return yaml_parser_fetch_document_indicator(data_flow, parser,
                YAML_DOCUMENT_START_TOKEN);



    if (parser->mark.column == 0
            && ((parser->buffer).pointer[0] == (yaml_char_t)('.'))
            && ((parser->buffer).pointer[1] == (yaml_char_t)('.'))
            && ((parser->buffer).pointer[2] == (yaml_char_t)('.'))
            && (((((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)(' ')) || (((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)('\t'))) || (((((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)('\r')) || (((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)('\n')) || ((((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)('\xC2')) && (((((parser->buffer)))).pointer[(((3)))+1] == (yaml_char_t)('\x85'))) || ((((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[(((3)))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[(((3)))+2] == (yaml_char_t)('\xA8'))) || ((((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[(((3)))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[(((3)))+2] == (yaml_char_t)('\xA9')))) || (((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)('\0')))))
        return yaml_parser_fetch_document_indicator(data_flow, parser,
                YAML_DOCUMENT_END_TOKEN);



    if ((((parser->buffer)).pointer[0] == (yaml_char_t)(('['))))
        return yaml_parser_fetch_flow_collection_start(data_flow, parser,
                YAML_FLOW_SEQUENCE_START_TOKEN);



    if ((((parser->buffer)).pointer[0] == (yaml_char_t)(('{'))))
        return yaml_parser_fetch_flow_collection_start(data_flow, parser,
                YAML_FLOW_MAPPING_START_TOKEN);



    if ((((parser->buffer)).pointer[0] == (yaml_char_t)((']'))))
        return yaml_parser_fetch_flow_collection_end(data_flow, parser,
                YAML_FLOW_SEQUENCE_END_TOKEN);



    if ((((parser->buffer)).pointer[0] == (yaml_char_t)(('}'))))
        return yaml_parser_fetch_flow_collection_end(data_flow, parser,
                YAML_FLOW_MAPPING_END_TOKEN);



    if ((((parser->buffer)).pointer[0] == (yaml_char_t)((','))))
        return yaml_parser_fetch_flow_entry(data_flow, parser);



    if ((((parser->buffer)).pointer[0] == (yaml_char_t)(('-'))) && (((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)(' ')) || (((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\t'))) || (((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\r')) || (((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\n')) || ((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\xC2')) && (((((parser->buffer)))).pointer[(((1)))+1] == (yaml_char_t)('\x85'))) || ((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[(((1)))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[(((1)))+2] == (yaml_char_t)('\xA8'))) || ((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[(((1)))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[(((1)))+2] == (yaml_char_t)('\xA9')))) || (((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\0')))))
        return yaml_parser_fetch_block_entry(data_flow, parser);



    if ((((parser->buffer)).pointer[0] == (yaml_char_t)(('?')))
            && (parser->flow_level || (((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)(' ')) || (((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\t'))) || (((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\r')) || (((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\n')) || ((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\xC2')) && (((((parser->buffer)))).pointer[(((1)))+1] == (yaml_char_t)('\x85'))) || ((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[(((1)))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[(((1)))+2] == (yaml_char_t)('\xA8'))) || ((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[(((1)))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[(((1)))+2] == (yaml_char_t)('\xA9')))) || (((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\0'))))))
        return yaml_parser_fetch_key(data_flow, parser);



    if ((((parser->buffer)).pointer[0] == (yaml_char_t)((':')))
            && (parser->flow_level || (((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)(' ')) || (((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\t'))) || (((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\r')) || (((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\n')) || ((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\xC2')) && (((((parser->buffer)))).pointer[(((1)))+1] == (yaml_char_t)('\x85'))) || ((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[(((1)))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[(((1)))+2] == (yaml_char_t)('\xA8'))) || ((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[(((1)))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[(((1)))+2] == (yaml_char_t)('\xA9')))) || (((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\0'))))))
        return yaml_parser_fetch_value(data_flow, parser);



    if ((((parser->buffer)).pointer[0] == (yaml_char_t)(('*'))))
        return yaml_parser_fetch_anchor(data_flow, parser, YAML_ALIAS_TOKEN);



    if ((((parser->buffer)).pointer[0] == (yaml_char_t)(('&'))))
        return yaml_parser_fetch_anchor(data_flow, parser, YAML_ANCHOR_TOKEN);



    if ((((parser->buffer)).pointer[0] == (yaml_char_t)(('!'))))
        return yaml_parser_fetch_tag(data_flow, parser);



    if ((((parser->buffer)).pointer[0] == (yaml_char_t)(('|'))) && !parser->flow_level)
        return yaml_parser_fetch_block_scalar(data_flow, parser, 1);



    if ((((parser->buffer)).pointer[0] == (yaml_char_t)(('>'))) && !parser->flow_level)
        return yaml_parser_fetch_block_scalar(data_flow, parser, 0);



    if ((((parser->buffer)).pointer[0] == (yaml_char_t)(('\''))))
        return yaml_parser_fetch_flow_scalar(data_flow, parser, 1);



    if ((((parser->buffer)).pointer[0] == (yaml_char_t)(('"'))))
        return yaml_parser_fetch_flow_scalar(data_flow, parser, 0);
    if (!(((((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)(' ')) || ((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\t'))) || ((((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\r')) || ((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\n')) || (((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\xC2')) && ((((((parser->buffer))))).pointer[(((0)))+1] == (yaml_char_t)('\x85'))) || (((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\xE2')) && ((((((parser->buffer))))).pointer[(((0)))+1] == (yaml_char_t)('\x80')) && ((((((parser->buffer))))).pointer[(((0)))+2] == (yaml_char_t)('\xA8'))) || (((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\xE2')) && ((((((parser->buffer))))).pointer[(((0)))+1] == (yaml_char_t)('\x80')) && ((((((parser->buffer))))).pointer[(((0)))+2] == (yaml_char_t)('\xA9')))) || ((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\0')))) || (((parser->buffer)).pointer[0] == (yaml_char_t)(('-')))
                || (((parser->buffer)).pointer[0] == (yaml_char_t)(('?'))) || (((parser->buffer)).pointer[0] == (yaml_char_t)((':')))
                || (((parser->buffer)).pointer[0] == (yaml_char_t)((','))) || (((parser->buffer)).pointer[0] == (yaml_char_t)(('[')))
                || (((parser->buffer)).pointer[0] == (yaml_char_t)((']'))) || (((parser->buffer)).pointer[0] == (yaml_char_t)(('{')))
                || (((parser->buffer)).pointer[0] == (yaml_char_t)(('}'))) || (((parser->buffer)).pointer[0] == (yaml_char_t)(('#')))
                || (((parser->buffer)).pointer[0] == (yaml_char_t)(('&'))) || (((parser->buffer)).pointer[0] == (yaml_char_t)(('*')))
                || (((parser->buffer)).pointer[0] == (yaml_char_t)(('!'))) || (((parser->buffer)).pointer[0] == (yaml_char_t)(('|')))
                || (((parser->buffer)).pointer[0] == (yaml_char_t)(('>'))) || (((parser->buffer)).pointer[0] == (yaml_char_t)(('\'')))
                || (((parser->buffer)).pointer[0] == (yaml_char_t)(('"'))) || (((parser->buffer)).pointer[0] == (yaml_char_t)(('%')))
                || (((parser->buffer)).pointer[0] == (yaml_char_t)(('@'))) || (((parser->buffer)).pointer[0] == (yaml_char_t)(('`')))) ||
            ((((parser->buffer)).pointer[0] == (yaml_char_t)(('-'))) && !(((((parser->buffer))).pointer[((1))] == (yaml_char_t)(' ')) || ((((parser->buffer))).pointer[((1))] == (yaml_char_t)('\t')))) ||
            (!parser->flow_level &&
             ((((parser->buffer)).pointer[0] == (yaml_char_t)(('?'))) || (((parser->buffer)).pointer[0] == (yaml_char_t)((':'))))
             && !(((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)(' ')) || (((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\t'))) || (((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\r')) || (((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\n')) || ((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\xC2')) && (((((parser->buffer)))).pointer[(((1)))+1] == (yaml_char_t)('\x85'))) || ((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[(((1)))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[(((1)))+2] == (yaml_char_t)('\xA8'))) || ((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[(((1)))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[(((1)))+2] == (yaml_char_t)('\xA9')))) || (((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\0'))))))
        return yaml_parser_fetch_plain_scalar(data_flow, parser);





    return yaml_parser_set_scanner_error(data_flow, parser,
            "while scanning for the next token", parser->mark,
            "found character that cannot start any token");
}






static int
yaml_parser_stale_simple_keys(int *data_flow, yaml_parser_t *parser)
{
    yaml_simple_key_t *simple_key={0};



    for (simple_key = parser->simple_keys.start;
            simple_key != parser->simple_keys.top; simple_key ++)
    {







        if (simple_key->possible
                && (simple_key->mark.line < parser->mark.line
                    || simple_key->mark.index+1024 < parser->mark.index)) {



            if (simple_key->required) {
                return yaml_parser_set_scanner_error(data_flow, parser,
                        "while scanning a simple key", simple_key->mark,
                        "could not find expected ':'");
            }

            simple_key->possible = 0;
        }
    }

    return 1;
}






static int
yaml_parser_save_simple_key(int *data_flow, yaml_parser_t *parser)
{






    int required = (!parser->flow_level
            && parser->indent == (ptrdiff_t)parser->mark.column);





    if (parser->simple_key_allowed)
    {
        yaml_simple_key_t simple_key={0};
        simple_key.possible = 1;
        simple_key.required = required;
        simple_key.token_number =
            parser->tokens_parsed + (parser->tokens.tail - parser->tokens.head);
        simple_key.mark = parser->mark;

        if (!yaml_parser_remove_simple_key(data_flow, parser)) return 0;

        *(parser->simple_keys.top-1) = simple_key;
    }

    return 1;
}





static int
yaml_parser_remove_simple_key(int *data_flow, yaml_parser_t *parser)
{
    yaml_simple_key_t *simple_key = parser->simple_keys.top-1;

    if (simple_key->possible)
    {


        if (simple_key->required) {
            return yaml_parser_set_scanner_error(data_flow, parser,
                    "while scanning a simple key", simple_key->mark,
                    "could not find expected ':'");
        }
    }



    simple_key->possible = 0;

    return 1;
}





static int
yaml_parser_increase_flow_level(int *data_flow, yaml_parser_t *parser)
{
    yaml_simple_key_t empty_simple_key = { 0, 0, 0, { 0, 0, 0 } };



    if (!(((parser->simple_keys).top != (parser->simple_keys).end || yaml_stack_extend(data_flow, (void **)&(parser->simple_keys).start, (void **)&(parser->simple_keys).top, (void **)&(parser->simple_keys).end)) ? (*((parser->simple_keys).top++) = empty_simple_key, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0)))
        return 0;



    if (parser->flow_level == 0x7fffffff) {
        parser->error = YAML_MEMORY_ERROR;
        return 0;
    }

    parser->flow_level++;

    return 1;
}





static int
yaml_parser_decrease_flow_level(int *data_flow, yaml_parser_t *parser)
{
    if (parser->flow_level) {
        parser->flow_level --;
        (void)(*(--(parser->simple_keys).top));
    }

    return 1;
}
static int
yaml_parser_roll_indent(int *data_flow, yaml_parser_t *parser, ptrdiff_t column,
        ptrdiff_t number, yaml_token_type_t type, yaml_mark_t mark)
{
    yaml_token_t token={0};



    if (parser->flow_level)
        return 1;

    if (parser->indent < column)
    {





        if (!(((parser->indents).top != (parser->indents).end || yaml_stack_extend(data_flow, (void **)&(parser->indents).start, (void **)&(parser->indents).top, (void **)&(parser->indents).end)) ? (*((parser->indents).top++) = parser->indent, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0)))
            return 0;

        if (column > 0x7fffffff) {
            parser->error = YAML_MEMORY_ERROR;
            return 0;
        }

        parser->indent = column;



        (memset(&(token), 0, sizeof(yaml_token_t)), (token).type = (type), (token).start_mark = (mark), (token).end_mark = (mark));

        if (number == -1) {
            if (!(((parser->tokens).tail != (parser->tokens).end || yaml_queue_extend(data_flow, (void **)&(parser->tokens).start, (void **)&(parser->tokens).head, (void **)&(parser->tokens).tail, (void **)&(parser->tokens).end)) ? (*((parser->tokens).tail++) = token, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0)))
                return 0;
        }
        else {
            if (!(((parser->tokens).tail != (parser->tokens).end || yaml_queue_extend(data_flow, (void **)&(parser->tokens).start, (void **)&(parser->tokens).head, (void **)&(parser->tokens).tail, (void **)&(parser->tokens).end)) ? (memmove((parser->tokens).head+(number - parser->tokens_parsed)+1,(parser->tokens).head+(number - parser->tokens_parsed), ((parser->tokens).tail-(parser->tokens).head-(number - parser->tokens_parsed))*sizeof(*(parser->tokens).start)), *((parser->tokens).head+(number - parser->tokens_parsed)) = token, (parser->tokens).tail++, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))
                                                                              )
                return 0;
        }
    }

    return 1;
}
static int
yaml_parser_unroll_indent(int *data_flow, yaml_parser_t *parser, ptrdiff_t column)
{
    yaml_token_t token={0};



    if (parser->flow_level)
        return 1;



    while (parser->indent > column)
    {


        (memset(&(token), 0, sizeof(yaml_token_t)), (token).type = (YAML_BLOCK_END_TOKEN), (token).start_mark = (parser->mark), (token).end_mark = (parser->mark));

        if (!(((parser->tokens).tail != (parser->tokens).end || yaml_queue_extend(data_flow, (void **)&(parser->tokens).start, (void **)&(parser->tokens).head, (void **)&(parser->tokens).tail, (void **)&(parser->tokens).end)) ? (*((parser->tokens).tail++) = token, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0)))
            return 0;



        parser->indent = (*(--(parser->indents).top));
    }

    return 1;
}





static int
yaml_parser_fetch_stream_start(int *data_flow, yaml_parser_t *parser)
{
    yaml_simple_key_t simple_key = { 0, 0, 0, { 0, 0, 0 } };
    yaml_token_t token={0};



    parser->indent = -1;



    if (!(((parser->simple_keys).top != (parser->simple_keys).end || yaml_stack_extend(data_flow, (void **)&(parser->simple_keys).start, (void **)&(parser->simple_keys).top, (void **)&(parser->simple_keys).end)) ? (*((parser->simple_keys).top++) = simple_key, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0)))
        return 0;



    parser->simple_key_allowed = 1;



    parser->stream_start_produced = 1;



    ((memset(&((token)), 0, sizeof(yaml_token_t)), ((token)).type = (YAML_STREAM_START_TOKEN), ((token)).start_mark = ((parser->mark)), ((token)).end_mark = ((parser->mark))), (token).data.stream_start.encoding = (parser->encoding))
                                       ;

    if (!(((parser->tokens).tail != (parser->tokens).end || yaml_queue_extend(data_flow, (void **)&(parser->tokens).start, (void **)&(parser->tokens).head, (void **)&(parser->tokens).tail, (void **)&(parser->tokens).end)) ? (*((parser->tokens).tail++) = token, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0)))
        return 0;

    return 1;
}





static int
yaml_parser_fetch_stream_end(int *data_flow, yaml_parser_t *parser)
{
    yaml_token_t token={0};



    if (parser->mark.column != 0) {
        parser->mark.column = 0;
        parser->mark.line ++;
    }



    if (!yaml_parser_unroll_indent(data_flow, parser, -1))
        return 0;



    if (!yaml_parser_remove_simple_key(data_flow, parser))
        return 0;

    parser->simple_key_allowed = 0;



    ((memset(&((token)), 0, sizeof(yaml_token_t)), ((token)).type = (YAML_STREAM_END_TOKEN), ((token)).start_mark = ((parser->mark)), ((token)).end_mark = ((parser->mark))));

    if (!(((parser->tokens).tail != (parser->tokens).end || yaml_queue_extend(data_flow, (void **)&(parser->tokens).start, (void **)&(parser->tokens).head, (void **)&(parser->tokens).tail, (void **)&(parser->tokens).end)) ? (*((parser->tokens).tail++) = token, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0)))
        return 0;

    return 1;
}





static int
yaml_parser_fetch_directive(int *data_flow, yaml_parser_t *parser)
{
    yaml_token_t token={0};



    if (!yaml_parser_unroll_indent(data_flow, parser, -1))
        return 0;



    if (!yaml_parser_remove_simple_key(data_flow, parser))
        return 0;

    parser->simple_key_allowed = 0;



    if (!yaml_parser_scan_directive(data_flow, parser, &token))
        return 0;



    if (!(((parser->tokens).tail != (parser->tokens).end || yaml_queue_extend(data_flow, (void **)&(parser->tokens).start, (void **)&(parser->tokens).head, (void **)&(parser->tokens).tail, (void **)&(parser->tokens).end)) ? (*((parser->tokens).tail++) = token, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) {
        yaml_token_delete(data_flow, &token);
        return 0;
    }

    return 1;
}





static int
yaml_parser_fetch_document_indicator(int *data_flow, yaml_parser_t *parser,
        yaml_token_type_t type)
{
    yaml_mark_t start_mark, end_mark={0};
    yaml_token_t token={0};



    if (!yaml_parser_unroll_indent(data_flow, parser, -1))
        return 0;



    if (!yaml_parser_remove_simple_key(data_flow, parser))
        return 0;

    parser->simple_key_allowed = 0;



    start_mark = parser->mark;

    (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
    (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
    (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));

    end_mark = parser->mark;



    (memset(&(token), 0, sizeof(yaml_token_t)), (token).type = (type), (token).start_mark = (start_mark), (token).end_mark = (end_mark));



    if (!(((parser->tokens).tail != (parser->tokens).end || yaml_queue_extend(data_flow, (void **)&(parser->tokens).start, (void **)&(parser->tokens).head, (void **)&(parser->tokens).tail, (void **)&(parser->tokens).end)) ? (*((parser->tokens).tail++) = token, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0)))
        return 0;

    return 1;
}





static int
yaml_parser_fetch_flow_collection_start(int *data_flow, yaml_parser_t *parser,
        yaml_token_type_t type)
{
    yaml_mark_t start_mark, end_mark={0};
    yaml_token_t token={0};



    if (!yaml_parser_save_simple_key(data_flow, parser))
        return 0;



    if (!yaml_parser_increase_flow_level(data_flow, parser))
        return 0;



    parser->simple_key_allowed = 1;



    start_mark = parser->mark;
    (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
    end_mark = parser->mark;



    (memset(&(token), 0, sizeof(yaml_token_t)), (token).type = (type), (token).start_mark = (start_mark), (token).end_mark = (end_mark));



    if (!(((parser->tokens).tail != (parser->tokens).end || yaml_queue_extend(data_flow, (void **)&(parser->tokens).start, (void **)&(parser->tokens).head, (void **)&(parser->tokens).tail, (void **)&(parser->tokens).end)) ? (*((parser->tokens).tail++) = token, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0)))
        return 0;

    return 1;
}





static int
yaml_parser_fetch_flow_collection_end(int *data_flow, yaml_parser_t *parser,
        yaml_token_type_t type)
{
    yaml_mark_t start_mark, end_mark={0};
    yaml_token_t token={0};



    if (!yaml_parser_remove_simple_key(data_flow, parser))
        return 0;



    if (!yaml_parser_decrease_flow_level(data_flow, parser))
        return 0;



    parser->simple_key_allowed = 0;



    start_mark = parser->mark;
    (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
    end_mark = parser->mark;



    (memset(&(token), 0, sizeof(yaml_token_t)), (token).type = (type), (token).start_mark = (start_mark), (token).end_mark = (end_mark));



    if (!(((parser->tokens).tail != (parser->tokens).end || yaml_queue_extend(data_flow, (void **)&(parser->tokens).start, (void **)&(parser->tokens).head, (void **)&(parser->tokens).tail, (void **)&(parser->tokens).end)) ? (*((parser->tokens).tail++) = token, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0)))
        return 0;

    return 1;
}





static int
yaml_parser_fetch_flow_entry(int *data_flow, yaml_parser_t *parser)
{
    yaml_mark_t start_mark, end_mark={0};
    yaml_token_t token={0};



    if (!yaml_parser_remove_simple_key(data_flow, parser))
        return 0;



    parser->simple_key_allowed = 1;



    start_mark = parser->mark;
    (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
    end_mark = parser->mark;



    (memset(&(token), 0, sizeof(yaml_token_t)), (token).type = (YAML_FLOW_ENTRY_TOKEN), (token).start_mark = (start_mark), (token).end_mark = (end_mark));

    if (!(((parser->tokens).tail != (parser->tokens).end || yaml_queue_extend(data_flow, (void **)&(parser->tokens).start, (void **)&(parser->tokens).head, (void **)&(parser->tokens).tail, (void **)&(parser->tokens).end)) ? (*((parser->tokens).tail++) = token, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0)))
        return 0;

    return 1;
}





static int
yaml_parser_fetch_block_entry(int *data_flow, yaml_parser_t *parser)
{
    yaml_mark_t start_mark, end_mark={0};
    yaml_token_t token={0};



    if (!parser->flow_level)
    {


        if (!parser->simple_key_allowed) {
            return yaml_parser_set_scanner_error(data_flow, parser, 
                                                        ((void *)0)
                                                            , parser->mark,
                    "block sequence entries are not allowed in this context");
        }



        if (!yaml_parser_roll_indent(data_flow, parser, parser->mark.column, -1,
                    YAML_BLOCK_SEQUENCE_START_TOKEN, parser->mark))
            return 0;
    }
    else
    {





    }



    if (!yaml_parser_remove_simple_key(data_flow, parser))
        return 0;



    parser->simple_key_allowed = 1;



    start_mark = parser->mark;
    (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
    end_mark = parser->mark;



    (memset(&(token), 0, sizeof(yaml_token_t)), (token).type = (YAML_BLOCK_ENTRY_TOKEN), (token).start_mark = (start_mark), (token).end_mark = (end_mark));

    if (!(((parser->tokens).tail != (parser->tokens).end || yaml_queue_extend(data_flow, (void **)&(parser->tokens).start, (void **)&(parser->tokens).head, (void **)&(parser->tokens).tail, (void **)&(parser->tokens).end)) ? (*((parser->tokens).tail++) = token, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0)))
        return 0;

    return 1;
}





static int
yaml_parser_fetch_key(int *data_flow, yaml_parser_t *parser)
{
    yaml_mark_t start_mark, end_mark={0};
    yaml_token_t token={0};



    if (!parser->flow_level)
    {


        if (!parser->simple_key_allowed) {
            return yaml_parser_set_scanner_error(data_flow, parser, 
                                                        ((void *)0)
                                                            , parser->mark,
                    "mapping keys are not allowed in this context");
        }



        if (!yaml_parser_roll_indent(data_flow, parser, parser->mark.column, -1,
                    YAML_BLOCK_MAPPING_START_TOKEN, parser->mark))
            return 0;
    }



    if (!yaml_parser_remove_simple_key(data_flow, parser))
        return 0;



    parser->simple_key_allowed = (!parser->flow_level);



    start_mark = parser->mark;
    (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
    end_mark = parser->mark;



    (memset(&(token), 0, sizeof(yaml_token_t)), (token).type = (YAML_KEY_TOKEN), (token).start_mark = (start_mark), (token).end_mark = (end_mark));

    if (!(((parser->tokens).tail != (parser->tokens).end || yaml_queue_extend(data_flow, (void **)&(parser->tokens).start, (void **)&(parser->tokens).head, (void **)&(parser->tokens).tail, (void **)&(parser->tokens).end)) ? (*((parser->tokens).tail++) = token, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0)))
        return 0;

    return 1;
}





static int
yaml_parser_fetch_value(int *data_flow, yaml_parser_t *parser)
{
    yaml_mark_t start_mark, end_mark={0};
    yaml_token_t token={0};
    yaml_simple_key_t *simple_key = parser->simple_keys.top-1;



    if (simple_key->possible)
    {



        (memset(&(token), 0, sizeof(yaml_token_t)), (token).type = (YAML_KEY_TOKEN), (token).start_mark = (simple_key->mark), (token).end_mark = (simple_key->mark));

        if (!(((parser->tokens).tail != (parser->tokens).end || yaml_queue_extend(data_flow, (void **)&(parser->tokens).start, (void **)&(parser->tokens).head, (void **)&(parser->tokens).tail, (void **)&(parser->tokens).end)) ? (memmove((parser->tokens).head+(simple_key->token_number - parser->tokens_parsed)+1,(parser->tokens).head+(simple_key->token_number - parser->tokens_parsed), ((parser->tokens).tail-(parser->tokens).head-(simple_key->token_number - parser->tokens_parsed))*sizeof(*(parser->tokens).start)), *((parser->tokens).head+(simple_key->token_number - parser->tokens_parsed)) = token, (parser->tokens).tail++, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))
                                                                            )
            return 0;



        if (!yaml_parser_roll_indent(data_flow, parser, simple_key->mark.column,
                    simple_key->token_number,
                    YAML_BLOCK_MAPPING_START_TOKEN, simple_key->mark))
            return 0;



        simple_key->possible = 0;



        parser->simple_key_allowed = 0;
    }
    else
    {




        if (!parser->flow_level)
        {


            if (!parser->simple_key_allowed) {
                return yaml_parser_set_scanner_error(data_flow, parser, 
                                                            ((void *)0)
                                                                , parser->mark,
                        "mapping values are not allowed in this context");
            }



            if (!yaml_parser_roll_indent(data_flow, parser, parser->mark.column, -1,
                        YAML_BLOCK_MAPPING_START_TOKEN, parser->mark))
                return 0;
        }



        parser->simple_key_allowed = (!parser->flow_level);
    }



    start_mark = parser->mark;
    (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
    end_mark = parser->mark;



    (memset(&(token), 0, sizeof(yaml_token_t)), (token).type = (YAML_VALUE_TOKEN), (token).start_mark = (start_mark), (token).end_mark = (end_mark));

    if (!(((parser->tokens).tail != (parser->tokens).end || yaml_queue_extend(data_flow, (void **)&(parser->tokens).start, (void **)&(parser->tokens).head, (void **)&(parser->tokens).tail, (void **)&(parser->tokens).end)) ? (*((parser->tokens).tail++) = token, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0)))
        return 0;

    return 1;
}





static int
yaml_parser_fetch_anchor(int *data_flow, yaml_parser_t *parser, yaml_token_type_t type)
{
    yaml_token_t token={0};



    if (!yaml_parser_save_simple_key(data_flow, parser))
        return 0;



    parser->simple_key_allowed = 0;



    if (!yaml_parser_scan_anchor(data_flow, parser, &token, type))
        return 0;

    if (!(((parser->tokens).tail != (parser->tokens).end || yaml_queue_extend(data_flow, (void **)&(parser->tokens).start, (void **)&(parser->tokens).head, (void **)&(parser->tokens).tail, (void **)&(parser->tokens).end)) ? (*((parser->tokens).tail++) = token, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) {
        yaml_token_delete(data_flow, &token);
        return 0;
    }
    return 1;
}





static int
yaml_parser_fetch_tag(int *data_flow, yaml_parser_t *parser)
{
    yaml_token_t token={0};



    if (!yaml_parser_save_simple_key(data_flow, parser))
        return 0;



    parser->simple_key_allowed = 0;



    if (!yaml_parser_scan_tag(data_flow, parser, &token))
        return 0;

    if (!(((parser->tokens).tail != (parser->tokens).end || yaml_queue_extend(data_flow, (void **)&(parser->tokens).start, (void **)&(parser->tokens).head, (void **)&(parser->tokens).tail, (void **)&(parser->tokens).end)) ? (*((parser->tokens).tail++) = token, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) {
        yaml_token_delete(data_flow, &token);
        return 0;
    }

    return 1;
}





static int
yaml_parser_fetch_block_scalar(int *data_flow, yaml_parser_t *parser, int literal)
{
    yaml_token_t token={0};



    if (!yaml_parser_remove_simple_key(data_flow, parser))
        return 0;



    parser->simple_key_allowed = 1;



    if (!yaml_parser_scan_block_scalar(data_flow, parser, &token, literal))
        return 0;

    if (!(((parser->tokens).tail != (parser->tokens).end || yaml_queue_extend(data_flow, (void **)&(parser->tokens).start, (void **)&(parser->tokens).head, (void **)&(parser->tokens).tail, (void **)&(parser->tokens).end)) ? (*((parser->tokens).tail++) = token, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) {
        yaml_token_delete(data_flow, &token);
        return 0;
    }

    return 1;
}





static int
yaml_parser_fetch_flow_scalar(int *data_flow, yaml_parser_t *parser, int single)
{
    yaml_token_t token={0};



    if (!yaml_parser_save_simple_key(data_flow, parser))
        return 0;



    parser->simple_key_allowed = 0;



    if (!yaml_parser_scan_flow_scalar(data_flow, parser, &token, single))
        return 0;

    if (!(((parser->tokens).tail != (parser->tokens).end || yaml_queue_extend(data_flow, (void **)&(parser->tokens).start, (void **)&(parser->tokens).head, (void **)&(parser->tokens).tail, (void **)&(parser->tokens).end)) ? (*((parser->tokens).tail++) = token, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) {
        yaml_token_delete(data_flow, &token);
        return 0;
    }

    return 1;
}





static int
yaml_parser_fetch_plain_scalar(int *data_flow, yaml_parser_t *parser)
{
    yaml_token_t token={0};



    if (!yaml_parser_save_simple_key(data_flow, parser))
        return 0;



    parser->simple_key_allowed = 0;



    if (!yaml_parser_scan_plain_scalar(data_flow, parser, &token))
        return 0;

    if (!(((parser->tokens).tail != (parser->tokens).end || yaml_queue_extend(data_flow, (void **)&(parser->tokens).start, (void **)&(parser->tokens).head, (void **)&(parser->tokens).tail, (void **)&(parser->tokens).end)) ? (*((parser->tokens).tail++) = token, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) {
        yaml_token_delete(data_flow, &token);
        return 0;
    }

    return 1;
}





static int
yaml_parser_scan_to_next_token(int *data_flow, yaml_parser_t *parser)
{


    while (1)
    {


        if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(data_flow, parser, (1)))) return 0;

        if (parser->mark.column == 0 && ((((parser->buffer)).pointer[(0)] == (yaml_char_t)('\xEF')) && (((parser->buffer)).pointer[(0)+1] == (yaml_char_t)('\xBB')) && (((parser->buffer)).pointer[(0)+2] == (yaml_char_t)('\xBF'))))
            (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
        if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(data_flow, parser, (1)))) return 0;

        while ((((parser->buffer)).pointer[0] == (yaml_char_t)((' '))) ||
                ((parser->flow_level || !parser->simple_key_allowed) &&
                 (((parser->buffer)).pointer[0] == (yaml_char_t)(('\t'))))) {
            (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
            if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(data_flow, parser, (1)))) return 0;
        }



        if ((((parser->buffer)).pointer[0] == (yaml_char_t)(('#')))) {
            while (!(((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\r')) || (((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\n')) || ((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\xC2')) && (((((parser->buffer)))).pointer[((0))+1] == (yaml_char_t)('\x85'))) || ((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[((0))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[((0))+2] == (yaml_char_t)('\xA8'))) || ((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[((0))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[((0))+2] == (yaml_char_t)('\xA9')))) || (((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\0')))) {
                (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
                if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(data_flow, parser, (1)))) return 0;
            }
        }



        if ((((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\r')) || ((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\n')) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xC2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x85'))) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((parser->buffer))).pointer[(0)+2] == (yaml_char_t)('\xA8'))) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((parser->buffer))).pointer[(0)+2] == (yaml_char_t)('\xA9')))))
        {
            if (!(parser->unread >= (2) ? 1 : yaml_parser_update_buffer(data_flow, parser, (2)))) return 0;
            ((((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\r')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\n'))) ? (parser->mark.index += 2, parser->mark.column = 0, parser->mark.line ++, parser->unread -= 2, parser->buffer.pointer += 2) : (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\r')) || ((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\n')) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xC2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x85'))) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((parser->buffer))).pointer[(0)+2] == (yaml_char_t)('\xA8'))) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((parser->buffer))).pointer[(0)+2] == (yaml_char_t)('\xA9')))) ? (parser->mark.index ++, parser->mark.column = 0, parser->mark.line ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0)) : 0);



            if (!parser->flow_level) {
                parser->simple_key_allowed = 1;
            }
        }
        else
        {


            break;
        }
    }

    return 1;
}
int
yaml_parser_scan_directive(int *data_flow, yaml_parser_t *parser, yaml_token_t *token)
{
    yaml_mark_t start_mark, end_mark={0};
    yaml_char_t *name = 
                       ((void *)0)
                           ;
    int major, minor={0};
    yaml_char_t *handle = 
                         ((void *)0)
                             , *prefix = 
                                         ((void *)0)
                                             ;



    start_mark = parser->mark;

    (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));



    if (!yaml_parser_scan_directive_name(data_flow, parser, start_mark, &name))
        goto error;



    if (strcmp((char *)name, "YAML") == 0)
    {


        if (!yaml_parser_scan_version_directive_value(data_flow, parser, start_mark,
                    &major, &minor))
            goto error;

        end_mark = parser->mark;



        ((memset(&((*token)), 0, sizeof(yaml_token_t)), ((*token)).type = (YAML_VERSION_DIRECTIVE_TOKEN), ((*token)).start_mark = ((start_mark)), ((*token)).end_mark = ((end_mark))), (*token).data.version_directive.major = (major), (*token).data.version_directive.minor = (minor))
                                     ;
    }



    else if (strcmp((char *)name, "TAG") == 0)
    {


        if (!yaml_parser_scan_tag_directive_value(data_flow, parser, start_mark,
                    &handle, &prefix))
            goto error;

        end_mark = parser->mark;



        ((memset(&((*token)), 0, sizeof(yaml_token_t)), ((*token)).type = (YAML_TAG_DIRECTIVE_TOKEN), ((*token)).start_mark = ((start_mark)), ((*token)).end_mark = ((end_mark))), (*token).data.tag_directive.handle = (handle), (*token).data.tag_directive.prefix = (prefix))
                                     ;
    }



    else
    {
        yaml_parser_set_scanner_error(data_flow, parser, "while scanning a directive",
                start_mark, "found unknown directive name");
        goto error;
    }



    if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(data_flow, parser, (1)))) goto error;

    while (((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)(' ')) || (((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\t')))) {
        (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
        if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(data_flow, parser, (1)))) goto error;
    }

    if ((((parser->buffer)).pointer[0] == (yaml_char_t)(('#')))) {
        while (!(((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\r')) || (((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\n')) || ((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\xC2')) && (((((parser->buffer)))).pointer[((0))+1] == (yaml_char_t)('\x85'))) || ((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[((0))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[((0))+2] == (yaml_char_t)('\xA8'))) || ((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[((0))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[((0))+2] == (yaml_char_t)('\xA9')))) || (((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\0')))) {
            (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
            if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(data_flow, parser, (1)))) goto error;
        }
    }



    if (!(((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\r')) || (((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\n')) || ((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\xC2')) && (((((parser->buffer)))).pointer[((0))+1] == (yaml_char_t)('\x85'))) || ((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[((0))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[((0))+2] == (yaml_char_t)('\xA8'))) || ((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[((0))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[((0))+2] == (yaml_char_t)('\xA9')))) || (((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\0')))) {
        yaml_parser_set_scanner_error(data_flow, parser, "while scanning a directive",
                start_mark, "did not find expected comment or line break");
        goto error;
    }



    if ((((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\r')) || ((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\n')) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xC2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x85'))) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((parser->buffer))).pointer[(0)+2] == (yaml_char_t)('\xA8'))) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((parser->buffer))).pointer[(0)+2] == (yaml_char_t)('\xA9'))))) {
        if (!(parser->unread >= (2) ? 1 : yaml_parser_update_buffer(data_flow, parser, (2)))) goto error;
        ((((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\r')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\n'))) ? (parser->mark.index += 2, parser->mark.column = 0, parser->mark.line ++, parser->unread -= 2, parser->buffer.pointer += 2) : (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\r')) || ((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\n')) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xC2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x85'))) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((parser->buffer))).pointer[(0)+2] == (yaml_char_t)('\xA8'))) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((parser->buffer))).pointer[(0)+2] == (yaml_char_t)('\xA9')))) ? (parser->mark.index ++, parser->mark.column = 0, parser->mark.line ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0)) : 0);
    }

    yaml_free(data_flow, name);

    return 1;

error:
    yaml_free(data_flow, prefix);
    yaml_free(data_flow, handle);
    yaml_free(data_flow, name);
    return 0;
}
static int
yaml_parser_scan_directive_name(int *data_flow, yaml_parser_t *parser,
        yaml_mark_t start_mark, yaml_char_t **name)
{
    yaml_string_t string = { 
                          ((void *)0)
                          , 
                          ((void *)0)
                          , 
                          ((void *)0) 
                          };

    if (!(((string).start = (yaml_char_t *)yaml_malloc(data_flow, 16)) ? ((string).pointer = (string).start, (string).end = (string).start+(16), memset((string).start, 0, (16)), 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;



    if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(data_flow, parser, (1)))) goto error;

    while (((((parser->buffer)).pointer[0] >= (yaml_char_t) '0' && ((parser->buffer)).pointer[0] <= (yaml_char_t) '9') || (((parser->buffer)).pointer[0] >= (yaml_char_t) 'A' && ((parser->buffer)).pointer[0] <= (yaml_char_t) 'Z') || (((parser->buffer)).pointer[0] >= (yaml_char_t) 'a' && ((parser->buffer)).pointer[0] <= (yaml_char_t) 'z') || ((parser->buffer)).pointer[0] == '_' || ((parser->buffer)).pointer[0] == '-'))
    {
        if (!(((((string).pointer+5 < (string).end) || yaml_string_extend(data_flow, &(string).start, &(string).pointer, &(string).end)) ? 1 : ((parser)->error = YAML_MEMORY_ERROR, 0)) ? (((*(parser->buffer).pointer & 0x80) == 0x00 ? (*((string).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xE0) == 0xC0 ? (*((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xF0) == 0xE0 ? (*((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xF8) == 0xF0 ? (*((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++)) : 0), parser->mark.index ++, parser->mark.column ++, parser->unread --, 1) : 0)) goto error;
        if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(data_flow, parser, (1)))) goto error;
    }



    if (string.start == string.pointer) {
        yaml_parser_set_scanner_error(data_flow, parser, "while scanning a directive",
                start_mark, "could not find expected directive name");
        goto error;
    }



    if (!((((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)(' ')) || ((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\t'))) || ((((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\r')) || ((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\n')) || (((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\xC2')) && ((((((parser->buffer))))).pointer[(((0)))+1] == (yaml_char_t)('\x85'))) || (((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\xE2')) && ((((((parser->buffer))))).pointer[(((0)))+1] == (yaml_char_t)('\x80')) && ((((((parser->buffer))))).pointer[(((0)))+2] == (yaml_char_t)('\xA8'))) || (((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\xE2')) && ((((((parser->buffer))))).pointer[(((0)))+1] == (yaml_char_t)('\x80')) && ((((((parser->buffer))))).pointer[(((0)))+2] == (yaml_char_t)('\xA9')))) || ((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\0'))))) {
        yaml_parser_set_scanner_error(data_flow, parser, "while scanning a directive",
                start_mark, "found unexpected non-alphabetical character");
        goto error;
    }

    *name = string.start;

    return 1;

error:
    (yaml_free(data_flow, (string).start), (string).start = (string).pointer = (string).end = 0);
    return 0;
}
static int
yaml_parser_scan_version_directive_value(int *data_flow, yaml_parser_t *parser,
        yaml_mark_t start_mark, int *major, int *minor)
{


    if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(data_flow, parser, (1)))) return 0;

    while (((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)(' ')) || (((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\t')))) {
        (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
        if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(data_flow, parser, (1)))) return 0;
    }



    if (!yaml_parser_scan_version_directive_number(data_flow, parser, start_mark, major))
        return 0;



    if (!(((parser->buffer)).pointer[0] == (yaml_char_t)(('.')))) {
        return yaml_parser_set_scanner_error(data_flow, parser, "while scanning a %YAML directive",
                start_mark, "did not find expected digit or '.' character");
    }

    (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));



    if (!yaml_parser_scan_version_directive_number(data_flow, parser, start_mark, minor))
        return 0;

    return 1;
}
static int
yaml_parser_scan_version_directive_number(int *data_flow, yaml_parser_t *parser,
        yaml_mark_t start_mark, int *number)
{
    int value = 0;
    size_t length = 0;



    if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(data_flow, parser, (1)))) return 0;

    while (((((parser->buffer)).pointer[0] >= (yaml_char_t) '0' && ((parser->buffer)).pointer[0] <= (yaml_char_t) '9')))
    {


        if (++length > 9) {
            return yaml_parser_set_scanner_error(data_flow, parser, "while scanning a %YAML directive",
                    start_mark, "found extremely long version number");
        }

        value = value*10 + (((parser->buffer)).pointer[0] - (yaml_char_t) '0');

        (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));

        if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(data_flow, parser, (1)))) return 0;
    }



    if (!length) {
        return yaml_parser_set_scanner_error(data_flow, parser, "while scanning a %YAML directive",
                start_mark, "did not find expected version number");
    }

    *number = value;

    return 1;
}
static int
yaml_parser_scan_tag_directive_value(int *data_flow, yaml_parser_t *parser,
        yaml_mark_t start_mark, yaml_char_t **handle, yaml_char_t **prefix)
{
    yaml_char_t *handle_value = 
                               ((void *)0)
                                   ;
    yaml_char_t *prefix_value = 
                               ((void *)0)
                                   ;



    if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(data_flow, parser, (1)))) goto error;

    while (((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)(' ')) || (((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\t')))) {
        (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
        if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(data_flow, parser, (1)))) goto error;
    }



    if (!yaml_parser_scan_tag_handle(data_flow, parser, 1, start_mark, &handle_value))
        goto error;



    if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(data_flow, parser, (1)))) goto error;

    if (!((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)(' ')) || (((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\t')))) {
        yaml_parser_set_scanner_error(data_flow, parser, "while scanning a %TAG directive",
                start_mark, "did not find expected whitespace");
        goto error;
    }



    while (((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)(' ')) || (((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\t')))) {
        (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
        if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(data_flow, parser, (1)))) goto error;
    }



    if (!yaml_parser_scan_tag_uri(data_flow, parser, 1, 
                                            ((void *)0)
                                                , start_mark, &prefix_value))
        goto error;



    if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(data_flow, parser, (1)))) goto error;

    if (!((((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)(' ')) || ((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\t'))) || ((((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\r')) || ((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\n')) || (((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\xC2')) && ((((((parser->buffer))))).pointer[(((0)))+1] == (yaml_char_t)('\x85'))) || (((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\xE2')) && ((((((parser->buffer))))).pointer[(((0)))+1] == (yaml_char_t)('\x80')) && ((((((parser->buffer))))).pointer[(((0)))+2] == (yaml_char_t)('\xA8'))) || (((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\xE2')) && ((((((parser->buffer))))).pointer[(((0)))+1] == (yaml_char_t)('\x80')) && ((((((parser->buffer))))).pointer[(((0)))+2] == (yaml_char_t)('\xA9')))) || ((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\0'))))) {
        yaml_parser_set_scanner_error(data_flow, parser, "while scanning a %TAG directive",
                start_mark, "did not find expected whitespace or line break");
        goto error;
    }

    *handle = handle_value;
    *prefix = prefix_value;

    return 1;

error:
    yaml_free(data_flow, handle_value);
    yaml_free(data_flow, prefix_value);
    return 0;
}

static int
yaml_parser_scan_anchor(int *data_flow, yaml_parser_t *parser, yaml_token_t *token,
        yaml_token_type_t type)
{
    int length = 0;
    yaml_mark_t start_mark, end_mark={0};
    yaml_string_t string = { 
                          ((void *)0)
                          , 
                          ((void *)0)
                          , 
                          ((void *)0) 
                          };

    if (!(((string).start = (yaml_char_t *)yaml_malloc(data_flow, 16)) ? ((string).pointer = (string).start, (string).end = (string).start+(16), memset((string).start, 0, (16)), 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;



    start_mark = parser->mark;

    (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));



    if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(data_flow, parser, (1)))) goto error;

    while (((((parser->buffer)).pointer[0] >= (yaml_char_t) '0' && ((parser->buffer)).pointer[0] <= (yaml_char_t) '9') || (((parser->buffer)).pointer[0] >= (yaml_char_t) 'A' && ((parser->buffer)).pointer[0] <= (yaml_char_t) 'Z') || (((parser->buffer)).pointer[0] >= (yaml_char_t) 'a' && ((parser->buffer)).pointer[0] <= (yaml_char_t) 'z') || ((parser->buffer)).pointer[0] == '_' || ((parser->buffer)).pointer[0] == '-')) {
        if (!(((((string).pointer+5 < (string).end) || yaml_string_extend(data_flow, &(string).start, &(string).pointer, &(string).end)) ? 1 : ((parser)->error = YAML_MEMORY_ERROR, 0)) ? (((*(parser->buffer).pointer & 0x80) == 0x00 ? (*((string).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xE0) == 0xC0 ? (*((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xF0) == 0xE0 ? (*((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xF8) == 0xF0 ? (*((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++)) : 0), parser->mark.index ++, parser->mark.column ++, parser->unread --, 1) : 0)) goto error;
        if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(data_flow, parser, (1)))) goto error;
        length ++;
    }

    end_mark = parser->mark;
    if (!length || !(((((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)(' ')) || ((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\t'))) || ((((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\r')) || ((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\n')) || (((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\xC2')) && ((((((parser->buffer))))).pointer[(((0)))+1] == (yaml_char_t)('\x85'))) || (((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\xE2')) && ((((((parser->buffer))))).pointer[(((0)))+1] == (yaml_char_t)('\x80')) && ((((((parser->buffer))))).pointer[(((0)))+2] == (yaml_char_t)('\xA8'))) || (((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\xE2')) && ((((((parser->buffer))))).pointer[(((0)))+1] == (yaml_char_t)('\x80')) && ((((((parser->buffer))))).pointer[(((0)))+2] == (yaml_char_t)('\xA9')))) || ((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\0')))) || (((parser->buffer)).pointer[0] == (yaml_char_t)(('?')))
                || (((parser->buffer)).pointer[0] == (yaml_char_t)((':'))) || (((parser->buffer)).pointer[0] == (yaml_char_t)((',')))
                || (((parser->buffer)).pointer[0] == (yaml_char_t)((']'))) || (((parser->buffer)).pointer[0] == (yaml_char_t)(('}')))
                || (((parser->buffer)).pointer[0] == (yaml_char_t)(('%'))) || (((parser->buffer)).pointer[0] == (yaml_char_t)(('@')))
                || (((parser->buffer)).pointer[0] == (yaml_char_t)(('`'))))) {
        yaml_parser_set_scanner_error(data_flow, parser, type == YAML_ANCHOR_TOKEN ?
                "while scanning an anchor" : "while scanning an alias", start_mark,
                "did not find expected alphabetic or numeric character");
        goto error;
    }



    if (type == YAML_ANCHOR_TOKEN) {
        ((memset(&((*token)), 0, sizeof(yaml_token_t)), ((*token)).type = (YAML_ANCHOR_TOKEN), ((*token)).start_mark = ((start_mark)), ((*token)).end_mark = ((end_mark))), (*token).data.anchor.value = (string.start));
    }
    else {
        ((memset(&((*token)), 0, sizeof(yaml_token_t)), ((*token)).type = (YAML_ALIAS_TOKEN), ((*token)).start_mark = ((start_mark)), ((*token)).end_mark = ((end_mark))), (*token).data.alias.value = (string.start));
    }

    return 1;

error:
    (yaml_free(data_flow, (string).start), (string).start = (string).pointer = (string).end = 0);
    return 0;
}





static int
yaml_parser_scan_tag(int *data_flow, yaml_parser_t *parser, yaml_token_t *token)
{
    yaml_char_t *handle = 
                         ((void *)0)
                             ;
    yaml_char_t *suffix = 
                         ((void *)0)
                             ;
    yaml_mark_t start_mark, end_mark={0};

    start_mark = parser->mark;



    if (!(parser->unread >= (2) ? 1 : yaml_parser_update_buffer(data_flow, parser, (2)))) goto error;

    if (((parser->buffer).pointer[1] == (yaml_char_t)('<')))
    {


        handle = (yaml_char_t *)yaml_malloc(data_flow, 1);
        if (!handle) goto error;
        handle[0] = '\0';



        (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
        (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));



        if (!yaml_parser_scan_tag_uri(data_flow, parser, 0, 
                                                ((void *)0)
                                                    , start_mark, &suffix))
            goto error;



        if (!(((parser->buffer)).pointer[0] == (yaml_char_t)(('>')))) {
            yaml_parser_set_scanner_error(data_flow, parser, "while scanning a tag",
                    start_mark, "did not find the expected '>'");
            goto error;
        }

        (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
    }
    else
    {




        if (!yaml_parser_scan_tag_handle(data_flow, parser, 0, start_mark, &handle))
            goto error;



        if (handle[0] == '!' && handle[1] != '\0' && handle[strlen((char *)handle)-1] == '!')
        {


            if (!yaml_parser_scan_tag_uri(data_flow, parser, 0, 
                                                    ((void *)0)
                                                        , start_mark, &suffix))
                goto error;
        }
        else
        {


            if (!yaml_parser_scan_tag_uri(data_flow, parser, 0, handle, start_mark, &suffix))
                goto error;



            yaml_free(data_flow, handle);
            handle = (yaml_char_t *)yaml_malloc(data_flow, 2);
            if (!handle) goto error;
            handle[0] = '!';
            handle[1] = '\0';






            if (suffix[0] == '\0') {
                yaml_char_t *tmp = handle;
                handle = suffix;
                suffix = tmp;
            }
        }
    }



    if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(data_flow, parser, (1)))) goto error;

    if (!((((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)(' ')) || ((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\t'))) || ((((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\r')) || ((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\n')) || (((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\xC2')) && ((((((parser->buffer))))).pointer[(((0)))+1] == (yaml_char_t)('\x85'))) || (((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\xE2')) && ((((((parser->buffer))))).pointer[(((0)))+1] == (yaml_char_t)('\x80')) && ((((((parser->buffer))))).pointer[(((0)))+2] == (yaml_char_t)('\xA8'))) || (((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\xE2')) && ((((((parser->buffer))))).pointer[(((0)))+1] == (yaml_char_t)('\x80')) && ((((((parser->buffer))))).pointer[(((0)))+2] == (yaml_char_t)('\xA9')))) || ((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\0'))))) {
        yaml_parser_set_scanner_error(data_flow, parser, "while scanning a tag",
                start_mark, "did not find expected whitespace or line break");
        goto error;
    }

    end_mark = parser->mark;



    ((memset(&((*token)), 0, sizeof(yaml_token_t)), ((*token)).type = (YAML_TAG_TOKEN), ((*token)).start_mark = ((start_mark)), ((*token)).end_mark = ((end_mark))), (*token).data.tag.handle = (handle), (*token).data.tag.suffix = (suffix));

    return 1;

error:
    yaml_free(data_flow, handle);
    yaml_free(data_flow, suffix);
    return 0;
}





static int
yaml_parser_scan_tag_handle(int *data_flow, yaml_parser_t *parser, int directive,
        yaml_mark_t start_mark, yaml_char_t **handle)
{
    yaml_string_t string = { 
                          ((void *)0)
                          , 
                          ((void *)0)
                          , 
                          ((void *)0) 
                          };

    if (!(((string).start = (yaml_char_t *)yaml_malloc(data_flow, 16)) ? ((string).pointer = (string).start, (string).end = (string).start+(16), memset((string).start, 0, (16)), 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;



    if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(data_flow, parser, (1)))) goto error;

    if (!(((parser->buffer)).pointer[0] == (yaml_char_t)(('!')))) {
        yaml_parser_set_scanner_error(data_flow, parser, directive ?
                "while scanning a tag directive" : "while scanning a tag",
                start_mark, "did not find expected '!'");
        goto error;
    }



    if (!(((((string).pointer+5 < (string).end) || yaml_string_extend(data_flow, &(string).start, &(string).pointer, &(string).end)) ? 1 : ((parser)->error = YAML_MEMORY_ERROR, 0)) ? (((*(parser->buffer).pointer & 0x80) == 0x00 ? (*((string).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xE0) == 0xC0 ? (*((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xF0) == 0xE0 ? (*((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xF8) == 0xF0 ? (*((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++)) : 0), parser->mark.index ++, parser->mark.column ++, parser->unread --, 1) : 0)) goto error;



    if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(data_flow, parser, (1)))) goto error;

    while (((((parser->buffer)).pointer[0] >= (yaml_char_t) '0' && ((parser->buffer)).pointer[0] <= (yaml_char_t) '9') || (((parser->buffer)).pointer[0] >= (yaml_char_t) 'A' && ((parser->buffer)).pointer[0] <= (yaml_char_t) 'Z') || (((parser->buffer)).pointer[0] >= (yaml_char_t) 'a' && ((parser->buffer)).pointer[0] <= (yaml_char_t) 'z') || ((parser->buffer)).pointer[0] == '_' || ((parser->buffer)).pointer[0] == '-'))
    {
        if (!(((((string).pointer+5 < (string).end) || yaml_string_extend(data_flow, &(string).start, &(string).pointer, &(string).end)) ? 1 : ((parser)->error = YAML_MEMORY_ERROR, 0)) ? (((*(parser->buffer).pointer & 0x80) == 0x00 ? (*((string).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xE0) == 0xC0 ? (*((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xF0) == 0xE0 ? (*((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xF8) == 0xF0 ? (*((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++)) : 0), parser->mark.index ++, parser->mark.column ++, parser->unread --, 1) : 0)) goto error;
        if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(data_flow, parser, (1)))) goto error;
    }



    if ((((parser->buffer)).pointer[0] == (yaml_char_t)(('!'))))
    {
        if (!(((((string).pointer+5 < (string).end) || yaml_string_extend(data_flow, &(string).start, &(string).pointer, &(string).end)) ? 1 : ((parser)->error = YAML_MEMORY_ERROR, 0)) ? (((*(parser->buffer).pointer & 0x80) == 0x00 ? (*((string).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xE0) == 0xC0 ? (*((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xF0) == 0xE0 ? (*((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xF8) == 0xF0 ? (*((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++)) : 0), parser->mark.index ++, parser->mark.column ++, parser->unread --, 1) : 0)) goto error;
    }
    else
    {






        if (directive && !(string.start[0] == '!' && string.start[1] == '\0')) {
            yaml_parser_set_scanner_error(data_flow, parser, "while parsing a tag directive",
                    start_mark, "did not find expected '!'");
            goto error;
        }
    }

    *handle = string.start;

    return 1;

error:
    (yaml_free(data_flow, (string).start), (string).start = (string).pointer = (string).end = 0);
    return 0;
}





static int
yaml_parser_scan_tag_uri(int *data_flow, yaml_parser_t *parser, int directive,
        yaml_char_t *head, yaml_mark_t start_mark, yaml_char_t **uri)
{
    size_t length = head ? strlen((char *)head) : 0;
    yaml_string_t string = { 
                          ((void *)0)
                          , 
                          ((void *)0)
                          , 
                          ((void *)0) 
                          };

    if (!(((string).start = (yaml_char_t *)yaml_malloc(data_flow, 16)) ? ((string).pointer = (string).start, (string).end = (string).start+(16), memset((string).start, 0, (16)), 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;



    while ((size_t)(string.end - string.start) <= length) {
        if (!yaml_string_extend(data_flow, &string.start, &string.pointer, &string.end)) {
            parser->error = YAML_MEMORY_ERROR;
            goto error;
        }
    }







    if (length > 1) {
        memcpy(string.start, head+1, length-1);
        string.pointer += length-1;
    }



    if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(data_flow, parser, (1)))) goto error;
    while (((((parser->buffer)).pointer[0] >= (yaml_char_t) '0' && ((parser->buffer)).pointer[0] <= (yaml_char_t) '9') || (((parser->buffer)).pointer[0] >= (yaml_char_t) 'A' && ((parser->buffer)).pointer[0] <= (yaml_char_t) 'Z') || (((parser->buffer)).pointer[0] >= (yaml_char_t) 'a' && ((parser->buffer)).pointer[0] <= (yaml_char_t) 'z') || ((parser->buffer)).pointer[0] == '_' || ((parser->buffer)).pointer[0] == '-') || (((parser->buffer)).pointer[0] == (yaml_char_t)((';')))
            || (((parser->buffer)).pointer[0] == (yaml_char_t)(('/'))) || (((parser->buffer)).pointer[0] == (yaml_char_t)(('?')))
            || (((parser->buffer)).pointer[0] == (yaml_char_t)((':'))) || (((parser->buffer)).pointer[0] == (yaml_char_t)(('@')))
            || (((parser->buffer)).pointer[0] == (yaml_char_t)(('&'))) || (((parser->buffer)).pointer[0] == (yaml_char_t)(('=')))
            || (((parser->buffer)).pointer[0] == (yaml_char_t)(('+'))) || (((parser->buffer)).pointer[0] == (yaml_char_t)(('$')))
            || (((parser->buffer)).pointer[0] == (yaml_char_t)((','))) || (((parser->buffer)).pointer[0] == (yaml_char_t)(('.')))
            || (((parser->buffer)).pointer[0] == (yaml_char_t)(('!'))) || (((parser->buffer)).pointer[0] == (yaml_char_t)(('~')))
            || (((parser->buffer)).pointer[0] == (yaml_char_t)(('*'))) || (((parser->buffer)).pointer[0] == (yaml_char_t)(('\'')))
            || (((parser->buffer)).pointer[0] == (yaml_char_t)(('('))) || (((parser->buffer)).pointer[0] == (yaml_char_t)((')')))
            || (((parser->buffer)).pointer[0] == (yaml_char_t)(('['))) || (((parser->buffer)).pointer[0] == (yaml_char_t)((']')))
            || (((parser->buffer)).pointer[0] == (yaml_char_t)(('%'))))
    {


        if ((((parser->buffer)).pointer[0] == (yaml_char_t)(('%')))) {
            if (!((((string).pointer+5 < (string).end) || yaml_string_extend(data_flow, &(string).start, &(string).pointer, &(string).end)) ? 1 : ((parser)->error = YAML_MEMORY_ERROR, 0)))
                goto error;

            if (!yaml_parser_scan_uri_escapes(data_flow, parser,
                        directive, start_mark, &string)) goto error;
        }
        else {
            if (!(((((string).pointer+5 < (string).end) || yaml_string_extend(data_flow, &(string).start, &(string).pointer, &(string).end)) ? 1 : ((parser)->error = YAML_MEMORY_ERROR, 0)) ? (((*(parser->buffer).pointer & 0x80) == 0x00 ? (*((string).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xE0) == 0xC0 ? (*((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xF0) == 0xE0 ? (*((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xF8) == 0xF0 ? (*((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++)) : 0), parser->mark.index ++, parser->mark.column ++, parser->unread --, 1) : 0)) goto error;
        }

        length ++;
        if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(data_flow, parser, (1)))) goto error;
    }



    if (!length) {
        if (!((((string).pointer+5 < (string).end) || yaml_string_extend(data_flow, &(string).start, &(string).pointer, &(string).end)) ? 1 : ((parser)->error = YAML_MEMORY_ERROR, 0)))
            goto error;

        yaml_parser_set_scanner_error(data_flow, parser, directive ?
                "while parsing a %TAG directive" : "while parsing a tag",
                start_mark, "did not find expected tag URI");
        goto error;
    }

    *uri = string.start;

    return 1;

error:
    (yaml_free(data_flow, (string).start), (string).start = (string).pointer = (string).end = 0);
    return 0;
}





static int
yaml_parser_scan_uri_escapes(int *data_flow, yaml_parser_t *parser, int directive,
        yaml_mark_t start_mark, yaml_string_t *string)
{
    int width = 0;



    do {

        unsigned char octet = 0;



        if (!(parser->unread >= (3) ? 1 : yaml_parser_update_buffer(data_flow, parser, (3)))) return 0;

        if (!((((parser->buffer)).pointer[0] == (yaml_char_t)(('%')))
                    && (((parser->buffer).pointer[1] >= (yaml_char_t) '0' && (parser->buffer).pointer[1] <= (yaml_char_t) '9') || ((parser->buffer).pointer[1] >= (yaml_char_t) 'A' && (parser->buffer).pointer[1] <= (yaml_char_t) 'F') || ((parser->buffer).pointer[1] >= (yaml_char_t) 'a' && (parser->buffer).pointer[1] <= (yaml_char_t) 'f'))
                    && (((parser->buffer).pointer[2] >= (yaml_char_t) '0' && (parser->buffer).pointer[2] <= (yaml_char_t) '9') || ((parser->buffer).pointer[2] >= (yaml_char_t) 'A' && (parser->buffer).pointer[2] <= (yaml_char_t) 'F') || ((parser->buffer).pointer[2] >= (yaml_char_t) 'a' && (parser->buffer).pointer[2] <= (yaml_char_t) 'f')))) {
            return yaml_parser_set_scanner_error(data_flow, parser, directive ?
                    "while parsing a %TAG directive" : "while parsing a tag",
                    start_mark, "did not find URI escaped octet");
        }



        octet = ((((parser->buffer).pointer[1] >= (yaml_char_t) 'A' && (parser->buffer).pointer[1] <= (yaml_char_t) 'F') ? ((parser->buffer).pointer[1] - (yaml_char_t) 'A' + 10) : ((parser->buffer).pointer[1] >= (yaml_char_t) 'a' && (parser->buffer).pointer[1] <= (yaml_char_t) 'f') ? ((parser->buffer).pointer[1] - (yaml_char_t) 'a' + 10) : ((parser->buffer).pointer[1] - (yaml_char_t) '0')) << 4) + (((parser->buffer).pointer[2] >= (yaml_char_t) 'A' && (parser->buffer).pointer[2] <= (yaml_char_t) 'F') ? ((parser->buffer).pointer[2] - (yaml_char_t) 'A' + 10) : ((parser->buffer).pointer[2] >= (yaml_char_t) 'a' && (parser->buffer).pointer[2] <= (yaml_char_t) 'f') ? ((parser->buffer).pointer[2] - (yaml_char_t) 'a' + 10) : ((parser->buffer).pointer[2] - (yaml_char_t) '0'));



        if (!width)
        {
            width = (octet & 0x80) == 0x00 ? 1 :
                    (octet & 0xE0) == 0xC0 ? 2 :
                    (octet & 0xF0) == 0xE0 ? 3 :
                    (octet & 0xF8) == 0xF0 ? 4 : 0;
            if (!width) {
                return yaml_parser_set_scanner_error(data_flow, parser, directive ?
                        "while parsing a %TAG directive" : "while parsing a tag",
                        start_mark, "found an incorrect leading UTF-8 octet");
            }
        }
        else
        {


            if ((octet & 0xC0) != 0x80) {
                return yaml_parser_set_scanner_error(data_flow, parser, directive ?
                        "while parsing a %TAG directive" : "while parsing a tag",
                        start_mark, "found an incorrect trailing UTF-8 octet");
            }
        }



        *(string->pointer++) = octet;
        (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
        (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
        (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));

    } while (--width);

    return 1;
}





static int
yaml_parser_scan_block_scalar(int *data_flow, yaml_parser_t *parser, yaml_token_t *token,
        int literal)
{
    yaml_mark_t start_mark={0};
    yaml_mark_t end_mark={0};
    yaml_string_t string = { 
                          ((void *)0)
                          , 
                          ((void *)0)
                          , 
                          ((void *)0) 
                          };
    yaml_string_t leading_break = { 
                                 ((void *)0)
                                 , 
                                 ((void *)0)
                                 , 
                                 ((void *)0) 
                                 };
    yaml_string_t trailing_breaks = { 
                                   ((void *)0)
                                   , 
                                   ((void *)0)
                                   , 
                                   ((void *)0) 
                                   };
    int chomping = 0;
    int increment = 0;
    int indent = 0;
    int leading_blank = 0;
    int trailing_blank = 0;

    if (!(((string).start = (yaml_char_t *)yaml_malloc(data_flow, 16)) ? ((string).pointer = (string).start, (string).end = (string).start+(16), memset((string).start, 0, (16)), 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;
    if (!(((leading_break).start = (yaml_char_t *)yaml_malloc(data_flow, 16)) ? ((leading_break).pointer = (leading_break).start, (leading_break).end = (leading_break).start+(16), memset((leading_break).start, 0, (16)), 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;
    if (!(((trailing_breaks).start = (yaml_char_t *)yaml_malloc(data_flow, 16)) ? ((trailing_breaks).pointer = (trailing_breaks).start, (trailing_breaks).end = (trailing_breaks).start+(16), memset((trailing_breaks).start, 0, (16)), 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;



    start_mark = parser->mark;

    (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));



    if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(data_flow, parser, (1)))) goto error;



    if ((((parser->buffer)).pointer[0] == (yaml_char_t)(('+'))) || (((parser->buffer)).pointer[0] == (yaml_char_t)(('-'))))
    {


        chomping = (((parser->buffer)).pointer[0] == (yaml_char_t)(('+'))) ? +1 : -1;

        (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));



        if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(data_flow, parser, (1)))) goto error;

        if (((((parser->buffer)).pointer[0] >= (yaml_char_t) '0' && ((parser->buffer)).pointer[0] <= (yaml_char_t) '9')))
        {


            if ((((parser->buffer)).pointer[0] == (yaml_char_t)(('0')))) {
                yaml_parser_set_scanner_error(data_flow, parser, "while scanning a block scalar",
                        start_mark, "found an indentation indicator equal to 0");
                goto error;
            }



            increment = (((parser->buffer)).pointer[0] - (yaml_char_t) '0');

            (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
        }
    }



    else if (((((parser->buffer)).pointer[0] >= (yaml_char_t) '0' && ((parser->buffer)).pointer[0] <= (yaml_char_t) '9')))
    {
        if ((((parser->buffer)).pointer[0] == (yaml_char_t)(('0')))) {
            yaml_parser_set_scanner_error(data_flow, parser, "while scanning a block scalar",
                    start_mark, "found an indentation indicator equal to 0");
            goto error;
        }

        increment = (((parser->buffer)).pointer[0] - (yaml_char_t) '0');

        (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));

        if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(data_flow, parser, (1)))) goto error;

        if ((((parser->buffer)).pointer[0] == (yaml_char_t)(('+'))) || (((parser->buffer)).pointer[0] == (yaml_char_t)(('-')))) {
            chomping = (((parser->buffer)).pointer[0] == (yaml_char_t)(('+'))) ? +1 : -1;

            (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
        }
    }



    if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(data_flow, parser, (1)))) goto error;

    while (((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)(' ')) || (((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\t')))) {
        (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
        if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(data_flow, parser, (1)))) goto error;
    }

    if ((((parser->buffer)).pointer[0] == (yaml_char_t)(('#')))) {
        while (!(((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\r')) || (((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\n')) || ((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\xC2')) && (((((parser->buffer)))).pointer[((0))+1] == (yaml_char_t)('\x85'))) || ((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[((0))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[((0))+2] == (yaml_char_t)('\xA8'))) || ((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[((0))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[((0))+2] == (yaml_char_t)('\xA9')))) || (((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\0')))) {
            (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
            if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(data_flow, parser, (1)))) goto error;
        }
    }



    if (!(((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\r')) || (((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\n')) || ((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\xC2')) && (((((parser->buffer)))).pointer[((0))+1] == (yaml_char_t)('\x85'))) || ((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[((0))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[((0))+2] == (yaml_char_t)('\xA8'))) || ((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[((0))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[((0))+2] == (yaml_char_t)('\xA9')))) || (((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\0')))) {
        yaml_parser_set_scanner_error(data_flow, parser, "while scanning a block scalar",
                start_mark, "did not find expected comment or line break");
        goto error;
    }



    if ((((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\r')) || ((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\n')) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xC2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x85'))) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((parser->buffer))).pointer[(0)+2] == (yaml_char_t)('\xA8'))) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((parser->buffer))).pointer[(0)+2] == (yaml_char_t)('\xA9'))))) {
        if (!(parser->unread >= (2) ? 1 : yaml_parser_update_buffer(data_flow, parser, (2)))) goto error;
        ((((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\r')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\n'))) ? (parser->mark.index += 2, parser->mark.column = 0, parser->mark.line ++, parser->unread -= 2, parser->buffer.pointer += 2) : (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\r')) || ((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\n')) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xC2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x85'))) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((parser->buffer))).pointer[(0)+2] == (yaml_char_t)('\xA8'))) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((parser->buffer))).pointer[(0)+2] == (yaml_char_t)('\xA9')))) ? (parser->mark.index ++, parser->mark.column = 0, parser->mark.line ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0)) : 0);
    }

    end_mark = parser->mark;



    if (increment) {
        indent = parser->indent >= 0 ? parser->indent+increment : increment;
    }



    if (!yaml_parser_scan_block_scalar_breaks(data_flow, parser, &indent, &trailing_breaks,
                start_mark, &end_mark)) goto error;



    if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(data_flow, parser, (1)))) goto error;

    while ((int)parser->mark.column == indent && !((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\0')))
    {






        trailing_blank = ((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)(' ')) || (((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\t')));



        if (!literal && (*leading_break.start == '\n')
                && !leading_blank && !trailing_blank)
        {


            if (*trailing_breaks.start == '\0') {
                if (!((((string).pointer+5 < (string).end) || yaml_string_extend(data_flow, &(string).start, &(string).pointer, &(string).end)) ? 1 : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;
                *(string.pointer ++) = ' ';
            }

            ((leading_break).pointer = (leading_break).start, memset((leading_break).start, 0, (leading_break).end-(leading_break).start));
        }
        else {
            if (!((yaml_string_join(data_flow, &(string).start, &(string).pointer, &(string).end, &(leading_break).start, &(leading_break).pointer, &(leading_break).end)) ? ((leading_break).pointer = (leading_break).start, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;
            ((leading_break).pointer = (leading_break).start, memset((leading_break).start, 0, (leading_break).end-(leading_break).start));
        }



        if (!((yaml_string_join(data_flow, &(string).start, &(string).pointer, &(string).end, &(trailing_breaks).start, &(trailing_breaks).pointer, &(trailing_breaks).end)) ? ((trailing_breaks).pointer = (trailing_breaks).start, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;
        ((trailing_breaks).pointer = (trailing_breaks).start, memset((trailing_breaks).start, 0, (trailing_breaks).end-(trailing_breaks).start));



        leading_blank = ((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)(' ')) || (((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\t')));



        while (!(((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\r')) || (((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\n')) || ((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\xC2')) && (((((parser->buffer)))).pointer[((0))+1] == (yaml_char_t)('\x85'))) || ((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[((0))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[((0))+2] == (yaml_char_t)('\xA8'))) || ((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[((0))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[((0))+2] == (yaml_char_t)('\xA9')))) || (((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\0')))) {
            if (!(((((string).pointer+5 < (string).end) || yaml_string_extend(data_flow, &(string).start, &(string).pointer, &(string).end)) ? 1 : ((parser)->error = YAML_MEMORY_ERROR, 0)) ? (((*(parser->buffer).pointer & 0x80) == 0x00 ? (*((string).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xE0) == 0xC0 ? (*((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xF0) == 0xE0 ? (*((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xF8) == 0xF0 ? (*((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++)) : 0), parser->mark.index ++, parser->mark.column ++, parser->unread --, 1) : 0)) goto error;
            if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(data_flow, parser, (1)))) goto error;
        }



        if (!(parser->unread >= (2) ? 1 : yaml_parser_update_buffer(data_flow, parser, (2)))) goto error;

        if (!(((((leading_break).pointer+5 < (leading_break).end) || yaml_string_extend(data_flow, &(leading_break).start, &(leading_break).pointer, &(leading_break).end)) ? 1 : ((parser)->error = YAML_MEMORY_ERROR, 0)) ? (((((parser->buffer).pointer[0] == (yaml_char_t)('\r')) && ((parser->buffer).pointer[1] == (yaml_char_t)('\n'))) ? (*((leading_break).pointer++) = (yaml_char_t) '\n', parser->buffer.pointer += 2, parser->mark.index += 2, parser->mark.column = 0, parser->mark.line ++, parser->unread -= 2) : (((parser->buffer).pointer[0] == (yaml_char_t)('\r')) || ((parser->buffer).pointer[0] == (yaml_char_t)('\n'))) ? (*((leading_break).pointer++) = (yaml_char_t) '\n', parser->buffer.pointer ++, parser->mark.index ++, parser->mark.column = 0, parser->mark.line ++, parser->unread --) : (((parser->buffer).pointer[0] == (yaml_char_t)('\xC2')) && ((parser->buffer).pointer[1] == (yaml_char_t)('\x85'))) ? (*((leading_break).pointer++) = (yaml_char_t) '\n', parser->buffer.pointer += 2, parser->mark.index ++, parser->mark.column = 0, parser->mark.line ++, parser->unread --) : (((parser->buffer).pointer[0] == (yaml_char_t)('\xE2')) && ((parser->buffer).pointer[1] == (yaml_char_t)('\x80')) && (((parser->buffer).pointer[2] == (yaml_char_t)('\xA8')) || ((parser->buffer).pointer[2] == (yaml_char_t)('\xA9')))) ? (*((leading_break).pointer++) = *(parser->buffer.pointer++), *((leading_break).pointer++) = *(parser->buffer.pointer++), *((leading_break).pointer++) = *(parser->buffer.pointer++), parser->mark.index ++, parser->mark.column = 0, parser->mark.line ++, parser->unread --) : 0), 1) : 0)) goto error;



        if (!yaml_parser_scan_block_scalar_breaks(data_flow, parser,
                    &indent, &trailing_breaks, start_mark, &end_mark)) goto error;
    }



    if (chomping != -1) {
        if (!((yaml_string_join(data_flow, &(string).start, &(string).pointer, &(string).end, &(leading_break).start, &(leading_break).pointer, &(leading_break).end)) ? ((leading_break).pointer = (leading_break).start, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;
    }
    if (chomping == 1) {
        if (!((yaml_string_join(data_flow, &(string).start, &(string).pointer, &(string).end, &(trailing_breaks).start, &(trailing_breaks).pointer, &(trailing_breaks).end)) ? ((trailing_breaks).pointer = (trailing_breaks).start, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;
    }



    ((memset(&((*token)), 0, sizeof(yaml_token_t)), ((*token)).type = (YAML_SCALAR_TOKEN), ((*token)).start_mark = ((start_mark)), ((*token)).end_mark = ((end_mark))), (*token).data.scalar.value = (string.start), (*token).data.scalar.length = (string.pointer-string.start), (*token).data.scalar.style = (literal ? YAML_LITERAL_SCALAR_STYLE : YAML_FOLDED_SCALAR_STYLE))

                                 ;

    (yaml_free(data_flow, (leading_break).start), (leading_break).start = (leading_break).pointer = (leading_break).end = 0);
    (yaml_free(data_flow, (trailing_breaks).start), (trailing_breaks).start = (trailing_breaks).pointer = (trailing_breaks).end = 0);

    return 1;

error:
    (yaml_free(data_flow, (string).start), (string).start = (string).pointer = (string).end = 0);
    (yaml_free(data_flow, (leading_break).start), (leading_break).start = (leading_break).pointer = (leading_break).end = 0);
    (yaml_free(data_flow, (trailing_breaks).start), (trailing_breaks).start = (trailing_breaks).pointer = (trailing_breaks).end = 0);

    return 0;
}






static int
yaml_parser_scan_block_scalar_breaks(int *data_flow, yaml_parser_t *parser,
        int *indent, yaml_string_t *breaks,
        yaml_mark_t start_mark, yaml_mark_t *end_mark)
{
    int max_indent = 0;

    *end_mark = parser->mark;



    while (1)
    {


        if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(data_flow, parser, (1)))) return 0;

        while ((!*indent || (int)parser->mark.column < *indent)
                && ((((parser->buffer))).pointer[(0)] == (yaml_char_t)(' '))) {
            (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
            if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(data_flow, parser, (1)))) return 0;
        }

        if ((int)parser->mark.column > max_indent)
            max_indent = (int)parser->mark.column;



        if ((!*indent || (int)parser->mark.column < *indent)
                && ((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\t'))) {
            return yaml_parser_set_scanner_error(data_flow, parser, "while scanning a block scalar",
                    start_mark, "found a tab character where an indentation space is expected");
        }



        if (!(((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\r')) || ((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\n')) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xC2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x85'))) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((parser->buffer))).pointer[(0)+2] == (yaml_char_t)('\xA8'))) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((parser->buffer))).pointer[(0)+2] == (yaml_char_t)('\xA9'))))) break;



        if (!(parser->unread >= (2) ? 1 : yaml_parser_update_buffer(data_flow, parser, (2)))) return 0;
        if (!(((((*breaks).pointer+5 < (*breaks).end) || yaml_string_extend(data_flow, &(*breaks).start, &(*breaks).pointer, &(*breaks).end)) ? 1 : ((parser)->error = YAML_MEMORY_ERROR, 0)) ? (((((parser->buffer).pointer[0] == (yaml_char_t)('\r')) && ((parser->buffer).pointer[1] == (yaml_char_t)('\n'))) ? (*((*breaks).pointer++) = (yaml_char_t) '\n', parser->buffer.pointer += 2, parser->mark.index += 2, parser->mark.column = 0, parser->mark.line ++, parser->unread -= 2) : (((parser->buffer).pointer[0] == (yaml_char_t)('\r')) || ((parser->buffer).pointer[0] == (yaml_char_t)('\n'))) ? (*((*breaks).pointer++) = (yaml_char_t) '\n', parser->buffer.pointer ++, parser->mark.index ++, parser->mark.column = 0, parser->mark.line ++, parser->unread --) : (((parser->buffer).pointer[0] == (yaml_char_t)('\xC2')) && ((parser->buffer).pointer[1] == (yaml_char_t)('\x85'))) ? (*((*breaks).pointer++) = (yaml_char_t) '\n', parser->buffer.pointer += 2, parser->mark.index ++, parser->mark.column = 0, parser->mark.line ++, parser->unread --) : (((parser->buffer).pointer[0] == (yaml_char_t)('\xE2')) && ((parser->buffer).pointer[1] == (yaml_char_t)('\x80')) && (((parser->buffer).pointer[2] == (yaml_char_t)('\xA8')) || ((parser->buffer).pointer[2] == (yaml_char_t)('\xA9')))) ? (*((*breaks).pointer++) = *(parser->buffer.pointer++), *((*breaks).pointer++) = *(parser->buffer.pointer++), *((*breaks).pointer++) = *(parser->buffer.pointer++), parser->mark.index ++, parser->mark.column = 0, parser->mark.line ++, parser->unread --) : 0), 1) : 0)) return 0;
        *end_mark = parser->mark;
    }



    if (!*indent) {
        *indent = max_indent;
        if (*indent < parser->indent + 1)
            *indent = parser->indent + 1;
        if (*indent < 1)
            *indent = 1;
    }

   return 1;
}





static int
yaml_parser_scan_flow_scalar(int *data_flow, yaml_parser_t *parser, yaml_token_t *token,
        int single)
{
    yaml_mark_t start_mark={0};
    yaml_mark_t end_mark={0};
    yaml_string_t string = { 
                          ((void *)0)
                          , 
                          ((void *)0)
                          , 
                          ((void *)0) 
                          };
    yaml_string_t leading_break = { 
                                 ((void *)0)
                                 , 
                                 ((void *)0)
                                 , 
                                 ((void *)0) 
                                 };
    yaml_string_t trailing_breaks = { 
                                   ((void *)0)
                                   , 
                                   ((void *)0)
                                   , 
                                   ((void *)0) 
                                   };
    yaml_string_t whitespaces = { 
                               ((void *)0)
                               , 
                               ((void *)0)
                               , 
                               ((void *)0) 
                               };
    int leading_blanks={0};

    if (!(((string).start = (yaml_char_t *)yaml_malloc(data_flow, 16)) ? ((string).pointer = (string).start, (string).end = (string).start+(16), memset((string).start, 0, (16)), 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;
    if (!(((leading_break).start = (yaml_char_t *)yaml_malloc(data_flow, 16)) ? ((leading_break).pointer = (leading_break).start, (leading_break).end = (leading_break).start+(16), memset((leading_break).start, 0, (16)), 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;
    if (!(((trailing_breaks).start = (yaml_char_t *)yaml_malloc(data_flow, 16)) ? ((trailing_breaks).pointer = (trailing_breaks).start, (trailing_breaks).end = (trailing_breaks).start+(16), memset((trailing_breaks).start, 0, (16)), 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;
    if (!(((whitespaces).start = (yaml_char_t *)yaml_malloc(data_flow, 16)) ? ((whitespaces).pointer = (whitespaces).start, (whitespaces).end = (whitespaces).start+(16), memset((whitespaces).start, 0, (16)), 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;



    start_mark = parser->mark;

    (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));



    while (1)
    {


        if (!(parser->unread >= (4) ? 1 : yaml_parser_update_buffer(data_flow, parser, (4)))) goto error;

        if (parser->mark.column == 0 &&
            ((((parser->buffer).pointer[0] == (yaml_char_t)('-')) &&
              ((parser->buffer).pointer[1] == (yaml_char_t)('-')) &&
              ((parser->buffer).pointer[2] == (yaml_char_t)('-'))) ||
             (((parser->buffer).pointer[0] == (yaml_char_t)('.')) &&
              ((parser->buffer).pointer[1] == (yaml_char_t)('.')) &&
              ((parser->buffer).pointer[2] == (yaml_char_t)('.')))) &&
            (((((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)(' ')) || (((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)('\t'))) || (((((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)('\r')) || (((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)('\n')) || ((((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)('\xC2')) && (((((parser->buffer)))).pointer[(((3)))+1] == (yaml_char_t)('\x85'))) || ((((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[(((3)))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[(((3)))+2] == (yaml_char_t)('\xA8'))) || ((((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[(((3)))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[(((3)))+2] == (yaml_char_t)('\xA9')))) || (((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)('\0')))))
        {
            yaml_parser_set_scanner_error(data_flow, parser, "while scanning a quoted scalar",
                    start_mark, "found unexpected document indicator");
            goto error;
        }



        if (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\0'))) {
            yaml_parser_set_scanner_error(data_flow, parser, "while scanning a quoted scalar",
                    start_mark, "found unexpected end of stream");
            goto error;
        }



        if (!(parser->unread >= (2) ? 1 : yaml_parser_update_buffer(data_flow, parser, (2)))) goto error;

        leading_blanks = 0;

        while (!((((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)(' ')) || ((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\t'))) || ((((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\r')) || ((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\n')) || (((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\xC2')) && ((((((parser->buffer))))).pointer[(((0)))+1] == (yaml_char_t)('\x85'))) || (((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\xE2')) && ((((((parser->buffer))))).pointer[(((0)))+1] == (yaml_char_t)('\x80')) && ((((((parser->buffer))))).pointer[(((0)))+2] == (yaml_char_t)('\xA8'))) || (((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\xE2')) && ((((((parser->buffer))))).pointer[(((0)))+1] == (yaml_char_t)('\x80')) && ((((((parser->buffer))))).pointer[(((0)))+2] == (yaml_char_t)('\xA9')))) || ((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\0')))))
        {


            if (single && ((parser->buffer).pointer[0] == (yaml_char_t)('\''))
                    && ((parser->buffer).pointer[1] == (yaml_char_t)('\'')))
            {
                if (!((((string).pointer+5 < (string).end) || yaml_string_extend(data_flow, &(string).start, &(string).pointer, &(string).end)) ? 1 : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;
                *(string.pointer++) = '\'';
                (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
                (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
            }



            else if ((((parser->buffer)).pointer[0] == (yaml_char_t)((single ? '\'' : '"'))))
            {
                break;
            }



            else if (!single && (((parser->buffer)).pointer[0] == (yaml_char_t)(('\\')))
                    && ((((parser->buffer)).pointer[(1)] == (yaml_char_t)('\r')) || (((parser->buffer)).pointer[(1)] == (yaml_char_t)('\n')) || ((((parser->buffer)).pointer[(1)] == (yaml_char_t)('\xC2')) && (((parser->buffer)).pointer[(1)+1] == (yaml_char_t)('\x85'))) || ((((parser->buffer)).pointer[(1)] == (yaml_char_t)('\xE2')) && (((parser->buffer)).pointer[(1)+1] == (yaml_char_t)('\x80')) && (((parser->buffer)).pointer[(1)+2] == (yaml_char_t)('\xA8'))) || ((((parser->buffer)).pointer[(1)] == (yaml_char_t)('\xE2')) && (((parser->buffer)).pointer[(1)+1] == (yaml_char_t)('\x80')) && (((parser->buffer)).pointer[(1)+2] == (yaml_char_t)('\xA9')))))
            {
                if (!(parser->unread >= (3) ? 1 : yaml_parser_update_buffer(data_flow, parser, (3)))) goto error;
                (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
                ((((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\r')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\n'))) ? (parser->mark.index += 2, parser->mark.column = 0, parser->mark.line ++, parser->unread -= 2, parser->buffer.pointer += 2) : (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\r')) || ((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\n')) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xC2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x85'))) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((parser->buffer))).pointer[(0)+2] == (yaml_char_t)('\xA8'))) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((parser->buffer))).pointer[(0)+2] == (yaml_char_t)('\xA9')))) ? (parser->mark.index ++, parser->mark.column = 0, parser->mark.line ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0)) : 0);
                leading_blanks = 1;
                break;
            }



            else if (!single && (((parser->buffer)).pointer[0] == (yaml_char_t)(('\\'))))
            {
                size_t code_length = 0;

                if (!((((string).pointer+5 < (string).end) || yaml_string_extend(data_flow, &(string).start, &(string).pointer, &(string).end)) ? 1 : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;



                switch (parser->buffer.pointer[1])
                {
                    case '0':
                        *(string.pointer++) = '\0';
                        break;

                    case 'a':
                        *(string.pointer++) = '\x07';
                        break;

                    case 'b':
                        *(string.pointer++) = '\x08';
                        break;

                    case 't':
                    case '\t':
                        *(string.pointer++) = '\x09';
                        break;

                    case 'n':
                        *(string.pointer++) = '\x0A';
                        break;

                    case 'v':
                        *(string.pointer++) = '\x0B';
                        break;

                    case 'f':
                        *(string.pointer++) = '\x0C';
                        break;

                    case 'r':
                        *(string.pointer++) = '\x0D';
                        break;

                    case 'e':
                        *(string.pointer++) = '\x1B';
                        break;

                    case ' ':
                        *(string.pointer++) = '\x20';
                        break;

                    case '"':
                        *(string.pointer++) = '"';
                        break;

                    case '/':
                        *(string.pointer++) = '/';
                        break;

                    case '\\':
                        *(string.pointer++) = '\\';
                        break;

                    case 'N':
                        *(string.pointer++) = '\xC2';
                        *(string.pointer++) = '\x85';
                        break;

                    case '_':
                        *(string.pointer++) = '\xC2';
                        *(string.pointer++) = '\xA0';
                        break;

                    case 'L':
                        *(string.pointer++) = '\xE2';
                        *(string.pointer++) = '\x80';
                        *(string.pointer++) = '\xA8';
                        break;

                    case 'P':
                        *(string.pointer++) = '\xE2';
                        *(string.pointer++) = '\x80';
                        *(string.pointer++) = '\xA9';
                        break;

                    case 'x':
                        code_length = 2;
                        break;

                    case 'u':
                        code_length = 4;
                        break;

                    case 'U':
                        code_length = 8;
                        break;

                    default:
                        yaml_parser_set_scanner_error(data_flow, parser, "while parsing a quoted scalar",
                                start_mark, "found unknown escape character");
                        goto error;
                }

                (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
                (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));



                if (code_length)
                {
                    unsigned int value = 0;
                    size_t k={0};



                    if (!(parser->unread >= (code_length) ? 1 : yaml_parser_update_buffer(data_flow, parser, (code_length)))) goto error;

                    for (k = 0; k < code_length; k ++) {
                        if (!(((parser->buffer).pointer[k] >= (yaml_char_t) '0' && (parser->buffer).pointer[k] <= (yaml_char_t) '9') || ((parser->buffer).pointer[k] >= (yaml_char_t) 'A' && (parser->buffer).pointer[k] <= (yaml_char_t) 'F') || ((parser->buffer).pointer[k] >= (yaml_char_t) 'a' && (parser->buffer).pointer[k] <= (yaml_char_t) 'f'))) {
                            yaml_parser_set_scanner_error(data_flow, parser, "while parsing a quoted scalar",
                                    start_mark, "did not find expected hexdecimal number");
                            goto error;
                        }
                        value = (value << 4) + (((parser->buffer).pointer[k] >= (yaml_char_t) 'A' && (parser->buffer).pointer[k] <= (yaml_char_t) 'F') ? ((parser->buffer).pointer[k] - (yaml_char_t) 'A' + 10) : ((parser->buffer).pointer[k] >= (yaml_char_t) 'a' && (parser->buffer).pointer[k] <= (yaml_char_t) 'f') ? ((parser->buffer).pointer[k] - (yaml_char_t) 'a' + 10) : ((parser->buffer).pointer[k] - (yaml_char_t) '0'));
                    }



                    if ((value >= 0xD800 && value <= 0xDFFF) || value > 0x10FFFF) {
                        yaml_parser_set_scanner_error(data_flow, parser, "while parsing a quoted scalar",
                                start_mark, "found invalid Unicode character escape code");
                        goto error;
                    }

                    if (value <= 0x7F) {
                        *(string.pointer++) = value;
                    }
                    else if (value <= 0x7FF) {
                        *(string.pointer++) = 0xC0 + (value >> 6);
                        *(string.pointer++) = 0x80 + (value & 0x3F);
                    }
                    else if (value <= 0xFFFF) {
                        *(string.pointer++) = 0xE0 + (value >> 12);
                        *(string.pointer++) = 0x80 + ((value >> 6) & 0x3F);
                        *(string.pointer++) = 0x80 + (value & 0x3F);
                    }
                    else {
                        *(string.pointer++) = 0xF0 + (value >> 18);
                        *(string.pointer++) = 0x80 + ((value >> 12) & 0x3F);
                        *(string.pointer++) = 0x80 + ((value >> 6) & 0x3F);
                        *(string.pointer++) = 0x80 + (value & 0x3F);
                    }



                    for (k = 0; k < code_length; k ++) {
                        (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
                    }
                }
            }

            else
            {


                if (!(((((string).pointer+5 < (string).end) || yaml_string_extend(data_flow, &(string).start, &(string).pointer, &(string).end)) ? 1 : ((parser)->error = YAML_MEMORY_ERROR, 0)) ? (((*(parser->buffer).pointer & 0x80) == 0x00 ? (*((string).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xE0) == 0xC0 ? (*((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xF0) == 0xE0 ? (*((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xF8) == 0xF0 ? (*((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++)) : 0), parser->mark.index ++, parser->mark.column ++, parser->unread --, 1) : 0)) goto error;
            }

            if (!(parser->unread >= (2) ? 1 : yaml_parser_update_buffer(data_flow, parser, (2)))) goto error;
        }







        if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(data_flow, parser, (1)))) goto error;
        if ((((parser->buffer)).pointer[0] == (yaml_char_t)((single ? '\'' : '"'))))
            break;



        if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(data_flow, parser, (1)))) goto error;

        while (((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)(' ')) || (((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\t'))) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\r')) || ((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\n')) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xC2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x85'))) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((parser->buffer))).pointer[(0)+2] == (yaml_char_t)('\xA8'))) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((parser->buffer))).pointer[(0)+2] == (yaml_char_t)('\xA9')))))
        {
            if (((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)(' ')) || (((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\t'))))
            {


                if (!leading_blanks) {
                    if (!(((((whitespaces).pointer+5 < (whitespaces).end) || yaml_string_extend(data_flow, &(whitespaces).start, &(whitespaces).pointer, &(whitespaces).end)) ? 1 : ((parser)->error = YAML_MEMORY_ERROR, 0)) ? (((*(parser->buffer).pointer & 0x80) == 0x00 ? (*((whitespaces).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xE0) == 0xC0 ? (*((whitespaces).pointer++) = *((parser->buffer).pointer++), *((whitespaces).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xF0) == 0xE0 ? (*((whitespaces).pointer++) = *((parser->buffer).pointer++), *((whitespaces).pointer++) = *((parser->buffer).pointer++), *((whitespaces).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xF8) == 0xF0 ? (*((whitespaces).pointer++) = *((parser->buffer).pointer++), *((whitespaces).pointer++) = *((parser->buffer).pointer++), *((whitespaces).pointer++) = *((parser->buffer).pointer++), *((whitespaces).pointer++) = *((parser->buffer).pointer++)) : 0), parser->mark.index ++, parser->mark.column ++, parser->unread --, 1) : 0)) goto error;
                }
                else {
                    (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
                }
            }
            else
            {
                if (!(parser->unread >= (2) ? 1 : yaml_parser_update_buffer(data_flow, parser, (2)))) goto error;



                if (!leading_blanks)
                {
                    ((whitespaces).pointer = (whitespaces).start, memset((whitespaces).start, 0, (whitespaces).end-(whitespaces).start));
                    if (!(((((leading_break).pointer+5 < (leading_break).end) || yaml_string_extend(data_flow, &(leading_break).start, &(leading_break).pointer, &(leading_break).end)) ? 1 : ((parser)->error = YAML_MEMORY_ERROR, 0)) ? (((((parser->buffer).pointer[0] == (yaml_char_t)('\r')) && ((parser->buffer).pointer[1] == (yaml_char_t)('\n'))) ? (*((leading_break).pointer++) = (yaml_char_t) '\n', parser->buffer.pointer += 2, parser->mark.index += 2, parser->mark.column = 0, parser->mark.line ++, parser->unread -= 2) : (((parser->buffer).pointer[0] == (yaml_char_t)('\r')) || ((parser->buffer).pointer[0] == (yaml_char_t)('\n'))) ? (*((leading_break).pointer++) = (yaml_char_t) '\n', parser->buffer.pointer ++, parser->mark.index ++, parser->mark.column = 0, parser->mark.line ++, parser->unread --) : (((parser->buffer).pointer[0] == (yaml_char_t)('\xC2')) && ((parser->buffer).pointer[1] == (yaml_char_t)('\x85'))) ? (*((leading_break).pointer++) = (yaml_char_t) '\n', parser->buffer.pointer += 2, parser->mark.index ++, parser->mark.column = 0, parser->mark.line ++, parser->unread --) : (((parser->buffer).pointer[0] == (yaml_char_t)('\xE2')) && ((parser->buffer).pointer[1] == (yaml_char_t)('\x80')) && (((parser->buffer).pointer[2] == (yaml_char_t)('\xA8')) || ((parser->buffer).pointer[2] == (yaml_char_t)('\xA9')))) ? (*((leading_break).pointer++) = *(parser->buffer.pointer++), *((leading_break).pointer++) = *(parser->buffer.pointer++), *((leading_break).pointer++) = *(parser->buffer.pointer++), parser->mark.index ++, parser->mark.column = 0, parser->mark.line ++, parser->unread --) : 0), 1) : 0)) goto error;
                    leading_blanks = 1;
                }
                else
                {
                    if (!(((((trailing_breaks).pointer+5 < (trailing_breaks).end) || yaml_string_extend(data_flow, &(trailing_breaks).start, &(trailing_breaks).pointer, &(trailing_breaks).end)) ? 1 : ((parser)->error = YAML_MEMORY_ERROR, 0)) ? (((((parser->buffer).pointer[0] == (yaml_char_t)('\r')) && ((parser->buffer).pointer[1] == (yaml_char_t)('\n'))) ? (*((trailing_breaks).pointer++) = (yaml_char_t) '\n', parser->buffer.pointer += 2, parser->mark.index += 2, parser->mark.column = 0, parser->mark.line ++, parser->unread -= 2) : (((parser->buffer).pointer[0] == (yaml_char_t)('\r')) || ((parser->buffer).pointer[0] == (yaml_char_t)('\n'))) ? (*((trailing_breaks).pointer++) = (yaml_char_t) '\n', parser->buffer.pointer ++, parser->mark.index ++, parser->mark.column = 0, parser->mark.line ++, parser->unread --) : (((parser->buffer).pointer[0] == (yaml_char_t)('\xC2')) && ((parser->buffer).pointer[1] == (yaml_char_t)('\x85'))) ? (*((trailing_breaks).pointer++) = (yaml_char_t) '\n', parser->buffer.pointer += 2, parser->mark.index ++, parser->mark.column = 0, parser->mark.line ++, parser->unread --) : (((parser->buffer).pointer[0] == (yaml_char_t)('\xE2')) && ((parser->buffer).pointer[1] == (yaml_char_t)('\x80')) && (((parser->buffer).pointer[2] == (yaml_char_t)('\xA8')) || ((parser->buffer).pointer[2] == (yaml_char_t)('\xA9')))) ? (*((trailing_breaks).pointer++) = *(parser->buffer.pointer++), *((trailing_breaks).pointer++) = *(parser->buffer.pointer++), *((trailing_breaks).pointer++) = *(parser->buffer.pointer++), parser->mark.index ++, parser->mark.column = 0, parser->mark.line ++, parser->unread --) : 0), 1) : 0)) goto error;
                }
            }
            if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(data_flow, parser, (1)))) goto error;
        }



        if (leading_blanks)
        {


            if (leading_break.start[0] == '\n') {
                if (trailing_breaks.start[0] == '\0') {
                    if (!((((string).pointer+5 < (string).end) || yaml_string_extend(data_flow, &(string).start, &(string).pointer, &(string).end)) ? 1 : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;
                    *(string.pointer++) = ' ';
                }
                else {
                    if (!((yaml_string_join(data_flow, &(string).start, &(string).pointer, &(string).end, &(trailing_breaks).start, &(trailing_breaks).pointer, &(trailing_breaks).end)) ? ((trailing_breaks).pointer = (trailing_breaks).start, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;
                    ((trailing_breaks).pointer = (trailing_breaks).start, memset((trailing_breaks).start, 0, (trailing_breaks).end-(trailing_breaks).start));
                }
                ((leading_break).pointer = (leading_break).start, memset((leading_break).start, 0, (leading_break).end-(leading_break).start));
            }
            else {
                if (!((yaml_string_join(data_flow, &(string).start, &(string).pointer, &(string).end, &(leading_break).start, &(leading_break).pointer, &(leading_break).end)) ? ((leading_break).pointer = (leading_break).start, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;
                if (!((yaml_string_join(data_flow, &(string).start, &(string).pointer, &(string).end, &(trailing_breaks).start, &(trailing_breaks).pointer, &(trailing_breaks).end)) ? ((trailing_breaks).pointer = (trailing_breaks).start, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;
                ((leading_break).pointer = (leading_break).start, memset((leading_break).start, 0, (leading_break).end-(leading_break).start));
                ((trailing_breaks).pointer = (trailing_breaks).start, memset((trailing_breaks).start, 0, (trailing_breaks).end-(trailing_breaks).start));
            }
        }
        else
        {
            if (!((yaml_string_join(data_flow, &(string).start, &(string).pointer, &(string).end, &(whitespaces).start, &(whitespaces).pointer, &(whitespaces).end)) ? ((whitespaces).pointer = (whitespaces).start, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;
            ((whitespaces).pointer = (whitespaces).start, memset((whitespaces).start, 0, (whitespaces).end-(whitespaces).start));
        }
    }



    (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));

    end_mark = parser->mark;



    ((memset(&((*token)), 0, sizeof(yaml_token_t)), ((*token)).type = (YAML_SCALAR_TOKEN), ((*token)).start_mark = ((start_mark)), ((*token)).end_mark = ((end_mark))), (*token).data.scalar.value = (string.start), (*token).data.scalar.length = (string.pointer-string.start), (*token).data.scalar.style = (single ? YAML_SINGLE_QUOTED_SCALAR_STYLE : YAML_DOUBLE_QUOTED_SCALAR_STYLE))

                                 ;

    (yaml_free(data_flow, (leading_break).start), (leading_break).start = (leading_break).pointer = (leading_break).end = 0);
    (yaml_free(data_flow, (trailing_breaks).start), (trailing_breaks).start = (trailing_breaks).pointer = (trailing_breaks).end = 0);
    (yaml_free(data_flow, (whitespaces).start), (whitespaces).start = (whitespaces).pointer = (whitespaces).end = 0);

    return 1;

error:
    (yaml_free(data_flow, (string).start), (string).start = (string).pointer = (string).end = 0);
    (yaml_free(data_flow, (leading_break).start), (leading_break).start = (leading_break).pointer = (leading_break).end = 0);
    (yaml_free(data_flow, (trailing_breaks).start), (trailing_breaks).start = (trailing_breaks).pointer = (trailing_breaks).end = 0);
    (yaml_free(data_flow, (whitespaces).start), (whitespaces).start = (whitespaces).pointer = (whitespaces).end = 0);

    return 0;
}





static int
yaml_parser_scan_plain_scalar(int *data_flow, yaml_parser_t *parser, yaml_token_t *token)
{
    yaml_mark_t start_mark={0};
    yaml_mark_t end_mark={0};
    yaml_string_t string = { 
                          ((void *)0)
                          , 
                          ((void *)0)
                          , 
                          ((void *)0) 
                          };
    yaml_string_t leading_break = { 
                                 ((void *)0)
                                 , 
                                 ((void *)0)
                                 , 
                                 ((void *)0) 
                                 };
    yaml_string_t trailing_breaks = { 
                                   ((void *)0)
                                   , 
                                   ((void *)0)
                                   , 
                                   ((void *)0) 
                                   };
    yaml_string_t whitespaces = { 
                               ((void *)0)
                               , 
                               ((void *)0)
                               , 
                               ((void *)0) 
                               };
    int leading_blanks = 0;
    int indent = parser->indent+1;

    if (!(((string).start = (yaml_char_t *)yaml_malloc(data_flow, 16)) ? ((string).pointer = (string).start, (string).end = (string).start+(16), memset((string).start, 0, (16)), 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;
    if (!(((leading_break).start = (yaml_char_t *)yaml_malloc(data_flow, 16)) ? ((leading_break).pointer = (leading_break).start, (leading_break).end = (leading_break).start+(16), memset((leading_break).start, 0, (16)), 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;
    if (!(((trailing_breaks).start = (yaml_char_t *)yaml_malloc(data_flow, 16)) ? ((trailing_breaks).pointer = (trailing_breaks).start, (trailing_breaks).end = (trailing_breaks).start+(16), memset((trailing_breaks).start, 0, (16)), 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;
    if (!(((whitespaces).start = (yaml_char_t *)yaml_malloc(data_flow, 16)) ? ((whitespaces).pointer = (whitespaces).start, (whitespaces).end = (whitespaces).start+(16), memset((whitespaces).start, 0, (16)), 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;

    start_mark = end_mark = parser->mark;



    while (1)
    {


        if (!(parser->unread >= (4) ? 1 : yaml_parser_update_buffer(data_flow, parser, (4)))) goto error;

        if (parser->mark.column == 0 &&
            ((((parser->buffer).pointer[0] == (yaml_char_t)('-')) &&
              ((parser->buffer).pointer[1] == (yaml_char_t)('-')) &&
              ((parser->buffer).pointer[2] == (yaml_char_t)('-'))) ||
             (((parser->buffer).pointer[0] == (yaml_char_t)('.')) &&
              ((parser->buffer).pointer[1] == (yaml_char_t)('.')) &&
              ((parser->buffer).pointer[2] == (yaml_char_t)('.')))) &&
            (((((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)(' ')) || (((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)('\t'))) || (((((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)('\r')) || (((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)('\n')) || ((((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)('\xC2')) && (((((parser->buffer)))).pointer[(((3)))+1] == (yaml_char_t)('\x85'))) || ((((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[(((3)))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[(((3)))+2] == (yaml_char_t)('\xA8'))) || ((((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[(((3)))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[(((3)))+2] == (yaml_char_t)('\xA9')))) || (((((parser->buffer)))).pointer[(((3)))] == (yaml_char_t)('\0'))))) break;



        if ((((parser->buffer)).pointer[0] == (yaml_char_t)(('#'))))
            break;



        while (!((((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)(' ')) || ((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\t'))) || ((((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\r')) || ((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\n')) || (((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\xC2')) && ((((((parser->buffer))))).pointer[(((0)))+1] == (yaml_char_t)('\x85'))) || (((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\xE2')) && ((((((parser->buffer))))).pointer[(((0)))+1] == (yaml_char_t)('\x80')) && ((((((parser->buffer))))).pointer[(((0)))+2] == (yaml_char_t)('\xA8'))) || (((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\xE2')) && ((((((parser->buffer))))).pointer[(((0)))+1] == (yaml_char_t)('\x80')) && ((((((parser->buffer))))).pointer[(((0)))+2] == (yaml_char_t)('\xA9')))) || ((((((parser->buffer))))).pointer[(((0)))] == (yaml_char_t)('\0')))))
        {


            if (parser->flow_level
                    && (((parser->buffer)).pointer[0] == (yaml_char_t)((':')))
                    && !(((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)(' ')) || (((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\t'))) || (((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\r')) || (((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\n')) || ((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\xC2')) && (((((parser->buffer)))).pointer[(((1)))+1] == (yaml_char_t)('\x85'))) || ((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[(((1)))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[(((1)))+2] == (yaml_char_t)('\xA8'))) || ((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[(((1)))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[(((1)))+2] == (yaml_char_t)('\xA9')))) || (((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\0'))))) {
                yaml_parser_set_scanner_error(data_flow, parser, "while scanning a plain scalar",
                        start_mark, "found unexpected ':'");
                goto error;
            }



            if (((((parser->buffer)).pointer[0] == (yaml_char_t)((':'))) && (((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)(' ')) || (((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\t'))) || (((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\r')) || (((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\n')) || ((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\xC2')) && (((((parser->buffer)))).pointer[(((1)))+1] == (yaml_char_t)('\x85'))) || ((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[(((1)))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[(((1)))+2] == (yaml_char_t)('\xA8'))) || ((((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\xE2')) && (((((parser->buffer)))).pointer[(((1)))+1] == (yaml_char_t)('\x80')) && (((((parser->buffer)))).pointer[(((1)))+2] == (yaml_char_t)('\xA9')))) || (((((parser->buffer)))).pointer[(((1)))] == (yaml_char_t)('\0')))))
                    || (parser->flow_level &&
                        ((((parser->buffer)).pointer[0] == (yaml_char_t)((','))) || (((parser->buffer)).pointer[0] == (yaml_char_t)((':')))
                         || (((parser->buffer)).pointer[0] == (yaml_char_t)(('?'))) || (((parser->buffer)).pointer[0] == (yaml_char_t)(('[')))
                         || (((parser->buffer)).pointer[0] == (yaml_char_t)((']'))) || (((parser->buffer)).pointer[0] == (yaml_char_t)(('{')))
                         || (((parser->buffer)).pointer[0] == (yaml_char_t)(('}'))))))
                break;



            if (leading_blanks || whitespaces.start != whitespaces.pointer)
            {
                if (leading_blanks)
                {


                    if (leading_break.start[0] == '\n') {
                        if (trailing_breaks.start[0] == '\0') {
                            if (!((((string).pointer+5 < (string).end) || yaml_string_extend(data_flow, &(string).start, &(string).pointer, &(string).end)) ? 1 : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;
                            *(string.pointer++) = ' ';
                        }
                        else {
                            if (!((yaml_string_join(data_flow, &(string).start, &(string).pointer, &(string).end, &(trailing_breaks).start, &(trailing_breaks).pointer, &(trailing_breaks).end)) ? ((trailing_breaks).pointer = (trailing_breaks).start, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;
                            ((trailing_breaks).pointer = (trailing_breaks).start, memset((trailing_breaks).start, 0, (trailing_breaks).end-(trailing_breaks).start));
                        }
                        ((leading_break).pointer = (leading_break).start, memset((leading_break).start, 0, (leading_break).end-(leading_break).start));
                    }
                    else {
                        if (!((yaml_string_join(data_flow, &(string).start, &(string).pointer, &(string).end, &(leading_break).start, &(leading_break).pointer, &(leading_break).end)) ? ((leading_break).pointer = (leading_break).start, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;
                        if (!((yaml_string_join(data_flow, &(string).start, &(string).pointer, &(string).end, &(trailing_breaks).start, &(trailing_breaks).pointer, &(trailing_breaks).end)) ? ((trailing_breaks).pointer = (trailing_breaks).start, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;
                        ((leading_break).pointer = (leading_break).start, memset((leading_break).start, 0, (leading_break).end-(leading_break).start));
                        ((trailing_breaks).pointer = (trailing_breaks).start, memset((trailing_breaks).start, 0, (trailing_breaks).end-(trailing_breaks).start));
                    }

                    leading_blanks = 0;
                }
                else
                {
                    if (!((yaml_string_join(data_flow, &(string).start, &(string).pointer, &(string).end, &(whitespaces).start, &(whitespaces).pointer, &(whitespaces).end)) ? ((whitespaces).pointer = (whitespaces).start, 1) : ((parser)->error = YAML_MEMORY_ERROR, 0))) goto error;
                    ((whitespaces).pointer = (whitespaces).start, memset((whitespaces).start, 0, (whitespaces).end-(whitespaces).start));
                }
            }



            if (!(((((string).pointer+5 < (string).end) || yaml_string_extend(data_flow, &(string).start, &(string).pointer, &(string).end)) ? 1 : ((parser)->error = YAML_MEMORY_ERROR, 0)) ? (((*(parser->buffer).pointer & 0x80) == 0x00 ? (*((string).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xE0) == 0xC0 ? (*((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xF0) == 0xE0 ? (*((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xF8) == 0xF0 ? (*((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++), *((string).pointer++) = *((parser->buffer).pointer++)) : 0), parser->mark.index ++, parser->mark.column ++, parser->unread --, 1) : 0)) goto error;

            end_mark = parser->mark;

            if (!(parser->unread >= (2) ? 1 : yaml_parser_update_buffer(data_flow, parser, (2)))) goto error;
        }



        if (!(((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)(' ')) || (((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\t'))) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\r')) || ((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\n')) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xC2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x85'))) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((parser->buffer))).pointer[(0)+2] == (yaml_char_t)('\xA8'))) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((parser->buffer))).pointer[(0)+2] == (yaml_char_t)('\xA9'))))))
            break;



        if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(data_flow, parser, (1)))) goto error;

        while (((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)(' ')) || (((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\t'))) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\r')) || ((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\n')) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xC2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x85'))) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((parser->buffer))).pointer[(0)+2] == (yaml_char_t)('\xA8'))) || (((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\xE2')) && ((((parser->buffer))).pointer[(0)+1] == (yaml_char_t)('\x80')) && ((((parser->buffer))).pointer[(0)+2] == (yaml_char_t)('\xA9')))))
        {
            if (((((((parser->buffer)))).pointer[((0))] == (yaml_char_t)(' ')) || (((((parser->buffer)))).pointer[((0))] == (yaml_char_t)('\t'))))
            {


                if (leading_blanks && (int)parser->mark.column < indent
                        && ((((parser->buffer))).pointer[(0)] == (yaml_char_t)('\t'))) {
                    yaml_parser_set_scanner_error(data_flow, parser, "while scanning a plain scalar",
                            start_mark, "found a tab character that violate indentation");
                    goto error;
                }



                if (!leading_blanks) {
                    if (!(((((whitespaces).pointer+5 < (whitespaces).end) || yaml_string_extend(data_flow, &(whitespaces).start, &(whitespaces).pointer, &(whitespaces).end)) ? 1 : ((parser)->error = YAML_MEMORY_ERROR, 0)) ? (((*(parser->buffer).pointer & 0x80) == 0x00 ? (*((whitespaces).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xE0) == 0xC0 ? (*((whitespaces).pointer++) = *((parser->buffer).pointer++), *((whitespaces).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xF0) == 0xE0 ? (*((whitespaces).pointer++) = *((parser->buffer).pointer++), *((whitespaces).pointer++) = *((parser->buffer).pointer++), *((whitespaces).pointer++) = *((parser->buffer).pointer++)) : (*(parser->buffer).pointer & 0xF8) == 0xF0 ? (*((whitespaces).pointer++) = *((parser->buffer).pointer++), *((whitespaces).pointer++) = *((parser->buffer).pointer++), *((whitespaces).pointer++) = *((parser->buffer).pointer++), *((whitespaces).pointer++) = *((parser->buffer).pointer++)) : 0), parser->mark.index ++, parser->mark.column ++, parser->unread --, 1) : 0)) goto error;
                }
                else {
                    (parser->mark.index ++, parser->mark.column ++, parser->unread --, parser->buffer.pointer += ((((parser->buffer)).pointer[0] & 0x80) == 0x00 ? 1 : (((parser->buffer)).pointer[0] & 0xE0) == 0xC0 ? 2 : (((parser->buffer)).pointer[0] & 0xF0) == 0xE0 ? 3 : (((parser->buffer)).pointer[0] & 0xF8) == 0xF0 ? 4 : 0));
                }
            }
            else
            {
                if (!(parser->unread >= (2) ? 1 : yaml_parser_update_buffer(data_flow, parser, (2)))) goto error;



                if (!leading_blanks)
                {
                    ((whitespaces).pointer = (whitespaces).start, memset((whitespaces).start, 0, (whitespaces).end-(whitespaces).start));
                    if (!(((((leading_break).pointer+5 < (leading_break).end) || yaml_string_extend(data_flow, &(leading_break).start, &(leading_break).pointer, &(leading_break).end)) ? 1 : ((parser)->error = YAML_MEMORY_ERROR, 0)) ? (((((parser->buffer).pointer[0] == (yaml_char_t)('\r')) && ((parser->buffer).pointer[1] == (yaml_char_t)('\n'))) ? (*((leading_break).pointer++) = (yaml_char_t) '\n', parser->buffer.pointer += 2, parser->mark.index += 2, parser->mark.column = 0, parser->mark.line ++, parser->unread -= 2) : (((parser->buffer).pointer[0] == (yaml_char_t)('\r')) || ((parser->buffer).pointer[0] == (yaml_char_t)('\n'))) ? (*((leading_break).pointer++) = (yaml_char_t) '\n', parser->buffer.pointer ++, parser->mark.index ++, parser->mark.column = 0, parser->mark.line ++, parser->unread --) : (((parser->buffer).pointer[0] == (yaml_char_t)('\xC2')) && ((parser->buffer).pointer[1] == (yaml_char_t)('\x85'))) ? (*((leading_break).pointer++) = (yaml_char_t) '\n', parser->buffer.pointer += 2, parser->mark.index ++, parser->mark.column = 0, parser->mark.line ++, parser->unread --) : (((parser->buffer).pointer[0] == (yaml_char_t)('\xE2')) && ((parser->buffer).pointer[1] == (yaml_char_t)('\x80')) && (((parser->buffer).pointer[2] == (yaml_char_t)('\xA8')) || ((parser->buffer).pointer[2] == (yaml_char_t)('\xA9')))) ? (*((leading_break).pointer++) = *(parser->buffer.pointer++), *((leading_break).pointer++) = *(parser->buffer.pointer++), *((leading_break).pointer++) = *(parser->buffer.pointer++), parser->mark.index ++, parser->mark.column = 0, parser->mark.line ++, parser->unread --) : 0), 1) : 0)) goto error;
                    leading_blanks = 1;
                }
                else
                {
                    if (!(((((trailing_breaks).pointer+5 < (trailing_breaks).end) || yaml_string_extend(data_flow, &(trailing_breaks).start, &(trailing_breaks).pointer, &(trailing_breaks).end)) ? 1 : ((parser)->error = YAML_MEMORY_ERROR, 0)) ? (((((parser->buffer).pointer[0] == (yaml_char_t)('\r')) && ((parser->buffer).pointer[1] == (yaml_char_t)('\n'))) ? (*((trailing_breaks).pointer++) = (yaml_char_t) '\n', parser->buffer.pointer += 2, parser->mark.index += 2, parser->mark.column = 0, parser->mark.line ++, parser->unread -= 2) : (((parser->buffer).pointer[0] == (yaml_char_t)('\r')) || ((parser->buffer).pointer[0] == (yaml_char_t)('\n'))) ? (*((trailing_breaks).pointer++) = (yaml_char_t) '\n', parser->buffer.pointer ++, parser->mark.index ++, parser->mark.column = 0, parser->mark.line ++, parser->unread --) : (((parser->buffer).pointer[0] == (yaml_char_t)('\xC2')) && ((parser->buffer).pointer[1] == (yaml_char_t)('\x85'))) ? (*((trailing_breaks).pointer++) = (yaml_char_t) '\n', parser->buffer.pointer += 2, parser->mark.index ++, parser->mark.column = 0, parser->mark.line ++, parser->unread --) : (((parser->buffer).pointer[0] == (yaml_char_t)('\xE2')) && ((parser->buffer).pointer[1] == (yaml_char_t)('\x80')) && (((parser->buffer).pointer[2] == (yaml_char_t)('\xA8')) || ((parser->buffer).pointer[2] == (yaml_char_t)('\xA9')))) ? (*((trailing_breaks).pointer++) = *(parser->buffer.pointer++), *((trailing_breaks).pointer++) = *(parser->buffer.pointer++), *((trailing_breaks).pointer++) = *(parser->buffer.pointer++), parser->mark.index ++, parser->mark.column = 0, parser->mark.line ++, parser->unread --) : 0), 1) : 0)) goto error;
                }
            }
            if (!(parser->unread >= (1) ? 1 : yaml_parser_update_buffer(data_flow, parser, (1)))) goto error;
        }



        if (!parser->flow_level && (int)parser->mark.column < indent)
            break;
    }



    ((memset(&((*token)), 0, sizeof(yaml_token_t)), ((*token)).type = (YAML_SCALAR_TOKEN), ((*token)).start_mark = ((start_mark)), ((*token)).end_mark = ((end_mark))), (*token).data.scalar.value = (string.start), (*token).data.scalar.length = (string.pointer-string.start), (*token).data.scalar.style = (YAML_PLAIN_SCALAR_STYLE))
                                                          ;



    if (leading_blanks) {
        parser->simple_key_allowed = 1;
    }

    (yaml_free(data_flow, (leading_break).start), (leading_break).start = (leading_break).pointer = (leading_break).end = 0);
    (yaml_free(data_flow, (trailing_breaks).start), (trailing_breaks).start = (trailing_breaks).pointer = (trailing_breaks).end = 0);
    (yaml_free(data_flow, (whitespaces).start), (whitespaces).start = (whitespaces).pointer = (whitespaces).end = 0);

    return 1;

error:
    (yaml_free(data_flow, (string).start), (string).start = (string).pointer = (string).end = 0);
    (yaml_free(data_flow, (leading_break).start), (leading_break).start = (leading_break).pointer = (leading_break).end = 0);
    (yaml_free(data_flow, (trailing_breaks).start), (trailing_breaks).start = (trailing_breaks).pointer = (trailing_breaks).end = 0);
    (yaml_free(data_flow, (whitespaces).start), (whitespaces).start = (whitespaces).pointer = (whitespaces).end = 0);

    return 0;
}
