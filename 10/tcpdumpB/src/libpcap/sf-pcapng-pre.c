











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









extern int *__errno_location (void) ;















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

extern int dlt_to_linktype(int dlt);

extern int linktype_to_dlt(int linktype);

extern void swap_pseudo_headers(int linktype, struct pcap_pkthdr *hdr,
    u_char *data);

extern u_int max_snaplen_for_dlt(int dlt);





extern pcap_t *pcap_ng_check_header(bpf_u_int32 magic, FILE *fp,
    u_int precision, char *errbuf, int *err);
struct block_header {
 bpf_u_int32 block_type;
 bpf_u_int32 total_length;
};




struct block_trailer {
 bpf_u_int32 total_length;
};
struct option_header {
 u_short option_code;
 u_short option_length;
};
struct section_header_block {
 bpf_u_int32 byte_order_magic;
 u_short major_version;
 u_short minor_version;
 uint64_t section_length;

};
struct interface_description_block {
 u_short linktype;
 u_short reserved;
 bpf_u_int32 snaplen;

};
struct enhanced_packet_block {
 bpf_u_int32 interface_id;
 bpf_u_int32 timestamp_high;
 bpf_u_int32 timestamp_low;
 bpf_u_int32 caplen;
 bpf_u_int32 len;

};






struct simple_packet_block {
 bpf_u_int32 len;

};






struct packet_block {
 u_short interface_id;
 u_short drops_count;
 bpf_u_int32 timestamp_high;
 bpf_u_int32 timestamp_low;
 bpf_u_int32 caplen;
 bpf_u_int32 len;

};






struct block_cursor {
 u_char *data;
 size_t data_remaining;
 bpf_u_int32 block_type;
};

typedef enum {
 PASS_THROUGH,
 SCALE_UP_DEC,
 SCALE_DOWN_DEC,
 SCALE_UP_BIN,
 SCALE_DOWN_BIN
} tstamp_scale_type_t;




struct pcap_ng_if {
 uint64_t tsresol;
 tstamp_scale_type_t scale_type;
 uint64_t scale_factor;
 uint64_t tsoffset;
};
struct pcap_ng_sf {
 uint64_t user_tsresol;
 u_int max_blocksize;
 bpf_u_int32 ifcount;
 bpf_u_int32 ifaces_size;
 struct pcap_ng_if *ifaces;
};
static void pcap_ng_cleanup(pcap_t *p);
static int pcap_ng_next_packet(pcap_t *p, struct pcap_pkthdr *hdr,
    u_char **data);

static int
read_bytes(FILE *fp, void *buf, size_t bytes_to_read, int fail_on_eof,
    char *errbuf)
{
 size_t amt_read={0};

 amt_read = fread(buf, 1, bytes_to_read, fp);
 if (amt_read != bytes_to_read) {
  if (ferror(fp)) {
   pcap_fmt_errmsg_for_errno(errbuf, 256,
       
      (*__errno_location ())
           , "error reading dump file");
  } else {
   if (amt_read == 0 && !fail_on_eof)
    return (0);
   snprintf(errbuf, 256,
       "truncated dump file; tried to read %lu bytes, only got %lu",
       (unsigned long)bytes_to_read,
       (unsigned long)amt_read);
  }
  return (-1);
 }
 return (1);
}

