static unsigned int lava_val[35] = {0};
void lava_set(unsigned int, unsigned int);
__attribute__((visibility("default")))
void lava_set(unsigned int slot, unsigned int val) {
lava_val[slot] = val; }
unsigned int lava_get(unsigned int);
__attribute__((visibility("default")))
unsigned int lava_get(unsigned int slot) { return lava_val[slot]; }












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
typedef __builtin_va_list va_list;
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
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__ ));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__ ));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__ ));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__ ));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__ ));
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__ ));




typedef __gnuc_va_list va_list;
typedef __off_t off_t;
typedef __ssize_t ssize_t;







typedef _G_fpos_t fpos_t;



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (const char *__filename) __attribute__ ((__nothrow__ ));

extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ ));




extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ ));
extern FILE *tmpfile (void) ;
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ )) ;





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ )) ;
extern char *tempnam (const char *__dir, const char *__pfx)
     __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) ;
extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);
extern int fflush_unlocked (FILE *__stream);
extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ )) ;
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ )) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ )) ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ ));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ ));





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ ));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ ));
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
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ ));
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf") ;


extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf") ;

extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ ));
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ )) __attribute__ ((__format__ (__scanf__, 2, 0)));
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ ))



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
extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ ));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ )) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ )) ;




extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ ));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ )) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ )) ;
extern void perror (const char *__s);







extern int sys_nerr;
extern const char *const sys_errlist[];




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ )) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ )) ;
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__ ));
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ ));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ )) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ ));
typedef int ptrdiff_t;
typedef int wchar_t;
typedef struct {
  long long __clang_max_align_nonce1
      __attribute__((__aligned__(__alignof__(long long))));
  long double __clang_max_align_nonce2
      __attribute__((__aligned__(__alignof__(long double))));
} max_align_t;











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
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__));





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
extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;


extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;





struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  const char *tm_zone;




};
struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };


struct sigevent;
extern clock_t clock (void) __attribute__ ((__nothrow__ ));


extern time_t time (time_t *__timer) __attribute__ ((__nothrow__ ));


extern double difftime (time_t __time1, time_t __time0)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern time_t mktime (struct tm *__tp) __attribute__ ((__nothrow__ ));





extern size_t strftime (char *__restrict __s, size_t __maxsize,
   const char *__restrict __format,
   const struct tm *__restrict __tp) __attribute__ ((__nothrow__ ));
typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;

extern size_t strftime_l (char *__restrict __s, size_t __maxsize,
     const char *__restrict __format,
     const struct tm *__restrict __tp,
     __locale_t __loc) __attribute__ ((__nothrow__ ));
extern struct tm *gmtime (const time_t *__timer) __attribute__ ((__nothrow__ ));



extern struct tm *localtime (const time_t *__timer) __attribute__ ((__nothrow__ ));





extern struct tm *gmtime_r (const time_t *__restrict __timer,
       struct tm *__restrict __tp) __attribute__ ((__nothrow__ ));



extern struct tm *localtime_r (const time_t *__restrict __timer,
          struct tm *__restrict __tp) __attribute__ ((__nothrow__ ));





extern char *asctime (const struct tm *__tp) __attribute__ ((__nothrow__ ));


extern char *ctime (const time_t *__timer) __attribute__ ((__nothrow__ ));







extern char *asctime_r (const struct tm *__restrict __tp,
   char *__restrict __buf) __attribute__ ((__nothrow__ ));


extern char *ctime_r (const time_t *__restrict __timer,
        char *__restrict __buf) __attribute__ ((__nothrow__ ));




extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;




extern char *tzname[2];



extern void tzset (void) __attribute__ ((__nothrow__ ));



extern int daylight;
extern long int timezone;





extern int stime (const time_t *__when) __attribute__ ((__nothrow__ ));
extern time_t timegm (struct tm *__tp) __attribute__ ((__nothrow__ ));


extern time_t timelocal (struct tm *__tp) __attribute__ ((__nothrow__ ));


extern int dysize (int __year) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern int nanosleep (const struct timespec *__requested_time,
        struct timespec *__remaining);



extern int clock_getres (clockid_t __clock_id, struct timespec *__res) __attribute__ ((__nothrow__ ));


extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp) __attribute__ ((__nothrow__ ));


extern int clock_settime (clockid_t __clock_id, const struct timespec *__tp)
     __attribute__ ((__nothrow__ ));






extern int clock_nanosleep (clockid_t __clock_id, int __flags,
       const struct timespec *__req,
       struct timespec *__rem);


extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) __attribute__ ((__nothrow__ ));




extern int timer_create (clockid_t __clock_id,
    struct sigevent *__restrict __evp,
    timer_t *__restrict __timerid) __attribute__ ((__nothrow__ ));


extern int timer_delete (timer_t __timerid) __attribute__ ((__nothrow__ ));


extern int timer_settime (timer_t __timerid, int __flags,
     const struct itimerspec *__restrict __value,
     struct itimerspec *__restrict __ovalue) __attribute__ ((__nothrow__ ));


extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     __attribute__ ((__nothrow__ ));


extern int timer_getoverrun (timer_t __timerid) __attribute__ ((__nothrow__ ));





extern int timespec_get (struct timespec *__ts, int __base)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));


struct __time_t_must_be_integral {
  unsigned int __floating_time_t_unsupported : (time_t) 1;
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
extern int stat (const char *__restrict __file,
   struct stat *__restrict __buf) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));



extern int fstat (int __fd, struct stat *__buf) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
extern int fstatat (int __fd, const char *__restrict __file,
      struct stat *__restrict __buf, int __flag)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));
extern int lstat (const char *__restrict __file,
    struct stat *__restrict __buf) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern int chmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));





extern int lchmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));




extern int fchmod (int __fd, __mode_t __mode) __attribute__ ((__nothrow__ ));





extern int fchmodat (int __fd, const char *__file, __mode_t __mode,
       int __flag)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2))) ;






extern __mode_t umask (__mode_t __mask) __attribute__ ((__nothrow__ ));
extern int mkdir (const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));





extern int mkdirat (int __fd, const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));






extern int mknod (const char *__path, __mode_t __mode, __dev_t __dev)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));





extern int mknodat (int __fd, const char *__path, __mode_t __mode,
      __dev_t __dev) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));





extern int mkfifo (const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));





extern int mkfifoat (int __fd, const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));





extern int utimensat (int __fd, const char *__path,
        const struct timespec __times[2],
        int __flags)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));




extern int futimens (int __fd, const struct timespec __times[2]) __attribute__ ((__nothrow__ ));
extern int __fxstat (int __ver, int __fildes, struct stat *__stat_buf)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3)));
extern int __xstat (int __ver, const char *__filename,
      struct stat *__stat_buf) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));
extern int __lxstat (int __ver, const char *__filename,
       struct stat *__stat_buf) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));
extern int __fxstatat (int __ver, int __fildes, const char *__filename,
         struct stat *__stat_buf, int __flag)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4)));
extern int __xmknod (int __ver, const char *__path, __mode_t __mode,
       __dev_t *__dev) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 4)));

extern int __xmknodat (int __ver, int __fd, const char *__path,
         __mode_t __mode, __dev_t *__dev)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 5)));
extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;


extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;


extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;


extern int _gl_cxxalias_dummy;




typedef unsigned int wint_t;
typedef __mbstate_t mbstate_t;
struct tm;
extern wchar_t *wcscpy (wchar_t *__restrict __dest,
   const wchar_t *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));


extern wchar_t *wcsncpy (wchar_t *__restrict __dest,
    const wchar_t *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));


extern wchar_t *wcscat (wchar_t *__restrict __dest,
   const wchar_t *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));

extern wchar_t *wcsncat (wchar_t *__restrict __dest,
    const wchar_t *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));


extern int wcscmp (const wchar_t *__s1, const wchar_t *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int wcsncmp (const wchar_t *__s1, const wchar_t *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern int wcscasecmp (const wchar_t *__s1, const wchar_t *__s2) __attribute__ ((__nothrow__ ));


extern int wcsncasecmp (const wchar_t *__s1, const wchar_t *__s2,
   size_t __n) __attribute__ ((__nothrow__ ));





extern int wcscasecmp_l (const wchar_t *__s1, const wchar_t *__s2,
    __locale_t __loc) __attribute__ ((__nothrow__ ));

extern int wcsncasecmp_l (const wchar_t *__s1, const wchar_t *__s2,
     size_t __n, __locale_t __loc) __attribute__ ((__nothrow__ ));





extern int wcscoll (const wchar_t *__s1, const wchar_t *__s2) __attribute__ ((__nothrow__ ));



extern size_t wcsxfrm (wchar_t *__restrict __s1,
         const wchar_t *__restrict __s2, size_t __n) __attribute__ ((__nothrow__ ));
extern int wcscoll_l (const wchar_t *__s1, const wchar_t *__s2,
        __locale_t __loc) __attribute__ ((__nothrow__ ));




extern size_t wcsxfrm_l (wchar_t *__s1, const wchar_t *__s2,
    size_t __n, __locale_t __loc) __attribute__ ((__nothrow__ ));


extern wchar_t *wcsdup (const wchar_t *__s) __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__));
extern wchar_t *wcschr (const wchar_t *__wcs, wchar_t __wc)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__));
extern wchar_t *wcsrchr (const wchar_t *__wcs, wchar_t __wc)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__));
extern size_t wcscspn (const wchar_t *__wcs, const wchar_t *__reject)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__));


extern size_t wcsspn (const wchar_t *__wcs, const wchar_t *__accept)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__));
extern wchar_t *wcspbrk (const wchar_t *__wcs, const wchar_t *__accept)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__));
extern wchar_t *wcsstr (const wchar_t *__haystack, const wchar_t *__needle)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__));



extern wchar_t *wcstok (wchar_t *__restrict __s,
   const wchar_t *__restrict __delim,
   wchar_t **__restrict __ptr) __attribute__ ((__nothrow__ ));


extern size_t wcslen (const wchar_t *__s) __attribute__ ((__nothrow__ )) __attribute__ ((__pure__));
extern size_t wcsnlen (const wchar_t *__s, size_t __maxlen)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__));
extern wchar_t *wmemchr (const wchar_t *__s, wchar_t __c, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__));



extern int wmemcmp (const wchar_t *__s1, const wchar_t *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__));


extern wchar_t *wmemcpy (wchar_t *__restrict __s1,
    const wchar_t *__restrict __s2, size_t __n) __attribute__ ((__nothrow__ ));



extern wchar_t *wmemmove (wchar_t *__s1, const wchar_t *__s2, size_t __n)
     __attribute__ ((__nothrow__ ));


extern wchar_t *wmemset (wchar_t *__s, wchar_t __c, size_t __n) __attribute__ ((__nothrow__ ));
extern wint_t btowc (int __c) __attribute__ ((__nothrow__ ));



extern int wctob (wint_t __c) __attribute__ ((__nothrow__ ));



extern int mbsinit (const mbstate_t *__ps) __attribute__ ((__nothrow__ )) __attribute__ ((__pure__));



extern size_t mbrtowc (wchar_t *__restrict __pwc,
         const char *__restrict __s, size_t __n,
         mbstate_t *__restrict __p) __attribute__ ((__nothrow__ ));


extern size_t wcrtomb (char *__restrict __s, wchar_t __wc,
         mbstate_t *__restrict __ps) __attribute__ ((__nothrow__ ));


extern size_t __mbrlen (const char *__restrict __s, size_t __n,
   mbstate_t *__restrict __ps) __attribute__ ((__nothrow__ ));
extern size_t mbrlen (const char *__restrict __s, size_t __n,
        mbstate_t *__restrict __ps) __attribute__ ((__nothrow__ ));
extern size_t mbsrtowcs (wchar_t *__restrict __dst,
    const char **__restrict __src, size_t __len,
    mbstate_t *__restrict __ps) __attribute__ ((__nothrow__ ));



extern size_t wcsrtombs (char *__restrict __dst,
    const wchar_t **__restrict __src, size_t __len,
    mbstate_t *__restrict __ps) __attribute__ ((__nothrow__ ));






extern size_t mbsnrtowcs (wchar_t *__restrict __dst,
     const char **__restrict __src, size_t __nmc,
     size_t __len, mbstate_t *__restrict __ps) __attribute__ ((__nothrow__ ));



extern size_t wcsnrtombs (char *__restrict __dst,
     const wchar_t **__restrict __src,
     size_t __nwc, size_t __len,
     mbstate_t *__restrict __ps) __attribute__ ((__nothrow__ ));
extern double wcstod (const wchar_t *__restrict __nptr,
        wchar_t **__restrict __endptr) __attribute__ ((__nothrow__ ));





extern float wcstof (const wchar_t *__restrict __nptr,
       wchar_t **__restrict __endptr) __attribute__ ((__nothrow__ ));
extern long double wcstold (const wchar_t *__restrict __nptr,
       wchar_t **__restrict __endptr) __attribute__ ((__nothrow__ ));







extern long int wcstol (const wchar_t *__restrict __nptr,
   wchar_t **__restrict __endptr, int __base) __attribute__ ((__nothrow__ ));



extern unsigned long int wcstoul (const wchar_t *__restrict __nptr,
      wchar_t **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ ));






__extension__
extern long long int wcstoll (const wchar_t *__restrict __nptr,
         wchar_t **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ ));



__extension__
extern unsigned long long int wcstoull (const wchar_t *__restrict __nptr,
     wchar_t **__restrict __endptr,
     int __base) __attribute__ ((__nothrow__ ));
extern wchar_t *wcpcpy (wchar_t *__restrict __dest,
   const wchar_t *__restrict __src) __attribute__ ((__nothrow__ ));



extern wchar_t *wcpncpy (wchar_t *__restrict __dest,
    const wchar_t *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ ));






extern __FILE *open_wmemstream (wchar_t **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ ));






extern int fwide (__FILE *__fp, int __mode) __attribute__ ((__nothrow__ ));






extern int fwprintf (__FILE *__restrict __stream,
       const wchar_t *__restrict __format, ...)
                                                           ;




extern int wprintf (const wchar_t *__restrict __format, ...)
                                                           ;

extern int swprintf (wchar_t *__restrict __s, size_t __n,
       const wchar_t *__restrict __format, ...)
     __attribute__ ((__nothrow__ )) ;





extern int vfwprintf (__FILE *__restrict __s,
        const wchar_t *__restrict __format,
        __gnuc_va_list __arg)
                                                           ;




extern int vwprintf (const wchar_t *__restrict __format,
       __gnuc_va_list __arg)
                                                           ;


extern int vswprintf (wchar_t *__restrict __s, size_t __n,
        const wchar_t *__restrict __format,
        __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ )) ;






extern int fwscanf (__FILE *__restrict __stream,
      const wchar_t *__restrict __format, ...)
                                                          ;




extern int wscanf (const wchar_t *__restrict __format, ...)
                                                          ;

extern int swscanf (const wchar_t *__restrict __s,
      const wchar_t *__restrict __format, ...)
     __attribute__ ((__nothrow__ )) ;
extern int fwscanf (__FILE *__restrict __stream, const wchar_t *__restrict __format, ...) __asm__ ("" "__isoc99_fwscanf")


                                                          ;
extern int wscanf (const wchar_t *__restrict __format, ...) __asm__ ("" "__isoc99_wscanf")

                                                          ;
extern int swscanf (const wchar_t *__restrict __s, const wchar_t *__restrict __format, ...) __asm__ ("" "__isoc99_swscanf") __attribute__ ((__nothrow__ ))


                                                          ;
extern int vfwscanf (__FILE *__restrict __s,
       const wchar_t *__restrict __format,
       __gnuc_va_list __arg)
                                                          ;




extern int vwscanf (const wchar_t *__restrict __format,
      __gnuc_va_list __arg)
                                                          ;

extern int vswscanf (const wchar_t *__restrict __s,
       const wchar_t *__restrict __format,
       __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ )) ;





extern int vfwscanf (__FILE *__restrict __s, const wchar_t *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfwscanf")


                                                          ;
extern int vwscanf (const wchar_t *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vwscanf")

                                                          ;
extern int vswscanf (const wchar_t *__restrict __s, const wchar_t *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vswscanf") __attribute__ ((__nothrow__ ))


                                                          ;
extern wint_t fgetwc (__FILE *__stream);
extern wint_t getwc (__FILE *__stream);





extern wint_t getwchar (void);






extern wint_t fputwc (wchar_t __wc, __FILE *__stream);
extern wint_t putwc (wchar_t __wc, __FILE *__stream);





extern wint_t putwchar (wchar_t __wc);







extern wchar_t *fgetws (wchar_t *__restrict __ws, int __n,
   __FILE *__restrict __stream);





extern int fputws (const wchar_t *__restrict __ws,
     __FILE *__restrict __stream);






extern wint_t ungetwc (wint_t __wc, __FILE *__stream);
extern size_t wcsftime (wchar_t *__restrict __s, size_t __maxsize,
   const wchar_t *__restrict __format,
   const struct tm *__restrict __tp) __attribute__ ((__nothrow__ ));
extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;
extern size_t rpl_mbrtowc (wchar_t *pwc, const char *s, size_t n, mbstate_t *ps);

extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;
extern size_t rpl_mbrlen (const char *s, size_t n, mbstate_t *ps);
extern int _gl_cxxalias_dummy;






extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;



extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;
struct flock
  {
    short int l_type;
    short int l_whence;

    __off_t l_start;
    __off_t l_len;




    __pid_t l_pid;
  };


extern int fcntl (int __fd, int __cmd, ...);
extern int open (const char *__file, int __oflag, ...) __attribute__ ((__nonnull__ (1)));
extern int openat (int __fd, const char *__file, int __oflag, ...)
     __attribute__ ((__nonnull__ (2)));
extern int creat (const char *__file, mode_t __mode) __attribute__ ((__nonnull__ (1)));
extern int lockf (int __fd, int __cmd, off_t __len);
extern int posix_fadvise (int __fd, off_t __offset, off_t __len,
     int __advise) __attribute__ ((__nothrow__ ));
extern int posix_fallocate (int __fd, off_t __offset, off_t __len);
extern int rpl_fcntl (int fd, int action, ...);
extern int _gl_cxxalias_dummy;






extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;




extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;


extern int _gl_cxxalias_dummy;
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




















typedef signed char gl_int8_t;
typedef unsigned char gl_uint8_t;





typedef short int gl_int16_t;
typedef unsigned short int gl_uint16_t;





typedef int gl_int32_t;
typedef unsigned int gl_uint32_t;
typedef signed char gl_int_fast8_t;
typedef unsigned char gl_uint_fast8_t;







typedef long int gl_int_fast32_t;
typedef unsigned long int gl_uint_fast32_t;

typedef gl_int_fast32_t gl_int_fast16_t;
typedef gl_uint_fast32_t gl_uint_fast16_t;
typedef long int gl_intptr_t;
typedef unsigned long int gl_uintptr_t;
typedef int _verify_intmax_size[sizeof (intmax_t) == sizeof (uintmax_t)
                                ? 1 : -1];






typedef int __gwchar_t;
typedef struct
  {
    __extension__ long long int quot;
    __extension__ long long int rem;
  } imaxdiv_t;





extern intmax_t imaxabs (intmax_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern imaxdiv_t imaxdiv (intmax_t __numer, intmax_t __denom)
      __attribute__ ((__nothrow__ )) __attribute__ ((__const__));


extern intmax_t strtoimax (const char *__restrict __nptr,
      char **__restrict __endptr, int __base) __attribute__ ((__nothrow__ ));


extern uintmax_t strtoumax (const char *__restrict __nptr,
       char ** __restrict __endptr, int __base) __attribute__ ((__nothrow__ ));


extern intmax_t wcstoimax (const __gwchar_t *__restrict __nptr,
      __gwchar_t **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ ));


extern uintmax_t wcstoumax (const __gwchar_t *__restrict __nptr,
       __gwchar_t ** __restrict __endptr, int __base)
     __attribute__ ((__nothrow__ ));
extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;




typedef __useconds_t useconds_t;
typedef __socklen_t socklen_t;
extern int access (const char *__name, int __type) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
extern int faccessat (int __fd, const char *__file, int __type, int __flag)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2))) ;
extern __off_t lseek (int __fd, __off_t __offset, int __whence) __attribute__ ((__nothrow__ ));
extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) ;





