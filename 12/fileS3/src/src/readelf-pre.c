











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

typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;



__extension__
typedef long long int int64_t;




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










extern int *__errno_location (void) ;








struct flock
  {
    short int l_type;
    short int l_whence;

    __off_t l_start;
    __off_t l_len;




    __pid_t l_pid;
  };


typedef __mode_t mode_t;
typedef __pid_t pid_t;






struct timespec
  {
    __time_t tv_sec;
    __syscall_slong_t tv_nsec;
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
extern int lockf (int __fd, int __cmd, off_t __len);
extern int posix_fadvise (int __fd, off_t __offset, off_t __len,
     int __advise) ;
extern int posix_fallocate (int __fd, off_t __offset, off_t __len);


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
typedef __nlink_t nlink_t;




typedef __uid_t uid_t;
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



typedef long int s_reg_t;
typedef unsigned long int active_reg_t;






typedef unsigned long int reg_syntax_t;
extern reg_syntax_t re_syntax_options;
typedef enum
{

  REG_ENOSYS = -1,


  REG_NOERROR = 0,
  REG_NOMATCH,



  REG_BADPAT,
  REG_ECOLLATE,
  REG_ECTYPE,
  REG_EESCAPE,
  REG_ESUBREG,
  REG_EBRACK,
  REG_EPAREN,
  REG_EBRACE,
  REG_BADBR,
  REG_ERANGE,
  REG_ESPACE,
  REG_BADRPT,


  REG_EEND,
  REG_ESIZE,
  REG_ERPAREN
} reg_errcode_t;
struct re_pattern_buffer
{



  unsigned char *__buffer;


  unsigned long int __allocated;


  unsigned long int __used;


  reg_syntax_t __syntax;




  char *__fastmap;





  unsigned char * __translate;


  size_t re_nsub;





  unsigned __can_be_null : 1;
  unsigned __regs_allocated : 2;



  unsigned __fastmap_accurate : 1;



  unsigned __no_sub : 1;



  unsigned __not_bol : 1;


  unsigned __not_eol : 1;


  unsigned __newline_anchor : 1;
};

typedef struct re_pattern_buffer regex_t;


typedef int regoff_t;
typedef struct
{
  regoff_t rm_so;
  regoff_t rm_eo;
} regmatch_t;
extern int regcomp (regex_t *__restrict __preg,
      const char *__restrict __pattern,
      int __cflags);

extern int regexec (const regex_t *__restrict __preg,
      const char *__restrict __string, size_t __nmatch,
      regmatch_t __pmatch[__restrict],
      int __eflags);

extern size_t regerror (int __errcode, const regex_t *__restrict __preg,
   char *__restrict __errbuf, size_t __errbuf_size);

extern void regfree (regex_t *__preg);













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



extern clock_t clock (void) ;


extern time_t time (time_t *__timer) ;


extern double difftime (time_t __time1, time_t __time0)
     ;


extern time_t mktime (struct tm *__tp) ;





extern size_t strftime (char *__restrict __s, size_t __maxsize,
   const char *__restrict __format,
   const struct tm *__restrict __tp) ;

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
     __locale_t __loc) ;



extern struct tm *gmtime (const time_t *__timer) ;



extern struct tm *localtime (const time_t *__timer) ;





extern struct tm *gmtime_r (const time_t *__restrict __timer,
       struct tm *__restrict __tp) ;



extern struct tm *localtime_r (const time_t *__restrict __timer,
          struct tm *__restrict __tp) ;





extern char *asctime (const struct tm *__tp) ;


extern char *ctime (const time_t *__timer) ;







extern char *asctime_r (const struct tm *__restrict __tp,
   char *__restrict __buf) ;


extern char *ctime_r (const time_t *__restrict __timer,
        char *__restrict __buf) ;




extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;




extern char *tzname[2];



extern void tzset (void) ;



extern int daylight;
extern long int timezone;





extern int stime (const time_t *__when) ;
extern time_t timegm (struct tm *__tp) ;


extern time_t timelocal (struct tm *__tp) ;


extern int dysize (int __year) ;
extern int nanosleep (const struct timespec *__requested_time,
        struct timespec *__remaining);



extern int clock_getres (clockid_t __clock_id, struct timespec *__res) ;


extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp) ;


extern int clock_settime (clockid_t __clock_id, const struct timespec *__tp)
     ;






extern int clock_nanosleep (clockid_t __clock_id, int __flags,
       const struct timespec *__req,
       struct timespec *__rem);


extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) ;




extern int timer_create (clockid_t __clock_id,
    struct sigevent *__restrict __evp,
    timer_t *__restrict __timerid) ;


extern int timer_delete (timer_t __timerid) ;


extern int timer_settime (timer_t __timerid, int __flags,
     const struct itimerspec *__restrict __value,
     struct itimerspec *__restrict __ovalue) ;


extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     ;


extern int timer_getoverrun (timer_t __timerid) ;





extern int timespec_get (struct timespec *__ts, int __base)
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


struct buffer {
 int fd;
 struct stat st;
 const void *fbuf;
 size_t flen;
 off_t eoff;
 void *ebuf;
 size_t elen;
};

union VALUETYPE {
 uint8_t b;
 uint16_t h;
 uint32_t l;
 uint64_t q;
 uint8_t hs[2];
 uint8_t hl[4];
 uint8_t hq[8];
 char s[96];
 unsigned char us[96];
 float f;
 double d;
};

struct magic {

 uint16_t cont_level;
 uint8_t flag;
 uint8_t factor;


 uint8_t reln;
 uint8_t vallen;
 uint8_t type;
 uint8_t in_type;
 uint8_t in_op;
 uint8_t mask_op;

 uint8_t cond;



 uint8_t factor_op;
 int32_t offset;

 int32_t in_offset;

 uint32_t lineno;

 union {
  uint64_t _mask;
  struct {
   uint32_t _count;
   uint32_t _flags;
  } _s;
 } _u;




 union VALUETYPE value;

 char desc[64];

 char mimetype[80];

 char apple[8];

 char ext[64];
};
struct mlist {
 struct magic *magic;
 uint32_t nmagic;
 void *map;
 struct mlist *next, *prev;
};
struct level_info {
 int32_t off;
 int got_match;

 int last_match;
 int last_cond;

};



struct magic_set {
 struct mlist *mlist[2];
 struct cont {
  size_t len;
  struct level_info *li;
 } c;
 struct out {
  char *buf;
  char *pbuf;
 } o;
 uint32_t offset;

 uint32_t eoffset;
 int error;
 int flags;
 int event_flags;

 const char *file;
 size_t line;
 mode_t mode;


 struct {
  const char *s;
  size_t s_len;
  size_t offset;
  size_t rm_len;
 } search;



 union VALUETYPE ms_value;
 uint16_t indir_max;
 uint16_t name_max;
 uint16_t elf_shnum_max;
 uint16_t elf_phnum_max;
 uint16_t elf_notes_max;
 uint16_t regex_max;
 size_t bytes_max;






};


typedef unsigned long unichar;

struct stat;


 const char *file_fmttime(uint64_t, int, char *);
 struct magic_set *file_ms_alloc(int);
 void file_ms_free(struct magic_set *);
 int file_default(struct magic_set *, size_t);
 int file_buffer(struct magic_set *, int, const char *, const void *,
    size_t);
 int file_fsmagic(struct magic_set *, const char *, struct stat *);
 int file_pipe2file(struct magic_set *, int, const void *, size_t);
 int file_vprintf(struct magic_set *, const char *, va_list)
    ;
 size_t file_printedlen(const struct magic_set *);
 int file_replace(struct magic_set *, const char *, const char *);
 int file_printf(struct magic_set *, const char *, ...)
    ;
 int file_reset(struct magic_set *, int);
 int file_tryelf(struct magic_set *, const struct buffer *);
 int file_trycdf(struct magic_set *, const struct buffer *);

 int file_zmagic(struct magic_set *, const struct buffer *,
    const char *);

 int file_ascmagic(struct magic_set *, const struct buffer *,
    int);
 int file_ascmagic_with_encoding(struct magic_set *,
    const struct buffer *, unichar *, size_t, const char *, const char *, int);
 int file_encoding(struct magic_set *, const struct buffer *,
    unichar **, size_t *, const char **, const char **, const char **);
 int file_is_json(struct magic_set *, const struct buffer *);
 int file_is_tar(struct magic_set *, const struct buffer *);
 int file_softmagic(struct magic_set *, const struct buffer *,
    uint16_t *, uint16_t *, int, int);
 int file_apprentice(struct magic_set *, const char *, int);
 int buffer_apprentice(struct magic_set *, struct magic **,
    size_t *, size_t);
 int file_magicfind(struct magic_set *, const char *, struct mlist *);
 uint64_t file_signextend(struct magic_set *, struct magic *,
    uint64_t);
 void file_badread(struct magic_set *);
 void file_badseek(struct magic_set *);
 void file_oomem(struct magic_set *, size_t);
 void file_error(struct magic_set *, int, const char *, ...)
    ;
 void file_magerror(struct magic_set *, const char *, ...)
    ;
 void file_magwarn(struct magic_set *, const char *, ...)
    ;
 void file_mdump(struct magic *);
 void file_showstr(FILE *, const char *, size_t);
 size_t file_mbswidth(const char *);
 const char *file_getbuffer(struct magic_set *);
 ssize_t sread(int, void *, size_t, int);
 int file_check_mem(struct magic_set *, unsigned int);
 int file_looks_utf8(const unsigned char *, size_t, unichar *,
    size_t *);
 size_t file_pstring_length_size(const struct magic *);
 size_t file_pstring_get_length(const struct magic *, const char *);
 char * file_printable(char *, size_t, const char *);





 void buffer_init(struct buffer *, int, const void *, size_t);
 void buffer_fini(struct buffer *);
 int buffer_fill(const struct buffer *);







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