static int
read_block(FILE *fp, pcap_t *p, struct block_cursor *cursor, char *errbuf)
{
 struct pcap_ng_sf *ps={0};
 int status={0};
 struct block_header bhdr={0};
 u_char *bdata={0};
 size_t data_remaining={0};

 ps = p->priv;

 status = read_bytes(fp, &bhdr, sizeof(bhdr), 0, errbuf);
 if (status <= 0)
  return (status);

 if (p->swapped) {
  bhdr.block_type = (((((u_int)(bhdr.block_type))&0xff)<<24) | ((((u_int)(bhdr.block_type))&0xff00)<<8) | ((((u_int)(bhdr.block_type))&0xff0000)>>8) | ((((u_int)(bhdr.block_type))>>24)&0xff));
  bhdr.total_length = (((((u_int)(bhdr.total_length))&0xff)<<24) | ((((u_int)(bhdr.total_length))&0xff00)<<8) | ((((u_int)(bhdr.total_length))&0xff0000)>>8) | ((((u_int)(bhdr.total_length))>>24)&0xff));
 }
 if (bhdr.total_length > 16*1024*1024) {
  snprintf(errbuf, 256,
      "pcapng block size %u > maximum %u",
      bhdr.total_length, 16*1024*1024);
      return (-1);
 }





 if (bhdr.total_length < sizeof(struct block_header) +
     sizeof(struct block_trailer)) {
  snprintf(errbuf, 256,
      "block in pcapng dump file has a length of %u < %lu",
      bhdr.total_length,
      (unsigned long)(sizeof(struct block_header) + sizeof(struct block_trailer)));
  return (-1);
 }




 if (p->bufsize < bhdr.total_length) {



  void *bigger_buffer={0};

  if (bhdr.total_length > ps->max_blocksize) {
   snprintf(errbuf, 256, "block is larger than maximum block size %u",
       ps->max_blocksize);
   return (-1);
  }
  bigger_buffer = realloc(p->buffer, bhdr.total_length);
  if (bigger_buffer == 
                      ((void *)0)
                          ) {
   snprintf(errbuf, 256, "out of memory");
   return (-1);
  }
  p->buffer = bigger_buffer;
 }





 memcpy(p->buffer, &bhdr, sizeof(bhdr));
 bdata = (u_char *)p->buffer + sizeof(bhdr);
 data_remaining = bhdr.total_length - sizeof(bhdr);
 if (read_bytes(fp, bdata, data_remaining, 1, errbuf) == -1)
  return (-1);




 cursor->data = bdata;
 cursor->data_remaining = data_remaining - sizeof(struct block_trailer);
 cursor->block_type = bhdr.block_type;
 return (1);
}

static void *
get_from_block_data(struct block_cursor *cursor, size_t chunk_size,
    char *errbuf)
{
 void *data={0};





 if (cursor->data_remaining < chunk_size) {
  snprintf(errbuf, 256,
      "block of type %u in pcapng dump file is too short",
      cursor->block_type);
  return (
         ((void *)0)
             );
 }




 data = cursor->data;
 cursor->data += chunk_size;
 cursor->data_remaining -= chunk_size;
 return (data);
}

static struct option_header *
get_opthdr_from_block_data(pcap_t *p, struct block_cursor *cursor, char *errbuf)
{
 struct option_header *opthdr={0};

 opthdr = get_from_block_data(cursor, sizeof(*opthdr), errbuf);
 if (opthdr == 
              ((void *)0)
                  ) {



  return (
         ((void *)0)
             );
 }




 if (p->swapped) {
  opthdr->option_code = ((u_short)(((((u_int)(opthdr->option_code))&0xff)<<8) | ((((u_int)(opthdr->option_code))&0xff00)>>8)));
  opthdr->option_length = ((u_short)(((((u_int)(opthdr->option_length))&0xff)<<8) | ((((u_int)(opthdr->option_length))&0xff00)>>8)));
 }

 return (opthdr);
}

static void *
get_optvalue_from_block_data(struct block_cursor *cursor,
    struct option_header *opthdr, char *errbuf)
{
 size_t padded_option_len={0};
 void *optvalue={0};


 padded_option_len = opthdr->option_length;
 padded_option_len = ((padded_option_len + 3)/4)*4;

 optvalue = get_from_block_data(cursor, padded_option_len, errbuf);
 if (optvalue == 
                ((void *)0)
                    ) {



  return (
         ((void *)0)
             );
 }

 return (optvalue);
}

