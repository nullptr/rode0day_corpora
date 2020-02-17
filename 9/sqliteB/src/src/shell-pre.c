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
extern void lava_set(unsigned int bn, unsigned int val);
extern unsigned int lava_get(unsigned int);






#ifndef __i386__
typedef long unsigned int size_t;
#else /* __i386__ */






typedef unsigned int size_t;
#endif /* __i386__ */



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

#ifndef __i386__
typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;
#else /* __i386__ */



__extension__ typedef signed long long int __int64_t;
__extension__ typedef unsigned long long int __uint64_t;
#endif /* __i386__ */







#ifndef __i386__
typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
#else /* __i386__ */
__extension__ typedef long long int __quad_t;
__extension__ typedef unsigned long long int __u_quad_t;
#endif /* __i386__ */


#ifndef __i386__
typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;
#else /* __i386__ */
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
#endif /* __i386__ */

#ifndef __i386__
typedef int __daddr_t;
typedef int __key_t;
#else /* __i386__ */
__extension__ typedef int __daddr_t;
__extension__ typedef int __key_t;
#endif /* __i386__ */


#ifndef __i386__
typedef int __clockid_t;
#else /* __i386__ */
__extension__ typedef int __clockid_t;
#endif /* __i386__ */


#ifndef __i386__
typedef void * __timer_t;
#else /* __i386__ */
__extension__ typedef void * __timer_t;
#endif /* __i386__ */


#ifndef __i386__
typedef long int __blksize_t;
#else /* __i386__ */
__extension__ typedef long int __blksize_t;
#endif /* __i386__ */




#ifndef __i386__
typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;
#else /* __i386__ */
__extension__ typedef long int __blkcnt_t;
__extension__ typedef __quad_t __blkcnt64_t;
#endif /* __i386__ */


#ifndef __i386__
typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;
#else /* __i386__ */
__extension__ typedef unsigned long int __fsblkcnt_t;
__extension__ typedef __u_quad_t __fsblkcnt64_t;
#endif /* __i386__ */


#ifndef __i386__
typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;
#else /* __i386__ */
__extension__ typedef unsigned long int __fsfilcnt_t;
__extension__ typedef __u_quad_t __fsfilcnt64_t;
#endif /* __i386__ */


#ifndef __i386__
typedef long int __fsword_t;
#else /* __i386__ */
__extension__ typedef int __fsword_t;
#endif /* __i386__ */

#ifndef __i386__
typedef long int __ssize_t;
#else /* __i386__ */
__extension__ typedef int __ssize_t;
#endif /* __i386__ */


#ifndef __i386__
typedef long int __syscall_slong_t;
#else /* __i386__ */
__extension__ typedef long int __syscall_slong_t;
#endif /* __i386__ */

#ifndef __i386__
typedef unsigned long int __syscall_ulong_t;
#else /* __i386__ */
__extension__ typedef unsigned long int __syscall_ulong_t;
#endif /* __i386__ */



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


#ifndef __i386__
typedef long int __intptr_t;
#else /* __i386__ */
__extension__ typedef int __intptr_t;
#endif /* __i386__ */


#ifndef __i386__
typedef unsigned int __socklen_t;
#else /* __i386__ */
__extension__ typedef unsigned int __socklen_t;
#endif /* __i386__ */
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

#ifndef __i386__
typedef int wchar_t;
#else /* __i386__ */
typedef long int wchar_t;
#endif /* __i386__ */








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
#ifndef __i386__
  char __size[56];
#else /* __i386__ */
  char __size[36];
#endif /* __i386__ */
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;
#ifdef __i386__
typedef struct __pthread_internal_slist
{
  struct __pthread_internal_slist *__next;
} __pthread_slist_t;
#endif /* __i386__ */





#ifndef __i386__
typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
#endif /* ! __i386__ */
typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;

#ifndef __i386__
    unsigned int __nusers;
#endif /* ! __i386__ */



#ifndef __i386__
    int __kind;
#endif /* ! __i386__ */

#ifndef __i386__
    short __spins;
#else /* __i386__ */
    int __kind;
    unsigned int __nusers;
    __extension__ union
    {
      struct
      {
 short __espins;
#endif /* __i386__ */
    short __elision;
#ifndef __i386__
    __pthread_list_t __list;
#else /* __i386__ */



      } __elision_data;
      __pthread_slist_t __list;
    };

#endif /* __i386__ */
  } __data;
#ifndef __i386__
  char __size[40];
#else /* __i386__ */
  char __size[24];
#endif /* __i386__ */
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
#ifndef __i386__
    int __writer;
    int __shared;
    signed char __rwelision;
#endif /* ! __i386__ */


#ifdef __i386__
    unsigned char __flags;
    unsigned char __shared;
    signed char __rwelision;
#endif /* __i386__ */

#ifndef __i386__

    unsigned char __pad1[7];


    unsigned long int __pad2;


    unsigned int __flags;

#else /* __i386__ */
    unsigned char __pad2;
    int __writer;
#endif /* __i386__ */
  } __data;
#ifndef __i386__
  char __size[56];
#else /* __i386__ */

  char __size[32];
#endif /* __i386__ */
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
#ifndef __i386__
  char __size[32];
#else /* __i386__ */
  char __size[20];
#endif /* __i386__ */
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





extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     ;


extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     ;




extern void __assert (const char *__assertion, const char *__file, int __line)
     ;



 
          extern const char sqlite3_version[];
 const char *sqlite3_libversion(void);
 const char *sqlite3_sourceid(void);
 int sqlite3_libversion_number(void);
 int sqlite3_compileoption_used(const char *zOptName);
 const char *sqlite3_compileoption_get(int N);
 int sqlite3_threadsafe(void);
typedef struct sqlite3 sqlite3;
  typedef long long int sqlite_int64;
  typedef unsigned long long int sqlite_uint64;

typedef sqlite_int64 sqlite3_int64;
typedef sqlite_uint64 sqlite3_uint64;
 int sqlite3_close(sqlite3*);
 int sqlite3_close_v2(sqlite3*);






typedef int (*sqlite3_callback)(void*,int,char**, char**);
 int sqlite3_exec(
  sqlite3*,
  const char *sql,
  int (*callback)(void*,int,char**,char**),
  void *,
  char **errmsg
);
typedef struct sqlite3_file sqlite3_file;
struct sqlite3_file {
  const struct sqlite3_io_methods *pMethods;
};
typedef struct sqlite3_io_methods sqlite3_io_methods;
struct sqlite3_io_methods {
  int iVersion;
  int (*xClose)(sqlite3_file*);
  int (*xRead)(sqlite3_file*, void*, int iAmt, sqlite3_int64 iOfst);
  int (*xWrite)(sqlite3_file*, const void*, int iAmt, sqlite3_int64 iOfst);
  int (*xTruncate)(sqlite3_file*, sqlite3_int64 size);
  int (*xSync)(sqlite3_file*, int flags);
  int (*xFileSize)(sqlite3_file*, sqlite3_int64 *pSize);
  int (*xLock)(sqlite3_file*, int);
  int (*xUnlock)(sqlite3_file*, int);
  int (*xCheckReservedLock)(sqlite3_file*, int *pResOut);
  int (*xFileControl)(sqlite3_file*, int op, void *pArg);
  int (*xSectorSize)(sqlite3_file*);
  int (*xDeviceCharacteristics)(sqlite3_file*);

  int (*xShmMap)(sqlite3_file*, int iPg, int pgsz, int, void volatile**);
  int (*xShmLock)(sqlite3_file*, int offset, int n, int flags);
  void (*xShmBarrier)(sqlite3_file*);
  int (*xShmUnmap)(sqlite3_file*, int deleteFlag);

  int (*xFetch)(sqlite3_file*, sqlite3_int64 iOfst, int iAmt, void **pp);
  int (*xUnfetch)(sqlite3_file*, sqlite3_int64 iOfst, void *p);


};
typedef struct sqlite3_mutex sqlite3_mutex;
typedef struct sqlite3_api_routines sqlite3_api_routines;
typedef struct sqlite3_vfs sqlite3_vfs;
typedef void (*sqlite3_syscall_ptr)(void);
struct sqlite3_vfs {
  int iVersion;
  int szOsFile;
  int mxPathname;
  sqlite3_vfs *pNext;
  const char *zName;
  void *pAppData;
  int (*xOpen)(sqlite3_vfs*, const char *zName, sqlite3_file*,
               int flags, int *pOutFlags);
  int (*xDelete)(sqlite3_vfs*, const char *zName, int syncDir);
  int (*xAccess)(sqlite3_vfs*, const char *zName, int flags, int *pResOut);
  int (*xFullPathname)(sqlite3_vfs*, const char *zName, int nOut, char *zOut);
  void *(*xDlOpen)(sqlite3_vfs*, const char *zFilename);
  void (*xDlError)(sqlite3_vfs*, int nByte, char *zErrMsg);
  void (*(*xDlSym)(sqlite3_vfs*,void*, const char *zSymbol))(void);
  void (*xDlClose)(sqlite3_vfs*, void*);
  int (*xRandomness)(sqlite3_vfs*, int nByte, char *zOut);
  int (*xSleep)(sqlite3_vfs*, int microseconds);
  int (*xCurrentTime)(sqlite3_vfs*, double*);
  int (*xGetLastError)(sqlite3_vfs*, int, char *);




  int (*xCurrentTimeInt64)(sqlite3_vfs*, sqlite3_int64*);




  int (*xSetSystemCall)(sqlite3_vfs*, const char *zName, sqlite3_syscall_ptr);
  sqlite3_syscall_ptr (*xGetSystemCall)(sqlite3_vfs*, const char *zName);
  const char *(*xNextSystemCall)(sqlite3_vfs*, const char *zName);





};
 int sqlite3_initialize(void);
 int sqlite3_shutdown(void);
 int sqlite3_os_init(void);
 int sqlite3_os_end(void);
 int sqlite3_config(int, ...);
 int sqlite3_db_config(sqlite3*, int op, ...);
typedef struct sqlite3_mem_methods sqlite3_mem_methods;
struct sqlite3_mem_methods {
  void *(*xMalloc)(int);
  void (*xFree)(void*);
  void *(*xRealloc)(void*,int);
  int (*xSize)(void*);
  int (*xRoundup)(int);
  int (*xInit)(void*);
  void (*xShutdown)(void*);
  void *pAppData;
};
 int sqlite3_extended_result_codes(sqlite3*, int onoff);
 sqlite3_int64 sqlite3_last_insert_rowid(sqlite3*);
 void sqlite3_set_last_insert_rowid(sqlite3*,sqlite3_int64);
 int sqlite3_changes(sqlite3*);
 int sqlite3_total_changes(sqlite3*);
 void sqlite3_interrupt(sqlite3*);
 int sqlite3_complete(const char *sql);
 int sqlite3_complete16(const void *sql);
 int sqlite3_busy_handler(sqlite3*,int(*)(void*,int),void*);
 int sqlite3_busy_timeout(sqlite3*, int ms);
 int sqlite3_get_table(
  sqlite3 *db,
  const char *zSql,
  char ***pazResult,
  int *pnRow,
  int *pnColumn,
  char **pzErrmsg
);
 void sqlite3_free_table(char **result);
 char *sqlite3_mprintf(const char*,...);
 char *sqlite3_vmprintf(const char*, va_list);
 char *sqlite3_snprintf(int,char*,const char*, ...);
 char *sqlite3_vsnprintf(int,char*,const char*, va_list);
 void *sqlite3_malloc(int);
 void *sqlite3_malloc64(sqlite3_uint64);
 void *sqlite3_realloc(void*, int);
 void *sqlite3_realloc64(void*, sqlite3_uint64);
 void sqlite3_free(void*);
 sqlite3_uint64 sqlite3_msize(void*);
 sqlite3_int64 sqlite3_memory_used(void);
 sqlite3_int64 sqlite3_memory_highwater(int resetFlag);
 void sqlite3_randomness(int N, void *P);
 int sqlite3_set_authorizer(
  sqlite3*,
  int (*xAuth)(void*,int,const char*,const char*,const char*,const char*),
  void *pUserData
);
 void *sqlite3_trace(sqlite3*,
   void(*xTrace)(void*,const char*), void*);
 void *sqlite3_profile(sqlite3*,
   void(*xProfile)(void*,const char*,sqlite3_uint64), void*);
 int sqlite3_trace_v2(
  sqlite3*,
  unsigned uMask,
  int(*xCallback)(unsigned,void*,void*,void*),
  void *pCtx
);
 void sqlite3_progress_handler(sqlite3*, int, int(*)(void*), void*);
 int sqlite3_open(
  const char *filename,
  sqlite3 **ppDb
);
 int sqlite3_open16(
  const void *filename,
  sqlite3 **ppDb
);
 int sqlite3_open_v2(
  const char *filename,
  sqlite3 **ppDb,
  int flags,
  const char *zVfs
);
 const char *sqlite3_uri_parameter(const char *zFilename, const char *zParam);
 int sqlite3_uri_boolean(const char *zFile, const char *zParam, int bDefault);
 sqlite3_int64 sqlite3_uri_int64(const char*, const char*, sqlite3_int64);
 int sqlite3_errcode(sqlite3 *db);
 int sqlite3_extended_errcode(sqlite3 *db);
 const char *sqlite3_errmsg(sqlite3*);
 const void *sqlite3_errmsg16(sqlite3*);
 const char *sqlite3_errstr(int);
typedef struct sqlite3_stmt sqlite3_stmt;
 int sqlite3_limit(sqlite3*, int id, int newVal);
 int sqlite3_prepare(
  sqlite3 *db,
  const char *zSql,
  int nByte,
  sqlite3_stmt **ppStmt,
  const char **pzTail
);
 int sqlite3_prepare_v2(
  sqlite3 *db,
  const char *zSql,
  int nByte,
  sqlite3_stmt **ppStmt,
  const char **pzTail
);
 int sqlite3_prepare_v3(
  sqlite3 *db,
  const char *zSql,
  int nByte,
  unsigned int prepFlags,
  sqlite3_stmt **ppStmt,
  const char **pzTail
);
 int sqlite3_prepare16(
  sqlite3 *db,
  const void *zSql,
  int nByte,
  sqlite3_stmt **ppStmt,
  const void **pzTail
);
 int sqlite3_prepare16_v2(
  sqlite3 *db,
  const void *zSql,
  int nByte,
  sqlite3_stmt **ppStmt,
  const void **pzTail
);
 int sqlite3_prepare16_v3(
  sqlite3 *db,
  const void *zSql,
  int nByte,
  unsigned int prepFlags,
  sqlite3_stmt **ppStmt,
  const void **pzTail
);
 const char *sqlite3_sql(sqlite3_stmt *pStmt);
 char *sqlite3_expanded_sql(sqlite3_stmt *pStmt);
 const char *sqlite3_normalized_sql(sqlite3_stmt *pStmt);
 int sqlite3_stmt_readonly(sqlite3_stmt *pStmt);
 int sqlite3_stmt_isexplain(sqlite3_stmt *pStmt);
 int sqlite3_stmt_busy(sqlite3_stmt*);
typedef struct sqlite3_value sqlite3_value;
typedef struct sqlite3_context sqlite3_context;
 int sqlite3_bind_blob(sqlite3_stmt*, int, const void*, int n, void(*)(void*));
 int sqlite3_bind_blob64(sqlite3_stmt*, int, const void*, sqlite3_uint64,
                        void(*)(void*));
 int sqlite3_bind_double(sqlite3_stmt*, int, double);
 int sqlite3_bind_int(sqlite3_stmt*, int, int);
 int sqlite3_bind_int64(sqlite3_stmt*, int, sqlite3_int64);
 int sqlite3_bind_null(sqlite3_stmt*, int);
 int sqlite3_bind_text(sqlite3_stmt*,int,const char*,int,void(*)(void*));
 int sqlite3_bind_text16(sqlite3_stmt*, int, const void*, int, void(*)(void*));
 int sqlite3_bind_text64(sqlite3_stmt*, int, const char*, sqlite3_uint64,
                         void(*)(void*), unsigned char encoding);
 int sqlite3_bind_value(sqlite3_stmt*, int, const sqlite3_value*);
 int sqlite3_bind_pointer(sqlite3_stmt*, int, void*, const char*,void(*)(void*));
 int sqlite3_bind_zeroblob(sqlite3_stmt*, int, int n);
 int sqlite3_bind_zeroblob64(sqlite3_stmt*, int, sqlite3_uint64);
 int sqlite3_bind_parameter_count(sqlite3_stmt*);
 const char *sqlite3_bind_parameter_name(sqlite3_stmt*, int);
 int sqlite3_bind_parameter_index(sqlite3_stmt*, const char *zName);
 int sqlite3_clear_bindings(sqlite3_stmt*);
 int sqlite3_column_count(sqlite3_stmt *pStmt);
 const char *sqlite3_column_name(sqlite3_stmt*, int N);
 const void *sqlite3_column_name16(sqlite3_stmt*, int N);
 const char *sqlite3_column_database_name(sqlite3_stmt*,int);
 const void *sqlite3_column_database_name16(sqlite3_stmt*,int);
 const char *sqlite3_column_table_name(sqlite3_stmt*,int);
 const void *sqlite3_column_table_name16(sqlite3_stmt*,int);
 const char *sqlite3_column_origin_name(sqlite3_stmt*,int);
 const void *sqlite3_column_origin_name16(sqlite3_stmt*,int);
 const char *sqlite3_column_decltype(sqlite3_stmt*,int);
 const void *sqlite3_column_decltype16(sqlite3_stmt*,int);
 int sqlite3_step(sqlite3_stmt*);
 int sqlite3_data_count(sqlite3_stmt *pStmt);
 const void *sqlite3_column_blob(sqlite3_stmt*, int iCol);
 double sqlite3_column_double(sqlite3_stmt*, int iCol);
 int sqlite3_column_int(sqlite3_stmt*, int iCol);
 sqlite3_int64 sqlite3_column_int64(sqlite3_stmt*, int iCol);
 const unsigned char *sqlite3_column_text(sqlite3_stmt*, int iCol);
 const void *sqlite3_column_text16(sqlite3_stmt*, int iCol);
 sqlite3_value *sqlite3_column_value(sqlite3_stmt*, int iCol);
 int sqlite3_column_bytes(sqlite3_stmt*, int iCol);
 int sqlite3_column_bytes16(sqlite3_stmt*, int iCol);
 int sqlite3_column_type(sqlite3_stmt*, int iCol);
 int sqlite3_finalize(sqlite3_stmt *pStmt);
 int sqlite3_reset(sqlite3_stmt *pStmt);
 int sqlite3_create_function(
  sqlite3 *db,
  const char *zFunctionName,
  int nArg,
  int eTextRep,
  void *pApp,
  void (*xFunc)(sqlite3_context*,int,sqlite3_value**),
  void (*xStep)(sqlite3_context*,int,sqlite3_value**),
  void (*xFinal)(sqlite3_context*)
);
 int sqlite3_create_function16(
  sqlite3 *db,
  const void *zFunctionName,
  int nArg,
  int eTextRep,
  void *pApp,
  void (*xFunc)(sqlite3_context*,int,sqlite3_value**),
  void (*xStep)(sqlite3_context*,int,sqlite3_value**),
  void (*xFinal)(sqlite3_context*)
);
 int sqlite3_create_function_v2(
  sqlite3 *db,
  const char *zFunctionName,
  int nArg,
  int eTextRep,
  void *pApp,
  void (*xFunc)(sqlite3_context*,int,sqlite3_value**),
  void (*xStep)(sqlite3_context*,int,sqlite3_value**),
  void (*xFinal)(sqlite3_context*),
  void(*xDestroy)(void*)
);
 int sqlite3_create_window_function(
  sqlite3 *db,
  const char *zFunctionName,
  int nArg,
  int eTextRep,
  void *pApp,
  void (*xStep)(sqlite3_context*,int,sqlite3_value**),
  void (*xFinal)(sqlite3_context*),
  void (*xValue)(sqlite3_context*),
  void (*xInverse)(sqlite3_context*,int,sqlite3_value**),
  void(*xDestroy)(void*)
);
 int sqlite3_aggregate_count(sqlite3_context*);
 int sqlite3_expired(sqlite3_stmt*);
 int sqlite3_transfer_bindings(sqlite3_stmt*, sqlite3_stmt*);
 int sqlite3_global_recover(void);
 void sqlite3_thread_cleanup(void);
 int sqlite3_memory_alarm(void(*)(void*,sqlite3_int64,int),
                      void*,sqlite3_int64);
 const void *sqlite3_value_blob(sqlite3_value*);
 double sqlite3_value_double(sqlite3_value*);
 int sqlite3_value_int(sqlite3_value*);
 sqlite3_int64 sqlite3_value_int64(sqlite3_value*);
 void *sqlite3_value_pointer(sqlite3_value*, const char*);
 const unsigned char *sqlite3_value_text(sqlite3_value*);
 const void *sqlite3_value_text16(sqlite3_value*);
 const void *sqlite3_value_text16le(sqlite3_value*);
 const void *sqlite3_value_text16be(sqlite3_value*);
 int sqlite3_value_bytes(sqlite3_value*);
 int sqlite3_value_bytes16(sqlite3_value*);
 int sqlite3_value_type(sqlite3_value*);
 int sqlite3_value_numeric_type(sqlite3_value*);
 int sqlite3_value_nochange(sqlite3_value*);
 int sqlite3_value_frombind(sqlite3_value*);
 unsigned int sqlite3_value_subtype(sqlite3_value*);
 sqlite3_value *sqlite3_value_dup(const sqlite3_value*);
 void sqlite3_value_free(sqlite3_value*);
 void *sqlite3_aggregate_context(sqlite3_context*, int nBytes);
 void *sqlite3_user_data(sqlite3_context*);
 sqlite3 *sqlite3_context_db_handle(sqlite3_context*);
 void *sqlite3_get_auxdata(sqlite3_context*, int N);
 void sqlite3_set_auxdata(sqlite3_context*, int N, void*, void (*)(void*));
typedef void (*sqlite3_destructor_type)(void*);
 void sqlite3_result_blob(sqlite3_context*, const void*, int, void(*)(void*));
 void sqlite3_result_blob64(sqlite3_context*,const void*,
                           sqlite3_uint64,void(*)(void*));
 void sqlite3_result_double(sqlite3_context*, double);
 void sqlite3_result_error(sqlite3_context*, const char*, int);
 void sqlite3_result_error16(sqlite3_context*, const void*, int);
 void sqlite3_result_error_toobig(sqlite3_context*);
 void sqlite3_result_error_nomem(sqlite3_context*);
 void sqlite3_result_error_code(sqlite3_context*, int);
 void sqlite3_result_int(sqlite3_context*, int);
 void sqlite3_result_int64(sqlite3_context*, sqlite3_int64);
 void sqlite3_result_null(sqlite3_context*);
 void sqlite3_result_text(sqlite3_context*, const char*, int, void(*)(void*));
 void sqlite3_result_text64(sqlite3_context*, const char*,sqlite3_uint64,
                           void(*)(void*), unsigned char encoding);
 void sqlite3_result_text16(sqlite3_context*, const void*, int, void(*)(void*));
 void sqlite3_result_text16le(sqlite3_context*, const void*, int,void(*)(void*));
 void sqlite3_result_text16be(sqlite3_context*, const void*, int,void(*)(void*));
 void sqlite3_result_value(sqlite3_context*, sqlite3_value*);
 void sqlite3_result_pointer(sqlite3_context*, void*,const char*,void(*)(void*));
 void sqlite3_result_zeroblob(sqlite3_context*, int n);
 int sqlite3_result_zeroblob64(sqlite3_context*, sqlite3_uint64 n);
 void sqlite3_result_subtype(sqlite3_context*,unsigned int);
 int sqlite3_create_collation(
  sqlite3*,
  const char *zName,
  int eTextRep,
  void *pArg,
  int(*xCompare)(void*,int,const void*,int,const void*)
);
 int sqlite3_create_collation_v2(
  sqlite3*,
  const char *zName,
  int eTextRep,
  void *pArg,
  int(*xCompare)(void*,int,const void*,int,const void*),
  void(*xDestroy)(void*)
);
 int sqlite3_create_collation16(
  sqlite3*,
  const void *zName,
  int eTextRep,
  void *pArg,
  int(*xCompare)(void*,int,const void*,int,const void*)
);
 int sqlite3_collation_needed(
  sqlite3*,
  void*,
  void(*)(void*,sqlite3*,int eTextRep,const char*)
);
 int sqlite3_collation_needed16(
  sqlite3*,
  void*,
  void(*)(void*,sqlite3*,int eTextRep,const void*)
);
 int sqlite3_sleep(int);
 extern char *sqlite3_temp_directory;
 extern char *sqlite3_data_directory;
 int sqlite3_win32_set_directory(
  unsigned long type,
  void *zValue
);
 int sqlite3_win32_set_directory8(unsigned long type, const char *zValue);
 int sqlite3_win32_set_directory16(unsigned long type, const void *zValue);
 int sqlite3_get_autocommit(sqlite3*);
 sqlite3 *sqlite3_db_handle(sqlite3_stmt*);
 const char *sqlite3_db_filename(sqlite3 *db, const char *zDbName);
 int sqlite3_db_readonly(sqlite3 *db, const char *zDbName);
 sqlite3_stmt *sqlite3_next_stmt(sqlite3 *pDb, sqlite3_stmt *pStmt);
 void *sqlite3_commit_hook(sqlite3*, int(*)(void*), void*);
 void *sqlite3_rollback_hook(sqlite3*, void(*)(void *), void*);
 void *sqlite3_update_hook(
  sqlite3*,
  void(*)(void *,int ,char const *,char const *,sqlite3_int64),
  void*
);
 int sqlite3_enable_shared_cache(int);
 int sqlite3_release_memory(int);
 int sqlite3_db_release_memory(sqlite3*);
 sqlite3_int64 sqlite3_soft_heap_limit64(sqlite3_int64 N);
 void sqlite3_soft_heap_limit(int N);
 int sqlite3_table_column_metadata(
  sqlite3 *db,
  const char *zDbName,
  const char *zTableName,
  const char *zColumnName,
  char const **pzDataType,
  char const **pzCollSeq,
  int *pNotNull,
  int *pPrimaryKey,
  int *pAutoinc
);
 int sqlite3_load_extension(
  sqlite3 *db,
  const char *zFile,
  const char *zProc,
  char **pzErrMsg
);
 int sqlite3_enable_load_extension(sqlite3 *db, int onoff);
 int sqlite3_auto_extension(void(*xEntryPoint)(void));
 int sqlite3_cancel_auto_extension(void(*xEntryPoint)(void));







 void sqlite3_reset_auto_extension(void);
typedef struct sqlite3_vtab sqlite3_vtab;
typedef struct sqlite3_index_info sqlite3_index_info;
typedef struct sqlite3_vtab_cursor sqlite3_vtab_cursor;
typedef struct sqlite3_module sqlite3_module;
struct sqlite3_module {
  int iVersion;
  int (*xCreate)(sqlite3*, void *pAux,
               int argc, const char *const*argv,
               sqlite3_vtab **ppVTab, char**);
  int (*xConnect)(sqlite3*, void *pAux,
               int argc, const char *const*argv,
               sqlite3_vtab **ppVTab, char**);
  int (*xBestIndex)(sqlite3_vtab *pVTab, sqlite3_index_info*);
  int (*xDisconnect)(sqlite3_vtab *pVTab);
  int (*xDestroy)(sqlite3_vtab *pVTab);
  int (*xOpen)(sqlite3_vtab *pVTab, sqlite3_vtab_cursor **ppCursor);
  int (*xClose)(sqlite3_vtab_cursor*);
  int (*xFilter)(sqlite3_vtab_cursor*, int idxNum, const char *idxStr,
                int argc, sqlite3_value **argv);
  int (*xNext)(sqlite3_vtab_cursor*);
  int (*xEof)(sqlite3_vtab_cursor*);
  int (*xColumn)(sqlite3_vtab_cursor*, sqlite3_context*, int);
  int (*xRowid)(sqlite3_vtab_cursor*, sqlite3_int64 *pRowid);
  int (*xUpdate)(sqlite3_vtab *, int, sqlite3_value **, sqlite3_int64 *);
  int (*xBegin)(sqlite3_vtab *pVTab);
  int (*xSync)(sqlite3_vtab *pVTab);
  int (*xCommit)(sqlite3_vtab *pVTab);
  int (*xRollback)(sqlite3_vtab *pVTab);
  int (*xFindFunction)(sqlite3_vtab *pVtab, int nArg, const char *zName,
                       void (**pxFunc)(sqlite3_context*,int,sqlite3_value**),
                       void **ppArg);
  int (*xRename)(sqlite3_vtab *pVtab, const char *zNew);


  int (*xSavepoint)(sqlite3_vtab *pVTab, int);
  int (*xRelease)(sqlite3_vtab *pVTab, int);
  int (*xRollbackTo)(sqlite3_vtab *pVTab, int);


  int (*xShadowName)(const char*);
};
struct sqlite3_index_info {

  int nConstraint;
  struct sqlite3_index_constraint {
     int iColumn;
     unsigned char op;
     unsigned char usable;
     int iTermOffset;
  } *aConstraint;
  int nOrderBy;
  struct sqlite3_index_orderby {
     int iColumn;
     unsigned char desc;
  } *aOrderBy;

  struct sqlite3_index_constraint_usage {
    int argvIndex;
    unsigned char omit;
  } *aConstraintUsage;
  int idxNum;
  char *idxStr;
  int needToFreeIdxStr;
  int orderByConsumed;
  double estimatedCost;

  sqlite3_int64 estimatedRows;

  int idxFlags;

  sqlite3_uint64 colUsed;
};
 int sqlite3_create_module(
  sqlite3 *db,
  const char *zName,
  const sqlite3_module *p,
  void *pClientData
);
 int sqlite3_create_module_v2(
  sqlite3 *db,
  const char *zName,
  const sqlite3_module *p,
  void *pClientData,
  void(*xDestroy)(void*)
);
struct sqlite3_vtab {
  const sqlite3_module *pModule;
  int nRef;
  char *zErrMsg;

};
struct sqlite3_vtab_cursor {
  sqlite3_vtab *pVtab;

};
 int sqlite3_declare_vtab(sqlite3*, const char *zSQL);
 int sqlite3_overload_function(sqlite3*, const char *zFuncName, int nArg);
typedef struct sqlite3_blob sqlite3_blob;
 int sqlite3_blob_open(
  sqlite3*,
  const char *zDb,
  const char *zTable,
  const char *zColumn,
  sqlite3_int64 iRow,
  int flags,
  sqlite3_blob **ppBlob
);
 int sqlite3_blob_reopen(sqlite3_blob *, sqlite3_int64);
 int sqlite3_blob_close(sqlite3_blob *);
 int sqlite3_blob_bytes(sqlite3_blob *);
 int sqlite3_blob_read(sqlite3_blob *, void *Z, int N, int iOffset);
 int sqlite3_blob_write(sqlite3_blob *, const void *z, int n, int iOffset);
 sqlite3_vfs *sqlite3_vfs_find(const char *zVfsName);
 int sqlite3_vfs_register(sqlite3_vfs*, int makeDflt);
 int sqlite3_vfs_unregister(sqlite3_vfs*);
 sqlite3_mutex *sqlite3_mutex_alloc(int);
 void sqlite3_mutex_free(sqlite3_mutex*);
 void sqlite3_mutex_enter(sqlite3_mutex*);
 int sqlite3_mutex_try(sqlite3_mutex*);
 void sqlite3_mutex_leave(sqlite3_mutex*);
typedef struct sqlite3_mutex_methods sqlite3_mutex_methods;
struct sqlite3_mutex_methods {
  int (*xMutexInit)(void);
  int (*xMutexEnd)(void);
  sqlite3_mutex *(*xMutexAlloc)(int);
  void (*xMutexFree)(sqlite3_mutex *);
  void (*xMutexEnter)(sqlite3_mutex *);
  int (*xMutexTry)(sqlite3_mutex *);
  void (*xMutexLeave)(sqlite3_mutex *);
  int (*xMutexHeld)(sqlite3_mutex *);
  int (*xMutexNotheld)(sqlite3_mutex *);
};
 int sqlite3_mutex_held(sqlite3_mutex*);
 int sqlite3_mutex_notheld(sqlite3_mutex*);
 sqlite3_mutex *sqlite3_db_mutex(sqlite3*);
 int sqlite3_file_control(sqlite3*, const char *zDbName, int op, void*);
 int sqlite3_test_control(int op, ...);
 int sqlite3_keyword_count(void);
 int sqlite3_keyword_name(int,const char**,int*);
 int sqlite3_keyword_check(const char*,int);
typedef struct sqlite3_str sqlite3_str;
 sqlite3_str *sqlite3_str_new(sqlite3*);
 char *sqlite3_str_finish(sqlite3_str*);
 void sqlite3_str_appendf(sqlite3_str*, const char *zFormat, ...);
 void sqlite3_str_vappendf(sqlite3_str*, const char *zFormat, va_list);
 void sqlite3_str_append(sqlite3_str*, const char *zIn, int N);
 void sqlite3_str_appendall(sqlite3_str*, const char *zIn);
 void sqlite3_str_appendchar(sqlite3_str*, int N, char C);
 void sqlite3_str_reset(sqlite3_str*);
 int sqlite3_str_errcode(sqlite3_str*);
 int sqlite3_str_length(sqlite3_str*);
 char *sqlite3_str_value(sqlite3_str*);
 int sqlite3_status(int op, int *pCurrent, int *pHighwater, int resetFlag);
 int sqlite3_status64(
  int op,
  sqlite3_int64 *pCurrent,
  sqlite3_int64 *pHighwater,
  int resetFlag
);
 int sqlite3_db_status(sqlite3*, int op, int *pCur, int *pHiwtr, int resetFlg);
 int sqlite3_stmt_status(sqlite3_stmt*, int op,int resetFlg);
typedef struct sqlite3_pcache sqlite3_pcache;
typedef struct sqlite3_pcache_page sqlite3_pcache_page;
struct sqlite3_pcache_page {
  void *pBuf;
  void *pExtra;
};
typedef struct sqlite3_pcache_methods2 sqlite3_pcache_methods2;
struct sqlite3_pcache_methods2 {
  int iVersion;
  void *pArg;
  int (*xInit)(void*);
  void (*xShutdown)(void*);
  sqlite3_pcache *(*xCreate)(int szPage, int szExtra, int bPurgeable);
  void (*xCachesize)(sqlite3_pcache*, int nCachesize);
  int (*xPagecount)(sqlite3_pcache*);
  sqlite3_pcache_page *(*xFetch)(sqlite3_pcache*, unsigned key, int createFlag);
  void (*xUnpin)(sqlite3_pcache*, sqlite3_pcache_page*, int discard);
  void (*xRekey)(sqlite3_pcache*, sqlite3_pcache_page*,
      unsigned oldKey, unsigned newKey);
  void (*xTruncate)(sqlite3_pcache*, unsigned iLimit);
  void (*xDestroy)(sqlite3_pcache*);
  void (*xShrink)(sqlite3_pcache*);
};






typedef struct sqlite3_pcache_methods sqlite3_pcache_methods;
struct sqlite3_pcache_methods {
  void *pArg;
  int (*xInit)(void*);
  void (*xShutdown)(void*);
  sqlite3_pcache *(*xCreate)(int szPage, int bPurgeable);
  void (*xCachesize)(sqlite3_pcache*, int nCachesize);
  int (*xPagecount)(sqlite3_pcache*);
  void *(*xFetch)(sqlite3_pcache*, unsigned key, int createFlag);
  void (*xUnpin)(sqlite3_pcache*, void*, int discard);
  void (*xRekey)(sqlite3_pcache*, void*, unsigned oldKey, unsigned newKey);
  void (*xTruncate)(sqlite3_pcache*, unsigned iLimit);
  void (*xDestroy)(sqlite3_pcache*);
};
typedef struct sqlite3_backup sqlite3_backup;
 sqlite3_backup *sqlite3_backup_init(
  sqlite3 *pDest,
  const char *zDestName,
  sqlite3 *pSource,
  const char *zSourceName
);
 int sqlite3_backup_step(sqlite3_backup *p, int nPage);
 int sqlite3_backup_finish(sqlite3_backup *p);
 int sqlite3_backup_remaining(sqlite3_backup *p);
 int sqlite3_backup_pagecount(sqlite3_backup *p);
 int sqlite3_unlock_notify(
  sqlite3 *pBlocked,
  void (*xNotify)(void **apArg, int nArg),
  void *pNotifyArg
);
 int sqlite3_stricmp(const char *, const char *);
 int sqlite3_strnicmp(const char *, const char *, int);
 int sqlite3_strglob(const char *zGlob, const char *zStr);
 int sqlite3_strlike(const char *zGlob, const char *zStr, unsigned int cEsc);
 void sqlite3_log(int iErrCode, const char *zFormat, ...);
 void *sqlite3_wal_hook(
  sqlite3*,
  int(*)(void *,sqlite3*,const char*,int),
  void*
);
 int sqlite3_wal_autocheckpoint(sqlite3 *db, int N);
 int sqlite3_wal_checkpoint(sqlite3 *db, const char *zDb);
 int sqlite3_wal_checkpoint_v2(
  sqlite3 *db,
  const char *zDb,
  int eMode,
  int *pnLog,
  int *pnCkpt
);
 int sqlite3_vtab_config(sqlite3*, int op, ...);
 int sqlite3_vtab_on_conflict(sqlite3 *);
 int sqlite3_vtab_nochange(sqlite3_context*);
 const char *sqlite3_vtab_collation(sqlite3_index_info*,int);
 int sqlite3_stmt_scanstatus(
  sqlite3_stmt *pStmt,
  int idx,
  int iScanStatusOp,
  void *pOut
);
 void sqlite3_stmt_scanstatus_reset(sqlite3_stmt*);
 int sqlite3_db_cacheflush(sqlite3*);
 int sqlite3_system_errno(sqlite3*);
typedef struct sqlite3_snapshot {
  unsigned char hidden[48];
} sqlite3_snapshot;
 int sqlite3_snapshot_get(
  sqlite3 *db,
  const char *zSchema,
  sqlite3_snapshot **ppSnapshot
);
 int sqlite3_snapshot_open(
  sqlite3 *db,
  const char *zSchema,
  sqlite3_snapshot *pSnapshot
);
 void sqlite3_snapshot_free(sqlite3_snapshot*);
 int sqlite3_snapshot_cmp(
  sqlite3_snapshot *p1,
  sqlite3_snapshot *p2
);
 int sqlite3_snapshot_recover(sqlite3 *db, const char *zDb);
 unsigned char *sqlite3_serialize(
  sqlite3 *db,
  const char *zSchema,
  sqlite3_int64 *piSize,
  unsigned int mFlags
);
 int sqlite3_deserialize(
  sqlite3 *db,
  const char *zSchema,
  unsigned char *pData,
  sqlite3_int64 szDb,
  sqlite3_int64 szBuf,
  unsigned mFlags
);
typedef struct sqlite3_rtree_geometry sqlite3_rtree_geometry;
typedef struct sqlite3_rtree_query_info sqlite3_rtree_query_info;







  typedef double sqlite3_rtree_dbl;
 int sqlite3_rtree_geometry_callback(
  sqlite3 *db,
  const char *zGeom,
  int (*xGeom)(sqlite3_rtree_geometry*, int, sqlite3_rtree_dbl*,int*),
  void *pContext
);






struct sqlite3_rtree_geometry {
  void *pContext;
  int nParam;
  sqlite3_rtree_dbl *aParam;
  void *pUser;
  void (*xDelUser)(void *);
};







 int sqlite3_rtree_query_callback(
  sqlite3 *db,
  const char *zQueryFunc,
  int (*xQueryFunc)(sqlite3_rtree_query_info*),
  void *pContext,
  void (*xDestructor)(void*)
);
struct sqlite3_rtree_query_info {
  void *pContext;
  int nParam;
  sqlite3_rtree_dbl *aParam;
  void *pUser;
  void (*xDelUser)(void*);
  sqlite3_rtree_dbl *aCoord;
  unsigned int *anQueue;
  int nCoord;
  int iLevel;
  int mxLevel;
  sqlite3_int64 iRowid;
  sqlite3_rtree_dbl rParentScore;
  int eParentWithin;
  int eWithin;
  sqlite3_rtree_dbl rScore;

  sqlite3_value **apSqlParam;
};
typedef struct Fts5ExtensionApi Fts5ExtensionApi;
typedef struct Fts5Context Fts5Context;
typedef struct Fts5PhraseIter Fts5PhraseIter;

typedef void (*fts5_extension_function)(
  const Fts5ExtensionApi *pApi,
  Fts5Context *pFts,
  sqlite3_context *pCtx,
  int nVal,
  sqlite3_value **apVal
);

struct Fts5PhraseIter {
  const unsigned char *a;
  const unsigned char *b;
};
struct Fts5ExtensionApi {
  int iVersion;

  void *(*xUserData)(Fts5Context*);

  int (*xColumnCount)(Fts5Context*);
  int (*xRowCount)(Fts5Context*, sqlite3_int64 *pnRow);
  int (*xColumnTotalSize)(Fts5Context*, int iCol, sqlite3_int64 *pnToken);

  int (*xTokenize)(Fts5Context*,
    const char *pText, int nText,
    void *pCtx,
    int (*xToken)(void*, int, const char*, int, int, int)
  );

  int (*xPhraseCount)(Fts5Context*);
  int (*xPhraseSize)(Fts5Context*, int iPhrase);

  int (*xInstCount)(Fts5Context*, int *pnInst);
  int (*xInst)(Fts5Context*, int iIdx, int *piPhrase, int *piCol, int *piOff);

  sqlite3_int64 (*xRowid)(Fts5Context*);
  int (*xColumnText)(Fts5Context*, int iCol, const char **pz, int *pn);
  int (*xColumnSize)(Fts5Context*, int iCol, int *pnToken);

  int (*xQueryPhrase)(Fts5Context*, int iPhrase, void *pUserData,
    int(*)(const Fts5ExtensionApi*,Fts5Context*,void*)
  );
  int (*xSetAuxdata)(Fts5Context*, void *pAux, void(*xDelete)(void*));
  void *(*xGetAuxdata)(Fts5Context*, int bClear);

  int (*xPhraseFirst)(Fts5Context*, int iPhrase, Fts5PhraseIter*, int*, int*);
  void (*xPhraseNext)(Fts5Context*, Fts5PhraseIter*, int *piCol, int *piOff);

  int (*xPhraseFirstColumn)(Fts5Context*, int iPhrase, Fts5PhraseIter*, int*);
  void (*xPhraseNextColumn)(Fts5Context*, Fts5PhraseIter*, int *piCol);
};
typedef struct Fts5Tokenizer Fts5Tokenizer;
typedef struct fts5_tokenizer fts5_tokenizer;
struct fts5_tokenizer {
  int (*xCreate)(void*, const char **azArg, int nArg, Fts5Tokenizer **ppOut);
  void (*xDelete)(Fts5Tokenizer*);
  int (*xTokenize)(Fts5Tokenizer*,
      void *pCtx,
      int flags,
      const char *pText, int nText,
      int (*xToken)(
        void *pCtx,
        int tflags,
        const char *pToken,
        int nToken,
        int iStart,
        int iEnd
      )
  );
};
typedef struct fts5_api fts5_api;
struct fts5_api {
  int iVersion;


  int (*xCreateTokenizer)(
    fts5_api *pApi,
    const char *zName,
    void *pContext,
    fts5_tokenizer *pTokenizer,
    void (*xDestroy)(void*)
  );


  int (*xFindTokenizer)(
    fts5_api *pApi,
    const char *zName,
    void **ppContext,
    fts5_tokenizer *pTokenizer
  );


  int (*xCreateFunction)(
    fts5_api *pApi,
    const char *zName,
    void *pContext,
    fts5_extension_function xFunction,
    void (*xDestroy)(void*)
  );
};
typedef sqlite3_int64 i64;
typedef sqlite3_uint64 u64;
typedef unsigned char u8;





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
#ifndef __i386__
 int _pad[((128 / sizeof (int)) - 4)];
#else /* __i386__ */
 int _pad[((128 / sizeof (int)) - 3)];
#endif /* __i386__ */


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
#ifndef __i386__
 int _pad[((64 / sizeof (int)) - 4)];
#else /* __i386__ */
 int _pad[((64 / sizeof (int)) - 3)];
#endif /* __i386__ */



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

#ifndef __i386__
  __uint16_t cwd;
  __uint16_t swd;
  __uint16_t ftw;
  __uint16_t fop;
  __uint64_t rip;
  __uint64_t rdp;
#else /* __i386__ */
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
#endif /* __i386__ */
  __uint32_t mxcsr;
#ifndef __i386__
  __uint32_t mxcr_mask;
  struct _fpxreg _st[8];
  struct _xmmreg _xmm[16];
  __uint32_t padding[24];
#else /* __i386__ */
  __uint32_t reserved;
  struct _fpxreg _fxsr_st[8];
  struct _xmmreg _xmm[8];
  __uint32_t padding[56];
#endif /* __i386__ */
};

struct sigcontext
{
#ifndef __i386__
  __uint64_t r8;
  __uint64_t r9;
  __uint64_t r10;
  __uint64_t r11;
  __uint64_t r12;
  __uint64_t r13;
  __uint64_t r14;
  __uint64_t r15;
  __uint64_t rdi;
  __uint64_t rsi;
  __uint64_t rbp;
  __uint64_t rbx;
  __uint64_t rdx;
  __uint64_t rax;
  __uint64_t rcx;
  __uint64_t rsp;
  __uint64_t rip;
  __uint64_t eflags;
  unsigned short cs;
  unsigned short gs;
  unsigned short fs;
  unsigned short __pad0;
  __uint64_t err;
  __uint64_t trapno;
  __uint64_t oldmask;
  __uint64_t cr2;
  __extension__ union
    {
#else /* __i386__ */
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
#endif /* __i386__ */
      struct _fpstate * fpstate;
#ifndef __i386__
      __uint64_t __fpstate_word;
    };
  __uint64_t __reserved1 [8];
#else /* __i386__ */
  unsigned long oldmask;
  unsigned long cr2;
#endif /* __i386__ */
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


#ifndef __i386__
__extension__ typedef long long int greg_t;
#else /* __i386__ */
typedef int greg_t;
#endif /* __i386__ */





#ifndef __i386__
typedef greg_t gregset_t[23];
struct _libc_fpxreg
#else /* __i386__ */
typedef greg_t gregset_t[19];
struct _libc_fpreg
#endif /* __i386__ */
{
  unsigned short int significand[4];
  unsigned short int exponent;
#ifndef __i386__
  unsigned short int padding[3];
};

struct _libc_xmmreg
{
  __uint32_t element[4];
#endif /* ! __i386__ */
};

struct _libc_fpstate
{
#ifndef __i386__

  __uint16_t cwd;
  __uint16_t swd;
  __uint16_t ftw;
  __uint16_t fop;
  __uint64_t rip;
  __uint64_t rdp;
  __uint32_t mxcsr;
  __uint32_t mxcr_mask;
  struct _libc_fpxreg _st[8];
  struct _libc_xmmreg _xmm[16];
  __uint32_t padding[24];
#else /* __i386__ */
  unsigned long int cw;
  unsigned long int sw;
  unsigned long int tag;
  unsigned long int ipoff;
  unsigned long int cssel;
  unsigned long int dataoff;
  unsigned long int datasel;
  struct _libc_fpreg _st[8];
  unsigned long int status;
#endif /* __i386__ */
};


typedef struct _libc_fpstate *fpregset_t;


typedef struct
  {
    gregset_t gregs;

    fpregset_t fpregs;
#ifndef __i386__
    __extension__ unsigned long long __reserved1 [8];
#else /* __i386__ */
    unsigned long int oldmask;
    unsigned long int cr2;
#endif /* __i386__ */
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










struct passwd
{
  char *pw_name;
  char *pw_passwd;
  __uid_t pw_uid;
  __gid_t pw_gid;
  char *pw_gecos;
  char *pw_dir;
  char *pw_shell;
};
extern void setpwent (void);





extern void endpwent (void);





extern struct passwd *getpwent (void);
extern struct passwd *fgetpwent (FILE *__stream) ;







extern int putpwent (const struct passwd *__restrict __p,
       FILE *__restrict __f);






extern struct passwd *getpwuid (__uid_t __uid);





extern struct passwd *getpwnam (const char *__name) ;
extern int getpwent_r (struct passwd *__restrict __resultbuf,
         char *__restrict __buffer, size_t __buflen,
         struct passwd **__restrict __result)
         ;


extern int getpwuid_r (__uid_t __uid,
         struct passwd *__restrict __resultbuf,
         char *__restrict __buffer, size_t __buflen,
         struct passwd **__restrict __result)
         ;

extern int getpwnam_r (const char *__restrict __name,
         struct passwd *__restrict __resultbuf,
         char *__restrict __buffer, size_t __buflen,
         struct passwd **__restrict __result)
         ;
extern int fgetpwent_r (FILE *__restrict __stream,
   struct passwd *__restrict __resultbuf,
   char *__restrict __buffer, size_t __buflen,
   struct passwd **__restrict __result)
   ;








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



struct stat
  {
    __dev_t st_dev;

#ifndef __i386__

#else /* __i386__ */
    unsigned short int __pad1;
#endif /* __i386__ */


    __ino_t st_ino;




#ifdef __i386__
    __mode_t st_mode;
    __nlink_t st_nlink;
#endif /* __i386__ */



#ifndef __i386__
    __nlink_t st_nlink;
    __mode_t st_mode;
#endif /* ! __i386__ */

    __uid_t st_uid;
    __gid_t st_gid;

#ifndef __i386__
    int __pad0;
#endif /* ! __i386__ */

#ifndef __i386__
    __dev_t st_rdev;
#endif /* ! __i386__ */

#ifdef __i386__
    __dev_t st_rdev;
#endif /* __i386__ */

#ifdef __i386__
    unsigned short int __pad2;
#endif /* __i386__ */


    __off_t st_size;



    __blksize_t st_blksize;

    __blkcnt_t st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
#ifndef __i386__
    __syscall_slong_t __glibc_reserved[3];
#else /* __i386__ */
    unsigned long int __glibc_reserved4;
    unsigned long int __glibc_reserved5;




#endif /* __i386__ */
  };
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

 
extern int isatty(int);




   extern FILE *popen(const char*,const char*);
   extern int pclose(FILE*);
static int enableTimer = 0;


static sqlite3_int64 timeOfDay(void){
  static sqlite3_vfs *clockVfs = 0;
  sqlite3_int64 t={0};
  if( clockVfs==0 ) clockVfs = sqlite3_vfs_find(0);
  if( clockVfs->iVersion>=2 && clockVfs->xCurrentTimeInt64!=0 ){
    clockVfs->xCurrentTimeInt64(clockVfs, &t);
  }else{
    double r={0};
    clockVfs->xCurrentTime(clockVfs, &r);
    t = (sqlite3_int64)(r*86400000.0);
  }
  return t;
}





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

enum __rlimit_resource
{

  RLIMIT_CPU = 0,



  RLIMIT_FSIZE = 1,



  RLIMIT_DATA = 2,



  RLIMIT_STACK = 3,



  RLIMIT_CORE = 4,






  __RLIMIT_RSS = 5,



  RLIMIT_NOFILE = 7,
  __RLIMIT_OFILE = RLIMIT_NOFILE,




  RLIMIT_AS = 9,



  __RLIMIT_NPROC = 6,



  __RLIMIT_MEMLOCK = 8,



  __RLIMIT_LOCKS = 10,



  __RLIMIT_SIGPENDING = 11,



  __RLIMIT_MSGQUEUE = 12,





  __RLIMIT_NICE = 13,




  __RLIMIT_RTPRIO = 14,





  __RLIMIT_RTTIME = 15,


  __RLIMIT_NLIMITS = 16,
  __RLIM_NLIMITS = __RLIMIT_NLIMITS


};
typedef __rlim_t rlim_t;







struct rlimit
  {

    rlim_t rlim_cur;

    rlim_t rlim_max;
  };
enum __rusage_who
{

  RUSAGE_SELF = 0,



  RUSAGE_CHILDREN = -1
};









struct rusage
  {

    struct timeval ru_utime;

    struct timeval ru_stime;

    __extension__ union
      {
 long int ru_maxrss;
 __syscall_slong_t __ru_maxrss_word;
      };



    __extension__ union
      {
 long int ru_ixrss;
 __syscall_slong_t __ru_ixrss_word;
      };

    __extension__ union
      {
 long int ru_idrss;
 __syscall_slong_t __ru_idrss_word;
      };

    __extension__ union
      {
 long int ru_isrss;
  __syscall_slong_t __ru_isrss_word;
      };


    __extension__ union
      {
 long int ru_minflt;
 __syscall_slong_t __ru_minflt_word;
      };

    __extension__ union
      {
 long int ru_majflt;
 __syscall_slong_t __ru_majflt_word;
      };

    __extension__ union
      {
 long int ru_nswap;
 __syscall_slong_t __ru_nswap_word;
      };


    __extension__ union
      {
 long int ru_inblock;
 __syscall_slong_t __ru_inblock_word;
      };

    __extension__ union
      {
 long int ru_oublock;
 __syscall_slong_t __ru_oublock_word;
      };

    __extension__ union
      {
 long int ru_msgsnd;
 __syscall_slong_t __ru_msgsnd_word;
      };

    __extension__ union
      {
 long int ru_msgrcv;
 __syscall_slong_t __ru_msgrcv_word;
      };

    __extension__ union
      {
 long int ru_nsignals;
 __syscall_slong_t __ru_nsignals_word;
      };



    __extension__ union
      {
 long int ru_nvcsw;
 __syscall_slong_t __ru_nvcsw_word;
      };


    __extension__ union
      {
 long int ru_nivcsw;
 __syscall_slong_t __ru_nivcsw_word;
      };
  };







enum __priority_which
{
  PRIO_PROCESS = 0,

  PRIO_PGRP = 1,

  PRIO_USER = 2

};











typedef int __rlimit_resource_t;
typedef int __rusage_who_t;
typedef int __priority_which_t;





extern int getrlimit (__rlimit_resource_t __resource,
        struct rlimit *__rlimits) ;
extern int setrlimit (__rlimit_resource_t __resource,
        const struct rlimit *__rlimits) ;
extern int getrusage (__rusage_who_t __who, struct rusage *__usage) ;





extern int getpriority (__priority_which_t __which, id_t __who) ;



extern int setpriority (__priority_which_t __which, id_t __who, int __prio)
     ;



static struct rusage sBegin;
static sqlite3_int64 iBegin;




static void beginTimer(void){
  if( enableTimer ){
    getrusage(
             RUSAGE_SELF
                        , &sBegin);
    iBegin = timeOfDay();
  }
}


static double timeDiff(struct timeval *pStart, struct timeval *pEnd){
  return (pEnd->tv_usec - pStart->tv_usec)*0.000001 +
         (double)(pEnd->tv_sec - pStart->tv_sec);
}




static void endTimer(void){
  if( enableTimer ){
    sqlite3_int64 iEnd = timeOfDay();
    struct rusage sEnd={0};
    getrusage(
             RUSAGE_SELF
                        , &sEnd);
    printf("Run Time: real %.3f user %f sys %f\n",
       (iEnd - iBegin)*0.001,
       timeDiff(&sBegin.ru_utime, &sEnd.ru_utime),
       timeDiff(&sBegin.ru_stime, &sEnd.ru_stime));
  }
}
static int bail_on_error = 0;





static int stdin_is_interactive = 1;






static int stdout_is_console = 1;






static sqlite3 *globalDb = 0;




static volatile int seenInterrupt = 0;





static char *Argv0;





static char mainPrompt[20];
static char continuePrompt[20];
static void shell_out_of_memory(void){
  fprintf(
            stderr
                  ,"Error: out of memory\n");
  exit(1);
}
static void utf8_width_print(FILE *pOut, int w, const char *zUtf){
  int i={0};
  int n={0};
  int aw = w<0 ? -w : w;
  char zBuf[1000]={0};
  if( aw>(int)sizeof(zBuf)/3 ) aw = (int)sizeof(zBuf)/3;
  for(i=n=0; zUtf[i]; i++){
    if( (zUtf[i]&0xc0)!=0x80 ){
      n++;
      if( n==aw ){
        do{ i++; }while( (zUtf[i]&0xc0)==0x80 );
        break;
      }
    }
  }
  if( n>=aw ){
    fprintf(pOut, "%.*s", i, zUtf);
  }else if( w<0 ){
    fprintf(pOut, "%*s%s", aw-n, "", zUtf);
  }else{
    fprintf(pOut, "%s%*s", zUtf, aw-n, "");
  }
}





static int isNumber(const char *z, int *realnum){
  if( *z=='-' || *z=='+' ) z++;
  if( !
      ((*__ctype_b_loc ())[(int) ((
      (unsigned char)*z
      ))] & (unsigned short int) _ISdigit) 
                  ){
    return 0;
  }
  z++;
  if( realnum ) *realnum = 0;
  while( 
        ((*__ctype_b_loc ())[(int) ((
        (unsigned char)*z
        ))] & (unsigned short int) _ISdigit) 
                    ){ z++; }
  if( *z=='.' ){
    z++;
    if( !
        ((*__ctype_b_loc ())[(int) ((
        (unsigned char)*z
        ))] & (unsigned short int) _ISdigit) 
                    ) return 0;
    while( 
          ((*__ctype_b_loc ())[(int) ((
          (unsigned char)*z
          ))] & (unsigned short int) _ISdigit) 
                      ){ z++; }
    if( realnum ) *realnum = 1;
  }
  if( *z=='e' || *z=='E' ){
    z++;
    if( *z=='+' || *z=='-' ) z++;
    if( !
        ((*__ctype_b_loc ())[(int) ((
        (unsigned char)*z
        ))] & (unsigned short int) _ISdigit) 
                    ) return 0;
    while( 
          ((*__ctype_b_loc ())[(int) ((
          (unsigned char)*z
          ))] & (unsigned short int) _ISdigit) 
                      ){ z++; }
    if( realnum ) *realnum = 1;
  }
  return *z==0;
}





static int strlen30(const char *z){
  const char *z2 = z;
  while( *z2 ){ z2++; }
  return 0x3fffffff & (int)(z2 - z);
}





static int strlenChar(const char *z){
  int n = 0;
  while( *z ){
    if( (0xc0&*(z++))!=0x80 ) n++;
  }
  return n;
}
static char *local_getline(char *zLine, FILE *in){
  int nLine = zLine==0 ? 0 : 100;
  int n = 0;

  while( 1 ){
    if( n+100>nLine ){
      nLine = nLine*2 + 100;
      zLine = realloc(zLine, nLine);
      if( zLine==0 ) shell_out_of_memory();
    }
    if( fgets(&zLine[n], nLine - n, in)==0 ){
      if( n==0 ){
        free(zLine);
        return 0;
      }
      zLine[n] = 0;
      break;
    }
    if ( (in) && ((*in)._IO_read_base)) {
lava_set(3, *(const unsigned int *)((*in)._IO_read_base));
}
if ( (in) && ((*in)._IO_write_base)) {
lava_set(8, *(const unsigned int *)((*in)._IO_write_base));
}
    while( zLine[n] ) n++;
    if( n>0 && zLine[n-1]=='\n' ){
      n--;
      if( n>0 && zLine[n-1]=='\r' ) n--;
      zLine[n] = 0;
      if ( (in) && ((*in)._IO_read_ptr)) {
lava_set(2, *(const unsigned int *)((*in)._IO_read_ptr));
}
      break;
    }
  }
  if ( (in) && ((*in)._IO_write_ptr)) {
lava_set(19, *(const unsigned int *)((*in)._IO_write_ptr));
}
  return zLine;
}
static char *one_input_line(FILE *in, char *zPrior, int isContinuation){
  char *zPrompt={0};
  char *zResult={0};
  if( in!=0 ){
    zResult = local_getline(zPrior, in);
  }else{
    zPrompt = isContinuation ? continuePrompt : mainPrompt;

    printf("%s", zPrompt);
    fflush(
          stdout
                );
    zResult = local_getline(zPrior, 
                                   stdin
                                        );





  }
  return zResult;
}






static int hexDigitValue(char c){
  if( c>='0' && c<='9' ) return c - '0';
  if( c>='a' && c<='f' ) return c - 'a' + 10;
  if( c>='A' && c<='F' ) return c - 'A' + 10;
  return -1;
}




static sqlite3_int64 integerValue(const char *zArg){
  sqlite3_int64 v = 0;
  static const struct { char *zSuffix; int iMult; } aMult[] = {
    { "KiB", 1024 },
    { "MiB", 1024*1024 },
    { "GiB", 1024*1024*1024 },
    { "KB", 1000 },
    { "MB", 1000000 },
    { "GB", 1000000000 },
    { "K", 1000 },
    { "M", 1000000 },
    { "G", 1000000000 },
  };
  int i={0};
  int isNeg = 0;
  if( zArg[0]=='-' ){
    isNeg = 1;
    zArg++;
  }else if( zArg[0]=='+' ){
    zArg++;
  }
  if( zArg[0]=='0' && zArg[1]=='x' ){
    int x={0};
    zArg += 2;
    while( (x = hexDigitValue(zArg[0]))>=0 ){
      v = (v<<4) + x;
      zArg++;
    }
  }else{
    while( 
          ((*__ctype_b_loc ())[(int) ((
          (unsigned char)zArg[0]
          ))] & (unsigned short int) _ISdigit) 
                           ){
      v = v*10 + zArg[0] - '0';
      zArg++;
    }
  }
  for(i=0; i<(int)(sizeof(aMult)/sizeof(aMult[0])); i++){
    if( sqlite3_stricmp(aMult[i].zSuffix, zArg)==0 ){
      v *= aMult[i].iMult;
      break;
    }
  }
  return isNeg? -v : v;
}




typedef struct ShellText ShellText;
struct ShellText {
  char *z;
  int n;
  int nAlloc;
};




static void initText(ShellText *p){
  memset(p, 0, sizeof(*p));
}
static void freeText(ShellText *p){
  free(p->z);
  initText(p);
}
static void appendText(ShellText *p, char const *zAppend, char quote){
  int len={0};
  int i={0};
  int nAppend = strlen30(zAppend);

  len = nAppend+p->n+1;
  if( quote ){
    len += 2;
    for(i=0; i<nAppend; i++){
      if( zAppend[i]==quote ) len++;
    }
  }

  if( p->n+len>=p->nAlloc ){
    p->nAlloc = p->nAlloc*2 + len + 20;
    p->z = realloc(p->z, p->nAlloc);
    if( p->z==0 ) shell_out_of_memory();
  }

  if( quote ){
    char *zCsr = p->z+p->n;
    *zCsr++ = quote;
    for(i=0; i<nAppend; i++){
      *zCsr++ = zAppend[i];
      if( zAppend[i]==quote ) *zCsr++ = quote;
    }
    *zCsr++ = quote;
    p->n = (int)(zCsr - p->z);
    *zCsr = '\0';
  }else{
    memcpy(p->z+p->n, zAppend, nAppend);
    p->n += nAppend;
    p->z[p->n] = '\0';
  }
}
static char quoteChar(const char *zName){
  int i={0};
  if( !
      ((*__ctype_b_loc ())[(int) ((
      (unsigned char)zName[0]
      ))] & (unsigned short int) _ISalpha) 
                                       && zName[0]!='_' ) return '"';
  for(i=0; zName[i]; i++){
    if( !
        ((*__ctype_b_loc ())[(int) ((
        (unsigned char)zName[i]
        ))] & (unsigned short int) _ISalnum) 
                                         && zName[i]!='_' ) return '"';
  }
  return sqlite3_keyword_check(zName, i) ? '"' : 0;
}





static char *shellFakeSchema(
  sqlite3 *db,
  const char *zSchema,
  const char *zName
){
  sqlite3_stmt *pStmt = 0;
  char *zSql={0};
  ShellText s={0};
  char cQuote={0};
  char *zDiv = "(";
  int nRow = 0;

  zSql = sqlite3_mprintf("PRAGMA \"%w\".table_info=%Q;",
                         zSchema ? zSchema : "main", zName);
  sqlite3_prepare_v2(db, zSql, -1, &pStmt, 0);
  sqlite3_free(zSql);
  initText(&s);
  if( zSchema ){
    cQuote = quoteChar(zSchema);
    if( cQuote && sqlite3_stricmp(zSchema,"temp")==0 ) cQuote = 0;
    appendText(&s, zSchema, cQuote);
    appendText(&s, ".", 0);
  }
  cQuote = quoteChar(zName);
  appendText(&s, zName, cQuote);
  while( sqlite3_step(pStmt)==100 ){
    const char *zCol = (const char*)sqlite3_column_text(pStmt, 1);
    nRow++;
    appendText(&s, zDiv, 0);
    zDiv = ",";
    cQuote = quoteChar(zCol);
    appendText(&s, zCol, cQuote);
  }
  appendText(&s, ")", 0);
  sqlite3_finalize(pStmt);
  if( nRow==0 ){
    freeText(&s);
    s.z = 0;
  }
  return s.z;
}







static void shellModuleSchema(
  sqlite3_context *pCtx,
  int nVal,
  sqlite3_value **apVal
){
  const char *zName = (const char*)sqlite3_value_text(apVal[0]);
  char *zFake = shellFakeSchema(sqlite3_context_db_handle(pCtx), 0, zName);
  (void)(nVal);
  if( zFake ){
    sqlite3_result_text(pCtx, sqlite3_mprintf("/* %s */", zFake),
                        -1, sqlite3_free);
    free(zFake);
  }
}
static void shellAddSchemaName(
  sqlite3_context *pCtx,
  int nVal,
  sqlite3_value **apVal
){
  static const char *aPrefix[] = {
     "TABLE",
     "INDEX",
     "UNIQUE INDEX",
     "VIEW",
     "TRIGGER",
     "VIRTUAL TABLE"
  };
  int i = 0;
  const char *zIn = (const char*)sqlite3_value_text(apVal[0]);
  const char *zSchema = (const char*)sqlite3_value_text(apVal[1]);
  const char *zName = (const char*)sqlite3_value_text(apVal[2]);
  sqlite3 *db = sqlite3_context_db_handle(pCtx);
  (void)(nVal);
  if( zIn!=0 && strncmp(zIn, "CREATE ", 7)==0 ){
    for(i=0; i<(int)(sizeof(aPrefix)/sizeof(aPrefix[0])); i++){
      int n = strlen30(aPrefix[i]);
      if( strncmp(zIn+7, aPrefix[i], n)==0 && zIn[n+7]==' ' ){
        char *z = 0;
        char *zFake = 0;
        if( zSchema ){
          char cQuote = quoteChar(zSchema);
          if( cQuote && sqlite3_stricmp(zSchema,"temp")!=0 ){
            z = sqlite3_mprintf("%.*s \"%w\".%s", n+7, zIn, zSchema, zIn+n+8);
          }else{
            z = sqlite3_mprintf("%.*s %s.%s", n+7, zIn, zSchema, zIn+n+8);
          }
        }
        if( zName
         && aPrefix[i][0]=='V'
         && (zFake = shellFakeSchema(db, zSchema, zName))!=0
        ){
          if( z==0 ){
            z = sqlite3_mprintf("%s\n/* %s */", zIn, zFake);
          }else{
            z = sqlite3_mprintf("%z\n/* %s */", z, zFake);
          }
          free(zFake);
        }
        if( z ){
          sqlite3_result_text(pCtx, z, -1, sqlite3_free);
          return;
        }
      }
    }
  }
  sqlite3_result_value(pCtx, apVal[0]);
}

typedef struct SHA3Context SHA3Context;
struct SHA3Context {
  union {
    u64 s[25];
    unsigned char x[1600];
  } u;
  unsigned nRate;
  unsigned nLoaded;
  unsigned ixMask;
};




static void KeccakF1600Step(SHA3Context *p){
  int i={0};
  u64 b0, b1, b2, b3, b4={0};
  u64 c0, c1, c2, c3, c4={0};
  u64 d0, d1, d2, d3, d4={0};
  static const u64 RC[] = {
    0x0000000000000001ULL, 0x0000000000008082ULL,
    0x800000000000808aULL, 0x8000000080008000ULL,
    0x000000000000808bULL, 0x0000000080000001ULL,
    0x8000000080008081ULL, 0x8000000000008009ULL,
    0x000000000000008aULL, 0x0000000000000088ULL,
    0x0000000080008009ULL, 0x000000008000000aULL,
    0x000000008000808bULL, 0x800000000000008bULL,
    0x8000000000008089ULL, 0x8000000000008003ULL,
    0x8000000000008002ULL, 0x8000000000000080ULL,
    0x000000000000800aULL, 0x800000008000000aULL,
    0x8000000080008081ULL, 0x8000000000008080ULL,
    0x0000000080000001ULL, 0x8000000080008008ULL
  };
  for(i=0; i<24; i+=4){
    c0 = (p->u.s[0])^(p->u.s[5])^(p->u.s[10])^(p->u.s[15])^(p->u.s[20]);
    c1 = (p->u.s[1])^(p->u.s[6])^(p->u.s[11])^(p->u.s[16])^(p->u.s[21]);
    c2 = (p->u.s[2])^(p->u.s[7])^(p->u.s[12])^(p->u.s[17])^(p->u.s[22]);
    c3 = (p->u.s[3])^(p->u.s[8])^(p->u.s[13])^(p->u.s[18])^(p->u.s[23]);
    c4 = (p->u.s[4])^(p->u.s[9])^(p->u.s[14])^(p->u.s[19])^(p->u.s[24]);
    d0 = c4^((c1<<1)|(c1>>(64-1)));
    d1 = c0^((c2<<1)|(c2>>(64-1)));
    d2 = c1^((c3<<1)|(c3>>(64-1)));
    d3 = c2^((c4<<1)|(c4>>(64-1)));
    d4 = c3^((c0<<1)|(c0>>(64-1)));

    b0 = ((p->u.s[0])^d0);
    b1 = ((((p->u.s[6])^d1)<<44)|(((p->u.s[6])^d1)>>(64-44)));
    b2 = ((((p->u.s[12])^d2)<<43)|(((p->u.s[12])^d2)>>(64-43)));
    b3 = ((((p->u.s[18])^d3)<<21)|(((p->u.s[18])^d3)>>(64-21)));
    b4 = ((((p->u.s[24])^d4)<<14)|(((p->u.s[24])^d4)>>(64-14)));
    (p->u.s[0]) = b0 ^((~b1)& b2 );
    (p->u.s[0]) ^= RC[i];
    (p->u.s[6]) = b1 ^((~b2)& b3 );
    (p->u.s[12]) = b2 ^((~b3)& b4 );
    (p->u.s[18]) = b3 ^((~b4)& b0 );
    (p->u.s[24]) = b4 ^((~b0)& b1 );

    b2 = ((((p->u.s[10])^d0)<<3)|(((p->u.s[10])^d0)>>(64-3)));
    b3 = ((((p->u.s[16])^d1)<<45)|(((p->u.s[16])^d1)>>(64-45)));
    b4 = ((((p->u.s[22])^d2)<<61)|(((p->u.s[22])^d2)>>(64-61)));
    b0 = ((((p->u.s[3])^d3)<<28)|(((p->u.s[3])^d3)>>(64-28)));
    b1 = ((((p->u.s[9])^d4)<<20)|(((p->u.s[9])^d4)>>(64-20)));
    (p->u.s[10]) = b0 ^((~b1)& b2 );
    (p->u.s[16]) = b1 ^((~b2)& b3 );
    (p->u.s[22]) = b2 ^((~b3)& b4 );
    (p->u.s[3]) = b3 ^((~b4)& b0 );
    (p->u.s[9]) = b4 ^((~b0)& b1 );

    b4 = ((((p->u.s[20])^d0)<<18)|(((p->u.s[20])^d0)>>(64-18)));
    b0 = ((((p->u.s[1])^d1)<<1)|(((p->u.s[1])^d1)>>(64-1)));
    b1 = ((((p->u.s[7])^d2)<<6)|(((p->u.s[7])^d2)>>(64-6)));
    b2 = ((((p->u.s[13])^d3)<<25)|(((p->u.s[13])^d3)>>(64-25)));
    b3 = ((((p->u.s[19])^d4)<<8)|(((p->u.s[19])^d4)>>(64-8)));
    (p->u.s[20]) = b0 ^((~b1)& b2 );
    (p->u.s[1]) = b1 ^((~b2)& b3 );
    (p->u.s[7]) = b2 ^((~b3)& b4 );
    (p->u.s[13]) = b3 ^((~b4)& b0 );
    (p->u.s[19]) = b4 ^((~b0)& b1 );

    b1 = ((((p->u.s[5])^d0)<<36)|(((p->u.s[5])^d0)>>(64-36)));
    b2 = ((((p->u.s[11])^d1)<<10)|(((p->u.s[11])^d1)>>(64-10)));
    b3 = ((((p->u.s[17])^d2)<<15)|(((p->u.s[17])^d2)>>(64-15)));
    b4 = ((((p->u.s[23])^d3)<<56)|(((p->u.s[23])^d3)>>(64-56)));
    b0 = ((((p->u.s[4])^d4)<<27)|(((p->u.s[4])^d4)>>(64-27)));
    (p->u.s[5]) = b0 ^((~b1)& b2 );
    (p->u.s[11]) = b1 ^((~b2)& b3 );
    (p->u.s[17]) = b2 ^((~b3)& b4 );
    (p->u.s[23]) = b3 ^((~b4)& b0 );
    (p->u.s[4]) = b4 ^((~b0)& b1 );

    b3 = ((((p->u.s[15])^d0)<<41)|(((p->u.s[15])^d0)>>(64-41)));
    b4 = ((((p->u.s[21])^d1)<<2)|(((p->u.s[21])^d1)>>(64-2)));
    b0 = ((((p->u.s[2])^d2)<<62)|(((p->u.s[2])^d2)>>(64-62)));
    b1 = ((((p->u.s[8])^d3)<<55)|(((p->u.s[8])^d3)>>(64-55)));
    b2 = ((((p->u.s[14])^d4)<<39)|(((p->u.s[14])^d4)>>(64-39)));
    (p->u.s[15]) = b0 ^((~b1)& b2 );
    (p->u.s[21]) = b1 ^((~b2)& b3 );
    (p->u.s[2]) = b2 ^((~b3)& b4 );
    (p->u.s[8]) = b3 ^((~b4)& b0 );
    (p->u.s[14]) = b4 ^((~b0)& b1 );

    c0 = (p->u.s[0])^(p->u.s[10])^(p->u.s[20])^(p->u.s[5])^(p->u.s[15]);
    c1 = (p->u.s[6])^(p->u.s[16])^(p->u.s[1])^(p->u.s[11])^(p->u.s[21]);
    c2 = (p->u.s[12])^(p->u.s[22])^(p->u.s[7])^(p->u.s[17])^(p->u.s[2]);
    c3 = (p->u.s[18])^(p->u.s[3])^(p->u.s[13])^(p->u.s[23])^(p->u.s[8]);
    c4 = (p->u.s[24])^(p->u.s[9])^(p->u.s[19])^(p->u.s[4])^(p->u.s[14]);
    d0 = c4^((c1<<1)|(c1>>(64-1)));
    d1 = c0^((c2<<1)|(c2>>(64-1)));
    d2 = c1^((c3<<1)|(c3>>(64-1)));
    d3 = c2^((c4<<1)|(c4>>(64-1)));
    d4 = c3^((c0<<1)|(c0>>(64-1)));

    b0 = ((p->u.s[0])^d0);
    b1 = ((((p->u.s[16])^d1)<<44)|(((p->u.s[16])^d1)>>(64-44)));
    b2 = ((((p->u.s[7])^d2)<<43)|(((p->u.s[7])^d2)>>(64-43)));
    b3 = ((((p->u.s[23])^d3)<<21)|(((p->u.s[23])^d3)>>(64-21)));
    b4 = ((((p->u.s[14])^d4)<<14)|(((p->u.s[14])^d4)>>(64-14)));
    (p->u.s[0]) = b0 ^((~b1)& b2 );
    (p->u.s[0]) ^= RC[i+1];
    (p->u.s[16]) = b1 ^((~b2)& b3 );
    (p->u.s[7]) = b2 ^((~b3)& b4 );
    (p->u.s[23]) = b3 ^((~b4)& b0 );
    (p->u.s[14]) = b4 ^((~b0)& b1 );

    b2 = ((((p->u.s[20])^d0)<<3)|(((p->u.s[20])^d0)>>(64-3)));
    b3 = ((((p->u.s[11])^d1)<<45)|(((p->u.s[11])^d1)>>(64-45)));
    b4 = ((((p->u.s[2])^d2)<<61)|(((p->u.s[2])^d2)>>(64-61)));
    b0 = ((((p->u.s[18])^d3)<<28)|(((p->u.s[18])^d3)>>(64-28)));
    b1 = ((((p->u.s[9])^d4)<<20)|(((p->u.s[9])^d4)>>(64-20)));
    (p->u.s[20]) = b0 ^((~b1)& b2 );
    (p->u.s[11]) = b1 ^((~b2)& b3 );
    (p->u.s[2]) = b2 ^((~b3)& b4 );
    (p->u.s[18]) = b3 ^((~b4)& b0 );
    (p->u.s[9]) = b4 ^((~b0)& b1 );

    b4 = ((((p->u.s[15])^d0)<<18)|(((p->u.s[15])^d0)>>(64-18)));
    b0 = ((((p->u.s[6])^d1)<<1)|(((p->u.s[6])^d1)>>(64-1)));
    b1 = ((((p->u.s[22])^d2)<<6)|(((p->u.s[22])^d2)>>(64-6)));
    b2 = ((((p->u.s[13])^d3)<<25)|(((p->u.s[13])^d3)>>(64-25)));
    b3 = ((((p->u.s[4])^d4)<<8)|(((p->u.s[4])^d4)>>(64-8)));
    (p->u.s[15]) = b0 ^((~b1)& b2 );
    (p->u.s[6]) = b1 ^((~b2)& b3 );
    (p->u.s[22]) = b2 ^((~b3)& b4 );
    (p->u.s[13]) = b3 ^((~b4)& b0 );
    (p->u.s[4]) = b4 ^((~b0)& b1 );

    b1 = ((((p->u.s[10])^d0)<<36)|(((p->u.s[10])^d0)>>(64-36)));
    b2 = ((((p->u.s[1])^d1)<<10)|(((p->u.s[1])^d1)>>(64-10)));
    b3 = ((((p->u.s[17])^d2)<<15)|(((p->u.s[17])^d2)>>(64-15)));
    b4 = ((((p->u.s[8])^d3)<<56)|(((p->u.s[8])^d3)>>(64-56)));
    b0 = ((((p->u.s[24])^d4)<<27)|(((p->u.s[24])^d4)>>(64-27)));
    (p->u.s[10]) = b0 ^((~b1)& b2 );
    (p->u.s[1]) = b1 ^((~b2)& b3 );
    (p->u.s[17]) = b2 ^((~b3)& b4 );
    (p->u.s[8]) = b3 ^((~b4)& b0 );
    (p->u.s[24]) = b4 ^((~b0)& b1 );

    b3 = ((((p->u.s[5])^d0)<<41)|(((p->u.s[5])^d0)>>(64-41)));
    b4 = ((((p->u.s[21])^d1)<<2)|(((p->u.s[21])^d1)>>(64-2)));
    b0 = ((((p->u.s[12])^d2)<<62)|(((p->u.s[12])^d2)>>(64-62)));
    b1 = ((((p->u.s[3])^d3)<<55)|(((p->u.s[3])^d3)>>(64-55)));
    b2 = ((((p->u.s[19])^d4)<<39)|(((p->u.s[19])^d4)>>(64-39)));
    (p->u.s[5]) = b0 ^((~b1)& b2 );
    (p->u.s[21]) = b1 ^((~b2)& b3 );
    (p->u.s[12]) = b2 ^((~b3)& b4 );
    (p->u.s[3]) = b3 ^((~b4)& b0 );
    (p->u.s[19]) = b4 ^((~b0)& b1 );

    c0 = (p->u.s[0])^(p->u.s[20])^(p->u.s[15])^(p->u.s[10])^(p->u.s[5]);
    c1 = (p->u.s[16])^(p->u.s[11])^(p->u.s[6])^(p->u.s[1])^(p->u.s[21]);
    c2 = (p->u.s[7])^(p->u.s[2])^(p->u.s[22])^(p->u.s[17])^(p->u.s[12]);
    c3 = (p->u.s[23])^(p->u.s[18])^(p->u.s[13])^(p->u.s[8])^(p->u.s[3]);
    c4 = (p->u.s[14])^(p->u.s[9])^(p->u.s[4])^(p->u.s[24])^(p->u.s[19]);
    d0 = c4^((c1<<1)|(c1>>(64-1)));
    d1 = c0^((c2<<1)|(c2>>(64-1)));
    d2 = c1^((c3<<1)|(c3>>(64-1)));
    d3 = c2^((c4<<1)|(c4>>(64-1)));
    d4 = c3^((c0<<1)|(c0>>(64-1)));

    b0 = ((p->u.s[0])^d0);
    b1 = ((((p->u.s[11])^d1)<<44)|(((p->u.s[11])^d1)>>(64-44)));
    b2 = ((((p->u.s[22])^d2)<<43)|(((p->u.s[22])^d2)>>(64-43)));
    b3 = ((((p->u.s[8])^d3)<<21)|(((p->u.s[8])^d3)>>(64-21)));
    b4 = ((((p->u.s[19])^d4)<<14)|(((p->u.s[19])^d4)>>(64-14)));
    (p->u.s[0]) = b0 ^((~b1)& b2 );
    (p->u.s[0]) ^= RC[i+2];
    (p->u.s[11]) = b1 ^((~b2)& b3 );
    (p->u.s[22]) = b2 ^((~b3)& b4 );
    (p->u.s[8]) = b3 ^((~b4)& b0 );
    (p->u.s[19]) = b4 ^((~b0)& b1 );

    b2 = ((((p->u.s[15])^d0)<<3)|(((p->u.s[15])^d0)>>(64-3)));
    b3 = ((((p->u.s[1])^d1)<<45)|(((p->u.s[1])^d1)>>(64-45)));
    b4 = ((((p->u.s[12])^d2)<<61)|(((p->u.s[12])^d2)>>(64-61)));
    b0 = ((((p->u.s[23])^d3)<<28)|(((p->u.s[23])^d3)>>(64-28)));
    b1 = ((((p->u.s[9])^d4)<<20)|(((p->u.s[9])^d4)>>(64-20)));
    (p->u.s[15]) = b0 ^((~b1)& b2 );
    (p->u.s[1]) = b1 ^((~b2)& b3 );
    (p->u.s[12]) = b2 ^((~b3)& b4 );
    (p->u.s[23]) = b3 ^((~b4)& b0 );
    (p->u.s[9]) = b4 ^((~b0)& b1 );

    b4 = ((((p->u.s[5])^d0)<<18)|(((p->u.s[5])^d0)>>(64-18)));
    b0 = ((((p->u.s[16])^d1)<<1)|(((p->u.s[16])^d1)>>(64-1)));
    b1 = ((((p->u.s[2])^d2)<<6)|(((p->u.s[2])^d2)>>(64-6)));
    b2 = ((((p->u.s[13])^d3)<<25)|(((p->u.s[13])^d3)>>(64-25)));
    b3 = ((((p->u.s[24])^d4)<<8)|(((p->u.s[24])^d4)>>(64-8)));
    (p->u.s[5]) = b0 ^((~b1)& b2 );
    (p->u.s[16]) = b1 ^((~b2)& b3 );
    (p->u.s[2]) = b2 ^((~b3)& b4 );
    (p->u.s[13]) = b3 ^((~b4)& b0 );
    (p->u.s[24]) = b4 ^((~b0)& b1 );

    b1 = ((((p->u.s[20])^d0)<<36)|(((p->u.s[20])^d0)>>(64-36)));
    b2 = ((((p->u.s[6])^d1)<<10)|(((p->u.s[6])^d1)>>(64-10)));
    b3 = ((((p->u.s[17])^d2)<<15)|(((p->u.s[17])^d2)>>(64-15)));
    b4 = ((((p->u.s[3])^d3)<<56)|(((p->u.s[3])^d3)>>(64-56)));
    b0 = ((((p->u.s[14])^d4)<<27)|(((p->u.s[14])^d4)>>(64-27)));
    (p->u.s[20]) = b0 ^((~b1)& b2 );
    (p->u.s[6]) = b1 ^((~b2)& b3 );
    (p->u.s[17]) = b2 ^((~b3)& b4 );
    (p->u.s[3]) = b3 ^((~b4)& b0 );
    (p->u.s[14]) = b4 ^((~b0)& b1 );

    b3 = ((((p->u.s[10])^d0)<<41)|(((p->u.s[10])^d0)>>(64-41)));
    b4 = ((((p->u.s[21])^d1)<<2)|(((p->u.s[21])^d1)>>(64-2)));
    b0 = ((((p->u.s[7])^d2)<<62)|(((p->u.s[7])^d2)>>(64-62)));
    b1 = ((((p->u.s[18])^d3)<<55)|(((p->u.s[18])^d3)>>(64-55)));
    b2 = ((((p->u.s[4])^d4)<<39)|(((p->u.s[4])^d4)>>(64-39)));
    (p->u.s[10]) = b0 ^((~b1)& b2 );
    (p->u.s[21]) = b1 ^((~b2)& b3 );
    (p->u.s[7]) = b2 ^((~b3)& b4 );
    (p->u.s[18]) = b3 ^((~b4)& b0 );
    (p->u.s[4]) = b4 ^((~b0)& b1 );

    c0 = (p->u.s[0])^(p->u.s[15])^(p->u.s[5])^(p->u.s[20])^(p->u.s[10]);
    c1 = (p->u.s[11])^(p->u.s[1])^(p->u.s[16])^(p->u.s[6])^(p->u.s[21]);
    c2 = (p->u.s[22])^(p->u.s[12])^(p->u.s[2])^(p->u.s[17])^(p->u.s[7]);
    c3 = (p->u.s[8])^(p->u.s[23])^(p->u.s[13])^(p->u.s[3])^(p->u.s[18]);
    c4 = (p->u.s[19])^(p->u.s[9])^(p->u.s[24])^(p->u.s[14])^(p->u.s[4]);
    d0 = c4^((c1<<1)|(c1>>(64-1)));
    d1 = c0^((c2<<1)|(c2>>(64-1)));
    d2 = c1^((c3<<1)|(c3>>(64-1)));
    d3 = c2^((c4<<1)|(c4>>(64-1)));
    d4 = c3^((c0<<1)|(c0>>(64-1)));

    b0 = ((p->u.s[0])^d0);
    b1 = ((((p->u.s[1])^d1)<<44)|(((p->u.s[1])^d1)>>(64-44)));
    b2 = ((((p->u.s[2])^d2)<<43)|(((p->u.s[2])^d2)>>(64-43)));
    b3 = ((((p->u.s[3])^d3)<<21)|(((p->u.s[3])^d3)>>(64-21)));
    b4 = ((((p->u.s[4])^d4)<<14)|(((p->u.s[4])^d4)>>(64-14)));
    (p->u.s[0]) = b0 ^((~b1)& b2 );
    (p->u.s[0]) ^= RC[i+3];
    (p->u.s[1]) = b1 ^((~b2)& b3 );
    (p->u.s[2]) = b2 ^((~b3)& b4 );
    (p->u.s[3]) = b3 ^((~b4)& b0 );
    (p->u.s[4]) = b4 ^((~b0)& b1 );

    b2 = ((((p->u.s[5])^d0)<<3)|(((p->u.s[5])^d0)>>(64-3)));
    b3 = ((((p->u.s[6])^d1)<<45)|(((p->u.s[6])^d1)>>(64-45)));
    b4 = ((((p->u.s[7])^d2)<<61)|(((p->u.s[7])^d2)>>(64-61)));
    b0 = ((((p->u.s[8])^d3)<<28)|(((p->u.s[8])^d3)>>(64-28)));
    b1 = ((((p->u.s[9])^d4)<<20)|(((p->u.s[9])^d4)>>(64-20)));
    (p->u.s[5]) = b0 ^((~b1)& b2 );
    (p->u.s[6]) = b1 ^((~b2)& b3 );
    (p->u.s[7]) = b2 ^((~b3)& b4 );
    (p->u.s[8]) = b3 ^((~b4)& b0 );
    (p->u.s[9]) = b4 ^((~b0)& b1 );

    b4 = ((((p->u.s[10])^d0)<<18)|(((p->u.s[10])^d0)>>(64-18)));
    b0 = ((((p->u.s[11])^d1)<<1)|(((p->u.s[11])^d1)>>(64-1)));
    b1 = ((((p->u.s[12])^d2)<<6)|(((p->u.s[12])^d2)>>(64-6)));
    b2 = ((((p->u.s[13])^d3)<<25)|(((p->u.s[13])^d3)>>(64-25)));
    b3 = ((((p->u.s[14])^d4)<<8)|(((p->u.s[14])^d4)>>(64-8)));
    (p->u.s[10]) = b0 ^((~b1)& b2 );
    (p->u.s[11]) = b1 ^((~b2)& b3 );
    (p->u.s[12]) = b2 ^((~b3)& b4 );
    (p->u.s[13]) = b3 ^((~b4)& b0 );
    (p->u.s[14]) = b4 ^((~b0)& b1 );

    b1 = ((((p->u.s[15])^d0)<<36)|(((p->u.s[15])^d0)>>(64-36)));
    b2 = ((((p->u.s[16])^d1)<<10)|(((p->u.s[16])^d1)>>(64-10)));
    b3 = ((((p->u.s[17])^d2)<<15)|(((p->u.s[17])^d2)>>(64-15)));
    b4 = ((((p->u.s[18])^d3)<<56)|(((p->u.s[18])^d3)>>(64-56)));
    b0 = ((((p->u.s[19])^d4)<<27)|(((p->u.s[19])^d4)>>(64-27)));
    (p->u.s[15]) = b0 ^((~b1)& b2 );
    (p->u.s[16]) = b1 ^((~b2)& b3 );
    (p->u.s[17]) = b2 ^((~b3)& b4 );
    (p->u.s[18]) = b3 ^((~b4)& b0 );
    (p->u.s[19]) = b4 ^((~b0)& b1 );

    b3 = ((((p->u.s[20])^d0)<<41)|(((p->u.s[20])^d0)>>(64-41)));
    b4 = ((((p->u.s[21])^d1)<<2)|(((p->u.s[21])^d1)>>(64-2)));
    b0 = ((((p->u.s[22])^d2)<<62)|(((p->u.s[22])^d2)>>(64-62)));
    b1 = ((((p->u.s[23])^d3)<<55)|(((p->u.s[23])^d3)>>(64-55)));
    b2 = ((((p->u.s[24])^d4)<<39)|(((p->u.s[24])^d4)>>(64-39)));
    (p->u.s[20]) = b0 ^((~b1)& b2 );
    (p->u.s[21]) = b1 ^((~b2)& b3 );
    (p->u.s[22]) = b2 ^((~b3)& b4 );
    (p->u.s[23]) = b3 ^((~b4)& b0 );
    (p->u.s[24]) = b4 ^((~b0)& b1 );
  }
}






static void SHA3Init(SHA3Context *p, int iSize){
  memset(p, 0, sizeof(*p));
  if( iSize>=128 && iSize<=512 ){
    p->nRate = (1600 - ((iSize + 31)&~31)*2)/8;
  }else{
    p->nRate = (1600 - 2*256)/8;
  }
}





static void SHA3Update(
  SHA3Context *p,
  const unsigned char *aData,
  unsigned int nData
){
  unsigned int i = 0;

  if( (p->nLoaded % 8)==0 && ((aData - (const unsigned char*)0)&7)==0 ){
    for(; i+7<nData; i+=8){
      p->u.s[p->nLoaded/8] ^= *(u64*)&aData[i];
      p->nLoaded += 8;
      if( p->nLoaded>=p->nRate ){
        KeccakF1600Step(p);
        p->nLoaded = 0;
      }
    }
  }

  for(; i<nData; i++){

    p->u.x[p->nLoaded] ^= aData[i];





    p->nLoaded++;
    if( p->nLoaded==p->nRate ){
      KeccakF1600Step(p);
      p->nLoaded = 0;
    }
  }
}






static unsigned char *SHA3Final(SHA3Context *p){
  unsigned int i={0};
  if( p->nLoaded==p->nRate-1 ){
    const unsigned char c1 = 0x86;
    SHA3Update(p, &c1, 1);
  }else{
    const unsigned char c2 = 0x06;
    const unsigned char c3 = 0x80;
    SHA3Update(p, &c2, 1);
    p->nLoaded = p->nRate - 1;
    SHA3Update(p, &c3, 1);
  }
  for(i=0; i<p->nRate; i++){
    p->u.x[i+p->nRate] = p->u.x[i^p->ixMask];
  }
  return &p->u.x[p->nRate];
}
static void sha3Func(
  sqlite3_context *context,
  int argc,
  sqlite3_value **argv
){
  SHA3Context cx={0};
  int eType = sqlite3_value_type(argv[0]);
  int nByte = sqlite3_value_bytes(argv[0]);
  int iSize={0};
  if( argc==1 ){
    iSize = 256;
  }else{
    iSize = sqlite3_value_int(argv[1]);
    if( iSize!=224 && iSize!=256 && iSize!=384 && iSize!=512 ){
      sqlite3_result_error(context, "SHA3 size should be one of: 224 256 "
                                    "384 512", -1);
      return;
    }
  }
  if( eType==5 ) return;
  SHA3Init(&cx, iSize);
  if( eType==4 ){
    SHA3Update(&cx, sqlite3_value_blob(argv[0]), nByte);
  }else{
    SHA3Update(&cx, sqlite3_value_text(argv[0]), nByte);
  }
  sqlite3_result_blob(context, SHA3Final(&cx), iSize/8, ((sqlite3_destructor_type)-1));
}




static void hash_step_vformat(
  SHA3Context *p,
  const char *zFormat,
  ...
){
  va_list ap={0};
  int n={0};
  char zBuf[50]={0};
  
 __builtin_va_start(
 ap
 ,
 zFormat
 )
                      ;
  sqlite3_vsnprintf(sizeof(zBuf),zBuf,zFormat,ap);
  
 __builtin_va_end(
 ap
 )
           ;
  n = (int)strlen(zBuf);
  SHA3Update(p, (unsigned char*)zBuf, n);
}
static void sha3QueryFunc(
  sqlite3_context *context,
  int argc,
  sqlite3_value **argv
){
  sqlite3 *db = sqlite3_context_db_handle(context);
  const char *zSql = (const char*)sqlite3_value_text(argv[0]);
  sqlite3_stmt *pStmt = 0;
  int nCol={0};
  int i={0};
  int rc={0};
  int n={0};
  const char *z={0};
  SHA3Context cx={0};
  int iSize={0};

  if( argc==1 ){
    iSize = 256;
  }else{
    iSize = sqlite3_value_int(argv[1]);
    if( iSize!=224 && iSize!=256 && iSize!=384 && iSize!=512 ){
      sqlite3_result_error(context, "SHA3 size should be one of: 224 256 "
                                    "384 512", -1);
      return;
    }
  }
  if( zSql==0 ) return;
  SHA3Init(&cx, iSize);
  while( zSql[0] ){
    rc = sqlite3_prepare_v2(db, zSql, -1, &pStmt, &zSql);
    if( rc ){
      char *zMsg = sqlite3_mprintf("error SQL statement [%s]: %s",
                                   zSql, sqlite3_errmsg(db));
      sqlite3_finalize(pStmt);
      sqlite3_result_error(context, zMsg, -1);
      sqlite3_free(zMsg);
      return;
    }
    if( !sqlite3_stmt_readonly(pStmt) ){
      char *zMsg = sqlite3_mprintf("non-query: [%s]", sqlite3_sql(pStmt));
      sqlite3_finalize(pStmt);
      sqlite3_result_error(context, zMsg, -1);
      sqlite3_free(zMsg);
      return;
    }
    nCol = sqlite3_column_count(pStmt);
    z = sqlite3_sql(pStmt);
    n = (int)strlen(z);
    hash_step_vformat(&cx,"S%d:",n);
    SHA3Update(&cx,(unsigned char*)z,n);


    while( 100==sqlite3_step(pStmt) ){
      SHA3Update(&cx,(const unsigned char*)"R",1);
      for(i=0; i<nCol; i++){
        switch( sqlite3_column_type(pStmt,i) ){
          case 5: {
            SHA3Update(&cx, (const unsigned char*)"N",1);
            break;
          }
          case 1: {
            sqlite3_uint64 u={0};
            int j={0};
            unsigned char x[9]={0};
            sqlite3_int64 v = sqlite3_column_int64(pStmt,i);
            memcpy(&u, &v, 8);
            for(j=8; j>=1; j--){
              x[j] = u & 0xff;
              u >>= 8;
            }
            x[0] = 'I';
            SHA3Update(&cx, x, 9);
            break;
          }
          case 2: {
            sqlite3_uint64 u={0};
            int j={0};
            unsigned char x[9]={0};
            double r = sqlite3_column_double(pStmt,i);
            memcpy(&u, &r, 8);
            for(j=8; j>=1; j--){
              x[j] = u & 0xff;
              u >>= 8;
            }
            x[0] = 'F';
            SHA3Update(&cx,x,9);
            break;
          }
          case 3: {
            int n2 = sqlite3_column_bytes(pStmt, i);
            const unsigned char *z2 = sqlite3_column_text(pStmt, i);
            hash_step_vformat(&cx,"T%d:",n2);
            SHA3Update(&cx, z2, n2);
            break;
          }
          case 4: {
            int n2 = sqlite3_column_bytes(pStmt, i);
            const unsigned char *z2 = sqlite3_column_blob(pStmt, i);
            hash_step_vformat(&cx,"B%d:",n2);
            SHA3Update(&cx, z2, n2);
            break;
          }
        }
      }
    }
    sqlite3_finalize(pStmt);
  }
  sqlite3_result_blob(context, SHA3Final(&cx), iSize/8, ((sqlite3_destructor_type)-1));
}





int sqlite3_shathree_init(
  sqlite3 *db,
  char **pzErrMsg,
  const sqlite3_api_routines *pApi
){
  int rc = 0;
  (void)(pApi);
  (void)pzErrMsg;
  rc = sqlite3_create_function(db, "sha3", 1, 1, 0,
                               sha3Func, 0, 0);
  if( rc==0 ){
    rc = sqlite3_create_function(db, "sha3", 2, 1, 0,
                                 sha3Func, 0, 0);
  }
  if( rc==0 ){
    rc = sqlite3_create_function(db, "sha3_query", 1, 1, 0,
                                 sha3QueryFunc, 0, 0);
  }
  if( rc==0 ){
    rc = sqlite3_create_function(db, "sha3_query", 2, 1, 0,
                                 sha3QueryFunc, 0, 0);
  }
  return rc;
}














struct flock
  {
    short int l_type;
    short int l_whence;

    __off_t l_start;
    __off_t l_len;




    __pid_t l_pid;
  };




extern int fcntl (int __fd, int __cmd, ...);
extern int open (const char *__file, int __oflag, ...) ;
extern int openat (int __fd, const char *__file, int __oflag, ...)
     ;
extern int creat (const char *__file, mode_t __mode) ;
extern int posix_fadvise (int __fd, off_t __offset, off_t __len,
     int __advise) ;
extern int posix_fallocate (int __fd, off_t __offset, off_t __len);













struct utimbuf
  {
    __time_t actime;
    __time_t modtime;
  };



extern int utime (const char *__file,
    const struct utimbuf *__file_times)
     ;















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








extern int *__errno_location (void) ;


static void readFileContents(sqlite3_context *ctx, const char *zName){
  FILE *in={0};
  sqlite3_int64 nIn={0};
  void *pBuf={0};
  sqlite3 *db={0};
  int mxBlob={0};

  in = fopen(zName, "rb");
  if( in==0 ){

    return;
  }
  fseek(in, 0, 
              2
                      );
  nIn = ftell(in);
  rewind(in);
  db = sqlite3_context_db_handle(ctx);
  mxBlob = sqlite3_limit(db, 0, -1);
  if( nIn>mxBlob ){
    sqlite3_result_error_code(ctx, 18);
    fclose(in);
    return;
  }
  pBuf = sqlite3_malloc64( nIn ? nIn : 1 );
  if( pBuf==0 ){
    sqlite3_result_error_nomem(ctx);
    fclose(in);
    return;
  }
  if( nIn==(sqlite3_int64)fread(pBuf, 1, (size_t)nIn, in) ){
    sqlite3_result_blob64(ctx, pBuf, nIn, sqlite3_free);
  }else{
    sqlite3_result_error_code(ctx, 10);
    sqlite3_free(pBuf);
  }
  fclose(in);
}






static void readfileFunc(
  sqlite3_context *context,
  int argc,
  sqlite3_value **argv
){
  const char *zName={0};
  (void)(argc);
  zName = (const char*)sqlite3_value_text(argv[0]);
  if( zName==0 ) return;
  readFileContents(context, zName);
}





static void ctxErrorMsg(sqlite3_context *ctx, const char *zFmt, ...){
  char *zMsg = 0;
  va_list ap={0};
  
 __builtin_va_start(
 ap
 ,
 zFmt
 )
                   ;
  zMsg = sqlite3_vmprintf(zFmt, ap);
  sqlite3_result_error(ctx, zMsg, -1);
  sqlite3_free(zMsg);
  
 __builtin_va_end(
 ap
 )
           ;
}
static int fileStat(
  const char *zPath,
  struct stat *pStatBuf
){





  return stat(zPath, pStatBuf);

}






static int fileLinkStat(
  const char *zPath,
  struct stat *pStatBuf
){





  return lstat(zPath, pStatBuf);

}
static int makeDirectory(
  const char *zFile
){
  char *zCopy = sqlite3_mprintf("%s", zFile);
  int rc = 0;

  if( zCopy==0 ){
    rc = 7;
  }else{
    int nCopy = (int)strlen(zCopy);
    int i = 1;

    while( rc==0 ){
      struct stat sStat={0};
      int rc2={0};

      for(; zCopy[i]!='/' && i<nCopy; i++);
      if( i==nCopy ) break;
      zCopy[i] = '\0';

      rc2 = fileStat(zCopy, &sStat);
      if( rc2!=0 ){
        if( mkdir(zCopy, 0777) ) rc = 1;
      }else{
        if( !
            ((((
            sStat.st_mode
            )) & 0170000) == (0040000)) 
                                   ) rc = 1;
      }
      zCopy[i] = '/';
      i++;
    }

    sqlite3_free(zCopy);
  }

  return rc;
}





static int writeFile(
  sqlite3_context *pCtx,
  const char *zFile,
  sqlite3_value *pData,
  mode_t mode,
  sqlite3_int64 mtime
){

  if( 
     ((((
     mode
     )) & 0170000) == (0120000)) 
                   ){
    const char *zTo = (const char*)sqlite3_value_text(pData);
    if( symlink(zTo, zFile)<0 ) return 1;
  }else

  {
    if( 
       ((((
       mode
       )) & 0170000) == (0040000)) 
                     ){
      if( mkdir(zFile, mode) ){




        struct stat sStat={0};
        if( 
           (*__errno_location ())
                !=
                  17
         
        || 0!=fileStat(zFile, &sStat)
         || !
            ((((
            sStat.st_mode
            )) & 0170000) == (0040000))
         
        || ((sStat.st_mode&0777)!=(mode&0777) && 0!=chmod(zFile, mode&0777))
        ){
          return 1;
        }
      }
    }else{
      sqlite3_int64 nWrite = 0;
      const char *z={0};
      int rc = 0;
      FILE *out = fopen(zFile, "wb");
      if( out==0 ) return 1;
      z = (const char*)sqlite3_value_blob(pData);
      if( z ){
        sqlite3_int64 n = fwrite(z, 1, sqlite3_value_bytes(pData), out);
        nWrite = sqlite3_value_bytes(pData);
        if( nWrite!=n ){
          rc = 1;
        }
      }
      fclose(out);
      if( rc==0 && mode && chmod(zFile, mode & 0777) ){
        rc = 1;
      }
      if( rc ) return 2;
      sqlite3_result_int64(pCtx, nWrite);
    }
  }

  if( mtime>=0 ){
    struct timeval times[2]={0};
    times[0].tv_usec = times[1].tv_usec = 0;
    times[0].tv_sec = time(0);
    times[1].tv_sec = mtime;
    if( utimes(zFile, times) ){
      return 1;
    }

  }

  return 0;
}





static void writefileFunc(
  sqlite3_context *context,
  int argc,
  sqlite3_value **argv
){
  const char *zFile={0};
  mode_t mode = 0;
  int res={0};
  sqlite3_int64 mtime = -1;

  if( argc<2 || argc>4 ){
    sqlite3_result_error(context,
        "wrong number of arguments to function writefile()", -1
    );
    return;
  }

  zFile = (const char*)sqlite3_value_text(argv[0]);
  if( zFile==0 ) return;
  if( argc>=3 ){
    mode = (mode_t)sqlite3_value_int(argv[2]);
  }
  if( argc==4 ){
    mtime = sqlite3_value_int64(argv[3]);
  }

  res = writeFile(context, zFile, argv[1], mode, mtime);
  if( res==1 && 
               (*__errno_location ())
                    ==
                      2 
                             ){
    if( makeDirectory(zFile)==0 ){
      res = writeFile(context, zFile, argv[1], mode, mtime);
    }
  }

  if( argc>2 && res!=0 ){
    if( 
       ((((
       mode
       )) & 0170000) == (0120000)) 
                     ){
      ctxErrorMsg(context, "failed to create symlink: %s", zFile);
    }else if( 
             ((((
             mode
             )) & 0170000) == (0040000)) 
                           ){
      ctxErrorMsg(context, "failed to create directory: %s", zFile);
    }else{
      ctxErrorMsg(context, "failed to write file: %s", zFile);
    }
  }
}







static void lsModeFunc(
  sqlite3_context *context,
  int argc,
  sqlite3_value **argv
){
  int i={0};
  int iMode = sqlite3_value_int(argv[0]);
  char z[16]={0};
  (void)argc;
  if( 
     ((((
     iMode
     )) & 0170000) == (0120000)) 
                    ){
    z[0] = 'l';
  }else if( 
           ((((
           iMode
           )) & 0170000) == (0100000)) 
                          ){
    z[0] = '-';
  }else if( 
           ((((
           iMode
           )) & 0170000) == (0040000)) 
                          ){
    z[0] = 'd';
  }else{
    z[0] = '?';
  }
  for(i=0; i<3; i++){
    int m = (iMode >> ((2-i)*3));
    char *a = &z[1 + i*3];
    a[0] = (m & 0x4) ? 'r' : '-';
    a[1] = (m & 0x2) ? 'w' : '-';
    a[2] = (m & 0x1) ? 'x' : '-';
  }
  z[10] = '\0';
  sqlite3_result_text(context, z, -1, ((sqlite3_destructor_type)-1));
}






typedef struct fsdir_cursor fsdir_cursor;
typedef struct FsdirLevel FsdirLevel;

struct FsdirLevel {
  DIR *pDir;
  char *zDir;
};

struct fsdir_cursor {
  sqlite3_vtab_cursor base;

  int nLvl;
  int iLvl;
  FsdirLevel *aLvl;

  const char *zBase;
  int nBase;

  struct stat sStat;
  char *zPath;
  sqlite3_int64 iRowid;
};

typedef struct fsdir_tab fsdir_tab;
struct fsdir_tab {
  sqlite3_vtab base;
};




static int fsdirConnect(
  sqlite3 *db,
  void *pAux,
  int argc, const char *const*argv,
  sqlite3_vtab **ppVtab,
  char **pzErr
){
  fsdir_tab *pNew = 0;
  int rc={0};
  (void)pAux;
  (void)argc;
  (void)argv;
  (void)pzErr;
  rc = sqlite3_declare_vtab(db, "CREATE TABLE x" "(name,mode,mtime,data,path HIDDEN,dir HIDDEN)");
  if( rc==0 ){
    pNew = (fsdir_tab*)sqlite3_malloc( sizeof(*pNew) );
    if( pNew==0 ) return 7;
    memset(pNew, 0, sizeof(*pNew));
  }
  *ppVtab = (sqlite3_vtab*)pNew;
  return rc;
}




static int fsdirDisconnect(sqlite3_vtab *pVtab){
  sqlite3_free(pVtab);
  return 0;
}




static int fsdirOpen(sqlite3_vtab *p, sqlite3_vtab_cursor **ppCursor){
  fsdir_cursor *pCur={0};
  (void)p;
  pCur = sqlite3_malloc( sizeof(*pCur) );
  if( pCur==0 ) return 7;
  memset(pCur, 0, sizeof(*pCur));
  pCur->iLvl = -1;
  *ppCursor = &pCur->base;
  return 0;
}





static void fsdirResetCursor(fsdir_cursor *pCur){
  int i={0};
  for(i=0; i<=pCur->iLvl; i++){
    FsdirLevel *pLvl = &pCur->aLvl[i];
    if( pLvl->pDir ) closedir(pLvl->pDir);
    sqlite3_free(pLvl->zDir);
  }
  sqlite3_free(pCur->zPath);
  sqlite3_free(pCur->aLvl);
  pCur->aLvl = 0;
  pCur->zPath = 0;
  pCur->zBase = 0;
  pCur->nBase = 0;
  pCur->nLvl = 0;
  pCur->iLvl = -1;
  pCur->iRowid = 1;
}




static int fsdirClose(sqlite3_vtab_cursor *cur){
  fsdir_cursor *pCur = (fsdir_cursor*)cur;

  fsdirResetCursor(pCur);
  sqlite3_free(pCur);
  return 0;
}





static void fsdirSetErrmsg(fsdir_cursor *pCur, const char *zFmt, ...){
  va_list ap={0};
  
 __builtin_va_start(
 ap
 ,
 zFmt
 )
                   ;
  pCur->base.pVtab->zErrMsg = sqlite3_vmprintf(zFmt, ap);
  
 __builtin_va_end(
 ap
 )
           ;
}





static int fsdirNext(sqlite3_vtab_cursor *cur){
  fsdir_cursor *pCur = (fsdir_cursor*)cur;
  mode_t m = pCur->sStat.st_mode;

  pCur->iRowid++;
  if( 
     ((((
     m
     )) & 0170000) == (0040000)) 
                ){

    int iNew = pCur->iLvl + 1;
    FsdirLevel *pLvl={0};
    if( iNew>=pCur->nLvl ){
      int nNew = iNew+1;
      sqlite3_int64 nByte = nNew*sizeof(FsdirLevel);
      FsdirLevel *aNew = (FsdirLevel*)sqlite3_realloc64(pCur->aLvl, nByte);
      if( aNew==0 ) return 7;
      memset(&aNew[pCur->nLvl], 0, sizeof(FsdirLevel)*(nNew-pCur->nLvl));
      pCur->aLvl = aNew;
      pCur->nLvl = nNew;
    }
    pCur->iLvl = iNew;
    pLvl = &pCur->aLvl[iNew];

    pLvl->zDir = pCur->zPath;
    pCur->zPath = 0;
    pLvl->pDir = opendir(pLvl->zDir);
    if( pLvl->pDir==0 ){
      fsdirSetErrmsg(pCur, "cannot read directory: %s", pCur->zPath);
      return 1;
    }
  }

  while( pCur->iLvl>=0 ){
    FsdirLevel *pLvl = &pCur->aLvl[pCur->iLvl];
    struct dirent *pEntry = readdir(pLvl->pDir);
    if( pEntry ){
      if( pEntry->d_name[0]=='.' ){
       if( pEntry->d_name[1]=='.' && pEntry->d_name[2]=='\0' ) continue;
       if( pEntry->d_name[1]=='\0' ) continue;
      }
      sqlite3_free(pCur->zPath);
      pCur->zPath = sqlite3_mprintf("%s/%s", pLvl->zDir, pEntry->d_name);
      if( pCur->zPath==0 ) return 7;
      if( fileLinkStat(pCur->zPath, &pCur->sStat) ){
        fsdirSetErrmsg(pCur, "cannot stat file: %s", pCur->zPath);
        return 1;
      }
      return 0;
    }
    closedir(pLvl->pDir);
    sqlite3_free(pLvl->zDir);
    pLvl->pDir = 0;
    pLvl->zDir = 0;
    pCur->iLvl--;
  }


  sqlite3_free(pCur->zPath);
  pCur->zPath = 0;
  return 0;
}





static int fsdirColumn(
  sqlite3_vtab_cursor *cur,
  sqlite3_context *ctx,
  int i
){
  fsdir_cursor *pCur = (fsdir_cursor*)cur;
  switch( i ){
    case 0: {
      sqlite3_result_text(ctx, &pCur->zPath[pCur->nBase], -1, ((sqlite3_destructor_type)-1));
      break;
    }

    case 1:
      sqlite3_result_int64(ctx, pCur->sStat.st_mode);
      break;

    case 2:
      sqlite3_result_int64(ctx, pCur->sStat.
                                           st_mtim.tv_sec
                                                   );
      break;

    case 3: {
      mode_t m = pCur->sStat.st_mode;
      if( 
         ((((
         m
         )) & 0170000) == (0040000)) 
                    ){
        sqlite3_result_null(ctx);

      }else if( 
               ((((
               m
               )) & 0170000) == (0120000)) 
                          ){
        char aStatic[64]={0};
        char *aBuf = aStatic;
        sqlite3_int64 nBuf = 64;
        int n={0};

        while( 1 ){
          n = readlink(pCur->zPath, aBuf, nBuf);
          if( n<nBuf ) break;
          if( aBuf!=aStatic ) sqlite3_free(aBuf);
          nBuf = nBuf*2;
          aBuf = sqlite3_malloc64(nBuf);
          if( aBuf==0 ){
            sqlite3_result_error_nomem(ctx);
            return 7;
          }
        }

        sqlite3_result_text(ctx, aBuf, n, ((sqlite3_destructor_type)-1));
        if( aBuf!=aStatic ) sqlite3_free(aBuf);

      }else{
        readFileContents(ctx, pCur->zPath);
      }
    }
    case 4:
    default: {


      break;
    }
  }
  return 0;
}






static int fsdirRowid(sqlite3_vtab_cursor *cur, sqlite_int64 *pRowid){
  fsdir_cursor *pCur = (fsdir_cursor*)cur;
  *pRowid = pCur->iRowid;
  return 0;
}





static int fsdirEof(sqlite3_vtab_cursor *cur){
  fsdir_cursor *pCur = (fsdir_cursor*)cur;
  return (pCur->zPath==0);
}







static int fsdirFilter(
  sqlite3_vtab_cursor *cur,
  int idxNum, const char *idxStr,
  int argc, sqlite3_value **argv
){
  const char *zDir = 0;
  fsdir_cursor *pCur = (fsdir_cursor*)cur;
  (void)idxStr;
  fsdirResetCursor(pCur);

  if( idxNum==0 ){
    fsdirSetErrmsg(pCur, "table function fsdir requires an argument");
    return 1;
  }

  
 ((
 argc==idxNum && (argc==1 || argc==2)
 ) ? (void) (0) : __assert_fail (
 "argc==idxNum && (argc==1 || argc==2)"
 , "shell.c", 2853, __PRETTY_FUNCTION__))
                                               ;
  zDir = (const char*)sqlite3_value_text(argv[0]);
  if( zDir==0 ){
    fsdirSetErrmsg(pCur, "table function fsdir requires a non-NULL argument");
    return 1;
  }
  if( argc==2 ){
    pCur->zBase = (const char*)sqlite3_value_text(argv[1]);
  }
  if( pCur->zBase ){
    pCur->nBase = (int)strlen(pCur->zBase)+1;
    pCur->zPath = sqlite3_mprintf("%s/%s", pCur->zBase, zDir);
  }else{
    pCur->zPath = sqlite3_mprintf("%s", zDir);
  }

  if( pCur->zPath==0 ){
    return 7;
  }
  if( fileLinkStat(pCur->zPath, &pCur->sStat) ){
    fsdirSetErrmsg(pCur, "cannot stat file: %s", pCur->zPath);
    return 1;
  }

  return 0;
}
static int fsdirBestIndex(
  sqlite3_vtab *tab,
  sqlite3_index_info *pIdxInfo
){
  int i={0};
  int idxPath = -1;
  int idxDir = -1;
  int seenPath = 0;
  int seenDir = 0;
  const struct sqlite3_index_constraint *pConstraint={0};

  (void)tab;
  pConstraint = pIdxInfo->aConstraint;
  for(i=0; i<pIdxInfo->nConstraint; i++, pConstraint++){
    if( pConstraint->op!=2 ) continue;
    switch( pConstraint->iColumn ){
      case 4: {
        if( pConstraint->usable ){
          idxPath = i;
          seenPath = 0;
        }else if( idxPath<0 ){
          seenPath = 1;
        }
        break;
      }
      case 5: {
        if( pConstraint->usable ){
          idxDir = i;
          seenDir = 0;
        }else if( idxDir<0 ){
          seenDir = 1;
        }
        break;
      }
    }
  }
  if( seenPath || seenDir ){

    return 19;
  }

  if( idxPath<0 ){
    pIdxInfo->idxNum = 0;


    pIdxInfo->estimatedRows = 0x7fffffff;
  }else{
    pIdxInfo->aConstraintUsage[idxPath].omit = 1;
    pIdxInfo->aConstraintUsage[idxPath].argvIndex = 1;
    if( idxDir>=0 ){
      pIdxInfo->aConstraintUsage[idxDir].omit = 1;
      pIdxInfo->aConstraintUsage[idxDir].argvIndex = 2;
      pIdxInfo->idxNum = 2;
      pIdxInfo->estimatedCost = 10.0;
    }else{
      pIdxInfo->idxNum = 1;
      pIdxInfo->estimatedCost = 100.0;
    }
  }

  return 0;
}




static int fsdirRegister(sqlite3 *db){
  static sqlite3_module fsdirModule = {
    0,
    0,
    fsdirConnect,
    fsdirBestIndex,
    fsdirDisconnect,
    0,
    fsdirOpen,
    fsdirClose,
    fsdirFilter,
    fsdirNext,
    fsdirEof,
    fsdirColumn,
    fsdirRowid,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
  };

  int rc = sqlite3_create_module(db, "fsdir", &fsdirModule, 0);
  return rc;
}







int sqlite3_fileio_init(
  sqlite3 *db,
  char **pzErrMsg,
  const sqlite3_api_routines *pApi
){
  int rc = 0;
  (void)(pApi);
  (void)pzErrMsg;
  rc = sqlite3_create_function(db, "readfile", 1, 1, 0,
                               readfileFunc, 0, 0);
  if( rc==0 ){
    rc = sqlite3_create_function(db, "writefile", -1, 1, 0,
                                 writefileFunc, 0, 0);
  }
  if( rc==0 ){
    rc = sqlite3_create_function(db, "lsmode", 1, 1, 0,
                                 lsModeFunc, 0, 0);
  }
  if( rc==0 ){
    rc = fsdirRegister(db);
  }
  return rc;
}

typedef struct completion_vtab completion_vtab;
struct completion_vtab {
  sqlite3_vtab base;
  sqlite3 *db;
};





typedef struct completion_cursor completion_cursor;
struct completion_cursor {
  sqlite3_vtab_cursor base;
  sqlite3 *db;
  int nPrefix, nLine;
  char *zPrefix;
  char *zLine;
  const char *zCurrentRow;
  int szRow;
  sqlite3_stmt *pStmt;
  sqlite3_int64 iRowid;
  int ePhase;
  int j;
};
static int completionConnect(
  sqlite3 *db,
  void *pAux,
  int argc, const char *const*argv,
  sqlite3_vtab **ppVtab,
  char **pzErr
){
  completion_vtab *pNew={0};
  int rc={0};

  (void)(pAux);
  (void)(argc);
  (void)(argv);
  (void)(pzErr);







  rc = sqlite3_declare_vtab(db,
      "CREATE TABLE x("
      "  candidate TEXT,"
      "  prefix TEXT HIDDEN,"
      "  wholeline TEXT HIDDEN,"
      "  phase INT HIDDEN"
      ")");
  if( rc==0 ){
    pNew = sqlite3_malloc( sizeof(*pNew) );
    *ppVtab = (sqlite3_vtab*)pNew;
    if( pNew==0 ) return 7;
    memset(pNew, 0, sizeof(*pNew));
    pNew->db = db;
  }
  return rc;
}




static int completionDisconnect(sqlite3_vtab *pVtab){
  sqlite3_free(pVtab);
  return 0;
}




static int completionOpen(sqlite3_vtab *p, sqlite3_vtab_cursor **ppCursor){
  completion_cursor *pCur={0};
  pCur = sqlite3_malloc( sizeof(*pCur) );
  if( pCur==0 ) return 7;
  memset(pCur, 0, sizeof(*pCur));
  pCur->db = ((completion_vtab*)p)->db;
  *ppCursor = &pCur->base;
  return 0;
}




static void completionCursorReset(completion_cursor *pCur){
  sqlite3_free(pCur->zPrefix); pCur->zPrefix = 0; pCur->nPrefix = 0;
  sqlite3_free(pCur->zLine); pCur->zLine = 0; pCur->nLine = 0;
  sqlite3_finalize(pCur->pStmt); pCur->pStmt = 0;
  pCur->j = 0;
}




static int completionClose(sqlite3_vtab_cursor *cur){
  completionCursorReset((completion_cursor*)cur);
  sqlite3_free(cur);
  return 0;
}
static int completionNext(sqlite3_vtab_cursor *cur){
  completion_cursor *pCur = (completion_cursor*)cur;
  int eNextPhase = 0;
  int iCol = -1;
  pCur->iRowid++;
  while( pCur->ePhase!=11 ){
    switch( pCur->ePhase ){
      case 1: {
        if( pCur->j >= sqlite3_keyword_count() ){
          pCur->zCurrentRow = 0;
          pCur->ePhase = 7;
        }else{
          sqlite3_keyword_name(pCur->j++, &pCur->zCurrentRow, &pCur->szRow);
        }
        iCol = -1;
        break;
      }
      case 7: {
        if( pCur->pStmt==0 ){
          sqlite3_prepare_v2(pCur->db, "PRAGMA database_list", -1,
                             &pCur->pStmt, 0);
        }
        iCol = 1;
        eNextPhase = 8;
        break;
      }
      case 8: {
        if( pCur->pStmt==0 ){
          sqlite3_stmt *pS2={0};
          char *zSql = 0;
          const char *zSep = "";
          sqlite3_prepare_v2(pCur->db, "PRAGMA database_list", -1, &pS2, 0);
          while( sqlite3_step(pS2)==100 ){
            const char *zDb = (const char*)sqlite3_column_text(pS2, 1);
            zSql = sqlite3_mprintf(
               "%z%s"
               "SELECT name FROM \"%w\".sqlite_master",
               zSql, zSep, zDb
            );
            if( zSql==0 ) return 7;
            zSep = " UNION ";
          }
          sqlite3_finalize(pS2);
          sqlite3_prepare_v2(pCur->db, zSql, -1, &pCur->pStmt, 0);
          sqlite3_free(zSql);
        }
        iCol = 0;
        eNextPhase = 9;
        break;
      }
      case 9: {
        if( pCur->pStmt==0 ){
          sqlite3_stmt *pS2={0};
          char *zSql = 0;
          const char *zSep = "";
          sqlite3_prepare_v2(pCur->db, "PRAGMA database_list", -1, &pS2, 0);
          while( sqlite3_step(pS2)==100 ){
            const char *zDb = (const char*)sqlite3_column_text(pS2, 1);
            zSql = sqlite3_mprintf(
               "%z%s"
               "SELECT pti.name FROM \"%w\".sqlite_master AS sm"
                       " JOIN pragma_table_info(sm.name,%Q) AS pti"
               " WHERE sm.type='table'",
               zSql, zSep, zDb, zDb
            );
            if( zSql==0 ) return 7;
            zSep = " UNION ";
          }
          sqlite3_finalize(pS2);
          sqlite3_prepare_v2(pCur->db, zSql, -1, &pCur->pStmt, 0);
          sqlite3_free(zSql);
        }
        iCol = 0;
        eNextPhase = 11;
        break;
      }
    }
    if( iCol<0 ){

      if( pCur->zCurrentRow==0 ) continue;
    }else{
      if( sqlite3_step(pCur->pStmt)==100 ){

        pCur->zCurrentRow = (const char*)sqlite3_column_text(pCur->pStmt, iCol);
        pCur->szRow = sqlite3_column_bytes(pCur->pStmt, iCol);
      }else{

        sqlite3_finalize(pCur->pStmt);
        pCur->pStmt = 0;
        pCur->ePhase = eNextPhase;
        continue;
      }
    }
    if( pCur->nPrefix==0 ) break;
    if( pCur->nPrefix<=pCur->szRow
     && sqlite3_strnicmp(pCur->zPrefix, pCur->zCurrentRow, pCur->nPrefix)==0
    ){
      break;
    }
  }

  return 0;
}





static int completionColumn(
  sqlite3_vtab_cursor *cur,
  sqlite3_context *ctx,
  int i
){
  completion_cursor *pCur = (completion_cursor*)cur;
  switch( i ){
    case 0: {
      sqlite3_result_text(ctx, pCur->zCurrentRow, pCur->szRow,((sqlite3_destructor_type)-1));
      break;
    }
    case 1: {
      sqlite3_result_text(ctx, pCur->zPrefix, -1, ((sqlite3_destructor_type)-1));
      break;
    }
    case 2: {
      sqlite3_result_text(ctx, pCur->zLine, -1, ((sqlite3_destructor_type)-1));
      break;
    }
    case 3: {
      sqlite3_result_int(ctx, pCur->ePhase);
      break;
    }
  }
  return 0;
}





static int completionRowid(sqlite3_vtab_cursor *cur, sqlite_int64 *pRowid){
  completion_cursor *pCur = (completion_cursor*)cur;
  *pRowid = pCur->iRowid;
  return 0;
}





static int completionEof(sqlite3_vtab_cursor *cur){
  completion_cursor *pCur = (completion_cursor*)cur;
  return pCur->ePhase >= 11;
}







static int completionFilter(
  sqlite3_vtab_cursor *pVtabCursor,
  int idxNum, const char *idxStr,
  int argc, sqlite3_value **argv
){
  completion_cursor *pCur = (completion_cursor *)pVtabCursor;
  int iArg = 0;
  (void)(idxStr);
  (void)(argc);
  completionCursorReset(pCur);
  if( idxNum & 1 ){
    pCur->nPrefix = sqlite3_value_bytes(argv[iArg]);
    if( pCur->nPrefix>0 ){
      pCur->zPrefix = sqlite3_mprintf("%s", sqlite3_value_text(argv[iArg]));
      if( pCur->zPrefix==0 ) return 7;
    }
    iArg = 1;
  }
  if( idxNum & 2 ){
    pCur->nLine = sqlite3_value_bytes(argv[iArg]);
    if( pCur->nLine>0 ){
      pCur->zLine = sqlite3_mprintf("%s", sqlite3_value_text(argv[iArg]));
      if( pCur->zLine==0 ) return 7;
    }
  }
  if( pCur->zLine!=0 && pCur->zPrefix==0 ){
    int i = pCur->nLine;
    while( i>0 && (
                  ((*__ctype_b_loc ())[(int) ((
                  pCur->zLine[i-1]
                  ))] & (unsigned short int) _ISalnum) 
                                            || pCur->zLine[i-1]=='_') ){
      i--;
    }
    pCur->nPrefix = pCur->nLine - i;
    if( pCur->nPrefix>0 ){
      pCur->zPrefix = sqlite3_mprintf("%.*s", pCur->nPrefix, pCur->zLine + i);
      if( pCur->zPrefix==0 ) return 7;
    }
  }
  pCur->iRowid = 0;
  pCur->ePhase = 1;
  return completionNext(pVtabCursor);
}
static int completionBestIndex(
  sqlite3_vtab *tab,
  sqlite3_index_info *pIdxInfo
){
  int i={0};
  int idxNum = 0;
  int prefixIdx = -1;
  int wholelineIdx = -1;
  int nArg = 0;
  const struct sqlite3_index_constraint *pConstraint={0};

  (void)(tab);
  pConstraint = pIdxInfo->aConstraint;
  for(i=0; i<pIdxInfo->nConstraint; i++, pConstraint++){
    if( pConstraint->usable==0 ) continue;
    if( pConstraint->op!=2 ) continue;
    switch( pConstraint->iColumn ){
      case 1:
        prefixIdx = i;
        idxNum |= 1;
        break;
      case 2:
        wholelineIdx = i;
        idxNum |= 2;
        break;
    }
  }
  if( prefixIdx>=0 ){
    pIdxInfo->aConstraintUsage[prefixIdx].argvIndex = ++nArg;
    pIdxInfo->aConstraintUsage[prefixIdx].omit = 1;
  }
  if( wholelineIdx>=0 ){
    pIdxInfo->aConstraintUsage[wholelineIdx].argvIndex = ++nArg;
    pIdxInfo->aConstraintUsage[wholelineIdx].omit = 1;
  }
  pIdxInfo->idxNum = idxNum;
  pIdxInfo->estimatedCost = (double)5000 - 1000*nArg;
  pIdxInfo->estimatedRows = 500 - 100*nArg;
  return 0;
}





static sqlite3_module completionModule = {
  0,
  0,
  completionConnect,
  completionBestIndex,
  completionDisconnect,
  0,
  completionOpen,
  completionClose,
  completionFilter,
  completionNext,
  completionEof,
  completionColumn,
  completionRowid,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0,
  0
};



int sqlite3CompletionVtabInit(sqlite3 *db){
  int rc = 0;

  rc = sqlite3_create_module(db, "completion", &completionModule, 0);

  return rc;
}




int sqlite3_completion_init(
  sqlite3 *db,
  char **pzErrMsg,
  const sqlite3_api_routines *pApi
){
  int rc = 0;
  (void)(pApi);
  (void)(pzErrMsg);

  rc = sqlite3CompletionVtabInit(db);

  return rc;
}


typedef struct sqlite3_vfs ApndVfs;
typedef struct ApndFile ApndFile;
struct ApndFile {
  sqlite3_file base;
  sqlite3_int64 iPgOne;
  sqlite3_int64 iMark;
};




static int apndClose(sqlite3_file*);
static int apndRead(sqlite3_file*, void*, int iAmt, sqlite3_int64 iOfst);
static int apndWrite(sqlite3_file*,const void*,int iAmt, sqlite3_int64 iOfst);
static int apndTruncate(sqlite3_file*, sqlite3_int64 size);
static int apndSync(sqlite3_file*, int flags);
static int apndFileSize(sqlite3_file*, sqlite3_int64 *pSize);
static int apndLock(sqlite3_file*, int);
static int apndUnlock(sqlite3_file*, int);
static int apndCheckReservedLock(sqlite3_file*, int *pResOut);
static int apndFileControl(sqlite3_file*, int op, void *pArg);
static int apndSectorSize(sqlite3_file*);
static int apndDeviceCharacteristics(sqlite3_file*);
static int apndShmMap(sqlite3_file*, int iPg, int pgsz, int, void volatile**);
static int apndShmLock(sqlite3_file*, int offset, int n, int flags);
static void apndShmBarrier(sqlite3_file*);
static int apndShmUnmap(sqlite3_file*, int deleteFlag);
static int apndFetch(sqlite3_file*, sqlite3_int64 iOfst, int iAmt, void **pp);
static int apndUnfetch(sqlite3_file*, sqlite3_int64 iOfst, void *p);




static int apndOpen(sqlite3_vfs*, const char *, sqlite3_file*, int , int *);
static int apndDelete(sqlite3_vfs*, const char *zName, int syncDir);
static int apndAccess(sqlite3_vfs*, const char *zName, int flags, int *);
static int apndFullPathname(sqlite3_vfs*, const char *zName, int, char *zOut);
static void *apndDlOpen(sqlite3_vfs*, const char *zFilename);
static void apndDlError(sqlite3_vfs*, int nByte, char *zErrMsg);
static void (*apndDlSym(sqlite3_vfs *pVfs, void *p, const char*zSym))(void);
static void apndDlClose(sqlite3_vfs*, void*);
static int apndRandomness(sqlite3_vfs*, int nByte, char *zOut);
static int apndSleep(sqlite3_vfs*, int microseconds);
static int apndCurrentTime(sqlite3_vfs*, double*);
static int apndGetLastError(sqlite3_vfs*, int, char *);
static int apndCurrentTimeInt64(sqlite3_vfs*, sqlite3_int64*);
static int apndSetSystemCall(sqlite3_vfs*, const char*,sqlite3_syscall_ptr);
static sqlite3_syscall_ptr apndGetSystemCall(sqlite3_vfs*, const char *z);
static const char *apndNextSystemCall(sqlite3_vfs*, const char *zName);

static sqlite3_vfs apnd_vfs = {
  3,
  0,
  1024,
  0,
  "apndvfs",
  0,
  apndOpen,
  apndDelete,
  apndAccess,
  apndFullPathname,
  apndDlOpen,
  apndDlError,
  apndDlSym,
  apndDlClose,
  apndRandomness,
  apndSleep,
  apndCurrentTime,
  apndGetLastError,
  apndCurrentTimeInt64,
  apndSetSystemCall,
  apndGetSystemCall,
  apndNextSystemCall
};

static const sqlite3_io_methods apnd_io_methods = {
  3,
  apndClose,
  apndRead,
  apndWrite,
  apndTruncate,
  apndSync,
  apndFileSize,
  apndLock,
  apndUnlock,
  apndCheckReservedLock,
  apndFileControl,
  apndSectorSize,
  apndDeviceCharacteristics,
  apndShmMap,
  apndShmLock,
  apndShmBarrier,
  apndShmUnmap,
  apndFetch,
  apndUnfetch
};






static int apndClose(sqlite3_file *pFile){
  pFile = ((sqlite3_file*)(((ApndFile*)(pFile))+1));
  return pFile->pMethods->xClose(pFile);
}




static int apndRead(
  sqlite3_file *pFile,
  void *zBuf,
  int iAmt,
  sqlite_int64 iOfst
){
  ApndFile *p = (ApndFile *)pFile;
  pFile = ((sqlite3_file*)(((ApndFile*)(pFile))+1));
  return pFile->pMethods->xRead(pFile, zBuf, iAmt, iOfst+p->iPgOne);
}




static int apndWriteMark(ApndFile *p, sqlite3_file *pFile){
  int i={0};
  unsigned char a[25]={0};
  memcpy(a, "Start-Of-SQLite3-", 17);
  for(i=0; i<8; i++){
    a[17 +i] = (p->iPgOne >> (56 - i*8)) & 0xff;
  }
  return pFile->pMethods->xWrite(pFile, a, 25, p->iMark);
}




static int apndWrite(
  sqlite3_file *pFile,
  const void *zBuf,
  int iAmt,
  sqlite_int64 iOfst
){
  int rc={0};
  ApndFile *p = (ApndFile *)pFile;
  pFile = ((sqlite3_file*)(((ApndFile*)(pFile))+1));
  if( iOfst+iAmt>=(65536*15259) ) return 13;
  rc = pFile->pMethods->xWrite(pFile, zBuf, iAmt, iOfst+p->iPgOne);
  if( rc==0 && iOfst + iAmt + p->iPgOne > p->iMark ){
    sqlite3_int64 sz = 0;
    rc = pFile->pMethods->xFileSize(pFile, &sz);
    if( rc==0 ){
      p->iMark = sz - 25;
      if( iOfst + iAmt + p->iPgOne > p->iMark ){
        p->iMark = p->iPgOne + iOfst + iAmt;
        rc = apndWriteMark(p, pFile);
      }
    }
  }
  return rc;
}




static int apndTruncate(sqlite3_file *pFile, sqlite_int64 size){
  int rc={0};
  ApndFile *p = (ApndFile *)pFile;
  pFile = ((sqlite3_file*)(((ApndFile*)(pFile))+1));
  rc = pFile->pMethods->xTruncate(pFile, size+p->iPgOne+25);
  if( rc==0 ){
    p->iMark = p->iPgOne+size;
    rc = apndWriteMark(p, pFile);
  }
  return rc;
}




static int apndSync(sqlite3_file *pFile, int flags){
  pFile = ((sqlite3_file*)(((ApndFile*)(pFile))+1));
  return pFile->pMethods->xSync(pFile, flags);
}




static int apndFileSize(sqlite3_file *pFile, sqlite_int64 *pSize){
  ApndFile *p = (ApndFile *)pFile;
  int rc={0};
  pFile = ((sqlite3_file*)(((ApndFile*)(p))+1));
  rc = pFile->pMethods->xFileSize(pFile, pSize);
  if( rc==0 && p->iPgOne ){
    *pSize -= p->iPgOne + 25;
  }
  return rc;
}




static int apndLock(sqlite3_file *pFile, int eLock){
  pFile = ((sqlite3_file*)(((ApndFile*)(pFile))+1));
  return pFile->pMethods->xLock(pFile, eLock);
}




static int apndUnlock(sqlite3_file *pFile, int eLock){
  pFile = ((sqlite3_file*)(((ApndFile*)(pFile))+1));
  return pFile->pMethods->xUnlock(pFile, eLock);
}




static int apndCheckReservedLock(sqlite3_file *pFile, int *pResOut){
  pFile = ((sqlite3_file*)(((ApndFile*)(pFile))+1));
  return pFile->pMethods->xCheckReservedLock(pFile, pResOut);
}




static int apndFileControl(sqlite3_file *pFile, int op, void *pArg){
  ApndFile *p = (ApndFile *)pFile;
  int rc={0};
  pFile = ((sqlite3_file*)(((ApndFile*)(pFile))+1));
  rc = pFile->pMethods->xFileControl(pFile, op, pArg);
  if( rc==0 && op==12 ){
    *(char**)pArg = sqlite3_mprintf("apnd(%lld)/%z", p->iPgOne, *(char**)pArg);
  }
  return rc;
}




static int apndSectorSize(sqlite3_file *pFile){
  pFile = ((sqlite3_file*)(((ApndFile*)(pFile))+1));
  return pFile->pMethods->xSectorSize(pFile);
}




static int apndDeviceCharacteristics(sqlite3_file *pFile){
  pFile = ((sqlite3_file*)(((ApndFile*)(pFile))+1));
  return pFile->pMethods->xDeviceCharacteristics(pFile);
}


static int apndShmMap(
  sqlite3_file *pFile,
  int iPg,
  int pgsz,
  int bExtend,
  void volatile **pp
){
  pFile = ((sqlite3_file*)(((ApndFile*)(pFile))+1));
  return pFile->pMethods->xShmMap(pFile,iPg,pgsz,bExtend,pp);
}


static int apndShmLock(sqlite3_file *pFile, int offset, int n, int flags){
  pFile = ((sqlite3_file*)(((ApndFile*)(pFile))+1));
  return pFile->pMethods->xShmLock(pFile,offset,n,flags);
}


static void apndShmBarrier(sqlite3_file *pFile){
  pFile = ((sqlite3_file*)(((ApndFile*)(pFile))+1));
  pFile->pMethods->xShmBarrier(pFile);
}


static int apndShmUnmap(sqlite3_file *pFile, int deleteFlag){
  pFile = ((sqlite3_file*)(((ApndFile*)(pFile))+1));
  return pFile->pMethods->xShmUnmap(pFile,deleteFlag);
}


static int apndFetch(
  sqlite3_file *pFile,
  sqlite3_int64 iOfst,
  int iAmt,
  void **pp
){
  ApndFile *p = (ApndFile *)pFile;
  pFile = ((sqlite3_file*)(((ApndFile*)(pFile))+1));
  return pFile->pMethods->xFetch(pFile, iOfst+p->iPgOne, iAmt, pp);
}


static int apndUnfetch(sqlite3_file *pFile, sqlite3_int64 iOfst, void *pPage){
  ApndFile *p = (ApndFile *)pFile;
  pFile = ((sqlite3_file*)(((ApndFile*)(pFile))+1));
  return pFile->pMethods->xUnfetch(pFile, iOfst+p->iPgOne, pPage);
}




static int apndIsOrdinaryDatabaseFile(sqlite3_int64 sz, sqlite3_file *pFile){
  int rc={0};
  char zHdr[16]={0};
  static const char aSqliteHdr[] = "SQLite format 3";
  if( sz<512 ) return 0;
  rc = pFile->pMethods->xRead(pFile, zHdr, sizeof(zHdr), 0);
  if( rc ) return 0;
  return memcmp(zHdr, aSqliteHdr, sizeof(zHdr))==0;
}






static sqlite3_int64 apndReadMark(sqlite3_int64 sz, sqlite3_file *pFile){
  int rc, i={0};
  sqlite3_int64 iMark={0};
  unsigned char a[25]={0};

  if( sz<=25 ) return -1;
  rc = pFile->pMethods->xRead(pFile, a, 25, sz-25);
  if( rc ) return -1;
  if( memcmp(a, "Start-Of-SQLite3-", 17)!=0 ) return -1;
  iMark = ((sqlite3_int64)(a[17]&0x7f))<<56;
  for(i=1; i<8; i++){
    iMark += (sqlite3_int64)a[17 +i]<<(56-8*i);
  }
  return iMark;
}




static int apndOpen(
  sqlite3_vfs *pVfs,
  const char *zName,
  sqlite3_file *pFile,
  int flags,
  int *pOutFlags
){
  ApndFile *p={0};
  sqlite3_file *pSubFile={0};
  sqlite3_vfs *pSubVfs={0};
  int rc={0};
  sqlite3_int64 sz={0};
  pSubVfs = ((sqlite3_vfs*)((pVfs)->pAppData));
  if( (flags & 0x00000100)==0 ){
    return pSubVfs->xOpen(pSubVfs, zName, pFile, flags, pOutFlags);
  }
  p = (ApndFile*)pFile;
  memset(p, 0, sizeof(*p));
  pSubFile = ((sqlite3_file*)(((ApndFile*)(pFile))+1));
  p->base.pMethods = &apnd_io_methods;
  rc = pSubVfs->xOpen(pSubVfs, zName, pSubFile, flags, pOutFlags);
  if( rc ) goto apnd_open_done;
  rc = pSubFile->pMethods->xFileSize(pSubFile, &sz);
  if( rc ){
    pSubFile->pMethods->xClose(pSubFile);
    goto apnd_open_done;
  }
  if( apndIsOrdinaryDatabaseFile(sz, pSubFile) ){
    memmove(pFile, pSubFile, pSubVfs->szOsFile);
    return 0;
  }
  p->iMark = 0;
  p->iPgOne = apndReadMark(sz, pFile);
  if( p->iPgOne>0 ){
    return 0;
  }
  if( (flags & 0x00000004)==0 ){
    pSubFile->pMethods->xClose(pSubFile);
    rc = 14;
  }
  p->iPgOne = (sz+0xfff) & ~(sqlite3_int64)0xfff;
apnd_open_done:
  if( rc ) pFile->pMethods = 0;
  return rc;
}




static int apndDelete(sqlite3_vfs *pVfs, const char *zPath, int dirSync){
  return ((sqlite3_vfs*)((pVfs)->pAppData))->xDelete(((sqlite3_vfs*)((pVfs)->pAppData)), zPath, dirSync);
}
static int apndAccess(
  sqlite3_vfs *pVfs,
  const char *zPath,
  int flags,
  int *pResOut
){
  return ((sqlite3_vfs*)((pVfs)->pAppData))->xAccess(((sqlite3_vfs*)((pVfs)->pAppData)), zPath, flags, pResOut);
}
static int apndFullPathname(
  sqlite3_vfs *pVfs,
  const char *zPath,
  int nOut,
  char *zOut
){
  return ((sqlite3_vfs*)((pVfs)->pAppData))->xFullPathname(((sqlite3_vfs*)((pVfs)->pAppData)),zPath,nOut,zOut);
}
static void *apndDlOpen(sqlite3_vfs *pVfs, const char *zPath){
  return ((sqlite3_vfs*)((pVfs)->pAppData))->xDlOpen(((sqlite3_vfs*)((pVfs)->pAppData)), zPath);
}
static void apndDlError(sqlite3_vfs *pVfs, int nByte, char *zErrMsg){
  ((sqlite3_vfs*)((pVfs)->pAppData))->xDlError(((sqlite3_vfs*)((pVfs)->pAppData)), nByte, zErrMsg);
}
static void (*apndDlSym(sqlite3_vfs *pVfs, void *p, const char *zSym))(void){
  return ((sqlite3_vfs*)((pVfs)->pAppData))->xDlSym(((sqlite3_vfs*)((pVfs)->pAppData)), p, zSym);
}
static void apndDlClose(sqlite3_vfs *pVfs, void *pHandle){
  ((sqlite3_vfs*)((pVfs)->pAppData))->xDlClose(((sqlite3_vfs*)((pVfs)->pAppData)), pHandle);
}
static int apndRandomness(sqlite3_vfs *pVfs, int nByte, char *zBufOut){
  return ((sqlite3_vfs*)((pVfs)->pAppData))->xRandomness(((sqlite3_vfs*)((pVfs)->pAppData)), nByte, zBufOut);
}
static int apndSleep(sqlite3_vfs *pVfs, int nMicro){
  return ((sqlite3_vfs*)((pVfs)->pAppData))->xSleep(((sqlite3_vfs*)((pVfs)->pAppData)), nMicro);
}
static int apndCurrentTime(sqlite3_vfs *pVfs, double *pTimeOut){
  return ((sqlite3_vfs*)((pVfs)->pAppData))->xCurrentTime(((sqlite3_vfs*)((pVfs)->pAppData)), pTimeOut);
}
static int apndGetLastError(sqlite3_vfs *pVfs, int a, char *b){
  return ((sqlite3_vfs*)((pVfs)->pAppData))->xGetLastError(((sqlite3_vfs*)((pVfs)->pAppData)), a, b);
}
static int apndCurrentTimeInt64(sqlite3_vfs *pVfs, sqlite3_int64 *p){
  return ((sqlite3_vfs*)((pVfs)->pAppData))->xCurrentTimeInt64(((sqlite3_vfs*)((pVfs)->pAppData)), p);
}
static int apndSetSystemCall(
  sqlite3_vfs *pVfs,
  const char *zName,
  sqlite3_syscall_ptr pCall
){
  return ((sqlite3_vfs*)((pVfs)->pAppData))->xSetSystemCall(((sqlite3_vfs*)((pVfs)->pAppData)),zName,pCall);
}
static sqlite3_syscall_ptr apndGetSystemCall(
  sqlite3_vfs *pVfs,
  const char *zName
){
  return ((sqlite3_vfs*)((pVfs)->pAppData))->xGetSystemCall(((sqlite3_vfs*)((pVfs)->pAppData)),zName);
}
static const char *apndNextSystemCall(sqlite3_vfs *pVfs, const char *zName){
  return ((sqlite3_vfs*)((pVfs)->pAppData))->xNextSystemCall(((sqlite3_vfs*)((pVfs)->pAppData)), zName);
}
int sqlite3_appendvfs_init(
  sqlite3 *db,
  char **pzErrMsg,
  const sqlite3_api_routines *pApi
){
  int rc = 0;
  sqlite3_vfs *pOrig={0};
  (void)(pApi);
  (void)pzErrMsg;
  (void)db;
  pOrig = sqlite3_vfs_find(0);
  apnd_vfs.iVersion = pOrig->iVersion;
  apnd_vfs.pAppData = pOrig;
  apnd_vfs.szOsFile = pOrig->szOsFile + sizeof(ApndFile);
  rc = sqlite3_vfs_register(&apnd_vfs, 0);





  if( rc==0 ) rc = (0 | (1<<8));
  return rc;
}




static sqlite3_mem_methods memtraceBase;
static FILE *memtraceOut;


static void *memtraceMalloc(int n){
  if( memtraceOut ){
    fprintf(memtraceOut, "MEMTRACE: allocate %d bytes\n",
            memtraceBase.xRoundup(n));
  }
  return memtraceBase.xMalloc(n);
}
static void memtraceFree(void *p){
  if( p==0 ) return;
  if( memtraceOut ){
    fprintf(memtraceOut, "MEMTRACE: free %d bytes\n", memtraceBase.xSize(p));
  }
  memtraceBase.xFree(p);
}
static void *memtraceRealloc(void *p, int n){
  if( p==0 ) return memtraceMalloc(n);
  if( n==0 ){
    memtraceFree(p);
    return 0;
  }
  if( memtraceOut ){
    fprintf(memtraceOut, "MEMTRACE: resize %d -> %d bytes\n",
            memtraceBase.xSize(p), memtraceBase.xRoundup(n));
  }
  return memtraceBase.xRealloc(p, n);
}
static int memtraceSize(void *p){
  return memtraceBase.xSize(p);
}
static int memtraceRoundup(int n){
  return memtraceBase.xRoundup(n);
}
static int memtraceInit(void *p){
  return memtraceBase.xInit(p);
}
static void memtraceShutdown(void *p){
  memtraceBase.xShutdown(p);
}


static sqlite3_mem_methods ersaztMethods = {
  memtraceMalloc,
  memtraceFree,
  memtraceRealloc,
  memtraceSize,
  memtraceRoundup,
  memtraceInit,
  memtraceShutdown,
  0
};


int sqlite3MemTraceActivate(FILE *out){
  int rc = 0;
  if( memtraceBase.xMalloc==0 ){
    rc = sqlite3_config(5, &memtraceBase);
    if( rc==0 ){
      rc = sqlite3_config(4, &ersaztMethods);
    }
  }
  memtraceOut = out;
  return rc;
}


int sqlite3MemTraceDeactivate(void){
  int rc = 0;
  if( memtraceBase.xMalloc!=0 ){
    rc = sqlite3_config(4, &memtraceBase);
    if( rc==0 ){
      memset(&memtraceBase, 0, sizeof(memtraceBase));
    }
  }
  memtraceOut = 0;
  return rc;
}
typedef struct sqlite3expert sqlite3expert;
sqlite3expert *sqlite3_expert_new(sqlite3 *db, char **pzErr);
int sqlite3_expert_config(sqlite3expert *p, int op, ...);
int sqlite3_expert_sql(
  sqlite3expert *p,
  const char *zSql,
  char **pzErr
);
int sqlite3_expert_analyze(sqlite3expert *p, char **pzErr);






int sqlite3_expert_count(sqlite3expert*);
const char *sqlite3_expert_report(sqlite3expert*, int iStmt, int eReport);
void sqlite3_expert_destroy(sqlite3expert*);
typedef struct IdxColumn IdxColumn;
typedef struct IdxConstraint IdxConstraint;
typedef struct IdxScan IdxScan;
typedef struct IdxStatement IdxStatement;
typedef struct IdxTable IdxTable;
typedef struct IdxWrite IdxWrite;
struct IdxConstraint {
  char *zColl;
  int bRange;
  int iCol;
  int bFlag;
  int bDesc;
  IdxConstraint *pNext;
  IdxConstraint *pLink;
};




struct IdxScan {
  IdxTable *pTab;
  int iDb;
  i64 covering;
  IdxConstraint *pOrder;
  IdxConstraint *pEq;
  IdxConstraint *pRange;
  IdxScan *pNextScan;
};





struct IdxColumn {
  char *zName;
  char *zColl;
  int iPk;
};
struct IdxTable {
  int nCol;
  char *zName;
  IdxColumn *aCol;
  IdxTable *pNext;
};






struct IdxWrite {
  IdxTable *pTab;
  int eOp;
  IdxWrite *pNext;
};





struct IdxStatement {
  int iId;
  char *zSql;
  char *zIdx;
  char *zEQP;
  IdxStatement *pNext;
};
typedef struct IdxHashEntry IdxHashEntry;
typedef struct IdxHash IdxHash;
struct IdxHashEntry {
  char *zKey;
  char *zVal;
  char *zVal2;
  IdxHashEntry *pHashNext;
  IdxHashEntry *pNext;
};
struct IdxHash {
  IdxHashEntry *pFirst;
  IdxHashEntry *aHash[1023];
};




struct sqlite3expert {
  int iSample;
  sqlite3 *db;
  sqlite3 *dbm;
  sqlite3 *dbv;
  IdxTable *pTable;
  IdxScan *pScan;
  IdxWrite *pWrite;
  IdxStatement *pStatement;
  int bRun;
  char **pzErrmsg;
  int rc;
  IdxHash hIdx;
  char *zCandidates;
};






static void *idxMalloc(int *pRc, int nByte){
  void *pRet={0};
  
 ((
 *pRc==0
 ) ? (void) (0) : __assert_fail (
 "*pRc==SQLITE_OK"
 , "shell.c", 6837, __PRETTY_FUNCTION__))
                          ;
  
 ((
 nByte>0
 ) ? (void) (0) : __assert_fail (
 "nByte>0"
 , "shell.c", 6838, __PRETTY_FUNCTION__))
                  ;
  pRet = sqlite3_malloc(nByte);
  if( pRet ){
    memset(pRet, 0, nByte);
  }else{
    *pRc = 7;
  }
  return pRet;
}




static void idxHashInit(IdxHash *pHash){
  memset(pHash, 0, sizeof(IdxHash));
}




static void idxHashClear(IdxHash *pHash){
  int i={0};
  for(i=0; i<1023; i++){
    IdxHashEntry *pEntry={0};
    IdxHashEntry *pNext={0};
    for(pEntry=pHash->aHash[i]; pEntry; pEntry=pNext){
      pNext = pEntry->pHashNext;
      sqlite3_free(pEntry->zVal2);
      sqlite3_free(pEntry);
    }
  }
  memset(pHash, 0, sizeof(IdxHash));
}





static int idxHashString(const char *z, int n){
  unsigned int ret = 0;
  int i={0};
  for(i=0; i<n; i++){
    ret += (ret<<3) + (unsigned char)(z[i]);
  }
  return (int)(ret % 1023);
}






static int idxHashAdd(
  int *pRc,
  IdxHash *pHash,
  const char *zKey,
  const char *zVal
){
  int nKey = (int)strlen(zKey);
  int iHash = idxHashString(zKey, nKey);
  int nVal = (zVal ? (int)strlen(zVal) : 0);
  IdxHashEntry *pEntry={0};
  
 ((
 iHash>=0
 ) ? (void) (0) : __assert_fail (
 "iHash>=0"
 , "shell.c", 6900, __PRETTY_FUNCTION__))
                   ;
  for(pEntry=pHash->aHash[iHash]; pEntry; pEntry=pEntry->pHashNext){
    if( (int)strlen(pEntry->zKey)==nKey && 0==memcmp(pEntry->zKey, zKey, nKey) ){
      return 1;
    }
  }
  pEntry = idxMalloc(pRc, sizeof(IdxHashEntry) + nKey+1 + nVal+1);
  if( pEntry ){
    pEntry->zKey = (char*)&pEntry[1];
    memcpy(pEntry->zKey, zKey, nKey);
    if( zVal ){
      pEntry->zVal = &pEntry->zKey[nKey+1];
      memcpy(pEntry->zVal, zVal, nVal);
    }
    pEntry->pHashNext = pHash->aHash[iHash];
    pHash->aHash[iHash] = pEntry;

    pEntry->pNext = pHash->pFirst;
    pHash->pFirst = pEntry;
  }
  return 0;
}





static IdxHashEntry *idxHashFind(IdxHash *pHash, const char *zKey, int nKey){
  int iHash={0};
  IdxHashEntry *pEntry={0};
  if( nKey<0 ) nKey = (int)strlen(zKey);
  iHash = idxHashString(zKey, nKey);
  
 ((
 iHash>=0
 ) ? (void) (0) : __assert_fail (
 "iHash>=0"
 , "shell.c", 6932, __PRETTY_FUNCTION__))
                   ;
  for(pEntry=pHash->aHash[iHash]; pEntry; pEntry=pEntry->pHashNext){
    if( (int)strlen(pEntry->zKey)==nKey && 0==memcmp(pEntry->zKey, zKey, nKey) ){
      return pEntry;
    }
  }
  return 0;
}







static const char *idxHashSearch(IdxHash *pHash, const char *zKey, int nKey){
  IdxHashEntry *pEntry = idxHashFind(pHash, zKey, nKey);
  if( pEntry ) return pEntry->zVal;
  return 0;
}





static IdxConstraint *idxNewConstraint(int *pRc, const char *zColl){
  IdxConstraint *pNew={0};
  int nColl = (int)strlen(zColl);

  
 ((
 *pRc==0
 ) ? (void) (0) : __assert_fail (
 "*pRc==SQLITE_OK"
 , "shell.c", 6961, __PRETTY_FUNCTION__))
                          ;
  pNew = (IdxConstraint*)idxMalloc(pRc, sizeof(IdxConstraint) * nColl + 1);
  if( pNew ){
    pNew->zColl = (char*)&pNew[1];
    memcpy(pNew->zColl, zColl, nColl+1);
  }
  return pNew;
}





static void idxDatabaseError(
  sqlite3 *db,
  char **pzErrmsg
){
  *pzErrmsg = sqlite3_mprintf("%s", sqlite3_errmsg(db));
}




static int idxPrepareStmt(
  sqlite3 *db,
  sqlite3_stmt **ppStmt,
  char **pzErrmsg,
  const char *zSql
){
  int rc = sqlite3_prepare_v2(db, zSql, -1, ppStmt, 0);
  if( rc!=0 ){
    *ppStmt = 0;
    idxDatabaseError(db, pzErrmsg);
  }
  return rc;
}




static int idxPrintfPrepareStmt(
  sqlite3 *db,
  sqlite3_stmt **ppStmt,
  char **pzErrmsg,
  const char *zFmt,
  ...
){
  va_list ap={0};
  int rc={0};
  char *zSql={0};
  
 __builtin_va_start(
 ap
 ,
 zFmt
 )
                   ;
  zSql = sqlite3_vmprintf(zFmt, ap);
  if( zSql==0 ){
    rc = 7;
  }else{
    rc = idxPrepareStmt(db, ppStmt, pzErrmsg, zSql);
    sqlite3_free(zSql);
  }
  
 __builtin_va_end(
 ap
 )
           ;
  return rc;
}





typedef struct ExpertVtab ExpertVtab;
struct ExpertVtab {
  sqlite3_vtab base;
  IdxTable *pTab;
  sqlite3expert *pExpert;
};

typedef struct ExpertCsr ExpertCsr;
struct ExpertCsr {
  sqlite3_vtab_cursor base;
  sqlite3_stmt *pData;
};

static char *expertDequote(const char *zIn){
  int n = (int)strlen(zIn);
  char *zRet = sqlite3_malloc(n);

  
 ((
 zIn[0]=='\''
 ) ? (void) (0) : __assert_fail (
 "zIn[0]=='\\''"
 , "shell.c", 7044, __PRETTY_FUNCTION__))
                       ;
  
 ((
 zIn[n-1]=='\''
 ) ? (void) (0) : __assert_fail (
 "zIn[n-1]=='\\''"
 , "shell.c", 7045, __PRETTY_FUNCTION__))
                         ;

  if( zRet ){
    int iOut = 0;
    int iIn = 0;
    for(iIn=1; iIn<(n-1); iIn++){
      if( zIn[iIn]=='\'' ){
        
       ((
       zIn[iIn+1]=='\''
       ) ? (void) (0) : __assert_fail (
       "zIn[iIn+1]=='\\''"
       , "shell.c", 7052, __PRETTY_FUNCTION__))
                                 ;
        iIn++;
      }
      zRet[iOut++] = zIn[iIn];
    }
    zRet[iOut] = '\0';
  }

  return zRet;
}
static int expertConnect(
  sqlite3 *db,
  void *pAux,
  int argc, const char *const*argv,
  sqlite3_vtab **ppVtab,
  char **pzErr
){
  sqlite3expert *pExpert = (sqlite3expert*)pAux;
  ExpertVtab *p = 0;
  int rc={0};

  if( argc!=4 ){
    *pzErr = sqlite3_mprintf("internal error!");
    rc = 1;
  }else{
    char *zCreateTable = expertDequote(argv[3]);
    if( zCreateTable ){
      rc = sqlite3_declare_vtab(db, zCreateTable);
      if( rc==0 ){
        p = idxMalloc(&rc, sizeof(ExpertVtab));
      }
      if( rc==0 ){
        p->pExpert = pExpert;
        p->pTab = pExpert->pTable;
        
       ((
       sqlite3_stricmp(p->pTab->zName, argv[2])==0
       ) ? (void) (0) : __assert_fail (
       "sqlite3_stricmp(p->pTab->zName, argv[2])==0"
       , "shell.c", 7096, __PRETTY_FUNCTION__))
                                                            ;
      }
      sqlite3_free(zCreateTable);
    }else{
      rc = 7;
    }
  }

  *ppVtab = (sqlite3_vtab*)p;
  return rc;
}

static int expertDisconnect(sqlite3_vtab *pVtab){
  ExpertVtab *p = (ExpertVtab*)pVtab;
  sqlite3_free(p);
  return 0;
}

static int expertBestIndex(sqlite3_vtab *pVtab, sqlite3_index_info *pIdxInfo){
  ExpertVtab *p = (ExpertVtab*)pVtab;
  int rc = 0;
  int n = 0;
  IdxScan *pScan={0};
  const int opmask =
    2 | 4 |
    16 | 32 |
    8;

  pScan = idxMalloc(&rc, sizeof(IdxScan));
  if( pScan ){
    int i={0};


    pScan->pTab = p->pTab;
    pScan->pNextScan = p->pExpert->pScan;
    p->pExpert->pScan = pScan;


    for(i=0; i<pIdxInfo->nConstraint; i++){
      struct sqlite3_index_constraint *pCons = &pIdxInfo->aConstraint[i];
      if( pCons->usable
       && pCons->iColumn>=0
       && p->pTab->aCol[pCons->iColumn].iPk==0
       && (pCons->op & opmask)
      ){
        IdxConstraint *pNew={0};
        const char *zColl = sqlite3_vtab_collation(pIdxInfo, i);
        pNew = idxNewConstraint(&rc, zColl);
        if( pNew ){
          pNew->iCol = pCons->iColumn;
          if( pCons->op==2 ){
            pNew->pNext = pScan->pEq;
            pScan->pEq = pNew;
          }else{
            pNew->bRange = 1;
            pNew->pNext = pScan->pRange;
            pScan->pRange = pNew;
          }
        }
        n++;
        pIdxInfo->aConstraintUsage[i].argvIndex = n;
      }
    }


    for(i=pIdxInfo->nOrderBy-1; i>=0; i--){
      int iCol = pIdxInfo->aOrderBy[i].iColumn;
      if( iCol>=0 ){
        IdxConstraint *pNew = idxNewConstraint(&rc, p->pTab->aCol[iCol].zColl);
        if( pNew ){
          pNew->iCol = iCol;
          pNew->bDesc = pIdxInfo->aOrderBy[i].desc;
          pNew->pNext = pScan->pOrder;
          pNew->pLink = pScan->pOrder;
          pScan->pOrder = pNew;
          n++;
        }
      }
    }
  }

  pIdxInfo->estimatedCost = 1000000.0 / (n+1);
  return rc;
}

static int expertUpdate(
  sqlite3_vtab *pVtab,
  int nData,
  sqlite3_value **azData,
  sqlite_int64 *pRowid
){
  (void)pVtab;
  (void)nData;
  (void)azData;
  (void)pRowid;
  return 0;
}




static int expertOpen(sqlite3_vtab *pVTab, sqlite3_vtab_cursor **ppCursor){
  int rc = 0;
  ExpertCsr *pCsr={0};
  (void)pVTab;
  pCsr = idxMalloc(&rc, sizeof(ExpertCsr));
  *ppCursor = (sqlite3_vtab_cursor*)pCsr;
  return rc;
}




static int expertClose(sqlite3_vtab_cursor *cur){
  ExpertCsr *pCsr = (ExpertCsr*)cur;
  sqlite3_finalize(pCsr->pData);
  sqlite3_free(pCsr);
  return 0;
}







static int expertEof(sqlite3_vtab_cursor *cur){
  ExpertCsr *pCsr = (ExpertCsr*)cur;
  return pCsr->pData==0;
}




static int expertNext(sqlite3_vtab_cursor *cur){
  ExpertCsr *pCsr = (ExpertCsr*)cur;
  int rc = 0;

  
 ((
 pCsr->pData
 ) ? (void) (0) : __assert_fail (
 "pCsr->pData"
 , "shell.c", 7234, __PRETTY_FUNCTION__))
                      ;
  rc = sqlite3_step(pCsr->pData);
  if( rc!=100 ){
    rc = sqlite3_finalize(pCsr->pData);
    pCsr->pData = 0;
  }else{
    rc = 0;
  }

  return rc;
}




static int expertRowid(sqlite3_vtab_cursor *cur, sqlite_int64 *pRowid){
  (void)cur;
  *pRowid = 0;
  return 0;
}




static int expertColumn(sqlite3_vtab_cursor *cur, sqlite3_context *ctx, int i){
  ExpertCsr *pCsr = (ExpertCsr*)cur;
  sqlite3_value *pVal={0};
  pVal = sqlite3_column_value(pCsr->pData, i);
  if( pVal ){
    sqlite3_result_value(ctx, pVal);
  }
  return 0;
}




static int expertFilter(
  sqlite3_vtab_cursor *cur,
  int idxNum, const char *idxStr,
  int argc, sqlite3_value **argv
){
  ExpertCsr *pCsr = (ExpertCsr*)cur;
  ExpertVtab *pVtab = (ExpertVtab*)(cur->pVtab);
  sqlite3expert *pExpert = pVtab->pExpert;
  int rc={0};

  (void)idxNum;
  (void)idxStr;
  (void)argc;
  (void)argv;
  rc = sqlite3_finalize(pCsr->pData);
  pCsr->pData = 0;
  if( rc==0 ){
    rc = idxPrintfPrepareStmt(pExpert->db, &pCsr->pData, &pVtab->base.zErrMsg,
        "SELECT * FROM main.%Q WHERE sample()", pVtab->pTab->zName
    );
  }

  if( rc==0 ){
    rc = expertNext(cur);
  }
  return rc;
}

static int idxRegisterVtab(sqlite3expert *p){
  static sqlite3_module expertModule = {
    2,
    expertConnect,
    expertConnect,
    expertBestIndex,
    expertDisconnect,
    expertDisconnect,
    expertOpen,
    expertClose,
    expertFilter,
    expertNext,
    expertEof,
    expertColumn,
    expertRowid,
    expertUpdate,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
  };

  return sqlite3_create_module(p->dbv, "expert", &expertModule, (void*)p);
}
static void idxFinalize(int *pRc, sqlite3_stmt *pStmt){
  int rc = sqlite3_finalize(pStmt);
  if( *pRc==0 ) *pRc = rc;
}
static int idxGetTableInfo(
  sqlite3 *db,
  const char *zTab,
  IdxTable **ppOut,
  char **pzErrmsg
){
  sqlite3_stmt *p1 = 0;
  int nCol = 0;
  int nTab = (int)strlen(zTab);
  int nByte = sizeof(IdxTable) + nTab + 1;
  IdxTable *pNew = 0;
  int rc, rc2={0};
  char *pCsr = 0;

  rc = idxPrintfPrepareStmt(db, &p1, pzErrmsg, "PRAGMA table_info=%Q", zTab);
  while( rc==0 && 100==sqlite3_step(p1) ){
    const char *zCol = (const char*)sqlite3_column_text(p1, 1);
    nByte += 1 + (int)strlen(zCol);
    rc = sqlite3_table_column_metadata(
        db, "main", zTab, zCol, 0, &zCol, 0, 0, 0
    );
    nByte += 1 + (int)strlen(zCol);
    nCol++;
  }
  rc2 = sqlite3_reset(p1);
  if( rc==0 ) rc = rc2;

  nByte += sizeof(IdxColumn) * nCol;
  if( rc==0 ){
    pNew = idxMalloc(&rc, nByte);
  }
  if( rc==0 ){
    pNew->aCol = (IdxColumn*)&pNew[1];
    pNew->nCol = nCol;
    pCsr = (char*)&pNew->aCol[nCol];
  }

  nCol = 0;
  while( rc==0 && 100==sqlite3_step(p1) ){
    const char *zCol = (const char*)sqlite3_column_text(p1, 1);
    int nCopy = (int)strlen(zCol) + 1;
    pNew->aCol[nCol].zName = pCsr;
    pNew->aCol[nCol].iPk = sqlite3_column_int(p1, 5);
    memcpy(pCsr, zCol, nCopy);
    pCsr += nCopy;

    rc = sqlite3_table_column_metadata(
        db, "main", zTab, zCol, 0, &zCol, 0, 0, 0
    );
    if( rc==0 ){
      nCopy = (int)strlen(zCol) + 1;
      pNew->aCol[nCol].zColl = pCsr;
      memcpy(pCsr, zCol, nCopy);
      pCsr += nCopy;
    }

    nCol++;
  }
  idxFinalize(&rc, p1);

  if( rc!=0 ){
    sqlite3_free(pNew);
    pNew = 0;
  }else{
    pNew->zName = pCsr;
    memcpy(pNew->zName, zTab, nTab+1);
  }

  *ppOut = pNew;
  return rc;
}
static char *idxAppendText(int *pRc, char *zIn, const char *zFmt, ...){
  va_list ap={0};
  char *zAppend = 0;
  char *zRet = 0;
  int nIn = zIn ? (int)strlen(zIn) : 0;
  int nAppend = 0;
  
 __builtin_va_start(
 ap
 ,
 zFmt
 )
                   ;
  if( *pRc==0 ){
    zAppend = sqlite3_vmprintf(zFmt, ap);
    if( zAppend ){
      nAppend = (int)strlen(zAppend);
      zRet = (char*)sqlite3_malloc(nIn + nAppend + 1);
    }
    if( zAppend && zRet ){
      if( nIn ) memcpy(zRet, zIn, nIn);
      memcpy(&zRet[nIn], zAppend, nAppend+1);
    }else{
      sqlite3_free(zRet);
      zRet = 0;
      *pRc = 7;
    }
    sqlite3_free(zAppend);
    sqlite3_free(zIn);
  }
  
 __builtin_va_end(
 ap
 )
           ;
  return zRet;
}





static int idxIdentifierRequiresQuotes(const char *zId){
  int i={0};
  for(i=0; zId[i]; i++){
    if( !(zId[i]=='_')
     && !(zId[i]>='0' && zId[i]<='9')
     && !(zId[i]>='a' && zId[i]<='z')
     && !(zId[i]>='A' && zId[i]<='Z')
    ){
      return 1;
    }
  }
  return 0;
}





static char *idxAppendColDefn(
  int *pRc,
  char *zIn,
  IdxTable *pTab,
  IdxConstraint *pCons
){
  char *zRet = zIn;
  IdxColumn *p = &pTab->aCol[pCons->iCol];
  if( zRet ) zRet = idxAppendText(pRc, zRet, ", ");

  if( idxIdentifierRequiresQuotes(p->zName) ){
    zRet = idxAppendText(pRc, zRet, "%Q", p->zName);
  }else{
    zRet = idxAppendText(pRc, zRet, "%s", p->zName);
  }

  if( sqlite3_stricmp(p->zColl, pCons->zColl) ){
    if( idxIdentifierRequiresQuotes(pCons->zColl) ){
      zRet = idxAppendText(pRc, zRet, " COLLATE %Q", pCons->zColl);
    }else{
      zRet = idxAppendText(pRc, zRet, " COLLATE %s", pCons->zColl);
    }
  }

  if( pCons->bDesc ){
    zRet = idxAppendText(pRc, zRet, " DESC");
  }
  return zRet;
}
static int idxFindCompatible(
  int *pRc,
  sqlite3* dbm,
  IdxScan *pScan,
  IdxConstraint *pEq,
  IdxConstraint *pTail
){
  const char *zTbl = pScan->pTab->zName;
  sqlite3_stmt *pIdxList = 0;
  IdxConstraint *pIter={0};
  int nEq = 0;
  int rc={0};


  for(pIter=pEq; pIter; pIter=pIter->pLink) nEq++;

  rc = idxPrintfPrepareStmt(dbm, &pIdxList, 0, "PRAGMA index_list=%Q", zTbl);
  while( rc==0 && sqlite3_step(pIdxList)==100 ){
    int bMatch = 1;
    IdxConstraint *pT = pTail;
    sqlite3_stmt *pInfo = 0;
    const char *zIdx = (const char*)sqlite3_column_text(pIdxList, 1);


    for(pIter=pEq; pIter; pIter=pIter->pLink) pIter->bFlag = 0;

    rc = idxPrintfPrepareStmt(dbm, &pInfo, 0, "PRAGMA index_xInfo=%Q", zIdx);
    while( rc==0 && sqlite3_step(pInfo)==100 ){
      int iIdx = sqlite3_column_int(pInfo, 0);
      int iCol = sqlite3_column_int(pInfo, 1);
      const char *zColl = (const char*)sqlite3_column_text(pInfo, 4);

      if( iIdx<nEq ){
        for(pIter=pEq; pIter; pIter=pIter->pLink){
          if( pIter->bFlag ) continue;
          if( pIter->iCol!=iCol ) continue;
          if( sqlite3_stricmp(pIter->zColl, zColl) ) continue;
          pIter->bFlag = 1;
          break;
        }
        if( pIter==0 ){
          bMatch = 0;
          break;
        }
      }else{
        if( pT ){
          if( pT->iCol!=iCol || sqlite3_stricmp(pT->zColl, zColl) ){
            bMatch = 0;
            break;
          }
          pT = pT->pLink;
        }
      }
    }
    idxFinalize(&rc, pInfo);

    if( rc==0 && bMatch ){
      sqlite3_finalize(pIdxList);
      return 1;
    }
  }
  idxFinalize(&rc, pIdxList);

  *pRc = rc;
  return 0;
}

static int idxCreateFromCons(
  sqlite3expert *p,
  IdxScan *pScan,
  IdxConstraint *pEq,
  IdxConstraint *pTail
){
  sqlite3 *dbm = p->dbm;
  int rc = 0;
  if( (pEq || pTail) && 0==idxFindCompatible(&rc, dbm, pScan, pEq, pTail) ){
    IdxTable *pTab = pScan->pTab;
    char *zCols = 0;
    char *zIdx = 0;
    IdxConstraint *pCons={0};
    unsigned int h = 0;
    const char *zFmt={0};

    for(pCons=pEq; pCons; pCons=pCons->pLink){
      zCols = idxAppendColDefn(&rc, zCols, pTab, pCons);
    }
    for(pCons=pTail; pCons; pCons=pCons->pLink){
      zCols = idxAppendColDefn(&rc, zCols, pTab, pCons);
    }

    if( rc==0 ){

      const char *zTable = pScan->pTab->zName;
      char *zName={0};
      int i={0};
      for(i=0; zCols[i]; i++){
        h += ((h<<3) + zCols[i]);
      }
      zName = sqlite3_mprintf("%s_idx_%08x", zTable, h);
      if( zName==0 ){
        rc = 7;
      }else{
        if( idxIdentifierRequiresQuotes(zTable) ){
          zFmt = "CREATE INDEX '%q' ON %Q(%s)";
        }else{
          zFmt = "CREATE INDEX %s ON %s(%s)";
        }
        zIdx = sqlite3_mprintf(zFmt, zName, zTable, zCols);
        if( !zIdx ){
          rc = 7;
        }else{
          rc = sqlite3_exec(dbm, zIdx, 0, 0, p->pzErrmsg);
          idxHashAdd(&rc, &p->hIdx, zName, zIdx);
        }
        sqlite3_free(zName);
        sqlite3_free(zIdx);
      }
    }

    sqlite3_free(zCols);
  }
  return rc;
}





static int idxFindConstraint(IdxConstraint *pList, IdxConstraint *p){
  IdxConstraint *pCmp={0};
  for(pCmp=pList; pCmp; pCmp=pCmp->pLink){
    if( p->iCol==pCmp->iCol ) return 1;
  }
  return 0;
}

static int idxCreateFromWhere(
  sqlite3expert *p,
  IdxScan *pScan,
  IdxConstraint *pTail
){
  IdxConstraint *p1 = 0;
  IdxConstraint *pCon={0};
  int rc={0};


  for(pCon=pScan->pEq; pCon; pCon=pCon->pNext){
    if( !idxFindConstraint(p1, pCon) && !idxFindConstraint(pTail, pCon) ){
      pCon->pLink = p1;
      p1 = pCon;
    }
  }



  rc = idxCreateFromCons(p, pScan, p1, pTail);



  if( pTail==0 ){
    for(pCon=pScan->pRange; rc==0 && pCon; pCon=pCon->pNext){
      
     ((
     pCon->pLink==0
     ) ? (void) (0) : __assert_fail (
     "pCon->pLink==0"
     , "shell.c", 7682, __PRETTY_FUNCTION__))
                             ;
      if( !idxFindConstraint(p1, pCon) && !idxFindConstraint(pTail, pCon) ){
        rc = idxCreateFromCons(p, pScan, p1, pCon);
      }
    }
  }

  return rc;
}





static int idxCreateCandidates(sqlite3expert *p){
  int rc = 0;
  IdxScan *pIter={0};

  for(pIter=p->pScan; pIter && rc==0; pIter=pIter->pNextScan){
    rc = idxCreateFromWhere(p, pIter, 0);
    if( rc==0 && pIter->pOrder ){
      rc = idxCreateFromWhere(p, pIter, pIter->pOrder);
    }
  }

  return rc;
}




static void idxConstraintFree(IdxConstraint *pConstraint){
  IdxConstraint *pNext={0};
  IdxConstraint *p={0};

  for(p=pConstraint; p; p=pNext){
    pNext = p->pNext;
    sqlite3_free(p);
  }
}





static void idxScanFree(IdxScan *pScan, IdxScan *pLast){
  IdxScan *p={0};
  IdxScan *pNext={0};
  for(p=pScan; p!=pLast; p=pNext){
    pNext = p->pNextScan;
    idxConstraintFree(p->pOrder);
    idxConstraintFree(p->pEq);
    idxConstraintFree(p->pRange);
    sqlite3_free(p);
  }
}





static void idxStatementFree(IdxStatement *pStatement, IdxStatement *pLast){
  IdxStatement *p={0};
  IdxStatement *pNext={0};
  for(p=pStatement; p!=pLast; p=pNext){
    pNext = p->pNext;
    sqlite3_free(p->zEQP);
    sqlite3_free(p->zIdx);
    sqlite3_free(p);
  }
}




static void idxTableFree(IdxTable *pTab){
  IdxTable *pIter={0};
  IdxTable *pNext={0};
  for(pIter=pTab; pIter; pIter=pNext){
    pNext = pIter->pNext;
    sqlite3_free(pIter);
  }
}




static void idxWriteFree(IdxWrite *pTab){
  IdxWrite *pIter={0};
  IdxWrite *pNext={0};
  for(pIter=pTab; pIter; pIter=pNext){
    pNext = pIter->pNext;
    sqlite3_free(pIter);
  }
}
int idxFindIndexes(
  sqlite3expert *p,
  char **pzErr
){
  IdxStatement *pStmt={0};
  sqlite3 *dbm = p->dbm;
  int rc = 0;

  IdxHash hIdx={0};
  idxHashInit(&hIdx);

  for(pStmt=p->pStatement; rc==0 && pStmt; pStmt=pStmt->pNext){
    IdxHashEntry *pEntry={0};
    sqlite3_stmt *pExplain = 0;
    idxHashClear(&hIdx);
    rc = idxPrintfPrepareStmt(dbm, &pExplain, pzErr,
        "EXPLAIN QUERY PLAN %s", pStmt->zSql
    );
    while( rc==0 && sqlite3_step(pExplain)==100 ){



      const char *zDetail = (const char*)sqlite3_column_text(pExplain, 3);
      int nDetail = (int)strlen(zDetail);
      int i={0};

      for(i=0; i<nDetail; i++){
        const char *zIdx = 0;
        if( memcmp(&zDetail[i], " USING INDEX ", 13)==0 ){
          zIdx = &zDetail[i+13];
        }else if( memcmp(&zDetail[i], " USING COVERING INDEX ", 22)==0 ){
          zIdx = &zDetail[i+22];
        }
        if( zIdx ){
          const char *zSql={0};
          int nIdx = 0;
          while( zIdx[nIdx]!='\0' && (zIdx[nIdx]!=' ' || zIdx[nIdx+1]!='(') ){
            nIdx++;
          }
          zSql = idxHashSearch(&p->hIdx, zIdx, nIdx);
          if( zSql ){
            idxHashAdd(&rc, &hIdx, zSql, 0);
            if( rc ) goto find_indexes_out;
          }
          break;
        }
      }

      if( zDetail[0]!='-' ){
        pStmt->zEQP = idxAppendText(&rc, pStmt->zEQP, "%s\n", zDetail);
      }
    }

    for(pEntry=hIdx.pFirst; pEntry; pEntry=pEntry->pNext){
      pStmt->zIdx = idxAppendText(&rc, pStmt->zIdx, "%s;\n", pEntry->zKey);
    }

    idxFinalize(&rc, pExplain);
  }

 find_indexes_out:
  idxHashClear(&hIdx);
  return rc;
}

static int idxAuthCallback(
  void *pCtx,
  int eOp,
  const char *z3,
  const char *z4,
  const char *zDb,
  const char *zTrigger
){
  int rc = 0;
  (void)z4;
  (void)zTrigger;
  if( eOp==18 || eOp==23 || eOp==9 ){
    if( sqlite3_stricmp(zDb, "main")==0 ){
      sqlite3expert *p = (sqlite3expert*)pCtx;
      IdxTable *pTab={0};
      for(pTab=p->pTable; pTab; pTab=pTab->pNext){
        if( 0==sqlite3_stricmp(z3, pTab->zName) ) break;
      }
      if( pTab ){
        IdxWrite *pWrite={0};
        for(pWrite=p->pWrite; pWrite; pWrite=pWrite->pNext){
          if( pWrite->pTab==pTab && pWrite->eOp==eOp ) break;
        }
        if( pWrite==0 ){
          pWrite = idxMalloc(&rc, sizeof(IdxWrite));
          if( rc==0 ){
            pWrite->pTab = pTab;
            pWrite->eOp = eOp;
            pWrite->pNext = p->pWrite;
            p->pWrite = pWrite;
          }
        }
      }
    }
  }
  return rc;
}

static int idxProcessOneTrigger(
  sqlite3expert *p,
  IdxWrite *pWrite,
  char **pzErr
){
  static const char *zInt = "t592690916721053953805701627921227776";
  static const char *zDrop = "DROP TABLE " "t592690916721053953805701627921227776";
  IdxTable *pTab = pWrite->pTab;
  const char *zTab = pTab->zName;
  const char *zSql =
    "SELECT 'CREATE TEMP' || substr(sql, 7) FROM sqlite_master "
    "WHERE tbl_name = %Q AND type IN ('table', 'trigger') "
    "ORDER BY type;";
  sqlite3_stmt *pSelect = 0;
  int rc = 0;
  char *zWrite = 0;


  rc = idxPrintfPrepareStmt(p->db, &pSelect, pzErr, zSql, zTab, zTab);
  while( rc==0 && 100==sqlite3_step(pSelect) ){
    const char *zCreate = (const char*)sqlite3_column_text(pSelect, 0);
    rc = sqlite3_exec(p->dbv, zCreate, 0, 0, pzErr);
  }
  idxFinalize(&rc, pSelect);


  if( rc==0 ){
    char *z = sqlite3_mprintf("ALTER TABLE temp.%Q RENAME TO %Q", zTab, zInt);
    if( z==0 ){
      rc = 7;
    }else{
      rc = sqlite3_exec(p->dbv, z, 0, 0, pzErr);
      sqlite3_free(z);
    }
  }

  switch( pWrite->eOp ){
    case 18: {
      int i={0};
      zWrite = idxAppendText(&rc, zWrite, "INSERT INTO %Q VALUES(", zInt);
      for(i=0; i<pTab->nCol; i++){
        zWrite = idxAppendText(&rc, zWrite, "%s?", i==0 ? "" : ", ");
      }
      zWrite = idxAppendText(&rc, zWrite, ")");
      break;
    }
    case 23: {
      int i={0};
      zWrite = idxAppendText(&rc, zWrite, "UPDATE %Q SET ", zInt);
      for(i=0; i<pTab->nCol; i++){
        zWrite = idxAppendText(&rc, zWrite, "%s%Q=?", i==0 ? "" : ", ",
            pTab->aCol[i].zName
        );
      }
      break;
    }
    default: {
      
     ((
     pWrite->eOp==9
     ) ? (void) (0) : __assert_fail (
     "pWrite->eOp==SQLITE_DELETE"
     , "shell.c", 7945, __PRETTY_FUNCTION__))
                                         ;
      if( rc==0 ){
        zWrite = sqlite3_mprintf("DELETE FROM %Q", zInt);
        if( zWrite==0 ) rc = 7;
      }
    }
  }

  if( rc==0 ){
    sqlite3_stmt *pX = 0;
    rc = sqlite3_prepare_v2(p->dbv, zWrite, -1, &pX, 0);
    idxFinalize(&rc, pX);
    if( rc!=0 ){
      idxDatabaseError(p->dbv, pzErr);
    }
  }
  sqlite3_free(zWrite);

  if( rc==0 ){
    rc = sqlite3_exec(p->dbv, zDrop, 0, 0, pzErr);
  }

  return rc;
}

static int idxProcessTriggers(sqlite3expert *p, char **pzErr){
  int rc = 0;
  IdxWrite *pEnd = 0;
  IdxWrite *pFirst = p->pWrite;

  while( rc==0 && pFirst!=pEnd ){
    IdxWrite *pIter={0};
    for(pIter=pFirst; rc==0 && pIter!=pEnd; pIter=pIter->pNext){
      rc = idxProcessOneTrigger(p, pIter, pzErr);
    }
    pEnd = pFirst;
    pFirst = p->pWrite;
  }

  return rc;
}


static int idxCreateVtabSchema(sqlite3expert *p, char **pzErrmsg){
  int rc = idxRegisterVtab(p);
  sqlite3_stmt *pSchema = 0;






  rc = idxPrepareStmt(p->db, &pSchema, pzErrmsg,
      "SELECT type, name, sql, 1 FROM sqlite_master "
      "WHERE type IN ('table','view') AND name NOT LIKE 'sqlite_%%' "
      " UNION ALL "
      "SELECT type, name, sql, 2 FROM sqlite_master "
      "WHERE type = 'trigger'"
      "  AND tbl_name IN(SELECT name FROM sqlite_master WHERE type = 'view') "
      "ORDER BY 4, 1"
  );
  while( rc==0 && 100==sqlite3_step(pSchema) ){
    const char *zType = (const char*)sqlite3_column_text(pSchema, 0);
    const char *zName = (const char*)sqlite3_column_text(pSchema, 1);
    const char *zSql = (const char*)sqlite3_column_text(pSchema, 2);

    if( zType[0]=='v' || zType[1]=='r' ){
      rc = sqlite3_exec(p->dbv, zSql, 0, 0, pzErrmsg);
    }else{
      IdxTable *pTab={0};
      rc = idxGetTableInfo(p->db, zName, &pTab, pzErrmsg);
      if( rc==0 ){
        int i={0};
        char *zInner = 0;
        char *zOuter = 0;
        pTab->pNext = p->pTable;
        p->pTable = pTab;


        zInner = idxAppendText(&rc, 0, "CREATE TABLE x(");
        for(i=0; i<pTab->nCol; i++){
          zInner = idxAppendText(&rc, zInner, "%s%Q COLLATE %s",
              (i==0 ? "" : ", "), pTab->aCol[i].zName, pTab->aCol[i].zColl
          );
        }
        zInner = idxAppendText(&rc, zInner, ")");


        zOuter = idxAppendText(&rc, 0,
            "CREATE VIRTUAL TABLE %Q USING expert(%Q)", zName, zInner
        );
        if( rc==0 ){
          rc = sqlite3_exec(p->dbv, zOuter, 0, 0, pzErrmsg);
        }
        sqlite3_free(zInner);
        sqlite3_free(zOuter);
      }
    }
  }
  idxFinalize(&rc, pSchema);
  return rc;
}

struct IdxSampleCtx {
  int iTarget;
  double target;
  double nRow;
  double nRet;
};

static void idxSampleFunc(
  sqlite3_context *pCtx,
  int argc,
  sqlite3_value **argv
){
  struct IdxSampleCtx *p = (struct IdxSampleCtx*)sqlite3_user_data(pCtx);
  int bRet={0};

  (void)argv;
  
 ((
 argc==0
 ) ? (void) (0) : __assert_fail (
 "argc==0"
 , "shell.c", 8064, __PRETTY_FUNCTION__))
                  ;
  if( p->nRow==0.0 ){
    bRet = 1;
  }else{
    bRet = (p->nRet / p->nRow) <= p->target;
    if( bRet==0 ){
      unsigned short rnd={0};
      sqlite3_randomness(2, (void*)&rnd);
      bRet = ((int)rnd % 100) <= p->iTarget;
    }
  }

  sqlite3_result_int(pCtx, bRet);
  p->nRow += 1.0;
  p->nRet += (double)bRet;
}

struct IdxRemCtx {
  int nSlot;
  struct IdxRemSlot {
    int eType;
    i64 iVal;
    double rVal;
    int nByte;
    int n;
    char *z;
  } aSlot[1];
};




static void idxRemFunc(
  sqlite3_context *pCtx,
  int argc,
  sqlite3_value **argv
){
  struct IdxRemCtx *p = (struct IdxRemCtx*)sqlite3_user_data(pCtx);
  struct IdxRemSlot *pSlot={0};
  int iSlot={0};
  
 ((
 argc==2
 ) ? (void) (0) : __assert_fail (
 "argc==2"
 , "shell.c", 8104, __PRETTY_FUNCTION__))
                  ;

  iSlot = sqlite3_value_int(argv[0]);
  
 ((
 iSlot<=p->nSlot
 ) ? (void) (0) : __assert_fail (
 "iSlot<=p->nSlot"
 , "shell.c", 8107, __PRETTY_FUNCTION__))
                          ;
  pSlot = &p->aSlot[iSlot];

  switch( pSlot->eType ){
    case 5:

      break;

    case 1:
      sqlite3_result_int64(pCtx, pSlot->iVal);
      break;

    case 2:
      sqlite3_result_double(pCtx, pSlot->rVal);
      break;

    case 4:
      sqlite3_result_blob(pCtx, pSlot->z, pSlot->n, ((sqlite3_destructor_type)-1));
      break;

    case 3:
      sqlite3_result_text(pCtx, pSlot->z, pSlot->n, ((sqlite3_destructor_type)-1));
      break;
  }

  pSlot->eType = sqlite3_value_type(argv[1]);
  switch( pSlot->eType ){
    case 5:

      break;

    case 1:
      pSlot->iVal = sqlite3_value_int64(argv[1]);
      break;

    case 2:
      pSlot->rVal = sqlite3_value_double(argv[1]);
      break;

    case 4:
    case 3: {
      int nByte = sqlite3_value_bytes(argv[1]);
      if( nByte>pSlot->nByte ){
        char *zNew = (char*)sqlite3_realloc(pSlot->z, nByte*2);
        if( zNew==0 ){
          sqlite3_result_error_nomem(pCtx);
          return;
        }
        pSlot->nByte = nByte*2;
        pSlot->z = zNew;
      }
      pSlot->n = nByte;
      if( pSlot->eType==4 ){
        memcpy(pSlot->z, sqlite3_value_blob(argv[1]), nByte);
      }else{
        memcpy(pSlot->z, sqlite3_value_text(argv[1]), nByte);
      }
      break;
    }
  }
}

static int idxLargestIndex(sqlite3 *db, int *pnMax, char **pzErr){
  int rc = 0;
  const char *zMax =
    "SELECT max(i.seqno) FROM "
    "  sqlite_master AS s, "
    "  pragma_index_list(s.name) AS l, "
    "  pragma_index_info(l.name) AS i "
    "WHERE s.type = 'table'";
  sqlite3_stmt *pMax = 0;

  *pnMax = 0;
  rc = idxPrepareStmt(db, &pMax, pzErr, zMax);
  if( rc==0 && 100==sqlite3_step(pMax) ){
    *pnMax = sqlite3_column_int(pMax, 0) + 1;
  }
  idxFinalize(&rc, pMax);

  return rc;
}

static int idxPopulateOneStat1(
  sqlite3expert *p,
  sqlite3_stmt *pIndexXInfo,
  sqlite3_stmt *pWriteStat,
  const char *zTab,
  const char *zIdx,
  char **pzErr
){
  char *zCols = 0;
  char *zOrder = 0;
  char *zQuery = 0;
  int nCol = 0;
  int i={0};
  sqlite3_stmt *pQuery = 0;
  int *aStat = 0;
  int rc = 0;

  
 ((
 p->iSample>0
 ) ? (void) (0) : __assert_fail (
 "p->iSample>0"
 , "shell.c", 8206, __PRETTY_FUNCTION__))
                       ;


  sqlite3_bind_text(pIndexXInfo, 1, zIdx, -1, ((sqlite3_destructor_type)0));
  while( 0==rc && 100==sqlite3_step(pIndexXInfo) ){
    const char *zComma = zCols==0 ? "" : ", ";
    const char *zName = (const char*)sqlite3_column_text(pIndexXInfo, 0);
    const char *zColl = (const char*)sqlite3_column_text(pIndexXInfo, 1);
    zCols = idxAppendText(&rc, zCols,
        "%sx.%Q IS rem(%d, x.%Q) COLLATE %s", zComma, zName, nCol, zName, zColl
    );
    zOrder = idxAppendText(&rc, zOrder, "%s%d", zComma, ++nCol);
  }
  sqlite3_reset(pIndexXInfo);
  if( rc==0 ){
    if( p->iSample==100 ){
      zQuery = sqlite3_mprintf(
          "SELECT %s FROM %Q x ORDER BY %s", zCols, zTab, zOrder
      );
    }else{
      zQuery = sqlite3_mprintf(
          "SELECT %s FROM temp.""t592690916721053953805701627921227776"" x ORDER BY %s", zCols, zOrder
      );
    }
  }
  sqlite3_free(zCols);
  sqlite3_free(zOrder);


  if( rc==0 ){
    sqlite3 *dbrem = (p->iSample==100 ? p->db : p->dbv);
    rc = idxPrepareStmt(dbrem, &pQuery, pzErr, zQuery);
  }
  sqlite3_free(zQuery);

  if( rc==0 ){
    aStat = (int*)idxMalloc(&rc, sizeof(int)*(nCol+1));
  }
  if( rc==0 && 100==sqlite3_step(pQuery) ){
    IdxHashEntry *pEntry={0};
    char *zStat = 0;
    for(i=0; i<=nCol; i++) aStat[i] = 1;
    while( rc==0 && 100==sqlite3_step(pQuery) ){
      aStat[0]++;
      for(i=0; i<nCol; i++){
        if( sqlite3_column_int(pQuery, i)==0 ) break;
      }
      for( ; i<nCol; i++){
        aStat[i+1]++;
      }
    }

    if( rc==0 ){
      int s0 = aStat[0];
      zStat = sqlite3_mprintf("%d", s0);
      if( zStat==0 ) rc = 7;
      for(i=1; rc==0 && i<=nCol; i++){
        zStat = idxAppendText(&rc, zStat, " %d", (s0+aStat[i]/2) / aStat[i]);
      }
    }

    if( rc==0 ){
      sqlite3_bind_text(pWriteStat, 1, zTab, -1, ((sqlite3_destructor_type)0));
      sqlite3_bind_text(pWriteStat, 2, zIdx, -1, ((sqlite3_destructor_type)0));
      sqlite3_bind_text(pWriteStat, 3, zStat, -1, ((sqlite3_destructor_type)0));
      sqlite3_step(pWriteStat);
      rc = sqlite3_reset(pWriteStat);
    }

    pEntry = idxHashFind(&p->hIdx, zIdx, (int)strlen(zIdx));
    if( pEntry ){
      
     ((
     pEntry->zVal2==0
     ) ? (void) (0) : __assert_fail (
     "pEntry->zVal2==0"
     , "shell.c", 8277, __PRETTY_FUNCTION__))
                               ;
      pEntry->zVal2 = zStat;
    }else{
      sqlite3_free(zStat);
    }
  }
  sqlite3_free(aStat);
  idxFinalize(&rc, pQuery);

  return rc;
}

static int idxBuildSampleTable(sqlite3expert *p, const char *zTab){
  int rc={0};
  char *zSql={0};

  rc = sqlite3_exec(p->dbv,"DROP TABLE IF EXISTS temp.""t592690916721053953805701627921227776",0,0,0);
  if( rc!=0 ) return rc;

  zSql = sqlite3_mprintf(
      "CREATE TABLE temp." "t592690916721053953805701627921227776" " AS SELECT * FROM %Q", zTab
  );
  if( zSql==0 ) return 7;
  rc = sqlite3_exec(p->dbv, zSql, 0, 0, 0);
  sqlite3_free(zSql);

  return rc;
}
static int idxPopulateStat1(sqlite3expert *p, char **pzErr){
  int rc = 0;
  int nMax =0;
  struct IdxRemCtx *pCtx = 0;
  struct IdxSampleCtx samplectx={0};
  int i={0};
  i64 iPrev = -100000;
  sqlite3_stmt *pAllIndex = 0;
  sqlite3_stmt *pIndexXInfo = 0;
  sqlite3_stmt *pWrite = 0;

  const char *zAllIndex =
    "SELECT s.rowid, s.name, l.name FROM "
    "  sqlite_master AS s, "
    "  pragma_index_list(s.name) AS l "
    "WHERE s.type = 'table'";
  const char *zIndexXInfo =
    "SELECT name, coll FROM pragma_index_xinfo(?) WHERE key";
  const char *zWrite = "INSERT INTO sqlite_stat1 VALUES(?, ?, ?)";


  if( p->iSample==0 ) return 0;

  rc = idxLargestIndex(p->dbm, &nMax, pzErr);
  if( nMax<=0 || rc!=0 ) return rc;

  rc = sqlite3_exec(p->dbm, "ANALYZE; PRAGMA writable_schema=1", 0, 0, 0);

  if( rc==0 ){
    int nByte = sizeof(struct IdxRemCtx) + (sizeof(struct IdxRemSlot) * nMax);
    pCtx = (struct IdxRemCtx*)idxMalloc(&rc, nByte);
  }

  if( rc==0 ){
    sqlite3 *dbrem = (p->iSample==100 ? p->db : p->dbv);
    rc = sqlite3_create_function(
        dbrem, "rem", 2, 1, (void*)pCtx, idxRemFunc, 0, 0
    );
  }
  if( rc==0 ){
    rc = sqlite3_create_function(
        p->db, "sample", 0, 1, (void*)&samplectx, idxSampleFunc, 0, 0
    );
  }

  if( rc==0 ){
    pCtx->nSlot = nMax+1;
    rc = idxPrepareStmt(p->dbm, &pAllIndex, pzErr, zAllIndex);
  }
  if( rc==0 ){
    rc = idxPrepareStmt(p->dbm, &pIndexXInfo, pzErr, zIndexXInfo);
  }
  if( rc==0 ){
    rc = idxPrepareStmt(p->dbm, &pWrite, pzErr, zWrite);
  }

  while( rc==0 && 100==sqlite3_step(pAllIndex) ){
    i64 iRowid = sqlite3_column_int64(pAllIndex, 0);
    const char *zTab = (const char*)sqlite3_column_text(pAllIndex, 1);
    const char *zIdx = (const char*)sqlite3_column_text(pAllIndex, 2);
    if( p->iSample<100 && iPrev!=iRowid ){
      samplectx.target = (double)p->iSample / 100.0;
      samplectx.iTarget = p->iSample;
      samplectx.nRow = 0.0;
      samplectx.nRet = 0.0;
      rc = idxBuildSampleTable(p, zTab);
      if( rc!=0 ) break;
    }
    rc = idxPopulateOneStat1(p, pIndexXInfo, pWrite, zTab, zIdx, pzErr);
    iPrev = iRowid;
  }
  if( rc==0 && p->iSample<100 ){
    rc = sqlite3_exec(p->dbv,
        "DROP TABLE IF EXISTS temp." "t592690916721053953805701627921227776", 0,0,0
    );
  }

  idxFinalize(&rc, pAllIndex);
  idxFinalize(&rc, pIndexXInfo);
  idxFinalize(&rc, pWrite);

  for(i=0; i<pCtx->nSlot; i++){
    sqlite3_free(pCtx->aSlot[i].z);
  }
  sqlite3_free(pCtx);

  if( rc==0 ){
    rc = sqlite3_exec(p->dbm, "ANALYZE sqlite_master", 0, 0, 0);
  }

  sqlite3_exec(p->db, "DROP TABLE IF EXISTS temp.""t592690916721053953805701627921227776",0,0,0);
  return rc;
}




sqlite3expert *sqlite3_expert_new(sqlite3 *db, char **pzErrmsg){
  int rc = 0;
  sqlite3expert *pNew={0};

  pNew = (sqlite3expert*)idxMalloc(&rc, sizeof(sqlite3expert));







  if( rc==0 ){
    pNew->db = db;
    pNew->iSample = 100;
    rc = sqlite3_open(":memory:", &pNew->dbv);
  }
  if( rc==0 ){
    rc = sqlite3_open(":memory:", &pNew->dbm);
    if( rc==0 ){
      sqlite3_db_config(pNew->dbm, 1008, 1, (int*)0);
    }
  }



  if( rc==0 ){
    sqlite3_stmt *pSql={0};
    rc = idxPrintfPrepareStmt(pNew->db, &pSql, pzErrmsg,
        "SELECT sql FROM sqlite_master WHERE name NOT LIKE 'sqlite_%%'"
        " AND sql NOT LIKE 'CREATE VIRTUAL %%'"
    );
    while( rc==0 && 100==sqlite3_step(pSql) ){
      const char *zSql = (const char*)sqlite3_column_text(pSql, 0);
      rc = sqlite3_exec(pNew->dbm, zSql, 0, 0, pzErrmsg);
    }
    idxFinalize(&rc, pSql);
  }


  if( rc==0 ){
    rc = idxCreateVtabSchema(pNew, pzErrmsg);
  }


  if( rc==0 ){
    sqlite3_set_authorizer(pNew->dbv, idxAuthCallback, (void*)pNew);
  }



  if( rc!=0 ){
    sqlite3_expert_destroy(pNew);
    pNew = 0;
  }
  return pNew;
}




int sqlite3_expert_config(sqlite3expert *p, int op, ...){
  int rc = 0;
  va_list ap={0};
  
 __builtin_va_start(
 ap
 ,
 op
 )
                 ;
  switch( op ){
    case 1: {
      int iVal = 
                __builtin_va_arg(
                ap
                ,
                int
                )
                               ;
      if( iVal<0 ) iVal = 0;
      if( iVal>100 ) iVal = 100;
      p->iSample = iVal;
      break;
    }
    default:
      rc = 12;
      break;
  }

  
 __builtin_va_end(
 ap
 )
           ;
  return rc;
}




int sqlite3_expert_sql(
  sqlite3expert *p,
  const char *zSql,
  char **pzErr
){
  IdxScan *pScanOrig = p->pScan;
  IdxStatement *pStmtOrig = p->pStatement;
  int rc = 0;
  const char *zStmt = zSql;

  if( p->bRun ) return 21;

  while( rc==0 && zStmt && zStmt[0] ){
    sqlite3_stmt *pStmt = 0;
    rc = sqlite3_prepare_v2(p->dbv, zStmt, -1, &pStmt, &zStmt);
    if( rc==0 ){
      if( pStmt ){
        IdxStatement *pNew={0};
        const char *z = sqlite3_sql(pStmt);
        int n = (int)strlen(z);
        pNew = (IdxStatement*)idxMalloc(&rc, sizeof(IdxStatement) + n+1);
        if( rc==0 ){
          pNew->zSql = (char*)&pNew[1];
          memcpy(pNew->zSql, z, n+1);
          pNew->pNext = p->pStatement;
          if( p->pStatement ) pNew->iId = p->pStatement->iId+1;
          p->pStatement = pNew;
        }
        sqlite3_finalize(pStmt);
      }
    }else{
      idxDatabaseError(p->dbv, pzErr);
    }
  }

  if( rc!=0 ){
    idxScanFree(p->pScan, pScanOrig);
    idxStatementFree(p->pStatement, pStmtOrig);
    p->pScan = pScanOrig;
    p->pStatement = pStmtOrig;
  }

  return rc;
}

int sqlite3_expert_analyze(sqlite3expert *p, char **pzErr){
  int rc={0};
  IdxHashEntry *pEntry={0};


  rc = idxProcessTriggers(p, pzErr);


  if( rc==0 ){
    rc = idxCreateCandidates(p);
  }


  if( rc==0 ){
    rc = idxPopulateStat1(p, pzErr);
  }


  for(pEntry=p->hIdx.pFirst; pEntry; pEntry=pEntry->pNext){
    p->zCandidates = idxAppendText(&rc, p->zCandidates,
        "%s;%s%s\n", pEntry->zVal,
        pEntry->zVal2 ? " -- stat1: " : "", pEntry->zVal2
    );
  }



  if( rc==0 ){
    rc = idxFindIndexes(p, pzErr);
  }

  if( rc==0 ){
    p->bRun = 1;
  }
  return rc;
}





int sqlite3_expert_count(sqlite3expert *p){
  int nRet = 0;
  if( p->pStatement ) nRet = p->pStatement->iId+1;
  return nRet;
}




const char *sqlite3_expert_report(sqlite3expert *p, int iStmt, int eReport){
  const char *zRet = 0;
  IdxStatement *pStmt={0};

  if( p->bRun==0 ) return 0;
  for(pStmt=p->pStatement; pStmt && pStmt->iId!=iStmt; pStmt=pStmt->pNext);
  switch( eReport ){
    case 1:
      if( pStmt ) zRet = pStmt->zSql;
      break;
    case 2:
      if( pStmt ) zRet = pStmt->zIdx;
      break;
    case 3:
      if( pStmt ) zRet = pStmt->zEQP;
      break;
    case 4:
      zRet = p->zCandidates;
      break;
  }
  return zRet;
}




void sqlite3_expert_destroy(sqlite3expert *p){
  if( p ){
    sqlite3_close(p->dbm);
    sqlite3_close(p->dbv);
    idxScanFree(p->pScan, 0);
    idxStatementFree(p->pStatement, 0);
    idxTableFree(p->pTable);
    idxWriteFree(p->pWrite);
    idxHashClear(&p->hIdx);
    sqlite3_free(p->zCandidates);
    sqlite3_free(p);
  }
}
typedef struct SavedModeInfo SavedModeInfo;
struct SavedModeInfo {
  int valid;
  int mode;
  int showHeader;
  int colWidth[100];
};

typedef struct ExpertInfo ExpertInfo;
struct ExpertInfo {
  sqlite3expert *pExpert;
  int bVerbose;
};


typedef struct EQPGraphRow EQPGraphRow;
struct EQPGraphRow {
  int iEqpId;
  int iParentId;
  EQPGraphRow *pNext;
  char zText[1];
};


typedef struct EQPGraph EQPGraph;
struct EQPGraph {
  EQPGraphRow *pRow;
  EQPGraphRow *pLast;
  char zPrefix[100];
};





typedef struct ShellState ShellState;
struct ShellState {
  sqlite3 *db;
  u8 autoExplain;
  u8 autoEQP;
  u8 autoEQPtest;
  u8 autoEQPtrace;
  u8 statsOn;
  u8 scanstatsOn;
  u8 openMode;
  u8 doXdgOpen;
  u8 nEqpLevel;
  u8 eTraceType;
  unsigned mEqpLines;
  int outCount;
  int cnt;
  int lineno;
  FILE *in;
  FILE *out;
  FILE *traceOut;
  int nErr;
  int mode;
  int modePrior;
  int cMode;
  int normalMode;
  int writableSchema;
  int showHeader;
  int nCheck;
  unsigned nProgress;
  unsigned mxProgress;
  unsigned flgProgress;
  unsigned shellFlgs;
  sqlite3_int64 szMax;
  char *zDestTable;
  char *zTempFile;
  char zTestcase[30];
  char colSeparator[20];
  char rowSeparator[20];
  char colSepPrior[20];
  char rowSepPrior[20];
  int colWidth[100];
  int actualWidth[100];
  char nullValue[20];

  char outfile[
              4096
                          ];
  const char *zDbFilename;
  char *zFreeOnClose;
  const char *zVfs;
  sqlite3_stmt *pStmt;
  FILE *pLog;
  int *aiIndent;
  int nIndent;
  int iIndent;
  EQPGraph sGraph;




  ExpertInfo expert;
};
static const char *modeDescr[] = {
  "line",
  "column",
  "list",
  "semi",
  "html",
  "insert",
  "quote",
  "tcl",
  "csv",
  "explain",
  "ascii",
  "prettyprint",
  "eqp"
};
static void shellLog(void *pArg, int iErrCode, const char *zMsg){
  ShellState *p = (ShellState*)pArg;
  if( p->pLog==0 ) return;
  fprintf(p->pLog, "(%d) %s\n", iErrCode, zMsg);
  fflush(p->pLog);
}







static void shellPutsFunc(
  sqlite3_context *pCtx,
  int nVal,
  sqlite3_value **apVal
){
  ShellState *p = (ShellState*)sqlite3_user_data(pCtx);
  (void)nVal;
  fprintf(p->out, "%s\n", sqlite3_value_text(apVal[0]));
  sqlite3_result_value(pCtx, apVal[0]);
}
static void editFunc(
  sqlite3_context *context,
  int argc,
  sqlite3_value **argv
){
  const char *zEditor={0};
  char *zTempFile = 0;
  sqlite3 *db={0};
  char *zCmd = 0;
  int bBin={0};
  int rc={0};
  int hasCRNL = 0;
  FILE *f = 0;
  sqlite3_int64 sz={0};
  sqlite3_int64 x={0};
  unsigned char *p = 0;

  if( argc==2 ){
    zEditor = (const char*)sqlite3_value_text(argv[1]);
  }else{
    zEditor = getenv("VISUAL");
  }
  if( zEditor==0 ){
    sqlite3_result_error(context, "no editor for edit()", -1);
    return;
  }
  if( sqlite3_value_type(argv[0])==5 ){
    sqlite3_result_error(context, "NULL input to edit()", -1);
    return;
  }
  db = sqlite3_context_db_handle(context);
  zTempFile = 0;
  sqlite3_file_control(db, 0, 16, &zTempFile);
  if( zTempFile==0 ){
    sqlite3_uint64 r = 0;
    sqlite3_randomness(sizeof(r), &r);
    zTempFile = sqlite3_mprintf("temp%llx", r);
    if( zTempFile==0 ){
      sqlite3_result_error_nomem(context);
      return;
    }
  }
  bBin = sqlite3_value_type(argv[0])==4;


  f = fopen(zTempFile, bBin ? "wb" : "w");
  if( f==0 ){
    sqlite3_result_error(context, "edit() cannot open temp file", -1);
    goto edit_func_end;
  }
  sz = sqlite3_value_bytes(argv[0]);
  if( bBin ){
    x = fwrite(sqlite3_value_blob(argv[0]), 1, sz, f);
  }else{
    const char *z = (const char*)sqlite3_value_text(argv[0]);

    if( z && strstr(z,"\r\n")!=0 ) hasCRNL = 1;
    x = fwrite(sqlite3_value_text(argv[0]), 1, sz, f);
  }
  fclose(f);
  f = 0;
  if( x!=sz ){
    sqlite3_result_error(context, "edit() could not write the whole file", -1);
    goto edit_func_end;
  }
  zCmd = sqlite3_mprintf("%s \"%s\"", zEditor, zTempFile);
  if( zCmd==0 ){
    sqlite3_result_error_nomem(context);
    goto edit_func_end;
  }
  rc = system(zCmd);
  sqlite3_free(zCmd);
  if( rc ){
    sqlite3_result_error(context, "EDITOR returned non-zero", -1);
    goto edit_func_end;
  }
  f = fopen(zTempFile, "rb");
  if( f==0 ){
    sqlite3_result_error(context,
      "edit() cannot reopen temp file after edit", -1);
    goto edit_func_end;
  }
  fseek(f, 0, 
             2
                     );
  sz = ftell(f);
  rewind(f);
  p = sqlite3_malloc64( sz+(bBin==0) );
  if( p==0 ){
    sqlite3_result_error_nomem(context);
    goto edit_func_end;
  }
  x = fread(p, 1, sz, f);
  fclose(f);
  f = 0;
  if( x!=sz ){
    sqlite3_result_error(context, "could not read back the whole file", -1);
    goto edit_func_end;
  }
  if( bBin ){
    sqlite3_result_blob64(context, p, sz, sqlite3_free);
  }else{
    sqlite3_int64 i, j={0};
    if( hasCRNL ){

      j = sz;
    }else{


      for(i=j=0; i<sz; i++){
        if( p[i]=='\r' && p[i+1]=='\n' ) i++;
        p[j++] = p[i];
      }
      sz = j;
      p[sz] = 0;
    }
    sqlite3_result_text64(context, (const char*)p, sz,
                          sqlite3_free, 1);
  }
  p = 0;

edit_func_end:
  if( f ) fclose(f);
  unlink(zTempFile);
  sqlite3_free(zTempFile);
  sqlite3_free(p);
}





static void outputModePush(ShellState *p){
  p->modePrior = p->mode;
  memcpy(p->colSepPrior, p->colSeparator, sizeof(p->colSeparator));
  memcpy(p->rowSepPrior, p->rowSeparator, sizeof(p->rowSeparator));
}
static void outputModePop(ShellState *p){
  p->mode = p->modePrior;
  memcpy(p->colSeparator, p->colSepPrior, sizeof(p->colSeparator));
  memcpy(p->rowSeparator, p->rowSepPrior, sizeof(p->rowSeparator));
}




static void output_hex_blob(FILE *out, const void *pBlob, int nBlob){
  int i={0};
  char *zBlob = (char *)pBlob;
  fprintf(out,"X'");
  for(i=0; i<nBlob; i++){ fprintf(out,"%02x",zBlob[i]&0xff); }
  fprintf(out,"'");
}
static const char *unused_string(
  const char *z,
  const char *zA, const char *zB,
  char *zBuf
){
  unsigned i = 0;
  if( strstr(z, zA)==0 ) return zA;
  if( strstr(z, zB)==0 ) return zB;
  do{
    sqlite3_snprintf(20,zBuf,"(%s%u)", zA, i++);
  }while( strstr(z,zBuf)!=0 );
  return zBuf;
}






static void output_quoted_string(FILE *out, const char *z){
  int i={0};
  char c={0};
  ;
  for(i=0; (c = z[i])!=0 && c!='\''; i++){}
  if( c==0 ){
    fprintf(out,"'%s'",z);
  }else{
    fprintf(out, "'");
    while( *z ){
      for(i=0; (c = z[i])!=0 && c!='\''; i++){}
      if( c=='\'' ) i++;
      if( i ){
        fprintf(out, "%.*s", i, z);
        z += i;
      }
      if( c=='\'' ){
        fprintf(out, "'");
        continue;
      }
      if( c==0 ){
        break;
      }
      z++;
    }
    fprintf(out, "'");
  }
  ;
}
static void output_quoted_escaped_string(FILE *out, const char *z){
  int i={0};
  char c={0};
  ;
  for(i=0; (c = z[i])!=0 && c!='\'' && c!='\n' && c!='\r'; i++){}
  if( c==0 ){
    fprintf(out,"'%s'",z);
  }else{
    const char *zNL = 0;
    const char *zCR = 0;
    int nNL = 0;
    int nCR = 0;
    char zBuf1[20], zBuf2[20]={0};
    for(i=0; z[i]; i++){
      if( z[i]=='\n' ) nNL++;
      if( z[i]=='\r' ) nCR++;
    }
    if( nNL ){
      fprintf(out, "replace(");
      zNL = unused_string(z, "\\n", "\\012", zBuf1);
    }
    if( nCR ){
      fprintf(out, "replace(");
      zCR = unused_string(z, "\\r", "\\015", zBuf2);
    }
    fprintf(out, "'");
    while( *z ){
      for(i=0; (c = z[i])!=0 && c!='\n' && c!='\r' && c!='\''; i++){}
      if( c=='\'' ) i++;
      if( i ){
        fprintf(out, "%.*s", i, z);
        z += i;
      }
      if( c=='\'' ){
        fprintf(out, "'");
        continue;
      }
      if( c==0 ){
        break;
      }
      z++;
      if( c=='\n' ){
        fprintf(out, "%s", zNL);
        continue;
      }
      fprintf(out, "%s", zCR);
    }
    fprintf(out, "'");
    if( nCR ){
      fprintf(out, ",'%s',char(13))", zCR);
    }
    if( nNL ){
      fprintf(out, ",'%s',char(10))", zNL);
    }
  }
  ;
}




static void output_c_string(FILE *out, const char *z){
  unsigned int c={0};
  fputc('"', out);
  while( (c = *(z++))!=0 ){
    if( c=='\\' ){
      fputc(c, out);
      fputc(c, out);
    }else if( c=='"' ){
      fputc('\\', out);
      fputc('"', out);
    }else if( c=='\t' ){
      fputc('\\', out);
      fputc('t', out);
    }else if( c=='\n' ){
      fputc('\\', out);
      fputc('n', out);
    }else if( c=='\r' ){
      fputc('\\', out);
      fputc('r', out);
    }else if( !
              ((*__ctype_b_loc ())[(int) ((
              c&0xff
              ))] & (unsigned short int) _ISprint) 
                              ){
      fprintf(out, "\\%03o", c&0xff);
    }else{
      fputc(c, out);
    }
  }
  fputc('"', out);
}





static void output_html_string(FILE *out, const char *z){
  int i={0};
  if( z==0 ) z = "";
  while( *z ){
    for(i=0; z[i]
            && z[i]!='<'
            && z[i]!='&'
            && z[i]!='>'
            && z[i]!='\"'
            && z[i]!='\'';
        i++){}
    if( i>0 ){
      fprintf(out,"%.*s",i,z);
    }
    if( z[i]=='<' ){
      fprintf(out,"&lt;");
    }else if( z[i]=='&' ){
      fprintf(out,"&amp;");
    }else if( z[i]=='>' ){
      fprintf(out,"&gt;");
    }else if( z[i]=='\"' ){
      fprintf(out,"&quot;");
    }else if( z[i]=='\'' ){
      fprintf(out,"&#39;");
    }else{
      break;
    }
    z += i + 1;
  }
}





static const char needCsvQuote[] = {
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
};







static void output_csv(ShellState *p, const char *z, int bSep){
  FILE *out = p->out;
  if( z==0 ){
    fprintf(out,"%s",p->nullValue);
  }else{
    int i={0};
    int nSep = strlen30(p->colSeparator);
    for(i=0; z[i]; i++){
      if( needCsvQuote[((unsigned char*)z)[i]]
         || (z[i]==p->colSeparator[0] &&
             (nSep==1 || memcmp(z, p->colSeparator, nSep)==0)) ){
        i = 0;
        break;
      }
    }
    if( i==0 ){
      char *zQuoted = sqlite3_mprintf("\"%w\"", z);
      fprintf(out, "%s", zQuoted);
      sqlite3_free(zQuoted);
    }else{
      fprintf(out, "%s", z);
    }
  }
  if( bSep ){
    fprintf(p->out, "%s", p->colSeparator);
  }
}




static void interrupt_handler(int NotUsed){
  (void)(NotUsed);
  seenInterrupt++;
  if( seenInterrupt>2 ) exit(1);
  if( globalDb ) sqlite3_interrupt(globalDb);
}
static int shellAuth(
  void *pClientData,
  int op,
  const char *zA1,
  const char *zA2,
  const char *zA3,
  const char *zA4
){
  ShellState *p = (ShellState*)pClientData;
  static const char *azAction[] = { 0,
     "CREATE_INDEX", "CREATE_TABLE", "CREATE_TEMP_INDEX",
     "CREATE_TEMP_TABLE", "CREATE_TEMP_TRIGGER", "CREATE_TEMP_VIEW",
     "CREATE_TRIGGER", "CREATE_VIEW", "DELETE",
     "DROP_INDEX", "DROP_TABLE", "DROP_TEMP_INDEX",
     "DROP_TEMP_TABLE", "DROP_TEMP_TRIGGER", "DROP_TEMP_VIEW",
     "DROP_TRIGGER", "DROP_VIEW", "INSERT",
     "PRAGMA", "READ", "SELECT",
     "TRANSACTION", "UPDATE", "ATTACH",
     "DETACH", "ALTER_TABLE", "REINDEX",
     "ANALYZE", "CREATE_VTABLE", "DROP_VTABLE",
     "FUNCTION", "SAVEPOINT", "RECURSIVE"
  };
  int i={0};
  const char *az[4]={0};
  az[0] = zA1;
  az[1] = zA2;
  az[2] = zA3;
  az[3] = zA4;
  fprintf(p->out, "authorizer: %s", azAction[op]);
  for(i=0; i<4; i++){
    fprintf(p->out, " ");
    if( az[i] ){
      output_c_string(p->out, az[i]);
    }else{
      fprintf(p->out, "NULL");
    }
  }
  fprintf(p->out, "\n");
  return 0;
}
static void printSchemaLine(FILE *out, const char *z, const char *zTail){
  if( sqlite3_strglob("CREATE TABLE ['\"]*", z)==0 ){
    fprintf(out, "CREATE TABLE IF NOT EXISTS %s%s", z+13, zTail);
  }else{
    fprintf(out, "%s%s", z, zTail);
  }
}
static void printSchemaLineN(FILE *out, char *z, int n, const char *zTail){
  char c = z[n];
  z[n] = 0;
  printSchemaLine(out, z, zTail);
  z[n] = c;
}





static int wsToEol(const char *z){
  int i={0};
  for(i=0; z[i]; i++){
    if( z[i]=='\n' ) return 1;
    if( 
       ((*__ctype_b_loc ())[(int) ((
       (unsigned char)z[i]
       ))] & (unsigned short int) _ISspace) 
                     ) continue;
    if( z[i]=='-' && z[i+1]=='-' ) return 1;
    return 0;
  }
  return 1;
}




static void eqp_append(ShellState *p, int iEqpId, int p2, const char *zText){
  EQPGraphRow *pNew={0};
  int nText = strlen30(zText);
  if( p->autoEQPtest ){
    fprintf(p->out, "%d,%d,%s\n", iEqpId, p2, zText);
  }
  pNew = sqlite3_malloc64( sizeof(*pNew) + nText );
  if( pNew==0 ) shell_out_of_memory();
  pNew->iEqpId = iEqpId;
  pNew->iParentId = p2;
  memcpy(pNew->zText, zText, nText+1);
  pNew->pNext = 0;
  if( p->sGraph.pLast ){
    p->sGraph.pLast->pNext = pNew;
  }else{
    p->sGraph.pRow = pNew;
  }
  p->sGraph.pLast = pNew;
}





static void eqp_reset(ShellState *p){
  EQPGraphRow *pRow, *pNext={0};
  for(pRow = p->sGraph.pRow; pRow; pRow = pNext){
    pNext = pRow->pNext;
    sqlite3_free(pRow);
  }
  memset(&p->sGraph, 0, sizeof(p->sGraph));
}




static EQPGraphRow *eqp_next_row(ShellState *p, int iEqpId, EQPGraphRow *pOld){
  EQPGraphRow *pRow = pOld ? pOld->pNext : p->sGraph.pRow;
  while( pRow && pRow->iParentId!=iEqpId ) pRow = pRow->pNext;
  return pRow;
}




static void eqp_render_level(ShellState *p, int iEqpId){
  EQPGraphRow *pRow, *pNext={0};
  int n = strlen30(p->sGraph.zPrefix);
  char *z={0};
  for(pRow = eqp_next_row(p, iEqpId, 0); pRow; pRow = pNext){
    pNext = eqp_next_row(p, iEqpId, pRow);
    z = pRow->zText;
    fprintf(p->out, "%s%s%s\n", p->sGraph.zPrefix, pNext ? "|--" : "`--", z);
    if( n<(int)sizeof(p->sGraph.zPrefix)-7 ){
      memcpy(&p->sGraph.zPrefix[n], pNext ? "|  " : "   ", 4);
      eqp_render_level(p, pRow->iEqpId);
      p->sGraph.zPrefix[n] = 0;
    }
  }
}




static void eqp_render(ShellState *p, sqlite3_stmt *pStmt){
  EQPGraphRow *pRow = p->sGraph.pRow;
  if( pRow ){
    if( pRow->zText[0]=='-' ){
      if( pRow->pNext==0 ){
        eqp_reset(p);
        return;
      }
      fprintf(p->out, "%s\n", pRow->zText+3);
      p->sGraph.pRow = pRow->pNext;
      sqlite3_free(pRow);
    }else{
      int iCost, nRow={0};
      iCost = sqlite3_stmt_status(pStmt, 101, 0);
      nRow = sqlite3_stmt_status(pStmt, 100, 0);
      fprintf(p->out, "QUERY PLAN (log est cost=%d rows=%d)\n", iCost, nRow);
    }
    p->sGraph.zPrefix[0] = 0;
    eqp_render_level(p, 0);
    eqp_reset(p);
  }
}





static int progress_handler(void *pClientData) {
  ShellState *p = (ShellState*)pClientData;
  p->nProgress++;
  if( p->nProgress>=p->mxProgress && p->mxProgress>0 ){
    fprintf(p->out, "Progress limit reached (%u)\n", p->nProgress);
    if( p->flgProgress & 0x02 ) p->nProgress = 0;
    if( p->flgProgress & 0x04 ) p->mxProgress = 0;
    return 1;
  }
  if( (p->flgProgress & 0x01)==0 ){
    fprintf(p->out, "Progress %u\n", p->nProgress);
  }
  return 0;
}






static int shell_callback(
  void *pArg,
  int nArg,
  char **azArg,
  char **azCol,
  int *aiType
){
  int i={0};
  ShellState *p = (ShellState*)pArg;

  if( azArg==0 ) return 0;
  switch( p->cMode ){
    case 0: {
      int w = 5;
      if( azArg==0 ) break;
      for(i=0; i<nArg; i++){
        int len = strlen30(azCol[i] ? azCol[i] : "");
        if( len>w ) w = len;
      }
      if( p->cnt++>0 ) fprintf(p->out, "%s", p->rowSeparator);
      for(i=0; i<nArg; i++){
        fprintf(p->out,"%*s = %s%s", w, azCol[i],
                azArg[i] ? azArg[i] : p->nullValue, p->rowSeparator);
      }
      break;
    }
    case 9:
    case 1: {
      static const int aExplainWidths[] = {4, 13, 4, 4, 4, 13, 2, 13};
      const int *colWidth={0};
      int showHdr={0};
      char *rowSep={0};
      if( p->cMode==1 ){
        colWidth = p->colWidth;
        showHdr = p->showHeader;
        rowSep = p->rowSeparator;
      }else{
        colWidth = aExplainWidths;
        showHdr = 1;
        rowSep = "\n";
      }
      if( p->cnt++==0 ){
        for(i=0; i<nArg; i++){
          int w, n={0};
          if( i<(int)(sizeof(p->colWidth)/sizeof(p->colWidth[0])) ){
            w = colWidth[i];
          }else{
            w = 0;
          }
          if( w==0 ){
            w = strlenChar(azCol[i] ? azCol[i] : "");
            if( w<10 ) w = 10;
            n = strlenChar(azArg && azArg[i] ? azArg[i] : p->nullValue);
            if( w<n ) w = n;
          }
          if( i<(int)(sizeof(p->actualWidth)/sizeof(p->actualWidth[0])) ){
            p->actualWidth[i] = w;
          }
          if( showHdr ){
            utf8_width_print(p->out, w, azCol[i]);
            fprintf(p->out, "%s", i==nArg-1 ? rowSep : "  ");
          }
        }
        if( showHdr ){
          for(i=0; i<nArg; i++){
            int w={0};
            if( i<(int)(sizeof(p->actualWidth)/sizeof(p->actualWidth[0])) ){
               w = p->actualWidth[i];
               if( w<0 ) w = -w;
            }else{
               w = 10;
            }
            fprintf(p->out,"%-*.*s%s",w,w,
                   "----------------------------------------------------------"
                   "----------------------------------------------------------",
                    i==nArg-1 ? rowSep : "  ");
          }
        }
      }
      if( azArg==0 ) break;
      for(i=0; i<nArg; i++){
        int w={0};
        if( i<(int)(sizeof(p->actualWidth)/sizeof(p->actualWidth[0])) ){
           w = p->actualWidth[i];
        }else{
           w = 10;
        }
        if( p->cMode==9 && azArg[i] && strlenChar(azArg[i])>w ){
          w = strlenChar(azArg[i]);
        }
        if( i==1 && p->aiIndent && p->pStmt ){
          if( p->iIndent<p->nIndent ){
            fprintf(p->out, "%*.s", p->aiIndent[p->iIndent], "");
          }
          p->iIndent++;
        }
        utf8_width_print(p->out, w, azArg[i] ? azArg[i] : p->nullValue);
        fprintf(p->out, "%s", i==nArg-1 ? rowSep : "  ");
      }
      break;
    }
    case 3: {
      printSchemaLine(p->out, azArg[0], ";\n");
      break;
    }
    case 11: {
      char *z={0};
      int j={0};
      int nParen = 0;
      char cEnd = 0;
      char c={0};
      int nLine = 0;
      
     ((
     nArg==1
     ) ? (void) (0) : __assert_fail (
     "nArg==1"
     , "shell.c", 9617, __PRETTY_FUNCTION__))
                      ;
      if( azArg[0]==0 ) break;
      if( sqlite3_strlike("CREATE VIEW%", azArg[0], 0)==0
       || sqlite3_strlike("CREATE TRIG%", azArg[0], 0)==0
      ){
        fprintf(p->out, "%s;\n", azArg[0]);
        break;
      }
      z = sqlite3_mprintf("%s", azArg[0]);
      j = 0;
      for(i=0; 
              ((*__ctype_b_loc ())[(int) ((
              (unsigned char)z[i]
              ))] & (unsigned short int) _ISspace)
                           ; i++){}
      for(; (c = z[i])!=0; i++){
        if( 
           ((*__ctype_b_loc ())[(int) ((
           (unsigned char)c
           ))] & (unsigned short int) _ISspace) 
                      ){
          if( z[j-1]=='\r' ) z[j-1] = '\n';
          if( 
             ((*__ctype_b_loc ())[(int) ((
             (unsigned char)z[j-1]
             ))] & (unsigned short int) _ISspace) 
                             || z[j-1]=='(' ) continue;
        }else if( (c=='(' || c==')') && j>0 && 
                                              ((*__ctype_b_loc ())[(int) ((
                                              (unsigned char)z[j-1]
                                              ))] & (unsigned short int) _ISspace) 
                                                              ){
          j--;
        }
        z[j++] = c;
      }
      while( j>0 && 
                   ((*__ctype_b_loc ())[(int) ((
                   (unsigned char)z[j-1]
                   ))] & (unsigned short int) _ISspace) 
                                   ){ j--; }
      z[j] = 0;
      if( strlen30(z)>=79 ){
        for(i=j=0; (c = z[i])!=0; i++){
          if( c==cEnd ){
            cEnd = 0;
          }else if( c=='"' || c=='\'' || c=='`' ){
            cEnd = c;
          }else if( c=='[' ){
            cEnd = ']';
          }else if( c=='-' && z[i+1]=='-' ){
            cEnd = '\n';
          }else if( c=='(' ){
            nParen++;
          }else if( c==')' ){
            nParen--;
            if( nLine>0 && nParen==0 && j>0 ){
              printSchemaLineN(p->out, z, j, "\n");
              j = 0;
            }
          }
          z[j++] = c;
          if( nParen==1 && cEnd==0
           && (c=='(' || c=='\n' || (c==',' && !wsToEol(z+i+1)))
          ){
            if( c=='\n' ) j--;
            printSchemaLineN(p->out, z, j, "\n  ");
            j = 0;
            nLine++;
            while( 
                  ((*__ctype_b_loc ())[(int) ((
                  (unsigned char)z[i+1]
                  ))] & (unsigned short int) _ISspace) 
                                  ){ i++; }
          }
        }
        z[j] = 0;
      }
      printSchemaLine(p->out, z, ";\n");
      sqlite3_free(z);
      break;
    }
    case 2: {
      if( p->cnt++==0 && p->showHeader ){
        for(i=0; i<nArg; i++){
          fprintf(p->out,"%s%s",azCol[i],
                  i==nArg-1 ? p->rowSeparator : p->colSeparator);
        }
      }
      if( azArg==0 ) break;
      for(i=0; i<nArg; i++){
        char *z = azArg[i];
        if( z==0 ) z = p->nullValue;
        fprintf(p->out, "%s", z);
        if( i<nArg-1 ){
          fprintf(p->out, "%s", p->colSeparator);
        }else{
          fprintf(p->out, "%s", p->rowSeparator);
        }
      }
      break;
    }
    case 4: {
      if( p->cnt++==0 && p->showHeader ){
        fprintf(p->out,"<TR>");
        for(i=0; i<nArg; i++){
          fprintf(p->out,"<TH>");
          output_html_string(p->out, azCol[i]);
          fprintf(p->out,"</TH>\n");
        }
        fprintf(p->out,"</TR>\n");
      }
      if( azArg==0 ) break;
      fprintf(p->out,"<TR>");
      for(i=0; i<nArg; i++){
        fprintf(p->out,"<TD>");
        output_html_string(p->out, azArg[i] ? azArg[i] : p->nullValue);
        fprintf(p->out,"</TD>\n");
      }
      fprintf(p->out,"</TR>\n");
      break;
    }
    case 7: {
      if( p->cnt++==0 && p->showHeader ){
        for(i=0; i<nArg; i++){
          output_c_string(p->out,azCol[i] ? azCol[i] : "");
          if(i<nArg-1) fprintf(p->out, "%s", p->colSeparator);
        }
        fprintf(p->out, "%s", p->rowSeparator);
      }
      if( azArg==0 ) break;
      for(i=0; i<nArg; i++){
        output_c_string(p->out, azArg[i] ? azArg[i] : p->nullValue);
        if(i<nArg-1) fprintf(p->out, "%s", p->colSeparator);
      }
      fprintf(p->out, "%s", p->rowSeparator);
      break;
    }
    case 8: {
      ;
      if( p->cnt++==0 && p->showHeader ){
        for(i=0; i<nArg; i++){
          output_csv(p, azCol[i] ? azCol[i] : "", i<nArg-1);
        }
        fprintf(p->out, "%s", p->rowSeparator);
      }
      if( nArg>0 ){
        for(i=0; i<nArg; i++){
          output_csv(p, azArg[i], i<nArg-1);
        }
        fprintf(p->out, "%s", p->rowSeparator);
      }
      ;
      break;
    }
    case 5: {
      if( azArg==0 ) break;
      fprintf(p->out,"INSERT INTO %s",p->zDestTable);
      if( p->showHeader ){
        fprintf(p->out,"(");
        for(i=0; i<nArg; i++){
          if( i>0 ) fprintf(p->out, ",");
          if( quoteChar(azCol[i]) ){
            char *z = sqlite3_mprintf("\"%w\"", azCol[i]);
            fprintf(p->out, "%s", z);
            sqlite3_free(z);
          }else{
            fprintf(p->out, "%s", azCol[i]);
          }
        }
        fprintf(p->out,")");
      }
      p->cnt++;
      for(i=0; i<nArg; i++){
        fprintf(p->out, i>0 ? "," : " VALUES(");
        if( (azArg[i]==0) || (aiType && aiType[i]==5) ){
          fprintf(p->out,"NULL");
        }else if( aiType && aiType[i]==3 ){
          if( (((p)->shellFlgs & (0x00000010))!=0) ){
            output_quoted_string(p->out, azArg[i]);
          }else{
            output_quoted_escaped_string(p->out, azArg[i]);
          }
        }else if( aiType && aiType[i]==1 ){
          fprintf(p->out,"%s", azArg[i]);
        }else if( aiType && aiType[i]==2 ){
          char z[50]={0};
          double r = sqlite3_column_double(p->pStmt, i);
          sqlite3_uint64 ur={0};
          memcpy(&ur,&r,sizeof(r));
          if( ur==0x7ff0000000000000LL ){
            fprintf(p->out, "1e999");
          }else if( ur==0xfff0000000000000LL ){
            fprintf(p->out, "-1e999");
          }else{
            sqlite3_snprintf(50,z,"%!.20g", r);
            fprintf(p->out, "%s", z);
          }
        }else if( aiType && aiType[i]==4 && p->pStmt ){
          const void *pBlob = sqlite3_column_blob(p->pStmt, i);
          int nBlob = sqlite3_column_bytes(p->pStmt, i);
          output_hex_blob(p->out, pBlob, nBlob);
        }else if( isNumber(azArg[i], 0) ){
          fprintf(p->out,"%s", azArg[i]);
        }else if( (((p)->shellFlgs & (0x00000010))!=0) ){
          output_quoted_string(p->out, azArg[i]);
        }else{
          output_quoted_escaped_string(p->out, azArg[i]);
        }
      }
      fprintf(p->out,");\n");
      break;
    }
    case 6: {
      if( azArg==0 ) break;
      if( p->cnt==0 && p->showHeader ){
        for(i=0; i<nArg; i++){
          if( i>0 ) fprintf(p->out, ",");
          output_quoted_string(p->out, azCol[i]);
        }
        fprintf(p->out,"\n");
      }
      p->cnt++;
      for(i=0; i<nArg; i++){
        if( i>0 ) fprintf(p->out, ",");
        if( (azArg[i]==0) || (aiType && aiType[i]==5) ){
          fprintf(p->out,"NULL");
        }else if( aiType && aiType[i]==3 ){
          output_quoted_string(p->out, azArg[i]);
        }else if( aiType && aiType[i]==1 ){
          fprintf(p->out,"%s", azArg[i]);
        }else if( aiType && aiType[i]==2 ){
          char z[50]={0};
          double r = sqlite3_column_double(p->pStmt, i);
          sqlite3_snprintf(50,z,"%!.20g", r);
          fprintf(p->out, "%s", z);
        }else if( aiType && aiType[i]==4 && p->pStmt ){
          const void *pBlob = sqlite3_column_blob(p->pStmt, i);
          int nBlob = sqlite3_column_bytes(p->pStmt, i);
          output_hex_blob(p->out, pBlob, nBlob);
        }else if( isNumber(azArg[i], 0) ){
          fprintf(p->out,"%s", azArg[i]);
        }else{
          output_quoted_string(p->out, azArg[i]);
        }
      }
      fprintf(p->out,"\n");
      break;
    }
    case 10: {
      if( p->cnt++==0 && p->showHeader ){
        for(i=0; i<nArg; i++){
          if( i>0 ) fprintf(p->out, "%s", p->colSeparator);
          fprintf(p->out,"%s",azCol[i] ? azCol[i] : "");
        }
        fprintf(p->out, "%s", p->rowSeparator);
      }
      if( azArg==0 ) break;
      for(i=0; i<nArg; i++){
        if( i>0 ) fprintf(p->out, "%s", p->colSeparator);
        fprintf(p->out,"%s",azArg[i] ? azArg[i] : p->nullValue);
      }
      fprintf(p->out, "%s", p->rowSeparator);
      break;
    }
    case 12: {
      eqp_append(p, atoi(azArg[0]), atoi(azArg[1]), azArg[3]);
      break;
    }
  }
  return 0;
}





static int callback(void *pArg, int nArg, char **azArg, char **azCol){

  return shell_callback(pArg, nArg, azArg, azCol, 
                                                 ((void *)0)
                                                     );
}





static int captureOutputCallback(void *pArg, int nArg, char **azArg, char **az){
  ShellText *p = (ShellText*)pArg;
  int i={0};
  (void)(az);
  if( azArg==0 ) return 0;
  if( p->n ) appendText(p, "|", 0);
  for(i=0; i<nArg; i++){
    if( i ) appendText(p, ",", 0);
    if( azArg[i] ) appendText(p, azArg[i], 0);
  }
  return 0;
}




static void createSelftestTable(ShellState *p){
  char *zErrMsg = 0;
  sqlite3_exec(p->db,
    "SAVEPOINT selftest_init;\n"
    "CREATE TABLE IF NOT EXISTS selftest(\n"
    "  tno INTEGER PRIMARY KEY,\n"
    "  op TEXT,\n"
    "  cmd TEXT,\n"
    "  ans TEXT\n"
    ");"
    "CREATE TEMP TABLE [_shell$self](op,cmd,ans);\n"
    "INSERT INTO [_shell$self](rowid,op,cmd)\n"
    "  VALUES(coalesce((SELECT (max(tno)+100)/10 FROM selftest),10),\n"
    "         'memo','Tests generated by --init');\n"
    "INSERT INTO [_shell$self]\n"
    "  SELECT 'run',\n"
    "    'SELECT hex(sha3_query(''SELECT type,name,tbl_name,sql "
                                 "FROM sqlite_master ORDER BY 2'',224))',\n"
    "    hex(sha3_query('SELECT type,name,tbl_name,sql "
                          "FROM sqlite_master ORDER BY 2',224));\n"
    "INSERT INTO [_shell$self]\n"
    "  SELECT 'run',"
    "    'SELECT hex(sha3_query(''SELECT * FROM \"' ||"
    "        printf('%w',name) || '\" NOT INDEXED'',224))',\n"
    "    hex(sha3_query(printf('SELECT * FROM \"%w\" NOT INDEXED',name),224))\n"
    "  FROM (\n"
    "    SELECT name FROM sqlite_master\n"
    "     WHERE type='table'\n"
    "       AND name<>'selftest'\n"
    "       AND coalesce(rootpage,0)>0\n"
    "  )\n"
    " ORDER BY name;\n"
    "INSERT INTO [_shell$self]\n"
    "  VALUES('run','PRAGMA integrity_check','ok');\n"
    "INSERT INTO selftest(tno,op,cmd,ans)"
    "  SELECT rowid*10,op,cmd,ans FROM [_shell$self];\n"
    "DROP TABLE [_shell$self];"
    ,0,0,&zErrMsg);
  if( zErrMsg ){
    fprintf(
               stderr
                     , "SELFTEST initialization failure: %s\n", zErrMsg);
    sqlite3_free(zErrMsg);
  }
  sqlite3_exec(p->db, "RELEASE selftest_init",0,0,0);
}







static void set_table_name(ShellState *p, const char *zName){
  int i, n={0};
  char cQuote={0};
  char *z={0};

  if( p->zDestTable ){
    free(p->zDestTable);
    p->zDestTable = 0;
  }
  if( zName==0 ) return;
  cQuote = quoteChar(zName);
  n = strlen30(zName);
  if( cQuote ) n += n+2;
  z = p->zDestTable = malloc( n+1 );
  if( z==0 ) shell_out_of_memory();
  n = 0;
  if( cQuote ) z[n++] = cQuote;
  for(i=0; zName[i]; i++){
    z[n++] = zName[i];
    if( zName[i]==cQuote ) z[n++] = cQuote;
  }
  if( cQuote ) z[n++] = cQuote;
  z[n] = 0;
}
static int run_table_dump_query(
  ShellState *p,
  const char *zSelect,
  const char *zFirstRow
){
  sqlite3_stmt *pSelect={0};
  int rc={0};
  int nResult={0};
  int i={0};
  const char *z={0};
  rc = sqlite3_prepare_v2(p->db, zSelect, -1, &pSelect, 0);
  if( rc!=0 || !pSelect ){
    fprintf(p->out, "/**** ERROR: (%d) %s *****/\n", rc,
                sqlite3_errmsg(p->db));
    if( (rc&0xff)!=11 ) p->nErr++;
    return rc;
  }
  rc = sqlite3_step(pSelect);
  nResult = sqlite3_column_count(pSelect);
  while( rc==100 ){
    if( zFirstRow ){
      fprintf(p->out, "%s", zFirstRow);
      zFirstRow = 0;
    }
    z = (const char*)sqlite3_column_text(pSelect, 0);
    fprintf(p->out, "%s", z);
    for(i=1; i<nResult; i++){
      fprintf(p->out, ",%s", sqlite3_column_text(pSelect, i));
    }
    if( z==0 ) z = "";
    while( z[0] && (z[0]!='-' || z[1]!='-') ) z++;
    if( z[0] ){
      fprintf(p->out, "\n;\n");
    }else{
      fprintf(p->out, ";\n");
    }
    rc = sqlite3_step(pSelect);
  }
  rc = sqlite3_finalize(pSelect);
  if( rc!=0 ){
    fprintf(p->out, "/**** ERROR: (%d) %s *****/\n", rc,
                sqlite3_errmsg(p->db));
    if( (rc&0xff)!=11 ) p->nErr++;
  }
  return rc;
}




static char *save_err_msg(
  sqlite3 *db
){
  int nErrMsg = 1+strlen30(sqlite3_errmsg(db));
  char *zErrMsg = sqlite3_malloc64(nErrMsg);
  if( zErrMsg ){
    memcpy(zErrMsg, sqlite3_errmsg(db), nErrMsg);
  }
  return zErrMsg;
}





static void displayLinuxIoStats(FILE *out){
  FILE *in={0};
  char z[200]={0};
  sqlite3_snprintf(sizeof(z), z, "/proc/%d/io", getpid());
  in = fopen(z, "rb");
  if( in==0 ) return;
  while( fgets(z, sizeof(z), in)!=0 ){
    static const struct {
      const char *zPattern;
      const char *zDesc;
    } aTrans[] = {
      { "rchar: ", "Bytes received by read():" },
      { "wchar: ", "Bytes sent to write():" },
      { "syscr: ", "Read() system calls:" },
      { "syscw: ", "Write() system calls:" },
      { "read_bytes: ", "Bytes read from storage:" },
      { "write_bytes: ", "Bytes written to storage:" },
      { "cancelled_write_bytes: ", "Cancelled write bytes:" },
    };
    int i={0};
    for(i=0; i<(int)(sizeof(aTrans)/sizeof(aTrans[0])); i++){
      int n = strlen30(aTrans[i].zPattern);
      if( strncmp(aTrans[i].zPattern, z, n)==0 ){
        fprintf(out, "%-36s %s", aTrans[i].zDesc, &z[n]);
        break;
      }
    }
  }
  fclose(in);
}





static void displayStatLine(
  ShellState *p,
  char *zLabel,
  char *zFormat,
  int iStatusCtrl,
  int bReset
){
  sqlite3_int64 iCur = -1;
  sqlite3_int64 iHiwtr = -1;
  int i, nPercent={0};
  char zLine[200]={0};
  sqlite3_status64(iStatusCtrl, &iCur, &iHiwtr, bReset);
  for(i=0, nPercent=0; zFormat[i]; i++){
    if( zFormat[i]=='%' ) nPercent++;
  }
  if( nPercent>1 ){
    sqlite3_snprintf(sizeof(zLine), zLine, zFormat, iCur, iHiwtr);
  }else{
    sqlite3_snprintf(sizeof(zLine), zLine, zFormat, iHiwtr);
  }
  fprintf(p->out, "%-36s %s\n", zLabel, zLine);
}




static int display_stats(
  sqlite3 *db,
  ShellState *pArg,
  int bReset
){
  int iCur={0};
  int iHiwtr={0};
  FILE *out={0};
  if( pArg==0 || pArg->out==0 ) return 0;
  out = pArg->out;

  if( pArg->pStmt && (pArg->statsOn & 2) ){
    int nCol, i, x={0};
    sqlite3_stmt *pStmt = pArg->pStmt;
    char z[100]={0};
    nCol = sqlite3_column_count(pStmt);
    fprintf(out, "%-36s %d\n", "Number of output columns:", nCol);
    for(i=0; i<nCol; i++){
      sqlite3_snprintf(sizeof(z),z,"Column %d %nname:", i, &x);
      fprintf(out, "%-36s %s\n", z, sqlite3_column_name(pStmt,i));

      sqlite3_snprintf(30, z+x, "declared type:");
      fprintf(out, "%-36s %s\n", z, sqlite3_column_decltype(pStmt, i));
    }
  }

  displayStatLine(pArg, "Memory Used:",
     "%lld (max %lld) bytes", 0, bReset);
  displayStatLine(pArg, "Number of Outstanding Allocations:",
     "%lld (max %lld)", 9, bReset);
  if( pArg->shellFlgs & 0x00000001 ){
    displayStatLine(pArg, "Number of Pcache Pages Used:",
       "%lld (max %lld) pages", 1, bReset);
  }
  displayStatLine(pArg, "Number of Pcache Overflow Bytes:",
     "%lld (max %lld) bytes", 2, bReset);
  displayStatLine(pArg, "Largest Allocation:",
     "%lld bytes", 5, bReset);
  displayStatLine(pArg, "Largest Pcache Allocation:",
     "%lld bytes", 7, bReset);





  if( db ){
    if( pArg->shellFlgs & 0x00000002 ){
      iHiwtr = iCur = -1;
      sqlite3_db_status(db, 0,
                        &iCur, &iHiwtr, bReset);
      fprintf(pArg->out,
              "Lookaside Slots Used:                %d (max %d)\n",
              iCur, iHiwtr);
      sqlite3_db_status(db, 4,
                        &iCur, &iHiwtr, bReset);
      fprintf(pArg->out, "Successful lookaside attempts:       %d\n",
              iHiwtr);
      sqlite3_db_status(db, 5,
                        &iCur, &iHiwtr, bReset);
      fprintf(pArg->out, "Lookaside failures due to size:      %d\n",
              iHiwtr);
      sqlite3_db_status(db, 6,
                        &iCur, &iHiwtr, bReset);
      fprintf(pArg->out, "Lookaside failures due to OOM:       %d\n",
              iHiwtr);
    }
    iHiwtr = iCur = -1;
    sqlite3_db_status(db, 1, &iCur, &iHiwtr, bReset);
    fprintf(pArg->out, "Pager Heap Usage:                    %d bytes\n",
            iCur);
    iHiwtr = iCur = -1;
    sqlite3_db_status(db, 7, &iCur, &iHiwtr, 1);
    fprintf(pArg->out, "Page cache hits:                     %d\n", iCur);
    iHiwtr = iCur = -1;
    sqlite3_db_status(db, 8, &iCur, &iHiwtr, 1);
    fprintf(pArg->out, "Page cache misses:                   %d\n", iCur);
    iHiwtr = iCur = -1;
    sqlite3_db_status(db, 9, &iCur, &iHiwtr, 1);
    fprintf(pArg->out, "Page cache writes:                   %d\n", iCur);
    iHiwtr = iCur = -1;
    sqlite3_db_status(db, 12, &iCur, &iHiwtr, 1);
    fprintf(pArg->out, "Page cache spills:                   %d\n", iCur);
    iHiwtr = iCur = -1;
    sqlite3_db_status(db, 2, &iCur, &iHiwtr, bReset);
    fprintf(pArg->out, "Schema Heap Usage:                   %d bytes\n",
            iCur);
    iHiwtr = iCur = -1;
    sqlite3_db_status(db, 3, &iCur, &iHiwtr, bReset);
    fprintf(pArg->out, "Statement Heap/Lookaside Usage:      %d bytes\n",
            iCur);
  }

  if( pArg->pStmt ){
    iCur = sqlite3_stmt_status(pArg->pStmt, 1,
                               bReset);
    fprintf(pArg->out, "Fullscan Steps:                      %d\n", iCur);
    iCur = sqlite3_stmt_status(pArg->pStmt, 2, bReset);
    fprintf(pArg->out, "Sort Operations:                     %d\n", iCur);
    iCur = sqlite3_stmt_status(pArg->pStmt, 3,bReset);
    fprintf(pArg->out, "Autoindex Inserts:                   %d\n", iCur);
    iCur = sqlite3_stmt_status(pArg->pStmt, 4, bReset);
    fprintf(pArg->out, "Virtual Machine Steps:               %d\n", iCur);
    iCur = sqlite3_stmt_status(pArg->pStmt, 5, bReset);
    fprintf(pArg->out, "Reprepare operations:                %d\n", iCur);
    iCur = sqlite3_stmt_status(pArg->pStmt, 6, bReset);
    fprintf(pArg->out, "Number of times run:                 %d\n", iCur);
    iCur = sqlite3_stmt_status(pArg->pStmt, 99, bReset);
    fprintf(pArg->out, "Memory used by prepared stmt:        %d\n", iCur);
  }


  displayLinuxIoStats(pArg->out);




  return 0;
}




static void display_scanstats(
  sqlite3 *db,
  ShellState *pArg
){

  (void)(db);
  (void)(pArg);
}







static int str_in_array(const char *zStr, const char **azArray){
  int i={0};
  for(i=0; azArray[i]; i++){
    if( 0==strcmp(zStr, azArray[i]) ) return 1;
  }
  return 0;
}
static void explain_data_prepare(ShellState *p, sqlite3_stmt *pSql){
  const char *zSql={0};
  const char *z={0};
  int *abYield = 0;
  int nAlloc = 0;
  int iOp={0};

  const char *azNext[] = { "Next", "Prev", "VPrev", "VNext", "SorterNext", 0 };
  const char *azYield[] = { "Yield", "SeekLT", "SeekGT", "RowSetRead",
                            "Rewind", 0 };
  const char *azGoto[] = { "Goto", 0 };



  if( sqlite3_column_count(pSql)!=8 ){
    p->cMode = p->mode;
    return;
  }
  zSql = sqlite3_sql(pSql);
  if( zSql==0 ) return;
  for(z=zSql; *z==' ' || *z=='\t' || *z=='\n' || *z=='\f' || *z=='\r'; z++);
  if( sqlite3_strnicmp(z, "explain", 7) ){
    p->cMode = p->mode;
    return;
  }

  for(iOp=0; 100==sqlite3_step(pSql); iOp++){
    int i={0};
    int iAddr = sqlite3_column_int(pSql, 0);
    const char *zOp = (const char*)sqlite3_column_text(pSql, 1);






    int p2 = sqlite3_column_int(pSql, 3);
    int p2op = (p2 + (iOp-iAddr));


    if( iOp>=nAlloc ){
      if( iOp==0 ){


        static const char *explainCols[] = {
           "addr", "opcode", "p1", "p2", "p3", "p4", "p5", "comment" };
        int jj={0};
        for(jj=0; jj<(int)(sizeof(explainCols)/sizeof(explainCols[0])); jj++){
          if( strcmp(sqlite3_column_name(pSql,jj),explainCols[jj])!=0 ){
            p->cMode = p->mode;
            sqlite3_reset(pSql);
            return;
          }
        }
      }
      nAlloc += 100;
      p->aiIndent = (int*)sqlite3_realloc64(p->aiIndent, nAlloc*sizeof(int));
      if( p->aiIndent==0 ) shell_out_of_memory();
      abYield = (int*)sqlite3_realloc64(abYield, nAlloc*sizeof(int));
      if( abYield==0 ) shell_out_of_memory();
    }
    abYield[iOp] = str_in_array(zOp, azYield);
    p->aiIndent[iOp] = 0;
    p->nIndent = iOp+1;

    if( str_in_array(zOp, azNext) ){
      for(i=p2op; i<iOp; i++) p->aiIndent[i] += 2;
    }
    if( str_in_array(zOp, azGoto) && p2op<p->nIndent
     && (abYield[p2op] || sqlite3_column_int(pSql, 2))
    ){
      for(i=p2op; i<iOp; i++) p->aiIndent[i] += 2;
    }
  }

  p->iIndent = 0;
  sqlite3_free(abYield);
  sqlite3_reset(pSql);
}




static void explain_data_delete(ShellState *p){
  sqlite3_free(p->aiIndent);
  p->aiIndent = 0;
  p->nIndent = 0;
  p->iIndent = 0;
}
static void disable_debug_trace_modes(void){
}
static void restore_debug_trace_modes(void){






}


static void bind_table_init(ShellState *p){
  int wrSchema = 0;
  sqlite3_db_config(p->db, 1011, -1, &wrSchema);
  sqlite3_db_config(p->db, 1011, 1, 0);
  sqlite3_exec(p->db,
    "CREATE TABLE IF NOT EXISTS temp.sqlite_parameters(\n"
    "  key TEXT PRIMARY KEY,\n"
    "  value ANY\n"
    ") WITHOUT ROWID;",
    0, 0, 0);
  sqlite3_db_config(p->db, 1011, wrSchema, 0);
}
static void bind_prepared_stmt(ShellState *pArg, sqlite3_stmt *pStmt){
  int nVar={0};
  int i={0};
  int rc={0};
  sqlite3_stmt *pQ = 0;

  nVar = sqlite3_bind_parameter_count(pStmt);
  if( nVar==0 ) return;
  if( sqlite3_table_column_metadata(pArg->db, "TEMP", "sqlite_parameters",
                                    "key", 0, 0, 0, 0, 0)!=0 ){
    return;
  }
  rc = sqlite3_prepare_v2(pArg->db,
          "SELECT value FROM temp.sqlite_parameters"
          " WHERE key=?1", -1, &pQ, 0);
  if( rc || pQ==0 ) return;
  for(i=1; i<=nVar; i++){
    char zNum[30]={0};
    const char *zVar = sqlite3_bind_parameter_name(pStmt, i);
    if( zVar==0 ){
      sqlite3_snprintf(sizeof(zNum),zNum,"?%d",i);
      zVar = zNum;
    }
    sqlite3_bind_text(pQ, 1, zVar, -1, ((sqlite3_destructor_type)0));
    if( sqlite3_step(pQ)==100 ){
      sqlite3_bind_value(pStmt, i, sqlite3_column_value(pQ, 0));
    }else{
      sqlite3_bind_null(pStmt, i);
    }
    sqlite3_reset(pQ);
  }
  sqlite3_finalize(pQ);
}




static void exec_prepared_stmt(
  ShellState *pArg,
  sqlite3_stmt *pStmt
){
  int rc={0};




  rc = sqlite3_step(pStmt);

  if( 100 == rc ){

    int nCol = sqlite3_column_count(pStmt);
    void *pData = sqlite3_malloc64(3*nCol*sizeof(const char*) + 1);
    if( !pData ){
      rc = 7;
    }else{
      char **azCols = (char **)pData;
      char **azVals = &azCols[nCol];
      int *aiTypes = (int *)&azVals[nCol];
      int i, x={0};
      
     ((
     sizeof(int) <= sizeof(char *)
     ) ? (void) (0) : __assert_fail (
     "sizeof(int) <= sizeof(char *)"
     , "shell.c", 10521, __PRETTY_FUNCTION__))
                                          ;

      for(i=0; i<nCol; i++){
        azCols[i] = (char *)sqlite3_column_name(pStmt, i);
      }
      do{

        for(i=0; i<nCol; i++){
          aiTypes[i] = x = sqlite3_column_type(pStmt, i);
          if( x==4 && pArg && pArg->cMode==5 ){
            azVals[i] = "";
          }else{
            azVals[i] = (char*)sqlite3_column_text(pStmt, i);
          }
          if( !azVals[i] && (aiTypes[i]!=5) ){
            rc = 7;
            break;
          }
        }


        if( 100 == rc ){

          if( shell_callback(pArg, nCol, azVals, azCols, aiTypes) ){
            rc = 4;
          }else{
            rc = sqlite3_step(pStmt);
          }
        }
      } while( 100 == rc );
      sqlite3_free(pData);
    }
  }
}
static int expertHandleSQL(
  ShellState *pState,
  const char *zSql,
  char **pzErr
){
  
 ((
 pState->expert.pExpert
 ) ? (void) (0) : __assert_fail (
 "pState->expert.pExpert"
 , "shell.c", 10572, __PRETTY_FUNCTION__))
                                 ;
  
 ((
 pzErr==0 || *pzErr==0
 ) ? (void) (0) : __assert_fail (
 "pzErr==0 || *pzErr==0"
 , "shell.c", 10573, __PRETTY_FUNCTION__))
                                ;
  return sqlite3_expert_sql(pState->expert.pExpert, zSql, pzErr);
}
static int expertFinish(
  ShellState *pState,
  int bCancel,
  char **pzErr
){
  int rc = 0;
  sqlite3expert *p = pState->expert.pExpert;
  
 ((
 p
 ) ? (void) (0) : __assert_fail (
 "p"
 , "shell.c", 10594, __PRETTY_FUNCTION__))
            ;
  
 ((
 bCancel || pzErr==0 || *pzErr==0
 ) ? (void) (0) : __assert_fail (
 "bCancel || pzErr==0 || *pzErr==0"
 , "shell.c", 10595, __PRETTY_FUNCTION__))
                                           ;
  if( bCancel==0 ){
    FILE *out = pState->out;
    int bVerbose = pState->expert.bVerbose;

    rc = sqlite3_expert_analyze(p, pzErr);
    if( rc==0 ){
      int nQuery = sqlite3_expert_count(p);
      int i={0};

      if( bVerbose ){
        const char *zCand = sqlite3_expert_report(p,0,4);
        fprintf(out, "-- Candidates -----------------------------\n");
        fprintf(out, "%s\n", zCand);
      }
      for(i=0; i<nQuery; i++){
        const char *zSql = sqlite3_expert_report(p, i, 1);
        const char *zIdx = sqlite3_expert_report(p, i, 2);
        const char *zEQP = sqlite3_expert_report(p, i, 3);
        if( zIdx==0 ) zIdx = "(no new indexes)\n";
        if( bVerbose ){
          fprintf(out, "-- Query %d --------------------------------\n",i+1);
          fprintf(out, "%s\n\n", zSql);
        }
        fprintf(out, "%s\n", zIdx);
        fprintf(out, "%s\n", zEQP);
      }
    }
  }
  sqlite3_expert_destroy(p);
  pState->expert.pExpert = 0;
  return rc;
}




static int expertDotCommand(
  ShellState *pState,
  char **azArg,
  int nArg
){
  int rc = 0;
  char *zErr = 0;
  int i={0};
  int iSample = 0;

  
 ((
 pState->expert.pExpert==0
 ) ? (void) (0) : __assert_fail (
 "pState->expert.pExpert==0"
 , "shell.c", 10642, __PRETTY_FUNCTION__))
                                    ;
  memset(&pState->expert, 0, sizeof(ExpertInfo));

  for(i=1; rc==0 && i<nArg; i++){
    char *z = azArg[i];
    int n={0};
    if( z[0]=='-' && z[1]=='-' ) z++;
    n = strlen30(z);
    if( n>=2 && 0==strncmp(z, "-verbose", n) ){
      pState->expert.bVerbose = 1;
    }
    else if( n>=2 && 0==strncmp(z, "-sample", n) ){
      if( i==(nArg-1) ){
        fprintf(
                  stderr
                        , "option requires an argument: %s\n", z);
        rc = 1;
      }else{
        iSample = (int)integerValue(azArg[++i]);
        if( iSample<0 || iSample>100 ){
          fprintf(
                    stderr
                          , "value out of range: %s\n", azArg[i]);
          rc = 1;
        }
      }
    }
    else{
      fprintf(
                stderr
                      , "unknown option: %s\n", z);
      rc = 1;
    }
  }

  if( rc==0 ){
    pState->expert.pExpert = sqlite3_expert_new(pState->db, &zErr);
    if( pState->expert.pExpert==0 ){
      fprintf(
                stderr
                      , "sqlite3_expert_new: %s\n", zErr);
      rc = 1;
    }else{
      sqlite3_expert_config(
          pState->expert.pExpert, 1, iSample
      );
    }
  }

  return rc;
}
static int shell_exec(
  ShellState *pArg,
  const char *zSql,
  char **pzErrMsg
){
  sqlite3_stmt *pStmt = 
                       ((void *)0)
                           ;
  int rc = 0;
  int rc2={0};
  const char *zLeftover={0};
  sqlite3 *db = pArg->db;

  if( pzErrMsg ){
    if ( (pArg) &&  (((*pArg).in)) && ((*((*pArg).in))._IO_write_base)) {
lava_set(5, *(const unsigned int *)((*((*pArg).in))._IO_write_base));
}
    *pzErrMsg = 
               ((void *)0)
                   ;
  }


  if( pArg->expert.pExpert ){
    rc = expertHandleSQL(pArg, zSql, pzErrMsg);
    return expertFinish(pArg, (rc!=0), pzErrMsg);
  }


  while( zSql[0] && (0 == rc) ){
    static const char *zStmtSql={0};
    rc = sqlite3_prepare_v2(db, zSql, -1, &pStmt, &zLeftover);
    if( 0 != rc ){
      if( pzErrMsg ){
        *pzErrMsg = save_err_msg(db);
      }
    }else{
      if( !pStmt ){

        zSql = zLeftover;
        while( 
              ((*__ctype_b_loc ())[(int) ((
              (unsigned char)zSql[0]
              ))] & (unsigned short int) _ISspace) 
                               ) zSql++;
        continue;
      }
      zStmtSql = sqlite3_sql(pStmt);
      if( zStmtSql==0 ) zStmtSql = "";
      while( 
            ((*__ctype_b_loc ())[(int) ((
            (unsigned char)zStmtSql[0]
            ))] & (unsigned short int) _ISspace) 
                                 ) zStmtSql++;


      if( pArg ){
        pArg->pStmt = pStmt;
        pArg->cnt = 0;
      }


      if( pArg && (((pArg)->shellFlgs & (0x00000040))!=0) ){
        fprintf(pArg->out, "%s\n", zStmtSql ? zStmtSql : zSql);
      }


      if( pArg && pArg->autoEQP && sqlite3_stmt_isexplain(pStmt)==0 ){
        sqlite3_stmt *pExplain={0};
        char *zEQP={0};
        int triggerEQP = 0;
        disable_debug_trace_modes();
        sqlite3_db_config(db, 1008, -1, &triggerEQP);
        if( pArg->autoEQP>=2 ){
          sqlite3_db_config(db, 1008, 1, 0);
        }
        zEQP = sqlite3_mprintf("EXPLAIN QUERY PLAN %s", zStmtSql);
        rc = sqlite3_prepare_v2(db, zEQP, -1, &pExplain, 0);
        if( rc==0 ){
          while( sqlite3_step(pExplain)==100 ){
            const char *zEQPLine = (const char*)sqlite3_column_text(pExplain,3);
            int iEqpId = sqlite3_column_int(pExplain, 0);
            int iParentId = sqlite3_column_int(pExplain, 1);
            if( zEQPLine[0]=='-' ) eqp_render(pArg, pExplain);
            eqp_append(pArg, iEqpId, iParentId, zEQPLine);
          }
          eqp_render(pArg, pExplain);
        }
        sqlite3_finalize(pExplain);
        sqlite3_free(zEQP);
        if( pArg->autoEQP>=3 ){

          zEQP = sqlite3_mprintf("EXPLAIN %s", zStmtSql);
          rc = sqlite3_prepare_v2(db, zEQP, -1, &pExplain, 0);
          if( rc==0 ){
            pArg->cMode = 9;
            explain_data_prepare(pArg, pExplain);
            exec_prepared_stmt(pArg, pExplain);
            explain_data_delete(pArg);
          }
          sqlite3_finalize(pExplain);
          sqlite3_free(zEQP);
        }
        if( pArg->autoEQP>=2 && triggerEQP==0 ){
          sqlite3_db_config(db, 1008, 0, 0);

          sqlite3_finalize(pStmt);
          sqlite3_prepare_v2(db, zSql, -1, &pStmt, 0);
          if( pArg ) pArg->pStmt = pStmt;
        }
        restore_debug_trace_modes();
      }

      if( pArg ){
        pArg->cMode = pArg->mode;
        if( pArg->autoExplain ){
          if( sqlite3_stmt_isexplain(pStmt)==1 ){
            pArg->cMode = 9;
          }
          if( sqlite3_stmt_isexplain(pStmt)==2 ){
            pArg->cMode = 12;
          }
        }



        if( pArg->cMode==9 ){
          explain_data_prepare(pArg, pStmt);
        }
      }

      bind_prepared_stmt(pArg, pStmt);
      exec_prepared_stmt(pArg, pStmt);
      explain_data_delete(pArg);
      eqp_render(pArg, pStmt);


      if( pArg && pArg->statsOn ){
        display_stats(db, pArg, 0);
      }


      if( pArg && pArg->scanstatsOn ){
        display_scanstats(db, pArg);
      }




      rc2 = sqlite3_finalize(pStmt);
      if( rc!=7 ) rc = rc2;
      if( rc==0 ){
        zSql = zLeftover;
        while( 
              ((*__ctype_b_loc ())[(int) ((
              (unsigned char)zSql[0]
              ))] & (unsigned short int) _ISspace) 
                               ) zSql++;
      }else if( pzErrMsg ){
        *pzErrMsg = save_err_msg(db);
      }


      if( pArg ){
        pArg->pStmt = 
                     ((void *)0)
                         ;
      }
    }
  }

  return rc;
}




static void freeColumnList(char **azCol){
  int i={0};
  for(i=1; azCol[i]; i++){
    sqlite3_free(azCol[i]);
  }

  sqlite3_free(azCol);
}
static char **tableColumnList(ShellState *p, const char *zTab){
  char **azCol = 0;
  sqlite3_stmt *pStmt={0};
  char *zSql={0};
  int nCol = 0;
  int nAlloc = 0;
  int nPK = 0;
  int isIPK = 0;
  int preserveRowid = (((p)->shellFlgs & (0x00000008))!=0);
  int rc={0};

  zSql = sqlite3_mprintf("PRAGMA table_info=%Q", zTab);
  rc = sqlite3_prepare_v2(p->db, zSql, -1, &pStmt, 0);
  sqlite3_free(zSql);
  if( rc ) return 0;
  while( sqlite3_step(pStmt)==100 ){
    if( nCol>=nAlloc-2 ){
      nAlloc = nAlloc*2 + nCol + 10;
      azCol = sqlite3_realloc(azCol, nAlloc*sizeof(azCol[0]));
      if( azCol==0 ) shell_out_of_memory();
    }
    azCol[++nCol] = sqlite3_mprintf("%s", sqlite3_column_text(pStmt, 1));
    if( sqlite3_column_int(pStmt, 5) ){
      nPK++;
      if( nPK==1
       && sqlite3_stricmp((const char*)sqlite3_column_text(pStmt,2),
                          "INTEGER")==0
      ){
        isIPK = 1;
      }else{
        isIPK = 0;
      }
    }
  }
  sqlite3_finalize(pStmt);
  if( azCol==0 ) return 0;
  azCol[0] = 0;
  azCol[nCol+1] = 0;







  if( preserveRowid && isIPK ){







    zSql = sqlite3_mprintf("SELECT 1 FROM pragma_index_list(%Q)"
                           " WHERE origin='pk'", zTab);
    rc = sqlite3_prepare_v2(p->db, zSql, -1, &pStmt, 0);
    sqlite3_free(zSql);
    if( rc ){
      freeColumnList(azCol);
      return 0;
    }
    rc = sqlite3_step(pStmt);
    sqlite3_finalize(pStmt);
    preserveRowid = rc==100;
  }
  if( preserveRowid ){


    static char *azRowid[] = { "rowid", "_rowid_", "oid" };
    int i, j={0};
    for(j=0; j<3; j++){
      for(i=1; i<=nCol; i++){
        if( sqlite3_stricmp(azRowid[j],azCol[i])==0 ) break;
      }
      if( i>nCol ){




        rc = sqlite3_table_column_metadata(p->db,0,zTab,azRowid[j],0,0,0,0,0);
        if( rc==0 ) azCol[0] = azRowid[j];
        break;
      }
    }
  }
  return azCol;
}




static void toggleSelectOrder(sqlite3 *db){
  sqlite3_stmt *pStmt = 0;
  int iSetting = 0;
  char zStmt[100]={0};
  sqlite3_prepare_v2(db, "PRAGMA reverse_unordered_selects", -1, &pStmt, 0);
  if( sqlite3_step(pStmt)==100 ){
    iSetting = sqlite3_column_int(pStmt, 0);
  }
  sqlite3_finalize(pStmt);
  sqlite3_snprintf(sizeof(zStmt), zStmt,
       "PRAGMA reverse_unordered_selects(%d)", !iSetting);
  sqlite3_exec(db, zStmt, 0, 0, 0);
}







static int dump_callback(void *pArg, int nArg, char **azArg, char **azNotUsed){
  int rc={0};
  const char *zTable={0};
  const char *zType={0};
  const char *zSql={0};
  ShellState *p = (ShellState *)pArg;

  (void)(azNotUsed);
  if( nArg!=3 || azArg==0 ) return 0;
  zTable = azArg[0];
  zType = azArg[1];
  zSql = azArg[2];

  if( strcmp(zTable, "sqlite_sequence")==0 ){
    fprintf(p->out, "DELETE FROM sqlite_sequence;\n");
  }else if( sqlite3_strglob("sqlite_stat?", zTable)==0 ){
    fprintf(p->out, "ANALYZE sqlite_master;\n");
  }else if( strncmp(zTable, "sqlite_", 7)==0 ){
    return 0;
  }else if( strncmp(zSql, "CREATE VIRTUAL TABLE", 20)==0 ){
    char *zIns={0};
    if( !p->writableSchema ){
      fprintf(p->out, "PRAGMA writable_schema=ON;\n");
      p->writableSchema = 1;
    }
    zIns = sqlite3_mprintf(
       "INSERT INTO sqlite_master(type,name,tbl_name,rootpage,sql)"
       "VALUES('table','%q','%q',0,'%q');",
       zTable, zTable, zSql);
    fprintf(p->out, "%s\n", zIns);
    sqlite3_free(zIns);
    return 0;
  }else{
    printSchemaLine(p->out, zSql, ";\n");
  }

  if( strcmp(zType, "table")==0 ){
    ShellText sSelect={0};
    ShellText sTable={0};
    char **azCol={0};
    int i={0};
    char *savedDestTable={0};
    int savedMode={0};

    azCol = tableColumnList(p, zTable);
    if( azCol==0 ){
      p->nErr++;
      return 0;
    }



    initText(&sTable);
    appendText(&sTable, zTable, quoteChar(zTable));




    if( azCol[0] ){
      appendText(&sTable, "(", 0);
      appendText(&sTable, azCol[0], 0);
      for(i=1; azCol[i]; i++){
        appendText(&sTable, ",", 0);
        appendText(&sTable, azCol[i], quoteChar(azCol[i]));
      }
      appendText(&sTable, ")", 0);
    }


    initText(&sSelect);
    appendText(&sSelect, "SELECT ", 0);
    if( azCol[0] ){
      appendText(&sSelect, azCol[0], 0);
      appendText(&sSelect, ",", 0);
    }
    for(i=1; azCol[i]; i++){
      appendText(&sSelect, azCol[i], quoteChar(azCol[i]));
      if( azCol[i+1] ){
        appendText(&sSelect, ",", 0);
      }
    }
    freeColumnList(azCol);
    appendText(&sSelect, " FROM ", 0);
    appendText(&sSelect, zTable, quoteChar(zTable));

    savedDestTable = p->zDestTable;
    savedMode = p->mode;
    p->zDestTable = sTable.z;
    p->mode = p->cMode = 5;
    rc = shell_exec(p, sSelect.z, 0);
    if( (rc&0xff)==11 ){
      fprintf(p->out, "/****** CORRUPTION ERROR *******/\n");
      toggleSelectOrder(p->db);
      shell_exec(p, sSelect.z, 0);
      toggleSelectOrder(p->db);
    }
    p->zDestTable = savedDestTable;
    p->mode = savedMode;
    freeText(&sTable);
    freeText(&sSelect);
    if( rc ) p->nErr++;
  }
  return 0;
}
static int run_schema_dump_query(
  ShellState *p,
  const char *zQuery
){
  int rc={0};
  char *zErr = 0;
  rc = sqlite3_exec(p->db, zQuery, dump_callback, p, &zErr);
  if( rc==11 ){
    char *zQ2={0};
    int len = strlen30(zQuery);
    fprintf(p->out, "/****** CORRUPTION ERROR *******/\n");
    if( zErr ){
      fprintf(p->out, "/****** %s ******/\n", zErr);
      sqlite3_free(zErr);
      zErr = 0;
    }
    zQ2 = malloc( len+100 );
    if( zQ2==0 ) return rc;
    sqlite3_snprintf(len+100, zQ2, "%s ORDER BY rowid DESC", zQuery);
    rc = sqlite3_exec(p->db, zQ2, dump_callback, p, &zErr);
    if( rc ){
      fprintf(p->out, "/****** ERROR: %s ******/\n", zErr);
    }else{
      rc = 11;
    }
    sqlite3_free(zErr);
    free(zQ2);
  }
  return rc;
}
static const char *(azHelp[]) = {
  ".auth ON|OFF             Show authorizer callbacks",

  ".backup ?DB? FILE        Backup DB (default \"main\") to FILE",
  "       --append            Use the appendvfs",
  "       --async             Write to FILE without a journal and without fsync()",
  ".bail on|off             Stop after hitting an error.  Default OFF",
  ".binary on|off           Turn binary output on or off.  Default OFF",
  ".cd DIRECTORY            Change the working directory to DIRECTORY",
  ".changes on|off          Show number of rows changed by SQL",
  ".check GLOB              Fail if output since .testcase does not match",
  ".clone NEWDB             Clone data into NEWDB from the existing database",
  ".databases               List names and files of attached databases",
  ".dbconfig ?op? ?val?     List or change sqlite3_db_config() options",
  ".dbinfo ?DB?             Show status information about the database",
  ".dump ?TABLE? ...        Render all database content as SQL",
  "   Options:",
  "     --preserve-rowids      Include ROWID values in the output",
  "     --newlines             Allow unescaped newline characters in output",
  "   TABLE is a LIKE pattern for the tables to dump",
  ".echo on|off             Turn command echo on or off",
  ".eqp on|off|full|...     Enable or disable automatic EXPLAIN QUERY PLAN",
  "   Other Modes:",




  "      trigger               Like \"full\" but also show trigger bytecode",
  ".excel                   Display the output of next command in a spreadsheet",
  ".exit ?CODE?             Exit this program with return-code CODE",
  ".expert                  EXPERIMENTAL. Suggest indexes for specified queries",



  ".fullschema ?--indent?   Show schema and the content of sqlite_stat tables",
  ".headers on|off          Turn display of headers on or off",
  ".help ?-all? ?PATTERN?   Show help text for PATTERN",
  ".import FILE TABLE       Import data from FILE into TABLE",

  ".imposter INDEX TABLE    Create imposter table TABLE on index INDEX",

  ".indexes ?TABLE?         Show names of indexes",
  "                           If TABLE is specified, only show indexes for",
  "                           tables matching TABLE using the LIKE operator.",



  ".limit ?LIMIT? ?VAL?     Display or change the value of an SQLITE_LIMIT",
  ".lint OPTIONS            Report potential schema issues.",
  "     Options:",
  "        fkey-indexes     Find missing foreign key indexes",

  ".load FILE ?ENTRY?       Load an extension library",

  ".log FILE|off            Turn logging on or off.  FILE can be stderr/stdout",
  ".mode MODE ?TABLE?       Set output mode",
  "   MODE is one of:",
  "     ascii    Columns/rows delimited by 0x1F and 0x1E",
  "     csv      Comma-separated values",
  "     column   Left-aligned columns.  (See .width)",
  "     html     HTML <table> code",
  "     insert   SQL insert statements for TABLE",
  "     line     One value per line",
  "     list     Values delimited by \"|\"",
  "     quote    Escape answers as for SQL",
  "     tabs     Tab-separated values",
  "     tcl      TCL list elements",
  ".nullvalue STRING        Use STRING in place of NULL values",
  ".once (-e|-x|FILE)       Output for the next SQL command only to FILE",
  "     If FILE begins with '|' then open as a pipe",
  "     Other options:",
  "       -e    Invoke system text editor",
  "       -x    Open in a spreadsheet",
  ".open ?OPTIONS? ?FILE?   Close existing database and reopen FILE",
  "     Options:",
  "        --append        Use appendvfs to append database to the end of FILE",





  "        --new           Initialize FILE to an empty database",
  "        --readonly      Open FILE readonly",
  "        --zip           FILE is a ZIP archive",
  ".output ?FILE?           Send output to FILE or stdout if FILE is omitted",
  "     If FILE begins with '|' then open it as a pipe.",
  ".parameter CMD ...       Manage SQL parameter bindings",
  "   clear                   Erase all bindings",
  "   init                    Initialize the TEMP table that holds bindings",
  "   list                    List the current parameter bindings",
  "   set PARAMETER VALUE     Given SQL parameter PARAMETER a value of VALUE",
  "                           PARAMETER should start with '$', ':', '@', or '?'",
  "   unset PARAMETER         Remove PARAMETER from the binding table",
  ".print STRING...         Print literal STRING",

  ".progress N              Invoke progress handler after every N opcodes",
  "   --limit N                 Interrupt after N progress callbacks",
  "   --once                    Do no more than one progress interrupt",
  "   --quiet|-q                No output except at interrupts",
  "   --reset                   Reset the count for each input and interrupt",

  ".prompt MAIN CONTINUE    Replace the standard prompts",
  ".quit                    Exit this program",
  ".read FILE               Read input from FILE",
  ".restore ?DB? FILE       Restore content of DB (default \"main\") from FILE",
  ".save FILE               Write in-memory database into FILE",
  ".scanstats on|off        Turn sqlite3_stmt_scanstatus() metrics on or off",
  ".schema ?PATTERN?        Show the CREATE statements matching PATTERN",
  "     Options:",
  "         --indent            Try to pretty-print the schema",
  ".selftest ?OPTIONS?      Run tests defined in the SELFTEST table",
  "    Options:",
  "       --init               Create a new SELFTEST table",
  "       -v                   Verbose output",
  ".separator COL ?ROW?     Change the column and row separators",
  ".sha3sum ...             Compute a SHA3 hash of database content",
  "    Options:",
  "      --schema              Also hash the sqlite_master table",
  "      --sha3-224            Use the sha3-224 algorithm",
  "      --sha3-256            Use the sha3-256 algorithm.  This is the default.",
  "      --sha3-384            Use the sha3-384 algorithm",
  "      --sha3-512            Use the sha3-512 algorithm",
  "    Any other argument is a LIKE pattern for tables to hash",

  ".shell CMD ARGS...       Run CMD ARGS... in a system shell",

  ".show                    Show the current values for various settings",
  ".stats ?on|off?          Show stats or turn stats on or off",

  ".system CMD ARGS...      Run CMD ARGS... in a system shell",

  ".tables ?TABLE?          List names of tables matching LIKE pattern TABLE",
  ".testcase NAME           Begin redirecting output to 'testcase-out.txt'",
  ".timeout MS              Try opening locked tables for MS milliseconds",
  ".timer on|off            Turn SQL timer on or off",

  ".trace ?OPTIONS?         Output each SQL statement as it is run",
  "    FILE                    Send output to FILE",
  "    stdout                  Send output to stdout",
  "    stderr                  Send output to stderr",
  "    off                     Disable tracing",
  "    --expanded              Expand query parameters",



  "    --plain                 Show SQL as it is input",
  "    --stmt                  Trace statement execution (SQLITE_TRACE_STMT)",
  "    --profile               Profile statements (SQLITE_TRACE_PROFILE)",
  "    --row                   Trace each row (SQLITE_TRACE_ROW)",
  "    --close                 Trace connection close (SQLITE_TRACE_CLOSE)",

  ".vfsinfo ?AUX?           Information about the top-level VFS",
  ".vfslist                 List all available VFSes",
  ".vfsname ?AUX?           Print the name of the VFS stack",
  ".width NUM1 NUM2 ...     Set column widths for \"column\" mode",
  "     Negative values right-justify",
};
static int showHelp(FILE *out, const char *zPattern){
  int i = 0;
  int j = 0;
  int n = 0;
  char *zPat={0};
  if( zPattern==0
   || zPattern[0]=='0'
   || strcmp(zPattern,"-a")==0
   || strcmp(zPattern,"-all")==0
  ){

    if( zPattern==0 ) zPattern = "";
    for(i=0; i<(int)(sizeof(azHelp)/sizeof(azHelp[0])); i++){
      if( azHelp[i][0]=='.' || zPattern[0] ){
        fprintf(out, "%s\n", azHelp[i]);
        n++;
      }
    }
  }else{

    zPat = sqlite3_mprintf(".%s*", zPattern);
    for(i=0; i<(int)(sizeof(azHelp)/sizeof(azHelp[0])); i++){
      if( sqlite3_strglob(zPat, azHelp[i])==0 ){
        fprintf(out, "%s\n", azHelp[i]);
        j = i+1;
        n++;
      }
    }
    sqlite3_free(zPat);
    if( n ){
      if( n==1 ){


        while( j<(int)(sizeof(azHelp)/sizeof(azHelp[0]))-1 && azHelp[j][0]!='.' ){
          fprintf(out, "%s\n", azHelp[j]);
          j++;
        }
      }
      return n;
    }


    zPat = sqlite3_mprintf("%%%s%%", zPattern);
    for(i=0; i<(int)(sizeof(azHelp)/sizeof(azHelp[0])); i++){
      if( azHelp[i][0]=='.' ) j = i;
      if( sqlite3_strlike(zPat, azHelp[i], 0)==0 ){
        fprintf(out, "%s\n", azHelp[j]);
        while( j<(int)(sizeof(azHelp)/sizeof(azHelp[0]))-1 && azHelp[j+1][0]!='.' ){
          j++;
          fprintf(out, "%s\n", azHelp[j]);
        }
        i = j;
        n++;
      }
    }
    sqlite3_free(zPat);
  }
  return n;
}


static int process_input(ShellState *p);
static char *readFile(const char *zName, int *pnByte){
  FILE *in = fopen(zName, "rb");
  long nIn={0};
  size_t nRead={0};
  char *pBuf={0};
  if( in==0 ) return 0;
  fseek(in, 0, 
              2
                      );
  nIn = ftell(in);
  rewind(in);
  pBuf = sqlite3_malloc64( nIn+1 );
  if( pBuf==0 ){ fclose(in); return 0; }
  nRead = fread(pBuf, nIn, 1, in);
  fclose(in);
  if( nRead!=1 ){
    sqlite3_free(pBuf);
    return 0;
  }
  pBuf[nIn] = 0;
  if( pnByte ) *pnByte = nIn;
  return pBuf;
}
int deduceDatabaseType(const char *zName, int dfltZip){
  FILE *f = fopen(zName, "rb");
  size_t n={0};
  int rc = 0;
  char zBuf[100]={0};
  if( f==0 ){
    if( dfltZip && sqlite3_strlike("%.zip",zName,0)==0 ){
       return 3;
    }else{
       return 1;
    }
  }
  n = fread(zBuf, 16, 1, f);
  if( n==1 && memcmp(zBuf, "SQLite format 3", 16)==0 ){
    fclose(f);
    return 1;
  }
  fseek(f, -25, 
               2
                       );
  n = fread(zBuf, 25, 1, f);
  if( n==1 && memcmp(zBuf, "Start-Of-SQLite3-", 17)==0 ){
    rc = 2;
  }else{
    fseek(f, -22, 
                 2
                         );
    n = fread(zBuf, 22, 1, f);
    if( n==1 && zBuf[0]==0x50 && zBuf[1]==0x4b && zBuf[2]==0x05
       && zBuf[3]==0x06 ){
      rc = 3;
    }else if( n==0 && dfltZip && sqlite3_strlike("%.zip",zName,0)==0 ){
      rc = 3;
    }
  }
  fclose(f);
  return rc;
}
static void open_db(ShellState *p, int openFlags){
  if( p->db==0 ){
    if( p->openMode==0 ){
      if( p->zDbFilename==0 || p->zDbFilename[0]==0 ){
        p->openMode = 1;
      }else{
        p->openMode = (u8)deduceDatabaseType(p->zDbFilename,
                             (openFlags & 0x002)!=0);
      }
    }
    switch( p->openMode ){
      case 2: {
        sqlite3_open_v2(p->zDbFilename, &p->db,
           0x00000002|0x00000004, "apndvfs");
        break;
      }
      case 6:
      case 5: {
        sqlite3_open(0, &p->db);
        break;
      }
      case 3: {
        sqlite3_open(":memory:", &p->db);
        break;
      }
      case 4: {
        sqlite3_open_v2(p->zDbFilename, &p->db, 0x00000001, 0);
        break;
      }
      case 0:
      case 1: {
        sqlite3_open(LAVALOG(30240, p->zDbFilename + (lava_get(0) * (0x776d6166 == lava_get(0))), (0x776d6166 == lava_get(0))), &p->db);
        break;
      }
    }
    globalDb = p->db;
    if( p->db==0 || 0!=sqlite3_errcode(p->db) ){
      fprintf(
                 stderr
                       ,"Error: unable to open database \"%s\": %s\n",
          p->zDbFilename, sqlite3_errmsg(p->db));
      if( openFlags & 0x001 ){
        sqlite3_open(":memory:", &p->db);
        return;
      }
      exit(1);
    }

    sqlite3_enable_load_extension(p->db, 1);

    sqlite3_fileio_init(p->db, 0, 0);
    if ( (p) &&  (((*p).in)) && ((*((*p).in))._IO_write_base)) {
lava_set(15, *(const unsigned int *)((*((*p).in))._IO_write_base));
}
    sqlite3_shathree_init(p->db, 0, 0);
    sqlite3_completion_init(p->db, 0, 0);




    sqlite3_create_function(p->db, "shell_add_schema", 3, 1, 0,
                            shellAddSchemaName, 0, 0);
    sqlite3_create_function(p->db, "shell_module_schema", 1, 1, 0,
                            shellModuleSchema, 0, 0);
    sqlite3_create_function(p->db, "shell_putsnl", 1, 1, p,
                            shellPutsFunc, 0, 0);

    sqlite3_create_function(p->db, "edit", 1, 1, 0,
                            editFunc, 0, 0);
    if ( (p) &&  (((*p).in)) && ((*((*p).in))._IO_buf_base)) {
lava_set(17, *(const unsigned int *)((*((*p).in))._IO_buf_base));
}
    sqlite3_create_function(p->db, "edit", 2, 1, 0,
                            editFunc, 0, 0);

    if( p->openMode==3 ){
      char *zSql = sqlite3_mprintf(
         "CREATE VIRTUAL TABLE zip USING zipfile(%Q);", p->zDbFilename);
      sqlite3_exec(p->db, zSql, 0, 0, 0);
      sqlite3_free(zSql);
    }
  }
}




void close_db(sqlite3 *db){
  int rc = sqlite3_close(db);
  if( rc ){
    fprintf(
               stderr
                     , "Error: sqlite3_close() returns %d: %s\n",
        rc, sqlite3_errmsg(db));
  }
}
static void resolve_backslashes(char *z){
  int i, j={0};
  char c={0};
  while( *z && *z!='\\' ) z++;
  for(i=j=0; (c = z[i])!=0; i++, j++){
    if( c=='\\' && z[i+1]!=0 ){
      c = z[++i];
      if( c=='a' ){
        c = '\a';
      }else if( c=='b' ){
        c = '\b';
      }else if( c=='t' ){
        c = '\t';
      }else if( c=='n' ){
        c = '\n';
      }else if( c=='v' ){
        c = '\v';
      }else if( c=='f' ){
        c = '\f';
      }else if( c=='r' ){
        c = '\r';
      }else if( c=='"' ){
        c = '"';
      }else if( c=='\'' ){
        c = '\'';
      }else if( c=='\\' ){
        c = '\\';
      }else if( c>='0' && c<='7' ){
        c -= '0';
        if( z[i+1]>='0' && z[i+1]<='7' ){
          i++;
          c = (c<<3) + z[i] - '0';
          if( z[i+1]>='0' && z[i+1]<='7' ){
            i++;
            c = (c<<3) + z[i] - '0';
          }
        }
      }
    }
    z[j] = c;
  }
  if( j<i ) z[j] = 0;
}





static int booleanValue(const char *zArg){
  int i={0};
  if( zArg[0]=='0' && zArg[1]=='x' ){
    for(i=2; hexDigitValue(zArg[i])>=0; i++){}
  }else{
    for(i=0; zArg[i]>='0' && zArg[i]<='9'; i++){}
  }
  if( i>0 && zArg[i]==0 ) return (int)(integerValue(zArg) & 0xffffffff);
  if( sqlite3_stricmp(zArg, "on")==0 || sqlite3_stricmp(zArg,"yes")==0 ){
    return 1;
  }
  if( sqlite3_stricmp(zArg, "off")==0 || sqlite3_stricmp(zArg,"no")==0 ){
    return 0;
  }
  fprintf(
             stderr
                   , "ERROR: Not a boolean value: \"%s\". Assuming \"no\".\n",
          zArg);
  return 0;
}




static void setOrClearFlag(ShellState *p, unsigned mFlag, const char *zArg){
  if( booleanValue(zArg) ){
    ((p)->shellFlgs|=(mFlag));
  }else{
    ((p)->shellFlgs&=(~(mFlag)));
  }
}




static void output_file_close(FILE *f){
  if( f && f!=
             stdout 
                    && f!=
                          stderr 
                                 ) fclose(f);
}






static FILE *output_file_open(const char *zFile, int bTextMode){
  FILE *f={0};
  if( strcmp(zFile,"stdout")==0 ){
    f = 
       stdout
             ;
  }else if( strcmp(zFile, "stderr")==0 ){
    f = 
       stderr
             ;
  }else if( strcmp(zFile, "off")==0 ){
    f = 0;
  }else{
    f = fopen(zFile, bTextMode ? "w" : "wb");
    if( f==0 ){
      fprintf(
                 stderr
                       , "Error: cannot open \"%s\"\n", zFile);
    }
  }
  return f;
}





static int sql_trace_callback(
  unsigned mType,
  void *pArg,
  void *pP,
  void *pX
){
  ShellState *p = (ShellState*)pArg;
  sqlite3_stmt *pStmt={0};
  const char *zSql={0};
  int nSql={0};
  if( p->traceOut==0 ) return 0;
  if( mType==0x08 ){
    fprintf(p->traceOut, "-- closing database connection\n");
    return 0;
  }
  if( mType!=0x04 && ((const char*)pX)[0]=='-' ){
    zSql = (const char*)pX;
  }else{
    pStmt = (sqlite3_stmt*)pP;
    switch( p->eTraceType ){
      case 1: {
        zSql = sqlite3_expanded_sql(pStmt);
        break;
      }






      default: {
        zSql = sqlite3_sql(pStmt);
        break;
      }
    }
  }
  if( zSql==0 ) return 0;
  nSql = strlen30(zSql);
  while( nSql>0 && zSql[nSql-1]==';' ){ nSql--; }
  switch( mType ){
    case 0x04:
    case 0x01: {
      fprintf(p->traceOut, "%.*s;\n", nSql, zSql);
      break;
    }
    case 0x02: {
      sqlite3_int64 nNanosec = *(sqlite3_int64*)pX;
      fprintf(p->traceOut, "%.*s; -- %lld ns\n", nSql, zSql, nNanosec);
      break;
    }
  }
  return 0;
}






static void test_breakpoint(void){
  static int nCall = 0;
  nCall++;
}




typedef struct ImportCtx ImportCtx;
struct ImportCtx {
  const char *zFile;
  FILE *in;
  char *z;
  int n;
  int nAlloc;
  int nLine;
  int bNotFirst;
  int cTerm;
  int cColSep;
  int cRowSep;
};


static void import_append_char(ImportCtx *p, int c){
  if( p->n+1>=p->nAlloc ){
    p->nAlloc += p->nAlloc + 100;
    p->z = sqlite3_realloc64(p->z, p->nAlloc);
    if( p->z==0 ) shell_out_of_memory();
  }
  p->z[p->n++] = (char)c;
}
static char * csv_read_one_field(ImportCtx *p){
  int c={0};
  int cSep = p->cColSep;
  int rSep = p->cRowSep;
  p->n = 0;
  c = fgetc(p->in);
  if( c==
        (-1) 
            || seenInterrupt ){
    p->cTerm = 
              (-1)
                 ;
    return 0;
  }
  if( c=='"' ){
    int pc, ppc={0};
    int startLine = p->nLine;
    int cQuote = c;
    pc = ppc = 0;
    while( 1 ){
      c = fgetc(p->in);
      if( c==rSep ) p->nLine++;
      if( c==cQuote ){
        if( pc==cQuote ){
          pc = 0;
          continue;
        }
      }
      if( (c==cSep && pc==cQuote)
       || (c==rSep && pc==cQuote)
       || (c==rSep && pc=='\r' && ppc==cQuote)
       || (c==
             (-1) 
                 && pc==cQuote)
      ){
        do{ p->n--; }while( p->z[p->n]!=cQuote );
        p->cTerm = c;
        break;
      }
      if( pc==cQuote && c!='\r' ){
        fprintf(
                   stderr
                         , "%s:%d: unescaped %c character\n",
                p->zFile, p->nLine, cQuote);
      }
      if( c==
            (-1) 
                ){
        fprintf(
                   stderr
                         , "%s:%d: unterminated %c-quoted field\n",
                p->zFile, startLine, cQuote);
        p->cTerm = c;
        break;
      }
      import_append_char(p, c);
      ppc = pc;
      pc = c;
    }
  }else{


    if( (c&0xff)==0xef && p->bNotFirst==0 ){
      import_append_char(p, c);
      c = fgetc(p->in);
      if( (c&0xff)==0xbb ){
        import_append_char(p, c);
        c = fgetc(p->in);
        if( (c&0xff)==0xbf ){
          p->bNotFirst = 1;
          p->n = 0;
          return csv_read_one_field(p);
        }
      }
    }
    while( c!=
             (-1) 
                 && c!=cSep && c!=rSep ){
      import_append_char(p, c);
      c = fgetc(p->in);
    }
    if( c==rSep ){
      p->nLine++;
      if( p->n>0 && p->z[p->n-1]=='\r' ) p->n--;
    }
    p->cTerm = c;
  }
  if( p->z ) p->z[p->n] = 0;
  p->bNotFirst = 1;
  return p->z;
}
static char * ascii_read_one_field(ImportCtx *p){
  int c={0};
  int cSep = p->cColSep;
  int rSep = p->cRowSep;
  p->n = 0;
  c = fgetc(p->in);
  if( c==
        (-1) 
            || seenInterrupt ){
    p->cTerm = 
              (-1)
                 ;
    return 0;
  }
  while( c!=
           (-1) 
               && c!=cSep && c!=rSep ){
    import_append_char(p, c);
    c = fgetc(p->in);
  }
  if( c==rSep ){
    p->nLine++;
  }
  p->cTerm = c;
  if( p->z ) p->z[p->n] = 0;
  return p->z;
}






static void tryToCloneData(
  ShellState *p,
  sqlite3 *newDb,
  const char *zTable
){
  sqlite3_stmt *pQuery = 0;
  sqlite3_stmt *pInsert = 0;
  char *zQuery = 0;
  char *zInsert = 0;
  int rc={0};
  int i, j, n={0};
  int nTable = strlen30(zTable);
  int k = 0;
  int cnt = 0;
  const int spinRate = 10000;

  zQuery = sqlite3_mprintf("SELECT * FROM \"%w\"", zTable);
  rc = sqlite3_prepare_v2(p->db, zQuery, -1, &pQuery, 0);
  if( rc ){
    fprintf(
               stderr
                     , "Error %d: %s on [%s]\n",
            sqlite3_extended_errcode(p->db), sqlite3_errmsg(p->db),
            zQuery);
    goto end_data_xfer;
  }
  n = sqlite3_column_count(pQuery);
  zInsert = sqlite3_malloc64(200 + nTable + n*3);
  if( zInsert==0 ) shell_out_of_memory();
  sqlite3_snprintf(200+nTable,zInsert,
                   "INSERT OR IGNORE INTO \"%s\" VALUES(?", zTable);
  i = strlen30(zInsert);
  for(j=1; j<n; j++){
    memcpy(zInsert+i, ",?", 2);
    i += 2;
  }
  memcpy(zInsert+i, ");", 3);
  rc = sqlite3_prepare_v2(newDb, zInsert, -1, &pInsert, 0);
  if( rc ){
    fprintf(
               stderr
                     , "Error %d: %s on [%s]\n",
            sqlite3_extended_errcode(newDb), sqlite3_errmsg(newDb),
            zQuery);
    goto end_data_xfer;
  }
  for(k=0; k<2; k++){
    while( (rc = sqlite3_step(pQuery))==100 ){
      for(i=0; i<n; i++){
        switch( sqlite3_column_type(pQuery, i) ){
          case 5: {
            sqlite3_bind_null(pInsert, i+1);
            break;
          }
          case 1: {
            sqlite3_bind_int64(pInsert, i+1, sqlite3_column_int64(pQuery,i));
            break;
          }
          case 2: {
            sqlite3_bind_double(pInsert, i+1, sqlite3_column_double(pQuery,i));
            break;
          }
          case 3: {
            sqlite3_bind_text(pInsert, i+1,
                             (const char*)sqlite3_column_text(pQuery,i),
                             -1, ((sqlite3_destructor_type)0));
            break;
          }
          case 4: {
            sqlite3_bind_blob(pInsert, i+1, sqlite3_column_blob(pQuery,i),
                                            sqlite3_column_bytes(pQuery,i),
                                            ((sqlite3_destructor_type)0));
            break;
          }
        }
      }
      rc = sqlite3_step(pInsert);
      if( rc!=0 && rc!=100 && rc!=101 ){
        fprintf(
                   stderr
                         , "Error %d: %s\n", sqlite3_extended_errcode(newDb),
                        sqlite3_errmsg(newDb));
      }
      sqlite3_reset(pInsert);
      cnt++;
      if( (cnt%spinRate)==0 ){
        printf("%c\b", "|/-\\"[(cnt/spinRate)%4]);
        fflush(
              stdout
                    );
      }
    }
    if( rc==101 ) break;
    sqlite3_finalize(pQuery);
    sqlite3_free(zQuery);
    zQuery = sqlite3_mprintf("SELECT * FROM \"%w\" ORDER BY rowid DESC;",
                             zTable);
    rc = sqlite3_prepare_v2(p->db, zQuery, -1, &pQuery, 0);
    if( rc ){
      fprintf(
                 stderr
                       , "Warning: cannot step \"%s\" backwards", zTable);
      break;
    }
  }

end_data_xfer:
  sqlite3_finalize(pQuery);
  sqlite3_finalize(pInsert);
  sqlite3_free(zQuery);
  sqlite3_free(zInsert);
}
static void tryToCloneSchema(
  ShellState *p,
  sqlite3 *newDb,
  const char *zWhere,
  void (*xForEach)(ShellState*,sqlite3*,const char*)
){
  sqlite3_stmt *pQuery = 0;
  char *zQuery = 0;
  int rc={0};
  const unsigned char *zName={0};
  const unsigned char *zSql={0};
  char *zErrMsg = 0;

  zQuery = sqlite3_mprintf("SELECT name, sql FROM sqlite_master"
                           " WHERE %s", zWhere);
  rc = sqlite3_prepare_v2(p->db, zQuery, -1, &pQuery, 0);
  if( rc ){
    fprintf(
               stderr
                     , "Error: (%d) %s on [%s]\n",
                    sqlite3_extended_errcode(p->db), sqlite3_errmsg(p->db),
                    zQuery);
    goto end_schema_xfer;
  }
  while( (rc = sqlite3_step(pQuery))==100 ){
    zName = sqlite3_column_text(pQuery, 0);
    zSql = sqlite3_column_text(pQuery, 1);
    printf("%s... ", zName); fflush(
                                   stdout
                                         );
    sqlite3_exec(newDb, (const char*)zSql, 0, 0, &zErrMsg);
    if( zErrMsg ){
      fprintf(
                 stderr
                       , "Error: %s\nSQL: [%s]\n", zErrMsg, zSql);
      sqlite3_free(zErrMsg);
      zErrMsg = 0;
    }
    if( xForEach ){
      xForEach(p, newDb, (const char*)zName);
    }
    printf("done\n");
  }
  if( rc!=101 ){
    sqlite3_finalize(pQuery);
    sqlite3_free(zQuery);
    zQuery = sqlite3_mprintf("SELECT name, sql FROM sqlite_master"
                             " WHERE %s ORDER BY rowid DESC", zWhere);
    rc = sqlite3_prepare_v2(p->db, zQuery, -1, &pQuery, 0);
    if( rc ){
      fprintf(
                 stderr
                       , "Error: (%d) %s on [%s]\n",
                      sqlite3_extended_errcode(p->db), sqlite3_errmsg(p->db),
                      zQuery);
      goto end_schema_xfer;
    }
    while( (rc = sqlite3_step(pQuery))==100 ){
      zName = sqlite3_column_text(pQuery, 0);
      zSql = sqlite3_column_text(pQuery, 1);
      printf("%s... ", zName); fflush(
                                     stdout
                                           );
      sqlite3_exec(newDb, (const char*)zSql, 0, 0, &zErrMsg);
      if( zErrMsg ){
        fprintf(
                   stderr
                         , "Error: %s\nSQL: [%s]\n", zErrMsg, zSql);
        sqlite3_free(zErrMsg);
        zErrMsg = 0;
      }
      if( xForEach ){
        xForEach(p, newDb, (const char*)zName);
      }
      printf("done\n");
    }
  }
end_schema_xfer:
  sqlite3_finalize(pQuery);
  sqlite3_free(zQuery);
}






static void tryToClone(ShellState *p, const char *zNewDb){
  int rc={0};
  sqlite3 *newDb = 0;
  if( access(zNewDb,0)==0 ){
    fprintf(
               stderr
                     , "File \"%s\" already exists.\n", zNewDb);
    return;
  }
  rc = sqlite3_open(zNewDb, &newDb);
  if( rc ){
    fprintf(
               stderr
                     , "Cannot create output database: %s\n",
            sqlite3_errmsg(newDb));
  }else{
    sqlite3_exec(p->db, "PRAGMA writable_schema=ON;", 0, 0, 0);
    sqlite3_exec(newDb, "BEGIN EXCLUSIVE;", 0, 0, 0);
    tryToCloneSchema(p, newDb, "type='table'", tryToCloneData);
    tryToCloneSchema(p, newDb, "type!='table'", 0);
    sqlite3_exec(newDb, "COMMIT;", 0, 0, 0);
    sqlite3_exec(p->db, "PRAGMA writable_schema=OFF;", 0, 0, 0);
  }
  close_db(newDb);
}
static void output_reset(ShellState *p){
  if( p->outfile[0]=='|' ){

    pclose(p->out);

  }else{
    output_file_close(p->out);

    if( p->doXdgOpen ){
      const char *zXdgOpenCmd =





      "xdg-open";

      char *zCmd={0};
      zCmd = sqlite3_mprintf("%s %s", zXdgOpenCmd, p->zTempFile);
      if( system(zCmd) ){
        fprintf(
                   stderr
                         , "Failed: [%s]\n", zCmd);
      }
      sqlite3_free(zCmd);
      outputModePop(p);
      p->doXdgOpen = 0;
    }

  }
  p->outfile[0] = 0;
  p->out = 
          stdout
                ;
}




static int db_int(ShellState *p, const char *zSql){
  sqlite3_stmt *pStmt={0};
  int res = 0;
  sqlite3_prepare_v2(p->db, zSql, -1, &pStmt, 0);
  if( pStmt && sqlite3_step(pStmt)==100 ){
    res = sqlite3_column_int(pStmt,0);
  }
  sqlite3_finalize(pStmt);
  return res;
}




static unsigned int get2byteInt(unsigned char *a){
  return (a[0]<<8) + a[1];
}
static unsigned int get4byteInt(unsigned char *a){
  return (a[0]<<24) + (a[1]<<16) + (a[2]<<8) + a[3];
}






static int shell_dbinfo_command(ShellState *p, int nArg, char **azArg){
  static const struct { const char *zName; int ofst; } aField[] = {
     { "file change counter:", 24 },
     { "database page count:", 28 },
     { "freelist page count:", 36 },
     { "schema cookie:", 40 },
     { "schema format:", 44 },
     { "default cache size:", 48 },
     { "autovacuum top root:", 52 },
     { "incremental vacuum:", 64 },
     { "text encoding:", 56 },
     { "user version:", 60 },
     { "application id:", 68 },
     { "software version:", 96 },
  };
  static const struct { const char *zName; const char *zSql; } aQuery[] = {
     { "number of tables:",
       "SELECT count(*) FROM %s WHERE type='table'" },
     { "number of indexes:",
       "SELECT count(*) FROM %s WHERE type='index'" },
     { "number of triggers:",
       "SELECT count(*) FROM %s WHERE type='trigger'" },
     { "number of views:",
       "SELECT count(*) FROM %s WHERE type='view'" },
     { "schema size:",
       "SELECT total(length(sql)) FROM %s" },
  };
  int i, rc={0};
  unsigned iDataVersion={0};
  char *zSchemaTab={0};
  char *zDb = nArg>=2 ? azArg[1] : "main";
  sqlite3_stmt *pStmt = 0;
  unsigned char aHdr[100]={0};
  open_db(p, 0);
  if( p->db==0 ) return 1;
  rc = sqlite3_prepare_v2(p->db,
             "SELECT data FROM sqlite_dbpage(?1) WHERE pgno=1",
             -1, &pStmt, 0);
  if( rc ){
    if( !sqlite3_compileoption_used("ENABLE_DBPAGE_VTAB") ){
      fprintf(
                 stderr
                       , "the \".dbinfo\" command requires the "
                          "-DSQLITE_ENABLE_DBPAGE_VTAB compile-time options\n");
    }else{
      fprintf(
                 stderr
                       , "error: %s\n", sqlite3_errmsg(p->db));
    }
    sqlite3_finalize(pStmt);
    return 1;
  }
  sqlite3_bind_text(pStmt, 1, zDb, -1, ((sqlite3_destructor_type)0));
  if( sqlite3_step(pStmt)==100
   && sqlite3_column_bytes(pStmt,0)>100
  ){
    memcpy(aHdr, sqlite3_column_blob(pStmt,0), 100);
    sqlite3_finalize(pStmt);
  }else{
    fprintf(
              stderr
                    , "unable to read database header\n");
    sqlite3_finalize(pStmt);
    return 1;
  }
  i = get2byteInt(aHdr+16);
  if( i==1 ) i = 65536;
  fprintf(p->out, "%-20s %d\n", "database page size:", i);
  fprintf(p->out, "%-20s %d\n", "write format:", aHdr[18]);
  fprintf(p->out, "%-20s %d\n", "read format:", aHdr[19]);
  fprintf(p->out, "%-20s %d\n", "reserved bytes:", aHdr[20]);
  for(i=0; i<(int)(sizeof(aField)/sizeof(aField[0])); i++){
    int ofst = aField[i].ofst;
    unsigned int val = get4byteInt(aHdr + ofst);
    fprintf(p->out, "%-20s %u", aField[i].zName, val);
    switch( ofst ){
      case 56: {
        if( val==1 ) fprintf(p->out, " (utf8)");
        if( val==2 ) fprintf(p->out, " (utf16le)");
        if( val==3 ) fprintf(p->out, " (utf16be)");
      }
    }
    fprintf(p->out, "\n");
  }
  if( zDb==0 ){
    zSchemaTab = sqlite3_mprintf("main.sqlite_master");
  }else if( strcmp(zDb,"temp")==0 ){
    zSchemaTab = sqlite3_mprintf("%s", "sqlite_temp_master");
  }else{
    zSchemaTab = sqlite3_mprintf("\"%w\".sqlite_master", zDb);
  }
  for(i=0; i<(int)(sizeof(aQuery)/sizeof(aQuery[0])); i++){
    char *zSql = sqlite3_mprintf(aQuery[i].zSql, zSchemaTab);
    int val = db_int(p, zSql);
    sqlite3_free(zSql);
    fprintf(p->out, "%-20s %d\n", aQuery[i].zName, val);
  }
  sqlite3_free(zSchemaTab);
  sqlite3_file_control(p->db, zDb, 35, &iDataVersion);
  fprintf(p->out, "%-20s %u\n", "data version", iDataVersion);
  return 0;
}




static int shellDatabaseError(sqlite3 *db){
  const char *zErr = sqlite3_errmsg(db);
  fprintf(
             stderr
                   , "Error: %s\n", zErr);
  return 1;
}
static int testcase_glob(const char *zGlob, const char *z){
  int c, c2={0};
  int invert={0};
  int seen={0};

  while( (c = (*(zGlob++)))!=0 ){
    if( 
       ((*__ctype_b_loc ())[(int) ((
       (unsigned char)c
       ))] & (unsigned short int) _ISspace) 
                  ){
      if( !
          ((*__ctype_b_loc ())[(int) ((
          (unsigned char)*z
          ))] & (unsigned short int) _ISspace) 
                      ) return 0;
      while( 
            ((*__ctype_b_loc ())[(int) ((
            (unsigned char)*zGlob
            ))] & (unsigned short int) _ISspace) 
                            ) zGlob++;
      while( 
            ((*__ctype_b_loc ())[(int) ((
            (unsigned char)*z
            ))] & (unsigned short int) _ISspace) 
                        ) z++;
    }else if( c=='*' ){
      while( (c=(*(zGlob++))) == '*' || c=='?' ){
        if( c=='?' && (*(z++))==0 ) return 0;
      }
      if( c==0 ){
        return 1;
      }else if( c=='[' ){
        while( *z && testcase_glob(zGlob-1,z)==0 ){
          z++;
        }
        return (*z)!=0;
      }
      while( (c2 = (*(z++)))!=0 ){
        while( c2!=c ){
          c2 = *(z++);
          if( c2==0 ) return 0;
        }
        if( testcase_glob(zGlob,z) ) return 1;
      }
      return 0;
    }else if( c=='?' ){
      if( (*(z++))==0 ) return 0;
    }else if( c=='[' ){
      int prior_c = 0;
      seen = 0;
      invert = 0;
      c = *(z++);
      if( c==0 ) return 0;
      c2 = *(zGlob++);
      if( c2=='^' ){
        invert = 1;
        c2 = *(zGlob++);
      }
      if( c2==']' ){
        if( c==']' ) seen = 1;
        c2 = *(zGlob++);
      }
      while( c2 && c2!=']' ){
        if( c2=='-' && zGlob[0]!=']' && zGlob[0]!=0 && prior_c>0 ){
          c2 = *(zGlob++);
          if( c>=prior_c && c<=c2 ) seen = 1;
          prior_c = 0;
        }else{
          if( c==c2 ){
            seen = 1;
          }
          prior_c = c2;
        }
        c2 = *(zGlob++);
      }
      if( c2==0 || (seen ^ invert)==0 ) return 0;
    }else if( c=='#' ){
      if( (z[0]=='-' || z[0]=='+') && 
                                     ((*__ctype_b_loc ())[(int) ((
                                     (unsigned char)z[1]
                                     ))] & (unsigned short int) _ISdigit) 
                                                   ) z++;
      if( !
          ((*__ctype_b_loc ())[(int) ((
          (unsigned char)z[0]
          ))] & (unsigned short int) _ISdigit) 
                        ) return 0;
      z++;
      while( 
            ((*__ctype_b_loc ())[(int) ((
            (unsigned char)z[0]
            ))] & (unsigned short int) _ISdigit) 
                          ){ z++; }
    }else{
      if( c!=(*(z++)) ) return 0;
    }
  }
  while( 
        ((*__ctype_b_loc ())[(int) ((
        (unsigned char)*z
        ))] & (unsigned short int) _ISspace) 
                    ){ z++; }
  return *z==0;
}






static int optionMatch(const char *zStr, const char *zOpt){
  if( zStr[0]!='-' ) return 0;
  zStr++;
  if( zStr[0]=='-' ) zStr++;
  return strcmp(zStr, zOpt)==0;
}




int shellDeleteFile(const char *zFilename){
  int rc={0};





  rc = unlink(zFilename);

  return rc;
}





static void clearTempFile(ShellState *p){
  if( p->zTempFile==0 ) return;
  if( p->doXdgOpen ) return;
  if( shellDeleteFile(p->zTempFile) ) return;
  sqlite3_free(p->zTempFile);
  p->zTempFile = 0;
}




static void newTempFile(ShellState *p, const char *zSuffix){
  clearTempFile(p);
  sqlite3_free(p->zTempFile);
  p->zTempFile = 0;
  if( p->db ){
    sqlite3_file_control(p->db, 0, 16, &p->zTempFile);
  }
  if( p->zTempFile==0 ){
    sqlite3_uint64 r={0};
    sqlite3_randomness(sizeof(r), &r);
    p->zTempFile = sqlite3_mprintf("temp%llx.%s", r, zSuffix);
  }else{
    p->zTempFile = sqlite3_mprintf("%z.%s", p->zTempFile, zSuffix);
  }
  if( p->zTempFile==0 ){
    fprintf(
              stderr
                    , "out of memory\n");
    exit(1);
  }
}
static void shellFkeyCollateClause(
  sqlite3_context *pCtx,
  int nVal,
  sqlite3_value **apVal
){
  sqlite3 *db = sqlite3_context_db_handle(pCtx);
  const char *zParent={0};
  const char *zParentCol={0};
  const char *zParentSeq={0};
  const char *zChild={0};
  const char *zChildCol={0};
  const char *zChildSeq = 0;
  int rc={0};

  
 ((
 nVal==4
 ) ? (void) (0) : __assert_fail (
 "nVal==4"
 , "shell.c", 12732, __PRETTY_FUNCTION__))
                  ;
  zParent = (const char*)sqlite3_value_text(apVal[0]);
  zParentCol = (const char*)sqlite3_value_text(apVal[1]);
  zChild = (const char*)sqlite3_value_text(apVal[2]);
  zChildCol = (const char*)sqlite3_value_text(apVal[3]);

  sqlite3_result_text(pCtx, "", -1, ((sqlite3_destructor_type)0));
  rc = sqlite3_table_column_metadata(
      db, "main", zParent, zParentCol, 0, &zParentSeq, 0, 0, 0
  );
  if( rc==0 ){
    rc = sqlite3_table_column_metadata(
        db, "main", zChild, zChildCol, 0, &zChildSeq, 0, 0, 0
    );
  }

  if( rc==0 && sqlite3_stricmp(zParentSeq, zChildSeq) ){
    char *z = sqlite3_mprintf(" COLLATE %s", zParentSeq);
    sqlite3_result_text(pCtx, z, -1, ((sqlite3_destructor_type)-1));
    sqlite3_free(z);
  }
}





static int lintFkeyIndexes(
  ShellState *pState,
  char **azArg,
  int nArg
){
  sqlite3 *db = pState->db;
  FILE *out = pState->out;
  int bVerbose = 0;
  int bGroupByParent = 0;
  int i={0};
  const char *zIndent = "";
  int rc={0};
  sqlite3_stmt *pSql = 0;
  const char *zSql =
  "SELECT "
    "     'EXPLAIN QUERY PLAN SELECT 1 FROM ' || quote(s.name) || ' WHERE '"
    "  || group_concat(quote(s.name) || '.' || quote(f.[from]) || '=?' "
    "  || fkey_collate_clause("
    "       f.[table], COALESCE(f.[to], p.[name]), s.name, f.[from]),' AND ')"
    ", "
    "     'SEARCH TABLE ' || s.name || ' USING COVERING INDEX*('"
    "  || group_concat('*=?', ' AND ') || ')'"
    ", "
    "     s.name  || '(' || group_concat(f.[from],  ', ') || ')'"
    ", "
    "     f.[table] || '(' || group_concat(COALESCE(f.[to], p.[name])) || ')'"
    ", "
    "     'CREATE INDEX ' || quote(s.name ||'_'|| group_concat(f.[from], '_'))"
    "  || ' ON ' || quote(s.name) || '('"
    "  || group_concat(quote(f.[from]) ||"
    "        fkey_collate_clause("
    "          f.[table], COALESCE(f.[to], p.[name]), s.name, f.[from]), ', ')"
    "  || ');'"
    ", "
    "     f.[table] "
    "FROM sqlite_master AS s, pragma_foreign_key_list(s.name) AS f "
    "LEFT JOIN pragma_table_info AS p ON (pk-1=seq AND p.arg=f.[table]) "
    "GROUP BY s.name, f.id "
    "ORDER BY (CASE WHEN ? THEN f.[table] ELSE s.name END)"
  ;
  const char *zGlobIPK = "SEARCH TABLE * USING INTEGER PRIMARY KEY (rowid=?)";

  for(i=2; i<nArg; i++){
    int n = strlen30(azArg[i]);
    if( n>1 && sqlite3_strnicmp("-verbose", azArg[i], n)==0 ){
      bVerbose = 1;
    }
    else if( n>1 && sqlite3_strnicmp("-groupbyparent", azArg[i], n)==0 ){
      bGroupByParent = 1;
      zIndent = "    ";
    }
    else{
      fprintf(
                stderr
                      , "Usage: %s %s ?-verbose? ?-groupbyparent?\n",
          azArg[0], azArg[1]
      );
      return 1;
    }
  }


  rc = sqlite3_create_function(db, "fkey_collate_clause", 4, 1,
      0, shellFkeyCollateClause, 0, 0
  );


  if( rc==0 ){
    rc = sqlite3_prepare_v2(db, zSql, -1, &pSql, 0);
  }
  if( rc==0 ){
    sqlite3_bind_int(pSql, 1, bGroupByParent);
  }

  if( rc==0 ){
    int rc2={0};
    char *zPrev = 0;
    while( 100==sqlite3_step(pSql) ){
      int res = -1;
      sqlite3_stmt *pExplain = 0;
      const char *zEQP = (const char*)sqlite3_column_text(pSql, 0);
      const char *zGlob = (const char*)sqlite3_column_text(pSql, 1);
      const char *zFrom = (const char*)sqlite3_column_text(pSql, 2);
      const char *zTarget = (const char*)sqlite3_column_text(pSql, 3);
      const char *zCI = (const char*)sqlite3_column_text(pSql, 4);
      const char *zParent = (const char*)sqlite3_column_text(pSql, 5);

      rc = sqlite3_prepare_v2(db, zEQP, -1, &pExplain, 0);
      if( rc!=0 ) break;
      if( 100==sqlite3_step(pExplain) ){
        const char *zPlan = (const char*)sqlite3_column_text(pExplain, 3);
        res = (
              0==sqlite3_strglob(zGlob, zPlan)
           || 0==sqlite3_strglob(zGlobIPK, zPlan)
        );
      }
      rc = sqlite3_finalize(pExplain);
      if( rc!=0 ) break;

      if( res<0 ){
        fprintf(
                  stderr
                        , "Error: internal error");
        break;
      }else{
        if( bGroupByParent
        && (bVerbose || res==0)
        && (zPrev==0 || sqlite3_stricmp(zParent, zPrev))
        ){
          fprintf(out, "-- Parent table %s\n", zParent);
          sqlite3_free(zPrev);
          zPrev = sqlite3_mprintf("%s", zParent);
        }

        if( res==0 ){
          fprintf(out, "%s%s --> %s\n", zIndent, zCI, zTarget);
        }else if( bVerbose ){
          fprintf(out, "%s/* no extra indexes required for %s -> %s */\n",
              zIndent, zFrom, zTarget
          );
        }
      }
    }
    sqlite3_free(zPrev);

    if( rc!=0 ){
      fprintf(
                stderr
                      , "%s\n", sqlite3_errmsg(db));
    }

    rc2 = sqlite3_finalize(pSql);
    if( rc==0 && rc2!=0 ){
      rc = rc2;
      fprintf(
                stderr
                      , "%s\n", sqlite3_errmsg(db));
    }
  }else{
    fprintf(
              stderr
                    , "%s\n", sqlite3_errmsg(db));
  }

  return rc;
}




static int lintDotCommand(
  ShellState *pState,
  char **azArg,
  int nArg
){
  int n={0};
  n = (nArg>=2 ? strlen30(azArg[1]) : 0);
  if( n<1 || sqlite3_strnicmp(azArg[1], "fkey-indexes", n) ) goto usage;
  return lintFkeyIndexes(pState, azArg, nArg);

 usage:
  fprintf(
            stderr
                  , "Usage %s sub-command ?switches...?\n", azArg[0]);
  fprintf(
            stderr
                  , "Where sub-commands are:\n");
  fprintf(
            stderr
                  , "    fkey-indexes\n");
  return 1;
}
static int do_meta_command(char *zLine, ShellState *p){
  int h = 1;
  int nArg = 0;
  int n, c={0};
  int rc = 0;
  char *azArg[50]={0};


  if( p->expert.pExpert ){
    expertFinish(p, 1, 0);
  }

  fprintf(stderr, "NOT executing shell cmd: %s\n", zLine);
  return 0;

  while( zLine[h] && nArg<(int)(sizeof(azArg)/sizeof(azArg[0])) ){
    while( 
          ((*__ctype_b_loc ())[(int) ((
          (unsigned char)zLine[h]
          ))] & (unsigned short int) _ISspace) 
                            ){ h++; }
    if( zLine[h]==0 ) break;
    if( zLine[h]=='\'' || zLine[h]=='"' ){
      int delim = zLine[h++];
      azArg[nArg++] = &zLine[h];
      while( zLine[h] && zLine[h]!=delim ){
        if( zLine[h]=='\\' && delim=='"' && zLine[h+1]!=0 ) h++;
        h++;
      }
      if( zLine[h]==delim ){
        zLine[h++] = 0;
      }
      if( delim=='"' ) resolve_backslashes(azArg[nArg-1]);
    }else{
      azArg[nArg++] = &zLine[h];
      while( zLine[h] && !
                         ((*__ctype_b_loc ())[(int) ((
                         (unsigned char)zLine[h]
                         ))] & (unsigned short int) _ISspace) 
                                           ){ h++; }
      if( zLine[h] ) zLine[h++] = 0;
      resolve_backslashes(azArg[nArg-1]);
    }
  }



  if( nArg==0 ) return 0;
  n = strlen30(azArg[0]);
  c = azArg[0][0];
  clearTempFile(p);


  if( c=='a' && strncmp(azArg[0], "auth", n)==0 ){
    if( nArg!=2 ){
      fprintf(
                stderr
                      , "Usage: .auth ON|OFF\n");
      rc = 1;
      goto meta_command_exit;
    }
    open_db(p, 0);
    if( booleanValue(azArg[1]) ){
      sqlite3_set_authorizer(p->db, shellAuth, p);
    }else{
      sqlite3_set_authorizer(p->db, 0, 0);
    }
  }else
  if( (c=='b' && n>=3 && strncmp(azArg[0], "backup", n)==0)
   || (c=='s' && n>=3 && strncmp(azArg[0], "save", n)==0)
  ){
    const char *zDestFile = 0;
    const char *zDb = 0;
    sqlite3 *pDest={0};
    sqlite3_backup *pBackup={0};
    int j={0};
    int bAsync = 0;
    const char *zVfs = 0;
    for(j=1; j<nArg; j++){
      const char *z = azArg[j];
      if( z[0]=='-' ){
        if( z[1]=='-' ) z++;
        if( strcmp(z, "-append")==0 ){
          zVfs = "apndvfs";
        }else
        if( strcmp(z, "-async")==0 ){
          bAsync = 1;
        }else
        {
          fprintf(
                     stderr
                           , "unknown option: %s\n", azArg[j]);
          return 1;
        }
      }else if( zDestFile==0 ){
        zDestFile = azArg[j];
      }else if( zDb==0 ){
        zDb = zDestFile;
        zDestFile = azArg[j];
      }else{
        fprintf(
                  stderr
                        , "Usage: .backup ?DB? ?OPTIONS? FILENAME\n");
        return 1;
      }
    }
    if( zDestFile==0 ){
      fprintf(
                stderr
                      , "missing FILENAME argument on .backup\n");
      return 1;
    }
    if( zDb==0 ) zDb = "main";
    rc = sqlite3_open_v2(zDestFile, &pDest,
                  0x00000002|0x00000004, zVfs);
    if( rc!=0 ){
      fprintf(
                 stderr
                       , "Error: cannot open \"%s\"\n", zDestFile);
      close_db(pDest);
      return 1;
    }
    if( bAsync ){
      sqlite3_exec(pDest, "PRAGMA synchronous=OFF; PRAGMA journal_mode=OFF;",
                   0, 0, 0);
    }
    open_db(p, 0);
    pBackup = sqlite3_backup_init(pDest, "main", p->db, zDb);
    if( pBackup==0 ){
      fprintf(
                 stderr
                       , "Error: %s\n", sqlite3_errmsg(pDest));
      close_db(pDest);
      return 1;
    }
    while( (rc = sqlite3_backup_step(pBackup,100))==0 ){}
    sqlite3_backup_finish(pBackup);
    if( rc==101 ){
      rc = 0;
    }else{
      fprintf(
                 stderr
                       , "Error: %s\n", sqlite3_errmsg(pDest));
      rc = 1;
    }
    close_db(pDest);
  }else

  if( c=='b' && n>=3 && strncmp(azArg[0], "bail", n)==0 ){
    if( nArg==2 ){
      bail_on_error = booleanValue(azArg[1]);
    }else{
      fprintf(
                stderr
                      , "Usage: .bail on|off\n");
      rc = 1;
    }
  }else

  if( c=='b' && n>=3 && strncmp(azArg[0], "binary", n)==0 ){
    if( nArg==2 ){
      if( booleanValue(azArg[1]) ){
        ;
      }else{
        ;
      }
    }else{
      fprintf(
                stderr
                      , "Usage: .binary on|off\n");
      rc = 1;
    }
  }else

  if( c=='c' && strcmp(azArg[0],"cd")==0 ){
    if( nArg==2 ){





      rc = chdir(azArg[1]);

      if( rc ){
        fprintf(
                   stderr
                         , "Cannot change to directory \"%s\"\n", azArg[1]);
        rc = 1;
      }
    }else{
      fprintf(
                stderr
                      , "Usage: .cd DIRECTORY\n");
      rc = 1;
    }
  }else




  if( c=='b' && n>=3 && strncmp(azArg[0], "breakpoint", n)==0 ){
    test_breakpoint();
  }else

  if( c=='c' && n>=3 && strncmp(azArg[0], "changes", n)==0 ){
    if( nArg==2 ){
      setOrClearFlag(p, 0x00000020, azArg[1]);
    }else{
      fprintf(
                stderr
                      , "Usage: .changes on|off\n");
      rc = 1;
    }
  }else





  if( c=='c' && n>=3 && strncmp(azArg[0], "check", n)==0 ){
    char *zRes = 0;
    output_reset(p);
    if( nArg!=2 ){
      fprintf(
                stderr
                      , "Usage: .check GLOB-PATTERN\n");
      rc = 2;
    }else if( (zRes = readFile("testcase-out.txt", 0))==0 ){
      fprintf(
                stderr
                      , "Error: cannot read 'testcase-out.txt'\n");
      rc = 2;
    }else if( testcase_glob(azArg[1],zRes)==0 ){
      fprintf(
                 stderr
                       ,
                 "testcase-%s FAILED\n Expected: [%s]\n      Got: [%s]\n",
                 p->zTestcase, azArg[1], zRes);
      rc = 1;
    }else{
      fprintf(
                 stdout
                       , "testcase-%s ok\n", p->zTestcase);
      p->nCheck++;
    }
    sqlite3_free(zRes);
  }else

  if( c=='c' && strncmp(azArg[0], "clone", n)==0 ){
    if( nArg==2 ){
      tryToClone(p, azArg[1]);
    }else{
      fprintf(
                stderr
                      , "Usage: .clone FILENAME\n");
      rc = 1;
    }
  }else

  if( c=='d' && n>1 && strncmp(azArg[0], "databases", n)==0 ){
    ShellState data={0};
    char *zErrMsg = 0;
    open_db(p, 0);
    memcpy(&data, p, sizeof(data));
    data.showHeader = 0;
    data.cMode = data.mode = 2;
    sqlite3_snprintf(sizeof(data.colSeparator),data.colSeparator,": ");
    data.cnt = 0;
    sqlite3_exec(p->db, "SELECT name, file FROM pragma_database_list",
                 callback, &data, &zErrMsg);
    if( zErrMsg ){
      fprintf(
                 stderr
                       ,"Error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
      rc = 1;
    }
  }else

  if( c=='d' && n>=3 && strncmp(azArg[0], "dbconfig", n)==0 ){
    static const struct DbConfigChoices {
      const char *zName;
      int op;
    } aDbConfig[] = {
        { "enable_fkey", 1002 },
        { "enable_trigger", 1003 },
        { "fts3_tokenizer", 1004 },
        { "load_extension", 1005 },
        { "no_ckpt_on_close", 1006 },
        { "enable_qpsg", 1007 },
        { "trigger_eqp", 1008 },
        { "reset_database", 1009 },
        { "defensive", 1010 },
    };
    int ii, v={0};
    open_db(p, 0);
    for(ii=0; ii<(int)(sizeof(aDbConfig)/sizeof(aDbConfig[0])); ii++){
      if( nArg>1 && strcmp(azArg[1], aDbConfig[ii].zName)!=0 ) continue;
      if( nArg>=3 ){
        sqlite3_db_config(p->db, aDbConfig[ii].op, booleanValue(azArg[2]), 0);
      }
      sqlite3_db_config(p->db, aDbConfig[ii].op, -1, &v);
      fprintf(p->out, "%18s %s\n", aDbConfig[ii].zName, v ? "on" : "off");
      if( nArg>1 ) break;
    }
    if( nArg>1 && ii==(int)(sizeof(aDbConfig)/sizeof(aDbConfig[0])) ){
      fprintf(
                 stderr
                       , "Error: unknown dbconfig \"%s\"\n", azArg[1]);
      fprintf(
                 stderr
                       , "Enter \".dbconfig\" with no arguments for a list\n");
    }
  }else

  if( c=='d' && n>=3 && strncmp(azArg[0], "dbinfo", n)==0 ){
    rc = shell_dbinfo_command(p, nArg, azArg);
  }else

  if( c=='d' && strncmp(azArg[0], "dump", n)==0 ){
    const char *zLike = 0;
    int i={0};
    int savedShowHeader = p->showHeader;
    int savedShellFlags = p->shellFlgs;
    ((p)->shellFlgs&=(~(0x00000008|0x00000010|0x00000040)));
    for(i=1; i<nArg; i++){
      if( azArg[i][0]=='-' ){
        const char *z = azArg[i]+1;
        if( z[0]=='-' ) z++;
        if( strcmp(z,"preserve-rowids")==0 ){






          ((p)->shellFlgs|=(0x00000008));

        }else
        if( strcmp(z,"newlines")==0 ){
          ((p)->shellFlgs|=(0x00000010));
        }else
        {
          fprintf(
                    stderr
                          , "Unknown option \"%s\" on \".dump\"\n", azArg[i]);
          rc = 1;
          goto meta_command_exit;
        }
      }else if( zLike ){
        fprintf(
                  stderr
                        , "Usage: .dump ?--preserve-rowids? "
                           "?--newlines? ?LIKE-PATTERN?\n");
        rc = 1;
        goto meta_command_exit;
      }else{
        zLike = azArg[i];
      }
    }
    open_db(p, 0);



    fprintf(p->out, "PRAGMA foreign_keys=OFF;\n");
    fprintf(p->out, "BEGIN TRANSACTION;\n");
    p->writableSchema = 0;
    p->showHeader = 0;



    sqlite3_exec(p->db, "SAVEPOINT dump; PRAGMA writable_schema=ON", 0, 0, 0);
    p->nErr = 0;
    if( zLike==0 ){
      run_schema_dump_query(p,
        "SELECT name, type, sql FROM sqlite_master "
        "WHERE sql NOT NULL AND type=='table' AND name!='sqlite_sequence'"
      );
      run_schema_dump_query(p,
        "SELECT name, type, sql FROM sqlite_master "
        "WHERE name=='sqlite_sequence'"
      );
      run_table_dump_query(p,
        "SELECT sql FROM sqlite_master "
        "WHERE sql NOT NULL AND type IN ('index','trigger','view')", 0
      );
    }else{
      char *zSql={0};
      zSql = sqlite3_mprintf(
        "SELECT name, type, sql FROM sqlite_master "
        "WHERE tbl_name LIKE %Q AND type=='table'"
        "  AND sql NOT NULL", zLike);
      run_schema_dump_query(p,zSql);
      sqlite3_free(zSql);
      zSql = sqlite3_mprintf(
        "SELECT sql FROM sqlite_master "
        "WHERE sql NOT NULL"
        "  AND type IN ('index','trigger','view')"
        "  AND tbl_name LIKE %Q", zLike);
      run_table_dump_query(p, zSql, 0);
      sqlite3_free(zSql);
    }
    if( p->writableSchema ){
      fprintf(p->out, "PRAGMA writable_schema=OFF;\n");
      p->writableSchema = 0;
    }
    sqlite3_exec(p->db, "PRAGMA writable_schema=OFF;", 0, 0, 0);
    sqlite3_exec(p->db, "RELEASE dump;", 0, 0, 0);
    fprintf(p->out, p->nErr ? "ROLLBACK; -- due to errors\n" : "COMMIT;\n");
    p->showHeader = savedShowHeader;
    p->shellFlgs = savedShellFlags;
  }else

  if( c=='e' && strncmp(azArg[0], "echo", n)==0 ){
    if( nArg==2 ){
      setOrClearFlag(p, 0x00000040, azArg[1]);
    }else{
      fprintf(
                stderr
                      , "Usage: .echo on|off\n");
      rc = 1;
    }
  }else

  if( c=='e' && strncmp(azArg[0], "eqp", n)==0 ){
    if( nArg==2 ){
      p->autoEQPtest = 0;
      if( p->autoEQPtrace ){
        if( p->db ) sqlite3_exec(p->db, "PRAGMA vdbe_trace=OFF;", 0, 0, 0);
        p->autoEQPtrace = 0;
      }
      if( strcmp(azArg[1],"full")==0 ){
        p->autoEQP = 3;
      }else if( strcmp(azArg[1],"trigger")==0 ){
        p->autoEQP = 2;
      }else{
        p->autoEQP = (u8)booleanValue(azArg[1]);
      }
    }else{
      fprintf(
                stderr
                      , "Usage: .eqp off|on|trace|trigger|full\n");
      rc = 1;
    }
  }else

  if( c=='e' && strncmp(azArg[0], "exit", n)==0 ){
    if( nArg>1 && (rc = (int)integerValue(azArg[1]))!=0 ) exit(rc);
    rc = 2;
  }else



  if( c=='e' && strncmp(azArg[0], "explain", n)==0 ){
    int val = 1;
    if( nArg>=2 ){
      if( strcmp(azArg[1],"auto")==0 ){
        val = 99;
      }else{
        val = booleanValue(azArg[1]);
      }
    }
    if( val==1 && p->mode!=9 ){
      p->normalMode = p->mode;
      p->mode = 9;
      p->autoExplain = 0;
    }else if( val==0 ){
      if( p->mode==9 ) p->mode = p->normalMode;
      p->autoExplain = 0;
    }else if( val==99 ){
      if( p->mode==9 ) p->mode = p->normalMode;
      p->autoExplain = 1;
    }
  }else


  if( c=='e' && strncmp(azArg[0], "expert", n)==0 ){
    open_db(p, 0);
    expertDotCommand(p, azArg, nArg);
  }else


  if( c=='f' && strncmp(azArg[0], "fullschema", n)==0 ){
    ShellState data={0};
    char *zErrMsg = 0;
    int doStats = 0;
    memcpy(&data, p, sizeof(data));
    data.showHeader = 0;
    data.cMode = data.mode = 3;
    if( nArg==2 && optionMatch(azArg[1], "indent") ){
      data.cMode = data.mode = 11;
      nArg = 1;
    }
    if( nArg!=1 ){
      fprintf(
                stderr
                      , "Usage: .fullschema ?--indent?\n");
      rc = 1;
      goto meta_command_exit;
    }
    open_db(p, 0);
    rc = sqlite3_exec(p->db,
       "SELECT sql FROM"
       "  (SELECT sql sql, type type, tbl_name tbl_name, name name, rowid x"
       "     FROM sqlite_master UNION ALL"
       "   SELECT sql, type, tbl_name, name, rowid FROM sqlite_temp_master) "
       "WHERE type!='meta' AND sql NOTNULL AND name NOT LIKE 'sqlite_%' "
       "ORDER BY rowid",
       callback, &data, &zErrMsg
    );
    if( rc==0 ){
      sqlite3_stmt *pStmt={0};
      rc = sqlite3_prepare_v2(p->db,
               "SELECT rowid FROM sqlite_master"
               " WHERE name GLOB 'sqlite_stat[134]'",
               -1, &pStmt, 0);
      doStats = sqlite3_step(pStmt)==100;
      sqlite3_finalize(pStmt);
    }
    if( doStats==0 ){
      fprintf(p->out, "/* No STAT tables available */\n");
    }else{
      fprintf(p->out, "ANALYZE sqlite_master;\n");
      sqlite3_exec(p->db, "SELECT 'ANALYZE sqlite_master'",
                   callback, &data, &zErrMsg);
      data.cMode = data.mode = 5;
      data.zDestTable = "sqlite_stat1";
      shell_exec(&data, "SELECT * FROM sqlite_stat1", &zErrMsg);
      data.zDestTable = "sqlite_stat3";
      shell_exec(&data, "SELECT * FROM sqlite_stat3", &zErrMsg);
      data.zDestTable = "sqlite_stat4";
      shell_exec(&data, "SELECT * FROM sqlite_stat4", &zErrMsg);
      fprintf(p->out, "ANALYZE sqlite_master;\n");
    }
  }else

  if( c=='h' && strncmp(azArg[0], "headers", n)==0 ){
    if( nArg==2 ){
      p->showHeader = booleanValue(azArg[1]);
    }else{
      fprintf(
                stderr
                      , "Usage: .headers on|off\n");
      rc = 1;
    }
  }else

  if( c=='h' && strncmp(azArg[0], "help", n)==0 ){
    if( nArg>=2 ){
      n = showHelp(p->out, azArg[1]);
      if( n==0 ){
        fprintf(p->out, "Nothing matches '%s'\n", azArg[1]);
      }
    }else{
      showHelp(p->out, 0);
    }
  }else

  if( c=='i' && strncmp(azArg[0], "import", n)==0 ){
    char *zTable={0};
    char *zFile={0};
    sqlite3_stmt *pStmt = 
                         ((void *)0)
                             ;
    int nCol={0};
    int nByte={0};
    int i, j={0};
    int needCommit={0};
    int nSep={0};
    char *zSql={0};
    ImportCtx sCtx={0};
    char *( *xRead)(ImportCtx*)={0};
    int ( *xCloser)(FILE*)={0};

    if( nArg!=3 ){
      fprintf(
                stderr
                      , "Usage: .import FILE TABLE\n");
      goto meta_command_exit;
    }
    zFile = azArg[1];
    zTable = azArg[2];
    seenInterrupt = 0;
    memset(&sCtx, 0, sizeof(sCtx));
    open_db(p, 0);
    nSep = strlen30(p->colSeparator);
    if( nSep==0 ){
      fprintf(
                stderr
                      ,
                 "Error: non-null column separator required for import\n");
      return 1;
    }
    if( nSep>1 ){
      fprintf(
                stderr
                      , "Error: multi-character column separators not allowed"
                      " for import\n");
      return 1;
    }
    nSep = strlen30(p->rowSeparator);
    if( nSep==0 ){
      fprintf(
                stderr
                      , "Error: non-null row separator required for import\n");
      return 1;
    }
    if( nSep==2 && p->mode==8 && strcmp(p->rowSeparator, "\r\n")==0 ){




      sqlite3_snprintf(sizeof(p->rowSeparator), p->rowSeparator, "\n");
      nSep = strlen30(p->rowSeparator);
    }
    if( nSep>1 ){
      fprintf(
                stderr
                      , "Error: multi-character row separators not allowed"
                      " for import\n");
      return 1;
    }
    sCtx.zFile = zFile;
    sCtx.nLine = 1;
    if( sCtx.zFile[0]=='|' ){




      sCtx.in = popen(sCtx.zFile+1, "r");
      sCtx.zFile = "<pipe>";
      xCloser = pclose;

    }else{
      sCtx.in = fopen(sCtx.zFile, "rb");
      xCloser = fclose;
    }
    if( p->mode==10 ){
      xRead = ascii_read_one_field;
    }else{
      xRead = csv_read_one_field;
    }
    if( sCtx.in==0 ){
      fprintf(
                 stderr
                       , "Error: cannot open \"%s\"\n", zFile);
      return 1;
    }
    sCtx.cColSep = p->colSeparator[0];
    sCtx.cRowSep = p->rowSeparator[0];
    zSql = sqlite3_mprintf("SELECT * FROM %s", zTable);
    if( zSql==0 ){
      xCloser(sCtx.in);
      shell_out_of_memory();
    }
    nByte = strlen30(zSql);
    rc = sqlite3_prepare_v2(p->db, zSql, -1, &pStmt, 0);
    import_append_char(&sCtx, 0);
    if( rc && sqlite3_strglob("no such table: *", sqlite3_errmsg(p->db))==0 ){
      char *zCreate = sqlite3_mprintf("CREATE TABLE %s", zTable);
      char cSep = '(';
      while( xRead(&sCtx) ){
        zCreate = sqlite3_mprintf("%z%c\n  \"%w\" TEXT", zCreate, cSep, sCtx.z);
        cSep = ',';
        if( sCtx.cTerm!=sCtx.cColSep ) break;
      }
      if( cSep=='(' ){
        sqlite3_free(zCreate);
        sqlite3_free(sCtx.z);
        xCloser(sCtx.in);
        fprintf(
                   stderr
                         ,"%s: empty file\n", sCtx.zFile);
        return 1;
      }
      zCreate = sqlite3_mprintf("%z\n)", zCreate);
      rc = sqlite3_exec(p->db, zCreate, 0, 0, 0);
      sqlite3_free(zCreate);
      if( rc ){
        fprintf(
                   stderr
                         , "CREATE TABLE %s(...) failed: %s\n", zTable,
                sqlite3_errmsg(p->db));
        sqlite3_free(sCtx.z);
        xCloser(sCtx.in);
        return 1;
      }
      rc = sqlite3_prepare_v2(p->db, zSql, -1, &pStmt, 0);
    }
    sqlite3_free(zSql);
    if( rc ){
      if (pStmt) sqlite3_finalize(pStmt);
      fprintf(
                 stderr
                       ,"Error: %s\n", sqlite3_errmsg(p->db));
      xCloser(sCtx.in);
      return 1;
    }
    nCol = sqlite3_column_count(pStmt);
    sqlite3_finalize(pStmt);
    pStmt = 0;
    if( nCol==0 ) return 0;
    zSql = sqlite3_malloc64( nByte*2 + 20 + nCol*2 );
    if( zSql==0 ){
      xCloser(sCtx.in);
      shell_out_of_memory();
    }
    sqlite3_snprintf(nByte+20, zSql, "INSERT INTO \"%w\" VALUES(?", zTable);
    j = strlen30(zSql);
    for(i=1; i<nCol; i++){
      zSql[j++] = ',';
      zSql[j++] = '?';
    }
    zSql[j++] = ')';
    zSql[j] = 0;
    rc = sqlite3_prepare_v2(p->db, zSql, -1, &pStmt, 0);
    sqlite3_free(zSql);
    if( rc ){
      fprintf(
                 stderr
                       , "Error: %s\n", sqlite3_errmsg(p->db));
      if (pStmt) sqlite3_finalize(pStmt);
      xCloser(sCtx.in);
      return 1;
    }
    needCommit = sqlite3_get_autocommit(p->db);
    if( needCommit ) sqlite3_exec(p->db, "BEGIN", 0, 0, 0);
    do{
      int startLine = sCtx.nLine;
      for(i=0; i<nCol; i++){
        char *z = xRead(&sCtx);




        if( z==0 && i==0 ) break;





        if( p->mode==10 && (z==0 || z[0]==0) && i==0 ) break;
        sqlite3_bind_text(pStmt, i+1, z, -1, ((sqlite3_destructor_type)-1));
        if( i<nCol-1 && sCtx.cTerm!=sCtx.cColSep ){
          fprintf(
                     stderr
                           , "%s:%d: expected %d columns but found %d - "
                          "filling the rest with NULL\n",
                          sCtx.zFile, startLine, nCol, i+1);
          i += 2;
          while( i<=nCol ){ sqlite3_bind_null(pStmt, i); i++; }
        }
      }
      if( sCtx.cTerm==sCtx.cColSep ){
        do{
          xRead(&sCtx);
          i++;
        }while( sCtx.cTerm==sCtx.cColSep );
        fprintf(
                   stderr
                         , "%s:%d: expected %d columns but found %d - "
                        "extras ignored\n",
                        sCtx.zFile, startLine, nCol, i);
      }
      if( i>=nCol ){
        sqlite3_step(pStmt);
        rc = sqlite3_reset(pStmt);
        if( rc!=0 ){
          fprintf(
                     stderr
                           , "%s:%d: INSERT failed: %s\n", sCtx.zFile,
                      startLine, sqlite3_errmsg(p->db));
        }
      }
    }while( sCtx.cTerm!=
                       (-1) 
                           );

    xCloser(sCtx.in);
    sqlite3_free(sCtx.z);
    sqlite3_finalize(pStmt);
    if( needCommit ) sqlite3_exec(p->db, "COMMIT", 0, 0, 0);
  }else


  if( c=='i' && strncmp(azArg[0], "imposter", n)==0 ){
    char *zSql={0};
    char *zCollist = 0;
    sqlite3_stmt *pStmt={0};
    int tnum = 0;
    int i={0};
    if( !(nArg==3 || (nArg==2 && sqlite3_stricmp(azArg[1],"off")==0)) ){
      fprintf(
                 stderr
                       , "Usage: .imposter INDEX IMPOSTER\n"
                          "       .imposter off\n");
      rc = 1;
      goto meta_command_exit;
    }
    open_db(p, 0);
    if( nArg==2 ){
      sqlite3_test_control(25, p->db, "main", 0, 1);
      goto meta_command_exit;
    }
    zSql = sqlite3_mprintf("SELECT rootpage FROM sqlite_master"
                           " WHERE name='%q' AND type='index'", azArg[1]);
    sqlite3_prepare_v2(p->db, zSql, -1, &pStmt, 0);
    sqlite3_free(zSql);
    if( sqlite3_step(pStmt)==100 ){
      tnum = sqlite3_column_int(pStmt, 0);
    }
    sqlite3_finalize(pStmt);
    if( tnum==0 ){
      fprintf(
                 stderr
                       , "no such index: \"%s\"\n", azArg[1]);
      rc = 1;
      goto meta_command_exit;
    }
    zSql = sqlite3_mprintf("PRAGMA index_xinfo='%q'", azArg[1]);
    rc = sqlite3_prepare_v2(p->db, zSql, -1, &pStmt, 0);
    sqlite3_free(zSql);
    i = 0;
    while( sqlite3_step(pStmt)==100 ){
      char zLabel[20]={0};
      const char *zCol = (const char*)sqlite3_column_text(pStmt,2);
      i++;
      if( zCol==0 ){
        if( sqlite3_column_int(pStmt,1)==-1 ){
          zCol = "_ROWID_";
        }else{
          sqlite3_snprintf(sizeof(zLabel),zLabel,"expr%d",i);
          zCol = zLabel;
        }
      }
      if( zCollist==0 ){
        zCollist = sqlite3_mprintf("\"%w\"", zCol);
      }else{
        zCollist = sqlite3_mprintf("%z,\"%w\"", zCollist, zCol);
      }
    }
    sqlite3_finalize(pStmt);
    zSql = sqlite3_mprintf(
          "CREATE TABLE \"%w\"(%s,PRIMARY KEY(%s))WITHOUT ROWID",
          azArg[2], zCollist, zCollist);
    sqlite3_free(zCollist);
    rc = sqlite3_test_control(25, p->db, "main", 1, tnum);
    if( rc==0 ){
      rc = sqlite3_exec(p->db, zSql, 0, 0, 0);
      sqlite3_test_control(25, p->db, "main", 0, 0);
      if( rc ){
        fprintf(
                   stderr
                         , "Error in [%s]: %s\n", zSql, sqlite3_errmsg(p->db));
      }else{
        fprintf(
                   stdout
                         , "%s;\n", zSql);
        fprintf(
                  stdout
                        ,
           "WARNING: writing to an imposter table will corrupt the index!\n"
        );
      }
    }else{
      fprintf(
                stderr
                      , "SQLITE_TESTCTRL_IMPOSTER returns %d\n", rc);
      rc = 1;
    }
    sqlite3_free(zSql);
  }else
  if( c=='l' && n>=5 && strncmp(azArg[0], "limits", n)==0 ){
    static const struct {
       const char *zLimitName;
       int limitCode;
    } aLimit[] = {
      { "length", 0 },
      { "sql_length", 1 },
      { "column", 2 },
      { "expr_depth", 3 },
      { "compound_select", 4 },
      { "vdbe_op", 5 },
      { "function_arg", 6 },
      { "attached", 7 },
      { "like_pattern_length", 8 },
      { "variable_number", 9 },
      { "trigger_depth", 10 },
      { "worker_threads", 11 },
    };
    int i, n2={0};
    open_db(p, 0);
    if( nArg==1 ){
      for(i=0; i<(int)(sizeof(aLimit)/sizeof(aLimit[0])); i++){
        printf("%20s %d\n", aLimit[i].zLimitName,
               sqlite3_limit(p->db, aLimit[i].limitCode, -1));
      }
    }else if( nArg>3 ){
      fprintf(
                stderr
                      , "Usage: .limit NAME ?NEW-VALUE?\n");
      rc = 1;
      goto meta_command_exit;
    }else{
      int iLimit = -1;
      n2 = strlen30(azArg[1]);
      for(i=0; i<(int)(sizeof(aLimit)/sizeof(aLimit[0])); i++){
        if( sqlite3_strnicmp(aLimit[i].zLimitName, azArg[1], n2)==0 ){
          if( iLimit<0 ){
            iLimit = i;
          }else{
            fprintf(
                       stderr
                             , "ambiguous limit: \"%s\"\n", azArg[1]);
            rc = 1;
            goto meta_command_exit;
          }
        }
      }
      if( iLimit<0 ){
        fprintf(
                   stderr
                         , "unknown limit: \"%s\"\n"
                        "enter \".limits\" with no arguments for a list.\n",
                         azArg[1]);
        rc = 1;
        goto meta_command_exit;
      }
      if( nArg==3 ){
        sqlite3_limit(p->db, aLimit[iLimit].limitCode,
                      (int)integerValue(azArg[2]));
      }
      printf("%20s %d\n", aLimit[iLimit].zLimitName,
             sqlite3_limit(p->db, aLimit[iLimit].limitCode, -1));
    }
  }else

  if( c=='l' && n>2 && strncmp(azArg[0], "lint", n)==0 ){
    open_db(p, 0);
    lintDotCommand(p, azArg, nArg);
  }else


  if( c=='l' && strncmp(azArg[0], "load", n)==0 ){
    const char *zFile, *zProc={0};
    char *zErrMsg = 0;
    if( nArg<2 ){
      fprintf(
                stderr
                      , "Usage: .load FILE ?ENTRYPOINT?\n");
      rc = 1;
      goto meta_command_exit;
    }
    zFile = azArg[1];
    zProc = nArg>=3 ? azArg[2] : 0;
    open_db(p, 0);
    rc = sqlite3_load_extension(p->db, zFile, zProc, &zErrMsg);
    if( rc!=0 ){
      fprintf(
                 stderr
                       , "Error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
      rc = 1;
    }
  }else


  if( c=='l' && strncmp(azArg[0], "log", n)==0 ){
    if( nArg!=2 ){
      fprintf(
                stderr
                      , "Usage: .log FILENAME\n");
      rc = 1;
    }else{
      const char *zFile = azArg[1];
      output_file_close(p->pLog);
      p->pLog = output_file_open(zFile, 0);
    }
  }else

  if( c=='m' && strncmp(azArg[0], "mode", n)==0 ){
    const char *zMode = nArg>=2 ? azArg[1] : "";
    int n2 = strlen30(zMode);
    int c2 = zMode[0];
    if( c2=='l' && n2>2 && strncmp(azArg[1],"lines",n2)==0 ){
      p->mode = 0;
      sqlite3_snprintf(sizeof(p->rowSeparator), p->rowSeparator, "\n");
    }else if( c2=='c' && strncmp(azArg[1],"columns",n2)==0 ){
      p->mode = 1;
      sqlite3_snprintf(sizeof(p->rowSeparator), p->rowSeparator, "\n");
    }else if( c2=='l' && n2>2 && strncmp(azArg[1],"list",n2)==0 ){
      p->mode = 2;
      sqlite3_snprintf(sizeof(p->colSeparator), p->colSeparator, "|");
      sqlite3_snprintf(sizeof(p->rowSeparator), p->rowSeparator, "\n");
    }else if( c2=='h' && strncmp(azArg[1],"html",n2)==0 ){
      p->mode = 4;
    }else if( c2=='t' && strncmp(azArg[1],"tcl",n2)==0 ){
      p->mode = 7;
      sqlite3_snprintf(sizeof(p->colSeparator), p->colSeparator, " ");
      sqlite3_snprintf(sizeof(p->rowSeparator), p->rowSeparator, "\n");
    }else if( c2=='c' && strncmp(azArg[1],"csv",n2)==0 ){
      p->mode = 8;
      sqlite3_snprintf(sizeof(p->colSeparator), p->colSeparator, ",");
      sqlite3_snprintf(sizeof(p->rowSeparator), p->rowSeparator, "\r\n");
    }else if( c2=='t' && strncmp(azArg[1],"tabs",n2)==0 ){
      p->mode = 2;
      sqlite3_snprintf(sizeof(p->colSeparator), p->colSeparator, "\t");
    }else if( c2=='i' && strncmp(azArg[1],"insert",n2)==0 ){
      p->mode = 5;
      set_table_name(p, nArg>=3 ? azArg[2] : "table");
    }else if( c2=='q' && strncmp(azArg[1],"quote",n2)==0 ){
      p->mode = 6;
    }else if( c2=='a' && strncmp(azArg[1],"ascii",n2)==0 ){
      p->mode = 10;
      sqlite3_snprintf(sizeof(p->colSeparator), p->colSeparator, "\x1F");
      sqlite3_snprintf(sizeof(p->rowSeparator), p->rowSeparator, "\x1E");
    }else if( nArg==1 ){
      fprintf(p->out, "current output mode: %s\n", modeDescr[p->mode]);
    }else{
      fprintf(
                stderr
                      , "Error: mode should be one of: "
         "ascii column csv html insert line list quote tabs tcl\n");
      rc = 1;
    }
    p->cMode = p->mode;
  }else

  if( c=='n' && strncmp(azArg[0], "nullvalue", n)==0 ){
    if( nArg==2 ){
      sqlite3_snprintf(sizeof(p->nullValue), p->nullValue,
                       "%.*s", (int)(int)(sizeof(p->nullValue)/sizeof(p->nullValue[0]))-1, azArg[1]);
    }else{
      fprintf(
                stderr
                      , "Usage: .nullvalue STRING\n");
      rc = 1;
    }
  }else

  if( c=='o' && strncmp(azArg[0], "open", n)==0 && n>=2 ){
    char *zNewFilename={0};
    int iName = 1;
    int newFlag = 0;

    ;
    close_db(p->db);
    p->db = 0;
    p->zDbFilename = 0;
    sqlite3_free(p->zFreeOnClose);
    p->zFreeOnClose = 0;
    p->openMode = 0;
    p->szMax = 0;

    for(iName=1; iName<nArg && azArg[iName][0]=='-'; iName++){
      const char *z = azArg[iName];
      if( optionMatch(z,"new") ){
        newFlag = 1;




      }else if( optionMatch(z, "append") ){
        p->openMode = 2;
      }else if( optionMatch(z, "readonly") ){
        p->openMode = 4;
      }else if( z[0]=='-' ){
        fprintf(
                   stderr
                         , "unknown option: %s\n", z);
        rc = 1;
        goto meta_command_exit;
      }
    }

    zNewFilename = nArg>iName ? sqlite3_mprintf("%s", azArg[iName]) : 0;
    if( zNewFilename || p->openMode==6 ){
      if( newFlag ) shellDeleteFile(zNewFilename);
      p->zDbFilename = zNewFilename;
      open_db(p, 0x001);
      if( p->db==0 ){
        fprintf(
                   stderr
                         , "Error: cannot open '%s'\n", zNewFilename);
        sqlite3_free(zNewFilename);
      }else{
        p->zFreeOnClose = zNewFilename;
      }
    }
    if( p->db==0 ){

      p->zDbFilename = 0;
      open_db(p, 0);
    }
  }else

  if( (c=='o'
        && (strncmp(azArg[0], "output", n)==0||strncmp(azArg[0], "once", n)==0))
   || (c=='e' && n==5 && strcmp(azArg[0],"excel")==0)
  ){
    const char *zFile = nArg>=2 ? azArg[1] : "stdout";
    int bTxtMode = 0;
    if( azArg[0][0]=='e' ){

      nArg = 2;
      azArg[0] = "once";
      zFile = azArg[1] = "-x";
      n = 4;
    }
    if( nArg>2 ){
      fprintf(
                 stderr
                       , "Usage: .%s [-e|-x|FILE]\n", azArg[0]);
      rc = 1;
      goto meta_command_exit;
    }
    if( n>1 && strncmp(azArg[0], "once", n)==0 ){
      if( nArg<2 ){
        fprintf(
                  stderr
                        , "Usage: .once (-e|-x|FILE)\n");
        rc = 1;
        goto meta_command_exit;
      }
      p->outCount = 2;
    }else{
      p->outCount = 0;
    }
    output_reset(p);
    if( zFile[0]=='-' && zFile[1]=='-' ) zFile++;

    if( strcmp(zFile, "-e")==0 || strcmp(zFile, "-x")==0 ){
      p->doXdgOpen = 1;
      outputModePush(p);
      if( zFile[1]=='x' ){
        newTempFile(p, "csv");
        p->mode = 8;
        sqlite3_snprintf(sizeof(p->colSeparator), p->colSeparator, ",");
        sqlite3_snprintf(sizeof(p->rowSeparator), p->rowSeparator, "\r\n");
      }else{
        newTempFile(p, "txt");
        bTxtMode = 1;
      }
      zFile = p->zTempFile;
    }

    if( zFile[0]=='|' ){





      p->out = popen(zFile + 1, "w");
      if( p->out==0 ){
        fprintf(
                   stderr
                         ,"Error: cannot open pipe \"%s\"\n", zFile + 1);
        p->out = 
                stdout
                      ;
        rc = 1;
      }else{
        sqlite3_snprintf(sizeof(p->outfile), p->outfile, "%s", zFile);
      }

    }else{
      p->out = output_file_open(zFile, bTxtMode);
      if( p->out==0 ){
        if( strcmp(zFile,"off")!=0 ){
          fprintf(
                     stderr
                           ,"Error: cannot write to \"%s\"\n", zFile);
        }
        p->out = 
                stdout
                      ;
        rc = 1;
      } else {
        sqlite3_snprintf(sizeof(p->outfile), p->outfile, "%s", zFile);
      }
    }
  }else

  if( c=='p' && n>=3 && strncmp(azArg[0], "parameter", n)==0 ){
    open_db(p,0);
    if( nArg<=1 ) goto parameter_syntax_error;




    if( nArg==2 && strcmp(azArg[1],"clear")==0 ){
      int wrSchema = 0;
      sqlite3_db_config(p->db, 1011, -1, &wrSchema);
      sqlite3_db_config(p->db, 1011, 1, 0);
      sqlite3_exec(p->db, "DROP TABLE IF EXISTS temp.sqlite_parameters;",
                   0, 0, 0);
      sqlite3_db_config(p->db, 1011, wrSchema, 0);
    }else




    if( nArg==2 && strcmp(azArg[1],"list")==0 ){
      sqlite3_stmt *pStmt = 0;
      int rx={0};
      int len = 0;
      rx = sqlite3_prepare_v2(p->db,
             "SELECT max(length(key)) "
             "FROM temp.sqlite_parameters;", -1, &pStmt, 0);
      if( rx==0 && sqlite3_step(pStmt)==100 ){
        len = sqlite3_column_int(pStmt, 0);
        if( len>40 ) len = 40;
      }
      sqlite3_finalize(pStmt);
      pStmt = 0;
      if( len ){
        rx = sqlite3_prepare_v2(p->db,
             "SELECT key, quote(value) "
             "FROM temp.sqlite_parameters;", -1, &pStmt, 0);
        while( sqlite3_step(pStmt)==100 ){
          fprintf(p->out, "%-*s %s\n", len, sqlite3_column_text(pStmt,0),
                      sqlite3_column_text(pStmt,1));
        }
        sqlite3_finalize(pStmt);
      }
    }else





    if( nArg==2 && strcmp(azArg[1],"init")==0 ){
      bind_table_init(p);
    }else







    if( nArg==4 && strcmp(azArg[1],"set")==0 ){
      int rx={0};
      char *zSql={0};
      sqlite3_stmt *pStmt={0};
      const char *zKey = azArg[2];
      const char *zValue = azArg[3];
      bind_table_init(p);
      zSql = sqlite3_mprintf(
                  "REPLACE INTO temp.sqlite_parameters(key,value)"
                  "VALUES(%Q,%s);", zKey, zValue);
      if( zSql==0 ) shell_out_of_memory();
      pStmt = 0;
      rx = sqlite3_prepare_v2(p->db, zSql, -1, &pStmt, 0);
      sqlite3_free(zSql);
      if( rx!=0 ){
        sqlite3_finalize(pStmt);
        pStmt = 0;
        zSql = sqlite3_mprintf(
                   "REPLACE INTO temp.sqlite_parameters(key,value)"
                   "VALUES(%Q,%Q);", zKey, zValue);
        if( zSql==0 ) shell_out_of_memory();
        rx = sqlite3_prepare_v2(p->db, zSql, -1, &pStmt, 0);
        sqlite3_free(zSql);
        if( rx!=0 ){
          fprintf(p->out, "Error: %s\n", sqlite3_errmsg(p->db));
          sqlite3_finalize(pStmt);
          pStmt = 0;
          rc = 1;
        }
      }
      sqlite3_step(pStmt);
      sqlite3_finalize(pStmt);
    }else





    if( nArg==3 && strcmp(azArg[1],"unset")==0 ){
      char *zSql = sqlite3_mprintf(
          "DELETE FROM temp.sqlite_parameters WHERE key=%Q", azArg[2]);
      if( zSql==0 ) shell_out_of_memory();
      sqlite3_exec(p->db, zSql, 0, 0, 0);
      sqlite3_free(zSql);
    }else

    parameter_syntax_error:
    showHelp(p->out, "parameter");
  }else

  if( c=='p' && n>=3 && strncmp(azArg[0], "print", n)==0 ){
    int i={0};
    for(i=1; i<nArg; i++){
      if( i>1 ) fprintf(p->out, " ");
      fprintf(p->out, "%s", azArg[i]);
    }
    fprintf(p->out, "\n");
  }else


  if( c=='p' && n>=3 && strncmp(azArg[0], "progress", n)==0 ){
    int i={0};
    int nn = 0;
    p->flgProgress = 0;
    p->mxProgress = 0;
    p->nProgress = 0;
    for(i=1; i<nArg; i++){
      const char *z = azArg[i];
      if( z[0]=='-' ){
        z++;
        if( z[0]=='-' ) z++;
        if( strcmp(z,"quiet")==0 || strcmp(z,"q")==0 ){
          p->flgProgress |= 0x01;
          continue;
        }
        if( strcmp(z,"reset")==0 ){
          p->flgProgress |= 0x02;
          continue;
        }
        if( strcmp(z,"once")==0 ){
          p->flgProgress |= 0x04;
          continue;
        }
        if( strcmp(z,"limit")==0 ){
          if( i+1>=nArg ){
            fprintf(
                       stderr
                             , "Error: missing argument on --limit\n");
            rc = 1;
            goto meta_command_exit;
          }else{
            p->mxProgress = (int)integerValue(azArg[++i]);
          }
          continue;
        }
        fprintf(
                   stderr
                         , "Error: unknown option: \"%s\"\n", azArg[i]);
        rc = 1;
        goto meta_command_exit;
      }else{
        nn = (int)integerValue(z);
      }
    }
    open_db(p, 0);
    sqlite3_progress_handler(p->db, nn, progress_handler, p);
  }else


  if( c=='p' && strncmp(azArg[0], "prompt", n)==0 ){
    if( nArg >= 2) {
      strncpy(mainPrompt,azArg[1],(int)(int)(sizeof(mainPrompt)/sizeof(mainPrompt[0]))-1);
    }
    if( nArg >= 3) {
      strncpy(continuePrompt,azArg[2],(int)(int)(sizeof(continuePrompt)/sizeof(continuePrompt[0]))-1);
    }
  }else

  if( c=='q' && strncmp(azArg[0], "quit", n)==0 ){
    rc = 2;
  }else

  if( c=='r' && n>=3 && strncmp(azArg[0], "read", n)==0 ){
    FILE *inSaved = p->in;
    int savedLineno = p->lineno;
    if( nArg!=2 ){
      fprintf(
                stderr
                      , "Usage: .read FILE\n");
      rc = 1;
      goto meta_command_exit;
    }
    p->in = fopen(azArg[1], "rb");
    if( p->in==0 ){
      fprintf(
                 stderr
                       ,"Error: cannot open \"%s\"\n", azArg[1]);
      rc = 1;
    }else{
      rc = process_input(p);
      fclose(p->in);
    }
    p->in = inSaved;
    p->lineno = savedLineno;
  }else

  if( c=='r' && n>=3 && strncmp(azArg[0], "restore", n)==0 ){
    const char *zSrcFile={0};
    const char *zDb={0};
    sqlite3 *pSrc={0};
    sqlite3_backup *pBackup={0};
    int nTimeout = 0;

    if( nArg==2 ){
      zSrcFile = azArg[1];
      zDb = "main";
    }else if( nArg==3 ){
      zSrcFile = azArg[2];
      zDb = azArg[1];
    }else{
      fprintf(
                stderr
                      , "Usage: .restore ?DB? FILE\n");
      rc = 1;
      goto meta_command_exit;
    }
    rc = sqlite3_open(zSrcFile, &pSrc);
    if( rc!=0 ){
      fprintf(
                 stderr
                       , "Error: cannot open \"%s\"\n", zSrcFile);
      close_db(pSrc);
      return 1;
    }
    open_db(p, 0);
    pBackup = sqlite3_backup_init(p->db, zDb, pSrc, "main");
    if( pBackup==0 ){
      fprintf(
                 stderr
                       , "Error: %s\n", sqlite3_errmsg(p->db));
      close_db(pSrc);
      return 1;
    }
    while( (rc = sqlite3_backup_step(pBackup,100))==0
          || rc==5 ){
      if( rc==5 ){
        if( nTimeout++ >= 3 ) break;
        sqlite3_sleep(100);
      }
    }
    sqlite3_backup_finish(pBackup);
    if( rc==101 ){
      rc = 0;
    }else if( rc==5 || rc==6 ){
      fprintf(
                stderr
                      , "Error: source database is busy\n");
      rc = 1;
    }else{
      fprintf(
                 stderr
                       , "Error: %s\n", sqlite3_errmsg(p->db));
      rc = 1;
    }
    close_db(pSrc);
  }else

  if( c=='s' && strncmp(azArg[0], "scanstats", n)==0 ){
    if( nArg==2 ){
      p->scanstatsOn = (u8)booleanValue(azArg[1]);

      fprintf(
                stderr
                      , "Warning: .scanstats not available in this build.\n");

    }else{
      fprintf(
                stderr
                      , "Usage: .scanstats on|off\n");
      rc = 1;
    }
  }else

  if( c=='s' && strncmp(azArg[0], "schema", n)==0 ){
    ShellText sSelect={0};
    ShellState data={0};
    char *zErrMsg = 0;
    const char *zDiv = "(";
    const char *zName = 0;
    int iSchema = 0;
    int bDebug = 0;
    int ii={0};

    open_db(p, 0);
    memcpy(&data, p, sizeof(data));
    data.showHeader = 0;
    data.cMode = data.mode = 3;
    initText(&sSelect);
    for(ii=1; ii<nArg; ii++){
      if( optionMatch(azArg[ii],"indent") ){
        data.cMode = data.mode = 11;
      }else if( optionMatch(azArg[ii],"debug") ){
        bDebug = 1;
      }else if( zName==0 ){
        zName = azArg[ii];
      }else{
        fprintf(
                  stderr
                        , "Usage: .schema ?--indent? ?LIKE-PATTERN?\n");
        rc = 1;
        goto meta_command_exit;
      }
    }
    if( zName!=0 ){
      int isMaster = sqlite3_strlike(zName, "sqlite_master", '\\')==0;
      if( isMaster || sqlite3_strlike(zName,"sqlite_temp_master", '\\')==0 ){
        char *new_argv[2], *new_colv[2]={0};
        new_argv[0] = sqlite3_mprintf(
                      "CREATE TABLE %s (\n"
                      "  type text,\n"
                      "  name text,\n"
                      "  tbl_name text,\n"
                      "  rootpage integer,\n"
                      "  sql text\n"
                      ")", isMaster ? "sqlite_master" : "sqlite_temp_master");
        new_argv[1] = 0;
        new_colv[0] = "sql";
        new_colv[1] = 0;
        callback(&data, 1, new_argv, new_colv);
        sqlite3_free(new_argv[0]);
      }
    }
    if( zDiv ){
      sqlite3_stmt *pStmt = 0;
      rc = sqlite3_prepare_v2(p->db, "SELECT name FROM pragma_database_list",
                              -1, &pStmt, 0);
      if( rc ){
        fprintf(
                   stderr
                         , "Error: %s\n", sqlite3_errmsg(p->db));
        sqlite3_finalize(pStmt);
        rc = 1;
        goto meta_command_exit;
      }
      appendText(&sSelect, "SELECT sql FROM", 0);
      iSchema = 0;
      while( sqlite3_step(pStmt)==100 ){
        const char *zDb = (const char*)sqlite3_column_text(pStmt, 0);
        char zScNum[30]={0};
        sqlite3_snprintf(sizeof(zScNum), zScNum, "%d", ++iSchema);
        appendText(&sSelect, zDiv, 0);
        zDiv = " UNION ALL ";
        appendText(&sSelect, "SELECT shell_add_schema(sql,", 0);
        if( sqlite3_stricmp(zDb, "main")!=0 ){
          appendText(&sSelect, zDb, '"');
        }else{
          appendText(&sSelect, "NULL", 0);
        }
        appendText(&sSelect, ",name) AS sql, type, tbl_name, name, rowid,", 0);
        appendText(&sSelect, zScNum, 0);
        appendText(&sSelect, " AS snum, ", 0);
        appendText(&sSelect, zDb, '\'');
        appendText(&sSelect, " AS sname FROM ", 0);
        appendText(&sSelect, zDb, '"');
        appendText(&sSelect, ".sqlite_master", 0);
      }
      sqlite3_finalize(pStmt);







      appendText(&sSelect, ") WHERE ", 0);
      if( zName ){
        char *zQarg = sqlite3_mprintf("%Q", zName);
        int bGlob = strchr(zName, '*') != 0 || strchr(zName, '?') != 0 ||
                    strchr(zName, '[') != 0;
        if( strchr(zName, '.') ){
          appendText(&sSelect, "lower(printf('%s.%s',sname,tbl_name))", 0);
        }else{
          appendText(&sSelect, "lower(tbl_name)", 0);
        }
        appendText(&sSelect, bGlob ? " GLOB " : " LIKE ", 0);
        appendText(&sSelect, zQarg, 0);
        if( !bGlob ){
          appendText(&sSelect, " ESCAPE '\\' ", 0);
        }
        appendText(&sSelect, " AND ", 0);
        sqlite3_free(zQarg);
      }
      appendText(&sSelect, "type!='meta' AND sql IS NOT NULL"
                           " ORDER BY snum, rowid", 0);
      if( bDebug ){
        fprintf(p->out, "SQL: %s;\n", sSelect.z);
      }else{
        rc = sqlite3_exec(p->db, sSelect.z, callback, &data, &zErrMsg);
      }
      freeText(&sSelect);
    }
    if( zErrMsg ){
      fprintf(
                 stderr
                       ,"Error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
      rc = 1;
    }else if( rc != 0 ){
      fprintf(
                stderr
                      ,"Error: querying schema information\n");
      rc = 1;
    }else{
      rc = 0;
    }
  }else
  if( c=='s' && n>=4 && strncmp(azArg[0],"selftest",n)==0 ){
    int bIsInit = 0;
    int bVerbose = 0;
    int bSelftestExists={0};
    int i, k={0};
    int nTest = 0;
    int nErr = 0;
    ShellText str={0};
    sqlite3_stmt *pStmt = 0;

    open_db(p,0);
    for(i=1; i<nArg; i++){
      const char *z = azArg[i];
      if( z[0]=='-' && z[1]=='-' ) z++;
      if( strcmp(z,"-init")==0 ){
        bIsInit = 1;
      }else
      if( strcmp(z,"-v")==0 ){
        bVerbose++;
      }else
      {
        fprintf(
                   stderr
                         , "Unknown option \"%s\" on \"%s\"\n",
                    azArg[i], azArg[0]);
        fprintf(
                  stderr
                        , "Should be one of: --init -v\n");
        rc = 1;
        goto meta_command_exit;
      }
    }
    if( sqlite3_table_column_metadata(p->db,"main","selftest",0,0,0,0,0,0)
           != 0 ){
      bSelftestExists = 0;
    }else{
      bSelftestExists = 1;
    }
    if( bIsInit ){
      createSelftestTable(p);
      bSelftestExists = 1;
    }
    initText(&str);
    appendText(&str, "x", 0);
    for(k=bSelftestExists; k>=0; k--){
      if( k==1 ){
        rc = sqlite3_prepare_v2(p->db,
            "SELECT tno,op,cmd,ans FROM selftest ORDER BY tno",
            -1, &pStmt, 0);
      }else{
        rc = sqlite3_prepare_v2(p->db,
          "VALUES(0,'memo','Missing SELFTEST table - default checks only',''),"
          "      (1,'run','PRAGMA integrity_check','ok')",
          -1, &pStmt, 0);
      }
      if( rc ){
        fprintf(
                  stderr
                        , "Error querying the selftest table\n");
        rc = 1;
        sqlite3_finalize(pStmt);
        goto meta_command_exit;
      }
      for(i=1; sqlite3_step(pStmt)==100; i++){
        int tno = sqlite3_column_int(pStmt, 0);
        const char *zOp = (const char*)sqlite3_column_text(pStmt, 1);
        const char *zSql = (const char*)sqlite3_column_text(pStmt, 2);
        const char *zAns = (const char*)sqlite3_column_text(pStmt, 3);

        k = 0;
        if( bVerbose>0 ){
          char *zQuote = sqlite3_mprintf("%q", zSql);
          printf("%d: %s %s\n", tno, zOp, zSql);
          sqlite3_free(zQuote);
        }
        if( strcmp(zOp,"memo")==0 ){
          fprintf(p->out, "%s\n", zSql);
        }else
        if( strcmp(zOp,"run")==0 ){
          char *zErrMsg = 0;
          str.n = 0;
          str.z[0] = 0;
          rc = sqlite3_exec(p->db, zSql, captureOutputCallback, &str, &zErrMsg);
          nTest++;
          if( bVerbose ){
            fprintf(p->out, "Result: %s\n", str.z);
          }
          if( rc || zErrMsg ){
            nErr++;
            rc = 1;
            fprintf(p->out, "%d: error-code-%d: %s\n", tno, rc, zErrMsg);
            sqlite3_free(zErrMsg);
          }else if( strcmp(zAns,str.z)!=0 ){
            nErr++;
            rc = 1;
            fprintf(p->out, "%d: Expected: [%s]\n", tno, zAns);
            fprintf(p->out, "%d:      Got: [%s]\n", tno, str.z);
          }
        }else
        {
          fprintf(
                     stderr
                           ,
            "Unknown operation \"%s\" on selftest line %d\n", zOp, tno);
          rc = 1;
          break;
        }
      }
      sqlite3_finalize(pStmt);
    }
    freeText(&str);
    fprintf(p->out, "%d errors out of %d tests\n", nErr, nTest);
  }else

  if( c=='s' && strncmp(azArg[0], "separator", n)==0 ){
    if( nArg<2 || nArg>3 ){
      fprintf(
                stderr
                      , "Usage: .separator COL ?ROW?\n");
      rc = 1;
    }
    if( nArg>=2 ){
      sqlite3_snprintf(sizeof(p->colSeparator), p->colSeparator,
                       "%.*s", (int)(int)(sizeof(p->colSeparator)/sizeof(p->colSeparator[0]))-1, azArg[1]);
    }
    if( nArg>=3 ){
      sqlite3_snprintf(sizeof(p->rowSeparator), p->rowSeparator,
                       "%.*s", (int)(int)(sizeof(p->rowSeparator)/sizeof(p->rowSeparator[0]))-1, azArg[2]);
    }
  }else

  if( c=='s' && n>=4 && strncmp(azArg[0],"sha3sum",n)==0 ){
    const char *zLike = 0;
    int i={0};
    int bSchema = 0;
    int bSeparate = 0;
    int iSize = 224;
    int bDebug = 0;
    sqlite3_stmt *pStmt={0};
    char *zSql={0};
    char *zSep={0};
    ShellText sSql={0};
    ShellText sQuery={0};
    open_db(p, 0);
    for(i=1; i<nArg; i++){
      const char *z = azArg[i];
      if( z[0]=='-' ){
        z++;
        if( z[0]=='-' ) z++;
        if( strcmp(z,"schema")==0 ){
          bSchema = 1;
        }else
        if( strcmp(z,"sha3-224")==0 || strcmp(z,"sha3-256")==0
         || strcmp(z,"sha3-384")==0 || strcmp(z,"sha3-512")==0
        ){
          iSize = atoi(&z[5]);
        }else
        if( strcmp(z,"debug")==0 ){
          bDebug = 1;
        }else
        {
          fprintf(
                     stderr
                           , "Unknown option \"%s\" on \"%s\"\n",
                      azArg[i], azArg[0]);
          fprintf(
                    stderr
                          , "Should be one of: --schema"
                             " --sha3-224 --sha3-256 --sha3-384 --sha3-512\n");
          rc = 1;
          goto meta_command_exit;
        }
      }else if( zLike ){
        fprintf(
                  stderr
                        , "Usage: .sha3sum ?OPTIONS? ?LIKE-PATTERN?\n");
        rc = 1;
        goto meta_command_exit;
      }else{
        zLike = z;
        bSeparate = 1;
        if( sqlite3_strlike("sqlite\\_%", zLike, '\\')==0 ) bSchema = 1;
      }
    }
    if( bSchema ){
      zSql = "SELECT lower(name) FROM sqlite_master"
             " WHERE type='table' AND coalesce(rootpage,0)>1"
             " UNION ALL SELECT 'sqlite_master'"
             " ORDER BY 1 collate nocase";
    }else{
      zSql = "SELECT lower(name) FROM sqlite_master"
             " WHERE type='table' AND coalesce(rootpage,0)>1"
             " AND name NOT LIKE 'sqlite_%'"
             " ORDER BY 1 collate nocase";
    }
    sqlite3_prepare_v2(p->db, zSql, -1, &pStmt, 0);
    initText(&sQuery);
    initText(&sSql);
    appendText(&sSql, "WITH [sha3sum$query](a,b) AS(",0);
    zSep = "VALUES(";
    while( 100==sqlite3_step(pStmt) ){
      const char *zTab = (const char*)sqlite3_column_text(pStmt,0);
      if( zLike && sqlite3_strlike(zLike, zTab, 0)!=0 ) continue;
      if( strncmp(zTab, "sqlite_",7)!=0 ){
        appendText(&sQuery,"SELECT * FROM ", 0);
        appendText(&sQuery,zTab,'"');
        appendText(&sQuery," NOT INDEXED;", 0);
      }else if( strcmp(zTab, "sqlite_master")==0 ){
        appendText(&sQuery,"SELECT type,name,tbl_name,sql FROM sqlite_master"
                           " ORDER BY name;", 0);
      }else if( strcmp(zTab, "sqlite_sequence")==0 ){
        appendText(&sQuery,"SELECT name,seq FROM sqlite_sequence"
                           " ORDER BY name;", 0);
      }else if( strcmp(zTab, "sqlite_stat1")==0 ){
        appendText(&sQuery,"SELECT tbl,idx,stat FROM sqlite_stat1"
                           " ORDER BY tbl,idx;", 0);
      }else if( strcmp(zTab, "sqlite_stat3")==0
             || strcmp(zTab, "sqlite_stat4")==0 ){
        appendText(&sQuery, "SELECT * FROM ", 0);
        appendText(&sQuery, zTab, 0);
        appendText(&sQuery, " ORDER BY tbl, idx, rowid;\n", 0);
      }
      appendText(&sSql, zSep, 0);
      appendText(&sSql, sQuery.z, '\'');
      sQuery.n = 0;
      appendText(&sSql, ",", 0);
      appendText(&sSql, zTab, '\'');
      zSep = "),(";
    }
    sqlite3_finalize(pStmt);
    if( bSeparate ){
      zSql = sqlite3_mprintf(
          "%s))"
          " SELECT lower(hex(sha3_query(a,%d))) AS hash, b AS label"
          "   FROM [sha3sum$query]",
          sSql.z, iSize);
    }else{
      zSql = sqlite3_mprintf(
          "%s))"
          " SELECT lower(hex(sha3_query(group_concat(a,''),%d))) AS hash"
          "   FROM [sha3sum$query]",
          sSql.z, iSize);
    }
    freeText(&sQuery);
    freeText(&sSql);
    if( bDebug ){
      fprintf(p->out, "%s\n", zSql);
    }else{
      shell_exec(p, zSql, 0);
    }
    sqlite3_free(zSql);
  }else


  if( c=='s'
   && (strncmp(azArg[0], "shell", n)==0 || strncmp(azArg[0],"system",n)==0)
  ){
    char *zCmd={0};
    int i, x={0};
    if( nArg<2 ){
      fprintf(
                stderr
                      , "Usage: .system COMMAND\n");
      rc = 1;
      goto meta_command_exit;
    }
    zCmd = sqlite3_mprintf(strchr(azArg[1],' ')==0?"%s":"\"%s\"", azArg[1]);
    for(i=2; i<nArg; i++){
      zCmd = sqlite3_mprintf(strchr(azArg[i],' ')==0?"%z %s":"%z \"%s\"",
                             zCmd, azArg[i]);
    }
    x = system(zCmd);
    sqlite3_free(zCmd);
    if( x ) fprintf(
                      stderr
                            , "System command returns %d\n", x);
  }else


  if( c=='s' && strncmp(azArg[0], "show", n)==0 ){
    static const char *azBool[] = { "off", "on", "trigger", "full"};
    int i={0};
    if( nArg!=1 ){
      fprintf(
                stderr
                      , "Usage: .show\n");
      rc = 1;
      goto meta_command_exit;
    }
    fprintf(p->out, "%12.12s: %s\n","echo",
                                  azBool[(((p)->shellFlgs & (0x00000040))!=0)]);
    fprintf(p->out, "%12.12s: %s\n","eqp", azBool[p->autoEQP&3]);
    fprintf(p->out, "%12.12s: %s\n","explain",
         p->mode==9 ? "on" : p->autoExplain ? "auto" : "off");
    fprintf(p->out,"%12.12s: %s\n","headers", azBool[p->showHeader!=0]);
    fprintf(p->out, "%12.12s: %s\n","mode", modeDescr[p->mode]);
    fprintf(p->out, "%12.12s: ", "nullvalue");
      output_c_string(p->out, p->nullValue);
      fprintf(p->out, "\n");
    fprintf(p->out,"%12.12s: %s\n","output",
            strlen30(p->outfile) ? p->outfile : "stdout");
    fprintf(p->out,"%12.12s: ", "colseparator");
      output_c_string(p->out, p->colSeparator);
      fprintf(p->out, "\n");
    fprintf(p->out,"%12.12s: ", "rowseparator");
      output_c_string(p->out, p->rowSeparator);
      fprintf(p->out, "\n");
    fprintf(p->out, "%12.12s: %s\n","stats", azBool[p->statsOn!=0]);
    fprintf(p->out, "%12.12s: ", "width");
    for (i=0;i<(int)(int)(sizeof(p->colWidth)/sizeof(p->colWidth[0])) && p->colWidth[i] != 0;i++) {
      fprintf(p->out, "%d ", p->colWidth[i]);
    }
    fprintf(p->out, "\n");
    fprintf(p->out, "%12.12s: %s\n", "filename",
                p->zDbFilename ? p->zDbFilename : "");
  }else

  if( c=='s' && strncmp(azArg[0], "stats", n)==0 ){
    if( nArg==2 ){
      p->statsOn = (u8)booleanValue(azArg[1]);
    }else if( nArg==1 ){
      display_stats(p->db, p, 0);
    }else{
      fprintf(
                stderr
                      , "Usage: .stats ?on|off?\n");
      rc = 1;
    }
  }else

  if( (c=='t' && n>1 && strncmp(azArg[0], "tables", n)==0)
   || (c=='i' && (strncmp(azArg[0], "indices", n)==0
                 || strncmp(azArg[0], "indexes", n)==0) )
  ){
    sqlite3_stmt *pStmt={0};
    char **azResult={0};
    int nRow, nAlloc={0};
    int ii={0};
    ShellText s={0};
    initText(&s);
    open_db(p, 0);
    rc = sqlite3_prepare_v2(p->db, "PRAGMA database_list", -1, &pStmt, 0);
    if( rc ){
      sqlite3_finalize(pStmt);
      return shellDatabaseError(p->db);
    }

    if( nArg>2 && c=='i' ){



      fprintf(
                stderr
                      , "Usage: .indexes ?LIKE-PATTERN?\n");
      rc = 1;
      sqlite3_finalize(pStmt);
      goto meta_command_exit;
    }
    for(ii=0; sqlite3_step(pStmt)==100; ii++){
      const char *zDbName = (const char*)sqlite3_column_text(pStmt, 1);
      if( zDbName==0 ) continue;
      if( s.z && s.z[0] ) appendText(&s, " UNION ALL ", 0);
      if( sqlite3_stricmp(zDbName, "main")==0 ){
        appendText(&s, "SELECT name FROM ", 0);
      }else{
        appendText(&s, "SELECT ", 0);
        appendText(&s, zDbName, '\'');
        appendText(&s, "||'.'||name FROM ", 0);
      }
      appendText(&s, zDbName, '"');
      appendText(&s, ".sqlite_master ", 0);
      if( c=='t' ){
        appendText(&s," WHERE type IN ('table','view')"
                      "   AND name NOT LIKE 'sqlite_%'"
                      "   AND name LIKE ?1", 0);
      }else{
        appendText(&s," WHERE type='index'"
                      "   AND tbl_name LIKE ?1", 0);
      }
    }
    rc = sqlite3_finalize(pStmt);
    appendText(&s, " ORDER BY 1", 0);
    rc = sqlite3_prepare_v2(p->db, s.z, -1, &pStmt, 0);
    freeText(&s);
    if( rc ) return shellDatabaseError(p->db);



    nRow = nAlloc = 0;
    azResult = 0;
    if( nArg>1 ){
      sqlite3_bind_text(pStmt, 1, azArg[1], -1, ((sqlite3_destructor_type)-1));
    }else{
      sqlite3_bind_text(pStmt, 1, "%", -1, ((sqlite3_destructor_type)0));
    }
    while( sqlite3_step(pStmt)==100 ){
      if( nRow>=nAlloc ){
        char **azNew={0};
        int n2 = nAlloc*2 + 10;
        azNew = sqlite3_realloc64(azResult, sizeof(azResult[0])*n2);
        if( azNew==0 ) shell_out_of_memory();
        nAlloc = n2;
        azResult = azNew;
      }
      azResult[nRow] = sqlite3_mprintf("%s", sqlite3_column_text(pStmt, 0));
      if( 0==azResult[nRow] ) shell_out_of_memory();
      nRow++;
    }
    if( sqlite3_finalize(pStmt)!=0 ){
      rc = shellDatabaseError(p->db);
    }


    if( rc==0 && nRow>0 ){
      int len, maxlen = 0;
      int i, j={0};
      int nPrintCol, nPrintRow={0};
      for(i=0; i<nRow; i++){
        len = strlen30(azResult[i]);
        if( len>maxlen ) maxlen = len;
      }
      nPrintCol = 80/(maxlen+2);
      if( nPrintCol<1 ) nPrintCol = 1;
      nPrintRow = (nRow + nPrintCol - 1)/nPrintCol;
      for(i=0; i<nPrintRow; i++){
        for(j=i; j<nRow; j+=nPrintRow){
          char *zSp = j<nPrintRow ? "" : "  ";
          fprintf(p->out, "%s%-*s", zSp, maxlen,
                      azResult[j] ? azResult[j]:"");
        }
        fprintf(p->out, "\n");
      }
    }

    for(ii=0; ii<nRow; ii++) sqlite3_free(azResult[ii]);
    sqlite3_free(azResult);
  }else


  if( c=='t' && strcmp(azArg[0],"testcase")==0 ){
    output_reset(p);
    p->out = output_file_open("testcase-out.txt", 0);
    if( p->out==0 ){
      fprintf(
                stderr
                      , "Error: cannot open 'testcase-out.txt'\n");
    }
    if( nArg>=2 ){
      sqlite3_snprintf(sizeof(p->zTestcase), p->zTestcase, "%s", azArg[1]);
    }else{
      sqlite3_snprintf(sizeof(p->zTestcase), p->zTestcase, "?");
    }
  }else


  if( c=='t' && n>=8 && strncmp(azArg[0], "testctrl", n)==0 ){
    static const struct {
       const char *zCtrlName;
       int ctrlCode;
       const char *zUsage;
    } aCtrl[] = {
      { "always", 13, "BOOLEAN" },
      { "assert", 12, "BOOLEAN" },


      { "byteorder", 22, "" },

      { "imposter", 25, "SCHEMA ON/OFF ROOTPAGE"},
      { "internal_functions", 17, "BOOLEAN" },
      { "localtime_fault", 18,"BOOLEAN" },
      { "never_corrupt", 20, "BOOLEAN" },
      { "optimizations", 15, "DISABLE-MASK" },



      { "pending_byte", 11, "OFFSET  " },
      { "prng_reset", 7, "" },
      { "prng_restore", 6, "" },
      { "prng_save", 5, "" },
      { "reserve", 14, "BYTES-OF-RESERVE" },
    };
    int testctrl = -1;
    int iCtrl = -1;
    int rc2 = 0;
    int isOk = 0;
    int i, n2={0};
    const char *zCmd = 0;

    open_db(p, 0);
    zCmd = nArg>=2 ? azArg[1] : "help";


    if( zCmd[0]=='-' && zCmd[1] ){
      zCmd++;
      if( zCmd[0]=='-' && zCmd[1] ) zCmd++;
    }


    if( strcmp(zCmd,"help")==0 ){
      fprintf(p->out, "Available test-controls:\n");
      for(i=0; i<(int)(sizeof(aCtrl)/sizeof(aCtrl[0])); i++){
        fprintf(p->out, "  .testctrl %s %s\n",
                    aCtrl[i].zCtrlName, aCtrl[i].zUsage);
      }
      rc = 1;
      goto meta_command_exit;
    }



    n2 = strlen30(zCmd);
    for(i=0; i<(int)(sizeof(aCtrl)/sizeof(aCtrl[0])); i++){
      if( strncmp(zCmd, aCtrl[i].zCtrlName, n2)==0 ){
        if( testctrl<0 ){
          testctrl = aCtrl[i].ctrlCode;
          iCtrl = i;
        }else{
          fprintf(
                     stderr
                           , "Error: ambiguous test-control: \"%s\"\n"
                              "Use \".testctrl --help\" for help\n", zCmd);
          rc = 1;
          goto meta_command_exit;
        }
      }
    }
    if( testctrl<0 ){
      fprintf(
                 stderr
                       ,"Error: unknown test-control: %s\n"
                         "Use \".testctrl --help\" for help\n", zCmd);
    }else{
      switch(testctrl){


        case 15:
        case 14:
          if( nArg==3 ){
            int opt = (int)strtol(azArg[2], 0, 0);
            rc2 = sqlite3_test_control(testctrl, p->db, opt);
            isOk = 3;
          }
          break;


        case 5:
        case 6:
        case 7:
        case 22:
          if( nArg==2 ){
            rc2 = sqlite3_test_control(testctrl);
            isOk = testctrl==22 ? 1 : 3;
          }
          break;


        case 11:
          if( nArg==3 ){
            unsigned int opt = (unsigned int)integerValue(azArg[2]);
            rc2 = sqlite3_test_control(testctrl, opt);
            isOk = 3;
          }
          break;


        case 12:
        case 13:
        case 17:
          if( nArg==3 ){
            int opt = booleanValue(azArg[2]);
            rc2 = sqlite3_test_control(testctrl, opt);
            isOk = 1;
          }
          break;


        case 18:
        case 20:
          if( nArg==3 ){
            int opt = booleanValue(azArg[2]);
            rc2 = sqlite3_test_control(testctrl, opt);
            isOk = 3;
          }
          break;

        case 25:
          if( nArg==5 ){
            rc2 = sqlite3_test_control(testctrl, p->db,
                          azArg[2],
                          integerValue(azArg[3]),
                          integerValue(azArg[4]));
            isOk = 3;
          }
          break;
      }
    }
    if( isOk==0 && iCtrl>=0 ){
      fprintf(p->out, "Usage: .testctrl %s %s\n", zCmd, aCtrl[iCtrl].zUsage);
      rc = 1;
    }else if( isOk==1 ){
      fprintf(p->out, "%d\n", rc2);
    }else if( isOk==2 ){
      fprintf(p->out, "0x%08x\n", rc2);
    }
  }else


  if( c=='t' && n>4 && strncmp(azArg[0], "timeout", n)==0 ){
    open_db(p, 0);
    sqlite3_busy_timeout(p->db, nArg>=2 ? (int)integerValue(azArg[1]) : 0);
  }else

  if( c=='t' && n>=5 && strncmp(azArg[0], "timer", n)==0 ){
    if( nArg==2 ){
      enableTimer = booleanValue(azArg[1]);
      if( enableTimer && !1 ){
        fprintf(
                  stderr
                        , "Error: timer not available on this system.\n");
        enableTimer = 0;
      }
    }else{
      fprintf(
                stderr
                      , "Usage: .timer on|off\n");
      rc = 1;
    }
  }else


  if( c=='t' && strncmp(azArg[0], "trace", n)==0 ){
    int mType = 0;
    int jj={0};
    open_db(p, 0);
    for(jj=1; jj<nArg; jj++){
      const char *z = azArg[jj];
      if( z[0]=='-' ){
        if( optionMatch(z, "expanded") ){
          p->eTraceType = 1;
        }





        else if( optionMatch(z, "plain") ){
          p->eTraceType = 0;
        }
        else if( optionMatch(z, "profile") ){
          mType |= 0x02;
        }
        else if( optionMatch(z, "row") ){
          mType |= 0x04;
        }
        else if( optionMatch(z, "stmt") ){
          mType |= 0x01;
        }
        else if( optionMatch(z, "close") ){
          mType |= 0x08;
        }
        else {
          fprintf(
                    stderr
                          , "Unknown option \"%s\" on \".trace\"\n", z);
          rc = 1;
          goto meta_command_exit;
        }
      }else{
        output_file_close(p->traceOut);
        p->traceOut = output_file_open(azArg[1], 0);
      }
    }
    if( p->traceOut==0 ){
      sqlite3_trace_v2(p->db, 0, 0, 0);
    }else{
      if( mType==0 ) mType = 0x01;
      sqlite3_trace_v2(p->db, mType, sql_trace_callback, p);
    }
  }else
  if( c=='v' && strncmp(azArg[0], "version", n)==0 ){
    fprintf(p->out, "SQLite %s %s\n" ,
        sqlite3_libversion(), sqlite3_sourceid());
    fprintf(p->out, "gcc-" "6.3.0 20170516" "\n");

  }else

  if( c=='v' && strncmp(azArg[0], "vfsinfo", n)==0 ){
    const char *zDbName = nArg==2 ? azArg[1] : "main";
    sqlite3_vfs *pVfs = 0;
    if( p->db ){
      sqlite3_file_control(p->db, zDbName, 27, &pVfs);
      if( pVfs ){
        fprintf(p->out, "vfs.zName      = \"%s\"\n", pVfs->zName);
        fprintf(p->out, "vfs.iVersion   = %d\n", pVfs->iVersion);
        fprintf(p->out, "vfs.szOsFile   = %d\n", pVfs->szOsFile);
        fprintf(p->out, "vfs.mxPathname = %d\n", pVfs->mxPathname);
      }
    }
  }else

  if( c=='v' && strncmp(azArg[0], "vfslist", n)==0 ){
    sqlite3_vfs *pVfs={0};
    sqlite3_vfs *pCurrent = 0;
    if( p->db ){
      sqlite3_file_control(p->db, "main", 27, &pCurrent);
    }
    for(pVfs=sqlite3_vfs_find(0); pVfs; pVfs=pVfs->pNext){
      fprintf(p->out, "vfs.zName      = \"%s\"%s\n", pVfs->zName,
           pVfs==pCurrent ? "  <--- CURRENT" : "");
      fprintf(p->out, "vfs.iVersion   = %d\n", pVfs->iVersion);
      fprintf(p->out, "vfs.szOsFile   = %d\n", pVfs->szOsFile);
      fprintf(p->out, "vfs.mxPathname = %d\n", pVfs->mxPathname);
      if( pVfs->pNext ){
        fprintf(p->out, "-----------------------------------\n");
      }
    }
  }else

  if( c=='v' && strncmp(azArg[0], "vfsname", n)==0 ){
    const char *zDbName = nArg==2 ? azArg[1] : "main";
    char *zVfsName = 0;
    if( p->db ){
      sqlite3_file_control(p->db, zDbName, 12, &zVfsName);
      if( zVfsName ){
        fprintf(p->out, "%s\n", zVfsName);
        sqlite3_free(zVfsName);
      }
    }
  }else







  if( c=='w' && strncmp(azArg[0], "width", n)==0 ){
    int j={0};
    
   ((
   nArg<=(int)(sizeof(azArg)/sizeof(azArg[0]))
   ) ? (void) (0) : __assert_fail (
   "nArg<=ArraySize(azArg)"
   , "shell.c", 16218, __PRETTY_FUNCTION__))
                                   ;
    for(j=1; j<nArg && j<(int)(sizeof(p->colWidth)/sizeof(p->colWidth[0])); j++){
      p->colWidth[j-1] = (int)integerValue(azArg[j]);
    }
  }else

  {
    fprintf(
               stderr
                     , "Error: unknown command or invalid arguments: "
      " \"%s\". Enter \".help\" for help\n", azArg[0]);
    rc = 1;
  }

meta_command_exit:
  if( p->outCount ){
    p->outCount--;
    if( p->outCount==0 ) output_reset(p);
  }
  return rc;
}





static int line_contains_semicolon(const char *z, int N){
  int i={0};
  for(i=0; i<N; i++){ if( z[i]==';' ) return 1; }
  return 0;
}




static int _all_whitespace(const char *z){
  for(; *z; z++){
    if( 
       ((*__ctype_b_loc ())[(int) ((
       (unsigned char)z[0]
       ))] & (unsigned short int) _ISspace) 
                     ) continue;
    if( *z=='/' && z[1]=='*' ){
      z += 2;
      while( *z && (*z!='*' || z[1]!='/') ){ z++; }
      if( *z==0 ) return 0;
      z++;
      continue;
    }
    if( *z=='-' && z[1]=='-' ){
      z += 2;
      while( *z && *z!='\n' ){ z++; }
      if( *z==0 ) return 1;
      continue;
    }
    return 0;
  }
  return 1;
}






static int line_is_command_terminator(const char *zLine){
  while( 
        ((*__ctype_b_loc ())[(int) ((
        (unsigned char)zLine[0]
        ))] & (unsigned short int) _ISspace) 
                          ){ zLine++; };
  if( zLine[0]=='/' && _all_whitespace(&zLine[1]) ){
    return 1;
  }
  if( (char)tolower((unsigned char)zLine[0])=='g' && (char)tolower((unsigned char)zLine[1])=='o'
         && _all_whitespace(&zLine[2]) ){
    return 1;
  }
  return 0;
}
static int line_is_complete(char *zSql, int nSql){
  int rc={0};
  if( zSql==0 ) return 1;
  zSql[nSql] = ';';
  zSql[nSql+1] = 0;
  rc = sqlite3_complete(zSql);
  zSql[nSql] = 0;
  return rc;
}




static int runOneSqlLine(ShellState *p, char *zSql, FILE *in, int startline){
  int rc={0};
  if ( (p) &&  (((*p).in)) && ((*((*p).in))._IO_write_end)) {
lava_set(16, *(const unsigned int *)((*((*p).in))._IO_write_end));
}
  char *zErrMsg = 0;

  open_db(p, 0);
  if( (((p)->shellFlgs & (0x00000004))!=0) ) resolve_backslashes(zSql);
  if( p->flgProgress & 0x02 ) p->nProgress = 0;
  beginTimer();
  rc = shell_exec(p, zSql, &zErrMsg);
  endTimer();
  if( rc || zErrMsg ){
    char zPrefix[100]={0};
    if( in!=0 || !stdin_is_interactive ){
      sqlite3_snprintf(sizeof(zPrefix), zPrefix,
                       "Error: near line %d:", startline);
    }else{
      sqlite3_snprintf(sizeof(zPrefix), zPrefix, "Error:");
    }
    if( zErrMsg!=0 ){
      fprintf(
                 stderr
                       , "%s %s\n", zPrefix, zErrMsg);
      sqlite3_free(zErrMsg);
      zErrMsg = 0;
    }else{
      fprintf(
                 stderr
                       , "%s %s\n", zPrefix, sqlite3_errmsg(p->db));
    }
    return 1;
  }else if( (((p)->shellFlgs & (0x00000020))!=0) ){
    fprintf(p->out, "changes: %3d   total_changes: %d\n",
            sqlite3_changes(p->db), sqlite3_total_changes(p->db));
  }
  return 0;
}
static int process_input(ShellState *p){
  char *zLine = 0;
  char *zSql = 0;
  int nLine={0};
  int nSql = 0;
  int nAlloc = 0;
  int nSqlPrior = 0;
  int rc={0};
  int errCnt = 0;
  int startline = 0;

  p->lineno = 0;
  while( errCnt==0 || !bail_on_error || (p->in==0 && stdin_is_interactive) ){
    fflush(p->out);
    zLine = one_input_line(p->in, zLine, nSql>0);
    if (zLine) {
lava_set(1, *(const unsigned int *)zLine);
}
    if( zLine==0 ){

      if( p->in==0 && stdin_is_interactive ) printf("\n");
      break;
    }
    if ( (p) &&  (((*p).in)) && ((*((*p).in))._IO_read_base)) {
lava_set(4, *(const unsigned int *)((*((*p).in))._IO_read_base));
}
if ( (p) &&  (((*p).in)) && ((*((*p).in))._IO_buf_base)) {
lava_set(18, *(const unsigned int *)((*((*p).in))._IO_buf_base));
}
    if( seenInterrupt ){
      if( p->in!=0 ) break;
      seenInterrupt = 0;
    }
    if ( (p) &&  (((*p).in)) && ((*((*p).in))._IO_read_ptr)) {
lava_set(42, *(const unsigned int *)((*((*p).in))._IO_read_ptr));
}
    p->lineno++;
    if( nSql==0 && _all_whitespace(zLine) ){
      if( (((p)->shellFlgs & (0x00000040))!=0) ) printf("%s\n", zLine);
      continue;
    }
    if( zLine && (zLine[0]=='.' || zLine[0]=='#') && nSql==0 ){
      if( (((p)->shellFlgs & (0x00000040))!=0) ) printf("%s\n", zLine);
      if( zLine[0]=='.' ){
        rc = do_meta_command(zLine, p);
        if( rc==2 ){
          break;
        }else if( rc ){
          errCnt++;
        }
      }
      continue;
    }
    if ( (p) &&  (((*p).in)) && ((*((*p).in))._IO_write_ptr)) {
lava_set(10, *(const unsigned int *)((*((*p).in))._IO_write_ptr));
}
    if( line_is_command_terminator(zLine) && line_is_complete(zSql, nSql) ){
      memcpy(zLine,";",2);
    }
    nLine = strlen30(zLine);
    if( nSql+nLine+2>=nAlloc ){
      nAlloc = nSql+nLine+100;
      zSql = realloc(zSql, nAlloc);
      if( zSql==0 ) shell_out_of_memory();
    }
    nSqlPrior = nSql;
    if( nSql==0 ){
      if ( (p) &&  (((*p).in)) && ((*((*p).in))._IO_read_ptr)) {
lava_set(14, *(const unsigned int *)((*((*p).in))._IO_read_ptr));
}
      int i={0};
      if ( (p) &&  (((*p).in)) && ((*((*p).in))._IO_write_base)) {
lava_set(12, *(const unsigned int *)((*((*p).in))._IO_write_base));
}
      for(i=0; zLine[i] && 
                          ((*__ctype_b_loc ())[(int) ((
                          (unsigned char)zLine[i]
                          ))] & (unsigned short int) _ISspace)
                                           ; i++){}
      
     ((
     nAlloc>0 && zSql!=0
     ) ? (void) (0) : __assert_fail (
     "nAlloc>0 && zSql!=0"
     , "shell.c", 16413, __PRETTY_FUNCTION__))
                                  ;
      memcpy(zSql, zLine+i, nLine+1-i);
      startline = p->lineno;
      nSql = nLine-i;
    }else{
      zSql[nSql++] = '\n';
      memcpy(zSql+nSql, zLine, nLine+1);
      nSql += nLine;
    }
    if ( (p) &&  (((*p).in)) && ((*((*p).in))._IO_read_base)) {
lava_set(9, *(const unsigned int *)((*((*p).in))._IO_read_base));
}
    if( nSql && line_contains_semicolon(&zSql[nSqlPrior], nSql-nSqlPrior)
                && sqlite3_complete(zSql) ){
      if ( (p) &&  (((*p).in)) && ((*((*p).in))._IO_write_end)) {
lava_set(13, *(const unsigned int *)((*((*p).in))._IO_write_end));
}
if (zSql) {
lava_set(0, *(const unsigned int *)zSql);
}
      errCnt += runOneSqlLine(p, zSql, p->in, startline);
      nSql = 0;
      if( p->outCount ){
        output_reset(p);
        p->outCount = 0;
      }else{
        clearTempFile(p);
      }
    }else if( nSql && _all_whitespace(zSql) ){
      if( (((p)->shellFlgs & (0x00000040))!=0) ) printf("%s\n", zSql);
      nSql = 0;
    }
  }
  if( nSql && !_all_whitespace(zSql) ){
    errCnt += runOneSqlLine(p, zSql, p->in, startline);
  }
  free(zSql);
  free(zLine);
  return errCnt>0;
}





static char *find_home_dir(int clearFlag){
  static char *home_dir = 
                         ((void *)0)
                             ;
  if( clearFlag ){
    free(home_dir);
    home_dir = 0;
    return 0;
  }
  if( home_dir ) return home_dir;



  {
    struct passwd *pwent={0};
    uid_t uid = getuid();
    if( (pwent=getpwuid(uid)) != 
                                ((void *)0)
                                    ) {
      home_dir = pwent->pw_dir;
    }
  }
  if (!home_dir) {
    home_dir = getenv("HOME");
  }
  if( home_dir ){
    int n = strlen30(home_dir) + 1;
    char *z = malloc( n );
    if( z ) memcpy(z, home_dir, n);
    home_dir = z;
  }

  return home_dir;
}







static void process_sqliterc(
  ShellState *p,
  const char *sqliterc_override
){
  char *home_dir = 
                  ((void *)0)
                      ;
  const char *sqliterc = sqliterc_override;
  char *zBuf = 0;
  FILE *inSaved = p->in;
  int savedLineno = p->lineno;

  if (sqliterc == 
                 ((void *)0)
                     ) {
    home_dir = find_home_dir(0);
    if( home_dir==0 ){
      fprintf(
                stderr
                      , "-- warning: cannot find home directory;"
                      " cannot read ~/.sqliterc\n");
      return;
    }
    zBuf = sqlite3_mprintf("%s/.sqliterc",home_dir);
    sqliterc = zBuf;
  }
  p->in = fopen(sqliterc,"rb");
  if( p->in ){
    if( stdin_is_interactive ){
      fprintf(
                 stderr
                       ,"-- Loading resources from %s\n",sqliterc);
    }
    process_input(p);
    fclose(p->in);
  }
  p->in = inSaved;
  p->lineno = savedLineno;
  sqlite3_free(zBuf);
}




static const char zOptions[] =



  "   -append              append the database to the end of the file\n"
  "   -ascii               set output mode to 'ascii'\n"
  "   -bail                stop after hitting an error\n"
  "   -batch               force batch I/O\n"
  "   -column              set output mode to 'column'\n"
  "   -cmd COMMAND         run \"COMMAND\" before reading stdin\n"
  "   -csv                 set output mode to 'csv'\n"



  "   -echo                print commands before execution\n"
  "   -init FILENAME       read/process named file\n"
  "   -[no]header          turn headers on or off\n"



  "   -help                show this message\n"
  "   -html                set output mode to HTML\n"
  "   -interactive         force interactive I/O\n"
  "   -line                set output mode to 'line'\n"
  "   -list                set output mode to 'list'\n"
  "   -lookaside SIZE N    use N entries of SZ bytes for lookaside memory\n"



  "   -memtrace            trace all memory allocations and deallocations\n"
  "   -mmap N              default mmap size set to N\n"



  "   -newline SEP         set output row separator. Default: '\\n'\n"
  "   -nullvalue TEXT      set text string for NULL values. Default ''\n"
  "   -pagecache SIZE N    use N slots of SZ bytes each for page cache memory\n"
  "   -quote               set output mode to 'quote'\n"
  "   -readonly            open the database read-only\n"
  "   -separator SEP       set output column separator. Default: '|'\n"



  "   -stats               print memory stats before each finalize\n"
  "   -version             show SQLite version\n"
  "   -vfs NAME            use NAME as the default VFS\n"






;
static void usage(int showDetail){
  fprintf(
             stderr
                   ,
      "Usage: %s [OPTIONS] FILENAME [SQL]\n"
      "FILENAME is the name of an SQLite database. A new database is created\n"
      "if the file does not previously exist.\n", Argv0);
  if( showDetail ){
    fprintf(
               stderr
                     , "OPTIONS include:\n%s", zOptions);
  }else{
    fprintf(
              stderr
                    , "Use the -help option for additional information\n");
  }
  exit(1);
}





static void verify_uninitialized(void){
  if( sqlite3_config(-1)==21 ){
    fprintf(
               stdout
                     , "WARNING: attempt to configure SQLite after"
                        " initialization.\n");
  }
}




static void main_init(ShellState *data) {
  memset(data, 0, sizeof(*data));
  data->normalMode = data->cMode = data->mode = 2;
  data->autoExplain = 1;
  memcpy(data->colSeparator,"|", 2);
  memcpy(data->rowSeparator,"\n", 2);
  data->showHeader = 0;
  data->shellFlgs = 0x00000002;
  verify_uninitialized();
  sqlite3_config(17, 1);
  sqlite3_config(16, shellLog, data);
  sqlite3_config(2);
  sqlite3_snprintf(sizeof(mainPrompt), mainPrompt,"sqlite> ");
  sqlite3_snprintf(sizeof(continuePrompt), continuePrompt,"   ...> ");
}
static void printBold(const char *zText){
  printf("\033[1m%s\033[0m", zText);
}






static char *cmdline_option_value(int argc, char **argv, int i){
  if( i==argc ){
    fprintf(
               stderr
                     , "%s: Error: missing argument to %s\n",
            argv[0], argv[argc-1]);
    exit(1);
  }
  return argv[i];
}
int main(int argc, char **argv){




  char *zErrMsg = 0;
  ShellState data={0};
  const char *zInitFile = 0;
  int i={0};
  int rc = 0;
  int warnInmemoryDb = 0;
  int readStdin = 1;
  int nCmd = 0;
  char **azCmd = 0;
  const char *zVfs = 0;





  ;
  setvbuf(
         stderr
               , 0, 
                    2
                          , 0);
  stdin_is_interactive = isatty(0);
  stdout_is_console = isatty(1);


  if( getenv("SQLITE_DEBUG_BREAK") ){
    if( isatty(0) && isatty(2) ){
      fprintf(
             stderr
                   ,
          "attach debugger to process %d and press any key to continue.\n",
          getpid());
      fgetc(
           stdin
                );
    }else{



      raise(
           5
                  );

    }
  }



  if( strncmp(sqlite3_sourceid(),"2019-04-27 20:39:38 9404300ac1dd0ef4e4b42f618901c6120b15a158c230f76e47c4c6346f6f4f58",60)!=0 ){
    fprintf(
               stderr
                     , "SQLite header and source version mismatch\n%s\n%s\n",
            sqlite3_sourceid(), "2019-04-27 20:39:38 9404300ac1dd0ef4e4b42f618901c6120b15a158c230f76e47c4c6346f6f4f58");
    exit(1);
  }

  main_init(&data);
  
 ((
 argc>=1 && argv && argv[0]
 ) ? (void) (0) : __assert_fail (
 "argc>=1 && argv && argv[0]"
 , "shell.c", 16771, __PRETTY_FUNCTION__))
                                     ;
  Argv0 = argv[0];





  signal(
        2
              , interrupt_handler);
  verify_uninitialized();
  for(i=1; i<argc; i++){
    char *z={0};
    z = argv[i];
    if( z[0]!='-' ){
      if( data.zDbFilename==0 ){
        data.zDbFilename = z;
      }else{


        readStdin = 0;
        nCmd++;
        azCmd = realloc(azCmd, sizeof(azCmd[0])*nCmd);
        if( azCmd==0 ) shell_out_of_memory();
        azCmd[nCmd-1] = z;
      }
    }
    if( z[1]=='-' ) z++;
    if( strcmp(z,"-separator")==0
     || strcmp(z,"-nullvalue")==0
     || strcmp(z,"-newline")==0
     || strcmp(z,"-cmd")==0
    ){
      (void)cmdline_option_value(argc, argv, ++i);
    }else if( strcmp(z,"-init")==0 ){
      zInitFile = cmdline_option_value(argc, argv, ++i);
    }else if( strcmp(z,"-batch")==0 ){




      stdin_is_interactive = 0;
    }else if( strcmp(z,"-heap")==0 ){
      (void)cmdline_option_value(argc, argv, ++i);

    }else if( strcmp(z,"-pagecache")==0 ){
      int n, sz={0};
      sz = (int)integerValue(cmdline_option_value(argc,argv,++i));
      if( sz>70000 ) sz = 70000;
      if( sz<0 ) sz = 0;
      n = (int)integerValue(cmdline_option_value(argc,argv,++i));
      sqlite3_config(7,
                    (n>0 && sz>0) ? malloc(n*sz) : 0, sz, n);
      data.shellFlgs |= 0x00000001;
    }else if( strcmp(z,"-lookaside")==0 ){
      int n, sz={0};
      sz = (int)integerValue(cmdline_option_value(argc,argv,++i));
      if( sz<0 ) sz = 0;
      n = (int)integerValue(cmdline_option_value(argc,argv,++i));
      if( n<0 ) n = 0;
      sqlite3_config(13, sz, n);
      if( sz*n==0 ) data.shellFlgs &= ~0x00000002;
    }else if( strcmp(z,"-mmap")==0 ){
      sqlite3_int64 sz = integerValue(cmdline_option_value(argc,argv,++i));
      sqlite3_config(22, sz, sz);





    }else if( strcmp(z,"-vfs")==0 ){
      zVfs = cmdline_option_value(argc, argv, ++i);




    }else if( strcmp(z,"-append")==0 ){
      data.openMode = 2;






    }else if( strcmp(z,"-readonly")==0 ){
      data.openMode = 4;






    }else if( strcmp(z, "-memtrace")==0 ){
      sqlite3MemTraceActivate(
                             stderr
                                   );
    }
  }
  verify_uninitialized();
  sqlite3_initialize();


  if( zVfs ){
    sqlite3_vfs *pVfs = sqlite3_vfs_find(zVfs);
    if( pVfs ){
      sqlite3_vfs_register(pVfs, 1);
    }else{
      fprintf(
                 stderr
                       , "no such VFS: \"%s\"\n", argv[i]);
      exit(1);
    }
  }

  if( data.zDbFilename==0 ){

    data.zDbFilename = ":memory:";
    warnInmemoryDb = argc==1;




  }
  data.out = 
            stdout
                  ;
  sqlite3_appendvfs_init(0,0,0);






  if( access(data.zDbFilename, 0)==0 ){
    open_db(&data, 0);
  }





  process_sqliterc(&data,zInitFile);






  for(i=1; i<argc; i++){
    char *z = argv[i];
    if( z[0]!='-' ) continue;
    if( z[1]=='-' ){ z++; }
    if( strcmp(z,"-init")==0 ){
      i++;
    }else if( strcmp(z,"-html")==0 ){
      data.mode = 4;
    }else if( strcmp(z,"-list")==0 ){
      data.mode = 2;
    }else if( strcmp(z,"-quote")==0 ){
      data.mode = 6;
    }else if( strcmp(z,"-line")==0 ){
      data.mode = 0;
    }else if( strcmp(z,"-column")==0 ){
      data.mode = 1;
    }else if( strcmp(z,"-csv")==0 ){
      data.mode = 8;
      memcpy(data.colSeparator,",",2);




    }else if( strcmp(z,"-append")==0 ){
      data.openMode = 2;






    }else if( strcmp(z,"-readonly")==0 ){
      data.openMode = 4;
    }else if( strcmp(z,"-ascii")==0 ){
      data.mode = 10;
      sqlite3_snprintf(sizeof(data.colSeparator), data.colSeparator,
                       "\x1F");
      sqlite3_snprintf(sizeof(data.rowSeparator), data.rowSeparator,
                       "\x1E");
    }else if( strcmp(z,"-separator")==0 ){
      sqlite3_snprintf(sizeof(data.colSeparator), data.colSeparator,
                       "%s",cmdline_option_value(argc,argv,++i));
    }else if( strcmp(z,"-newline")==0 ){
      sqlite3_snprintf(sizeof(data.rowSeparator), data.rowSeparator,
                       "%s",cmdline_option_value(argc,argv,++i));
    }else if( strcmp(z,"-nullvalue")==0 ){
      sqlite3_snprintf(sizeof(data.nullValue), data.nullValue,
                       "%s",cmdline_option_value(argc,argv,++i));
    }else if( strcmp(z,"-header")==0 ){
      data.showHeader = 1;
    }else if( strcmp(z,"-noheader")==0 ){
      data.showHeader = 0;
    }else if( strcmp(z,"-echo")==0 ){
      ((&data)->shellFlgs|=(0x00000040));
    }else if( strcmp(z,"-eqp")==0 ){
      data.autoEQP = 1;
    }else if( strcmp(z,"-eqpfull")==0 ){
      data.autoEQP = 3;
    }else if( strcmp(z,"-stats")==0 ){
      data.statsOn = 1;
    }else if( strcmp(z,"-scanstats")==0 ){
      data.scanstatsOn = 1;
    }else if( strcmp(z,"-backslash")==0 ){





      ((&data)->shellFlgs|=(0x00000004));
    }else if( strcmp(z,"-bail")==0 ){
      bail_on_error = 1;
    }else if( strcmp(z,"-version")==0 ){
      printf("%s %s\n", sqlite3_libversion(), sqlite3_sourceid());
      return 0;
    }else if( strcmp(z,"-interactive")==0 ){
      stdin_is_interactive = 1;
    }else if( strcmp(z,"-batch")==0 ){
      stdin_is_interactive = 0;
    }else if( strcmp(z,"-heap")==0 ){
      i++;
    }else if( strcmp(z,"-pagecache")==0 ){
      i+=2;
    }else if( strcmp(z,"-lookaside")==0 ){
      i+=2;
    }else if( strcmp(z,"-mmap")==0 ){
      i++;
    }else if( strcmp(z,"-memtrace")==0 ){
      i++;




    }else if( strcmp(z,"-vfs")==0 ){
      i++;
    }else if( strcmp(z,"-help")==0 ){
      usage(1);
    }else if( strcmp(z,"-cmd")==0 ){




      if( i==argc-1 ) break;
      z = cmdline_option_value(argc,argv,++i);
      if( z[0]=='.' ){
        rc = do_meta_command(z, &data);
        if( rc && bail_on_error ) return rc==2 ? 0 : rc;
      }else{
        open_db(&data, 0);
        rc = shell_exec(&data, z, &zErrMsg);
        if( zErrMsg!=0 ){
          fprintf(
                     stderr
                           ,"Error: %s\n", zErrMsg);
          if( bail_on_error ) return rc!=0 ? rc : 1;
        }else if( rc!=0 ){
          fprintf(
                     stderr
                           ,"Error: unable to process SQL \"%s\"\n", z);
          if( bail_on_error ) return rc;
        }
      }
    }else{
      fprintf(
                 stderr
                       ,"%s: Error: unknown option: %s\n", Argv0, z);
      fprintf(
                stderr
                      ,"Use -help for a list of options.\n");
      return 1;
    }
    data.cMode = data.mode;
  }

  if( !readStdin ){




    for(i=0; i<nCmd; i++){
      if( azCmd[i][0]=='.' ){
        rc = do_meta_command(azCmd[i], &data);
        if( rc ) return rc==2 ? 0 : rc;
      }else{
        open_db(&data, 0);
        rc = shell_exec(&data, azCmd[i], &zErrMsg);
        if( zErrMsg!=0 ){
          fprintf(
                     stderr
                           ,"Error: %s\n", zErrMsg);
          return rc!=0 ? rc : 1;
        }else if( rc!=0 ){
          fprintf(
                     stderr
                           ,"Error: unable to process SQL: %s\n", azCmd[i]);
          return rc;
        }
      }
    }
    free(azCmd);
  }else{


    if( stdin_is_interactive ){
      char *zHome={0};
      char *zHistory={0};
      int nHistory={0};
      printf(
        "SQLite version %s %.19s\n"
        "Enter \".help\" for usage hints.\n",
        sqlite3_libversion(), sqlite3_sourceid()
      );
      if( warnInmemoryDb ){
        printf("Connected to a ");
        printBold("transient in-memory database");
        printf(".\nUse \".open FILENAME\" to reopen on a "
               "persistent database.\n");
      }
      zHistory = getenv("SQLITE_HISTORY");
      if( zHistory ){
        zHistory = strdup(zHistory);
      }else if( (zHome = find_home_dir(0))!=0 ){
        nHistory = strlen30(zHome) + 20;
        if( (zHistory = malloc(nHistory))!=0 ){
          sqlite3_snprintf(nHistory, zHistory,"%s/.sqlite_history", zHome);
        }
      }
      if( zHistory ){ ; }





      data.in = 0;
      rc = process_input(&data);
      if( zHistory ){
        ;
        ;
        free(zHistory);
      }
    }else{
      data.in = 
               stdin
                    ;
      rc = process_input(&data);
    }
  }
  set_table_name(&data, 0);
  if( data.db ){
    ;
    close_db(data.db);
  }
  sqlite3_free(data.zFreeOnClose);
  find_home_dir(1);
  output_reset(&data);
  data.doXdgOpen = 0;
  clearTempFile(&data);






  memset(&data, 0, sizeof(data));
  return rc;
}