extern char *setlocale (int __category, const char *__locale) ;


extern struct lconv *localeconv (void) ;


extern __locale_t newlocale (int __category_mask, const char *__locale,
        __locale_t __base) ;
extern __locale_t duplocale (__locale_t __dataset) ;



extern void freelocale (__locale_t __dataset) ;






extern __locale_t uselocale (__locale_t __dataset) ;













typedef struct {
 const char *pat;


 locale_t old_lc_ctype;
 locale_t c_lc_ctype;



 int rc;
 regex_t rx;
} file_regex_t;

 int file_regcomp(file_regex_t *, const char *, int);
 int file_regexec(file_regex_t *, const char *, size_t, regmatch_t *,
    int);
 void file_regfree(file_regex_t *);
 void file_regerror(file_regex_t *, int, struct magic_set *);

typedef struct {
 char *buf;
 uint32_t offset;
} file_pushbuf_t;

 file_pushbuf_t *file_push_buffer(struct magic_set *);
 char *file_pop_buffer(struct magic_set *, file_pushbuf_t *);


extern const char *file_names[];
extern const size_t file_nnames;
size_t strlcpy(char *, const char *, size_t);


size_t strlcat(char *, const char *, size_t);
const char *fmtcheck(const char *, const char *)
     ;
 const char *file_getprogname(void);
 void file_setprogname(const char *);
 void file_err(int, const char *, ...)
    ;
 void file_errx(int, const char *, ...)
    ;
 void file_warn(const char *, ...)
    ;
 void file_warnx(const char *, ...)
    ;


static const char rcsid[] = "@(#)$File: readelf.c,v 1.154 2018/10/15 16:29:16 christos Exp $";


















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






typedef __useconds_t useconds_t;
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
extern int fdatasync (int __fildes);




typedef uint32_t Elf32_Addr;
typedef uint32_t Elf32_Off;
typedef uint16_t Elf32_Half;
typedef uint32_t Elf32_Word;
typedef uint8_t Elf32_Char;

typedef uint64_t Elf64_Addr;
typedef uint64_t Elf64_Off;
typedef uint64_t Elf64_Xword;
typedef uint16_t Elf64_Half;
typedef uint32_t Elf64_Word;
typedef uint8_t Elf64_Char;



typedef struct {
 Elf32_Word a_type;
 Elf32_Word a_v;
} Aux32Info;

typedef struct {
 Elf64_Xword a_type;
 Elf64_Xword a_v;
} Aux64Info;
typedef struct {
    Elf32_Char e_ident[16];
    Elf32_Half e_type;
    Elf32_Half e_machine;
    Elf32_Word e_version;
    Elf32_Addr e_entry;
    Elf32_Off e_phoff;
    Elf32_Off e_shoff;
    Elf32_Word e_flags;
    Elf32_Half e_ehsize;
    Elf32_Half e_phentsize;
    Elf32_Half e_phnum;
    Elf32_Half e_shentsize;
    Elf32_Half e_shnum;
    Elf32_Half e_shstrndx;
} Elf32_Ehdr;

typedef struct {
    Elf64_Char e_ident[16];
    Elf64_Half e_type;
    Elf64_Half e_machine;
    Elf64_Word e_version;
    Elf64_Addr e_entry;
    Elf64_Off e_phoff;
    Elf64_Off e_shoff;
    Elf64_Word e_flags;
    Elf64_Half e_ehsize;
    Elf64_Half e_phentsize;
    Elf64_Half e_phnum;
    Elf64_Half e_shentsize;
    Elf64_Half e_shnum;
    Elf64_Half e_shstrndx;
} Elf64_Ehdr;
typedef struct {
    Elf32_Word p_type;
    Elf32_Off p_offset;
    Elf32_Addr p_vaddr;
    Elf32_Addr p_paddr;
    Elf32_Word p_filesz;
    Elf32_Word p_memsz;
    Elf32_Word p_flags;
    Elf32_Word p_align;
} Elf32_Phdr;

typedef struct {
    Elf64_Word p_type;
    Elf64_Word p_flags;
    Elf64_Off p_offset;
    Elf64_Addr p_vaddr;
    Elf64_Addr p_paddr;
    Elf64_Xword p_filesz;
    Elf64_Xword p_memsz;
    Elf64_Xword p_align;
} Elf64_Phdr;
typedef struct {
    Elf32_Word sh_name;
    Elf32_Word sh_type;
    Elf32_Word sh_flags;
    Elf32_Addr sh_addr;
    Elf32_Off sh_offset;
    Elf32_Word sh_size;
    Elf32_Word sh_link;
    Elf32_Word sh_info;
    Elf32_Word sh_addralign;
    Elf32_Word sh_entsize;
} Elf32_Shdr;

typedef struct {
    Elf64_Word sh_name;
    Elf64_Word sh_type;
    Elf64_Off sh_flags;
    Elf64_Addr sh_addr;
    Elf64_Off sh_offset;
    Elf64_Off sh_size;
    Elf64_Word sh_link;
    Elf64_Word sh_info;
    Elf64_Off sh_addralign;
    Elf64_Off sh_entsize;
} Elf64_Shdr;




struct NetBSD_elfcore_procinfo {

 uint32_t cpi_version;
 uint32_t cpi_cpisize;
 uint32_t cpi_signo;
 uint32_t cpi_sigcode;
 uint32_t cpi_sigpend[4];
 uint32_t cpi_sigmask[4];
 uint32_t cpi_sigignore[4];
 uint32_t cpi_sigcatch[4];
 int32_t cpi_pid;
 int32_t cpi_ppid;
 int32_t cpi_pgrp;
 int32_t cpi_sid;
 uint32_t cpi_ruid;
 uint32_t cpi_euid;
 uint32_t cpi_svuid;
 uint32_t cpi_rgid;
 uint32_t cpi_egid;
 uint32_t cpi_svgid;
 uint32_t cpi_nlwps;
 int8_t cpi_name[32];

 int32_t cpi_siglwp;
};


typedef struct elf_note {
    Elf32_Word n_namesz;
    Elf32_Word n_descsz;
    Elf32_Word n_type;
} Elf32_Nhdr;

typedef struct {
    Elf64_Word n_namesz;
    Elf64_Word n_descsz;
    Elf64_Word n_type;
} Elf64_Nhdr;
typedef struct {
 Elf32_Word c_tag;
 union {
  Elf32_Word c_val;
  Elf32_Addr c_ptr;
 } c_un;
} Elf32_Cap;

typedef struct {
 Elf64_Xword c_tag;
 union {
  Elf64_Xword c_val;
  Elf64_Addr c_ptr;
 } c_un;
} Elf64_Cap;
typedef struct {
 Elf32_Word d_tag;
 union {
  Elf32_Addr d_ptr;
  Elf32_Word d_val;
 } d_un;
} Elf32_Dyn;

typedef struct {
 Elf64_Xword d_tag;
 union {
  Elf64_Addr d_ptr;
  Elf64_Xword d_val;
 } d_un;
} Elf64_Dyn;
typedef struct magic_set *magic_t;
magic_t magic_open(int);
void magic_close(magic_t);

const char *magic_getpath(const char *, int);
const char *magic_file(magic_t, const char *);
const char *magic_descriptor(magic_t, int);
const char *magic_buffer(magic_t, const void *, size_t);

const char *magic_error(magic_t);
int magic_getflags(magic_t);
int magic_setflags(magic_t, int);

int magic_version(void);
int magic_load(magic_t, const char *);
int magic_load_buffers(magic_t, void **, size_t *, size_t);