static int
process_idb_options(pcap_t *p, struct block_cursor *cursor, uint64_t *tsresol,
    uint64_t *tsoffset, int *is_binary, char *errbuf)
{
 struct option_header *opthdr={0};
 void *optvalue={0};
 int saw_tsresol, saw_tsoffset={0};
 uint8_t tsresol_opt={0};
 u_int i={0};

 saw_tsresol = 0;
 saw_tsoffset = 0;
 while (cursor->data_remaining != 0) {



  opthdr = get_opthdr_from_block_data(p, cursor, errbuf);
  if (opthdr == 
               ((void *)0)
                   ) {



   return (-1);
  }




  optvalue = get_optvalue_from_block_data(cursor, opthdr,
      errbuf);
  if (optvalue == 
                 ((void *)0)
                     ) {



   return (-1);
  }

  switch (opthdr->option_code) {

  case 0:
   if (opthdr->option_length != 0) {
    snprintf(errbuf, 256,
        "Interface Description Block has opt_endofopt option with length %u != 0",
        opthdr->option_length);
    return (-1);
   }
   goto done;

  case 9:
   if (opthdr->option_length != 1) {
    snprintf(errbuf, 256,
        "Interface Description Block has if_tsresol option with length %u != 1",
        opthdr->option_length);
    return (-1);
   }
   if (saw_tsresol) {
    snprintf(errbuf, 256,
        "Interface Description Block has more than one if_tsresol option");
    return (-1);
   }
   saw_tsresol = 1;
   memcpy(&tsresol_opt, optvalue, sizeof(tsresol_opt));
   if (tsresol_opt & 0x80) {



    uint8_t tsresol_shift = (tsresol_opt & 0x7F);

    if (tsresol_shift > 63) {




     snprintf(errbuf, 256,
         "Interface Description Block if_tsresol option resolution 2^-%u is too high",
         tsresol_shift);
     return (-1);
    }
    *is_binary = 1;
    *tsresol = ((uint64_t)1) << tsresol_shift;
   } else {



    if (tsresol_opt > 19) {
     snprintf(errbuf, 256,
         "Interface Description Block if_tsresol option resolution 10^-%u is too high",
         tsresol_opt);
     return (-1);
    }
    *is_binary = 0;
    *tsresol = 1;
    for (i = 0; i < tsresol_opt; i++)
     *tsresol *= 10;
   }
   break;

  case 14:
   if (opthdr->option_length != 8) {
    snprintf(errbuf, 256,
        "Interface Description Block has if_tsoffset option with length %u != 8",
        opthdr->option_length);
    return (-1);
   }
   if (saw_tsoffset) {
    snprintf(errbuf, 256,
        "Interface Description Block has more than one if_tsoffset option");
    return (-1);
   }
   saw_tsoffset = 1;
   memcpy(tsoffset, optvalue, sizeof(*tsoffset));
   if (p->swapped)
    *tsoffset = ((*tsoffset & 0xff00000000000000ULL) >> 56) | ((*tsoffset & 0x00ff000000000000ULL) >> 40) | ((*tsoffset & 0x0000ff0000000000ULL) >> 24) | ((*tsoffset & 0x000000ff00000000ULL) >> 8) | ((*tsoffset & 0x00000000ff000000ULL) << 8) | ((*tsoffset & 0x0000000000ff0000ULL) << 24) | ((*tsoffset & 0x000000000000ff00ULL) << 40) | ((*tsoffset & 0x00000000000000ffULL) << 56);
   break;

  default:
   break;
  }
 }

done:
 return (0);
}