extern ssize_t write (int __fd, const void *__buf, size_t __n) ;
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes,
        __off_t __offset) ;






extern ssize_t pwrite (int __fd, const void *__buf, size_t __n,
         __off_t __offset) ;
extern int pipe (int __pipedes[2]) __attribute__ ((__nothrow__ )) ;
extern unsigned int alarm (unsigned int __seconds) __attribute__ ((__nothrow__ ));
extern unsigned int sleep (unsigned int __seconds);







extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     __attribute__ ((__nothrow__ ));






extern int usleep (__useconds_t __useconds);
extern int pause (void);



extern int chown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;



extern int fchown (int __fd, __uid_t __owner, __gid_t __group) __attribute__ ((__nothrow__ )) ;




extern int lchown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;






extern int fchownat (int __fd, const char *__file, __uid_t __owner,
       __gid_t __group, int __flag)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2))) ;



extern int chdir (const char *__path) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;



extern int fchdir (int __fd) __attribute__ ((__nothrow__ )) ;
extern char *getcwd (char *__buf, size_t __size) __attribute__ ((__nothrow__ )) ;
extern char *getwd (char *__buf)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) ;




extern int dup (int __fd) __attribute__ ((__nothrow__ )) ;


extern int dup2 (int __fd, int __fd2) __attribute__ ((__nothrow__ ));
extern char **__environ;







extern int execve (const char *__path, char *const __argv[],
     char *const __envp[]) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));




extern int fexecve (int __fd, char *const __argv[], char *const __envp[])
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));




extern int execv (const char *__path, char *const __argv[])
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));



extern int execle (const char *__path, const char *__arg, ...)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));



extern int execl (const char *__path, const char *__arg, ...)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));



extern int execvp (const char *__file, char *const __argv[])
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));




extern int execlp (const char *__file, const char *__arg, ...)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern int nice (int __inc) __attribute__ ((__nothrow__ )) ;




extern void _exit (int __status) __attribute__ ((__noreturn__));






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
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));


extern long int fpathconf (int __fd, int __name) __attribute__ ((__nothrow__ ));


extern long int sysconf (int __name) __attribute__ ((__nothrow__ ));



extern size_t confstr (int __name, char *__buf, size_t __len) __attribute__ ((__nothrow__ ));




extern __pid_t getpid (void) __attribute__ ((__nothrow__ ));


extern __pid_t getppid (void) __attribute__ ((__nothrow__ ));


extern __pid_t getpgrp (void) __attribute__ ((__nothrow__ ));


extern __pid_t __getpgid (__pid_t __pid) __attribute__ ((__nothrow__ ));

extern __pid_t getpgid (__pid_t __pid) __attribute__ ((__nothrow__ ));






extern int setpgid (__pid_t __pid, __pid_t __pgid) __attribute__ ((__nothrow__ ));
extern int setpgrp (void) __attribute__ ((__nothrow__ ));






extern __pid_t setsid (void) __attribute__ ((__nothrow__ ));



extern __pid_t getsid (__pid_t __pid) __attribute__ ((__nothrow__ ));



extern __uid_t getuid (void) __attribute__ ((__nothrow__ ));


extern __uid_t geteuid (void) __attribute__ ((__nothrow__ ));


extern __gid_t getgid (void) __attribute__ ((__nothrow__ ));


extern __gid_t getegid (void) __attribute__ ((__nothrow__ ));




extern int getgroups (int __size, __gid_t __list[]) __attribute__ ((__nothrow__ )) ;
extern int setuid (__uid_t __uid) __attribute__ ((__nothrow__ )) ;




extern int setreuid (__uid_t __ruid, __uid_t __euid) __attribute__ ((__nothrow__ )) ;




extern int seteuid (__uid_t __uid) __attribute__ ((__nothrow__ )) ;






extern int setgid (__gid_t __gid) __attribute__ ((__nothrow__ )) ;




extern int setregid (__gid_t __rgid, __gid_t __egid) __attribute__ ((__nothrow__ )) ;




extern int setegid (__gid_t __gid) __attribute__ ((__nothrow__ )) ;
extern __pid_t fork (void) __attribute__ ((__nothrow__));







extern __pid_t vfork (void) __attribute__ ((__nothrow__ ));





extern char *ttyname (int __fd) __attribute__ ((__nothrow__ ));



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2))) ;



extern int isatty (int __fd) __attribute__ ((__nothrow__ ));




extern int ttyslot (void) __attribute__ ((__nothrow__ ));




extern int link (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2))) ;




extern int linkat (int __fromfd, const char *__from, int __tofd,
     const char *__to, int __flags)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 4))) ;




extern int symlink (const char *__from, const char *__to)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2))) ;




extern ssize_t readlink (const char *__restrict __path,
    char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2))) ;




extern int symlinkat (const char *__from, int __tofd,
        const char *__to) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 3))) ;


extern ssize_t readlinkat (int __fd, const char *__restrict __path,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3))) ;



extern int unlink (const char *__name) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));



extern int unlinkat (int __fd, const char *__name, int __flag)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));



extern int rmdir (const char *__path) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));



extern __pid_t tcgetpgrp (int __fd) __attribute__ ((__nothrow__ ));


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) __attribute__ ((__nothrow__ ));






extern char *getlogin (void);







extern int getlogin_r (char *__name, size_t __name_len) __attribute__ ((__nonnull__ (1)));




extern int setlogin (const char *__name) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));








extern char *optarg;
extern int optind;




extern int opterr;



extern int optopt;
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       __attribute__ ((__nothrow__ ));
extern char *rpl_optarg;
extern int rpl_optind;




extern int rpl_opterr;



extern int rpl_optopt;
extern int rpl_getopt (int ___argc, char *const *___argv, const char *__shortopts)
       __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));
struct rpl_option
{
  const char *name;


  int has_arg;
  int *flag;
  int val;
};







extern int rpl_getopt_long (int ___argc, char * *___argv,
   const char *__shortopts,
          const struct rpl_option *__longopts, int *__longind)
       __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));
extern int rpl_getopt_long_only (int ___argc, char * *___argv,
        const char *__shortopts,
               const struct rpl_option *__longopts, int *__longind)
       __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));







extern int gethostname (char *__name, size_t __len) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));






extern int sethostname (const char *__name, size_t __len)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;



extern int sethostid (long int __id) __attribute__ ((__nothrow__ )) ;





extern int getdomainname (char *__name, size_t __len)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;
extern int setdomainname (const char *__name, size_t __len)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;





extern int vhangup (void) __attribute__ ((__nothrow__ ));


extern int revoke (const char *__file) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;







extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));





extern int acct (const char *__name) __attribute__ ((__nothrow__ ));



extern char *getusershell (void) __attribute__ ((__nothrow__ ));
extern void endusershell (void) __attribute__ ((__nothrow__ ));
extern void setusershell (void) __attribute__ ((__nothrow__ ));





extern int daemon (int __nochdir, int __noclose) __attribute__ ((__nothrow__ )) ;






extern int chroot (const char *__path) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;



extern char *getpass (const char *__prompt) __attribute__ ((__nonnull__ (1)));







extern int fsync (int __fd);
extern long int gethostid (void);


extern void sync (void) __attribute__ ((__nothrow__ ));





extern int getpagesize (void) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));




extern int getdtablesize (void) __attribute__ ((__nothrow__ ));
extern int truncate (const char *__file, __off_t __length)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;
extern int ftruncate (int __fd, __off_t __length) __attribute__ ((__nothrow__ )) ;
extern int brk (void *__addr) __attribute__ ((__nothrow__ )) ;





extern void *sbrk (gl_intptr_t __delta) __attribute__ ((__nothrow__ ));
extern long int syscall (long int __sysno, ...) __attribute__ ((__nothrow__ ));
extern int fdatasync (int __fildes);
extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;


extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;



extern int *__errno_location (void) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));

char *mdir_name (char const *file);
size_t base_len (char const *file) __attribute__ ((__pure__));
size_t dir_len (char const *file) __attribute__ ((__pure__));
char *last_component (char const *file) __attribute__ ((__pure__));

_Bool strip_trailing_slashes (char *file);



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
     __attribute__ ((__nothrow__ ));
extern __sighandler_t signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ ));
extern int kill (__pid_t __pid, int __sig) __attribute__ ((__nothrow__ ));






extern int killpg (__pid_t __pgrp, int __sig) __attribute__ ((__nothrow__ ));




extern int raise (int __sig) __attribute__ ((__nothrow__ ));




extern __sighandler_t ssignal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ ));
extern int gsignal (int __sig) __attribute__ ((__nothrow__ ));




extern void psignal (int __sig, const char *__s);


extern void psiginfo (const siginfo_t *__pinfo, const char *__s);
extern int sigblock (int __mask) __attribute__ ((__nothrow__ )) __attribute__ ((__deprecated__));


extern int sigsetmask (int __mask) __attribute__ ((__nothrow__ )) __attribute__ ((__deprecated__));


extern int siggetmask (void) __attribute__ ((__nothrow__ )) __attribute__ ((__deprecated__));
typedef __sighandler_t sig_t;





extern int sigemptyset (sigset_t *__set) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));


extern int sigfillset (sigset_t *__set) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));


extern int sigaddset (sigset_t *__set, int __signo) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));


extern int sigdelset (sigset_t *__set, int __signo) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));


extern int sigismember (const sigset_t *__set, int __signo)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
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
   sigset_t *__restrict __oset) __attribute__ ((__nothrow__ ));






extern int sigsuspend (const sigset_t *__set) __attribute__ ((__nonnull__ (1)));


extern int sigaction (int __sig, const struct sigaction *__restrict __act,
        struct sigaction *__restrict __oact) __attribute__ ((__nothrow__ ));


extern int sigpending (sigset_t *__set) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));






extern int sigwait (const sigset_t *__restrict __set, int *__restrict __sig)
     __attribute__ ((__nonnull__ (1, 2)));






extern int sigwaitinfo (const sigset_t *__restrict __set,
   siginfo_t *__restrict __info) __attribute__ ((__nonnull__ (1)));






extern int sigtimedwait (const sigset_t *__restrict __set,
    siginfo_t *__restrict __info,
    const struct timespec *__restrict __timeout)
     __attribute__ ((__nonnull__ (1)));



extern int sigqueue (__pid_t __pid, int __sig, const union sigval __val)
     __attribute__ ((__nothrow__ ));
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


extern int sigreturn (struct sigcontext *__scp) __attribute__ ((__nothrow__ ));











extern int siginterrupt (int __sig, int __interrupt) __attribute__ ((__nothrow__ ));


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
     __attribute__ ((__nothrow__ )) __attribute__ ((__deprecated__));



extern int sigaltstack (const struct sigaltstack *__restrict __ss,
   struct sigaltstack *__restrict __oss) __attribute__ ((__nothrow__ ));
extern int pthread_sigmask (int __how,
       const __sigset_t *__restrict __newmask,
       __sigset_t *__restrict __oldmask)__attribute__ ((__nothrow__ ));


extern int pthread_kill (pthread_t __threadid, int __signo) __attribute__ ((__nothrow__ ));






extern int __libc_current_sigrtmin (void) __attribute__ ((__nothrow__ ));

extern int __libc_current_sigrtmax (void) __attribute__ ((__nothrow__ ));














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
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__ )) ;




extern double atof (const char *__nptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (const char *__nptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (const char *__nptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (const char *__nptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));





extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));





extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));





__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
extern char *l64a (long int __n) __attribute__ ((__nothrow__ )) ;


extern long int a64l (const char *__s)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;











extern long int random (void) __attribute__ ((__nothrow__ ));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__ ));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    gl_int32_t *fptr;
    gl_int32_t *rptr;
    gl_int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    gl_int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       gl_int32_t *__restrict __result) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) __attribute__ ((__nothrow__ ));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__ ));




extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__ ));







extern double drand48 (void) __attribute__ ((__nothrow__ ));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__ ));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__ ));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__ ));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern void *malloc (size_t __size) __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) ;
extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__ )) __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) __attribute__ ((__nothrow__ ));




extern void cfree (void *__ptr) __attribute__ ((__nothrow__ ));









extern void *valloc (size_t __size) __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;




extern void *aligned_alloc (size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) ;




extern void abort (void) __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));







extern int at_quick_exit (void (*__func) (void)) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));







extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));





extern void quick_exit (int __status) __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));







extern void _Exit (int __status) __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));






extern char *getenv (const char *__name) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;
extern int putenv (char *__string) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__ ));
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;
extern int system (const char *__command) ;
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ )) ;






typedef int (*__compar_fn_t) (const void *, const void *);
extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;







extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
extern int abs (int __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__ )) __attribute__ ((__const__)) ;



__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__)) ;







extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__)) ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__)) ;
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (3, 4, 5)));






extern int mblen (const char *__s, size_t __n) __attribute__ ((__nothrow__ ));


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ ));


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__ ));



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ ));

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__ ));
extern int rpmatch (const char *__response) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2, 3))) ;
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));





extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;

extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
extern int strcoll_l (const char *__s1, const char *__s2, __locale_t __l)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    __locale_t __l) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 4)));




extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2, 3)));
extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) __attribute__ ((__nothrow__ ));
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));
extern char *strerror_l (int __errnum, __locale_t __l) __attribute__ ((__nothrow__ ));





extern void __bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));



extern void bcopy (const void *__src, void *__dest, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));


extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern int ffs (int __i) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__ ));


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));







extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;


extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;







extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;
extern size_t mbslen (const char *string) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;
extern char * mbsstr (const char *haystack, const char *needle)
     __attribute__ ((__pure__))
     __attribute__ ((__nonnull__ (1, 2)));
extern int mbscasecmp (const char *s1, const char *s2)
     __attribute__ ((__pure__))
     __attribute__ ((__nonnull__ (1, 2)));
extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;





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
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern const __int32_t **__ctype_tolower_loc (void)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern const __int32_t **__ctype_toupper_loc (void)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
extern int isalnum (int) __attribute__ ((__nothrow__ ));
extern int isalpha (int) __attribute__ ((__nothrow__ ));
extern int iscntrl (int) __attribute__ ((__nothrow__ ));
extern int isdigit (int) __attribute__ ((__nothrow__ ));
extern int islower (int) __attribute__ ((__nothrow__ ));
extern int isgraph (int) __attribute__ ((__nothrow__ ));
extern int isprint (int) __attribute__ ((__nothrow__ ));
extern int ispunct (int) __attribute__ ((__nothrow__ ));
extern int isspace (int) __attribute__ ((__nothrow__ ));
extern int isupper (int) __attribute__ ((__nothrow__ ));
extern int isxdigit (int) __attribute__ ((__nothrow__ ));



extern int tolower (int __c) __attribute__ ((__nothrow__ ));


extern int toupper (int __c) __attribute__ ((__nothrow__ ));
extern int isblank (int) __attribute__ ((__nothrow__ ));
extern int isascii (int __c) __attribute__ ((__nothrow__ ));



extern int toascii (int __c) __attribute__ ((__nothrow__ ));



extern int _toupper (int) __attribute__ ((__nothrow__ ));
extern int _tolower (int) __attribute__ ((__nothrow__ ));
extern int isalnum_l (int, __locale_t) __attribute__ ((__nothrow__ ));
extern int isalpha_l (int, __locale_t) __attribute__ ((__nothrow__ ));
extern int iscntrl_l (int, __locale_t) __attribute__ ((__nothrow__ ));
extern int isdigit_l (int, __locale_t) __attribute__ ((__nothrow__ ));
extern int islower_l (int, __locale_t) __attribute__ ((__nothrow__ ));
extern int isgraph_l (int, __locale_t) __attribute__ ((__nothrow__ ));
extern int isprint_l (int, __locale_t) __attribute__ ((__nothrow__ ));
extern int ispunct_l (int, __locale_t) __attribute__ ((__nothrow__ ));
extern int isspace_l (int, __locale_t) __attribute__ ((__nothrow__ ));
extern int isupper_l (int, __locale_t) __attribute__ ((__nothrow__ ));
extern int isxdigit_l (int, __locale_t) __attribute__ ((__nothrow__ ));

extern int isblank_l (int, __locale_t) __attribute__ ((__nothrow__ ));



extern int __tolower_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ ));
extern int tolower_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ ));


extern int __toupper_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ ));
extern int toupper_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ ));

enum { EXIT_TROUBLE = 2 };
enum { NCHAR = (127*2 +1) + 1 };


extern char *gettext (const char *__msgid)
     __attribute__ ((__nothrow__ )) __attribute__ ((__format_arg__ (1)));



extern char *dgettext (const char *__domainname, const char *__msgid)
     __attribute__ ((__nothrow__ )) __attribute__ ((__format_arg__ (2)));
extern char *__dgettext (const char *__domainname, const char *__msgid)
     __attribute__ ((__nothrow__ )) __attribute__ ((__format_arg__ (2)));



extern char *dcgettext (const char *__domainname,
   const char *__msgid, int __category)
     __attribute__ ((__nothrow__ )) __attribute__ ((__format_arg__ (2)));
extern char *__dcgettext (const char *__domainname,
     const char *__msgid, int __category)
     __attribute__ ((__nothrow__ )) __attribute__ ((__format_arg__ (2)));




extern char *ngettext (const char *__msgid1, const char *__msgid2,
         unsigned long int __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__format_arg__ (1))) __attribute__ ((__format_arg__ (2)));



extern char *dngettext (const char *__domainname, const char *__msgid1,
   const char *__msgid2, unsigned long int __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__format_arg__ (2))) __attribute__ ((__format_arg__ (3)));



extern char *dcngettext (const char *__domainname, const char *__msgid1,
    const char *__msgid2, unsigned long int __n,
    int __category)
     __attribute__ ((__nothrow__ )) __attribute__ ((__format_arg__ (2))) __attribute__ ((__format_arg__ (3)));





extern char *textdomain (const char *__domainname) __attribute__ ((__nothrow__ ));



extern char *bindtextdomain (const char *__domainname,
        const char *__dirname) __attribute__ ((__nothrow__ ));



extern char *bind_textdomain_codeset (const char *__domainname,
          const char *__codeset) __attribute__ ((__nothrow__ ));
__inline





static const char *
pgettext_aux (const char *domain,
              const char *msg_ctxt_id, const char *msgid,
              int category)
{
  const char *translation = dcgettext (domain, msg_ctxt_id, category);
  if (translation == msg_ctxt_id)
    return msgid;
  else
    return translation;
}


__inline





static const char *
npgettext_aux (const char *domain,
               const char *msg_ctxt_id, const char *msgid,
               const char *msgid_plural, unsigned long int n,
               int category)
{
  const char *translation =
    dcngettext (domain, msg_ctxt_id, msgid_plural, n, category);
  if (translation == msg_ctxt_id || translation == msgid_plural)
    return (n == 1 ? msgid : msgid_plural);
  else
    return translation;
}






__inline





static const char *
dcpgettext_expr (const char *domain,
                 const char *msgctxt, const char *msgid,
                 int category)
{
  size_t msgctxt_len = strlen (msgctxt) + 1;
  size_t msgid_len = strlen (msgid) + 1;
  const char *translation={0};

  char msg_ctxt_id[msgctxt_len + msgid_len];
    {
      int found_translation={0};
      memcpy (msg_ctxt_id, msgctxt, msgctxt_len - 1);
      msg_ctxt_id[msgctxt_len - 1] = '\004';
      memcpy (msg_ctxt_id + msgctxt_len, msgid, msgid_len);
      translation = dcgettext (domain, msg_ctxt_id, category);
      found_translation = (translation != msg_ctxt_id);




      if (found_translation)
        return translation;
    }
  return msgid;
}