int magic_compile(magic_t, const char *);
int magic_check(magic_t, const char *);
int magic_list(magic_t, const char *);
int magic_errno(magic_t);
int magic_setparam(magic_t, int, const void *);
int magic_getparam(magic_t, int, void *);


static int dophn_core(struct magic_set *, int, int, int, off_t, int, size_t,
    off_t, int *, uint16_t *);

static int dophn_exec(struct magic_set *, int, int, int, off_t, int, size_t,
    off_t, int, int *, uint16_t *);
static int doshn(struct magic_set *, int, int, int, off_t, int, size_t,
    off_t, int, int, int *, uint16_t *);
static size_t donote(struct magic_set *, void *, size_t, size_t, int,
    int, size_t, int *, uint16_t *, int, off_t, int, off_t);





static uint16_t getu16(int, uint16_t);
static uint32_t getu32(int, uint32_t);
static uint64_t getu64(int, uint64_t);





static int
toomany(struct magic_set *ms, const char *name, uint16_t num)
{
 if (file_printf(ms, ", too many %s (%u)", name, num) == -1)
  return -1;
 return 1;
}

static uint16_t
getu16(int swap, uint16_t value)
{
 union {
  uint16_t ui;
  char c[2];
 } retval, tmpval={0};

 if (swap) {
  tmpval.ui = value;

  retval.c[0] = tmpval.c[1];
  retval.c[1] = tmpval.c[0];

  return retval.ui;
 } else
  return value;
}

static uint32_t
getu32(int swap, uint32_t value)
{
 union {
  uint32_t ui;
  char c[4];
 } retval, tmpval={0};

 if (swap) {
  tmpval.ui = value;

  retval.c[0] = tmpval.c[3];
  retval.c[1] = tmpval.c[2];
  retval.c[2] = tmpval.c[1];
  retval.c[3] = tmpval.c[0];

  return retval.ui;
 } else
  return value;
}

static uint64_t
getu64(int swap, uint64_t value)
{
 union {
  uint64_t ui;
  char c[8];
 } retval, tmpval={0};

 if (swap) {
  tmpval.ui = value;

  retval.c[0] = tmpval.c[7];
  retval.c[1] = tmpval.c[6];
  retval.c[2] = tmpval.c[5];
  retval.c[3] = tmpval.c[4];
  retval.c[4] = tmpval.c[3];
  retval.c[5] = tmpval.c[2];
  retval.c[6] = tmpval.c[1];
  retval.c[7] = tmpval.c[0];

  return retval.ui;
 } else
  return value;
}
static const size_t prpsoffsets32[] = {





 100,
 84,

 44,
 28,

 8,
};

static const size_t prpsoffsets64[] = {





 136,
 120,

 56,
 40,

 16,
};
static const char os_style_names[][8] = {
 "SVR4",
 "FreeBSD",
 "NetBSD",
};
static int
dophn_core(struct magic_set *ms, int clazz, int swap, int fd, off_t off,
    int num, size_t size, off_t fsize, int *flags, uint16_t *notecount)
{
 Elf32_Phdr ph32={0};
 Elf64_Phdr ph64={0};
 size_t offset, len={0};
 unsigned char nbuf[
                   8192
                         ]={0};
 ssize_t bufsize={0};
 off_t ph_off = off;
 int ph_num = num;

 if (num == 0) {
  if (file_printf(ms, ", no program header") == -1)
   return -1;
  return 0;
 }
 if (size != (clazz == 1 ? sizeof(ph32) : sizeof(ph64))) {
  if (file_printf(ms, ", corrupted program header size") == -1)
   return -1;
  return 0;
 }




 for ( ; num; num--) {
  if (pread(fd, (clazz == 1 ? ((void *)(&ph32)) : ((void *)(&ph64))), (clazz == 1 ? sizeof(ph32) : sizeof(ph64)), off) <
      ((ssize_t)((clazz == 1 ? sizeof(ph32) : sizeof(ph64))))) {
   file_badread(ms);
   return -1;
  }
  off += size;

  if (fsize != ((off_t)(-1)) && ((off_t)((clazz == 1 ? getu32(swap, ph32.p_offset) : getu64(swap, ph64.p_offset)))) > fsize) {

   continue;
  }

  if ((clazz == 1 ? getu32(swap, ph32.p_type) : getu32(swap, ph64.p_type)) != 4)
   continue;





  len = ((size_t)((clazz == 1 ? getu32(swap, ph32.p_filesz) : getu64(swap, ph64.p_filesz)))) < sizeof(nbuf) ? ((size_t)((clazz == 1 ? getu32(swap, ph32.p_filesz) : getu64(swap, ph64.p_filesz)))) : sizeof(nbuf);
  if ((bufsize = pread(fd, nbuf, len, ((off_t)((clazz == 1 ? getu32(swap, ph32.p_offset) : getu64(swap, ph64.p_offset)))))) == -1) {
   file_badread(ms);
   return -1;
  }
  offset = 0;
  for (;;) {
   if (offset >= (size_t)bufsize)
    break;
   offset = donote(ms, nbuf, offset, (size_t)bufsize,
       clazz, swap, 4, flags, notecount, fd, ph_off,
       ph_num, fsize);
   if (offset == 0)
    break;

  }
 }
 return 0;
}


static void
do_note_netbsd_version(struct magic_set *ms, int swap, void *v)
{
 uint32_t desc={0};
 memcpy(&desc, v, sizeof(desc));
 desc = getu32(swap, desc);

 if (file_printf(ms, ", for NetBSD") == -1)
  return;
 if (desc > 100000000U) {
  uint32_t ver_patch = (desc / 100) % 100;
  uint32_t ver_rel = (desc / 10000) % 100;
  uint32_t ver_min = (desc / 1000000) % 100;
  uint32_t ver_maj = desc / 100000000;

  if (file_printf(ms, " %u.%u", ver_maj, ver_min) == -1)
   return;
  if (ver_rel == 0 && ver_patch != 0) {
   if (file_printf(ms, ".%u", ver_patch) == -1)
    return;
  } else if (ver_rel != 0) {
   while (ver_rel > 26) {
    if (file_printf(ms, "Z") == -1)
     return;
    ver_rel -= 26;
   }
   if (file_printf(ms, "%c", 'A' + ver_rel - 1)
       == -1)
    return;
  }
 }
}

static void
do_note_freebsd_version(struct magic_set *ms, int swap, void *v)
{
 uint32_t desc={0};

 memcpy(&desc, v, sizeof(desc));
 desc = getu32(swap, desc);
 if (file_printf(ms, ", for FreeBSD") == -1)
  return;
 if (desc == 460002) {
  if (file_printf(ms, " 4.6.2") == -1)
   return;
 } else if (desc < 460100) {
  if (file_printf(ms, " %d.%d", desc / 100000,
      desc / 10000 % 10) == -1)
   return;
  if (desc / 1000 % 10 > 0)
   if (file_printf(ms, ".%d", desc / 1000 % 10) == -1)
    return;
  if ((desc % 1000 > 0) || (desc % 100000 == 0))
   if (file_printf(ms, " (%d)", desc) == -1)
    return;
 } else if (desc < 500000) {
  if (file_printf(ms, " %d.%d", desc / 100000,
      desc / 10000 % 10 + desc / 1000 % 10) == -1)
   return;
  if (desc / 100 % 10 > 0) {
   if (file_printf(ms, " (%d)", desc) == -1)
    return;
  } else if (desc / 10 % 10 > 0) {
   if (file_printf(ms, ".%d", desc / 10 % 10) == -1)
    return;
  }
 } else {
  if (file_printf(ms, " %d.%d", desc / 100000,
      desc / 1000 % 100) == -1)
   return;
  if ((desc / 100 % 10 > 0) ||
      (desc % 100000 / 100 == 0)) {
   if (file_printf(ms, " (%d)", desc) == -1)
    return;
  } else if (desc / 10 % 10 > 0) {
   if (file_printf(ms, ".%d", desc / 10 % 10) == -1)
    return;
  }
 }
}

static int

do_bid_note(struct magic_set *ms, unsigned char *nbuf, uint32_t type,
    int swap , uint32_t namesz, uint32_t descsz,
    size_t noff, size_t doff, int *flags)
{
 if (namesz == 4 && strcmp((char *)&nbuf[noff], "GNU") == 0 &&
     type == 3 && (descsz >= 4 && descsz <= 20)) {
  uint8_t desc[20]={0};
  const char *btype={0};
  uint32_t i={0};
  *flags |= 0x0010;
  switch (descsz) {
  case 8:
      btype = "xxHash";
      break;
  case 16:
      btype = "md5/uuid";
      break;
  case 20:
      btype = "sha1";
      break;
  default:
      btype = "unknown";
      break;
  }
  if (file_printf(ms, ", BuildID[%s]=", btype) == -1)
   return 1;
  memcpy(desc, &nbuf[doff], descsz);
  for (i = 0; i < descsz; i++)
      if (file_printf(ms, "%02x", desc[i]) == -1)
   return 1;
  return 1;
 }
 if (namesz == 4 && strcmp((char *)&nbuf[noff], "Go") == 0 &&
     type == 4 && descsz < 128) {
  if (file_printf(ms, ", Go BuildID=%s",
      (char *)&nbuf[doff]) == -1)
   return -1;
  return 1;
 }
 return 0;
}

