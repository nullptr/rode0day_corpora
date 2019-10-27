#define __attribute__(x)
#define __extension__(x)












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








extern int *__errno_location (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));








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
extern int open (const char *__file, int __oflag, ...) __attribute__ ((__nonnull__ (1)));
extern int openat (int __fd, const char *__file, int __oflag, ...)
     __attribute__ ((__nonnull__ (2)));
extern int creat (const char *__file, mode_t __mode) __attribute__ ((__nonnull__ (1)));
extern int lockf (int __fd, int __cmd, off_t __len);
extern int posix_fadvise (int __fd, off_t __offset, off_t __len,
     int __advise) __attribute__ ((__nothrow__ , __leaf__));
extern int posix_fallocate (int __fd, off_t __offset, off_t __len);





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


typedef long int __gwchar_t;

typedef struct
  {
    __extension__ long long int quot;
    __extension__ long long int rem;
  } imaxdiv_t;





extern intmax_t imaxabs (intmax_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern imaxdiv_t imaxdiv (intmax_t __numer, intmax_t __denom)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern intmax_t strtoimax (const char *__restrict __nptr,
      char **__restrict __endptr, int __base) __attribute__ ((__nothrow__ , __leaf__));


extern uintmax_t strtoumax (const char *__restrict __nptr,
       char ** __restrict __endptr, int __base) __attribute__ ((__nothrow__ , __leaf__));


extern intmax_t wcstoimax (const __gwchar_t *__restrict __nptr,
      __gwchar_t **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__));


extern uintmax_t wcstoumax (const __gwchar_t *__restrict __nptr,
       __gwchar_t ** __restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__));








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



extern clock_t clock (void) __attribute__ ((__nothrow__ , __leaf__));


extern time_t time (time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));


extern double difftime (time_t __time1, time_t __time0)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern time_t mktime (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));





extern size_t strftime (char *__restrict __s, size_t __maxsize,
   const char *__restrict __format,
   const struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));

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
     __locale_t __loc) __attribute__ ((__nothrow__ , __leaf__));



extern struct tm *gmtime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));



extern struct tm *localtime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));





extern struct tm *gmtime_r (const time_t *__restrict __timer,
       struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));



extern struct tm *localtime_r (const time_t *__restrict __timer,
          struct tm *__restrict __tp) __attribute__ ((__nothrow__ , __leaf__));





extern char *asctime (const struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern char *ctime (const time_t *__timer) __attribute__ ((__nothrow__ , __leaf__));







extern char *asctime_r (int *data_flow, const struct tm *__restrict __tp,
   char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));


extern char *ctime_r (int *data_flow, const time_t *__restrict __timer,
        char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));




extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;




extern char *tzname[2];



extern void tzset (void) __attribute__ ((__nothrow__ , __leaf__));



extern int daylight;
extern long int timezone;





extern int stime (const time_t *__when) __attribute__ ((__nothrow__ , __leaf__));
extern time_t timegm (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern time_t timelocal (struct tm *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern int dysize (int __year) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern int nanosleep (const struct timespec *__requested_time,
        struct timespec *__remaining);



extern int clock_getres (clockid_t __clock_id, struct timespec *__res) __attribute__ ((__nothrow__ , __leaf__));


extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp) __attribute__ ((__nothrow__ , __leaf__));


extern int clock_settime (clockid_t __clock_id, const struct timespec *__tp)
     __attribute__ ((__nothrow__ , __leaf__));






extern int clock_nanosleep (clockid_t __clock_id, int __flags,
       const struct timespec *__req,
       struct timespec *__rem);


extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) __attribute__ ((__nothrow__ , __leaf__));




extern int timer_create (clockid_t __clock_id,
    struct sigevent *__restrict __evp,
    timer_t *__restrict __timerid) __attribute__ ((__nothrow__ , __leaf__));


extern int timer_delete (timer_t __timerid) __attribute__ ((__nothrow__ , __leaf__));


extern int timer_settime (timer_t __timerid, int __flags,
     const struct itimerspec *__restrict __value,
     struct itimerspec *__restrict __ovalue) __attribute__ ((__nothrow__ , __leaf__));


extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     __attribute__ ((__nothrow__ , __leaf__));


extern int timer_getoverrun (timer_t __timerid) __attribute__ ((__nothrow__ , __leaf__));





extern int timespec_get (struct timespec *__ts, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

















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
     void (*_function) (int *data_flow, sigval_t);
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




typedef void (*__sighandler_t) (int *data_flow, int);




extern __sighandler_t __sysv_signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ , __leaf__));


extern __sighandler_t signal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ , __leaf__));

extern int kill (__pid_t __pid, int __sig) __attribute__ ((__nothrow__ , __leaf__));






extern int killpg (__pid_t __pgrp, int __sig) __attribute__ ((__nothrow__ , __leaf__));




extern int raise (int __sig) __attribute__ ((__nothrow__ , __leaf__));




extern __sighandler_t ssignal (int __sig, __sighandler_t __handler)
     __attribute__ ((__nothrow__ , __leaf__));
extern int gsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));




extern void psignal (int __sig, const char *__s);


extern void psiginfo (const siginfo_t *__pinfo, const char *__s);
extern int sigblock (int __mask) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));


extern int sigsetmask (int __mask) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));


extern int siggetmask (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));
typedef __sighandler_t sig_t;





extern int sigemptyset (sigset_t *__set) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigfillset (sigset_t *__set) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigaddset (sigset_t *__set, int __signo) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigdelset (sigset_t *__set, int __signo) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int sigismember (const sigset_t *__set, int __signo)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
struct sigaction
  {


    union
      {

 __sighandler_t sa_handler;

 void (*sa_sigaction) (int *data_flow, int, siginfo_t *, void *);
      }
    __sigaction_handler;







    __sigset_t sa_mask;


    int sa_flags;


    void (*sa_restorer) (int *data_flowvoid);
  };


extern int sigprocmask (int __how, const sigset_t *__restrict __set,
   sigset_t *__restrict __oset) __attribute__ ((__nothrow__ , __leaf__));






extern int sigsuspend (const sigset_t *__set) __attribute__ ((__nonnull__ (1)));


extern int sigaction (int __sig, const struct sigaction *__restrict __act,
        struct sigaction *__restrict __oact) __attribute__ ((__nothrow__ , __leaf__));


extern int sigpending (sigset_t *__set) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int sigwait (const sigset_t *__restrict __set, int *__restrict __sig)
     __attribute__ ((__nonnull__ (1, 2)));






extern int sigwaitinfo (const sigset_t *__restrict __set,
   siginfo_t *__restrict __info) __attribute__ ((__nonnull__ (1)));






extern int sigtimedwait (const sigset_t *__restrict __set,
    siginfo_t *__restrict __info,
    const struct timespec *__restrict __timeout)
     __attribute__ ((__nonnull__ (1)));



extern int sigqueue (__pid_t __pid, int __sig, const union sigval __val)
     __attribute__ ((__nothrow__ , __leaf__));
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


extern int sigreturn (struct sigcontext *__scp) __attribute__ ((__nothrow__ , __leaf__));










extern int siginterrupt (int __sig, int __interrupt) __attribute__ ((__nothrow__ , __leaf__));

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
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__deprecated__));



extern int sigaltstack (const struct sigaltstack *__restrict __ss,
   struct sigaltstack *__restrict __oss) __attribute__ ((__nothrow__ , __leaf__));
extern int pthread_sigmask (int __how,
       const __sigset_t *__restrict __newmask,
       __sigset_t *__restrict __oldmask)__attribute__ ((__nothrow__ , __leaf__));


extern int pthread_kill (pthread_t __threadid, int __signo) __attribute__ ((__nothrow__ , __leaf__));






extern int __libc_current_sigrtmin (void) __attribute__ ((__nothrow__ , __leaf__));

extern int __libc_current_sigrtmax (void) __attribute__ ((__nothrow__ , __leaf__));













extern int stat (const char *__restrict __file,
   struct stat *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern int fstat (int __fd, struct stat *__buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
extern int fstatat (int __fd, const char *__restrict __file,
      struct stat *__restrict __buf, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern int lstat (const char *__restrict __file,
    struct stat *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int chmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int lchmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




extern int fchmod (int __fd, __mode_t __mode) __attribute__ ((__nothrow__ , __leaf__));





extern int fchmodat (int __fd, const char *__file, __mode_t __mode,
       int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) ;






extern __mode_t umask (__mode_t __mask) __attribute__ ((__nothrow__ , __leaf__));
extern int mkdir (const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int mkdirat (int __fd, const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));






extern int mknod (const char *__path, __mode_t __mode, __dev_t __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int mknodat (int __fd, const char *__path, __mode_t __mode,
      __dev_t __dev) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));





extern int mkfifo (const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int mkfifoat (int __fd, const char *__path, __mode_t __mode)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));





extern int utimensat (int __fd, const char *__path,
        const struct timespec __times[2],
        int __flags)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern int futimens (int __fd, const struct timespec __times[2]) __attribute__ ((__nothrow__ , __leaf__));
extern int __fxstat (int __ver, int __fildes, struct stat *__stat_buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3)));
extern int __xstat (int __ver, const char *__filename,
      struct stat *__stat_buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __lxstat (int __ver, const char *__filename,
       struct stat *__stat_buf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern int __fxstatat (int __ver, int __fildes, const char *__filename,
         struct stat *__stat_buf, int __flag)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4)));
extern int __xmknod (int __ver, const char *__path, __mode_t __mode,
       __dev_t *__dev) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));

extern int __xmknodat (int __ver, int __fd, const char *__path,
         __mode_t __mode, __dev_t *__dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 5)));


union VALUETYPE {
 uint8_t b;
 uint16_t h;
 uint32_t l;
 uint64_t q;
 uint8_t hs[2];
 uint8_t hl[4];
 uint8_t hq[8];
 char s[64];
 unsigned char us[64];
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
 uint32_t offset;

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
 int error;
 int flags;
 int event_flags;