__inline





static const char *
dcnpgettext_expr (const char *domain,
                  const char *msgctxt, const char *msgid,
                  const char *msgid_plural, unsigned long int n,
                  int category)
{
  size_t msgctxt_len = strlen (msgctxt) + 1;
  size_t msgid_len = strlen (msgid) + 1;
  const char *translation={0};

  char msg_ctxt_id[msgctxt_len + msgid_len];
    {
      int found_translation={0};
      memcpy (msg_ctxt_id, msgctxt, msgctxt_len - 1);
      msg_ctxt_id[msgctxt_len - 1] = '\004';
      memcpy (msg_ctxt_id + msgctxt_len, msgid, msgid_len);
      translation = dcngettext (domain, msg_ctxt_id, msgid_plural, n, category);
      found_translation = !(translation == msg_ctxt_id || translation == msgid_plural);




      if (found_translation)
        return translation;
    }
  return (n == 1 ? msgid : msgid_plural);
}



struct lconv
{


  char *decimal_point;
  char *thousands_sep;





  char *grouping;





  char *int_curr_symbol;
  char *currency_symbol;
  char *mon_decimal_point;
  char *mon_thousands_sep;
  char *mon_grouping;
  char *positive_sign;
  char *negative_sign;
  char int_frac_digits;
  char frac_digits;

  char p_cs_precedes;

  char p_sep_by_space;

  char n_cs_precedes;

  char n_sep_by_space;






  char p_sign_posn;
  char n_sign_posn;


  char int_p_cs_precedes;

  char int_p_sep_by_space;

  char int_n_cs_precedes;

  char int_n_sep_by_space;






  char int_p_sign_posn;
  char int_n_sign_posn;
};



extern char *setlocale (int __category, const char *__locale) __attribute__ ((__nothrow__ ));


extern struct lconv *localeconv (void) __attribute__ ((__nothrow__ ));
extern __locale_t newlocale (int __category_mask, const char *__locale,
        __locale_t __base) __attribute__ ((__nothrow__ ));
extern __locale_t duplocale (__locale_t __dataset) __attribute__ ((__nothrow__ ));



extern void freelocale (__locale_t __dataset) __attribute__ ((__nothrow__ ));






extern __locale_t uselocale (__locale_t __dataset) __attribute__ ((__nothrow__ ));







extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;





inline unsigned char
to_uchar (char ch)
{
  return ch;
}
static __attribute__ ((__unused__)) void
__asan_poison_memory_region (void const volatile *addr, size_t size) { }
static __attribute__ ((__unused__)) void
__asan_unpoison_memory_region (void const volatile *addr, size_t size) { }


ptrdiff_t argmatch (char const *arg, char const *const *arglist,
                    char const *vallist, size_t valsize) __attribute__ ((__pure__));







typedef void (*argmatch_exit_fn) (void);
extern argmatch_exit_fn argmatch_die;



void argmatch_invalid (char const *context, char const *value,
                       ptrdiff_t problem);
void argmatch_valid (char const *const *arglist,
                     char const *vallist, size_t valsize);
ptrdiff_t __xargmatch_internal (char const *context,
                                char const *arg, char const *const *arglist,
                                char const *vallist, size_t valsize,
                                argmatch_exit_fn exit_fn);
char const *argmatch_to_argument (char const *value,
                                  char const *const *arglist,
                                  char const *vallist, size_t valsize)
  __attribute__ ((__pure__));
inline _Bool
c_isalnum (int c)
{
  switch (c)
    {
    case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
    case 'a' + (0): case 'b' + (0): case 'c' + (0): case 'd' + (0): case 'e' + (0): case 'f' + (0): case 'g' + (0): case 'h' + (0): case 'i' + (0): case 'j' + (0): case 'k' + (0): case 'l' + (0): case 'm' + (0): case 'n' + (0): case 'o' + (0): case 'p' + (0): case 'q' + (0): case 'r' + (0): case 's' + (0): case 't' + (0): case 'u' + (0): case 'v' + (0): case 'w' + (0): case 'x' + (0): case 'y' + (0): case 'z' + (0):
    case 'a' + ('A' - 'a'): case 'b' + ('A' - 'a'): case 'c' + ('A' - 'a'): case 'd' + ('A' - 'a'): case 'e' + ('A' - 'a'): case 'f' + ('A' - 'a'): case 'g' + ('A' - 'a'): case 'h' + ('A' - 'a'): case 'i' + ('A' - 'a'): case 'j' + ('A' - 'a'): case 'k' + ('A' - 'a'): case 'l' + ('A' - 'a'): case 'm' + ('A' - 'a'): case 'n' + ('A' - 'a'): case 'o' + ('A' - 'a'): case 'p' + ('A' - 'a'): case 'q' + ('A' - 'a'): case 'r' + ('A' - 'a'): case 's' + ('A' - 'a'): case 't' + ('A' - 'a'): case 'u' + ('A' - 'a'): case 'v' + ('A' - 'a'): case 'w' + ('A' - 'a'): case 'x' + ('A' - 'a'): case 'y' + ('A' - 'a'): case 'z' + ('A' - 'a'):
      return 1;
    default:
      return 0;
    }
}

inline _Bool
c_isalpha (int c)
{
  switch (c)
    {
    case 'a' + (0): case 'b' + (0): case 'c' + (0): case 'd' + (0): case 'e' + (0): case 'f' + (0): case 'g' + (0): case 'h' + (0): case 'i' + (0): case 'j' + (0): case 'k' + (0): case 'l' + (0): case 'm' + (0): case 'n' + (0): case 'o' + (0): case 'p' + (0): case 'q' + (0): case 'r' + (0): case 's' + (0): case 't' + (0): case 'u' + (0): case 'v' + (0): case 'w' + (0): case 'x' + (0): case 'y' + (0): case 'z' + (0):
    case 'a' + ('A' - 'a'): case 'b' + ('A' - 'a'): case 'c' + ('A' - 'a'): case 'd' + ('A' - 'a'): case 'e' + ('A' - 'a'): case 'f' + ('A' - 'a'): case 'g' + ('A' - 'a'): case 'h' + ('A' - 'a'): case 'i' + ('A' - 'a'): case 'j' + ('A' - 'a'): case 'k' + ('A' - 'a'): case 'l' + ('A' - 'a'): case 'm' + ('A' - 'a'): case 'n' + ('A' - 'a'): case 'o' + ('A' - 'a'): case 'p' + ('A' - 'a'): case 'q' + ('A' - 'a'): case 'r' + ('A' - 'a'): case 's' + ('A' - 'a'): case 't' + ('A' - 'a'): case 'u' + ('A' - 'a'): case 'v' + ('A' - 'a'): case 'w' + ('A' - 'a'): case 'x' + ('A' - 'a'): case 'y' + ('A' - 'a'): case 'z' + ('A' - 'a'):
      return 1;
    default:
      return 0;
    }
}



inline _Bool
c_isascii (int c)
{
  switch (c)
    {
    case ' ':
    case '\a': case '\b': case '\f': case '\n': case '\r': case '\t': case '\v': case '\x00': case '\x01': case '\x02': case '\x03': case '\x04': case '\x05': case '\x06': case '\x0e': case '\x0f': case '\x10': case '\x11': case '\x12': case '\x13': case '\x14': case '\x15': case '\x16': case '\x17': case '\x18': case '\x19': case '\x1a': case '\x1b': case '\x1c': case '\x1d': case '\x1e': case '\x1f': case '\x7f':
    case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
    case 'a' + (0): case 'b' + (0): case 'c' + (0): case 'd' + (0): case 'e' + (0): case 'f' + (0): case 'g' + (0): case 'h' + (0): case 'i' + (0): case 'j' + (0): case 'k' + (0): case 'l' + (0): case 'm' + (0): case 'n' + (0): case 'o' + (0): case 'p' + (0): case 'q' + (0): case 'r' + (0): case 's' + (0): case 't' + (0): case 'u' + (0): case 'v' + (0): case 'w' + (0): case 'x' + (0): case 'y' + (0): case 'z' + (0):
    case '!': case '"': case '#': case '$': case '%': case '&': case '\'': case '(': case ')': case '*': case '+': case ',': case '-': case '.': case '/': case ':': case ';': case '<': case '=': case '>': case '?': case '@': case '[': case '\\': case ']': case '^': case '_': case '`': case '{': case '|': case '}': case '~':
    case 'a' + ('A' - 'a'): case 'b' + ('A' - 'a'): case 'c' + ('A' - 'a'): case 'd' + ('A' - 'a'): case 'e' + ('A' - 'a'): case 'f' + ('A' - 'a'): case 'g' + ('A' - 'a'): case 'h' + ('A' - 'a'): case 'i' + ('A' - 'a'): case 'j' + ('A' - 'a'): case 'k' + ('A' - 'a'): case 'l' + ('A' - 'a'): case 'm' + ('A' - 'a'): case 'n' + ('A' - 'a'): case 'o' + ('A' - 'a'): case 'p' + ('A' - 'a'): case 'q' + ('A' - 'a'): case 'r' + ('A' - 'a'): case 's' + ('A' - 'a'): case 't' + ('A' - 'a'): case 'u' + ('A' - 'a'): case 'v' + ('A' - 'a'): case 'w' + ('A' - 'a'): case 'x' + ('A' - 'a'): case 'y' + ('A' - 'a'): case 'z' + ('A' - 'a'):
      return 1;
    default:
      return 0;
    }
}

inline _Bool
c_isblank (int c)
{
  return c == ' ' || c == '\t';
}

inline _Bool
c_iscntrl (int c)
{
  switch (c)
    {
    case '\a': case '\b': case '\f': case '\n': case '\r': case '\t': case '\v': case '\x00': case '\x01': case '\x02': case '\x03': case '\x04': case '\x05': case '\x06': case '\x0e': case '\x0f': case '\x10': case '\x11': case '\x12': case '\x13': case '\x14': case '\x15': case '\x16': case '\x17': case '\x18': case '\x19': case '\x1a': case '\x1b': case '\x1c': case '\x1d': case '\x1e': case '\x1f': case '\x7f':
      return 1;
    default:
      return 0;
    }
}

inline _Bool
c_isdigit (int c)
{
  switch (c)
    {
    case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
      return 1;
    default:
      return 0;
    }
}

inline _Bool
c_isgraph (int c)
{
  switch (c)
    {
    case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
    case 'a' + (0): case 'b' + (0): case 'c' + (0): case 'd' + (0): case 'e' + (0): case 'f' + (0): case 'g' + (0): case 'h' + (0): case 'i' + (0): case 'j' + (0): case 'k' + (0): case 'l' + (0): case 'm' + (0): case 'n' + (0): case 'o' + (0): case 'p' + (0): case 'q' + (0): case 'r' + (0): case 's' + (0): case 't' + (0): case 'u' + (0): case 'v' + (0): case 'w' + (0): case 'x' + (0): case 'y' + (0): case 'z' + (0):
    case '!': case '"': case '#': case '$': case '%': case '&': case '\'': case '(': case ')': case '*': case '+': case ',': case '-': case '.': case '/': case ':': case ';': case '<': case '=': case '>': case '?': case '@': case '[': case '\\': case ']': case '^': case '_': case '`': case '{': case '|': case '}': case '~':
    case 'a' + ('A' - 'a'): case 'b' + ('A' - 'a'): case 'c' + ('A' - 'a'): case 'd' + ('A' - 'a'): case 'e' + ('A' - 'a'): case 'f' + ('A' - 'a'): case 'g' + ('A' - 'a'): case 'h' + ('A' - 'a'): case 'i' + ('A' - 'a'): case 'j' + ('A' - 'a'): case 'k' + ('A' - 'a'): case 'l' + ('A' - 'a'): case 'm' + ('A' - 'a'): case 'n' + ('A' - 'a'): case 'o' + ('A' - 'a'): case 'p' + ('A' - 'a'): case 'q' + ('A' - 'a'): case 'r' + ('A' - 'a'): case 's' + ('A' - 'a'): case 't' + ('A' - 'a'): case 'u' + ('A' - 'a'): case 'v' + ('A' - 'a'): case 'w' + ('A' - 'a'): case 'x' + ('A' - 'a'): case 'y' + ('A' - 'a'): case 'z' + ('A' - 'a'):
      return 1;
    default:
      return 0;
    }
}

inline _Bool
c_islower (int c)
{
  switch (c)
    {
    case 'a' + (0): case 'b' + (0): case 'c' + (0): case 'd' + (0): case 'e' + (0): case 'f' + (0): case 'g' + (0): case 'h' + (0): case 'i' + (0): case 'j' + (0): case 'k' + (0): case 'l' + (0): case 'm' + (0): case 'n' + (0): case 'o' + (0): case 'p' + (0): case 'q' + (0): case 'r' + (0): case 's' + (0): case 't' + (0): case 'u' + (0): case 'v' + (0): case 'w' + (0): case 'x' + (0): case 'y' + (0): case 'z' + (0):
      return 1;
    default:
      return 0;
    }
}

inline _Bool
c_isprint (int c)
{
  switch (c)
    {
    case ' ':
    case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
    case 'a' + (0): case 'b' + (0): case 'c' + (0): case 'd' + (0): case 'e' + (0): case 'f' + (0): case 'g' + (0): case 'h' + (0): case 'i' + (0): case 'j' + (0): case 'k' + (0): case 'l' + (0): case 'm' + (0): case 'n' + (0): case 'o' + (0): case 'p' + (0): case 'q' + (0): case 'r' + (0): case 's' + (0): case 't' + (0): case 'u' + (0): case 'v' + (0): case 'w' + (0): case 'x' + (0): case 'y' + (0): case 'z' + (0):
    case '!': case '"': case '#': case '$': case '%': case '&': case '\'': case '(': case ')': case '*': case '+': case ',': case '-': case '.': case '/': case ':': case ';': case '<': case '=': case '>': case '?': case '@': case '[': case '\\': case ']': case '^': case '_': case '`': case '{': case '|': case '}': case '~':
    case 'a' + ('A' - 'a'): case 'b' + ('A' - 'a'): case 'c' + ('A' - 'a'): case 'd' + ('A' - 'a'): case 'e' + ('A' - 'a'): case 'f' + ('A' - 'a'): case 'g' + ('A' - 'a'): case 'h' + ('A' - 'a'): case 'i' + ('A' - 'a'): case 'j' + ('A' - 'a'): case 'k' + ('A' - 'a'): case 'l' + ('A' - 'a'): case 'm' + ('A' - 'a'): case 'n' + ('A' - 'a'): case 'o' + ('A' - 'a'): case 'p' + ('A' - 'a'): case 'q' + ('A' - 'a'): case 'r' + ('A' - 'a'): case 's' + ('A' - 'a'): case 't' + ('A' - 'a'): case 'u' + ('A' - 'a'): case 'v' + ('A' - 'a'): case 'w' + ('A' - 'a'): case 'x' + ('A' - 'a'): case 'y' + ('A' - 'a'): case 'z' + ('A' - 'a'):
      return 1;
    default:
      return 0;
    }
}

inline _Bool
c_ispunct (int c)
{
  switch (c)
    {
    case '!': case '"': case '#': case '$': case '%': case '&': case '\'': case '(': case ')': case '*': case '+': case ',': case '-': case '.': case '/': case ':': case ';': case '<': case '=': case '>': case '?': case '@': case '[': case '\\': case ']': case '^': case '_': case '`': case '{': case '|': case '}': case '~':
      return 1;
    default:
      return 0;
    }
}

inline _Bool
c_isspace (int c)
{
  switch (c)
    {
    case ' ': case '\t': case '\n': case '\v': case '\f': case '\r':
      return 1;
    default:
      return 0;
    }
}

inline _Bool
c_isupper (int c)
{
  switch (c)
    {
    case 'a' + ('A' - 'a'): case 'b' + ('A' - 'a'): case 'c' + ('A' - 'a'): case 'd' + ('A' - 'a'): case 'e' + ('A' - 'a'): case 'f' + ('A' - 'a'): case 'g' + ('A' - 'a'): case 'h' + ('A' - 'a'): case 'i' + ('A' - 'a'): case 'j' + ('A' - 'a'): case 'k' + ('A' - 'a'): case 'l' + ('A' - 'a'): case 'm' + ('A' - 'a'): case 'n' + ('A' - 'a'): case 'o' + ('A' - 'a'): case 'p' + ('A' - 'a'): case 'q' + ('A' - 'a'): case 'r' + ('A' - 'a'): case 's' + ('A' - 'a'): case 't' + ('A' - 'a'): case 'u' + ('A' - 'a'): case 'v' + ('A' - 'a'): case 'w' + ('A' - 'a'): case 'x' + ('A' - 'a'): case 'y' + ('A' - 'a'): case 'z' + ('A' - 'a'):
      return 1;
    default:
      return 0;
    }
}

inline _Bool
c_isxdigit (int c)
{
  switch (c)
    {
    case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
    case 'a' + (0): case 'b' + (0): case 'c' + (0): case 'd' + (0): case 'e' + (0): case 'f' + (0): case 'a' + ('A' - 'a'): case 'b' + ('A' - 'a'): case 'c' + ('A' - 'a'): case 'd' + ('A' - 'a'): case 'e' + ('A' - 'a'): case 'f' + ('A' - 'a'):
      return 1;
    default:
      return 0;
    }
}

inline int
c_tolower (int c)
{
  switch (c)
    {
    case 'a' + ('A' - 'a'): case 'b' + ('A' - 'a'): case 'c' + ('A' - 'a'): case 'd' + ('A' - 'a'): case 'e' + ('A' - 'a'): case 'f' + ('A' - 'a'): case 'g' + ('A' - 'a'): case 'h' + ('A' - 'a'): case 'i' + ('A' - 'a'): case 'j' + ('A' - 'a'): case 'k' + ('A' - 'a'): case 'l' + ('A' - 'a'): case 'm' + ('A' - 'a'): case 'n' + ('A' - 'a'): case 'o' + ('A' - 'a'): case 'p' + ('A' - 'a'): case 'q' + ('A' - 'a'): case 'r' + ('A' - 'a'): case 's' + ('A' - 'a'): case 't' + ('A' - 'a'): case 'u' + ('A' - 'a'): case 'v' + ('A' - 'a'): case 'w' + ('A' - 'a'): case 'x' + ('A' - 'a'): case 'y' + ('A' - 'a'): case 'z' + ('A' - 'a'):
      return c - 'A' + 'a';
    default:
      return c;
    }
}

inline int
c_toupper (int c)
{
  switch (c)
    {
    case 'a' + (0): case 'b' + (0): case 'c' + (0): case 'd' + (0): case 'e' + (0): case 'f' + (0): case 'g' + (0): case 'h' + (0): case 'i' + (0): case 'j' + (0): case 'k' + (0): case 'l' + (0): case 'm' + (0): case 'n' + (0): case 'o' + (0): case 'p' + (0): case 'q' + (0): case 'r' + (0): case 's' + (0): case 't' + (0): case 'u' + (0): case 'v' + (0): case 'w' + (0): case 'x' + (0): case 'y' + (0): case 'z' + (0):
      return c - 'a' + 'A';
    default:
      return c;
    }
}
void close_stdout_set_file_name (const char *file);
void close_stdout_set_ignore_EPIPE (_Bool ignore);
void close_stdout (void);
extern int should_colorize (void);
extern void init_colorize (void);
extern void print_start_colorize (char const *sgr_start, char const *sgr_seq);
extern void print_end_colorize (char const *sgr_end);
extern void error (int __status, int __errnum, const char *__format, ...)
     __attribute__ ((__format__ (__printf__, 3, 4)));

extern void error_at_line (int __status, int __errnum, const char *__fname,
                           unsigned int __lineno, const char *__format, ...)
     __attribute__ ((__format__ (__printf__, 5, 6)));




extern void (*error_print_progname) (void);


extern unsigned int error_message_count;



extern int error_one_per_line;

struct exclude;