static int
do_os_note(struct magic_set *ms, unsigned char *nbuf, uint32_t type,
    int swap, uint32_t namesz, uint32_t descsz,
    size_t noff, size_t doff, int *flags)
{
 if (namesz == 5 && strcmp((char *)&nbuf[noff], "SuSE") == 0 &&
  type == 1 && descsz == 2) {
  *flags |= 0x0008;
  if (file_printf(ms, ", for SuSE %d.%d", nbuf[doff],
      nbuf[doff + 1]) == -1)
      return -1;
     return 1;
 }

 if (namesz == 4 && strcmp((char *)&nbuf[noff], "GNU") == 0 &&
     type == 1 && descsz == 16) {
  uint32_t desc[4]={0};
  memcpy(desc, &nbuf[doff], sizeof(desc));

  *flags |= 0x0008;
  if (file_printf(ms, ", for GNU/") == -1)
   return 1;
  switch (getu32(swap, desc[0])) {
  case 0:
   if (file_printf(ms, "Linux") == -1)
    return 1;
   break;
  case 1:
   if (file_printf(ms, "Hurd") == -1)
    return 1;
   break;
  case 2:
   if (file_printf(ms, "Solaris") == -1)
    return 1;
   break;
  case 3:
   if (file_printf(ms, "kFreeBSD") == -1)
    return 1;
   break;
  case 4:
   if (file_printf(ms, "kNetBSD") == -1)
    return 1;
   break;
  default:
   if (file_printf(ms, "<unknown>") == -1)
    return 1;
  }
  if (file_printf(ms, " %d.%d.%d", getu32(swap, desc[1]),
      getu32(swap, desc[2]), getu32(swap, desc[3])) == -1)
   return 1;
  return 1;
 }

 if (namesz == 7 && strcmp((char *)&nbuf[noff], "NetBSD") == 0) {
      if (type == 1 && descsz == 4) {
   *flags |= 0x0008;
   do_note_netbsd_version(ms, swap, &nbuf[doff]);
   return 1;
  }
 }

 if (namesz == 8 && strcmp((char *)&nbuf[noff], "FreeBSD") == 0) {
      if (type == 1 && descsz == 4) {
   *flags |= 0x0008;
   do_note_freebsd_version(ms, swap, &nbuf[doff]);
   return 1;
  }
 }

 if (namesz == 8 && strcmp((char *)&nbuf[noff], "OpenBSD") == 0 &&
     type == 1 && descsz == 4) {
  *flags |= 0x0008;
  if (file_printf(ms, ", for OpenBSD") == -1)
   return 1;

  return 1;
 }

 if (namesz == 10 && strcmp((char *)&nbuf[noff], "DragonFly") == 0 &&
     type == 1 && descsz == 4) {
  uint32_t desc={0};
  *flags |= 0x0008;
  if (file_printf(ms, ", for DragonFly") == -1)
   return 1;
  memcpy(&desc, &nbuf[doff], sizeof(desc));
  desc = getu32(swap, desc);
  if (file_printf(ms, " %d.%d.%d", desc / 100000,
      desc / 10000 % 10, desc % 10000) == -1)
   return 1;
  return 1;
 }
 return 0;
}

static int
do_pax_note(struct magic_set *ms, unsigned char *nbuf, uint32_t type,
    int swap, uint32_t namesz, uint32_t descsz,
    size_t noff, size_t doff, int *flags)
{
 if (namesz == 4 && strcmp((char *)&nbuf[noff], "PaX") == 0 &&
     type == 3 && descsz == 4) {
  static const char *pax[] = {
      "+mprotect",
      "-mprotect",
      "+segvguard",
      "-segvguard",
      "+ASLR",
      "-ASLR",
  };
  uint32_t desc={0};
  size_t i={0};
  int did = 0;

  *flags |= 0x0040;
  memcpy(&desc, &nbuf[doff], sizeof(desc));
  desc = getu32(swap, desc);

  if (desc && file_printf(ms, ", PaX: ") == -1)
   return 1;

  for (i = 0; i < (sizeof(pax) / sizeof(pax[0])); i++) {
   if (((1 << (int)i) & desc) == 0)
    continue;
   if (file_printf(ms, "%s%s", did++ ? "," : "",
       pax[i]) == -1)
    return 1;
  }
  return 1;
 }
 return 0;
}

static int
do_core_note(struct magic_set *ms, unsigned char *nbuf, uint32_t type,
    int swap, uint32_t namesz, uint32_t descsz,
    size_t noff, size_t doff, int *flags, size_t size, int clazz)
{

 int os_style = -1;
 if ((namesz == 4 && strncmp((char *)&nbuf[noff], "CORE", 4) == 0) ||
     (namesz == 5 && strcmp((char *)&nbuf[noff], "CORE") == 0)) {
  os_style = 0;
 }

 if ((namesz == 8 && strcmp((char *)&nbuf[noff], "FreeBSD") == 0)) {
  os_style = 1;
 }

 if ((namesz >= 11 && strncmp((char *)&nbuf[noff], "NetBSD-CORE", 11)
     == 0)) {
  os_style = 2;
 }

 if (os_style != -1 && (*flags & 0x0020) == 0) {
  if (file_printf(ms, ", %s-style", os_style_names[os_style])
      == -1)
   return 1;
  *flags |= 0x0020;
  *flags |= os_style;
 }

 switch (os_style) {
 case 2:
  if (type == 1) {
   char sbuf[512]={0};
   struct NetBSD_elfcore_procinfo pi={0};
   memset(&pi, 0, sizeof(pi));
   memcpy(&pi, nbuf + doff, descsz);

   if (file_printf(ms, ", from '%.31s', pid=%u, uid=%u, "
       "gid=%u, nlwps=%u, lwp=%u (signal %u/code %u)",
       file_printable(sbuf, sizeof(sbuf),
       ((char *)(pi.cpi_name))),
       getu32(swap, (uint32_t)pi.cpi_pid),
       getu32(swap, pi.cpi_euid),
       getu32(swap, pi.cpi_egid),
       getu32(swap, pi.cpi_nlwps),
       getu32(swap, (uint32_t)pi.cpi_siglwp),
       getu32(swap, pi.cpi_signo),
       getu32(swap, pi.cpi_sigcode)) == -1)
    return 1;

   *flags |= 0x0004;
   return 1;
  }
  break;

 case 1:
  if (type == 3 && *flags & 0x0800) {
   size_t argoff, pidoff={0};

   if (clazz == 1)
    argoff = 4 + 4 + 17;
   else
    argoff = 4 + 4 + 8 + 17;
   if (file_printf(ms, ", from '%.80s'", nbuf + doff +
       argoff) == -1)
    return 1;
   pidoff = argoff + 81 + 2;
   if (doff + pidoff + 4 <= size) {
    if (file_printf(ms, ", pid=%u",
        getu32(swap, *(uint32_t *)(nbuf + doff + pidoff))
                       ) == -1)
     return 1;
   }
   *flags |= 0x0004;
  }
  break;

 default:
  if (type == 3 && *flags & 0x0800) {
   size_t i, j={0};
   unsigned char c={0};
   for (i = 0; i < (clazz == 1 ? (sizeof(prpsoffsets32) / sizeof(prpsoffsets32[0])) : (sizeof(prpsoffsets64) / sizeof(prpsoffsets64[0]))); i++) {
    unsigned char *cname, *cp={0};
    size_t reloffset = (clazz == 1 ? prpsoffsets32[i] : prpsoffsets64[i]);
    size_t noffset = doff + reloffset;
    size_t k={0};
    for (j = 0; j < 16; j++, noffset++,
        reloffset++) {





     if (noffset >= size)
      goto tryanother;







     if (reloffset >= descsz)
      goto tryanother;

     c = nbuf[noffset];
     if (c == '\0') {







      if (j == 0)
       goto tryanother;
      else
       break;
     } else {





      if (!
          ((*__ctype_b_loc ())[(int) ((
          c
          ))] & (unsigned short int) _ISprint) 
                     || (strchr("'\"`", (c)) != 
                        ((void *)0)
                        ))
       goto tryanother;
     }
    }
    for (k = i + 1 ; k < (clazz == 1 ? (sizeof(prpsoffsets32) / sizeof(prpsoffsets32[0])) : (sizeof(prpsoffsets64) / sizeof(prpsoffsets64[0]))); k++) {
     size_t no={0};
     int adjust = 1;
     if ((clazz == 1 ? prpsoffsets32[k] : prpsoffsets64[k]) >= (clazz == 1 ? prpsoffsets32[i] : prpsoffsets64[i]))
      continue;
     for (no = doff + (clazz == 1 ? prpsoffsets32[k] : prpsoffsets64[k]);
          no < doff + (clazz == 1 ? prpsoffsets32[i] : prpsoffsets64[i]); no++)
      adjust = adjust
               && 
                 ((*__ctype_b_loc ())[(int) ((
                 nbuf[no]
                 ))] & (unsigned short int) _ISprint)
                                  ;
     if (adjust)
      i = k;
    }

    cname = (unsigned char *)
        &nbuf[doff + (clazz == 1 ? prpsoffsets32[i] : prpsoffsets64[i])];
    for (cp = cname; cp < nbuf + size && *cp
        && 
          ((*__ctype_b_loc ())[(int) ((
          *cp
          ))] & (unsigned short int) _ISprint)
                      ; cp++)
     continue;




    while (cp > cname && 
                        ((*__ctype_b_loc ())[(int) ((
                        cp[-1]
                        ))] & (unsigned short int) _ISspace)
                                       )
     cp--;
    if (file_printf(ms, ", from '%.*s'",
        (int)(cp - cname), cname) == -1)
     return 1;
    *flags |= 0x0004;
    return 1;

   tryanother:
    ;
   }
  }
  break;
 }

 return 0;
}