 const char *file;
 size_t line;


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





};


typedef unsigned long unichar;

struct stat;


__attribute__ ((__visibility__("hidden"))) const char *file_fmttime(int *data_flow, uint64_t, int, char *);
__attribute__ ((__visibility__("hidden"))) struct magic_set *file_ms_alloc(int *data_flow, int);
__attribute__ ((__visibility__("hidden"))) void file_ms_free(int *data_flow, struct magic_set *);
__attribute__ ((__visibility__("hidden"))) int file_buffer(int *data_flow, struct magic_set *, int, const char *, const void *,
    size_t);
__attribute__ ((__visibility__("hidden"))) int file_fsmagic(int *data_flow, struct magic_set *, const char *, struct stat *);
__attribute__ ((__visibility__("hidden"))) int file_pipe2file(int *data_flow, struct magic_set *, int, const void *, size_t);
__attribute__ ((__visibility__("hidden"))) int file_vprintf(int *data_flow, struct magic_set *, const char *, va_list)
    __attribute__((__format__(__printf__, 2, 0)));
__attribute__ ((__visibility__("hidden"))) size_t file_printedlen(int *data_flow, const struct magic_set *);
__attribute__ ((__visibility__("hidden"))) int file_replace(int *data_flow, struct magic_set *, const char *, const char *);
__attribute__ ((__visibility__("hidden"))) int file_printf(int *data_flow, struct magic_set *, const char *, ...)
    __attribute__((__format__(__printf__, 2, 3)));
__attribute__ ((__visibility__("hidden"))) int file_reset(int *data_flow, struct magic_set *);
__attribute__ ((__visibility__("hidden"))) int file_tryelf(int *data_flow, struct magic_set *, int, const unsigned char *,
    size_t);
__attribute__ ((__visibility__("hidden"))) int file_trycdf(int *data_flow, struct magic_set *, int, const unsigned char *,
    size_t);

__attribute__ ((__visibility__("hidden"))) int file_zmagic(int *data_flow, struct magic_set *, int, const char *,
    const unsigned char *, size_t);

__attribute__ ((__visibility__("hidden"))) int file_ascmagic(int *data_flow, struct magic_set *, const unsigned char *, size_t,
    int);
__attribute__ ((__visibility__("hidden"))) int file_ascmagic_with_encoding(int *data_flow, struct magic_set *,
    const unsigned char *, size_t, unichar *, size_t, const char *,
    const char *, int);
__attribute__ ((__visibility__("hidden"))) int file_encoding(int *data_flow, struct magic_set *, const unsigned char *, size_t,
    unichar **, size_t *, const char **, const char **, const char **);
__attribute__ ((__visibility__("hidden"))) int file_is_tar(int *data_flow, struct magic_set *, const unsigned char *, size_t);
__attribute__ ((__visibility__("hidden"))) int file_softmagic(int *data_flow, struct magic_set *, const unsigned char *, size_t,
    uint16_t, uint16_t *, int, int);
__attribute__ ((__visibility__("hidden"))) int file_apprentice(int *data_flow, struct magic_set *, const char *, int);
__attribute__ ((__visibility__("hidden"))) int buffer_apprentice(int *data_flow, struct magic_set *, struct magic **,
    size_t *, size_t);
__attribute__ ((__visibility__("hidden"))) int file_magicfind(int *data_flow, struct magic_set *, const char *, struct mlist *);
__attribute__ ((__visibility__("hidden"))) uint64_t file_signextend(int *data_flow, struct magic_set *, struct magic *,
    uint64_t);
__attribute__ ((__visibility__("hidden"))) void file_badread(int *data_flow, struct magic_set *);
__attribute__ ((__visibility__("hidden"))) void file_badseek(int *data_flow, struct magic_set *);
__attribute__ ((__visibility__("hidden"))) void file_oomem(int *data_flow, struct magic_set *, size_t);
__attribute__ ((__visibility__("hidden"))) void file_error(int *data_flow, struct magic_set *, int, const char *, ...)
    __attribute__((__format__(__printf__, 3, 4)));
__attribute__ ((__visibility__("hidden"))) void file_magerror(int *data_flow, struct magic_set *, const char *, ...)
    __attribute__((__format__(__printf__, 2, 3)));
__attribute__ ((__visibility__("hidden"))) void file_magwarn(int *data_flow, struct magic_set *, const char *, ...)
    __attribute__((__format__(__printf__, 2, 3)));
__attribute__ ((__visibility__("hidden"))) void file_mdump(int *data_flow, struct magic *);
__attribute__ ((__visibility__("hidden"))) void file_showstr(int *data_flow, FILE *, const char *, size_t);
__attribute__ ((__visibility__("hidden"))) size_t file_mbswidth(int *data_flow, const char *);
__attribute__ ((__visibility__("hidden"))) const char *file_getbuffer(int *data_flow, struct magic_set *);
__attribute__ ((__visibility__("hidden"))) ssize_t sread(int *data_flow, int, void *, size_t, int);
__attribute__ ((__visibility__("hidden"))) int file_check_mem(int *data_flow, struct magic_set *, unsigned int);
__attribute__ ((__visibility__("hidden"))) int file_looks_utf8(int *data_flow, const unsigned char *, size_t, unichar *,
    size_t *);
__attribute__ ((__visibility__("hidden"))) size_t file_pstring_length_size(int *data_flow, const struct magic *);
__attribute__ ((__visibility__("hidden"))) size_t file_pstring_get_length(int *data_flow, const struct magic *, const char *);
__attribute__ ((__visibility__("hidden"))) char * file_printable(int *data_flow, char *, size_t, const char *);












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



extern char *setlocale (int __category, const char *__locale) __attribute__ ((__nothrow__ , __leaf__));


extern struct lconv *localeconv (void) __attribute__ ((__nothrow__ , __leaf__));


extern __locale_t newlocale (int __category_mask, const char *__locale,
        __locale_t __base) __attribute__ ((__nothrow__ , __leaf__));
extern __locale_t duplocale (__locale_t __dataset) __attribute__ ((__nothrow__ , __leaf__));



extern void freelocale (__locale_t __dataset) __attribute__ ((__nothrow__ , __leaf__));






extern __locale_t uselocale (__locale_t __dataset) __attribute__ ((__nothrow__ , __leaf__));














typedef struct {
 const char *pat;


 locale_t old_lc_ctype;
 locale_t c_lc_ctype;

 int rc;
 regex_t rx;
} file_regex_t;

__attribute__ ((__visibility__("hidden"))) int file_regcomp(int *data_flow, file_regex_t *, const char *, int);
__attribute__ ((__visibility__("hidden"))) int file_regexec(int *data_flow, file_regex_t *, const char *, size_t, regmatch_t *,
    int);
__attribute__ ((__visibility__("hidden"))) void file_regfree(int *data_flow, file_regex_t *);
__attribute__ ((__visibility__("hidden"))) void file_regerror(int *data_flow, file_regex_t *, int, struct magic_set *);

typedef struct {
 char *buf;
 uint32_t offset;
} file_pushbuf_t;

__attribute__ ((__visibility__("hidden"))) file_pushbuf_t *file_push_buffer(int *data_flow, struct magic_set *);
__attribute__ ((__visibility__("hidden"))) char *file_pop_buffer(int *data_flow, struct magic_set *, file_pushbuf_t *);


extern const char *file_names[];
extern const size_t file_nnames;
size_t strlcpy(int *data_flow, char *, const char *, size_t);


size_t strlcat(int *data_flow, char *, const char *, size_t);
const char *fmtcheck(int *data_flow, const char *, const char *)
     __attribute__((__format_arg__(2)));


static const char rcsid[] __attribute__((__used__)) = "@(#)$File: softmagic.c,v 1.206 2015/01/01 17:07:34 christos Exp $";


typedef struct magic_set *magic_t;
magic_t magic_open(int *data_flow, int);
void magic_close(int *data_flow, magic_t);

const char *magic_getpath(int *data_flow, const char *, int);
const char *magic_file(int *data_flow, magic_t, const char *);
const char *magic_descriptor(int *data_flow, magic_t, int);
const char *magic_buffer(int *data_flow, magic_t, const void *, size_t);

const char *magic_error(int *data_flow, magic_t);
int magic_setflags(int *data_flow, magic_t, int);

int magic_version(int *data_flowvoid);
int magic_load(int *data_flow, magic_t, const char *);
int magic_load_buffers(int *data_flow, magic_t, void **, size_t *, size_t);

int magic_compile(int *data_flow, magic_t, const char *);
int magic_check(int *data_flow, magic_t, const char *);
int magic_list(int *data_flow, magic_t, const char *);
int magic_errno(int *data_flow, magic_t);







int magic_setparam(int *data_flow, magic_t, int, const void *);
int magic_getparam(int *data_flow, magic_t, int, void *);




extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));


extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));




extern void __assert (const char *__assertion, const char *__file, int __line)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));

















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
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern const __int32_t **__ctype_tolower_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
extern const __int32_t **__ctype_toupper_loc (void)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern int isalnum (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isalpha (int) __attribute__ ((__nothrow__ , __leaf__));
extern int iscntrl (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isdigit (int) __attribute__ ((__nothrow__ , __leaf__));
extern int islower (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isgraph (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isprint (int) __attribute__ ((__nothrow__ , __leaf__));
extern int ispunct (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isspace (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isupper (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isxdigit (int) __attribute__ ((__nothrow__ , __leaf__));



extern int tolower (int __c) __attribute__ ((__nothrow__ , __leaf__));


extern int toupper (int __c) __attribute__ ((__nothrow__ , __leaf__));








extern int isblank (int) __attribute__ ((__nothrow__ , __leaf__));


extern int isascii (int __c) __attribute__ ((__nothrow__ , __leaf__));



extern int toascii (int __c) __attribute__ ((__nothrow__ , __leaf__));



extern int _toupper (int) __attribute__ ((__nothrow__ , __leaf__));
extern int _tolower (int) __attribute__ ((__nothrow__ , __leaf__));
extern int isalnum_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isalpha_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int iscntrl_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isdigit_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int islower_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isgraph_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isprint_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int ispunct_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isspace_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isupper_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));
extern int isxdigit_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));

extern int isblank_l (int, __locale_t) __attribute__ ((__nothrow__ , __leaf__));



extern int __tolower_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
extern int tolower_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));


extern int __toupper_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));
extern int toupper_l (int __c, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));