static int
add_interface(pcap_t *p, struct block_cursor *cursor, char *errbuf)
{
 struct pcap_ng_sf *ps={0};
 uint64_t tsresol={0};
 uint64_t tsoffset={0};
 int is_binary={0};

 ps = p->priv;




 ps->ifcount++;




 if (ps->ifcount > ps->ifaces_size) {



  bpf_u_int32 new_ifaces_size={0};
  struct pcap_ng_if *new_ifaces={0};

  if (ps->ifaces_size == 0) {
   new_ifaces_size = 1;
   new_ifaces = malloc(sizeof (struct pcap_ng_if));
  } else {






   if (ps->ifaces_size * 2 < ps->ifaces_size) {






    snprintf(errbuf, 256,
        "more than %u interfaces in the file",
        0x80000000U);
    return (0);
   }





   new_ifaces_size = ps->ifaces_size * 2;
   if (new_ifaces_size * sizeof (struct pcap_ng_if) < new_ifaces_size) {
    snprintf(errbuf, 256,
        "more than %u interfaces in the file",
        0xFFFFFFFFU / ((u_int)sizeof (struct pcap_ng_if)));
    return (0);
   }
   new_ifaces = realloc(ps->ifaces, new_ifaces_size * sizeof (struct pcap_ng_if));
  }
  if (new_ifaces == 
                   ((void *)0)
                       ) {




   snprintf(errbuf, 256,
       "out of memory for per-interface information (%u interfaces)",
       ps->ifcount);
   return (0);
  }
  ps->ifaces_size = new_ifaces_size;
  ps->ifaces = new_ifaces;
 }




 tsresol = 1000000;
 is_binary = 0;
 tsoffset = 0;





 if (process_idb_options(p, cursor, &tsresol, &tsoffset, &is_binary,
     errbuf) == -1)
  return (0);

 ps->ifaces[ps->ifcount - 1].tsresol = tsresol;
 ps->ifaces[ps->ifcount - 1].tsoffset = tsoffset;





 if (tsresol == ps->user_tsresol) {




  ps->ifaces[ps->ifcount - 1].scale_type = PASS_THROUGH;
 } else if (tsresol > ps->user_tsresol) {




  if (is_binary)
   ps->ifaces[ps->ifcount - 1].scale_type = SCALE_DOWN_BIN;
  else {



   ps->ifaces[ps->ifcount - 1].scale_factor = tsresol/ps->user_tsresol;
   ps->ifaces[ps->ifcount - 1].scale_type = SCALE_DOWN_DEC;
  }
 } else {




  if (is_binary)
   ps->ifaces[ps->ifcount - 1].scale_type = SCALE_UP_BIN;
  else {



   ps->ifaces[ps->ifcount - 1].scale_factor = ps->user_tsresol/tsresol;
   ps->ifaces[ps->ifcount - 1].scale_type = SCALE_UP_DEC;
  }
 }
 return (1);
}