static off_t
get_offset_from_virtaddr(struct magic_set *ms, int swap, int clazz, int fd,
    off_t off, int num, off_t fsize, uint64_t virtaddr)
{
 Elf32_Phdr ph32={0};
 Elf64_Phdr ph64={0};





 for ( ; num; num--) {
  if (pread(fd, (clazz == 1 ? ((void *)(&ph32)) : ((void *)(&ph64))), (clazz == 1 ? sizeof(ph32) : sizeof(ph64)), off) < (ssize_t)(clazz == 1 ? sizeof(ph32) : sizeof(ph64))) {
   file_badread(ms);
   return -1;
  }
  off += (clazz == 1 ? sizeof(ph32) : sizeof(ph64));

  if (fsize != ((off_t)(-1)) && ((off_t)((clazz == 1 ? getu32(swap, ph32.p_offset) : getu64(swap, ph64.p_offset)))) > fsize) {

   continue;
  }

  if (virtaddr >= ((size_t)((clazz == 1 ? ((off_t)((ph32.p_vaddr ? getu32(swap, ph32.p_vaddr) : 4))) : ((off_t)((ph64.p_vaddr ? getu64(swap, ph64.p_vaddr) : 4)))))) && virtaddr < ((size_t)((clazz == 1 ? ((off_t)((ph32.p_vaddr ? getu32(swap, ph32.p_vaddr) : 4))) : ((off_t)((ph64.p_vaddr ? getu64(swap, ph64.p_vaddr) : 4)))))) + ((size_t)((clazz == 1 ? getu32(swap, ph32.p_filesz) : getu64(swap, ph64.p_filesz)))))
   return ((off_t)((clazz == 1 ? getu32(swap, ph32.p_offset) : getu64(swap, ph64.p_offset)))) + (virtaddr - ((size_t)((clazz == 1 ? ((off_t)((ph32.p_vaddr ? getu32(swap, ph32.p_vaddr) : 4))) : ((off_t)((ph64.p_vaddr ? getu64(swap, ph64.p_vaddr) : 4)))))));
 }
 return 0;
}

static size_t
get_string_on_virtaddr(struct magic_set *ms,
    int swap, int clazz, int fd, off_t ph_off, int ph_num,
    off_t fsize, uint64_t virtaddr, char *buf, ssize_t buflen)
{
 char *bptr={0};
 off_t offset={0};

 if (buflen == 0)
  return 0;

 offset = get_offset_from_virtaddr(ms, swap, clazz, fd, ph_off, ph_num,
     fsize, virtaddr);
 if (offset < 0 ||
     (buflen = pread(fd, buf, ((size_t)(buflen)), offset)) <= 0) {
  file_badread(ms);
  return 0;
 }

 buf[buflen - 1] = '\0';



 for (bptr = buf; *bptr && 
                          ((*__ctype_b_loc ())[(int) ((
                          (unsigned char)*bptr
                          ))] & (unsigned short int) _ISprint)
                                                       ; bptr++)
  continue;
 if (*bptr != '\0')
  return 0;

 return bptr - buf;
}



static int
do_auxv_note(struct magic_set *ms, unsigned char *nbuf, uint32_t type,
    int swap, uint32_t namesz ,
    uint32_t descsz ,
    size_t noff , size_t doff,
    int *flags, size_t size , int clazz,
    int fd, off_t ph_off, int ph_num, off_t fsize)
{

 Aux32Info auxv32={0};
 Aux64Info auxv64={0};
 size_t elsize = (clazz == 1 ? sizeof(auxv32) : sizeof(auxv64));
 const char *tag={0};
 int is_string={0};
 size_t nval={0};

 if ((*flags & (0x0800|0x0020)) !=
     (0x0800|0x0020))
  return 0;

 switch (*flags & 0x0003) {
 case 0:
  if (type != 6)
   return 0;
  break;
 default:
  return 0;
 }

 *flags |= 0x1000;

 nval = 0;
 for (size_t off = 0; off + elsize <= descsz; off += elsize) {
  memcpy((clazz == 1 ? ((void *)(&auxv32)) : ((void *)(&auxv64))), &nbuf[doff + off], (clazz == 1 ? sizeof(auxv32) : sizeof(auxv64)));

  if (nval++ >= 50) {
   file_error(ms, 0, "Too many ELF Auxv elements");
   return 1;
  }

  switch((clazz == 1 ? getu32(swap, auxv32.a_type) : getu64(swap, auxv64.a_type))) {
  case 31:
   is_string = 1;
   tag = "execfn";
   break;
  case 15:
   is_string = 1;
   tag = "platform";
   break;
  case 11:
   is_string = 0;
   tag = "real uid";
   break;
  case 13:
   is_string = 0;
   tag = "real gid";
   break;
  case 12:
   is_string = 0;
   tag = "effective uid";
   break;
  case 14:
   is_string = 0;
   tag = "effective gid";
   break;
  default:
   is_string = 0;
   tag = 
        ((void *)0)
            ;
   break;
  }

  if (tag == 
            ((void *)0)
                )
   continue;

  if (is_string) {
   char buf[256]={0};
   ssize_t buflen={0};
   buflen = get_string_on_virtaddr(ms, swap, clazz, fd,
       ph_off, ph_num, fsize, (clazz == 1 ? getu32(swap, auxv32.a_v) : getu64(swap, auxv64.a_v)), buf, sizeof(buf));

   if (buflen == 0)
    continue;

   if (file_printf(ms, ", %s: '%s'", tag, buf) == -1)
    return 0;
  } else {
   if (file_printf(ms, ", %s: %d", tag, (int) (clazz == 1 ? getu32(swap, auxv32.a_v) : getu64(swap, auxv64.a_v)))
       == -1)
    return 0;
  }
 }
 return 1;



}

static size_t
dodynamic(struct magic_set *ms, void *vbuf, size_t offset, size_t size,
    int clazz, int swap)
{
 Elf32_Dyn dh32={0};
 Elf64_Dyn dh64={0};
 unsigned char *dbuf = ((unsigned char *)(vbuf));

 if ((clazz == 1 ? sizeof(dh32) : sizeof(dh64)) + offset > size) {



  return (clazz == 1 ? sizeof(dh32) : sizeof(dh64)) + offset;
 }

 memcpy((clazz == 1 ? ((void *)(&dh32)) : ((void *)(&dh64))), &dbuf[offset], (clazz == 1 ? sizeof(dh32) : sizeof(dh64)));
 offset += (clazz == 1 ? sizeof(dh32) : sizeof(dh64));

 switch ((clazz == 1 ? getu32(swap, dh32.d_tag) : getu64(swap, dh64.d_tag))) {
 case 0x6ffffffb:
  if ((clazz == 1 ? getu32(swap, dh32.d_un.d_val) : getu64(swap, dh64.d_un.d_val)) == 0x08000000)
   ms->mode |= 0111;
  else
   ms->mode &= ~0111;
  break;
 default:
  break;
 }
 return offset;
}