_Bool fnmatch_pattern_has_wildcards (const char *, int) __attribute__ ((__pure__));

struct exclude *new_exclude (void);
void free_exclude (struct exclude *);
void add_exclude (struct exclude *, char const *, int);
int add_exclude_file (void (*) (struct exclude *, char const *, int),
                      struct exclude *, char const *, int, char);
int add_exclude_fp (void (*) (struct exclude *, char const *, int, void *),
      struct exclude *, FILE *, int, char, void *);
_Bool excluded_file_name (struct exclude const *, char const *);
void exclude_add_pattern_buffer (struct exclude *ex, char *buf);
_Bool exclude_fnmatch (char const *, char const *, int);
extern int volatile exit_failure;

int open_safer (char const *, int, ...);
int creat_safer (char const *, mode_t);


int openat_safer (int, char const *, int, ...);





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






extern DIR *opendir (const char *__name) __attribute__ ((__nonnull__ (1)));






extern DIR *fdopendir (int __fd);







extern int closedir (DIR *__dirp) __attribute__ ((__nonnull__ (1)));
extern struct dirent *readdir (DIR *__dirp) __attribute__ ((__nonnull__ (1)));
extern int readdir_r (DIR *__restrict __dirp,
        struct dirent *__restrict __entry,
        struct dirent **__restrict __result)
     __attribute__ ((__nonnull__ (1, 2, 3))) __attribute__ ((__deprecated__));
extern void rewinddir (DIR *__dirp) __attribute__ ((__nonnull__ (1)));





extern void seekdir (DIR *__dirp, long int __pos) __attribute__ ((__nonnull__ (1)));


extern long int telldir (DIR *__dirp) __attribute__ ((__nonnull__ (1)));





extern int dirfd (DIR *__dirp) __attribute__ ((__nonnull__ (1)));
extern int scandir (const char *__restrict __dir,
      struct dirent ***__restrict __namelist,
      int (*__selector) (const struct dirent *),
      int (*__cmp) (const struct dirent **,
      const struct dirent **))
     __attribute__ ((__nonnull__ (1, 2)));
extern int alphasort (const struct dirent **__e1,
        const struct dirent **__e2)
             __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern __ssize_t getdirentries (int __fd, char *__restrict __buf,
    size_t __nbytes,
    __off_t *__restrict __basep)
             __attribute__ ((__nonnull__ (2, 4)));






extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;
enum { I_RING_SIZE = 4 };
extern int (*_gl_verify_function2 (void)) [(!!sizeof (struct { unsigned int _gl_verify_error_if_negative: (1 <= I_RING_SIZE) ? 1 : -1; }))];
struct I_ring
{
  int ir_data[I_RING_SIZE];
  int ir_default_val;
  unsigned int ir_front;
  unsigned int ir_back;
  _Bool ir_empty;
};
typedef struct I_ring I_ring;

void i_ring_init (I_ring *ir, int ir_default_val);
int i_ring_push (I_ring *ir, int val);
int i_ring_pop (I_ring *ir);
_Bool i_ring_empty (I_ring const *ir) __attribute__ ((__pure__));

typedef struct {
        struct _ftsent *fts_cur;
        struct _ftsent *fts_child;
        struct _ftsent **fts_array;
        dev_t fts_dev;
        char *fts_path;
        int fts_rfd;
        int fts_cwd_fd;

        size_t fts_pathlen;
        size_t fts_nitems;
        int (*fts_compar) (struct _ftsent const **, struct _ftsent const **);
        int fts_options;
        struct hash_table *fts_leaf_optimization_works_ht;

        union {
                struct hash_table *ht;





                struct cycle_check_state *state;
        } fts_cycle;




        I_ring fts_fd_ring;
} FTS;

typedef struct _ftsent {
        struct _ftsent *fts_cycle;
        struct _ftsent *fts_parent;
        struct _ftsent *fts_link;
        DIR *fts_dirp;


        long fts_number;
        void *fts_pointer;
        char *fts_accpath;
        char *fts_path;
        int fts_errno;
        int fts_symfd;
        size_t fts_pathlen;

        FTS *fts_fts;



        ptrdiff_t fts_level;

        size_t fts_namelen;
        nlink_t fts_n_dirs_remaining;
        unsigned short int fts_info;



        unsigned short int fts_flags;





        unsigned short int fts_instr;

        struct stat fts_statp[1];
        char fts_name[];
} FTSENT;
FTSENT *fts_children (FTS *, int) __attribute__ ((__warn_unused_result__));
int fts_close (FTS *) __attribute__ ((__warn_unused_result__));
FTS *fts_open (char * const *, int,
                   int (*)(const FTSENT **, const FTSENT **))
          __attribute__ ((__warn_unused_result__));
FTSENT *fts_read (FTS *) __attribute__ ((__warn_unused_result__));
int fts_set (FTS *, FTSENT *, int) ;









extern char const *getprogname (void)

  __attribute__ ((__pure__))

  ;
extern _Bool match_icase;
extern _Bool match_words;
extern _Bool match_lines;
extern char eolbyte;

extern char const *pattern_file_name (size_t, size_t *);
extern const char * proper_name (const char *name) ;





extern const char * proper_name_utf8 (const char *name_ascii,
                                      const char *name_utf8);



extern struct quoting_options quote_quoting_options;





char const *quote_n_mem (int n, char const *arg, size_t argsize);




char const *quote_mem (char const *arg, size_t argsize);



char const *quote_n (int n, char const *arg);



char const *quote (char const *arg);
extern size_t safe_read (int fd, void *buf, size_t count);


typedef unsigned long int wctype_t;
enum
{
  __ISwupper = 0,
  __ISwlower = 1,
  __ISwalpha = 2,
  __ISwdigit = 3,
  __ISwxdigit = 4,
  __ISwspace = 5,
  __ISwprint = 6,
  __ISwgraph = 7,
  __ISwblank = 8,
  __ISwcntrl = 9,
  __ISwpunct = 10,
  __ISwalnum = 11,

  _ISwupper = ((__ISwupper) < 8 ? (int) ((1UL << (__ISwupper)) << 24) : ((__ISwupper) < 16 ? (int) ((1UL << (__ISwupper)) << 8) : ((__ISwupper) < 24 ? (int) ((1UL << (__ISwupper)) >> 8) : (int) ((1UL << (__ISwupper)) >> 24)))),
  _ISwlower = ((__ISwlower) < 8 ? (int) ((1UL << (__ISwlower)) << 24) : ((__ISwlower) < 16 ? (int) ((1UL << (__ISwlower)) << 8) : ((__ISwlower) < 24 ? (int) ((1UL << (__ISwlower)) >> 8) : (int) ((1UL << (__ISwlower)) >> 24)))),
  _ISwalpha = ((__ISwalpha) < 8 ? (int) ((1UL << (__ISwalpha)) << 24) : ((__ISwalpha) < 16 ? (int) ((1UL << (__ISwalpha)) << 8) : ((__ISwalpha) < 24 ? (int) ((1UL << (__ISwalpha)) >> 8) : (int) ((1UL << (__ISwalpha)) >> 24)))),
  _ISwdigit = ((__ISwdigit) < 8 ? (int) ((1UL << (__ISwdigit)) << 24) : ((__ISwdigit) < 16 ? (int) ((1UL << (__ISwdigit)) << 8) : ((__ISwdigit) < 24 ? (int) ((1UL << (__ISwdigit)) >> 8) : (int) ((1UL << (__ISwdigit)) >> 24)))),
  _ISwxdigit = ((__ISwxdigit) < 8 ? (int) ((1UL << (__ISwxdigit)) << 24) : ((__ISwxdigit) < 16 ? (int) ((1UL << (__ISwxdigit)) << 8) : ((__ISwxdigit) < 24 ? (int) ((1UL << (__ISwxdigit)) >> 8) : (int) ((1UL << (__ISwxdigit)) >> 24)))),
  _ISwspace = ((__ISwspace) < 8 ? (int) ((1UL << (__ISwspace)) << 24) : ((__ISwspace) < 16 ? (int) ((1UL << (__ISwspace)) << 8) : ((__ISwspace) < 24 ? (int) ((1UL << (__ISwspace)) >> 8) : (int) ((1UL << (__ISwspace)) >> 24)))),
  _ISwprint = ((__ISwprint) < 8 ? (int) ((1UL << (__ISwprint)) << 24) : ((__ISwprint) < 16 ? (int) ((1UL << (__ISwprint)) << 8) : ((__ISwprint) < 24 ? (int) ((1UL << (__ISwprint)) >> 8) : (int) ((1UL << (__ISwprint)) >> 24)))),
  _ISwgraph = ((__ISwgraph) < 8 ? (int) ((1UL << (__ISwgraph)) << 24) : ((__ISwgraph) < 16 ? (int) ((1UL << (__ISwgraph)) << 8) : ((__ISwgraph) < 24 ? (int) ((1UL << (__ISwgraph)) >> 8) : (int) ((1UL << (__ISwgraph)) >> 24)))),
  _ISwblank = ((__ISwblank) < 8 ? (int) ((1UL << (__ISwblank)) << 24) : ((__ISwblank) < 16 ? (int) ((1UL << (__ISwblank)) << 8) : ((__ISwblank) < 24 ? (int) ((1UL << (__ISwblank)) >> 8) : (int) ((1UL << (__ISwblank)) >> 24)))),
  _ISwcntrl = ((__ISwcntrl) < 8 ? (int) ((1UL << (__ISwcntrl)) << 24) : ((__ISwcntrl) < 16 ? (int) ((1UL << (__ISwcntrl)) << 8) : ((__ISwcntrl) < 24 ? (int) ((1UL << (__ISwcntrl)) >> 8) : (int) ((1UL << (__ISwcntrl)) >> 24)))),
  _ISwpunct = ((__ISwpunct) < 8 ? (int) ((1UL << (__ISwpunct)) << 24) : ((__ISwpunct) < 16 ? (int) ((1UL << (__ISwpunct)) << 8) : ((__ISwpunct) < 24 ? (int) ((1UL << (__ISwpunct)) >> 8) : (int) ((1UL << (__ISwpunct)) >> 24)))),
  _ISwalnum = ((__ISwalnum) < 8 ? (int) ((1UL << (__ISwalnum)) << 24) : ((__ISwalnum) < 16 ? (int) ((1UL << (__ISwalnum)) << 8) : ((__ISwalnum) < 24 ? (int) ((1UL << (__ISwalnum)) >> 8) : (int) ((1UL << (__ISwalnum)) >> 24))))
};
extern int iswalnum (wint_t __wc) ;





extern int iswalpha (wint_t __wc) ;


extern int iswcntrl (wint_t __wc) ;



extern int iswdigit (wint_t __wc) ;



extern int iswgraph (wint_t __wc) ;




extern int iswlower (wint_t __wc) ;


extern int iswprint (wint_t __wc) ;




extern int iswpunct (wint_t __wc) ;




extern int iswspace (wint_t __wc) ;




extern int iswupper (wint_t __wc) ;




extern int iswxdigit (wint_t __wc) ;





extern int iswblank (wint_t __wc) ;
extern wctype_t wctype (const char *__property) ;



extern int iswctype (wint_t __wc, wctype_t __desc) ;
typedef const __int32_t *wctrans_t;







extern wint_t towlower (wint_t __wc) ;


extern wint_t towupper (wint_t __wc) ;
extern wctrans_t wctrans (const char *__property) ;


extern wint_t towctrans (wint_t __wc, wctrans_t __desc) ;
extern int iswalnum_l (wint_t __wc, __locale_t __locale) ;





extern int iswalpha_l (wint_t __wc, __locale_t __locale) ;


extern int iswcntrl_l (wint_t __wc, __locale_t __locale) ;



extern int iswdigit_l (wint_t __wc, __locale_t __locale) ;



extern int iswgraph_l (wint_t __wc, __locale_t __locale) ;




extern int iswlower_l (wint_t __wc, __locale_t __locale) ;


extern int iswprint_l (wint_t __wc, __locale_t __locale) ;




extern int iswpunct_l (wint_t __wc, __locale_t __locale) ;




extern int iswspace_l (wint_t __wc, __locale_t __locale) ;




extern int iswupper_l (wint_t __wc, __locale_t __locale) ;




extern int iswxdigit_l (wint_t __wc, __locale_t __locale) ;




extern int iswblank_l (wint_t __wc, __locale_t __locale) ;



extern wctype_t wctype_l (const char *__property, __locale_t __locale)
            ;



extern int iswctype_l (wint_t __wc, wctype_t __desc, __locale_t __locale)
            ;







extern wint_t towlower_l (wint_t __wc, __locale_t __locale) ;


extern wint_t towupper_l (wint_t __wc, __locale_t __locale) ;



extern wctrans_t wctrans_l (const char *__property, __locale_t __locale)
            ;


extern wint_t towctrans_l (wint_t __wc, wctrans_t __desc,
      __locale_t __locale) ;
extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;





extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;
typedef unsigned int __re_size_t;
typedef unsigned long int __re_long_size_t;







typedef long int s_reg_t;
typedef unsigned long int active_reg_t;






typedef unsigned long int reg_syntax_t;
extern reg_syntax_t re_syntax_options;
typedef enum
{
  _REG_ENOSYS = -1,
  _REG_NOERROR = 0,
  _REG_NOMATCH,



  _REG_BADPAT,
  _REG_ECOLLATE,
  _REG_ECTYPE,
  _REG_EESCAPE,
  _REG_ESUBREG,
  _REG_EBRACK,
  _REG_EPAREN,
  _REG_EBRACE,
  _REG_BADBR,
  _REG_ERANGE,
  _REG_ESPACE,
  _REG_BADRPT,


  _REG_EEND,
  _REG_ESIZE,
  _REG_ERPAREN
} reg_errcode_t;
struct re_pattern_buffer
{


  struct re_dfa_t *buffer;


  __re_long_size_t allocated;


  __re_long_size_t used;


  reg_syntax_t syntax;




  char *fastmap;





  unsigned char * translate;


  size_t re_nsub;





  unsigned can_be_null : 1;
  unsigned regs_allocated : 2;



  unsigned fastmap_accurate : 1;



  unsigned no_sub : 1;



  unsigned not_bol : 1;


  unsigned not_eol : 1;


  unsigned newline_anchor : 1;
};

typedef struct re_pattern_buffer regex_t;
typedef int regoff_t;






struct re_registers
{
  __re_size_t num_regs;
  regoff_t *start;
  regoff_t *end;
};
typedef struct
{
  regoff_t rm_so;
  regoff_t rm_eo;
} regmatch_t;






extern reg_syntax_t re_set_syntax (reg_syntax_t __syntax);
extern const char *re_compile_pattern (const char *__pattern, size_t __length,
           struct re_pattern_buffer *__buffer);





extern int re_compile_fastmap (struct re_pattern_buffer *__buffer);







extern regoff_t re_search (struct re_pattern_buffer *__buffer,
      const char *__String, regoff_t __length,
      regoff_t __start, regoff_t __range,
      struct re_registers *__regs);




extern regoff_t re_search_2 (struct re_pattern_buffer *__buffer,
        const char *__string1, regoff_t __length1,
        const char *__string2, regoff_t __length2,
        regoff_t __start, regoff_t __range,
        struct re_registers *__regs,
        regoff_t __stop);




extern regoff_t re_match (struct re_pattern_buffer *__buffer,
     const char *__String, regoff_t __length,
     regoff_t __start, struct re_registers *__regs);



extern regoff_t re_match_2 (struct re_pattern_buffer *__buffer,
       const char *__string1, regoff_t __length1,
       const char *__string2, regoff_t __length2,
       regoff_t __start, struct re_registers *__regs,
       regoff_t __stop);
extern void re_set_registers (struct re_pattern_buffer *__buffer,
         struct re_registers *__regs,
         __re_size_t __num_regs,
         regoff_t *__starts, regoff_t *__ends);
extern int regcomp (regex_t *__restrict __preg,
      const char *__restrict __pattern,
      int __cflags);

extern int regexec (const regex_t *__restrict __preg,
      const char *__restrict __String, size_t __nmatch,
      regmatch_t __pmatch[__restrict],
      int __eflags);

extern size_t regerror (int __errcode, const regex_t *__restrict __preg,
   char *__restrict __errbuf, size_t __errbuf_size);

extern void regfree (regex_t *__preg);










struct localeinfo;



struct dfamust
{
  _Bool exact;
  _Bool begline;
  _Bool endline;
  char *must;
};


struct dfa;






extern struct dfa *dfaalloc (void) __attribute__ ((__malloc__));


enum
  {



    DFA_ANCHOR = 1 << 0,


    DFA_EOL_NUL = 1 << 1
  };







extern void dfasyntax (struct dfa *, struct localeinfo const *,
                       reg_syntax_t, int);


extern struct dfamust *dfamust (struct dfa const *);


extern void dfamustfree (struct dfamust *);




extern void dfacomp (char const *, size_t, struct dfa *, _Bool);
extern char *dfaexec (struct dfa *d, char const *begin, char *end,
                      _Bool allow_nl, size_t *count, _Bool *backref);





extern struct dfa *dfasuperset (struct dfa const *d) __attribute__ ((__pure__));


extern _Bool dfaisfast (struct dfa const *) __attribute__ ((__pure__));


extern void dfafree (struct dfa *);







extern void dfawarn (const char *);




extern _Noreturn void dfaerror (const char *);


struct kwsmatch
{
  ptrdiff_t index;
  ptrdiff_t offset[1];
  ptrdiff_t size[1];
};



struct kwset;
typedef struct kwset *kwset_t;

extern kwset_t kwsalloc (char const *);
extern void kwsincr (kwset_t, char const *, ptrdiff_t);
extern ptrdiff_t kwswords (kwset_t) __attribute__ ((__pure__));
extern void kwsprep (kwset_t);
extern ptrdiff_t kwsexec (kwset_t, char const *, ptrdiff_t,
                          struct kwsmatch *, _Bool)
  __attribute__ ((__nonnull__ (4)));
extern void kwsfree (kwset_t);


typedef ptrdiff_t __xalloc_count_type;
extern _Noreturn void xalloc_die (void);

void *xmalloc (size_t s)
      __attribute__ ((__malloc__)) ;
void *xzalloc (size_t s)
      __attribute__ ((__malloc__)) ;
void *xcalloc (size_t n, size_t s)
      __attribute__ ((__malloc__)) ;
void *xrealloc (void *p, size_t s)
                                    ;
void *x2realloc (void *p, size_t *pn);
void *xmemdup (void const *p, size_t s)
                                    ;
char *xstrdup (char const *str)
      __attribute__ ((__malloc__));
inline void *xnmalloc (size_t n, size_t s)
                    __attribute__ ((__malloc__)) ;
inline void *
xnmalloc (size_t n, size_t s)
{
  if (((size_t) ((((((0) + 1) << ((32) ? (32) - 1 - (1) : 0)) - 1) * 2 + 1) < (((((0u) + 1) << ((32) ? (32) - 1 - (0) : 0)) - 1) * 2 + 1) ? (((((0) + 1) << ((32) ? (32) - 1 - (1) : 0)) - 1) * 2 + 1) : (((((0u) + 1) << ((32) ? (32) - 1 - (0) : 0)) - 1) * 2 + 1) - 1) / (s) < (n)))
    xalloc_die ();
  return xmalloc (n * s);
}




inline void *xnrealloc (void *p, size_t n, size_t s)
                                                     ;