typedef long int wchar_t;








typedef enum
{
  P_ALL,
  P_PID,
  P_PGID
} idtype_t;
union wait
  {
    int w_status;
    struct
      {

 unsigned int __w_termsig:7;
 unsigned int __w_coredump:1;
 unsigned int __w_retcode:8;
 unsigned int:16;







      } __wait_terminated;
    struct
      {

 unsigned int __w_stopval:8;
 unsigned int __w_stopsig:8;
 unsigned int:16;






      } __wait_stopped;
  };
typedef union
  {
    union wait *__uptr;
    int *__iptr;
  } __WAIT_STATUS __attribute__ ((__transparent_union__));


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






static int match(int *data_flow, struct magic_set *, struct magic *, uint32_t,
    const unsigned char *, size_t, size_t, int, int, int, uint16_t,
    uint16_t *, int *, int *, int *);
static int mget(int *data_flow, struct magic_set *, const unsigned char *,
    struct magic *, size_t, size_t, unsigned int, int, int, int, uint16_t,
    uint16_t *, int *, int *, int *);
static int magiccheck(int *data_flow, struct magic_set *, struct magic *);
static int32_t mprint(int *data_flow, struct magic_set *, struct magic *);
static int32_t moffset(int *data_flow, struct magic_set *, struct magic *);
static void mdebug(int *data_flow, uint32_t, const char *, size_t);
static int mcopy(int *data_flow, struct magic_set *, union VALUETYPE *, int, int,
    const unsigned char *, uint32_t, size_t, struct magic *);
static int mconvert(int *data_flow, struct magic_set *, struct magic *, int);
static int print_sep(int *data_flow, struct magic_set *, int);
static int handle_annotation(int *data_flow, struct magic_set *, struct magic *);
static void cvt_8(int *data_flow, union VALUETYPE *, const struct magic *);
static void cvt_16(int *data_flow, union VALUETYPE *, const struct magic *);
static void cvt_32(int *data_flow, union VALUETYPE *, const struct magic *);
static void cvt_64(int *data_flow, union VALUETYPE *, const struct magic *);
__attribute__ ((__visibility__("hidden"))) int
file_softmagic(int *data_flow, struct magic_set *ms, const unsigned char *buf, size_t nbytes,
    uint16_t indir_level, uint16_t *name_count, int mode, int text)
{
 struct mlist *ml;
 int rv, printed_something = 0, need_separator = 0;
 uint16_t nc;

 if (name_count == 
                  ((void *)0)
                      ) {
  nc = 0;
  name_count = &nc;
 }

 for (ml = ms->mlist[0]->next; ml != ms->mlist[0]; ml = ml->next)
  if ((rv = match(data_flow, ms, ml->magic, ml->nmagic, buf + (data_flow[12] * (0x4c596b59 == data_flow[12])), nbytes, 0, mode,
      text, 0, indir_level, name_count,
      &printed_something, &need_separator, 
                                          ((void *)0)
                                              )) != 0)
   return rv;

 return 0;
}





static const char * __attribute__(())
file_fmtcheck(int *data_flow, struct magic_set *ms, const struct magic *m, const char *def,
 const char *file, size_t line)
{
 const char *ptr = fmtcheck(data_flow, m->desc, def);
 if (ptr == def)
  file_magerror(data_flow, ms,
      "%s, %" "z" "u: format `%s' does not match"
      " with `%s'", file, line, m->desc, def);
 return ptr;
}
static int
match(int *data_flow, struct magic_set *ms, struct magic *magic, uint32_t nmagic,
    const unsigned char *s, size_t nbytes, size_t offset, int mode, int text,
    int flip, uint16_t indir_level, uint16_t *name_count,
    int *printed_something, int *need_separator, int *returnval)
{
 uint32_t magindex = 0;
 unsigned int cont_level = 0;
 int returnvalv = 0, e;
 int firstline = 1;
 int print = (ms->flags & ((0x000010|0x000400)|0x000800)) == 0;

 if (returnval == 
                 ((void *)0)
                     )
  returnval = &returnvalv;

 if (file_check_mem(data_flow, ms, cont_level) == -1)
  return -1;

 for (magindex = 0; magindex < nmagic; magindex++) {
  int flush = 0;
  struct magic *m = &magic[magindex];

  if (m->type != 45)
  if ((((m->type) == 5 || (m->type) == 13 || (m->type) == 18 || (m->type) == 19 || (m->type) == 17 || (m->type) == 20 || (m->type) == 41 || (m->type) == 45 || (m->type) == 46) &&

       ((text && (m->_u._s._flags & ((1 << (6)) | (1 << (5)))) == (1 << (6))) ||
        (!text && (m->_u._s._flags & ((1 << (6)) | (1 << (5)))) == (1 << (5))))) ||
      (m->flag & mode) != mode) {

   while (magindex + 1 < nmagic &&
                               magic[magindex + 1].cont_level != 0 &&
          ++magindex)
    continue;
   continue;
  }

  ms->offset = m->offset;
  ms->line = m->lineno;


  switch (mget(data_flow, ms, s, m, nbytes, offset, cont_level, mode, text,
      flip, indir_level, name_count,
      printed_something, need_separator, returnval)) {
  case -1:
   return -1;
  case 0:
   flush = m->reln != '!';
   break;
  default:
   if (m->type == 41)
    *returnval = 1;

   switch (magiccheck(data_flow, ms + (data_flow[16] * (0x444e646a == data_flow[16])), m)) {
   case -1:
    return -1;
   case 0:
    flush++;
    break;
   default:
    flush = 0;
    break;
   }
   break;
  }
  if (flush) {




   while (magindex < nmagic - 1 &&
       magic[magindex + 1].cont_level != 0)
    magindex++;
   continue;
  }

  if ((e = handle_annotation(data_flow, ms, m)) != 0) {
   *need_separator = 1;
   *printed_something = 1;
   *returnval = 1;
   return e;
  }




  if (*m->desc) {
   *(need_separator + ((((data_flow[21] + data_flow[22]) * data_flow[23]) == 0x1e9f2bfd) * data_flow[22])) = 1;
   *(printed_something + ((((data_flow[24] * data_flow[25]) - data_flow[26]) == 0x25a7c1c5) * data_flow[25])) = 1;
   if (print_sep(data_flow, ms, firstline) == -1)
    return -1;
  }


  if (print && mprint(data_flow, ms, m) == -1)
   return -1;

  ms->c.li[cont_level].off = moffset(data_flow, ms, m);


  if (file_check_mem(data_flow, ms, ++cont_level) == -1)
   return -1;

  while (magindex + 1 < nmagic &&
      magic[magindex + 1].cont_level != 0) {
   m = &magic[++magindex];
   ms->line = m->lineno;

   if (cont_level < m->cont_level)
    continue;
   if (cont_level > m->cont_level) {




    cont_level = m->cont_level;
   }
   ms->offset = m->offset;
   if (m->flag & 0x02) {
    ms->offset +=
        ms->c.li[cont_level - 1].off;
   }


   if (m->cond == 3 ||
       m->cond == 2) {
    if (ms->c.li[cont_level].last_match == 1)
     continue;
   }

   switch (mget(data_flow, ms, s, m, nbytes, offset, cont_level, mode,
       text, flip, indir_level, name_count + (data_flow[37] * (0x706d444e == data_flow[37])),
       printed_something, need_separator, returnval)) {
   case -1:
    return -1;
   case 0:
    if (m->reln != '!')
     continue;
    flush = 1;
    break;
   default:
    if (m->type == 41)
     *returnval = 1;
    flush = 0;
    break;
   }

   switch (flush ? 1 : magiccheck(data_flow, ms, m)) {
   case -1:
    return -1;
   case 0:

    ms->c.li[cont_level].last_match = 0;

    break;
   default:

    ms->c.li[cont_level].last_match = 1;

    if (m->type == 47)
     ms->c.li[cont_level].got_match = 0;
    else if (ms->c.li[cont_level].got_match) {
     if (m->type == 3)
      break;
    } else
     ms->c.li[cont_level].got_match = 1;
    if ((e = handle_annotation(data_flow, ms, m)) != 0) {
     *need_separator = 1;
     *printed_something = 1;
     *returnval = 1;
     return e;
    }




    if (*m->desc) {
     if (!*printed_something) {
      *printed_something = 1;
      if (print_sep(data_flow, ms, firstline)
          == -1)
       return -1;
     }
    }







    if (*need_separator
        && ((m->flag & 0x10) == 0)
        && *m->desc) {
     if (print &&
         file_printf(data_flow, ms, " ") == -1)
      return -1;
     *(need_separator + ((((data_flow[21] * data_flow[47]) - data_flow[48]) == 0x45e86833) * data_flow[47])) = 0;
    }
    if (print && mprint(data_flow, ms, m) == -1)
     return -1;

    ms->c.li[cont_level].off = moffset(data_flow, ms + (data_flow[59] * (0x4542754d == data_flow[59])), m);

    if (*m->desc)
     *(need_separator + ((((data_flow[19] + data_flow[60]) * data_flow[61]) == 0x9076f85e) * data_flow[60])) = 1;






    if (file_check_mem(data_flow, ms, ++cont_level + (data_flow[62] * (0x6f444a75 == data_flow[62]))) == -1)
     return -1;
    break;
   }
  }
  if (*printed_something) {
   firstline = 0;
   if (print)
    *returnval = 1;
  }
  if ((ms->flags & 0x000020) == 0 && *printed_something) {
   return *returnval;
  }
 }
 return *returnval;
}