static size_t
donote(struct magic_set *ms, void *vbuf, size_t offset, size_t size,
    int clazz, int swap, size_t align, int *flags, uint16_t *notecount,
    int fd, off_t ph_off, int ph_num, off_t fsize)
{
 Elf32_Nhdr nh32={0};
 Elf64_Nhdr nh64={0};
 size_t noff, doff={0};
 uint32_t namesz, descsz={0};
 unsigned char *nbuf = ((unsigned char *)(vbuf));

 if (*notecount == 0)
  return 0;
 --*notecount;

 if ((clazz == 1 ? sizeof(nh32) : sizeof(nh64)) + offset > size) {



  return (clazz == 1 ? sizeof(nh32) : sizeof(nh64)) + offset;
 }

 memcpy((clazz == 1 ? ((void *)(&nh32)) : ((void *)(&nh64))), &nbuf[offset], (clazz == 1 ? sizeof(nh32) : sizeof(nh64)));
 offset += (clazz == 1 ? sizeof(nh32) : sizeof(nh64));

 namesz = (clazz == 1 ? getu32(swap, nh32.n_namesz) : getu32(swap, nh64.n_namesz));
 descsz = (clazz == 1 ? getu32(swap, nh32.n_descsz) : getu32(swap, nh64.n_descsz));

 if ((namesz == 0) && (descsz == 0)) {



  return (offset >= size) ? offset : size;
 }

 if (namesz & 0x80000000) {
  if (file_printf(ms, ", bad note name size %#lx",
      ((unsigned long)(namesz))) == -1)
   return -1;
     return 0;
 }

 if (descsz & 0x80000000) {
  if (file_printf(ms, ", bad note description size %#lx",
      ((unsigned long)(descsz))) == -1)
       return -1;
     return 0;
 }

 noff = offset;
 doff = ((((offset + namesz) + align - 1) / align) * align);

 if (offset + namesz > size) {



  return doff;
 }

 offset = ((((doff + descsz) + align - 1) / align) * align);
 if (doff + descsz > size) {



  return (offset >= size) ? offset : size;
 }


 if ((*flags & 0x0008) == 0) {
  if (do_os_note(ms, nbuf, (clazz == 1 ? getu32(swap, nh32.n_type) : getu32(swap, nh64.n_type)), swap,
      namesz, descsz, noff, doff, flags))
   return offset;
 }

 if ((*flags & 0x0010) == 0) {
  if (do_bid_note(ms, nbuf, (clazz == 1 ? getu32(swap, nh32.n_type) : getu32(swap, nh64.n_type)), swap,
      namesz, descsz, noff, doff, flags))
   return offset;
 }

 if ((*flags & 0x0040) == 0) {
  if (do_pax_note(ms, nbuf, (clazz == 1 ? getu32(swap, nh32.n_type) : getu32(swap, nh64.n_type)), swap,
      namesz, descsz, noff, doff, flags))
   return offset;
 }

 if ((*flags & 0x0004) == 0) {
  if (do_core_note(ms, nbuf, (clazz == 1 ? getu32(swap, nh32.n_type) : getu32(swap, nh64.n_type)), swap,
      namesz, descsz, noff, doff, flags, size, clazz))
   return offset;
 }

 if ((*flags & 0x1000) == 0) {
  if (do_auxv_note(ms, nbuf, (clazz == 1 ? getu32(swap, nh32.n_type) : getu32(swap, nh64.n_type)), swap,
   namesz, descsz, noff, doff, flags, size, clazz,
   fd, ph_off, ph_num, fsize))
   return offset;
 }

 if (namesz == 7 && strcmp(((char *)(&nbuf[noff])), "NetBSD") == 0) {
  int descw, flag={0};
  const char *str, *tag={0};
  if (descsz > 100)
   descsz = 100;
  switch ((clazz == 1 ? getu32(swap, nh32.n_type) : getu32(swap, nh64.n_type))) {
      case 1:
   return offset;
  case 5:
   flag = 0x0080;
   tag = "compiled for";
   break;
  case 6:
   flag = 0x0100;
   tag = "compiler model";
   break;
  case 2:
   flag = 0x0200;
   tag = "emulation:";
   break;
  default:
   if (*flags & 0x0400)
    return offset;
   *flags |= 0x0400;
   if (file_printf(ms, ", note=%u", (clazz == 1 ? getu32(swap, nh32.n_type) : getu32(swap, nh64.n_type))) == -1)
    return offset;
   return offset;
  }

  if (*flags & flag)
   return offset;
  str = ((const char *)(&nbuf[doff]));
  descw = ((int)(descsz));
  *flags |= flag;
  file_printf(ms, ", %s: %.*s", tag, descw, str);
  return offset;
 }

 return offset;
}


typedef struct cap_desc {
 uint64_t cd_mask;
 const char *cd_name;
} cap_desc_t;

static const cap_desc_t cap_desc_sparc[] = {
 { 0x0001, "MUL32" },
 { 0x0002, "DIV32" },
 { 0x0004, "FSMULD" },
 { 0x0008, "V8PLUS" },
 { 0x0010, "POPC" },
 { 0x0020, "VIS" },
 { 0x0040, "VIS2" },
 { 0x0080, "ASI_BLK_INIT" },
 { 0x0100, "FMAF" },
 { 0x4000, "FJFMAU" },
 { 0x8000, "IMA" },
 { 0, 
     ((void *)0) 
          }
};

static const cap_desc_t cap_desc_386[] = {
 { 0x00000001, "FPU" },
 { 0x00000002, "TSC" },
 { 0x00000004, "CX8" },
 { 0x00000008, "SEP" },
 { 0x00000010, "AMD_SYSC" },
 { 0x00000020, "CMOV" },
 { 0x00000040, "MMX" },
 { 0x00000080, "AMD_MMX" },
 { 0x00000100, "AMD_3DNow" },
 { 0x00000200, "AMD_3DNowx" },
 { 0x00000400, "FXSR" },
 { 0x00000800, "SSE" },
 { 0x00001000, "SSE2" },
 { 0x00002000, "PAUSE" },
 { 0x00004000, "SSE3" },
 { 0x00008000, "MON" },
 { 0x00010000, "CX16" },
 { 0x00020000, "AHF" },
 { 0x00040000, "TSCP" },
 { 0x00080000, "AMD_SSE4A" },
 { 0x00100000, "POPCNT" },
 { 0x00200000, "AMD_LZCNT" },
 { 0x00400000, "SSSE3" },
 { 0x00800000, "SSE4.1" },
 { 0x01000000, "SSE4.2" },
 { 0, 
     ((void *)0) 
          }
};