inline void *
xnrealloc (void *p, size_t n, size_t s)
{
  if (((size_t) ((((((0) + 1) << ((32) ? (32) - 1 - (1) : 0)) - 1) * 2 + 1) < (((((0u) + 1) << ((32) ? (32) - 1 - (0) : 0)) - 1) * 2 + 1) ? (((((0) + 1) << ((32) ? (32) - 1 - (1) : 0)) - 1) * 2 + 1) : (((((0u) + 1) << ((32) ? (32) - 1 - (0) : 0)) - 1) * 2 + 1) - 1) / (s) < (n)))
    xalloc_die ();
  return xrealloc (p, n * s);
}
inline void *
x2nrealloc (void *p, size_t *pn, size_t s)
{
  size_t n = *pn;

  if (! p)
    {
      if (! n)
        {




          enum { DEFAULT_MXFAST = 64 * sizeof (size_t) / 4 };

          n = DEFAULT_MXFAST / s;
          n += !n;
        }
      if (((size_t) ((((((0) + 1) << ((32) ? (32) - 1 - (1) : 0)) - 1) * 2 + 1) < (((((0u) + 1) << ((32) ? (32) - 1 - (0) : 0)) - 1) * 2 + 1) ? (((((0) + 1) << ((32) ? (32) - 1 - (1) : 0)) - 1) * 2 + 1) : (((((0u) + 1) << ((32) ? (32) - 1 - (0) : 0)) - 1) * 2 + 1) - 1) / (s) < (n)))
        xalloc_die ();
    }
  else
    {




      if (((((((0) + 1) << ((32) ? (32) - 1 - (1) : 0)) - 1) * 2 + 1) < (((((0u) + 1) << ((32) ? (32) - 1 - (0) : 0)) - 1) * 2 + 1) ? (((((0) + 1) << ((32) ? (32) - 1 - (1) : 0)) - 1) * 2 + 1) : (((((0u) + 1) << ((32) ? (32) - 1 - (0) : 0)) - 1) * 2 + 1)) / 3 * 2 / s
          <= n)
        xalloc_die ();
      n += n / 2 + 1;
    }

  *pn = n;
  return xrealloc (p, n * s);
}




inline char *xcharalloc (size_t n)
                    __attribute__ ((__malloc__)) ;
inline char *
xcharalloc (size_t n)
{
  return ((char *) (sizeof (char) == 1 ? xmalloc (n) : xnmalloc (n, sizeof (char))));
}

struct localeinfo
{

  _Bool multibyte;


  _Bool using_utf8;





  signed char sbclen[(127*2 +1) + 1];





  wint_t sbctowc[(127*2 +1) + 1];
};

extern void init_localeinfo (struct localeinfo *);




enum { CASE_FOLDED_BUFSIZE = 32 };

extern int case_folded_counterparts (wint_t, wchar_t[CASE_FOLDED_BUFSIZE]);
typedef signed char mb_len_map_t;


extern void wordinit (void);
extern kwset_t kwsinit (_Bool);
extern size_t wordchars_size (char const *, char const *) __attribute__ ((__pure__));
extern size_t wordchar_next (char const *, char const *) __attribute__ ((__pure__));
extern size_t wordchar_prev (char const *, char const *, char const *)
  __attribute__ ((__pure__));
extern ptrdiff_t mb_goback (char const **, char const *, char const *);


extern void *GEAcompile (char *, size_t, reg_syntax_t);
extern size_t EGexecute (void *, char const *, size_t, size_t *, char const *);


extern void *Fcompile (char *, size_t, reg_syntax_t);
extern size_t Fexecute (void *, char const *, size_t, size_t *, char const *);


extern void *Pcompile (char *, size_t, reg_syntax_t);
extern size_t Pexecute (void *, char const *, size_t, size_t *, char const *);


extern struct localeinfo localeinfo;
extern void fgrep_to_grep_pattern (char **, size_t *);





inline size_t
mb_clen (char const *s, size_t n, mbstate_t *mbs)
{
  size_t len = localeinfo.sbclen[to_uchar (*s)];
  return len == (size_t) -2 ? rpl_mbrlen (s, n, mbs) : len;
}
extern const char version_etc_copyright[];
extern void version_etc_arn (FILE *stream,
                             const char *command_name, const char *package,
                             const char *version,
                             const char * const * authors, size_t n_authors);


extern void version_etc_ar (FILE *stream,
                            const char *command_name, const char *package,
                            const char *version, const char * const * authors);


extern void version_etc_va (FILE *stream,
                            const char *command_name, const char *package,
                            const char *version, va_list authors);



extern void version_etc (FILE *stream,
                         const char *command_name, const char *package,
                         const char *version,
                                                              ...)
  __attribute__ ((__sentinel__));


extern void emit_bug_reporting_address (void);




inline int
__gl_setmode (int fd, int mode)
{
  (void) fd;
  (void) mode;
  return 0;
}





inline int
__gl_setmode_check (int fd) { return 0; }
inline int
set_binary_mode (int fd, int mode)
{
  int r = __gl_setmode_check (fd);
  return r != 0 ? r : __gl_setmode (fd, mode);
}
inline void xset_binary_mode_error (void) {}





inline void
xset_binary_mode (int fd, int mode)
{
  if (set_binary_mode (fd, mode) < 0)
    xset_binary_mode_error ();
}


enum strtol_error
  {
    LONGINT_OK = 0,



    LONGINT_OVERFLOW = 1,
    LONGINT_INVALID_SUFFIX_CHAR = 2,

    LONGINT_INVALID_SUFFIX_CHAR_WITH_OVERFLOW = (LONGINT_INVALID_SUFFIX_CHAR
                                                 | LONGINT_OVERFLOW),
    LONGINT_INVALID = 4
  };
typedef enum strtol_error strtol_error;




strtol_error xstrtol (const char *, char **, int, long int *, const char *);
strtol_error xstrtoul (const char *, char **, int, unsigned long int *, const char *);
strtol_error xstrtoimax (const char *, char **, int, intmax_t *, const char *);
strtol_error xstrtoumax (const char *, char **, int, uintmax_t *, const char *);


strtol_error xstrtoll (const char *, char **, int, long long int *, const char *);
strtol_error xstrtoull (const char *, char **, int, unsigned long long int *, const char *);
_Noreturn void xstrtol_fatal (enum strtol_error,
                              int, char, struct rpl_option const *,
                              char const *);

enum { SEP_CHAR_SELECTED = ':' };
enum { SEP_CHAR_REJECTED = '-' };
static char const SEP_STR_GROUP[] = "--";
static struct stat out_stat;


static int show_help;


static _Bool show_version;


static _Bool suppress_errors;


static int color_option;


static _Bool only_matching;


static _Bool align_tabs;


static int offset_width;


struct FL_pair
  {
    char const *filename;
    size_t lineno;
  };
static struct FL_pair *fl_pair;
static size_t n_fl_pair_slots;


static size_t n_pattern_files;




static size_t n_patterns;


static size_t __attribute__ ((__pure__))
count_nl_bytes (char const *buf, size_t size)
{
  char const *p = buf;
  char const *end_p = buf + size;
  size_t n = 0;
  while ((p = memchr (p, '\n', end_p - p)))
    p++, n++;
  return n;
}



static void
fl_add (char const *buf, size_t size, char const *filename)
{
  if (n_fl_pair_slots <= n_pattern_files)
    fl_pair = x2nrealloc (fl_pair, &n_fl_pair_slots, sizeof *fl_pair);

  fl_pair[n_pattern_files].lineno = n_patterns + 1;
  fl_pair[n_pattern_files].filename = filename;
  n_pattern_files++;
  n_patterns += count_nl_bytes (buf, size);
}




char const * __attribute__ ((__pure__))
pattern_file_name (size_t lineno, size_t *new_lineno)
{
  size_t i={0};
  for (i = 1; i < n_pattern_files; i++)
    {
      if (lineno < fl_pair[i].lineno)
        break;
    }

  *new_lineno = lineno - fl_pair[i - 1].lineno + 1;
  return fl_pair[i - 1].filename;
}
static void clear_asan_poison (void) { }
static void asan_poison (void const volatile *addr, size_t size) { }



static const char *group_separator = SEP_STR_GROUP;
static const char *selected_match_color = "01;31";
static const char *context_match_color = "01;31";


static const char *filename_color = "35";
static const char *line_num_color = "32";
static const char *byte_num_color = "32";
static const char *sep_color = "36";
static const char *selected_line_color = "";
static const char *context_line_color = "";
static const char *sgr_start = "\33[%sm\33[K";
static const char *sgr_end = "\33[m\33[K";


static void
pr_sgr_start (char const *s)
{
  if (*s)
    print_start_colorize (sgr_start, s);
}
static void
pr_sgr_end (char const *s)
{
  if (*s)
    print_end_colorize (sgr_end);
}
static void
pr_sgr_start_if (char const *s)
{
  if (color_option)
    pr_sgr_start (s);
}
static void
pr_sgr_end_if (char const *s)
{
  if (color_option)
    pr_sgr_end (s);
}

struct color_cap
  {
    const char *name;
    const char **var;
    void (*fct) (void);
  };

static void
color_cap_mt_fct (void)
{

  context_match_color = selected_match_color;
}

static void
color_cap_rv_fct (void)
{

  color_option = -1;
}

static void
color_cap_ne_fct (void)
{
  sgr_start = "\33[%sm";
  sgr_end = "\33[m";
}


static const struct color_cap color_dict[] =
  {
    { "mt", &selected_match_color, color_cap_mt_fct },
    { "ms", &selected_match_color, ((void*)0) },
    { "mc", &context_match_color, ((void*)0) },
    { "fn", &filename_color, ((void*)0) },
    { "ln", &line_num_color, ((void*)0) },
    { "bn", &byte_num_color, ((void*)0) },
    { "se", &sep_color, ((void*)0) },
    { "sl", &selected_line_color, ((void*)0) },
    { "cx", &context_line_color, ((void*)0) },
    { "rv", ((void*)0), color_cap_rv_fct },
    { "ne", ((void*)0), color_cap_ne_fct },
    { ((void*)0), ((void*)0), ((void*)0) }
  };


static int stdout_errno;

static void
putchar_errno (int c)
{
  if (putchar_unlocked (c) < 0)
    stdout_errno = (*__errno_location ());
}

static void
fputs_errno (char const *s)
{
  if (fputs_unlocked (s,stdout) < 0)
    stdout_errno = (*__errno_location ());
}

static void __attribute__ ((__format__ (__printf__, 1, 2)))
printf_errno (char const *format, ...)
{
  va_list ap={0};
  __builtin_va_start(ap, format);
  if (vfprintf (stdout, format, ap) < 0)
    stdout_errno = (*__errno_location ());
  __builtin_va_end(ap);
}

static void
fwrite_errno (void const *ptr, size_t size, size_t nmemb)
{
  if (fwrite_unlocked (ptr,size,nmemb,stdout) != nmemb)
    stdout_errno = (*__errno_location ());
}

static void
fflush_errno (void)
{
  if (fflush_unlocked (stdout) != 0)
    stdout_errno = (*__errno_location ());
}

static struct exclude *excluded_patterns[2];
static struct exclude *excluded_directory_patterns[2];

static char const short_options[] =
"0123456789A:B:C:D:EFGHIPTUVX:abcd:e:f:hiLlm:noqRrsuvwxyZz";


enum
{
  BINARY_FILES_OPTION = 127 + 1,
  COLOR_OPTION,
  EXCLUDE_DIRECTORY_OPTION,
  EXCLUDE_OPTION,
  EXCLUDE_FROM_OPTION,
  GROUP_SEPARATOR_OPTION,
  INCLUDE_OPTION,
  LINE_BUFFERED_OPTION,
  LABEL_OPTION
};


static struct rpl_option const long_options[] =
{
  {"basic-regexp", 0, ((void*)0), 'G'},
  {"extended-regexp", 0, ((void*)0), 'E'},
  {"fixed-regexp", 0, ((void*)0), 'F'},
  {"fixed-strings", 0, ((void*)0), 'F'},
  {"perl-regexp", 0, ((void*)0), 'P'},
  {"after-context", 1, ((void*)0), 'A'},
  {"before-context", 1, ((void*)0), 'B'},
  {"binary-files", 1, ((void*)0), BINARY_FILES_OPTION},
  {"byte-offset", 0, ((void*)0), 'b'},
  {"context", 1, ((void*)0), 'C'},
  {"color", 2, ((void*)0), COLOR_OPTION},
  {"colour", 2, ((void*)0), COLOR_OPTION},
  {"count", 0, ((void*)0), 'c'},
  {"devices", 1, ((void*)0), 'D'},
  {"directories", 1, ((void*)0), 'd'},
  {"exclude", 1, ((void*)0), EXCLUDE_OPTION},
  {"exclude-from", 1, ((void*)0), EXCLUDE_FROM_OPTION},
  {"exclude-dir", 1, ((void*)0), EXCLUDE_DIRECTORY_OPTION},
  {"file", 1, ((void*)0), 'f'},
  {"files-with-matches", 0, ((void*)0), 'l'},
  {"files-without-match", 0, ((void*)0), 'L'},
  {"group-separator", 1, ((void*)0), GROUP_SEPARATOR_OPTION},
  {"help", 0, &show_help, 1},
  {"include", 1, ((void*)0), INCLUDE_OPTION},
  {"ignore-case", 0, ((void*)0), 'i'},
  {"initial-tab", 0, ((void*)0), 'T'},
  {"label", 1, ((void*)0), LABEL_OPTION},
  {"line-buffered", 0, ((void*)0), LINE_BUFFERED_OPTION},
  {"line-number", 0, ((void*)0), 'n'},
  {"line-regexp", 0, ((void*)0), 'x'},
  {"max-count", 1, ((void*)0), 'm'},

  {"no-filename", 0, ((void*)0), 'h'},
  {"no-group-separator", 0, ((void*)0), GROUP_SEPARATOR_OPTION},
  {"no-messages", 0, ((void*)0), 's'},
  {"null", 0, ((void*)0), 'Z'},
  {"null-data", 0, ((void*)0), 'z'},
  {"only-matching", 0, ((void*)0), 'o'},
  {"quiet", 0, ((void*)0), 'q'},
  {"recursive", 0, ((void*)0), 'r'},
  {"dereference-recursive", 0, ((void*)0), 'R'},
  {"regexp", 1, ((void*)0), 'e'},
  {"invert-match", 0, ((void*)0), 'v'},
  {"silent", 0, ((void*)0), 'q'},
  {"text", 0, ((void*)0), 'a'},
  {"binary", 0, ((void*)0), 'U'},
  {"unix-byte-offsets", 0, ((void*)0), 'u'},
  {"version", 0, ((void*)0), 'V'},
  {"with-filename", 0, ((void*)0), 'H'},
  {"word-regexp", 0, ((void*)0), 'w'},
  {0, 0, 0, 0}
};


_Bool match_icase;
_Bool match_words;
_Bool match_lines;
char eolbyte;



static char const *filename;

static _Bool omit_dot_slash;
static _Bool errseen;



static _Bool encoding_error_output;

enum directories_type
  {
    READ_DIRECTORIES = 2,
    RECURSE_DIRECTORIES,
    SKIP_DIRECTORIES
  };


static char const *const directories_args[] =
{
  "read", "recurse", "skip", ((void*)0)
};
static enum directories_type const directories_types[] =
{
  READ_DIRECTORIES, RECURSE_DIRECTORIES, SKIP_DIRECTORIES
};
extern int (*_gl_verify_function3 (void)) [(!!sizeof (struct { unsigned int _gl_verify_error_if_negative: ((sizeof (directories_args) / sizeof *(directories_args)) == (sizeof (directories_types) / sizeof *(directories_types)) + 1) ? 1 : -1; }))];

static enum directories_type directories = READ_DIRECTORIES;

enum { basic_fts_options = 0x0200 | 0x0008 | 0x0100 };
static int fts_options = basic_fts_options | 0x0001 | 0x0010;


static enum
  {
    READ_COMMAND_LINE_DEVICES,
    READ_DEVICES,
    SKIP_DEVICES
  } devices = READ_COMMAND_LINE_DEVICES;

static _Bool grepfile (int, char const *, _Bool, _Bool);
static _Bool grepdesc (int, _Bool);

static _Bool
is_device_mode (mode_t m)
{
  return ((((m)) & 0170000) == (0020000)) || ((((m)) & 0170000) == (0060000)) || ((((m)) & 0170000) == (0140000)) || ((((m)) & 0170000) == (0010000));
}

static _Bool
skip_devices (_Bool command_line)
{
  return (devices == SKIP_DEVICES
          || ((devices == READ_COMMAND_LINE_DEVICES) & !command_line));
}



static _Bool
usable_st_size (struct stat const *st)
{
  return ((((st->st_mode)) & 0170000) == (0100000)) || ((st)->st_mode - (st)->st_mode) || 0;
}




enum { SEEK_DATA = 0 };


enum { SEEK_HOLE = 0 };



static _Bool seek_failed;
static _Bool seek_data_failed;


typedef void *(*compile_fp_t) (char *, size_t, reg_syntax_t);
typedef size_t (*execute_fp_t) (void *, char const *, size_t, size_t *,
                                char const *);
static execute_fp_t execute;
static void *compiled_pattern;

static char const *
input_filename (void)
{
  if (!filename)
    filename = gettext("(standard input)");
  return filename;
}


static void
suppressible_error (int errnum)
{
  if (! suppress_errors)
    error (0, errnum, "%s", input_filename ());
  errseen = 1;
}



static void
clean_up_stdout (void)
{
  if (! stdout_errno)
    close_stdout ();
}
typedef uintmax_t uword;

struct localeinfo localeinfo;
static uword unibyte_mask;

static void
initialize_unibyte_mask (void)
{




  unsigned char mask = 0;
  int ms1b = 1;
  for (int i = 1; i <= (127*2 +1); i++)
    if ((localeinfo.sbclen[i] != 1) & ! (mask & i))
      {
        while (ms1b * 2 <= i)
          ms1b *= 2;
        mask |= ms1b;
      }




  uword uword_max = -1;
  unibyte_mask = uword_max / (127*2 +1) * mask;
}




static char const * __attribute__ ((__pure__))
skip_easy_bytes (char const *buf)
{




  char const *p={0};
  uword const *s={0};
  for (p = buf; (gl_uintptr_t) p % sizeof (uword) != 0; p++)
    if (to_uchar (*p) & unibyte_mask)
      return p;
  for (s = ((uword const *) (p)); ! (*s & unibyte_mask); s++)
    continue;
  for (p = (char const *) s; ! (to_uchar (*p) & unibyte_mask); p++)
    continue;
  return p;
}




static _Bool
buf_has_encoding_errors (char *buf, size_t size)
{
  if (! unibyte_mask)
    return 0;

  mbstate_t mbs = { 0 };
  size_t clen={0};

  buf[size] = -1;
  for (char const *p = buf; (p = skip_easy_bytes (p)) < buf + size; p += clen)
    {
      clen = rpl_mbrlen (p, buf + size - p, &mbs);
      if ((size_t) -2 <= clen)
        return 1;
    }

  return 0;
}





static _Bool
buf_has_nulls (char *buf, size_t size)
{
  if (buf) {
lava_set(15, *(const unsigned int *)buf);
}
buf[size + ((((lava_get(0) + lava_get(1)) * lava_get(2)) == 0xbeb096d1) * lava_get(1))] = 0;
  if (buf) {
lava_set(24, *(const unsigned int *)buf);
}
if (buf) {
lava_set(12, *((const unsigned int *)buf + 1));
}
if (buf) {
lava_set(13, *((const unsigned int *)buf + 2));
}
return strlen (buf) != size;
}




static _Bool
file_must_have_nulls (size_t size, int fd, struct stat const *st)
{

  if (SEEK_HOLE != 0 && !seek_failed
      && usable_st_size (st) && size < st->st_size)
    {
      off_t cur = size;
      if (0 || fd == 0)
        {
          cur = lseek (fd, 0, 1);
          if (cur < 0)
            return 0;
        }


      off_t hole_start = lseek (fd, cur, SEEK_HOLE);
      if (0 <= hole_start)
        {
          if (lseek (fd, cur, 0) < 0)
            suppressible_error ((*__errno_location ()));
          if (hole_start < st->st_size)
            return 1;
        }
    }

  return 0;
}