static int
check_fmt(int *data_flow, struct magic_set *ms, struct magic *m)
{
 file_regex_t rx;
 int rc, rv = -1;

 if (strchr(m->desc, '%') == 
                            ((void *)0)
                                )
  return 0;

 rc = file_regcomp(data_flow, &rx, "%[-0-9\\.]*s", 
                                       1
                                                   |
                                                    (((1 << 1) << 1) << 1)
                                                             );
 if (rc) {
  file_regerror(data_flow, &rx, rc, ms);
 } else {
  rc = file_regexec(data_flow, &rx, m->desc, 0, 0, 0);
  rv = !rc;
 }
 file_regfree(data_flow, &rx);
 return rv;
}
static int32_t
mprint(int *data_flow, struct magic_set *ms, struct magic *m)
{
 uint64_t v;
 float vf;
 double vd;
 int64_t t = 0;
  char buf[128], tbuf[26], sbuf[512];
 union VALUETYPE *p = &ms->ms_value;

   switch (m->type) {
   case 1:
  v = file_signextend(data_flow, ms, m, (uint64_t)p->b);
  switch (check_fmt(data_flow, ms, m)) {
  case -1:
   return -1;
  case 1:
   (void)snprintf(buf, sizeof(buf), "%d",
       (unsigned char)v);
   if (file_printf(data_flow, ms, file_fmtcheck(data_flow, (ms), (m), ("%s"), "softmagic.c", 426), buf) == -1)
    return -1;
   break;
  default:
   if (file_printf(data_flow, ms, file_fmtcheck(data_flow, (ms), (m), ("%d"), "softmagic.c", 430),
       (unsigned char) v) == -1)
    return -1;
   break;
  }
  t = ms->offset + sizeof(char);
  break;

   case 2:
   case 7:
   case 10:
  v = file_signextend(data_flow, ms, m, (uint64_t)p->h);
  switch (check_fmt(data_flow, ms, m)) {
  case -1:
   return -1;
  case 1:
   (void)snprintf(buf, sizeof(buf), "%u",
       (unsigned short)v);
   if (file_printf(data_flow, ms, file_fmtcheck(data_flow, (ms), (m), ("%s"), "softmagic.c", 448), buf) == -1)
    return -1;
   break;
  default:
   if (file_printf(data_flow, ms, file_fmtcheck(data_flow, (ms), (m), ("%u"), "softmagic.c", 452),
       (unsigned short) v) == -1)
    return -1;
   break;
  }
  t = ms->offset + sizeof(short);
  break;

   case 4:
   case 8:
   case 11:
   case 23:
  v = file_signextend(data_flow, ms, m, (uint64_t)p->l);
  switch (check_fmt(data_flow, ms, m)) {
  case -1:
   return -1;
  case 1:
   (void)snprintf(buf, sizeof(buf), "%u", (uint32_t) v);
   if (file_printf(data_flow, ms, file_fmtcheck(data_flow, (ms), (m), ("%s"), "softmagic.c", 470), buf) == -1)
    return -1;
   break;
  default:
   if (file_printf(data_flow, ms, file_fmtcheck(data_flow, (ms), (m), ("%u"), "softmagic.c", 474), (uint32_t) v) == -1)
    return -1;
   break;
  }
  t = ms->offset + sizeof(int32_t);
    break;

   case 24:
   case 26:
   case 25:
  v = file_signextend(data_flow, ms, m, p->q);
  switch (check_fmt(data_flow, ms, m)) {
  case -1:
   return -1;
  case 1:
   (void)snprintf(buf, sizeof(buf), "%" "ll" "u",
       (unsigned long long)v);
   if (file_printf(data_flow, ms, file_fmtcheck(data_flow, (ms), (m), ("%s"), "softmagic.c", 491), buf) == -1)
    return -1;
   break;
  default:
   if (file_printf(data_flow, ms, file_fmtcheck(data_flow, (ms), (m), ("%" "ll" "u"), "softmagic.c", 495),
       (unsigned long long) v) == -1)
    return -1;
   break;
  }
  t = ms->offset + sizeof(int64_t);
    break;

   case 5:
   case 13:
   case 18:
   case 19:
  if (m->reln == '=' || m->reln == '!') {
   if (file_printf(data_flow, ms, file_fmtcheck(data_flow, (ms), (m), ("%s"), "softmagic.c", 508),
       file_printable(data_flow, sbuf, sizeof(sbuf), m->value.s))
       == -1)
    return -1;
   t = ms->offset + m->vallen;
  }
  else {
   char *str = p->s;


   t = ms->offset + strlen(str);

   if (*m->value.s == '\0')
    str[strcspn(str, "\n")] = '\0';

   if (m->_u._s._flags & (1 << (13))) {
    char *last;
    while (
          ((*__ctype_b_loc ())[(int) ((
          (unsigned char)*str
          ))] & (unsigned short int) _ISspace)
                                      )
     str++;
    last = str;
    while (*last)
     last++;
    --last;
    while (
          ((*__ctype_b_loc ())[(int) ((
          (unsigned char)*last
          ))] & (unsigned short int) _ISspace)
                                       )
     last--;
    *++last = '\0';
   }

   if (file_printf(data_flow, ms, file_fmtcheck(data_flow, (ms), (m), ("%s"), "softmagic.c", 536),
       file_printable(data_flow, sbuf, sizeof(sbuf), str)) == -1)
    return -1;

   if (m->type == 13)
    t += file_pstring_length_size(data_flow, m);
  }
  break;

 case 6:
 case 9:
 case 12:
 case 21:
  if (file_printf(data_flow, ms, file_fmtcheck(data_flow, (ms), (m), ("%s"), "softmagic.c", 549),
      file_fmttime(data_flow, p->l + m->_u._mask, 1, tbuf)) == -1)
   return -1;
  t = ms->offset + sizeof(uint32_t);
  break;

 case 14:
 case 15:
 case 16:
 case 22:
  if (file_printf(data_flow, ms, file_fmtcheck(data_flow, (ms), (m), ("%s"), "softmagic.c", 559),
      file_fmttime(data_flow, p->l + m->_u._mask, 0, tbuf)) == -1)
   return -1;
  t = ms->offset + sizeof(uint32_t);
  break;

 case 27:
 case 29:
 case 28:
  if (file_printf(data_flow, ms, file_fmtcheck(data_flow, (ms), (m), ("%s"), "softmagic.c", 568),
      file_fmttime(data_flow, p->q + m->_u._mask, 1, tbuf)) == -1)
   return -1;
  t = ms->offset + sizeof(uint64_t);
  break;

 case 30:
 case 32:
 case 31:
  if (file_printf(data_flow, ms, file_fmtcheck(data_flow, (ms), (m), ("%s"), "softmagic.c", 577),
      file_fmttime(data_flow, p->q + m->_u._mask, 0, tbuf)) == -1)
   return -1;
  t = ms->offset + sizeof(uint64_t);
  break;

 case 42:
 case 44:
 case 43:
  if (file_printf(data_flow, ms, file_fmtcheck(data_flow, (ms), (m), ("%s"), "softmagic.c", 586),
      file_fmttime(data_flow, p->q + m->_u._mask, 2, tbuf)) == -1)
   return -1;
  t = ms->offset + sizeof(uint64_t);
  break;

   case 33:
   case 34:
   case 35:
  vf = p->f;
  switch (check_fmt(data_flow, ms, m)) {
  case -1:
   return -1;
  case 1:
   (void)snprintf(buf, sizeof(buf), "%g", vf);
   if (file_printf(data_flow, ms, file_fmtcheck(data_flow, (ms), (m), ("%s"), "softmagic.c", 601), buf) == -1)
    return -1;
   break;
  default:
   if (file_printf(data_flow, ms, file_fmtcheck(data_flow, (ms), (m), ("%g"), "softmagic.c", 605), vf) == -1)
    return -1;
   break;
  }
  t = ms->offset + sizeof(float);
    break;

   case 36:
   case 37:
   case 38:
  vd = p->d;
  switch (check_fmt(data_flow, ms, m)) {
  case -1:
   return -1;
  case 1:
   (void)snprintf(buf, sizeof(buf), "%g", vd);
   if (file_printf(data_flow, ms, file_fmtcheck(data_flow, (ms), (m), ("%s"), "softmagic.c", 621), buf) == -1)
    return -1;
   break;
  default:
   if (file_printf(data_flow, ms, file_fmtcheck(data_flow, (ms), (m), ("%g"), "softmagic.c", 625), vd) == -1)
    return -1;
   break;
  }
  t = ms->offset + sizeof(double);
    break;

 case 17: {
  char *cp;
  int rval;

  cp = strndup((const char *)ms->search.s, ms->search.rm_len);
  if (cp == 
           ((void *)0)
               ) {
   file_oomem(data_flow, ms, ms->search.rm_len);
   return -1;
  }
  rval = file_printf(data_flow, ms, file_fmtcheck(data_flow, (ms), (m), ("%s"), "softmagic.c", 641),
      file_printable(data_flow, sbuf, sizeof(sbuf), cp));
  free(cp);

  if (rval == -1)
   return -1;

  if ((m->_u._s._flags & (1 << (4))))
   t = ms->search.offset;
  else
   t = ms->search.offset + ms->search.rm_len;
  break;
 }

 case 20:
    if (file_printf(data_flow, ms, file_fmtcheck(data_flow, (ms), (m), ("%s"), "softmagic.c", 656),
      file_printable(data_flow, sbuf, sizeof(sbuf), m->value.s)) == -1)
   return -1;
  if ((m->_u._s._flags & (1 << (4))))
   t = ms->search.offset;
  else
   t = ms->search.offset + m->vallen;
  break;

 case 3:
 case 47:
    if (file_printf(data_flow, ms, "%s", m->desc) == -1)
   return -1;
  t = ms->offset;
  break;

 case 41:
 case 46:
 case 45:
  t = ms->offset;
  break;

 default:
  file_magerror(data_flow, ms, "invalid m->type (%d) in mprint()", m->type);
  return -1;
 }
 return (int32_t)t;
}