pcap_t *
pcap_ng_check_header(bpf_u_int32 magic, FILE *fp, u_int precision, char *errbuf,
    int *err)
{
 size_t amt_read={0};
 bpf_u_int32 total_length={0};
 bpf_u_int32 byte_order_magic={0};
 struct block_header *bhdrp={0};
 struct section_header_block *shbp={0};
 pcap_t *p={0};
 int swapped = 0;
 struct pcap_ng_sf *ps={0};
 int status={0};
 struct block_cursor cursor={0};
 struct interface_description_block *idbp={0};




 *err = 0;





 if (magic != 0x0A0D0D0A) {
  return (
         ((void *)0)
             );
 }
 amt_read = fread(&total_length, 1, sizeof(total_length), fp);
 if (amt_read < sizeof(total_length)) {
  if (ferror(fp)) {
   pcap_fmt_errmsg_for_errno(errbuf, 256,
       
      (*__errno_location ())
           , "error reading dump file");
   *err = 1;
   return (
          ((void *)0)
              );
  }





  return (
         ((void *)0)
             );
 }
 amt_read = fread(&byte_order_magic, 1, sizeof(byte_order_magic), fp);
 if (amt_read < sizeof(byte_order_magic)) {
  if (ferror(fp)) {
   pcap_fmt_errmsg_for_errno(errbuf, 256,
       
      (*__errno_location ())
           , "error reading dump file");
   *err = 1;
   return (
          ((void *)0)
              );
  }





  return (
         ((void *)0)
             );
 }
 if (byte_order_magic != 0x1A2B3C4D) {
  byte_order_magic = (((((u_int)(byte_order_magic))&0xff)<<24) | ((((u_int)(byte_order_magic))&0xff00)<<8) | ((((u_int)(byte_order_magic))&0xff0000)>>8) | ((((u_int)(byte_order_magic))>>24)&0xff));
  if (byte_order_magic != 0x1A2B3C4D) {



   return (
          ((void *)0)
              );
  }
  swapped = 1;
  total_length = (((((u_int)(total_length))&0xff)<<24) | ((((u_int)(total_length))&0xff00)<<8) | ((((u_int)(total_length))&0xff0000)>>8) | ((((u_int)(total_length))>>24)&0xff));
 }




 if (total_length < sizeof(*bhdrp) + sizeof(*shbp) + sizeof(struct block_trailer)) {
  snprintf(errbuf, 256,
      "Section Header Block in pcapng dump file has a length of %u < %lu",
      total_length,
      (unsigned long)(sizeof(*bhdrp) + sizeof(*shbp) + sizeof(struct block_trailer)));
  *err = 1;
  return (
         ((void *)0)
             );
 }





 p = pcap_open_offline_common(errbuf, sizeof (struct pcap_ng_sf));
 if (p == 
         ((void *)0)
             ) {

  *err = 1;
  return (
         ((void *)0)
             );
 }
 p->swapped = swapped;
 ps = p->priv;




 switch (precision) {

 case 0:
  ps->user_tsresol = 1000000;
  break;

 case 1:
  ps->user_tsresol = 1000000000;
  break;

 default:
  snprintf(errbuf, 256,
      "unknown time stamp resolution %u", precision);
  free(p);
  *err = 1;
  return (
         ((void *)0)
             );
 }

 p->opt.tstamp_precision = precision;
 p->bufsize = 2048;
 if (p->bufsize < total_length)
  p->bufsize = total_length;
 p->buffer = malloc(p->bufsize);
 if (p->buffer == 
                 ((void *)0)
                     ) {
  snprintf(errbuf, 256, "out of memory");
  free(p);
  *err = 1;
  return (
         ((void *)0)
             );
 }
 ps->max_blocksize = (sizeof (struct block_header) + sizeof (struct enhanced_packet_block) + (262144) + 131072 + sizeof (struct block_trailer));





 bhdrp = (struct block_header *)p->buffer;
 shbp = (struct section_header_block *)((u_char *)p->buffer + sizeof(struct block_header));
 bhdrp->block_type = magic;
 bhdrp->total_length = total_length;
 shbp->byte_order_magic = byte_order_magic;
 if (read_bytes(fp,
     (u_char *)p->buffer + (sizeof(magic) + sizeof(total_length) + sizeof(byte_order_magic)),
     total_length - (sizeof(magic) + sizeof(total_length) + sizeof(byte_order_magic)),
     1, errbuf) == -1)
  goto fail;

 if (p->swapped) {



  shbp->major_version = ((u_short)(((((u_int)(shbp->major_version))&0xff)<<8) | ((((u_int)(shbp->major_version))&0xff00)>>8)));
  shbp->minor_version = ((u_short)(((((u_int)(shbp->minor_version))&0xff)<<8) | ((((u_int)(shbp->minor_version))&0xff00)>>8)));




 }

 if (! (shbp->major_version == 1 &&
        shbp->minor_version == 0)) {
  snprintf(errbuf, 256,
      "unsupported pcapng savefile version %u.%u",
      shbp->major_version, shbp->minor_version);
  goto fail;
 }
 p->version_major = shbp->major_version;
 p->version_minor = shbp->minor_version;




 p->opt.tstamp_precision = precision;




 for (;;) {



  status = read_block(fp, p, &cursor, errbuf);
  if (status == 0) {

   snprintf(errbuf, 256,
       "the capture file has no Interface Description Blocks");
   goto fail;
  }
  if (status == -1)
   goto fail;
  switch (cursor.block_type) {

  case 0x00000001:




   idbp = get_from_block_data(&cursor, sizeof(*idbp),
       errbuf);
   if (idbp == 
              ((void *)0)
                  )
    goto fail;




   if (p->swapped) {
    idbp->linktype = ((u_short)(((((u_int)(idbp->linktype))&0xff)<<8) | ((((u_int)(idbp->linktype))&0xff00)>>8)));
    idbp->snaplen = (((((u_int)(idbp->snaplen))&0xff)<<24) | ((((u_int)(idbp->snaplen))&0xff00)<<8) | ((((u_int)(idbp->snaplen))&0xff0000)>>8) | ((((u_int)(idbp->snaplen))>>24)&0xff));
   }




   if (!add_interface(p, &cursor, errbuf))
    goto fail;

   goto done;

  case 0x00000006:
  case 0x00000003:
  case 0x00000002:





   snprintf(errbuf, 256,
       "the capture file has a packet block before any Interface Description Blocks");
   goto fail;

  default:



   break;
  }
 }

done:
 p->tzoff = 0;
 p->snapshot = idbp->snaplen;
 if (p->snapshot <= 0) {
  p->snapshot = max_snaplen_for_dlt(idbp->linktype);
 }
 p->linktype = linktype_to_dlt(idbp->linktype);
 p->linktype_ext = 0;






 if ((sizeof (struct block_header) + sizeof (struct enhanced_packet_block) + (max_snaplen_for_dlt(p->linktype)) + 131072 + sizeof (struct block_trailer)) > ps->max_blocksize)
  ps->max_blocksize = (sizeof (struct block_header) + sizeof (struct enhanced_packet_block) + (max_snaplen_for_dlt(p->linktype)) + 131072 + sizeof (struct block_trailer));

 p->next_packet_op = pcap_ng_next_packet;
 p->cleanup_op = pcap_ng_cleanup;

 return (p);

fail:
 free(ps->ifaces);
 free(p->buffer);
 free(p);
 *err = 1;
 return (
        ((void *)0)
            );
}