static int
doshn(struct magic_set *ms, int clazz, int swap, int fd, off_t off, int num,
    size_t size, off_t fsize, int mach, int strtab, int *flags,
    uint16_t *notecount)
{
 Elf32_Shdr sh32={0};
 Elf64_Shdr sh64={0};
 int stripped = 1, has_debug_info = 0;
 size_t nbadcap = 0;
 void *nbuf={0};
 off_t noff, coff, name_off={0};
 uint64_t cap_hw1 = 0;
 uint64_t cap_sf1 = 0;
 char name[50]={0};
 ssize_t namesize={0};

 if (num == 0) {
  if (file_printf(ms, ", no section header") == -1)
   return -1;
  return 0;
 }
 if (size != (clazz == 1 ? sizeof(sh32) : sizeof(sh64))) {
  if (file_printf(ms, ", corrupted section header size") == -1)
   return -1;
  return 0;
 }


 if (pread(fd, (clazz == 1 ? ((void *)(&sh32)) : ((void *)(&sh64))), (clazz == 1 ? sizeof(sh32) : sizeof(sh64)), ((off_t)((off + size * strtab))))
     < ((ssize_t)((clazz == 1 ? sizeof(sh32) : sizeof(sh64))))) {
  if (file_printf(ms, ", missing section headers") == -1)
   return -1;
  return 0;
 }
 name_off = ((off_t)((clazz == 1 ? getu32(swap, sh32.sh_offset) : getu64(swap, sh64.sh_offset))));

 for ( ; num; num--) {

  if ((namesize = pread(fd, name, sizeof(name) - 1,
      name_off + (clazz == 1 ? getu32(swap, sh32.sh_name) : getu32(swap, sh64.sh_name)))) == -1) {
   file_badread(ms);
   return -1;
  }
  name[namesize] = '\0';
  if (strcmp(name, ".debug_info") == 0) {
   has_debug_info = 1;
   stripped = 0;
  }

  if (pread(fd, (clazz == 1 ? ((void *)(&sh32)) : ((void *)(&sh64))), (clazz == 1 ? sizeof(sh32) : sizeof(sh64)), off) <
      ((ssize_t)((clazz == 1 ? sizeof(sh32) : sizeof(sh64))))) {
   file_badread(ms);
   return -1;
  }
  off += size;


  switch ((clazz == 1 ? getu32(swap, sh32.sh_type) : getu32(swap, sh64.sh_type))) {
  case 2:



   stripped = 0;
   break;
  default:
   if (fsize != ((off_t)(-1)) && ((off_t)((clazz == 1 ? getu32(swap, sh32.sh_offset) : getu64(swap, sh64.sh_offset)))) > fsize) {

    continue;
   }
   break;
  }



  switch ((clazz == 1 ? getu32(swap, sh32.sh_type) : getu32(swap, sh64.sh_type))) {
  case 7:
   if (((uintmax_t)((((size_t)((clazz == 1 ? getu32(swap, sh32.sh_size) : getu64(swap, sh64.sh_size)))) + ((off_t)((clazz == 1 ? getu32(swap, sh32.sh_offset) : getu64(swap, sh64.sh_offset))))))) >
       ((uintmax_t)(fsize))) {
    if (file_printf(ms,
        ", note offset/size %#" "j"
        "x+%#" "j" "x exceeds"
        " file size %#" "j" "x",
        ((uintmax_t)(((off_t)((clazz == 1 ? getu32(swap, sh32.sh_offset) : getu64(swap, sh64.sh_offset)))))),
        ((uintmax_t)(((size_t)((clazz == 1 ? getu32(swap, sh32.sh_size) : getu64(swap, sh64.sh_size)))))),
        ((uintmax_t)(fsize))) == -1)
     return -1;
    return 0;
   }
   if ((nbuf = malloc(((size_t)((clazz == 1 ? getu32(swap, sh32.sh_size) : getu64(swap, sh64.sh_size)))))) == 
                                   ((void *)0)
                                       ) {
    file_error(ms, 
                  (*__errno_location ())
                       , "Cannot allocate memory"
        " for note");
    return -1;
   }
   if (pread(fd, nbuf, ((size_t)((clazz == 1 ? getu32(swap, sh32.sh_size) : getu64(swap, sh64.sh_size)))), ((off_t)((clazz == 1 ? getu32(swap, sh32.sh_offset) : getu64(swap, sh64.sh_offset))))) <
       ((ssize_t)(((size_t)((clazz == 1 ? getu32(swap, sh32.sh_size) : getu64(swap, sh64.sh_size))))))) {
    file_badread(ms);
    free(nbuf);
    return -1;
   }

   noff = 0;
   for (;;) {
    if (noff >= ((off_t)(((size_t)((clazz == 1 ? getu32(swap, sh32.sh_size) : getu64(swap, sh64.sh_size)))))))
     break;
    noff = donote(ms, nbuf, ((size_t)(noff)),
        ((size_t)((clazz == 1 ? getu32(swap, sh32.sh_size) : getu64(swap, sh64.sh_size)))), clazz, swap, 4, flags, notecount,
        fd, 0, 0, 0);
    if (noff == 0)
     break;
   }
   free(nbuf);
   break;
  case 0x6ffffff5:
   switch (mach) {
   case 2:
   case 43:
   case 50:
   case 3:
   case 62:
    break;
   default:
    goto skip;
   }

   if (nbadcap > 5)
    break;
   if (lseek(fd, ((off_t)((clazz == 1 ? getu32(swap, sh32.sh_offset) : getu64(swap, sh64.sh_offset)))), 
                            0
                                    )
       == ((off_t)(-1))) {
    file_badseek(ms);
    return -1;
   }
   coff = 0;
   for (;;) {
    Elf32_Cap cap32={0};
    Elf64_Cap cap64={0};
    char cbuf[
        
       (((
       sizeof(cap32)
       )>(
       sizeof(cap64)
       ))?(
       sizeof(cap32)
       ):(
       sizeof(cap64)
       ))
                                        ]={0};
    if ((coff += (clazz == 1 ? sizeof(cap32) : sizeof(cap64))) >
        ((off_t)(((size_t)((clazz == 1 ? getu32(swap, sh32.sh_size) : getu64(swap, sh64.sh_size)))))))
     break;
    if (read(fd, cbuf, ((size_t)((clazz == 1 ? sizeof(cap32) : sizeof(cap64))))) !=
        ((ssize_t)((clazz == 1 ? sizeof(cap32) : sizeof(cap64))))) {
     file_badread(ms);
     return -1;
    }
    if (cbuf[0] == 'A') {
     break;
    }
    memcpy((clazz == 1 ? ((void *)(&cap32)) : ((void *)(&cap64))), cbuf, (clazz == 1 ? sizeof(cap32) : sizeof(cap64)));
    switch ((clazz == 1 ? getu32(swap, cap32.c_tag) : getu64(swap, cap64.c_tag))) {
    case 0:
     break;
    case 1:
     cap_hw1 |= (clazz == 1 ? getu32(swap, cap32.c_un.c_val) : getu64(swap, cap64.c_un.c_val));
     break;
    case 2:
     cap_sf1 |= (clazz == 1 ? getu32(swap, cap32.c_un.c_val) : getu64(swap, cap64.c_un.c_val));
     break;
    default:
     if (file_printf(ms,
         ", with unknown capability "
         "%#" "ll" "x = %#"
         "ll" "x",
         ((unsigned long long)((clazz == 1 ? getu32(swap, cap32.c_tag) : getu64(swap, cap64.c_tag)))),
         ((unsigned long long)((clazz == 1 ? getu32(swap, cap32.c_un.c_val) : getu64(swap, cap64.c_un.c_val)))))
         == -1)
      return -1;
     if (nbadcap++ > 2)
      coff = ((size_t)((clazz == 1 ? getu32(swap, sh32.sh_size) : getu64(swap, sh64.sh_size))));
     break;
    }
   }

  skip:
  default:
   break;
  }
 }

 if (has_debug_info) {
  if (file_printf(ms, ", with debug_info") == -1)
   return -1;
 }
 if (file_printf(ms, ", %sstripped", stripped ? "" : "not ") == -1)
  return -1;
 if (cap_hw1) {
  const cap_desc_t *cdp={0};
  switch (mach) {
  case 2:
  case 18:
  case 43:
   cdp = cap_desc_sparc;
   break;
  case 3:
  case 50:
  case 62:
   cdp = cap_desc_386;
   break;
  default:
   cdp = 
        ((void *)0)
            ;
   break;
  }
  if (file_printf(ms, ", uses") == -1)
   return -1;
  if (cdp) {
   while (cdp->cd_name) {
    if (cap_hw1 & cdp->cd_mask) {
     if (file_printf(ms,
         " %s", cdp->cd_name) == -1)
      return -1;
     cap_hw1 &= ~cdp->cd_mask;
    }
    ++cdp;
   }
   if (cap_hw1)
    if (file_printf(ms,
        " unknown hardware capability %#"
        "ll" "x",
        ((unsigned long long)(cap_hw1))) == -1)
     return -1;
  } else {
   if (file_printf(ms,
       " hardware capability %#" "ll" "x",
       ((unsigned long long)(cap_hw1))) == -1)
    return -1;
  }
 }
 if (cap_sf1) {
  if (cap_sf1 & 0x02) {
   if (file_printf(ms,
       (cap_sf1 & 0x01)
       ? ", uses frame pointer"
       : ", not known to use frame pointer") == -1)
    return -1;
  }
  cap_sf1 &= ~0x03;
  if (cap_sf1)
   if (file_printf(ms,
       ", with unknown software capability %#"
       "ll" "x",
       ((unsigned long long)(cap_sf1))) == -1)
    return -1;
 }
 return 0;
}