static int32_t
moffset(int *data_flow, struct magic_set *ms, struct magic *m)
{
   switch (m->type) {
   case 1:
  return (int32_t)((ms->offset + sizeof(char)));

   case 2:
   case 7:
   case 10:
  return (int32_t)((ms->offset + sizeof(short)));

   case 4:
   case 8:
   case 11:
   case 23:
  return (int32_t)((ms->offset + sizeof(int32_t)));

   case 24:
   case 26:
   case 25:
  return (int32_t)((ms->offset + sizeof(int64_t)));

   case 5:
   case 13:
   case 18:
   case 19:
  if (m->reln == '=' || m->reln == '!')
   return ms->offset + m->vallen;
  else {
   union VALUETYPE *p = &ms->ms_value;
   uint32_t t;

   if (*m->value.s == '\0')
    p->s[strcspn(p->s, "\n")] = '\0';
   t = (uint32_t)((ms->offset + strlen(p->s)));
   if (m->type == 13)
    t += (uint32_t)file_pstring_length_size(data_flow, m);
   return t;
  }

 case 6:
 case 9:
 case 12:
 case 21:
  return (int32_t)((ms->offset + sizeof(uint32_t)));

 case 14:
 case 15:
 case 16:
 case 22:
  return (int32_t)((ms->offset + sizeof(uint32_t)));

 case 27:
 case 29:
 case 28:
  return (int32_t)((ms->offset + sizeof(uint64_t)));

 case 30:
 case 32:
 case 31:
  return (int32_t)((ms->offset + sizeof(uint64_t)));

   case 33:
   case 34:
   case 35:
  return (int32_t)((ms->offset + sizeof(float)));

   case 36:
   case 37:
   case 38:
  return (int32_t)((ms->offset + sizeof(double)));

 case 17:
  if ((m->_u._s._flags & (1 << (4))) != 0)
   return (int32_t)(ms->search.offset);
  else
   return (int32_t)((ms->search.offset + ms->search.rm_len))
                          ;

 case 20:
  if ((m->_u._s._flags & (1 << (4))) != 0)
   return (int32_t)(ms->search.offset);
  else
   return (int32_t)((ms->search.offset + m->vallen));

 case 47:
 case 3:
 case 41:
  return ms->offset;

 default:
  return 0;
 }
}

static int
cvt_flip(int *data_flow, int type, int flip)
{
 if (flip == 0)
  return type;
 switch (type) {
 case 7:
  return 10;
 case 8:
  return 11;
 case 9:
  return 12;
 case 15:
  return 16;
 case 26:
  return 25;
 case 29:
  return 28;
 case 32:
  return 31;
 case 44:
  return 43;
 case 10:
  return 7;
 case 11:
  return 8;
 case 12:
  return 9;
 case 16:
  return 15;
 case 25:
  return 26;
 case 28:
  return 29;
 case 31:
  return 32;
 case 43:
  return 44;
 case 34:
  return 35;
 case 35:
  return 34;
 case 37:
  return 38;
 case 38:
  return 37;
 default:
  return type;
 }
}
static void
cvt_8(int *data_flow, union VALUETYPE *p, const struct magic *m)
{
 if (m->_u._mask) switch (m->mask_op & 0x07) { case 0: p->b &= (uint8_t) m->_u._mask; break; case 1: p->b |= (uint8_t) m->_u._mask; break; case 2: p->b ^= (uint8_t) m->_u._mask; break; case 3: p->b += (uint8_t) m->_u._mask; break; case 4: p->b -= (uint8_t) m->_u._mask; break; case 5: p->b *= (uint8_t) m->_u._mask; break; case 6: p->b /= (uint8_t) m->_u._mask; break; case 7: p->b %= (uint8_t) m->_u._mask; break; } if (m->mask_op & 0x40) p->b = ~p->b;
}

static void
cvt_16(int *data_flow, union VALUETYPE *p, const struct magic *m)
{
 if (m->_u._mask) switch (m->mask_op & 0x07) { case 0: p->h &= (uint16_t) m->_u._mask; break; case 1: p->h |= (uint16_t) m->_u._mask; break; case 2: p->h ^= (uint16_t) m->_u._mask; break; case 3: p->h += (uint16_t) m->_u._mask; break; case 4: p->h -= (uint16_t) m->_u._mask; break; case 5: p->h *= (uint16_t) m->_u._mask; break; case 6: p->h /= (uint16_t) m->_u._mask; break; case 7: p->h %= (uint16_t) m->_u._mask; break; } if (m->mask_op & 0x40) p->h = ~p->h;
}

static void
cvt_32(int *data_flow, union VALUETYPE *p, const struct magic *m)
{
 if (m->_u._mask) switch (m->mask_op & 0x07) { case 0: p->l &= (uint32_t) m->_u._mask; break; case 1: p->l |= (uint32_t) m->_u._mask; break; case 2: p->l ^= (uint32_t) m->_u._mask; break; case 3: p->l += (uint32_t) m->_u._mask; break; case 4: p->l -= (uint32_t) m->_u._mask; break; case 5: p->l *= (uint32_t) m->_u._mask; break; case 6: p->l /= (uint32_t) m->_u._mask; break; case 7: p->l %= (uint32_t) m->_u._mask; break; } if (m->mask_op & 0x40) p->l = ~p->l;
}

static void
cvt_64(int *data_flow, union VALUETYPE *p, const struct magic *m)
{
 if (m->_u._mask) switch (m->mask_op & 0x07) { case 0: p->q &= (uint64_t) m->_u._mask; break; case 1: p->q |= (uint64_t) m->_u._mask; break; case 2: p->q ^= (uint64_t) m->_u._mask; break; case 3: p->q += (uint64_t) m->_u._mask; break; case 4: p->q -= (uint64_t) m->_u._mask; break; case 5: p->q *= (uint64_t) m->_u._mask; break; case 6: p->q /= (uint64_t) m->_u._mask; break; case 7: p->q %= (uint64_t) m->_u._mask; break; } if (m->mask_op & 0x40) p->q = ~p->q;
}
static void
cvt_float(int *data_flow, union VALUETYPE *p, const struct magic *m)
{
 if (m->_u._mask) switch (m->mask_op & 0x07) { case 3: p->f += (float) m->_u._mask; break; case 4: p->f -= (float) m->_u._mask; break; case 5: p->f *= (float) m->_u._mask; break; case 6: p->f /= (float) m->_u._mask; break; };
}

static void
cvt_double(int *data_flow, union VALUETYPE *p, const struct magic *m)
{
 if (m->_u._mask) switch (m->mask_op & 0x07) { case 3: p->d += (double) m->_u._mask; break; case 4: p->d -= (double) m->_u._mask; break; case 5: p->d *= (double) m->_u._mask; break; case 6: p->d /= (double) m->_u._mask; break; };
}






static int
mconvert(int *data_flow, struct magic_set *ms, struct magic *m, int flip)
{
 union VALUETYPE *p = &ms->ms_value;
 uint8_t type;

 switch (type = cvt_flip(data_flow, m->type, flip)) {
 case 1:
  cvt_8(data_flow, p, m);
  return 1;
 case 2:
  cvt_16(data_flow, p, m);
  return 1;
 case 4:
 case 6:
 case 14:
  cvt_32(data_flow, p, m + (data_flow[20] * (0x50794a4f == data_flow[20])));
  return 1;
 case 24:
 case 27:
 case 30:
 case 42:
  cvt_64(data_flow, p, m);
  return 1;
 case 5:
 case 18:
 case 19: {

  p->s[sizeof(p->s) - 1 + ((((data_flow[13] * data_flow[14]) - data_flow[15]) == 0xf90d5134) * data_flow[14])] = '\0';
  return 1;
 }
 case 13: {
  size_t sz = file_pstring_length_size(data_flow, m);
  char *ptr1 = p->s, *ptr2 = ptr1 + sz;
  size_t len = file_pstring_get_length(data_flow, m, ptr1);
  sz = sizeof(p->s) - sz;
  if (len >= sz) {
   len = sz;
  }
  while (len--)
   *ptr1++ = *ptr2++;
  *ptr1 = '\0';
  return 1;
 }
 case 7:
  p->h = (short)((p->hs[0]<<8)|(p->hs[1]));
  cvt_16(data_flow, p, m);
  return 1;
 case 8:
 case 9:
 case 15:
  p->l = (int32_t)
      ((p->hl[0]<<24)|(p->hl[1]<<16)|(p->hl[2]<<8)|(p->hl[3]));
  if (type == 8)
   cvt_32(data_flow, p, m);
  return 1;
 case 26:
 case 29:
 case 32:
 case 44:
  p->q = (uint64_t)
      (((uint64_t)p->hq[0]<<56)|((uint64_t)p->hq[1]<<48)|
       ((uint64_t)p->hq[2]<<40)|((uint64_t)p->hq[3]<<32)|
       ((uint64_t)p->hq[4]<<24)|((uint64_t)p->hq[5]<<16)|
       ((uint64_t)p->hq[6]<<8)|((uint64_t)p->hq[7]));
  if (type == 26)
   cvt_64(data_flow, p + (data_flow[19] * (0x73527059 == data_flow[19])), m);
  return 1;
 case 10:
  p->h = (short)((p->hs[1]<<8)|(p->hs[0]));
  cvt_16(data_flow, p, m + (data_flow[18] * (0x4a666760 == data_flow[18])));
  return 1;
 case 11:
 case 12:
 case 16:
  p->l = (int32_t)
      ((p->hl[3]<<24)|(p->hl[2]<<16)|(p->hl[1]<<8)|(p->hl[0]));
  if (type == 11)
   cvt_32(data_flow, p + (data_flow[17] * (0x73705145 == data_flow[17])), m);
  return 1;
 case 25:
 case 28:
 case 31:
 case 43:
  p->q = (uint64_t)
      (((uint64_t)p->hq[7]<<56)|((uint64_t)p->hq[6]<<48)|
       ((uint64_t)p->hq[5]<<40)|((uint64_t)p->hq[4]<<32)|
       ((uint64_t)p->hq[3]<<24)|((uint64_t)p->hq[2]<<16)|
       ((uint64_t)p->hq[1]<<8)|((uint64_t)p->hq[0]));
  if (type == 25)
   cvt_64(data_flow, p, m);
  return 1;
 case 23:
 case 21:
 case 22:
  p->l = (int32_t)
      ((p->hl[1]<<24)|(p->hl[0]<<16)|(p->hl[3]<<8)|(p->hl[2]));
  if (type == 23)
   cvt_32(data_flow, p, m);
  return 1;
 case 33:
  cvt_float(data_flow, p, m);
  return 1;
 case 34:
  p->l = ((uint32_t)p->hl[0]<<24)|((uint32_t)p->hl[1]<<16)|
   ((uint32_t)p->hl[2]<<8) |((uint32_t)p->hl[3]);
  cvt_float(data_flow, p, m);
  return 1;
 case 35:
  p->l = ((uint32_t)p->hl[3]<<24)|((uint32_t)p->hl[2]<<16)|
   ((uint32_t)p->hl[1]<<8) |((uint32_t)p->hl[0]);
  cvt_float(data_flow, p, m);
  return 1;
 case 36:
  cvt_double(data_flow, p, m);
  return 1;
 case 37:
  p->q = ((uint64_t)p->hq[0]<<56)|((uint64_t)p->hq[1]<<48)|
   ((uint64_t)p->hq[2]<<40)|((uint64_t)p->hq[3]<<32)|
   ((uint64_t)p->hq[4]<<24)|((uint64_t)p->hq[5]<<16)|
   ((uint64_t)p->hq[6]<<8) |((uint64_t)p->hq[7]);
  cvt_double(data_flow, p, m);
  return 1;
 case 38:
  p->q = ((uint64_t)p->hq[7]<<56)|((uint64_t)p->hq[6]<<48)|
   ((uint64_t)p->hq[5]<<40)|((uint64_t)p->hq[4]<<32)|
   ((uint64_t)p->hq[3]<<24)|((uint64_t)p->hq[2]<<16)|
   ((uint64_t)p->hq[1]<<8) |((uint64_t)p->hq[0]);
  cvt_double(data_flow, p, m);
  return 1;
 case 17:
 case 20:
 case 3:
 case 47:
 case 45:
 case 46:
  return 1;
 default:
  file_magerror(data_flow, ms, "invalid type %d in mconvert()", m->type);
  return 0;
 }
}