static void
pcap_ng_cleanup(pcap_t *p)
{
 struct pcap_ng_sf *ps = p->priv;

 free(ps->ifaces);
 sf_cleanup(p);
}






static int
pcap_ng_next_packet(pcap_t *p, struct pcap_pkthdr *hdr, u_char **data)
{
 struct pcap_ng_sf *ps = p->priv;
 struct block_cursor cursor={0};
 int status={0};
 struct enhanced_packet_block *epbp={0};
 struct simple_packet_block *spbp={0};
 struct packet_block *pbp={0};
 bpf_u_int32 interface_id = 0xFFFFFFFF;
 struct interface_description_block *idbp={0};
 struct section_header_block *shbp={0};
 FILE *fp = p->rfile;
 uint64_t t, sec, frac={0};





 for (;;) {




  status = read_block(fp, p, &cursor, p->errbuf);
  if (status == 0)
   return (1);
  if (status == -1)
   return (-1);
  switch (cursor.block_type) {

  case 0x00000006:




   epbp = get_from_block_data(&cursor, sizeof(*epbp),
       p->errbuf);
   if (epbp == 
              ((void *)0)
                  )
    return (-1);




   if (p->swapped) {

    interface_id = (((((u_int)(epbp->interface_id))&0xff)<<24) | ((((u_int)(epbp->interface_id))&0xff00)<<8) | ((((u_int)(epbp->interface_id))&0xff0000)>>8) | ((((u_int)(epbp->interface_id))>>24)&0xff));
    hdr->caplen = (((((u_int)(epbp->caplen))&0xff)<<24) | ((((u_int)(epbp->caplen))&0xff00)<<8) | ((((u_int)(epbp->caplen))&0xff0000)>>8) | ((((u_int)(epbp->caplen))>>24)&0xff));
    hdr->len = (((((u_int)(epbp->len))&0xff)<<24) | ((((u_int)(epbp->len))&0xff00)<<8) | ((((u_int)(epbp->len))&0xff0000)>>8) | ((((u_int)(epbp->len))>>24)&0xff));
    t = ((uint64_t)(((((u_int)(epbp->timestamp_high))&0xff)<<24) | ((((u_int)(epbp->timestamp_high))&0xff00)<<8) | ((((u_int)(epbp->timestamp_high))&0xff0000)>>8) | ((((u_int)(epbp->timestamp_high))>>24)&0xff))) << 32 |
        (((((u_int)(epbp->timestamp_low))&0xff)<<24) | ((((u_int)(epbp->timestamp_low))&0xff00)<<8) | ((((u_int)(epbp->timestamp_low))&0xff0000)>>8) | ((((u_int)(epbp->timestamp_low))>>24)&0xff));
   } else {
    interface_id = epbp->interface_id;
    hdr->caplen = epbp->caplen;
    hdr->len = epbp->len;
    t = ((uint64_t)epbp->timestamp_high) << 32 |
        epbp->timestamp_low;
   }
   goto found;

  case 0x00000003:




   spbp = get_from_block_data(&cursor, sizeof(*spbp),
       p->errbuf);
   if (spbp == 
              ((void *)0)
                  )
    return (-1);





   interface_id = 0;




   if (p->swapped) {

    hdr->len = (((((u_int)(spbp->len))&0xff)<<24) | ((((u_int)(spbp->len))&0xff00)<<8) | ((((u_int)(spbp->len))&0xff0000)>>8) | ((((u_int)(spbp->len))>>24)&0xff));
   } else
    hdr->len = spbp->len;






   hdr->caplen = hdr->len;
   if (hdr->caplen > (bpf_u_int32)p->snapshot)
    hdr->caplen = p->snapshot;
   t = 0;
   goto found;

  case 0x00000002:




   pbp = get_from_block_data(&cursor, sizeof(*pbp),
       p->errbuf);
   if (pbp == 
             ((void *)0)
                 )
    return (-1);




   if (p->swapped) {

    interface_id = ((u_short)(((((u_int)(pbp->interface_id))&0xff)<<8) | ((((u_int)(pbp->interface_id))&0xff00)>>8)));
    hdr->caplen = (((((u_int)(pbp->caplen))&0xff)<<24) | ((((u_int)(pbp->caplen))&0xff00)<<8) | ((((u_int)(pbp->caplen))&0xff0000)>>8) | ((((u_int)(pbp->caplen))>>24)&0xff));
    hdr->len = (((((u_int)(pbp->len))&0xff)<<24) | ((((u_int)(pbp->len))&0xff00)<<8) | ((((u_int)(pbp->len))&0xff0000)>>8) | ((((u_int)(pbp->len))>>24)&0xff));
    t = ((uint64_t)(((((u_int)(pbp->timestamp_high))&0xff)<<24) | ((((u_int)(pbp->timestamp_high))&0xff00)<<8) | ((((u_int)(pbp->timestamp_high))&0xff0000)>>8) | ((((u_int)(pbp->timestamp_high))>>24)&0xff))) << 32 |
        (((((u_int)(pbp->timestamp_low))&0xff)<<24) | ((((u_int)(pbp->timestamp_low))&0xff00)<<8) | ((((u_int)(pbp->timestamp_low))&0xff0000)>>8) | ((((u_int)(pbp->timestamp_low))>>24)&0xff));
   } else {
    interface_id = pbp->interface_id;
    hdr->caplen = pbp->caplen;
    hdr->len = pbp->len;
    t = ((uint64_t)pbp->timestamp_high) << 32 |
        pbp->timestamp_low;
   }
   goto found;

  case 0x00000001:




   idbp = get_from_block_data(&cursor, sizeof(*idbp),
       p->errbuf);
   if (idbp == 
              ((void *)0)
                  )
    return (-1);




   if (p->swapped) {
    idbp->linktype = ((u_short)(((((u_int)(idbp->linktype))&0xff)<<8) | ((((u_int)(idbp->linktype))&0xff00)>>8)));
    idbp->snaplen = (((((u_int)(idbp->snaplen))&0xff)<<24) | ((((u_int)(idbp->snaplen))&0xff00)<<8) | ((((u_int)(idbp->snaplen))&0xff0000)>>8) | ((((u_int)(idbp->snaplen))>>24)&0xff));
   }
   if (p->linktype != idbp->linktype) {
    snprintf(p->errbuf, 256,
        "an interface has a type %u different from the type of the first interface",
        idbp->linktype);
    return (-1);
   }
   if ((bpf_u_int32)p->snapshot != idbp->snaplen) {
    snprintf(p->errbuf, 256,
        "an interface has a snapshot length %u different from the type of the first interface",
        idbp->snaplen);
    return (-1);
   }




   if (!add_interface(p, &cursor, p->errbuf))
    return (-1);
   break;

  case 0x0A0D0D0A:




   shbp = get_from_block_data(&cursor, sizeof(*shbp),
       p->errbuf);
   if (shbp == 
              ((void *)0)
                  )
    return (-1);






   if (p->swapped) {
    shbp->byte_order_magic =
        (((((u_int)(shbp->byte_order_magic))&0xff)<<24) | ((((u_int)(shbp->byte_order_magic))&0xff00)<<8) | ((((u_int)(shbp->byte_order_magic))&0xff0000)>>8) | ((((u_int)(shbp->byte_order_magic))>>24)&0xff));
    shbp->major_version =
        ((u_short)(((((u_int)(shbp->major_version))&0xff)<<8) | ((((u_int)(shbp->major_version))&0xff00)>>8)));
   }






   switch (shbp->byte_order_magic) {

   case 0x1A2B3C4D:



    break;

   case (((((u_int)(0x1A2B3C4D))&0xff)<<24) | ((((u_int)(0x1A2B3C4D))&0xff00)<<8) | ((((u_int)(0x1A2B3C4D))&0xff0000)>>8) | ((((u_int)(0x1A2B3C4D))>>24)&0xff)):



    snprintf(p->errbuf, 256,
        "the file has sections with different byte orders");
    return (-1);

   default:



    snprintf(p->errbuf, 256,
        "the file has a section with a bad byte order magic field");
    return (-1);
   }





   if (shbp->major_version != 1) {
    snprintf(p->errbuf, 256,
        "unknown pcapng savefile major version number %u",
        shbp->major_version);
    return (-1);
   }
   ps->ifcount = 0;
   break;

  default:



   break;
  }
 }

found:



 if (interface_id >= ps->ifcount) {



  snprintf(p->errbuf, 256,
      "a packet arrived on interface %u, but there's no Interface Description Block for that interface",
      interface_id);
  return (-1);
 }

 if (hdr->caplen > (bpf_u_int32)p->snapshot) {
  snprintf(p->errbuf, 256,
      "invalid packet capture length %u, bigger than "
      "snaplen of %d", hdr->caplen, p->snapshot);
  return (-1);
 }





 sec = t / ps->ifaces[interface_id].tsresol + ps->ifaces[interface_id].tsoffset;
 frac = t % ps->ifaces[interface_id].tsresol;





 switch (ps->ifaces[interface_id].scale_type) {

 case PASS_THROUGH:




  break;

 case SCALE_UP_DEC:
  frac *= ps->ifaces[interface_id].scale_factor;
  break;

 case SCALE_UP_BIN:
  frac *= ps->user_tsresol;
  frac /= ps->ifaces[interface_id].tsresol;
  break;

 case SCALE_DOWN_DEC:
  frac /= ps->ifaces[interface_id].scale_factor;
  break;


 case SCALE_DOWN_BIN:
  frac *= ps->user_tsresol;
  frac /= ps->ifaces[interface_id].tsresol;
  break;
 }
 hdr->ts.tv_sec = (time_t)sec;
 hdr->ts.tv_usec = (int)frac;





 *data = get_from_block_data(&cursor, hdr->caplen, p->errbuf);
 if (*data == 
             ((void *)0)
                 )
  return (-1);

 if (p->swapped)
  swap_pseudo_headers(p->linktype, hdr, *data);

 return (0);
}