static int
dophn_exec(struct magic_set *ms, int clazz, int swap, int fd, off_t off,
    int num, size_t size, off_t fsize, int sh_num, int *flags,
    uint16_t *notecount)
{
 Elf32_Phdr ph32={0};
 Elf64_Phdr ph64={0};
 const char *linking_style = "statically";
 unsigned char nbuf[
                   8192
                         ]={0};
 char ibuf[
          8192
                ]={0};
 char interp[
            8192
                  ]={0};
 ssize_t bufsize={0};
 size_t offset, align, len={0};

 if (num == 0) {
  if (file_printf(ms, ", no program header") == -1)
   return -1;
  return 0;
 }
 if (size != (clazz == 1 ? sizeof(ph32) : sizeof(ph64))) {
  if (file_printf(ms, ", corrupted program header size") == -1)
   return -1;
  return 0;
 }

 interp[0] = '\0';
   for ( ; num; num--) {
  int doread={0};
  if (pread(fd, (clazz == 1 ? ((void *)(&ph32)) : ((void *)(&ph64))), (clazz == 1 ? sizeof(ph32) : sizeof(ph64)), off) <
      ((ssize_t)((clazz == 1 ? sizeof(ph32) : sizeof(ph64))))) {
   file_badread(ms);
   return -1;
  }

  off += size;
  bufsize = 0;
  align = 4;


  switch ((clazz == 1 ? getu32(swap, ph32.p_type) : getu32(swap, ph64.p_type))) {
  case 2:
   linking_style = "dynamically";
   doread = 1;
   break;
  case 4:
   if (sh_num)
    continue;
   if (((align = ((size_t)((clazz == 1 ? ((off_t)((ph32.p_align ? getu32(swap, ph32.p_align) : 4))) : ((off_t)((ph64.p_align ? getu64(swap, ph64.p_align) : 4))))))) & 0x80000000UL) != 0 ||
       align < 4) {
    if (file_printf(ms,
        ", invalid note alignment %#lx",
        ((unsigned long)(align))) == -1)
     return -1;
    align = 4;
   }

  case 3:
   doread = 1;
   break;
  default:
   doread = 0;
   if (fsize != ((off_t)(-1)) && ((off_t)((clazz == 1 ? getu32(swap, ph32.p_offset) : getu64(swap, ph64.p_offset)))) > fsize) {

    continue;
   }
   break;
  }

  if (doread) {
   len = ((size_t)((clazz == 1 ? getu32(swap, ph32.p_filesz) : getu64(swap, ph64.p_filesz)))) < sizeof(nbuf) ? ((size_t)((clazz == 1 ? getu32(swap, ph32.p_filesz) : getu64(swap, ph64.p_filesz))))
       : sizeof(nbuf);
   bufsize = pread(fd, nbuf, len, ((off_t)((clazz == 1 ? getu32(swap, ph32.p_offset) : getu64(swap, ph64.p_offset)))));
   if (bufsize == -1) {
    file_badread(ms);
    return -1;
   }
  } else
   len = 0;


  switch ((clazz == 1 ? getu32(swap, ph32.p_type) : getu32(swap, ph64.p_type))) {
  case 2:
   offset = 0;
   for (;;) {
    if (offset >= (size_t)bufsize)
     break;
    offset = dodynamic(ms, nbuf, offset,
        ((size_t)(bufsize)), clazz, swap);
    if (offset == 0)
     break;
   }
   break;

  case 3:
   if (bufsize && nbuf[0]) {
    nbuf[bufsize - 1] = '\0';
    memcpy(interp, nbuf, bufsize);
   } else
    strlcpy(interp, "*empty*", sizeof(interp));
   break;
  case 4:




   offset = 0;
   for (;;) {
    if (offset >= (size_t)bufsize)
     break;
    offset = donote(ms, nbuf, offset,
        ((size_t)(bufsize)), clazz, swap, align,
        flags, notecount, fd, 0, 0, 0);
    if (offset == 0)
     break;
   }
   break;
  default:
   break;
  }
 }
 if (file_printf(ms, ", %s linked", linking_style)
     == -1)
  return -1;
 if (interp[0])
  if (file_printf(ms, ", interpreter %s",
      file_printable(ibuf, sizeof(ibuf), interp)) == -1)
   return -1;
 return 0;
}


 int
file_tryelf(struct magic_set *ms, const struct buffer *b)
{
 int fd = b->fd;
 const unsigned char *buf = ((const unsigned char *)(b->fbuf));
 size_t nbytes = b->flen;
 union {
  int32_t l;
  char c[sizeof(int32_t)];
 } u={0};
 int clazz={0};
 int swap={0};
 struct stat st={0};
 off_t fsize={0};
 int flags = 0;
 Elf32_Ehdr elf32hdr={0};
 Elf64_Ehdr elf64hdr={0};
 uint16_t type, phnum, shnum, notecount={0};

 if (ms->flags & ((0x0000010|0x0000400)|0x0000800|0x1000000))
  return 0;
 if (buf[0] != 0x7f
     || (buf[1] != 'E' && buf[1] != 'O')
     || buf[2] != 'L' || buf[3] != 'F')
  return 0;




 if((lseek(fd, ((off_t)(0)), 
                              0
                                      ) == ((off_t)(-1)))
     && (
        (*__errno_location ()) 
              == 
                 29
                       ))
  fd = file_pipe2file(ms, fd, buf, nbytes);

 if (fd == -1 || fstat(fd, &st) == -1) {
    file_badread(ms);
  return -1;
 }
 if (
    ((((
    st.st_mode
    )) & 0170000) == (0100000)) 
                        || st.st_size != 0)
  fsize = st.st_size;
 else
  fsize = ((off_t)(-1));

 clazz = buf[4];

 switch (clazz) {
 case 1:




 if (nbytes <= sizeof(elf32hdr))
  return 0;

 u.l = 1;
 (void)memcpy(&elf32hdr, buf, sizeof elf32hdr);
 swap = (u.c[sizeof(int32_t) - 1] + 1) != elf32hdr.e_ident[5];

 type = getu16(swap, elf32hdr.e_type);
 notecount = ms->elf_notes_max;
 switch (type) {

 case 4:
  phnum = getu16(swap, elf32hdr.e_phnum);
  if (phnum > ms->elf_phnum_max)
   return toomany(ms, "program headers", phnum);
  flags |= 0x0800;
  if (dophn_core(ms, clazz, swap, fd,
      (off_t)getu32(swap, elf32hdr.e_phoff), phnum,
      (size_t)getu16(swap, elf32hdr.e_phentsize),
      fsize, &flags, &notecount) == -1)
   return -1;
  break;

 case 2:
 case 3:
  phnum = getu16(swap, elf32hdr.e_phnum);
  if (phnum > ms->elf_phnum_max)
   return toomany(ms, "program", phnum);
  shnum = getu16(swap, elf32hdr.e_shnum);
  if (shnum > ms->elf_shnum_max)
   return toomany(ms, "section", shnum);
  if (dophn_exec(ms, clazz, swap, fd,
      (off_t)getu32(swap, elf32hdr.e_phoff), phnum,
      (size_t)getu16(swap, elf32hdr.e_phentsize),
      fsize, shnum, &flags, &notecount) == -1)
   return -1;

 case 1:
  shnum = getu16(swap, elf32hdr.e_shnum);
  if (shnum > ms->elf_shnum_max)
   return toomany(ms, "section headers", shnum);
  if (doshn(ms, clazz, swap, fd,
      (off_t)getu32(swap, elf32hdr.e_shoff), shnum,
      (size_t)getu16(swap, elf32hdr.e_shentsize),
      fsize, getu16(swap, elf32hdr.e_machine),
      (int)getu16(swap, elf32hdr.e_shstrndx),
      &flags, &notecount) == -1)
   return -1;
  break;

 default:
  break;
 }
 if (notecount == 0)
  return toomany(ms, "notes", ms->elf_notes_max);
 return 1;
 case 2:




 if (nbytes <= sizeof(elf64hdr))
  return 0;

 u.l = 1;
 (void)memcpy(&elf64hdr, buf, sizeof elf64hdr);
 swap = (u.c[sizeof(int32_t) - 1] + 1) != elf64hdr.e_ident[5];

 type = getu16(swap, elf64hdr.e_type);
 notecount = ms->elf_notes_max;
 switch (type) {

 case 4:
  phnum = getu16(swap, elf64hdr.e_phnum);
  if (phnum > ms->elf_phnum_max)
   return toomany(ms, "program headers", phnum);
  flags |= 0x0800;
  if (dophn_core(ms, clazz, swap, fd,
      (off_t)getu64(swap, elf64hdr.e_phoff), phnum,
      (size_t)getu16(swap, elf64hdr.e_phentsize),
      fsize, &flags, &notecount) == -1)
   return -1;
  break;

 case 2:
 case 3:
  phnum = getu16(swap, elf64hdr.e_phnum);
  if (phnum > ms->elf_phnum_max)
   return toomany(ms, "program", phnum);
  shnum = getu16(swap, elf64hdr.e_shnum);
  if (shnum > ms->elf_shnum_max)
   return toomany(ms, "section", shnum);
  if (dophn_exec(ms, clazz, swap, fd,
      (off_t)getu64(swap, elf64hdr.e_phoff), phnum,
      (size_t)getu16(swap, elf64hdr.e_phentsize),
      fsize, shnum, &flags, &notecount) == -1)
   return -1;

 case 1:
  shnum = getu16(swap, elf64hdr.e_shnum);
  if (shnum > ms->elf_shnum_max)
   return toomany(ms, "section headers", shnum);
  if (doshn(ms, clazz, swap, fd,
      (off_t)getu64(swap, elf64hdr.e_shoff), shnum,
      (size_t)getu16(swap, elf64hdr.e_shentsize),
      fsize, getu16(swap, elf64hdr.e_machine),
      (int)getu16(swap, elf64hdr.e_shstrndx),
      &flags, &notecount) == -1)
   return -1;
  break;

 default:
  break;
 }
 if (notecount == 0)
  return toomany(ms, "notes", ms->elf_notes_max);
 return 1;
 default:
     if (file_printf(ms, ", unknown class %d", clazz) == -1)
      return -1;
     break;
 }
 return 0;
}