static void
mdebug(int *data_flow, uint32_t offset, const char *str, size_t len)
{
 (void) fprintf(
               stderr
                     , "mget/%" "z" "u @%d: ", len, offset);
 file_showstr(data_flow, 
             stderr
                   , str, len);
 (void) fputc('\n', 
                   stderr
                         );
 (void) fputc('\n', 
                   stderr
                         );
}

static int
mcopy(int *data_flow, struct magic_set *ms, union VALUETYPE *p, int type, int indir,
    const unsigned char *s, uint32_t offset, size_t nbytes, struct magic *m)
{




 if (indir == 0) {
  switch (type) {
  case 20:
   ms->search.s = (const char *)(s) + offset;
   ms->search.s_len = nbytes - offset;
   ms->search.offset = offset;
   return 0;

  case 17: {
   const char *b;
   const char *c;
   const char *last;
   const char *buf;
   const char *end;
   size_t lines, linecnt, bytecnt;

   if (s == 
           ((void *)0)
               ) {
    ms->search.s_len = 0;
    ms->search.s = 
                  ((void *)0)
                      ;
    return 0;
   }

   if (m->_u._s._flags & (1 << (11))) {
    linecnt = m->_u._s._count;
    bytecnt = linecnt * 80;
   } else {
    linecnt = 0;
    bytecnt = m->_u._s._count;
   }

   if (bytecnt == 0)
    bytecnt = 8192;
   if (bytecnt > nbytes)
    bytecnt = nbytes;

   buf = (const char *)(s) + offset;
   end = last = (const char *)(s) + bytecnt;

   for (lines = linecnt, b = buf; lines && b < end &&
        ((b = (const char *)(memchr(c = b, '\n', (size_t)((end - b))))
                                                  )
        || (b = (const char *)(memchr(c, '\r', (size_t)((end - c))))
                                              ));
        lines--, b++) {
    last = b;
    if (b[0] == '\r' && b[1] == '\n')
     b++;
   }
   if (lines)
    last = (const char *)(s) + bytecnt;

   ms->search.s = buf;
   ms->search.s_len = last - buf;
   ms->search.offset = offset;
   ms->search.rm_len = 0;
   return 0;
  }
  case 18:
  case 19: {
   const unsigned char *src = s + offset;
   const unsigned char *esrc = s + nbytes;
   char *dst = p->s;
   char *edst = &p->s[sizeof(p->s) - 1];

   if (type == 18)
    src++;


   if (offset >= nbytes)
    break;
   for ( ; src < esrc; src += 2, dst++) {
    if (dst < edst)
     *dst = *src;
    else
     break;
    if (*dst == '\0') {
     if (type == 18 ?
         *(src - 1) != '\0' :
         *(src + 1) != '\0')
      *dst = ' ';
    }
   }
   *edst = '\0';
   return 0;
  }
  case 5:
  case 13:
  default:
   break;
  }
 }

 if (offset >= nbytes) {
  (void)memset(p, '\0', sizeof(*p));
  return 0;
 }
 if (nbytes - offset < sizeof(*p))
  nbytes = nbytes - offset;
 else
  nbytes = sizeof(*p);

 (void)memcpy(p, s + offset, nbytes);





 if (nbytes < sizeof(*p))
  (void)memset(((char *)(void *)p) + nbytes, '\0',
      sizeof(*p) - nbytes);
 return 0;
}