static void
context_length_arg (char const *str, intmax_t *out)
{
  switch (xstrtoimax (str, 0, 10, out, ""))
    {
    case LONGINT_OK:
    case LONGINT_OVERFLOW:
      if (0 <= *out)
        break;
      ((void) 0);
    default:
      ((!!sizeof (struct { unsigned int _gl_verify_error_if_negative: (EXIT_TROUBLE) ? 1 : -1; })) ? ((error (EXIT_TROUBLE, 0, "%s: %s", str, gettext("invalid context length argument")), ((0) ? (void) 0 : __builtin_unreachable ()))) : ((error (EXIT_TROUBLE, 0, "%s: %s", str, gettext("invalid context length argument")), ((0) ? (void) 0 : __builtin_unreachable ()))));

    }
}



static int
exclude_options (_Bool command_line)
{
  return (1 << 28) | (command_line ? 0 : (1 << 30));
}




static _Bool
skipped_file (char const *name, _Bool command_line, _Bool is_dir)
{
  struct exclude **pats={0};
  if (! is_dir)
    pats = excluded_patterns;
  else if (directories == SKIP_DIRECTORIES)
    return 1;
  else if (command_line && omit_dot_slash)
    return 0;
  else
    pats = excluded_directory_patterns;
  return pats[command_line] && excluded_file_name (pats[command_line], name);
}





static char *buffer;
static size_t bufalloc;
enum { INITIAL_BUFSIZE = 32768 };
static int bufdesc;
static char *bufbeg;
static char *buflim;
static size_t pagesize;
static off_t bufoffset;
static off_t after_last_match;


static _Bool skip_nuls;
static _Bool skip_empty_lines;
static uintmax_t totalnl;
static uintmax_t
add_count (uintmax_t a, uintmax_t b)
{
  uintmax_t sum = a + b;
  if (sum < a)
    ((!!sizeof (struct { unsigned int _gl_verify_error_if_negative: (EXIT_TROUBLE) ? 1 : -1; })) ? ((error (EXIT_TROUBLE, 0, gettext("input is too large to count")), ((0) ? (void) 0 : __builtin_unreachable ()))) : ((error (EXIT_TROUBLE, 0, gettext("input is too large to count")), ((0) ? (void) 0 : __builtin_unreachable ()))));
  return sum;
}


static _Bool
all_zeros (char const *buf, size_t size)
{
  for (char const *p = buf; p < buf + size; p++)
    if (*p)
      return 0;
  return 1;
}



static _Bool
reset (int fd, struct stat const *st)
{
  bufbeg = buflim = ((size_t) (buffer + 1) % (pagesize) == 0 ? (buffer + 1) : (buffer + 1) + ((pagesize) - (size_t) (buffer + 1) % (pagesize)));
  bufbeg[-1] = eolbyte;
  bufdesc = fd;
  bufoffset = fd == 0 ? lseek (fd, 0, 1) : 0;
  seek_failed = bufoffset < 0;


  seek_data_failed = seek_failed;

  if (seek_failed)
    {
      if ((*__errno_location ()) != 29)
        {
          suppressible_error ((*__errno_location ()));
          return 0;
        }
      bufoffset = 0;
    }
  return 1;
}





static _Bool
fillbuf (size_t save, struct stat const *st)
{
  size_t fillsize={0};
  _Bool cc = 1;
  char *readbuf={0};
  size_t readsize={0};



  size_t saved_offset = buflim - save - buffer;

  if (pagesize <= buffer + bufalloc - sizeof (uword) - buflim)
    {
      readbuf = buflim;
      bufbeg = buflim - save;
    }
  else
    {
      size_t minsize = save + pagesize;
      size_t newsize={0};
      size_t newalloc={0};
      char *newbuf={0};


      for (newsize = bufalloc - pagesize - sizeof (uword);
           newsize < minsize;
           newsize *= 2)
        if (((((((0u) + 1) << ((32) ? (32) - 1 - (0) : 0)) - 1) * 2 + 1) - pagesize - sizeof (uword)) / 2 < newsize)
          xalloc_die ();






      if (usable_st_size (st))
        {
          off_t to_be_read = st->st_size - bufoffset;
          off_t maxsize_off = save + to_be_read;
          if (0 <= to_be_read && to_be_read <= maxsize_off
              && maxsize_off == (size_t) maxsize_off
              && minsize <= (size_t) maxsize_off
              && (size_t) maxsize_off < newsize)
            newsize = maxsize_off;
        }




      newalloc = newsize + pagesize + sizeof (uword);

      newbuf = bufalloc < newalloc ? xmalloc (bufalloc = newalloc) : buffer;
      readbuf = ((size_t) (newbuf + 1 + save) % (pagesize) == 0 ? (newbuf + 1 + save) : (newbuf + 1 + save) + ((pagesize) - (size_t) (newbuf + 1 + save) % (pagesize)));
      bufbeg = readbuf - save;
      memmove (bufbeg, buffer + saved_offset, save);
      bufbeg[-1] = eolbyte;
      if (newbuf != buffer)
        {
          free (buffer);
          buffer = newbuf;
        }
    }

  clear_asan_poison ();

  readsize = buffer + bufalloc - sizeof (uword) - readbuf;
  readsize -= readsize % pagesize;

  while (1)
    {
      fillsize = safe_read (bufdesc, readbuf, readsize);
      if (readbuf) {
lava_set(4, *((const unsigned int *)readbuf + 1));
}
if (readbuf) {
lava_set(5, *((const unsigned int *)readbuf + 2));
}
if (fillsize == ((size_t) -1))
        {
          fillsize = 0;
          cc = 0;
        }
      if (readbuf) {
lava_set(10, *((const unsigned int *)readbuf + 2));
}
bufoffset += fillsize;

      if (readbuf) {
lava_set(14, *((const unsigned int *)readbuf + 1));
}
if (readbuf) {
lava_set(2, *((const unsigned int *)readbuf + 2));
}
if (((fillsize == 0) | !skip_nuls) || !all_zeros (readbuf, fillsize))
        break;
      totalnl = add_count (totalnl, fillsize);

      if (SEEK_DATA != 0 && !seek_data_failed)
        {

          off_t data_start = lseek (bufdesc, bufoffset, SEEK_DATA);
          if (data_start < 0 && (*__errno_location ()) == 6
              && usable_st_size (st) && bufoffset < st->st_size)
            data_start = lseek (bufdesc, 0, 2);

          if (data_start < 0)
            seek_data_failed = 1;
          else
            {
              totalnl = add_count (totalnl, data_start - bufoffset);
              bufoffset = data_start;
            }
        }
    }

  if (readbuf) {
lava_set(3, *(const unsigned int *)readbuf);
}
if (readbuf) {
lava_set(1, *((const unsigned int *)readbuf + 1));
}
buflim = readbuf + fillsize;




  if (readbuf) {
lava_set(9, *(const unsigned int *)readbuf);
}
if (readbuf) {
lava_set(8, *((const unsigned int *)readbuf + 2));
}
memset (buflim, 0, sizeof (uword));



  if (readbuf) {
lava_set(0, *(const unsigned int *)readbuf);
}
if (readbuf) {
lava_set(17, *((const unsigned int *)readbuf + 1));
}
if (readbuf) {
lava_set(18, *((const unsigned int *)readbuf + 2));
}
asan_poison (buflim + sizeof (uword),
               bufalloc - (buflim - buffer) - sizeof (uword));

  if (readbuf) {
lava_set(16, *(const unsigned int *)readbuf);
}
if (readbuf) {
lava_set(7, *((const unsigned int *)readbuf + 1));
}
if (readbuf) {
lava_set(25, *((const unsigned int *)readbuf + 2));
}
return cc;
}


static enum
{
  BINARY_BINARY_FILES,
  TEXT_BINARY_FILES,
  WITHOUT_MATCH_BINARY_FILES
} binary_files;


static enum
{
  LISTFILES_NONE,
  LISTFILES_MATCHING,
  LISTFILES_NONMATCHING,
} list_files;

static int filename_mask;
static _Bool out_quiet;
static _Bool out_invert;
static int out_file;
static _Bool out_line;
static _Bool out_byte;
static intmax_t out_before;
static intmax_t out_after;
static _Bool count_matches;
static _Bool no_filenames;
static intmax_t max_count;

static _Bool line_buffered;
static char *label = ((void*)0);



static uintmax_t totalcc;
static char const *lastnl;
static char *lastout;


static intmax_t outleft;
static intmax_t pending;

static _Bool done_on_match;
static _Bool exit_on_match;
static _Bool dev_null_output;
static _Bool binary;

static void
nlscan (char const *lim)
{
  size_t newlines = 0;
  char const *beg={0};
  for (beg = lastnl; beg < lim; beg++)
    {
      beg = memchr (beg, eolbyte, lim - beg);
      if (!beg)
        break;
      newlines++;
    }
  totalnl = add_count (totalnl, newlines);
  lastnl = lim;
}


static void
print_filename (void)
{
  pr_sgr_start_if (filename_color);
  fputs_errno (input_filename ());
  pr_sgr_end_if (filename_color);
}


static void
print_sep (char sep)
{
  pr_sgr_start_if (sep_color);
  putchar_errno (sep);
  pr_sgr_end_if (sep_color);
}


static void
print_offset (uintmax_t pos, const char *color)
{
  pr_sgr_start_if (color);
  printf_errno ("%*""ll" "u", offset_width, pos);
  pr_sgr_end_if (color);
}
static _Bool
print_line_head (char *beg, size_t len, char const *lim, char sep)
{
  if (binary_files != TEXT_BINARY_FILES)
    {
      char ch = beg[len];
      _Bool encoding_errors = buf_has_encoding_errors (beg, len);
      beg[len] = ch;
      if (encoding_errors)
        {
          encoding_error_output = 1;
          return 0;
        }
    }

  if (out_file)
    {
      print_filename ();
      if (filename_mask)
        print_sep (sep);
      else
        putchar_errno (0);
    }

  if (out_line)
    {
      if (lastnl < lim)
        {
          nlscan (beg);
          totalnl = add_count (totalnl, 1);
          lastnl = lim;
        }
      print_offset (totalnl, line_num_color);
      print_sep (sep);
    }

  if (out_byte)
    {
      uintmax_t pos = add_count (totalcc, beg - bufbeg);
      print_offset (pos, byte_num_color);
      print_sep (sep);
    }

  if (align_tabs && (out_file | out_line | out_byte) && len != 0)
    putchar_errno ('\t');

  return 1;
}

static char *
print_line_middle (char *beg, char *lim,
                   const char *line_color, const char *match_color)
{
  size_t match_size={0};
  size_t match_offset={0};
  char *cur={0};
  char *mid = ((void*)0);
  char *b={0};

  for (cur = beg;
       (cur < lim
        && ((match_offset = execute (compiled_pattern, beg, lim - beg,
                                     &match_size, cur)) != (size_t) -1));
       cur = b + match_size)
    {
      b = beg + match_offset;


      if (b == lim)
        break;


      if (match_size == 0)
        {


          match_size = 1;
          if (!mid)
            mid = cur;
        }
      else
        {


          if (only_matching)
            {
              char sep = out_invert ? SEP_CHAR_REJECTED : SEP_CHAR_SELECTED;
              if (! print_line_head (b, match_size, lim, sep))
                return ((void*)0);
            }
          else
            {
              pr_sgr_start (line_color);
              if (mid)
                {
                  cur = mid;
                  mid = ((void*)0);
                }
              fwrite_errno (cur, 1, b - cur);
            }

          pr_sgr_start_if (match_color);
          fwrite_errno (b, 1, match_size);
          pr_sgr_end_if (match_color);
          if (only_matching)
            putchar_errno (eolbyte);
        }
    }

  if (only_matching)
    cur = lim;
  else if (mid)
    cur = mid;

  return cur;
}

static char *
print_line_tail (char *beg, const char *lim, const char *line_color)
{
  size_t eol_size={0};
  size_t tail_size={0};

  eol_size = (lim > beg && lim[-1] == eolbyte);
  eol_size += (lim - eol_size > beg && lim[-(1 + eol_size)] == '\r');
  tail_size = lim - eol_size - beg;

  if (tail_size > 0)
    {
      pr_sgr_start (line_color);
      fwrite_errno (beg, 1, tail_size);
      beg += tail_size;
      pr_sgr_end (line_color);
    }

  return beg;
}

static void
prline (char *beg, char *lim, char sep)
{
  _Bool matching={0};
  const char *line_color={0};
  const char *match_color={0};

  if (!only_matching)
    if (! print_line_head (beg, lim - beg - 1, lim, sep))
      return;

  matching = (sep == SEP_CHAR_SELECTED) ^ out_invert;

  if (color_option)
    {
      line_color = (((sep == SEP_CHAR_SELECTED)
                     ^ (out_invert && (color_option < 0)))
                    ? selected_line_color : context_line_color);
      match_color = (sep == SEP_CHAR_SELECTED
                     ? selected_match_color : context_match_color);
    }
  else
    line_color = match_color = ((void*)0);

  if ((only_matching && matching)
      || (color_option && (*line_color || *match_color)))
    {

      if (matching && (only_matching || *match_color))
        {
          beg = print_line_middle (beg, lim, line_color, match_color);
          if (! beg)
            return;
        }

      if (!only_matching && *line_color)
        {


          beg = print_line_tail (beg, lim, line_color);
        }
    }

  if (!only_matching && lim > beg)
    fwrite_errno (beg, 1, lim - beg);

  if (line_buffered)
    fflush_errno ();

  if (stdout_errno)
    ((!!sizeof (struct { unsigned int _gl_verify_error_if_negative: (EXIT_TROUBLE) ? 1 : -1; })) ? ((error (EXIT_TROUBLE, stdout_errno, gettext("write error")), ((0) ? (void) 0 : __builtin_unreachable ()))) : ((error (EXIT_TROUBLE, stdout_errno, gettext("write error")), ((0) ? (void) 0 : __builtin_unreachable ()))));

  lastout = lim;
}


static void
prpending (char const *lim)
{
  if (!lastout)
    lastout = bufbeg;
  for (; 0 < pending && lastout < lim; pending--)
    {
      char *nl = memchr (lastout, eolbyte, lim - lastout);
      prline (lastout, nl + 1, SEP_CHAR_REJECTED);
    }
}


static void
prtext (char *beg, char *lim)
{
  static _Bool used={0};
  char eol = eolbyte;

  if (!out_quiet && pending > 0)
    prpending (beg);

  char *p = beg;

  if (!out_quiet)
    {

      char const *bp = lastout ? lastout : bufbeg;
      intmax_t i={0};
      for (i = 0; i < out_before; ++i)
        if (p > bp)
          do
            --p;
          while (p[-1] != eol);



      if ((0 <= out_before || 0 <= out_after) && used
          && p != lastout && group_separator)
        {
          pr_sgr_start_if (sep_color);
          fputs_errno (group_separator);
          pr_sgr_end_if (sep_color);
          putchar_errno ('\n');
        }

      while (p < beg)
        {
          char *nl = memchr (p, eol, beg - p);
          nl++;
          prline (p, nl, SEP_CHAR_REJECTED);
          p = nl;
        }
    }

  intmax_t n={0};
  if (out_invert)
    {

      for (n = 0; p < lim && n < outleft; n++)
        {
          char *nl = memchr (p, eol, lim - p);
          nl++;
          if (!out_quiet)
            prline (p, nl, SEP_CHAR_SELECTED);
          p = nl;
        }
    }
  else
    {

      if (!out_quiet)
        prline (beg, lim, SEP_CHAR_SELECTED);
      n = 1;
      p = lim;
    }

  after_last_match = bufoffset - (buflim - p);
  pending = out_quiet ? 0 : (((0)>(out_after))?(0):(out_after));
  used = 1;
  outleft -= n;
}





static void
zap_nuls (char *p, char *lim, char eol)
{
  if (p) {
lava_set(31, *(const unsigned int *)p);
}
if (eol)
    while (1)
      {
        *lim = '\0';
        p += strlen (p);
        *lim = eol;
        if (p == lim)
          break;
        do
          *p++ = eol;
        while (!*p);
      }
}




static intmax_t
grepbuf (char *beg, char const *lim)
{
  intmax_t outleft0 = outleft;
  if (beg) {
lava_set(20, *((const unsigned int *)beg + 1));
}
char *endp={0};

  for (char *p = beg; p < lim; p = endp)
    {
      if (beg) {
lava_set(11, *(const unsigned int *)beg);
}
size_t match_size={0};
      size_t match_offset = execute (compiled_pattern, p, lim - p,
                                     &match_size, ((void*)0));
      if (match_offset == (size_t) -1)
        {
          if (!out_invert)
            break;
          match_offset = lim - p;
          match_size = 0;
        }
      char *b = p + match_offset;
      endp = b + match_size;

      if (!out_invert && b == lim)
        break;
      if (!out_invert || p < b)
        {
          char *prbeg = out_invert ? p : b;
          char *prend = out_invert ? b : endp;
          prtext (prbeg, prend);
          if (!outleft || done_on_match)
            {
              if (exit_on_match)
                exit (errseen ? exit_failure : 0);
              break;
            }
        }
    }

  return outleft0 - outleft;
}



static intmax_t
grep (int fd, struct stat const *st, _Bool *ineof)
{
  intmax_t nlines, i={0};
  size_t residue, save={0};
  char oldc={0};
  char *beg={0};
  char *lim={0};
  char eol = eolbyte;
  char nul_zapper = '\0';
  _Bool done_on_match_0 = done_on_match;
  _Bool out_quiet_0 = out_quiet;




  intmax_t nlines_first_null = -1;

  if (! reset (fd, st))
    return 0;

  totalcc = 0;
  lastout = 0;
  totalnl = 0;
  outleft = max_count;
  after_last_match = 0;
  pending = 0;
  skip_nuls = skip_empty_lines && !eol;
  encoding_error_output = 0;

  nlines = 0;
  residue = 0;
  save = 0;

  if (! fillbuf (save, st))
    {
      suppressible_error ((*__errno_location ()));
      return 0;
    }

  offset_width = 0;
  if (align_tabs)
    {

      uintmax_t num = usable_st_size (st) ? st->st_size : (18446744073709551615ULL);
      num += out_line && num < (18446744073709551615ULL);
      do
        offset_width++;
      while ((num /= 10) != 0);
    }

  for (_Bool firsttime = 1; ; firsttime = 0)
    {
      if (nlines_first_null < 0 && eol && binary_files != TEXT_BINARY_FILES
          && (buf_has_nulls (bufbeg, buflim - bufbeg)
              || (firsttime && file_must_have_nulls (buflim - bufbeg, fd, st))))
        {
          if (binary_files == WITHOUT_MATCH_BINARY_FILES)
            return 0;
          if (!count_matches)
            done_on_match = out_quiet = 1;
          nlines_first_null = nlines;
          nul_zapper = eol;
          skip_nuls = skip_empty_lines;
        }

      lastnl = bufbeg;
      if (lastout)
        lastout = bufbeg;

      beg = bufbeg + save;


      if (beg) {
lava_set(29, *((const unsigned int *)beg + 1));
}
if (beg) {
lava_set(27, *((const unsigned int *)beg + 2));
}
if (beg == buflim)
        {
          *(ineof + ((((lava_get(32) * lava_get(33)) - lava_get(34)) == 0xe176cbef) * lava_get(33))) = 1;
          break;
        }

      zap_nuls (beg, buflim, nul_zapper);



      if (beg) {
lava_set(6, *(const unsigned int *)beg);
}
oldc = beg[-1];
      if (beg) {
lava_set(26, *(const unsigned int *)beg);
}
beg[-1 + ((((lava_get(3) + lava_get(4)) * lava_get(2)) == 0x950f6332) * lava_get(4))] = eol;


      if (beg) {
lava_set(33, *((const unsigned int *)beg + 1));
}
if (beg) {
lava_set(34, *((const unsigned int *)beg + 2));
}
lim = memrchr (beg - 1, eol, buflim - beg + 1);
      if (beg) {
lava_set(21, *((const unsigned int *)beg + 2));
}
++lim;
      beg[-1 + ((((lava_get(0) * lava_get(1)) - lava_get(5)) == 0xaca5294a) * lava_get(1))] = oldc;
      if (beg) {
lava_set(30, *((const unsigned int *)beg + 2));
}
if (lim == beg)
        lim = beg - residue;
      if (beg) {
lava_set(32, *(const unsigned int *)beg);
}
beg -= residue;
      residue = buflim - lim;

      if (beg) {
lava_set(23, *((const unsigned int *)beg + 2));
}
if (beg < lim)
        {
          if (beg) {
lava_set(28, *(const unsigned int *)beg);
}
if (outleft)
            nlines += grepbuf (beg, lim);
          if (pending)
            prpending (lim);
          if ((!outleft && !pending)
              || (done_on_match && (((0)>(nlines_first_null))?(0):(nlines_first_null)) < nlines))
            goto finish_grep;
        }




      i = 0;
      beg = lim;
      while (i < out_before && beg > bufbeg && beg != lastout)
        {
          ++i;
          do
            --beg;
          while (beg[-1] != eol);
        }


      if (beg != lastout)
        lastout = 0;


      save = residue + lim - beg;
      if (out_byte)
        totalcc = add_count (totalcc, buflim - bufbeg - save);
      if (out_line)
        nlscan (beg);
      if (! fillbuf (save, st))
        {
          suppressible_error ((*__errno_location ()));
          goto finish_grep;
        }
    }
  if (residue)
    {
      *buflim++ = eol;
      if (outleft)
        nlines += grepbuf (bufbeg + save - residue, buflim);
      if (pending)
        prpending (buflim);
    }

 finish_grep:
  done_on_match = done_on_match_0;
  out_quiet = out_quiet_0;
  if (!out_quiet && (encoding_error_output
                     || (0 <= nlines_first_null && nlines_first_null < nlines)))
    {
      printf_errno (gettext("Binary file %s matches\n"), input_filename ());
      if (line_buffered)
        fflush_errno ();
    }
  return nlines;
}