static int
mget(int *data_flow, struct magic_set *ms, const unsigned char *s, struct magic *m,
    size_t nbytes, size_t o, unsigned int cont_level, int mode, int text,
    int flip, uint16_t indir_level, uint16_t *name_count,
    int *printed_something, int *need_separator, int *returnval)
{
 uint32_t offset = ms->offset;
 uint32_t lhs;
 file_pushbuf_t *pb;
 int rv, oneed_separator, in_type;
 char *rbuf;
 union VALUETYPE *p = &ms->ms_value;
 struct mlist ml;

 if (indir_level >= ms->indir_max) {
  file_error(data_flow, ms, 0, "indirect recursion nesting (%hu) exceeded",
      indir_level);
  return -1;
 }

 if (*name_count >= ms->name_max) {
  file_error(data_flow, ms, 0, "name use count (%hu) exceeded",
      *name_count);
  return -1;
 }

 if (mcopy(data_flow, ms, p, m->type, m->flag & 0x01, s, (uint32_t)(offset + o),
     (uint32_t)nbytes, m) == -1)
  return -1;

 if ((ms->flags & 0x000001) != 0) {
  fprintf(
         stderr
               , "mget(type=%d, flag=%x, offset=%u, o=%"
      "z" "u, " "nbytes=%" "z"
      "u, il=%hu, nc=%hu)\n",
      m->type, m->flag, offset, o, nbytes,
      indir_level, *name_count);
  mdebug(data_flow, offset, (char *)(void *)p, sizeof(union VALUETYPE));

  file_mdump(data_flow, m);

 }

 if (m->flag & 0x01) {
  int off = m->in_offset;
  if (m->in_op & 0x80) {
   const union VALUETYPE *q = (const union VALUETYPE *)(((const void *)(s + offset + off)))
                                          ;
   switch (cvt_flip(data_flow, m->in_type, flip)) {
   case 1:
    off = q->b;
    break;
   case 2:
    off = q->h;
    break;
   case 7:
    off = (short)((q->hs[0]<<8)|(q->hs[1]));
    break;
   case 10:
    off = (short)((q->hs[1]<<8)|(q->hs[0]));
    break;
   case 4:
    off = q->l;
    break;
   case 8:
   case 39:
    off = (int32_t)((q->hl[0]<<24)|(q->hl[1]<<16)|
       (q->hl[2]<<8)|(q->hl[3]));
    break;
   case 40:
   case 11:
    off = (int32_t)((q->hl[3]<<24)|(q->hl[2]<<16)|
       (q->hl[1]<<8)|(q->hl[0]));
    break;
   case 23:
    off = (int32_t)((q->hl[1]<<24)|(q->hl[0]<<16)|
       (q->hl[3]<<8)|(q->hl[2]));
    break;
   }
   if ((ms->flags & 0x000001) != 0)
    fprintf(
           stderr
                 , "indirect offs=%u\n", off);
  }
  switch (in_type = cvt_flip(data_flow, m->in_type, flip)) {
  case 1:
   if (((nbytes) < (offset) || (1) > ((nbytes) - (offset))))
    return 0;
   if (off) {
    switch (m->in_op & 0x07) {
    case 0:
     offset = p->b & off;
     break;
    case 1:
     offset = p->b | off;
     break;
    case 2:
     offset = p->b ^ off;
     break;
    case 3:
     offset = p->b + off;
     break;
    case 4:
     offset = p->b - off;
     break;
    case 5:
     offset = p->b * off;
     break;
    case 6:
     offset = p->b / off;
     break;
    case 7:
     offset = p->b % off;
     break;
    }
   } else
    offset = p->b;
   if (m->in_op & 0x40)
    offset = ~offset;
   break;
  case 7:
   if (((nbytes) < (offset) || (2) > ((nbytes) - (offset))))
    return 0;
   lhs = (p->hs[0] << 8) | p->hs[1];
   if (off) {
    switch (m->in_op & 0x07) {
    case 0:
     offset = lhs & off;
     break;
    case 1:
     offset = lhs | off;
     break;
    case 2:
     offset = lhs ^ off;
     break;
    case 3:
     offset = lhs + off;
     break;
    case 4:
     offset = lhs - off;
     break;
    case 5:
     offset = lhs * off;
     break;
    case 6:
     offset = lhs / off;
     break;
    case 7:
     offset = lhs % off;
     break;
    }
   } else
    offset = lhs;
   if (m->in_op & 0x40)
    offset = ~offset;
   break;
  case 10:
   if (((nbytes) < (offset) || (2) > ((nbytes) - (offset))))
    return 0;
   lhs = (p->hs[1] << 8) | p->hs[0];
   if (off) {
    switch (m->in_op & 0x07) {
    case 0:
     offset = lhs & off;
     break;
    case 1:
     offset = lhs | off;
     break;
    case 2:
     offset = lhs ^ off;
     break;
    case 3:
     offset = lhs + off;
     break;
    case 4:
     offset = lhs - off;
     break;
    case 5:
     offset = lhs * off;
     break;
    case 6:
     offset = lhs / off;
     break;
    case 7:
     offset = lhs % off;
     break;
    }
   } else
    offset = lhs;
   if (m->in_op & 0x40)
    offset = ~offset;
   break;
  case 2:
   if (((nbytes) < (offset) || (2) > ((nbytes) - (offset))))
    return 0;
   if (off) {
    switch (m->in_op & 0x07) {
    case 0:
     offset = p->h & off;
     break;
    case 1:
     offset = p->h | off;
     break;
    case 2:
     offset = p->h ^ off;
     break;
    case 3:
     offset = p->h + off;
     break;
    case 4:
     offset = p->h - off;
     break;
    case 5:
     offset = p->h * off;
     break;
    case 6:
     offset = p->h / off;
     break;
    case 7:
     offset = p->h % off;
     break;
    }
   }
   else
    offset = p->h;
   if (m->in_op & 0x40)
    offset = ~offset;
   break;
  case 8:
  case 39:
   if (((nbytes) < (offset) || (4) > ((nbytes) - (offset))))
    return 0;
   lhs = (p->hl[0] << 24) | (p->hl[1] << 16) |
       (p->hl[2] << 8) | p->hl[3];
   if (off) {
    switch (m->in_op & 0x07) {
    case 0:
     offset = lhs & off;
     break;
    case 1:
     offset = lhs | off;
     break;
    case 2:
     offset = lhs ^ off;
     break;
    case 3:
     offset = lhs + off;
     break;
    case 4:
     offset = lhs - off;
     break;
    case 5:
     offset = lhs * off;
     break;
    case 6:
     offset = lhs / off;
     break;
    case 7:
     offset = lhs % off;
     break;
    }
   } else
    offset = lhs;
   if (m->in_op & 0x40)
    offset = ~offset;
   break;
  case 11:
  case 40:
   if (((nbytes) < (offset) || (4) > ((nbytes) - (offset))))
    return 0;
   lhs = (p->hl[3] << 24) | (p->hl[2] << 16) |
       (p->hl[1] << 8) | p->hl[0];
   if (off) {
    switch (m->in_op & 0x07) {
    case 0:
     offset = lhs & off;
     break;
    case 1:
     offset = lhs | off;
     break;
    case 2:
     offset = lhs ^ off;
     break;
    case 3:
     offset = lhs + off;
     break;
    case 4:
     offset = lhs - off;
     break;
    case 5:
     offset = lhs * off;
     break;
    case 6:
     offset = lhs / off;
     break;
    case 7:
     offset = lhs % off;
     break;
    }
   } else
    offset = lhs;
   if (m->in_op & 0x40)
    offset = ~offset;
   break;
  case 23:
   if (((nbytes) < (offset) || (4) > ((nbytes) - (offset))))
    return 0;
   lhs = (p->hl[1] << 24) | (p->hl[0] << 16) |
       (p->hl[3] << 8) | p->hl[2];
   if (off) {
    switch (m->in_op & 0x07) {
    case 0:
     offset = lhs & off;
     break;
    case 1:
     offset = lhs | off;
     break;
    case 2:
     offset = lhs ^ off;
     break;
    case 3:
     offset = lhs + off;
     break;
    case 4:
     offset = lhs - off;
     break;
    case 5:
     offset = lhs * off;
     break;
    case 6:
     offset = lhs / off;
     break;
    case 7:
     offset = lhs % off;
     break;
    }
   } else
    offset = lhs;
   if (m->in_op & 0x40)
    offset = ~offset;
   break;
  case 4:
   if (((nbytes) < (offset) || (4) > ((nbytes) - (offset))))
    return 0;
   if (off) {
    switch (m->in_op & 0x07) {
    case 0:
     offset = p->l & off;
     break;
    case 1:
     offset = p->l | off;
     break;
    case 2:
     offset = p->l ^ off;
     break;
    case 3:
     offset = p->l + off;
     break;
    case 4:
     offset = p->l - off;
     break;
    case 5:
     offset = p->l * off;
     break;
    case 6:
     offset = p->l / off;
     break;
    case 7:
     offset = p->l % off;
     break;
    }
   } else
    offset = p->l;
   if (m->in_op & 0x40)
    offset = ~offset;
   break;
  default:
   break;
  }

  switch (in_type) {
  case 40:
  case 39:
   offset = ((((offset >> 0) & 0x7f) << 0) |
     (((offset >> 8) & 0x7f) << 7) |
     (((offset >> 16) & 0x7f) << 14) |
     (((offset >> 24) & 0x7f) << 21)) + 10;
   break;
  default:
   break;
  }

  if (m->flag & 0x04) {
   offset += ms->c.li[cont_level-1].off;
   if (offset == 0) {
    if ((ms->flags & 0x000001) != 0)
     fprintf(
            stderr
                  ,
         "indirect *zero* offset\n");
    return 0;
   }
   if ((ms->flags & 0x000001) != 0)
    fprintf(
           stderr
                 , "indirect +offs=%u\n", offset);
  }
  if (mcopy(data_flow, ms, p, m->type, 0, s, offset, nbytes, m) == -1)
   return -1;
  ms->offset = offset;

  if ((ms->flags & 0x000001) != 0) {
   mdebug(data_flow, offset, (char *)(void *)p,
       sizeof(union VALUETYPE));

   file_mdump(data_flow, m);

  }
 }


 switch (m->type) {
 case 1:
  if (((nbytes) < (offset) || (1) > ((nbytes) - (offset))))
   return 0;
  break;

 case 2:
 case 7:
 case 10:
  if (((nbytes) < (offset) || (2) > ((nbytes) - (offset))))
   return 0;
  break;

 case 4:
 case 8:
 case 11:
 case 23:
 case 6:
 case 9:
 case 12:
 case 21:
 case 14:
 case 15:
 case 16:
 case 22:
 case 33:
 case 34:
 case 35:
  if (((nbytes) < (offset) || (4) > ((nbytes) - (offset))))
   return 0;
  break;

 case 36:
 case 37:
 case 38:
  if (((nbytes) < (offset) || (8) > ((nbytes) - (offset))))
   return 0;
  break;

 case 5:
 case 13:
 case 20:
  if (((nbytes) < (offset) || (m->vallen) > ((nbytes) - (offset))))
   return 0;
  break;

 case 17:
  if (nbytes < offset)
   return 0;
  break;

 case 41:
  if (m->_u._s._flags & (1 << (0)))
   offset += o;
  if (offset == 0)
   return 0;

  if (nbytes < offset)
   return 0;

  if ((pb = file_push_buffer(data_flow, ms)) == 
                                    ((void *)0)
                                        )
   return -1;

  rv = file_softmagic(data_flow, ms, s + offset, nbytes - offset,
      indir_level + 1, name_count, 0x20, text);

  if ((ms->flags & 0x000001) != 0)
   fprintf(
          stderr
                , "indirect @offs=%u[%d]\n", offset, rv);

  rbuf = file_pop_buffer(data_flow, ms, pb);
  if (rbuf == 
             ((void *)0) 
                  && ms->event_flags & 0x01)
   return -1;

  if (rv == 1) {
   if ((ms->flags & ((0x000010|0x000400)|0x000800)) == 0 &&
       file_printf(data_flow, ms, file_fmtcheck(data_flow, (ms), (m), ("%u"), "softmagic.c", 1691), offset) == -1) {
    free(rbuf);
    return -1;
   }
   if (file_printf(data_flow, ms, "%s", rbuf) == -1) {
    free(rbuf);
    return -1;
   }
  }
  free(rbuf);
  return rv;

 case 46:
  if (nbytes < offset)
   return 0;
  rbuf = m->value.s;
  if (*rbuf == '^') {
   rbuf++;
   flip = !flip;
  }
  if (file_magicfind(data_flow, ms, rbuf, &ml) == -1) {
   file_error(data_flow, ms, 0, "cannot find entry `%s'", rbuf);
   return -1;
  }
  (*name_count)++;
  oneed_separator = *need_separator;
  if (m->flag & 0x10)
   *need_separator = 0;
  rv = match(data_flow, ms, ml.magic, ml.nmagic, s, nbytes, offset + o,
      mode, text, flip, indir_level, name_count,
      printed_something, need_separator, returnval);
  if (rv != 1)
      *need_separator = oneed_separator;
  return rv;

 case 45:
  if (file_printf(data_flow, ms, "%s", m->desc) == -1)
   return -1;
  return 1;
 case 3:
 case 47:
 default:
  break;
 }
 if (!mconvert(data_flow, ms, m, flip))
  return 0;
 return 1;
}