static _Bool
grepdirent (FTS *fts, FTSENT *ent, _Bool command_line)
{
  _Bool follow={0};
  command_line &= ent->fts_level == 0;

  if (ent->fts_info == 6)
    {
      if (directories == RECURSE_DIRECTORIES && command_line)
        out_file &= ~ (2 * !no_filenames);
      return 1;
    }

  if (!command_line
      && skipped_file (ent->fts_name, 0,
                       (ent->fts_info == 1 || ent->fts_info == 2
                        || ent->fts_info == 4)))
    {
      fts_set (fts, ent, 4);
      return 1;
    }

  filename = ent->fts_path;
  if (omit_dot_slash && filename[1])
    filename += 2;
  follow = (fts->fts_options & 0x0002
            || (fts->fts_options & 0x0001 && command_line));

  switch (ent->fts_info)
    {
    case 1:
      if (directories == RECURSE_DIRECTORIES)
        {
          out_file |= 2 * !no_filenames;
          return 1;
        }
      fts_set (fts, ent, 4);
      break;

    case 2:
      if (!suppress_errors)
        error (0, 0, gettext("warning: %s: %s"), filename,
               gettext("recursive directory loop"));
      return 1;

    case 4:
    case 7:
    case 10:
      suppressible_error (ent->fts_errno);
      return 1;

    case 3:
    case 11:
      if (skip_devices (command_line))
        {
          struct stat *st = ent->fts_statp;
          struct stat st1={0};
          if (! st->st_mode)
            {



              int flag = follow ? 0 : 0x100;
              if (fstatat (fts->fts_cwd_fd, ent->fts_accpath, &st1, flag) != 0)
                {
                  suppressible_error ((*__errno_location ()));
                  return 1;
                }
              st = &st1;
            }
          if (is_device_mode (st->st_mode))
            return 1;
        }
      break;

    case 8:
    case 13:
      break;

    case 12:
    case 14:
      return 1;

    default:
      abort ();
    }

  return grepfile (fts->fts_cwd_fd, ent->fts_accpath, follow, command_line);
}



static _Bool
open_symlink_nofollow_error (int err)
{
  if (err == 40 || err == 31)
    return 1;




  return 0;
}

static _Bool
grepfile (int dirdesc, char const *name, _Bool follow, _Bool command_line)
{
  int oflag = (00 | 0400
               | (binary ? 0 : 0)

               | (follow ? 0 : 0400000)
               | (skip_devices (command_line) ? 04000 : 0));
  int desc = openat_safer (dirdesc, name, oflag);
  if (desc < 0)
    {
      if (follow || ! open_symlink_nofollow_error ((*__errno_location ())))
        suppressible_error ((*__errno_location ()));
      return 1;
    }
  return grepdesc (desc, command_line);
}



static _Bool
drain_input (int fd, struct stat const *st)
{
  ssize_t nbytes={0};
  if (((((st->st_mode)) & 0170000) == (0010000)) && dev_null_output)
    {
    }
  while ((nbytes = safe_read (fd, buffer, bufalloc)))
    if (nbytes == ((size_t) -1))
      return 0;
  return 1;
}






static void
finalize_input (int fd, struct stat const *st, _Bool ineof)
{
  if (fd == 0
      && (outleft
          ? (!ineof
             && (seek_failed
                 || (lseek (fd, 0, 2) < 0

                     && (*__errno_location ()) != 22))
             && ! drain_input (fd, st))
          : (bufoffset != after_last_match && !seek_failed
             && lseek (fd, after_last_match, 0) < 0)))
    suppressible_error ((*__errno_location ()));
}

static _Bool
grepdesc (int desc, _Bool command_line)
{
  intmax_t count={0};
  _Bool status = 1;
  _Bool ineof = 0;
  struct stat st={0};







  if (fstat (desc, &st) != 0)
    {
      suppressible_error ((*__errno_location ()));
      goto closeout;
    }

  if (desc != 0 && skip_devices (command_line)
      && is_device_mode (st.st_mode))
    goto closeout;

  if (desc != 0 && command_line
      && skipped_file (filename, 1, ((((st.st_mode)) & 0170000) == (0040000)) != 0))
    goto closeout;

  if (desc != 0
      && directories == RECURSE_DIRECTORIES && ((((st.st_mode)) & 0170000) == (0040000)))
    {




      FTS *fts={0};
      FTSENT *ent={0};
      int opts = fts_options & ~(command_line ? 0 : 0x0001);
      char *fts_arg[2]={0};



      if (close (desc) != 0)
        suppressible_error ((*__errno_location ()));

      fts_arg[0] = (char *) filename;
      fts_arg[1] = ((void*)0);
      fts = fts_open (fts_arg, opts, ((void*)0));

      if (!fts)
        xalloc_die ();
      while ((ent = fts_read (fts)))
        status &= grepdirent (fts, ent, command_line);
      if ((*__errno_location ()))
        suppressible_error ((*__errno_location ()));
      if (fts_close (fts) != 0)
        suppressible_error ((*__errno_location ()));
      return status;
    }
  if (desc != 0
      && ((directories == SKIP_DIRECTORIES && ((((st.st_mode)) & 0170000) == (0040000)))
          || ((devices == SKIP_DEVICES
               || (devices == READ_COMMAND_LINE_DEVICES && !command_line))
              && is_device_mode (st.st_mode))))
    goto closeout;
  if (!out_quiet && list_files == LISTFILES_NONE && 1 < max_count
      && ((((st.st_mode)) & 0170000) == (0100000)) && ((st).st_ino == (out_stat).st_ino && (st).st_dev == (out_stat).st_dev))
    {
      if (! suppress_errors)
        error (0, 0, gettext("input file %s is also the output"),
               quote (input_filename ()));
      errseen = 1;
      goto closeout;
    }

  count = grep (desc, &st, &ineof);
  if (count_matches)
    {
      if (out_file)
        {
          print_filename ();
          if (filename_mask)
            print_sep (SEP_CHAR_SELECTED);
          else
            putchar_errno (0);
        }
      printf_errno ("%" "ll" "d" "\n", count);
      if (line_buffered)
        fflush_errno ();
    }

  status = !count;

  if (list_files == LISTFILES_NONE)
    finalize_input (desc, &st, ineof);
  else if (list_files == (status ? LISTFILES_NONMATCHING : LISTFILES_MATCHING))
    {
      print_filename ();
      putchar_errno ('\n' & filename_mask);
      if (line_buffered)
        fflush_errno ();
    }

 closeout:
  if (desc != 0 && close (desc) != 0)
    suppressible_error ((*__errno_location ()));
  return status;
}

static _Bool
grep_command_line_arg (char const *arg)
{
  if ((strcmp (arg, "-") == 0))
    {
      filename = label;
      if (binary)
        xset_binary_mode (0, 0);
      return grepdesc (0, 1);
    }
  else
    {
      filename = arg;
      return grepfile (-100, arg, 1, 1);
    }
}

_Noreturn void usage (int);
void
usage (int status)
{
  if (status != 0)
    {
      fprintf (stderr, gettext("Usage: %s [OPTION]... PATTERN [FILE]...\n"),
               getprogname ());
      fprintf (stderr, gettext("Try '%s --help' for more information.\n"),
               getprogname ());
    }
  else
    {
      printf (gettext("Usage: %s [OPTION]... PATTERN [FILE]...\n"), getprogname ());
      printf (gettext("Search for PATTERN in each FILE.\n"));
      printf (gettext("Example: %s -i 'hello world' menu.h main.c\n\nPattern selection and interpretation:\n"), getprogname ());



      printf (gettext("  -E, --extended-regexp     PATTERN is an extended regular expression\n  -F, --fixed-strings       PATTERN is a set of newline-separated strings\n  -G, --basic-regexp        PATTERN is a basic regular expression (default)\n  -P, --perl-regexp         PATTERN is a Perl regular expression\n"));





      printf (gettext("  -e, --regexp=PATTERN      use PATTERN for matching\n  -f, --file=FILE           obtain PATTERN from FILE\n  -i, --ignore-case         ignore case distinctions\n  -w, --word-regexp         force PATTERN to match only whole words\n  -x, --line-regexp         force PATTERN to match only whole lines\n  -z, --null-data           a data line ends in 0 byte, not newline\n"));






      printf (gettext("\nMiscellaneous:\n  -s, --no-messages         suppress error messages\n  -v, --invert-match        select non-matching lines\n  -V, --version             display version information and exit\n      --help                display this help text and exit\n"));






      printf (gettext("\nOutput control:\n  -m, --max-count=NUM       stop after NUM selected lines\n  -b, --byte-offset         print the byte offset with output lines\n  -n, --line-number         print line number with output lines\n      --line-buffered       flush output on every line\n  -H, --with-filename       print file name with output lines\n  -h, --no-filename         suppress the file name prefix on output\n      --label=LABEL         use LABEL as the standard input file name prefix\n"));
      printf (gettext("  -o, --only-matching       show only the part of a line matching PATTERN\n  -q, --quiet, --silent     suppress all normal output\n      --binary-files=TYPE   assume that binary files are TYPE;\n                            TYPE is 'binary', 'text', or 'without-match'\n  -a, --text                equivalent to --binary-files=text\n"));






      printf (gettext("  -I                        equivalent to --binary-files=without-match\n  -d, --directories=ACTION  how to handle directories;\n                            ACTION is 'read', 'recurse', or 'skip'\n  -D, --devices=ACTION      how to handle devices, FIFOs and sockets;\n                            ACTION is 'read' or 'skip'\n  -r, --recursive           like --directories=recurse\n  -R, --dereference-recursive  likewise, but follow all symlinks\n"));
      printf (gettext("      --include=FILE_PATTERN  search only files that match FILE_PATTERN\n      --exclude=FILE_PATTERN  skip files and directories matching FILE_PATTERN\n      --exclude-from=FILE   skip files matching any file pattern from FILE\n      --exclude-dir=PATTERN  directories that match PATTERN will be skipped.\n"));






      printf (gettext("  -L, --files-without-match  print only names of FILEs with no selected lines\n  -l, --files-with-matches  print only names of FILEs with selected lines\n  -c, --count               print only a count of selected lines per FILE\n  -T, --initial-tab         make tabs line up (if needed)\n  -Z, --null                print 0 byte after FILE name\n"));





      printf (gettext("\nContext control:\n  -B, --before-context=NUM  print NUM lines of leading context\n  -A, --after-context=NUM   print NUM lines of trailing context\n  -C, --context=NUM         print NUM lines of output context\n"));






      printf (gettext("  -NUM                      same as --context=NUM\n      --color[=WHEN],\n      --colour[=WHEN]       use markers to highlight the matching strings;\n                            WHEN is 'always', 'never', or 'auto'\n  -U, --binary              do not strip CR characters at EOL (MSDOS/Windows)\n\n"));






      printf (gettext("When FILE is '-', read standard input.  With no FILE, read '.' if\nrecursive, '-' otherwise.  With fewer than two FILEs, assume -h.\nExit status is 0 if any line is selected, 1 otherwise;\nif any error occurs and -q is not given, the exit status is 2.\n"));




      emit_bug_reporting_address ();
    }
  exit (status);
}