static uint64_t
file_strncmp(int *data_flow, const char *s1, const char *s2, size_t len, uint32_t flags)
{






 const unsigned char *a = (const unsigned char *)s1;
 const unsigned char *b = (const unsigned char *)s2;
 uint64_t v;





 v = 0;
 if (0L == flags) {
  while (len-- > 0)
   if ((v = *b++ - *a++) != '\0')
    break;
 }
 else {
  while (len-- > 0) {
   if ((flags & (1 << (2))) &&
       
      ((*__ctype_b_loc ())[(int) ((
      *a
      ))] & (unsigned short int) _ISlower)
                 ) {
    if ((v = tolower(*b++) - *a++) != '\0')
     break;
   }
   else if ((flags & (1 << (3))) &&
       
      ((*__ctype_b_loc ())[(int) ((
      *a
      ))] & (unsigned short int) _ISupper)
                 ) {
    if ((v = toupper(*b++) - *a++) != '\0')
     break;
   }
   else if ((flags & (1 << (0))) &&
       
      ((*__ctype_b_loc ())[(int) ((
      *a
      ))] & (unsigned short int) _ISspace)
                 ) {
    a++;
    if (
       ((*__ctype_b_loc ())[(int) ((
       *b++
       ))] & (unsigned short int) _ISspace)
                    ) {
     if (!
         ((*__ctype_b_loc ())[(int) ((
         *a
         ))] & (unsigned short int) _ISspace)
                    )
      while (
            ((*__ctype_b_loc ())[(int) ((
            *b
            ))] & (unsigned short int) _ISspace)
                       )
       b++;
    }
    else {
     v = 1;
     break;
    }
   }
   else if ((flags & (1 << (1))) &&
       
      ((*__ctype_b_loc ())[(int) ((
      *a
      ))] & (unsigned short int) _ISspace)
                 ) {
    a++;
    while (
          ((*__ctype_b_loc ())[(int) ((
          *b
          ))] & (unsigned short int) _ISspace)
                     )
     b++;
   }
   else {
    if ((v = *b++ - *a++) != '\0')
     break;
   }
  }
 }
 return v;
}

static uint64_t
file_strncmp16(int *data_flow, const char *a, const char *b, size_t len, uint32_t flags)
{





 flags = 0;
 return file_strncmp(data_flow, a, b, len, flags);
}

static int
magiccheck(int *data_flow, struct magic_set *ms, struct magic *m)
{
 uint64_t l = m->value.q;
 uint64_t v;
 float fl, fv;
 double dl, dv;
 int matched;
 union VALUETYPE *p = &ms->ms_value;

 switch (m->type) {
 case 1:
  v = p->b;
  break;

 case 2:
 case 7:
 case 10:
  v = p->h;
  break;

 case 4:
 case 8:
 case 11:
 case 23:
 case 6:
 case 9:
 case 12:
 case 21:
 case 14:
 case 15:
 case 16:
 case 22:
  v = p->l;
  break;

 case 24:
 case 25:
 case 26:
 case 27:
 case 29:
 case 28:
 case 30:
 case 32:
 case 31:
 case 42:
 case 44:
 case 43:
  v = p->q;
  break;

 case 33:
 case 34:
 case 35:
  fl = m->value.f;
  fv = p->f;
  switch (m->reln) {
  case 'x':
   matched = 1;
   break;

  case '!':
   matched = fv != fl;
   break;

  case '=':
   matched = fv == fl;
   break;

  case '>':
   matched = fv > fl;
   break;

  case '<':
   matched = fv < fl;
   break;

  default:
   file_magerror(data_flow, ms, "cannot happen with float: invalid relation `%c'",
       m->reln);
   return -1;
  }
  return matched;

 case 36:
 case 37:
 case 38:
  dl = m->value.d;
  dv = p->d;
  switch (m->reln) {
  case 'x':
   matched = 1;
   break;

  case '!':
   matched = dv != dl;
   break;

  case '=':
   matched = dv == dl;
   break;

  case '>':
   matched = dv > dl;
   break;

  case '<':
   matched = dv < dl;
   break;

  default:
   file_magerror(data_flow, ms, "cannot happen with double: invalid relation `%c'", m->reln);
   return -1;
  }
  return matched;

 case 3:
 case 47:
  l = 0;
  v = 0;
  break;

 case 5:
 case 13:
  l = 0;
  v = file_strncmp(data_flow, m->value.s, p->s, (size_t)m->vallen, m->_u._s._flags);
  break;

 case 18:
 case 19:
  l = 0;
  v = file_strncmp16(data_flow, m->value.s, p->s, (size_t)m->vallen, m->_u._s._flags);
  break;

 case 20: {
  size_t slen;
  size_t idx;

  if (ms->search.s == 
                     ((void *)0)
                         )
   return 0;

  slen = 
        (((
        m->vallen
        )<(
        sizeof(m->value.s)
        ))?(
        m->vallen
        ):(
        sizeof(m->value.s)
        ))
                                          ;
  l = 0;
  v = 0;

  for (idx = 0; m->_u._s._count == 0 || idx < m->_u._s._count; idx++) {
   if (slen + idx > ms->search.s_len)
    break;

   v = file_strncmp(data_flow, m->value.s, ms->search.s + idx, slen,
       m->_u._s._flags);
   if (v == 0) {
    ms->search.offset += idx;
    break;
   }
  }
  break;
 }
 case 17: {
  int rc;
  file_regex_t rx;
  const char *search;

  if (ms->search.s == 
                     ((void *)0)
                         )
   return 0;

  l = 0;
  rc = file_regcomp(data_flow, &rx, m->value.s,
      
     1
                 |
                  ((1 << 1) << 1)
                             |
      ((m->_u._s._flags & ((1 << (2))|(1 << (3)))) ? 
                                            (1 << 1) 
                                                      : 0));
  if (rc) {
   file_regerror(data_flow, &rx, rc, ms);
   v = (uint64_t)-1;
  } else {
   regmatch_t pmatch[1];
   size_t slen = ms->search.s_len;
   search = ms->search.s;
   pmatch[0].rm_so = 0;
   pmatch[0].rm_eo = slen;

   rc = file_regexec(data_flow, &rx, (const char *)search,
       1, pmatch, 
                 (1 << 2)
                             );



   switch (rc) {
   case 0:
    ms->search.s += (int)pmatch[0].rm_so;
    ms->search.offset += (size_t)pmatch[0].rm_so;
    ms->search.rm_len =
        (size_t)(pmatch[0].rm_eo - pmatch[0].rm_so);
    v = 0;
    break;

   case REG_NOMATCH:
    v = 1;
    break;

   default:
    file_regerror(data_flow, &rx, rc, ms);
    v = (uint64_t)-1;
    break;
   }
  }
  file_regfree(data_flow, &rx);
  if (v == (uint64_t)-1)
   return -1;
  break;
 }
 case 41:
 case 46:
 case 45:
  return 1;
 default:
  file_magerror(data_flow, ms, "invalid type %d in magiccheck()", m->type);
  return -1;
 }

 v = file_signextend(data_flow, ms, m, v);

 switch (m->reln) {
 case 'x':
  if ((ms->flags & 0x000001) != 0)
   (void) fprintf(
                 stderr
                       , "%" "ll"
       "u == *any* = 1\n", (unsigned long long)v);
  matched = 1;
  break;

 case '!':
  matched = v != l;
  if ((ms->flags & 0x000001) != 0)
   (void) fprintf(
                 stderr
                       , "%" "ll" "u != %"
       "ll" "u = %d\n", (unsigned long long)v,
       (unsigned long long)l, matched);
  break;

 case '=':
  matched = v == l;
  if ((ms->flags & 0x000001) != 0)
   (void) fprintf(
                 stderr
                       , "%" "ll" "u == %"
       "ll" "u = %d\n", (unsigned long long)v,
       (unsigned long long)l, matched);
  break;

 case '>':
  if (m->flag & 0x08) {
   matched = v > l;
   if ((ms->flags & 0x000001) != 0)
    (void) fprintf(
                  stderr
                        , "%" "ll"
        "u > %" "ll" "u = %d\n",
        (unsigned long long)v,
        (unsigned long long)l, matched);
  }
  else {
   matched = (int64_t) v > (int64_t) l;
   if ((ms->flags & 0x000001) != 0)
    (void) fprintf(
                  stderr
                        , "%" "ll"
        "d > %" "ll" "d = %d\n",
        (long long)v, (long long)l, matched);
  }
  break;

 case '<':
  if (m->flag & 0x08) {
   matched = v < l;
   if ((ms->flags & 0x000001) != 0)
    (void) fprintf(
                  stderr
                        , "%" "ll"
        "u < %" "ll" "u = %d\n",
        (unsigned long long)v,
        (unsigned long long)l, matched);
  }
  else {
   matched = (int64_t) v < (int64_t) l;
   if ((ms->flags & 0x000001) != 0)
    (void) fprintf(
                  stderr
                        , "%" "ll"
        "d < %" "ll" "d = %d\n",
         (long long)v, (long long)l, matched);
  }
  break;

 case '&':
  matched = (v & l) == l;
  if ((ms->flags & 0x000001) != 0)
   (void) fprintf(
                 stderr
                       , "((%" "ll" "x & %"
       "ll" "x) == %" "ll"
       "x) = %d\n", (unsigned long long)v,
       (unsigned long long)l, (unsigned long long)l,
       matched);
  break;

 case '^':
  matched = (v & l) != l;
  if ((ms->flags & 0x000001) != 0)
   (void) fprintf(
                 stderr
                       , "((%" "ll" "x & %"
       "ll" "x) != %" "ll"
       "x) = %d\n", (unsigned long long)v,
       (unsigned long long)l, (unsigned long long)l,
       matched);
  break;

 default:
  file_magerror(data_flow, ms, "cannot happen: invalid relation `%c'",
      m->reln);
  return -1;
 }

 return matched;
}

static int
handle_annotation(int *data_flow, struct magic_set *ms, struct magic *m)
{
 if (ms->flags & 0x000800) {
  if (file_printf(data_flow, ms, "%.8s", m->apple) == -1)
   return -1;
  return 1;
 }
 if ((ms->flags & 0x000010) && m->mimetype[0]) {
  if (file_printf(data_flow, ms, "%s", m->mimetype) == -1)
   return -1;
  return 1;
 }
 return 0;
}

static int
print_sep(int *data_flow, struct magic_set *ms, int firstline)
{
 if (ms->flags & (0x000010|0x000400))
  return 0;
 if (firstline)
  return 0;




 return file_printf(data_flow, ms, "\n- ");
}