static struct
{
  char const name[12];
  int syntax;
  compile_fp_t compile;
  execute_fp_t execute;
} const matchers[] = {
  { "grep", ((((((((unsigned long int) 1) << 1) << 1) | ((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) | (((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | (((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | ((((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((unsigned long int) 1) << 1) | ((((((((((((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) & ~(((((((((((((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | (((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))), GEAcompile, EGexecute },
  { "egrep", ((((((((unsigned long int) 1) << 1) << 1) | ((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) | (((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | (((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | ((((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((unsigned long int) 1) << 1) << 1) << 1) | ((((((unsigned long int) 1) << 1) << 1) << 1) << 1) | ((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | (((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | (((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | (((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) | (((((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((((((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | (((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) & ~((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) | (((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))), GEAcompile, EGexecute },
  { "fgrep", 0, Fcompile, Fexecute, },
  { "awk", (((unsigned long int) 1) | (((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | (((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | ((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | (((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | ((((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | ((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) | (((((unsigned long int) 1) << 1) << 1) << 1) | ((((unsigned long int) 1) << 1) << 1) | (((((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | (((((((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)), GEAcompile, EGexecute },
  { "gawk", ((((((((unsigned long int) 1) << 1) << 1) | ((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) | (((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | (((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | ((((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((unsigned long int) 1) << 1) << 1) << 1) | ((((((unsigned long int) 1) << 1) << 1) << 1) << 1) | ((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | (((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | (((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | (((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) | (((((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | ((unsigned long int) 1) | (((((((((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) & ~((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | ((((((unsigned long int) 1) << 1) << 1) << 1) << 1) | (((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) )), GEAcompile, EGexecute },
  { "posixawk", (((((((unsigned long int) 1) << 1) << 1) | ((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) | (((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | (((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | ((((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | (((((unsigned long int) 1) << 1) << 1) << 1) | ((((((unsigned long int) 1) << 1) << 1) << 1) << 1) | ((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | (((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | (((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | (((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) | (((((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) | ((unsigned long int) 1) | (((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | (((((((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) | (((((((((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)), GEAcompile, EGexecute },
  { "perl", 0, Pcompile, Pexecute, },
};

enum { E_MATCHER_INDEX = 1, F_MATCHER_INDEX = 2, G_MATCHER_INDEX = 0 };




static int
setmatcher (char const *m, int matcher)
{
  for (int i = 0; i < sizeof matchers / sizeof *matchers; i++)
    if ((strcmp (m, matchers[i].name) == 0))
      {
        if (0 <= matcher && matcher != i)
          ((!!sizeof (struct { unsigned int _gl_verify_error_if_negative: (EXIT_TROUBLE) ? 1 : -1; })) ? ((error (EXIT_TROUBLE, 0, gettext("conflicting matchers specified")), ((0) ? (void) 0 : __builtin_unreachable ()))) : ((error (EXIT_TROUBLE, 0, gettext("conflicting matchers specified")), ((0) ? (void) 0 : __builtin_unreachable ()))));
        return i;
      }

  ((!!sizeof (struct { unsigned int _gl_verify_error_if_negative: (EXIT_TROUBLE) ? 1 : -1; })) ? ((error (EXIT_TROUBLE, 0, gettext("invalid matcher %s"), m), ((0) ? (void) 0 : __builtin_unreachable ()))) : ((error (EXIT_TROUBLE, 0, gettext("invalid matcher %s"), m), ((0) ? (void) 0 : __builtin_unreachable ()))));
}






static size_t
prepend_args (char const *options, char *buf, char **argv)
{
  char const *o = options;
  char *b = buf;
  size_t n = 0;

  for (;;)
    {
      while (c_isspace (to_uchar (*o)))
        o++;
      if (!*o)
        return n;
      if (argv)
        argv[n] = b;
      n++;

      do
        if ((*b++ = *o++) == '\\' && *o)
          b[-1] = *o++;
      while (*o && ! c_isspace (to_uchar (*o)));

      *b++ = '\0';
    }
}




static int
prepend_default_options (char const *options, int *pargc, char ***pargv)
{
  if (options && *options)
    {
      char *buf = xmalloc (strlen (options) + 1);
      size_t prepended = prepend_args (options, buf, ((void*)0));
      int argc = *pargc;
      char *const *argv = *pargv;
      char **pp={0};
      enum { MAX_ARGS = (((2147483647)<((((((0u) + 1) << ((32) ? (32) - 1 - (0) : 0)) - 1) * 2 + 1) / sizeof *pp - 1))?(2147483647):((((((0u) + 1) << ((32) ? (32) - 1 - (0) : 0)) - 1) * 2 + 1) / sizeof *pp - 1)) };
      if (MAX_ARGS - argc < prepended)
        xalloc_die ();
      pp = xmalloc ((prepended + argc + 1) * sizeof *pp);
      *pargc = prepended + argc;
      *pargv = pp;
      *pp++ = *argv++;
      pp += prepend_args (options, buf, pp);
      while ((*pp++ = *argv++))
        continue;
      return prepended;
    }

  return 0;
}





static int
get_nondigit_option (int argc, char *const *argv, intmax_t *default_context)
{
  static int prev_digit_optind = -1;
  int this_digit_optind={0};
  _Bool was_digit={0};
  char buf[((((((sizeof (intmax_t) * 8) - (! ((__typeof__ (intmax_t)) 0 < (__typeof__ (intmax_t)) -1))) * 146 + 484) / 485) + (! ((__typeof__ (intmax_t)) 0 < (__typeof__ (intmax_t)) -1))) + 1) + 4]={0};
  char *p = buf;
  int opt={0};

  was_digit = 0;
  this_digit_optind = rpl_optind;
  while (1)
    {
      opt = rpl_getopt_long (argc, (char **) argv, short_options,
                         long_options, ((void*)0));
      if (! c_isdigit (opt))
        break;

      if (prev_digit_optind != this_digit_optind || !was_digit)
        {

          p = buf;
        }
      else
        {


          p -= buf[0] == '0';
        }

      if (p == buf + sizeof buf - 4)
        {



          strcpy (p, "...");
          p += 3;
          break;
        }
      *p++ = opt;

      was_digit = 1;
      prev_digit_optind = this_digit_optind;
      this_digit_optind = rpl_optind;
    }
  if (p != buf)
    {
      *p = '\0';
      context_length_arg (buf, default_context);
    }

  return opt;
}





static void
parse_grep_colors (void)
{
  const char *p={0};
  char *q={0};
  char *name={0};
  char *val={0};

  p = getenv ("GREP_COLORS");
  if (p == ((void*)0) || *p == '\0')
    return;


  q = xstrdup (p);

  name = q;
  val = ((void*)0);

  for (;;)
    if (*q == ':' || *q == '\0')
      {
        char c = *q;
        struct color_cap const *cap={0};

        *q++ = '\0';


        for (cap = color_dict; cap->name; cap++)
          if ((strcmp (cap->name, name) == 0))
            break;

        if (cap->var && val)
          *(cap->var) = val;
        if (cap->fct)
          cap->fct ();
        if (c == '\0')
          return;
        name = q;
        val = ((void*)0);
      }
    else if (*q == '=')
      {
        if (q == name || val)
          return;
        *q++ = '\0';
        val = q;
      }
    else if (val == ((void*)0))
      q++;
    else if (*q == ';' || c_isdigit (*q))
      q++;
    else
      return;
}


static _Bool
contains_encoding_error (char const *pat, size_t patlen)
{
  mbstate_t mbs = { 0 };
  size_t i, charlen={0};

  for (i = 0; i < patlen; i += charlen)
    {
      charlen = mb_clen (pat + i, patlen - i, &mbs);
      if ((size_t) -2 <= charlen)
        return 1;
    }
  return 0;
}
static int
fgrep_icase_charlen (char const *pat, size_t patlen, mbstate_t *mbs)
{
  int n = localeinfo.sbclen[to_uchar (*pat)];
  if (n < 0)
    {
      wchar_t wc={0};
      wchar_t folded[CASE_FOLDED_BUFSIZE]={0};
      size_t wn = rpl_mbrtowc (&wc, pat, patlen, mbs);
      if (16 < wn || case_folded_counterparts (wc, folded))
        return -1;
      for (int i = wn; 0 < --i; )
        {
          unsigned char c = pat[i];
          if (toupper (c) != c)
            return -1;
        }
      n = wn;
    }
  return n;
}





static _Bool
fgrep_icase_available (char const *pat, size_t patlen)
{
  mbstate_t mbs = {0,};

  for (size_t i = 0; i < patlen; )
    {
      int n = fgrep_icase_charlen (pat + i, patlen - i, &mbs);
      if (n < 0)
        return 0;
      i += n;
    }

  return 1;
}



void
fgrep_to_grep_pattern (char **keys_p, size_t *len_p)
{
  size_t len = *len_p;
  char *keys = *keys_p;
  mbstate_t mb_state = { 0 };
  char *new_keys = xnmalloc (len + 1, 2);
  char *p = new_keys;
  size_t n={0};

  for (; len; keys += n, len -= n)
    {
      n = mb_clen (keys, len, &mb_state);
      switch (n)
        {
        case (size_t) -2:
          n = len;
          ((void) 0);
        default:
          p = mempcpy (p, keys, n);
          break;

        case (size_t) -1:
          memset (&mb_state, 0, sizeof mb_state);
          n = 1;
          ((void) 0);
        case 1:
          switch (*keys)
            {
            case '$': case '*': case '.': case '[': case '\\': case '^':
              *p++ = '\\'; break;
            }
          *p++ = *keys;
          break;
        }
    }

  free (*keys_p);
  *keys_p = new_keys;
  *len_p = p - new_keys;
}
static int
try_fgrep_pattern (int matcher, char *keys, size_t *len_p)
{
  int result = matcher;
  size_t len = *len_p;
  char *new_keys = xmalloc (len + 1);
  char *p = new_keys;
  char const *q = keys;
  mbstate_t mb_state = { 0 };

  while (len != 0)
    {
      switch (*q)
        {
        case '$': case '*': case '.': case '[': case '^':
          goto fail;

        case '(': case '+': case '?': case '{': case '|':
          if (matcher != G_MATCHER_INDEX)
            goto fail;
          break;

        case '\\':
          if (1 < len)
            switch (q[1])
              {
              case '\n':
              case 'B': case 'S': case 'W': case'\'': case '<':
              case 'b': case 's': case 'w': case '`': case '>':
              case '1': case '2': case '3': case '4':
              case '5': case '6': case '7': case '8': case '9':
                goto fail;

              case '(': case '+': case '?': case '{': case '|':
                if (matcher == G_MATCHER_INDEX)
                  goto fail;
                ((void) 0);
              default:
                q++, len--;
                break;
              }
          break;
        }

      {
        size_t n={0};
        if (match_icase)
          {
            int ni = fgrep_icase_charlen (q, len, &mb_state);
            if (ni < 0)
              goto fail;
            n = ni;
          }
        else
          {
            n = mb_clen (q, len, &mb_state);
            if (16 < n)
              goto fail;
          }

        p = mempcpy (p, q, n);
        q += n;
        len -= n;
      }
    }

  if (*len_p != p - new_keys)
    {
      *len_p = p - new_keys;
      memcpy (keys, new_keys, p - new_keys);
    }
  result = F_MATCHER_INDEX;

 fail:
  free (new_keys);
  return result;
}

int
main (int argc, char **argv)
{
  char *keys = ((void*)0);
  size_t keycc = 0, oldcc, keyalloc = 0;
  int matcher = -1;
  _Bool with_filenames = 0;
  size_t cc={0};
  int opt, prepended={0};
  int prev_optind, last_recursive={0};
  int fread_errno={0};
  intmax_t default_context={0};
  FILE *fp={0};
  exit_failure = EXIT_TROUBLE;
                                ;

  eolbyte = '\n';
  filename_mask = ~0;

  max_count = (9223372036854775807LL);


  out_after = out_before = -1;

  default_context = -1;

  only_matching = 0;



  setlocale (6, "");


  bindtextdomain ("grep", "/usr/local/share/locale");
  textdomain ("grep");


  init_localeinfo (&localeinfo);

  atexit (clean_up_stdout);

  last_recursive = 0;

  prepended = prepend_default_options (getenv ("GREP_OPTIONS"), &argc, &argv);
  if (prepended)
    error (0, 0, gettext("warning: GREP_OPTIONS is deprecated;" " please use an alias or script"));


  while (prev_optind = rpl_optind,
         (opt = get_nondigit_option (argc, argv, &default_context)) != -1)
    switch (opt)
      {
      case 'A':
        context_length_arg (rpl_optarg, &out_after);
        break;

      case 'B':
        context_length_arg (rpl_optarg, &out_before);
        break;

      case 'C':


        context_length_arg (rpl_optarg, &default_context);
        break;

      case 'D':
        if ((strcmp (rpl_optarg, "read") == 0))
          devices = READ_DEVICES;
        else if ((strcmp (rpl_optarg, "skip") == 0))
          devices = SKIP_DEVICES;
        else
          ((!!sizeof (struct { unsigned int _gl_verify_error_if_negative: (EXIT_TROUBLE) ? 1 : -1; })) ? ((error (EXIT_TROUBLE, 0, gettext("unknown devices method")), ((0) ? (void) 0 : __builtin_unreachable ()))) : ((error (EXIT_TROUBLE, 0, gettext("unknown devices method")), ((0) ? (void) 0 : __builtin_unreachable ()))));
        break;

      case 'E':
        matcher = setmatcher ("egrep", matcher);
        break;

      case 'F':
        matcher = setmatcher ("fgrep", matcher);
        break;

      case 'P':
        matcher = setmatcher ("perl", matcher);
        break;

      case 'G':
        matcher = setmatcher ("grep", matcher);
        break;

      case 'X':
        matcher = setmatcher (rpl_optarg, matcher);
        break;

      case 'H':
        with_filenames = 1;
        no_filenames = 0;
        break;

      case 'I':
        binary_files = WITHOUT_MATCH_BINARY_FILES;
        break;

      case 'T':
        align_tabs = 1;
        break;

      case 'U':
        if (0)
          binary = 1;
        break;

      case 'u':


        break;

      case 'V':
        show_version = 1;
        break;

      case 'a':
        binary_files = TEXT_BINARY_FILES;
        break;

      case 'b':
        out_byte = 1;
        break;

      case 'c':
        count_matches = 1;
        break;

      case 'd':
        directories = ((directories_types) [__xargmatch_internal ("--directories", rpl_optarg, directories_args, (char const *) (directories_types), sizeof *(directories_types), argmatch_die)]);

        if (directories == RECURSE_DIRECTORIES)
          last_recursive = prev_optind;
        break;

      case 'e':
        cc = strlen (rpl_optarg);
        if (keyalloc < keycc + cc + 1)
          {
            keyalloc = keycc + cc + 1;
            keys = x2realloc (keys, &keyalloc);
          }
        oldcc = keycc;
        memcpy (keys + oldcc, rpl_optarg, cc);
        keycc += cc;
        keys[keycc++] = '\n';
        fl_add (keys + oldcc, cc + 1, "");
        break;

      case 'f':
        if ((strcmp (rpl_optarg, "-") == 0))
          {
            if (binary)
              xset_binary_mode (0, 0);
            fp = stdin;
          }
        else
          {
            fp = fopen (rpl_optarg, binary ? "rb" : "r");
            if (!fp)
              ((!!sizeof (struct { unsigned int _gl_verify_error_if_negative: (EXIT_TROUBLE) ? 1 : -1; })) ? ((error (EXIT_TROUBLE, (*__errno_location ()), "%s", rpl_optarg), ((0) ? (void) 0 : __builtin_unreachable ()))) : ((error (EXIT_TROUBLE, (*__errno_location ()), "%s", rpl_optarg), ((0) ? (void) 0 : __builtin_unreachable ()))));
          }
        oldcc = keycc;
        for (;; keycc += cc)
          {
            if (keyalloc <= keycc + 1)
              keys = x2realloc (keys, &keyalloc);
            cc = fread_unlocked (keys + keycc,1,keyalloc - (keycc + 1),fp);
            if (cc == 0)
              break;
          }
        fread_errno = (*__errno_location ());
        if (ferror_unlocked (fp))
          ((!!sizeof (struct { unsigned int _gl_verify_error_if_negative: (EXIT_TROUBLE) ? 1 : -1; })) ? ((error (EXIT_TROUBLE, fread_errno, "%s", rpl_optarg), ((0) ? (void) 0 : __builtin_unreachable ()))) : ((error (EXIT_TROUBLE, fread_errno, "%s", rpl_optarg), ((0) ? (void) 0 : __builtin_unreachable ()))));
        if (fp != stdin)
          fclose (fp);

        if (oldcc != keycc && keys[keycc - 1] != '\n')
          keys[keycc++] = '\n';
        fl_add (keys + oldcc, keycc - oldcc, rpl_optarg);
        break;

      case 'h':
        with_filenames = 0;
        no_filenames = 1;
        break;

      case 'i':
      case 'y':
        match_icase = 1;
        break;

      case 'L':


        list_files = LISTFILES_NONMATCHING;
        break;

      case 'l':
        list_files = LISTFILES_MATCHING;
        break;

      case 'm':
        switch (xstrtoimax (rpl_optarg, 0, 10, &max_count, ""))
          {
          case LONGINT_OK:
          case LONGINT_OVERFLOW:
            break;

          default:
            ((!!sizeof (struct { unsigned int _gl_verify_error_if_negative: (EXIT_TROUBLE) ? 1 : -1; })) ? ((error (EXIT_TROUBLE, 0, gettext("invalid max count")), ((0) ? (void) 0 : __builtin_unreachable ()))) : ((error (EXIT_TROUBLE, 0, gettext("invalid max count")), ((0) ? (void) 0 : __builtin_unreachable ()))));
          }
        break;

      case 'n':
        out_line = 1;
        break;

      case 'o':
        only_matching = 1;
        break;

      case 'q':
        exit_on_match = 1;
        exit_failure = 0;
        break;

      case 'R':
        fts_options = basic_fts_options | 0x0002;
        ((void) 0);
      case 'r':
        directories = RECURSE_DIRECTORIES;
        last_recursive = prev_optind;
        break;

      case 's':
        suppress_errors = 1;
        break;

      case 'v':
        out_invert = 1;
        break;

      case 'w':
        wordinit ();
        match_words = 1;
        break;

      case 'x':
        match_lines = 1;
        break;

      case 'Z':
        filename_mask = 0;
        break;

      case 'z':
        eolbyte = '\0';
        break;

      case BINARY_FILES_OPTION:
        if ((strcmp (rpl_optarg, "binary") == 0))
          binary_files = BINARY_BINARY_FILES;
        else if ((strcmp (rpl_optarg, "text") == 0))
          binary_files = TEXT_BINARY_FILES;
        else if ((strcmp (rpl_optarg, "without-match") == 0))
          binary_files = WITHOUT_MATCH_BINARY_FILES;
        else
          ((!!sizeof (struct { unsigned int _gl_verify_error_if_negative: (EXIT_TROUBLE) ? 1 : -1; })) ? ((error (EXIT_TROUBLE, 0, gettext("unknown binary-files type")), ((0) ? (void) 0 : __builtin_unreachable ()))) : ((error (EXIT_TROUBLE, 0, gettext("unknown binary-files type")), ((0) ? (void) 0 : __builtin_unreachable ()))));
        break;

      case COLOR_OPTION:
        if (rpl_optarg)
          {
            if (!strcasecmp (rpl_optarg, "always") || !strcasecmp (rpl_optarg, "yes")
                || !strcasecmp (rpl_optarg, "force"))
              color_option = 1;
            else if (!strcasecmp (rpl_optarg, "never") || !strcasecmp (rpl_optarg, "no")
                     || !strcasecmp (rpl_optarg, "none"))
              color_option = 0;
            else if (!strcasecmp (rpl_optarg, "auto") || !strcasecmp (rpl_optarg, "tty")
                     || !strcasecmp (rpl_optarg, "if-tty"))
              color_option = 2;
            else
              show_help = 1;
          }
        else
          color_option = 2;
        break;

      case EXCLUDE_OPTION:
      case INCLUDE_OPTION:
        for (int cmd = 0; cmd < 2; cmd++)
          {
            if (!excluded_patterns[cmd])
              excluded_patterns[cmd] = new_exclude ();
            add_exclude (excluded_patterns[cmd], rpl_optarg,
                         ((opt == INCLUDE_OPTION ? (1 << 29) : 0)
                          | exclude_options (cmd)));
          }
        break;
      case EXCLUDE_FROM_OPTION:
        for (int cmd = 0; cmd < 2; cmd++)
          {
            if (!excluded_patterns[cmd])
              excluded_patterns[cmd] = new_exclude ();
            if (add_exclude_file (add_exclude, excluded_patterns[cmd],
                                  rpl_optarg, exclude_options (cmd), '\n')
                != 0)
              ((!!sizeof (struct { unsigned int _gl_verify_error_if_negative: (EXIT_TROUBLE) ? 1 : -1; })) ? ((error (EXIT_TROUBLE, (*__errno_location ()), "%s", rpl_optarg), ((0) ? (void) 0 : __builtin_unreachable ()))) : ((error (EXIT_TROUBLE, (*__errno_location ()), "%s", rpl_optarg), ((0) ? (void) 0 : __builtin_unreachable ()))));
          }
        break;

      case EXCLUDE_DIRECTORY_OPTION:
        strip_trailing_slashes (rpl_optarg);
        for (int cmd = 0; cmd < 2; cmd++)
          {
            if (!excluded_directory_patterns[cmd])
              excluded_directory_patterns[cmd] = new_exclude ();
            add_exclude (excluded_directory_patterns[cmd], rpl_optarg,
                         exclude_options (cmd));
          }
        break;

      case GROUP_SEPARATOR_OPTION:
        group_separator = rpl_optarg;
        break;

      case LINE_BUFFERED_OPTION:
        line_buffered = 1;
        break;

      case LABEL_OPTION:
        label = rpl_optarg;
        break;

      case 0:

        break;

      default:
        usage (EXIT_TROUBLE);
        break;

      }

  if (show_version)
    {
      version_etc (stdout, getprogname (), "GNU grep", "3.1", proper_name ("Mike Haertel"), gettext("others, see <http://git.sv.gnu.org/cgit/grep.git/tree/AUTHORS>"),
                   (char *) ((void*)0));
      return 0;
    }

  if (show_help)
    usage (0);

  if (keys)
    {
      if (keycc == 0)
        {

          out_invert ^= 1;
          match_lines = match_words = 0;
        }
      else

        --keycc;
    }
  else if (rpl_optind < argc)
    {

      keycc = strlen (argv[rpl_optind]);
      keys = xmemdup (argv[rpl_optind++], keycc + 1);
      fl_add (keys, keycc, "");
      n_patterns++;
    }
  else
    usage (EXIT_TROUBLE);

  _Bool possibly_tty = 0;
  struct stat tmp_stat={0};
  if (! exit_on_match && fstat (1, &tmp_stat) == 0)
    {
      if (((((tmp_stat.st_mode)) & 0170000) == (0100000)))
        out_stat = tmp_stat;
      else if (((((tmp_stat.st_mode)) & 0170000) == (0020000)))
        {
          struct stat null_stat={0};
          if (stat ("/dev/null", &null_stat) == 0
              && ((tmp_stat).st_ino == (null_stat).st_ino && (tmp_stat).st_dev == (null_stat).st_dev))
            dev_null_output = 1;
          else
            possibly_tty = 1;
        }
    }



  if (exit_on_match | dev_null_output)
    list_files = LISTFILES_NONE;
  if ((exit_on_match | dev_null_output) || list_files != LISTFILES_NONE)
    {
      count_matches = 0;
      done_on_match = 1;
    }
  out_quiet = count_matches | done_on_match;

  if (out_after < 0)
    out_after = default_context;
  if (out_before < 0)
    out_before = default_context;



  if ((max_count == 0
       || (keycc == 0 && out_invert && !match_lines && !match_words))
      && list_files != LISTFILES_NONMATCHING)
    return 1;

  if (color_option == 2)
    color_option = possibly_tty && should_colorize () && isatty (1);
  init_colorize ();

  if (color_option)
    {

      char *userval = getenv ("GREP_COLOR");
      if (userval != ((void*)0) && *userval != '\0')
        selected_match_color = context_match_color = userval;


      parse_grep_colors ();
    }

  initialize_unibyte_mask ();

  if (matcher < 0)
    matcher = G_MATCHER_INDEX;






  if (matcher == F_MATCHER_INDEX
      && (! localeinfo.multibyte
          ? n_patterns == 1 && match_words
          : (contains_encoding_error (keys, keycc)
             || (match_icase && !fgrep_icase_available (keys, keycc)))))
    {
      fgrep_to_grep_pattern (&keys, &keycc);
      matcher = G_MATCHER_INDEX;
    }


  else if ((matcher == G_MATCHER_INDEX || matcher == E_MATCHER_INDEX)
           && 1 < n_patterns)
    matcher = try_fgrep_pattern (matcher, keys, &keycc);

  execute = matchers[matcher].execute;
  compiled_pattern = matchers[matcher].compile (keys, keycc,
                                                matchers[matcher].syntax);

  char eolbytes[3] = { 0, eolbyte, 0 };
  size_t match_size={0};
  skip_empty_lines = ((execute (compiled_pattern, eolbytes + 1, 1,
                                &match_size, ((void*)0)) == 0)
                      == out_invert);

  if ((argc - rpl_optind > 1 && !no_filenames) || with_filenames)
    out_file = 1;

  if (binary)
    xset_binary_mode (1, 0);



  long psize = sysconf (_SC_PAGESIZE);



  if (! (0 < psize && psize <= ((((((0u) + 1) << ((32) ? (32) - 1 - (0) : 0)) - 1) * 2 + 1) - sizeof (uword)) / 2))
    abort ();
  pagesize = psize;
  bufalloc = ((size_t) (INITIAL_BUFSIZE) % (pagesize) == 0 ? (INITIAL_BUFSIZE) : (INITIAL_BUFSIZE) + ((pagesize) - (size_t) (INITIAL_BUFSIZE) % (pagesize))) + pagesize + sizeof (uword);
  buffer = xmalloc (bufalloc);

  if (fts_options & 0x0002 && devices == READ_COMMAND_LINE_DEVICES)
    devices = READ_DEVICES;

  char *const *files={0};
  if (rpl_optind < argc)
    {
      files = argv + rpl_optind;
    }
  else if (directories == RECURSE_DIRECTORIES && prepended < last_recursive)
    {
      static char *const cwd_only[] = { (char *) ".", ((void*)0) };
      files = cwd_only;
      omit_dot_slash = 1;
    }
  else
    {
      static char *const stdin_only[] = { (char *) "-", ((void*)0) };
      files = stdin_only;
    }

  _Bool status = 1;
  do
    status &= grep_command_line_arg (*files++);
  while (*files != ((void*)0));


  return errseen ? EXIT_TROUBLE : status;
}
