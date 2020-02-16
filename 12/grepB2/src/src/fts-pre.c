       
       






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
#endif /* ! __i386__ */



#ifdef __i386__
__extension__ typedef signed long long int __int64_t;
__extension__ typedef unsigned long long int __uint64_t;

#endif /* __i386__ */




#ifndef __i386__
typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
#endif /* ! __i386__ */


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
__extension__ typedef long long int __quad_t;
__extension__ typedef unsigned long long int __u_quad_t;
#endif /* __i386__ */

#ifndef __i386__
typedef int __daddr_t;
typedef int __key_t;
#endif /* ! __i386__ */

#ifdef __i386__
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
typedef int __clockid_t;
#else /* __i386__ */
__extension__ typedef int __daddr_t;
__extension__ typedef int __key_t;
#endif /* __i386__ */


#ifndef __i386__
typedef void * __timer_t;
#else /* __i386__ */
__extension__ typedef int __clockid_t;
#endif /* __i386__ */


#ifndef __i386__
typedef long int __blksize_t;
#else /* __i386__ */
__extension__ typedef void * __timer_t;
#endif /* __i386__ */


#ifdef __i386__
__extension__ typedef long int __blksize_t;
#endif /* __i386__ */


#ifndef __i386__
typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;
#endif /* ! __i386__ */


#ifndef __i386__
typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;
#else /* __i386__ */
__extension__ typedef long int __blkcnt_t;
__extension__ typedef __quad_t __blkcnt64_t;
#endif /* __i386__ */


#ifndef __i386__
typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;
#else /* __i386__ */
__extension__ typedef unsigned long int __fsblkcnt_t;
__extension__ typedef __u_quad_t __fsblkcnt64_t;
#endif /* __i386__ */


#ifndef __i386__
typedef long int __fsword_t;
#else /* __i386__ */
__extension__ typedef unsigned long int __fsfilcnt_t;
__extension__ typedef __u_quad_t __fsfilcnt64_t;
#endif /* __i386__ */

#ifndef __i386__
typedef long int __ssize_t;
#endif /* ! __i386__ */

#ifdef __i386__
__extension__ typedef int __fsword_t;
#endif /* __i386__ */

#ifndef __i386__
typedef long int __syscall_slong_t;
#else /* __i386__ */
__extension__ typedef int __ssize_t;
#endif /* __i386__ */

#ifndef __i386__
typedef unsigned long int __syscall_ulong_t;
#else /* __i386__ */

__extension__ typedef long int __syscall_slong_t;

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









#ifndef __i386__
typedef long int ptrdiff_t;
typedef int wchar_t;
#else /* __i386__ */
typedef int ptrdiff_t;
typedef long int wchar_t;
#endif /* __i386__ */
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
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
extern int _gl_cxxalias_dummy
                                                                      ;
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
extern int _gl_cxxalias_dummy
                                                                    ;

extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;





       
       






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
     __attribute__ ((__const__));


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


extern int dysize (int __year) __attribute__ ((__const__));
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
     __attribute__ ((__nonnull__ (1)));



struct __time_t_must_be_integral {
  unsigned int __floating_time_t_unsupported : (time_t) 1;
};


       


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
   struct stat *__restrict __buf) __attribute__ ((__nonnull__ (1, 2)));



extern int fstat (int __fd, struct stat *__buf) __attribute__ ((__nonnull__ (2)));
extern int fstatat (int __fd, const char *__restrict __file,
      struct stat *__restrict __buf, int __flag)
     __attribute__ ((__nonnull__ (2, 3)));
extern int lstat (const char *__restrict __file,
    struct stat *__restrict __buf) __attribute__ ((__nonnull__ (1, 2)));
extern int chmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nonnull__ (1)));





extern int lchmod (const char *__file, __mode_t __mode)
     __attribute__ ((__nonnull__ (1)));




extern int fchmod (int __fd, __mode_t __mode) ;





extern int fchmodat (int __fd, const char *__file, __mode_t __mode,
       int __flag)
     __attribute__ ((__nonnull__ (2))) ;






extern __mode_t umask (__mode_t __mask) ;
extern int mkdir (const char *__path, __mode_t __mode)
     __attribute__ ((__nonnull__ (1)));





extern int mkdirat (int __fd, const char *__path, __mode_t __mode)
     __attribute__ ((__nonnull__ (2)));






extern int mknod (const char *__path, __mode_t __mode, __dev_t __dev)
     __attribute__ ((__nonnull__ (1)));





extern int mknodat (int __fd, const char *__path, __mode_t __mode,
      __dev_t __dev) __attribute__ ((__nonnull__ (2)));





extern int mkfifo (const char *__path, __mode_t __mode)
     __attribute__ ((__nonnull__ (1)));





extern int mkfifoat (int __fd, const char *__path, __mode_t __mode)
     __attribute__ ((__nonnull__ (2)));





extern int utimensat (int __fd, const char *__path,
        const struct timespec __times[2],
        int __flags)
     __attribute__ ((__nonnull__ (2)));




extern int futimens (int __fd, const struct timespec __times[2]) ;
extern int __fxstat (int __ver, int __fildes, struct stat *__stat_buf)
     __attribute__ ((__nonnull__ (3)));
extern int __xstat (int __ver, const char *__filename,
      struct stat *__stat_buf) __attribute__ ((__nonnull__ (2, 3)));
extern int __lxstat (int __ver, const char *__filename,
       struct stat *__stat_buf) __attribute__ ((__nonnull__ (2, 3)));
extern int __fxstatat (int __ver, int __fildes, const char *__filename,
         struct stat *__stat_buf, int __flag)
     __attribute__ ((__nonnull__ (3, 4)));
extern int __xmknod (int __ver, const char *__path, __mode_t __mode,
       __dev_t *__dev) __attribute__ ((__nonnull__ (2, 4)));

extern int __xmknodat (int __ver, int __fd, const char *__path,
         __mode_t __mode, __dev_t *__dev)
     __attribute__ ((__nonnull__ (3, 5)));

extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy
                                                                         ;

extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;


extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;


extern int _gl_cxxalias_dummy;


enum { I_RING_SIZE = 4 };
_Static_assert (1 <= I_RING_SIZE, "verify (" "1 <= I_RING_SIZE" ")");
struct I_ring
{
  int ir_data[I_RING_SIZE];
  int ir_default_val;
  unsigned int ir_front;
  unsigned int ir_back;
  
 _Bool 
      ir_empty;
};
typedef struct I_ring I_ring;

void i_ring_init (I_ring *ir, int ir_default_val);
int i_ring_push (I_ring *ir, int val);
int i_ring_pop (I_ring *ir);

_Bool 
    i_ring_empty (I_ring const *ir) 
                                    __attribute__ ((__pure__))
                                                      ;

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
extern int sigblock (int __mask) __attribute__ ((__deprecated__));


extern int sigsetmask (int __mask) __attribute__ ((__deprecated__));


extern int siggetmask (void) __attribute__ ((__deprecated__));
typedef __sighandler_t sig_t;





extern int sigemptyset (sigset_t *__set) __attribute__ ((__nonnull__ (1)));


extern int sigfillset (sigset_t *__set) __attribute__ ((__nonnull__ (1)));


extern int sigaddset (sigset_t *__set, int __signo) __attribute__ ((__nonnull__ (1)));


extern int sigdelset (sigset_t *__set, int __signo) __attribute__ ((__nonnull__ (1)));


extern int sigismember (const sigset_t *__set, int __signo)
     __attribute__ ((__nonnull__ (1)));
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






extern int sigsuspend (const sigset_t *__set) __attribute__ ((__nonnull__ (1)));


extern int sigaction (int __sig, const struct sigaction *__restrict __act,
        struct sigaction *__restrict __oact) ;


extern int sigpending (sigset_t *__set) __attribute__ ((__nonnull__ (1)));






extern int sigwait (const sigset_t *__restrict __set, int *__restrict __sig)
     __attribute__ ((__nonnull__ (1, 2)));






extern int sigwaitinfo (const sigset_t *__restrict __set,
   siginfo_t *__restrict __info) __attribute__ ((__nonnull__ (1)));






extern int sigtimedwait (const sigset_t *__restrict __set,
    siginfo_t *__restrict __info,
    const struct timespec *__restrict __timeout)
     __attribute__ ((__nonnull__ (1)));



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
     __attribute__ ((__deprecated__));



extern int sigaltstack (const struct sigaltstack *__restrict __ss,
   struct sigaltstack *__restrict __oss) ;
extern int pthread_sigmask (int __how,
       const __sigset_t *__restrict __newmask,
       __sigset_t *__restrict __oldmask);


extern int pthread_kill (pthread_t __threadid, int __signo) ;






extern int __libc_current_sigrtmin (void) ;

extern int __libc_current_sigrtmax (void) ;













       

       
       







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
     int __advise) ;
extern int posix_fallocate (int __fd, off_t __offset, off_t __len);

extern int rpl_fcntl (int fd, int action, ...);
extern int _gl_cxxalias_dummy;






extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;




extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy
                                                                               ;

extern int _gl_cxxalias_dummy;







extern int *__errno_location (void) __attribute__ ((__const__));


       








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
     __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (const char *__nptr)
     __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (const char *__nptr)
     __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (const char *__nptr)
     __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nonnull__ (1)));





extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nonnull__ (1)));





extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nonnull__ (1)));





__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nonnull__ (1)));

extern char *l64a (long int __n) ;


extern long int a64l (const char *__s)
     __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




       






extern long int random (void) ;


extern void srandom (unsigned int __seed) ;





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nonnull__ (1)));







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
       int32_t *__restrict __result) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) ;

extern void srand (unsigned int __seed) ;




extern int rand_r (unsigned int *__seed) ;







extern double drand48 (void) ;
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) ;
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) ;
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) ;
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nonnull__ (1, 2)));









extern void *malloc (size_t __size) __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__malloc__)) ;










extern void *realloc (void *__ptr, size_t __size)
     
            __attribute__ ((__warn_unused_result__))
                                            ;

extern void free (void *__ptr) ;




extern void cfree (void *__ptr) ;








extern void *valloc (size_t __size) __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nonnull__ (1))) ;




extern void *aligned_alloc (size_t __alignment, size_t __size)
     __attribute__ ((__malloc__)) __attribute__ ((__alloc_size__ (2))) ;




extern void abort (void) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nonnull__ (1)));







extern int at_quick_exit (void (*__func) (void)) __attribute__ ((__nonnull__ (1)));







extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__noreturn__));





extern void quick_exit (int __status) __attribute__ ((__noreturn__));







extern void _Exit (int __status) __attribute__ ((__noreturn__));






extern char *getenv (const char *__name) __attribute__ ((__nonnull__ (1))) ;

extern int putenv (char *__string) __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) ;
extern char *mktemp (char *__template) __attribute__ ((__nonnull__ (1)));
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
extern char *mkdtemp (char *__template) __attribute__ ((__nonnull__ (1))) ;





extern int system (const char *__command) ;

extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) ;






typedef int (*__compar_fn_t) (const void *, const void *);



extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;







extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
extern int abs (int __x) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__const__)) ;



__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__const__)) ;







extern div_t div (int __numer, int __denom)
     __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__const__)) ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__const__)) ;

extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nonnull__ (3, 4, 5)));






extern int mblen (const char *__s, size_t __n) ;


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) ;


extern int wctomb (char *__s, wchar_t __wchar) ;



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) ;

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     ;








extern int rpmatch (const char *__response) __attribute__ ((__nonnull__ (1))) ;
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nonnull__ (1, 2, 3))) ;
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nonnull__ (1)));






extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy
                                                                ;
extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy
                                                                ;
extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;
       














extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     __attribute__ ((__nonnull__ (2)));

extern int strcoll_l (const char *__s1, const char *__s2, __locale_t __l)
     __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    __locale_t __l) __attribute__ ((__nonnull__ (2, 4)));




extern char *strdup (const char *__s)
     __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));

extern char *strchr (const char *__s, int __c)
     __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nonnull__ (2, 3)));


extern size_t strlen (const char *__s)
     __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) ;

extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r")

                        __attribute__ ((__nonnull__ (2)));
extern char *strerror_l (int __errnum, __locale_t __l) ;





extern void __bzero (void *__s, size_t __n) __attribute__ ((__nonnull__ (1)));



extern void bcopy (const void *__src, void *__dest, size_t __n)
     __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nonnull__ (1)));


extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *index (const char *__s, int __c)
     __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern int ffs (int __i) __attribute__ ((__const__));
extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) ;


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nonnull__ (1, 2)));








extern int _gl_cxxalias_dummy

                                                                             ;



extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy
                                                          ;
extern int _gl_cxxalias_dummy

                               ;
extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy

                                                                  ;


extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy
                                                                     ;
extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy;

extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy

                                                                                 ;



extern int _gl_cxxalias_dummy;
extern int _gl_cxxalias_dummy
                                                              ;
extern size_t mbslen (const char *string) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)))

                                                        ;
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
       




typedef __useconds_t useconds_t;
typedef __intptr_t intptr_t;






typedef __socklen_t socklen_t;
extern int access (const char *__name, int __type) __attribute__ ((__nonnull__ (1)));
extern int faccessat (int __fd, const char *__file, int __type, int __flag)
     __attribute__ ((__nonnull__ (2))) ;
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
     __attribute__ ((__nonnull__ (1))) ;



extern int fchown (int __fd, __uid_t __owner, __gid_t __group) ;




extern int lchown (const char *__file, __uid_t __owner, __gid_t __group)
     __attribute__ ((__nonnull__ (1))) ;






extern int fchownat (int __fd, const char *__file, __uid_t __owner,
       __gid_t __group, int __flag)
     __attribute__ ((__nonnull__ (2))) ;



extern int chdir (const char *__path) __attribute__ ((__nonnull__ (1))) ;



extern int fchdir (int __fd) ;
extern char *getcwd (char *__buf, size_t __size) ;
extern char *getwd (char *__buf)
     __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) ;




extern int dup (int __fd) ;


extern int dup2 (int __fd, int __fd2) ;
extern char **__environ;







extern int execve (const char *__path, char *const __argv[],
     char *const __envp[]) __attribute__ ((__nonnull__ (1, 2)));




extern int fexecve (int __fd, char *const __argv[], char *const __envp[])
     __attribute__ ((__nonnull__ (2)));




extern int execv (const char *__path, char *const __argv[])
     __attribute__ ((__nonnull__ (1, 2)));



extern int execle (const char *__path, const char *__arg, ...)
     __attribute__ ((__nonnull__ (1, 2)));



extern int execl (const char *__path, const char *__arg, ...)
     __attribute__ ((__nonnull__ (1, 2)));



extern int execvp (const char *__file, char *const __argv[])
     __attribute__ ((__nonnull__ (1, 2)));




extern int execlp (const char *__file, const char *__arg, ...)
     __attribute__ ((__nonnull__ (1, 2)));
extern int nice (int __inc) ;




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
     __attribute__ ((__nonnull__ (1)));


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
extern __pid_t fork (void) __attribute__ ((__nothrow__));







extern __pid_t vfork (void) ;





extern char *ttyname (int __fd) ;



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nonnull__ (2))) ;



extern int isatty (int __fd) ;




extern int ttyslot (void) ;




extern int link (const char *__from, const char *__to)
     __attribute__ ((__nonnull__ (1, 2))) ;




extern int linkat (int __fromfd, const char *__from, int __tofd,
     const char *__to, int __flags)
     __attribute__ ((__nonnull__ (2, 4))) ;




extern int symlink (const char *__from, const char *__to)
     __attribute__ ((__nonnull__ (1, 2))) ;




extern ssize_t readlink (const char *__restrict __path,
    char *__restrict __buf, size_t __len)
     __attribute__ ((__nonnull__ (1, 2))) ;




extern int symlinkat (const char *__from, int __tofd,
        const char *__to) __attribute__ ((__nonnull__ (1, 3))) ;


extern ssize_t readlinkat (int __fd, const char *__restrict __path,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nonnull__ (2, 3))) ;



extern int unlink (const char *__name) __attribute__ ((__nonnull__ (1)));



extern int unlinkat (int __fd, const char *__name, int __flag)
     __attribute__ ((__nonnull__ (2)));



extern int rmdir (const char *__path) __attribute__ ((__nonnull__ (1)));



extern __pid_t tcgetpgrp (int __fd) ;


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) ;






extern char *getlogin (void);







extern int getlogin_r (char *__name, size_t __name_len) __attribute__ ((__nonnull__ (1)));




extern int setlogin (const char *__name) __attribute__ ((__nonnull__ (1)));
       
extern char *optarg;
extern int optind;




extern int opterr;



extern int optopt;
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       ;








extern char *
            rpl_optarg
                  ;
extern int 
          rpl_optind
                ;




extern int 
          rpl_opterr
                ;



extern int 
          rpl_optopt
                ;
extern int 
          rpl_getopt 
                 (int ___argc, char *const *___argv, const char *__shortopts)
       __attribute__ ((__nonnull__ (2, 3)));



struct 
      rpl_option

{
  const char *name;


  int has_arg;
  int *flag;
  int val;
};







extern int 
          rpl_getopt_long 
                      (int ___argc, char * *___argv,
   const char *__shortopts,
          const struct 
                      rpl_option 
                             *__longopts, int *__longind)
       __attribute__ ((__nonnull__ (2, 3)));
extern int 
          rpl_getopt_long_only 
                           (int ___argc, char * *___argv,
        const char *__shortopts,
               const struct 
                           rpl_option 
                                  *__longopts, int *__longind)
       __attribute__ ((__nonnull__ (2, 3)));









extern int gethostname (char *__name, size_t __len) __attribute__ ((__nonnull__ (1)));






extern int sethostname (const char *__name, size_t __len)
     __attribute__ ((__nonnull__ (1))) ;



extern int sethostid (long int __id) ;





extern int getdomainname (char *__name, size_t __len)
     __attribute__ ((__nonnull__ (1))) ;
extern int setdomainname (const char *__name, size_t __len)
     __attribute__ ((__nonnull__ (1))) ;





extern int vhangup (void) ;


extern int revoke (const char *__file) __attribute__ ((__nonnull__ (1))) ;







extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
     __attribute__ ((__nonnull__ (1)));





extern int acct (const char *__name) ;



extern char *getusershell (void) ;
extern void endusershell (void) ;
extern void setusershell (void) ;





extern int daemon (int __nochdir, int __noclose) ;






extern int chroot (const char *__path) __attribute__ ((__nonnull__ (1))) ;



extern char *getpass (const char *__prompt) __attribute__ ((__nonnull__ (1)));







extern int fsync (int __fd);
extern long int gethostid (void);


extern void sync (void) ;





extern int getpagesize (void) __attribute__ ((__const__));




extern int getdtablesize (void) ;
extern int truncate (const char *__file, __off_t __length)
     __attribute__ ((__nonnull__ (1))) ;
extern int ftruncate (int __fd, __off_t __length) ;
extern int brk (void *__addr) ;





extern void *sbrk (intptr_t __delta) ;
extern long int syscall (long int __sysno, ...) ;
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



       
       


int open_safer (char const *, int, ...);
int creat_safer (char const *, mode_t);


int openat_safer (int, char const *, int, ...);
DIR *opendir_safer (const char *name);
int dup_safer (int);
int fd_safer (int);
int pipe_safer (int[2]);


int set_cloexec_flag (int desc, 
                               _Bool 
                                    value);





int dup_cloexec (int fd);
       

       
       







_Noreturn void openat_restore_fail (int);
_Noreturn void openat_save_fail (int);

       
enum
{
  NOT_AN_INODE_NUMBER = 0
};
enum
{
  _FTS_INODE_SORT_DIR_ENTRIES_THRESHOLD = 10000
};

enum Fts_stat
{
  FTS_NO_STAT_REQUIRED = 1,
  FTS_STAT_REQUIRED = 2
};
static FTSENT *fts_alloc (FTS *, const char *, size_t) ;
static FTSENT *fts_build (FTS *, int) ;
static void fts_lfree (FTSENT *) ;
static void fts_load (FTS *, FTSENT *) ;
static size_t fts_maxarglen (char * const *) ;
static void fts_padjust (FTS *, FTSENT *) ;
static 
      _Bool 
                fts_palloc (FTS *, size_t) ;
static FTSENT *fts_sort (FTS *, FTSENT *, size_t) ;
static unsigned short int fts_stat (FTS *, FTSENT *, 
                                                    _Bool
                                                        ) ;
static int fts_safe_changedir (FTS *, FTSENT *, int, const char *)
     ;

       

typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;



#ifndef __i386__
typedef unsigned long int uint64_t;
#else /* __i386__ */


__extension__
typedef unsigned long long int uint64_t;






#endif /* __i386__ */
typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;

#ifndef __i386__
typedef long int int_least64_t;

#endif /* ! __i386__ */


#ifdef __i386__
__extension__
typedef long long int int_least64_t;
#endif /* __i386__ */



typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;

#ifndef __i386__
typedef unsigned long int uint_least64_t;
#else /* __i386__ */


__extension__
typedef unsigned long long int uint_least64_t;






#endif /* __i386__ */
typedef signed char int_fast8_t;

#ifndef __i386__
typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
#else /* __i386__ */




typedef int int_fast16_t;
typedef int int_fast32_t;
__extension__
typedef long long int int_fast64_t;



#endif /* __i386__ */
typedef unsigned char uint_fast8_t;

#ifndef __i386__
typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
typedef unsigned long int uintptr_t;
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
#endif /* ! __i386__ */
       



#ifdef __i386__
typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
__extension__
typedef unsigned long long int uint_fast64_t;
typedef unsigned int uintptr_t;
__extension__
typedef long long int intmax_t;
__extension__
typedef unsigned long long int uintmax_t;
#endif /* __i386__ */



       






#ifndef __i386__
typedef int __gwchar_t;
#endif /* ! __i386__ */




#ifdef __i386__
typedef long int __gwchar_t;
#endif /* __i386__ */

typedef struct
  {
#ifndef __i386__
    long int quot;
    long int rem;
#else /* __i386__ */
    __extension__ long long int quot;
    __extension__ long long int rem;
#endif /* __i386__ */
  } imaxdiv_t;
extern intmax_t imaxabs (intmax_t __n) __attribute__ ((__const__));


extern imaxdiv_t imaxdiv (intmax_t __numer, intmax_t __denom)
      __attribute__ ((__const__));


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




       
       


struct dev_ino
{
  ino_t st_ino;
  dev_t st_dev;
};


struct cycle_check_state
{
  struct dev_ino dev_ino;
  uintmax_t chdir_counter;
  int magic;
};

void cycle_check_init (struct cycle_check_state *state);

_Bool 
    cycle_check (struct cycle_check_state *state, struct stat const *sb);
       
typedef size_t (*Hash_hasher) (const void *, size_t);
typedef 
       _Bool 
            (*Hash_comparator) (const void *, const void *);
typedef void (*Hash_data_freer) (void *);
typedef 
       _Bool 
            (*Hash_processor) (void *, void *);

struct hash_tuning
  {



    float shrink_threshold;
    float shrink_factor;
    float growth_threshold;
    float growth_factor;
    
   _Bool 
        is_n_buckets;
  };

typedef struct hash_tuning Hash_tuning;

struct hash_table;

typedef struct hash_table Hash_table;


size_t hash_get_n_buckets (const Hash_table *) 
                                              __attribute__ ((__pure__))
                                                                ;
size_t hash_get_n_buckets_used (const Hash_table *) 
                                                   __attribute__ ((__pure__))
                                                                     ;
size_t hash_get_n_entries (const Hash_table *) 
                                              __attribute__ ((__pure__))
                                                                ;
size_t hash_get_max_bucket_length (const Hash_table *) 
                                                      __attribute__ ((__pure__))
                                                                        ;

_Bool 
    hash_table_ok (const Hash_table *) 
                                       __attribute__ ((__pure__))
                                                         ;
void hash_print_statistics (const Hash_table *, FILE *);
void *hash_lookup (const Hash_table *, const void *);


void *hash_get_first (const Hash_table *) 
                                         __attribute__ ((__pure__))
                                                           ;
void *hash_get_next (const Hash_table *, const void *);
size_t hash_get_entries (const Hash_table *, void **, size_t);
size_t hash_do_for_each (const Hash_table *, Hash_processor, void *);


size_t hash_string (const char *, size_t) 
                                         __attribute__ ((__pure__))
                                                           ;
void hash_reset_tuning (Hash_tuning *);
Hash_table *hash_initialize (size_t, const Hash_tuning *,
                             Hash_hasher, Hash_comparator,
                             Hash_data_freer) __attribute__ ((__warn_unused_result__));
void hash_clear (Hash_table *);
void hash_free (Hash_table *);



_Bool 
    hash_rehash (Hash_table *, size_t) __attribute__ ((__warn_unused_result__));
void *hash_insert (Hash_table *, const void *) __attribute__ ((__warn_unused_result__));

int hash_insert_if_absent (Hash_table *table, const void *entry,
                           const void **matched_ent);
void *hash_delete (Hash_table *, const void *);


struct Active_dir
{
  dev_t dev;
  ino_t ino;
  FTSENT *fts_ent;
};

static 
      _Bool

AD_compare (void const *x, void const *y)
{
  struct Active_dir const *ax = x;
  struct Active_dir const *ay = y;
  return ax->ino == ay->ino
      && ax->dev == ay->dev;
}

static size_t
AD_hash (void const *x, size_t table_size)
{
  struct Active_dir const *ax = x;
  return (uintmax_t) ax->ino % table_size;
}



static 
      _Bool

setup_dir (FTS *fts)
{
  if (fts->fts_options & (0x0100 | 0x0002))
    {
      enum { HT_INITIAL_SIZE = 31 };
      fts->fts_cycle.ht = hash_initialize (HT_INITIAL_SIZE, 
                                                           ((void *)0)
                                                               , AD_hash,
                                           AD_compare, free);
      if (! fts->fts_cycle.ht)
        return 
              0
                   ;
    }
  else
    {
      fts->fts_cycle.state = malloc (sizeof *fts->fts_cycle.state);
      if (! fts->fts_cycle.state)
        return 
              0
                   ;
      cycle_check_init (fts->fts_cycle.state);
    }

  return 
        1
            ;
}



static 
      _Bool

enter_dir (FTS *fts, FTSENT *ent)
{
  if (fts->fts_options & (0x0100 | 0x0002))
    {
      struct stat const *st = ent->fts_statp;
      struct Active_dir *ad = malloc (sizeof *ad);
      struct Active_dir *ad_from_table={0};

      if (!ad)
        return 
              0
                   ;

      ad->dev = st->st_dev;
      ad->ino = st->st_ino;
      ad->fts_ent = ent;




      ad_from_table = hash_insert (fts->fts_cycle.ht, ad);

      if (ad_from_table != ad)
        {
          free (ad);
          if (!ad_from_table)
            return 
                  0
                       ;



          ent->fts_cycle = ad_from_table->fts_ent;
          ent->fts_info = 2;
        }
    }
  else
    {
      if (cycle_check (fts->fts_cycle.state, ent->fts_statp))
        {




          ent->fts_cycle = ent;
          ent->fts_info = 2;
        }
    }

  return 
        1
            ;
}



static void
leave_dir (FTS *fts, FTSENT *ent)
{
  struct stat const *st = ent->fts_statp;
  if (fts->fts_options & (0x0100 | 0x0002))
    {
      struct Active_dir obj={0};
      void *found={0};
      obj.dev = st->st_dev;
      obj.ino = st->st_ino;
      found = hash_delete (fts->fts_cycle.ht, &obj);
      if (!found)
        abort ();
      free (found);
    }
  else
    {
      FTSENT *parent = ent->fts_parent;
      if (parent != 
                   ((void *)0) 
                        && 0 <= parent->fts_level)
        do { if ((fts->fts_cycle.state)->chdir_counter == 0) abort (); if ((((fts->fts_cycle.state)->dev_ino).st_ino == (*st).st_ino && ((fts->fts_cycle.state)->dev_ino).st_dev == (*st).st_dev)) { (fts->fts_cycle.state)->dev_ino.st_dev = (*(parent->fts_statp)).st_dev; (fts->fts_cycle.state)->dev_ino.st_ino = (*(parent->fts_statp)).st_ino; } } while (0)
                                                                ;
    }
}



static void
free_dir (FTS *sp)
{
  if (sp->fts_options & (0x0100 | 0x0002))
    {
      if (sp->fts_cycle.ht)
        hash_free (sp->fts_cycle.ht);
    }
  else
    free (sp->fts_cycle.state);
}
static void
fd_ring_clear (I_ring *fd_ring)
{
  while ( ! i_ring_empty (fd_ring))
    {
      int fd = i_ring_pop (fd_ring);
      if (0 <= fd)
        close (fd);
    }
}




static void
fts_set_stat_required (FTSENT *p, 
                                 _Bool 
                                      required)
{
  do { if (!(p->fts_info == 11)) abort (); } while (
 0
 );
  p->fts_statp->st_size = (required
                           ? FTS_STAT_REQUIRED
                           : FTS_NO_STAT_REQUIRED);
}



static DIR *

opendirat (int fd, char const *dir, int extra_flags, int *pdir_fd)
{
  int new_fd = openat_safer (fd, dir,
                       (
                       00 
                                | 
                                  0200000 
                                              | 
                                                0400 
                                                         | 
                                                           04000
                        
                       | extra_flags));
  DIR *dirp={0};

  if (new_fd < 0)
    return 
          ((void *)0)
              ;
  set_cloexec_flag (new_fd, 
                           1
                               );
  dirp = fdopendir (new_fd);
  if (dirp)
    *pdir_fd = new_fd;
  else
    {
      int saved_errno = 
                       (*__errno_location ())
                            ;
      close (new_fd);
      
     (*__errno_location ()) 
           = saved_errno;
    }
  return dirp;
}






static void

cwd_advance_fd (FTS *sp, int fd, 
                                _Bool 
                                     chdir_down_one)
{
  int old = sp->fts_cwd_fd;
  do { if (!(old != fd || old == 
 -100
 )) abort (); } while (
 0
 );

  if (chdir_down_one)
    {


      int prev_fd_in_slot = i_ring_push (&sp->fts_fd_ring, old);
      ;
      if (0 <= prev_fd_in_slot)
        close (prev_fd_in_slot);
    }
  else if ( ! (sp->fts_options & (0x0004)))
    {
      if (0 <= old)
        close (old);
    }

  sp->fts_cwd_fd = fd;
}





static int
restore_initial_cwd (FTS *sp)
{
  int fail = (!(sp->fts_options & (0x0004)) && ((sp->fts_options & (0x0200)) ? (cwd_advance_fd ((sp), ((sp->fts_options & (0x0200)) ? 
            -100 
            : sp->fts_rfd), 
            1
            ), 0) : fchdir ((sp->fts_options & (0x0200)) ? 
            -100 
            : sp->fts_rfd)));
  fd_ring_clear (&(sp->fts_fd_ring));
  return fail;
}





static int

diropen (FTS const *sp, char const *dir)
{
  int open_flags = (
                   00 
                            | 
                              0200000 
                                          | 
                                            0400 
                                                     | 
                                                       04000
                    
                   | ((sp->fts_options & (0x0010)) ? 
                                             0400000 
                                                        : 0)
                    | ((sp->fts_options & (0x0800)) ? 
                                            0 
                                                      : 0));

  int fd = ((sp->fts_options & (0x0200))
            ? openat_safer (sp->fts_cwd_fd, dir, open_flags)
            : open_safer (dir, open_flags));
  if (0 <= fd)
    set_cloexec_flag (fd, 
                         1
                             );
  return fd;
}

FTS *
fts_open (char * const *argv,
          register int options,
          int (*compar) (FTSENT const **, FTSENT const **))
{
        register FTS *sp={0};
        register FTSENT *p, *root={0};
        register size_t nitems={0};
        FTSENT *parent = 
                        ((void *)0)
                            ;
        FTSENT *tmp = 
                     ((void *)0)
                         ;
        
       _Bool 
            defer_stat={0};


        if (options & ~0x1fff) {
                
               (*__errno_location ()) 
               = (
               22
               );
                return (
                       ((void *)0)
                           );
        }
        if ((options & 0x0004) && (options & 0x0200)) {
                
               (*__errno_location ()) 
               = (
               22
               );
                return (
                       ((void *)0)
                           );
        }
        if ( ! (options & (0x0002 | 0x0010))) {
                
               (*__errno_location ()) 
               = (
               22
               );
                return (
                       ((void *)0)
                           );
        }


        if ((sp = malloc(sizeof(FTS))) == 
                                         ((void *)0)
                                             )
                return (
                       ((void *)0)
                           );
        memset(sp, 0, sizeof(FTS));
        sp->fts_compar = compar;
        sp->fts_options = options;


        if ((sp->fts_options & (0x0002))) {
                (sp->fts_options |= (0x0004));
                (sp->fts_options &= ~(0x0200));
        }


        sp->fts_cwd_fd = 
                        -100
                                ;
        if ( (sp->fts_options & (0x0200)) && ! 1)
          {




            int fd = open_safer (".",
                           
                          00 
                                   | ((sp->fts_options & (0x0800)) ? 
                                                            0 
                                                                      : 0));
            if (fd < 0)
              {
                if ( 
                    0
                                          )
                  {
                    (sp->fts_options |= (0x0004));
                    (sp->fts_options &= ~(0x0200));
                  }
              }
            else
              {
                close (fd);
              }
          }
        {
          size_t maxarglen = fts_maxarglen(argv);
          if (! fts_palloc(sp, 
                              (((
                              maxarglen
                              )>(4096))?(
                              maxarglen
                              ):(4096))
                                                        ))
                  goto mem1;
        }


        if (*argv != 
                    ((void *)0)
                        ) {
                if ((parent = fts_alloc(sp, "", 0)) == 
                                                      ((void *)0)
                                                          )
                        goto mem2;
                parent->fts_level = (-1);
          }
        defer_stat = (compar == 
                               ((void *)0) 
                                    || (sp->fts_options & (0x0400)));


        for (root = 
                   ((void *)0)
                       , nitems = 0; *argv != 
                                              ((void *)0)
                                                  ; ++argv, ++nitems) {

                size_t len = strlen(*argv);

                if ( ! (options & 0x1000))
                  {


                    char const *v = *argv;
                    if (2 < len && v[len - 1] == '/')
                      while (1 < len && v[len - 2] == '/')
                        --len;
                  }

                if ((p = fts_alloc(sp, *argv, len)) == 
                                                      ((void *)0)
                                                          )
                        goto mem3;
                p->fts_level = 0;
                p->fts_parent = parent;
                p->fts_accpath = p->fts_name;



                if (defer_stat && root != 
                                         ((void *)0)
                                             ) {
                        p->fts_info = 11;
                        fts_set_stat_required(p, 
                                                1
                                                    );
                } else {
                        p->fts_info = fts_stat(sp, p, 
                                                     0
                                                          );
                }





                if (compar) {
                        p->fts_link = root;
                        root = p;
                } else {
                        p->fts_link = 
                                     ((void *)0)
                                         ;
                        if (root == 
                                   ((void *)0)
                                       )
                                tmp = root = p;
                        else {
                                tmp->fts_link = p;
                                tmp = p;
                        }
                }
        }
        if (compar && nitems > 1)
                root = fts_sort(sp, root, nitems);






        if ((sp->fts_cur = fts_alloc(sp, "", 0)) == 
                                                   ((void *)0)
                                                       )
                goto mem3;
        sp->fts_cur->fts_link = root;
        sp->fts_cur->fts_info = 9;
        if (! setup_dir (sp))
                goto mem3;
        if (!(sp->fts_options & (0x0004)) && !(sp->fts_options & (0x0200))
            && (sp->fts_rfd = diropen (sp, ".")) < 0)
                (sp->fts_options |= (0x0004));

        i_ring_init (&sp->fts_fd_ring, -1);
        return (sp);

mem3: fts_lfree(root);
        free(parent);
mem2: free(sp->fts_path);
mem1: free(sp);
        return (
               ((void *)0)
                   );
}

static void

fts_load (FTS *sp, register FTSENT *p)
{
        register size_t len={0};
        register char *cp={0};
        len = p->fts_pathlen = p->fts_namelen;
        memmove(sp->fts_path, p->fts_name, len + 1);
        if ((cp = strrchr(p->fts_name, '/')) && (cp != p->fts_name || cp[1])) {
                len = strlen(++cp);
                memmove(p->fts_name, cp, len + 1);
                p->fts_namelen = len;
        }
        p->fts_accpath = p->fts_path = sp->fts_path;
}

int
fts_close (FTS *sp)
{
        register FTSENT *freep, *p={0};
        int saved_errno = 0;






        if (sp->fts_cur) {
                for (p = sp->fts_cur; p->fts_level >= 0;) {
                        freep = p;
                        p = p->fts_link != 
                                          ((void *)0) 
                                               ? p->fts_link : p->fts_parent;
                        free(freep);
                }
                free(p);
        }


        if (sp->fts_child)
                fts_lfree(sp->fts_child);
        free(sp->fts_array);
        free(sp->fts_path);

        if ((sp->fts_options & (0x0200)))
          {
            if (0 <= sp->fts_cwd_fd)
              if (close (sp->fts_cwd_fd))
                saved_errno = 
                             (*__errno_location ())
                                  ;
          }
        else if (!(sp->fts_options & (0x0004)))
          {

            if (fchdir(sp->fts_rfd))
              saved_errno = 
                           (*__errno_location ())
                                ;



            if (close (sp->fts_rfd))
              if (saved_errno == 0)
                saved_errno = 
                             (*__errno_location ())
                                  ;
          }

        fd_ring_clear (&sp->fts_fd_ring);

        if (sp->fts_leaf_optimization_works_ht)
          hash_free (sp->fts_leaf_optimization_works_ht);

        free_dir (sp);


        free(sp);


        if (saved_errno) {
                
               (*__errno_location ()) 
               = (saved_errno);
                return (-1);
        }

        return (0);
}








struct statfs
  {
    __fsword_t f_type;
    __fsword_t f_bsize;

    __fsblkcnt_t f_blocks;
    __fsblkcnt_t f_bfree;
    __fsblkcnt_t f_bavail;
    __fsfilcnt_t f_files;
    __fsfilcnt_t f_ffree;







    __fsid_t f_fsid;
    __fsword_t f_namelen;
    __fsword_t f_frsize;
    __fsword_t f_flags;
    __fsword_t f_spare[4];
  };





extern int statfs (const char *__file, struct statfs *__buf)
     __attribute__ ((__nonnull__ (1, 2)));
extern int fstatfs (int __fildes, struct statfs *__buf)
     __attribute__ ((__nonnull__ (2)));


static 
      _Bool

dirent_inode_sort_may_be_useful (int dir_fd)
{





  struct statfs fs_buf={0};


  if (fstatfs (dir_fd, &fs_buf) != 0)
    return 
          1
              ;



  switch (fs_buf.f_type)
    {
    case 0x1021994:
    case 0x6969:


      return 
            0
                 ;

    default:
      return 
            1
                ;
    }
}




static 
      _Bool

leaf_optimization_applies (int dir_fd)
{
  struct statfs fs_buf={0};


  if (fstatfs (dir_fd, &fs_buf) != 0)
    return 
          0
               ;




  switch (fs_buf.f_type)
    {


    case 0x52654973:
    case 0x58465342:
      return 
            1
                ;



    case 0x6969:




      ((void) 0);
    case 0x9FA0:


      ((void) 0);
    default:
      return 
            0
                 ;
    }
}
struct LCO_ent
{
  dev_t st_dev;
  
 _Bool 
      opt_ok;
};




enum { LCO_HT_INITIAL_SIZE = 13 };

static size_t
LCO_hash (void const *x, size_t table_size)
{
  struct LCO_ent const *ax = x;
  return (uintmax_t) ax->st_dev % table_size;
}

static 
      _Bool

LCO_compare (void const *x, void const *y)
{
  struct LCO_ent const *ax = x;
  struct LCO_ent const *ay = y;
  return ax->st_dev == ay->st_dev;
}




static 
      _Bool

link_count_optimize_ok (FTSENT const *p)
{
  FTS *sp = p->fts_fts;
  Hash_table *h = sp->fts_leaf_optimization_works_ht;
  struct LCO_ent tmp={0};
  struct LCO_ent *ent={0};
  
 _Bool 
      opt_ok={0};
  struct LCO_ent *t2={0};



  if (!(sp->fts_options & (0x0200)))
    return 
          0
               ;


  if (h == 
          ((void *)0)
              )
    {
      h = sp->fts_leaf_optimization_works_ht
        = hash_initialize (LCO_HT_INITIAL_SIZE, 
                                               ((void *)0)
                                                   , LCO_hash,
                           LCO_compare, free);
      if (h == 
              ((void *)0)
                  )
        return 
              0
                   ;
    }
  tmp.st_dev = p->fts_statp->st_dev;
  ent = hash_lookup (h, &tmp);
  if (ent)
    return ent->opt_ok;


  t2 = malloc (sizeof *t2);
  if (t2 == 
           ((void *)0)
               )
    return 
          0
               ;


  opt_ok = leaf_optimization_applies (sp->fts_cwd_fd);
  t2->opt_ok = opt_ok;
  t2->st_dev = p->fts_statp->st_dev;

  ent = hash_insert (h, t2);
  if (ent == 
            ((void *)0)
                )
    {

      free (t2);
      return 
            0
                 ;
    }
  do { if (!(ent == t2)) abort (); } while (
 0
 );

  return opt_ok;
}
FTSENT *
fts_read (register FTS *sp)
{
        register FTSENT *p, *tmp={0};
        register unsigned short int instr={0};
        register char *t={0};


        if (sp->fts_cur == 
                          ((void *)0) 
                               || (sp->fts_options & (0x4000)))
                return (
                       ((void *)0)
                           );


        p = sp->fts_cur;


        instr = p->fts_instr;
        p->fts_instr = 3;


        if (instr == 1) {
                p->fts_info = fts_stat(sp, p, 
                                             0
                                                  );
                return (p);
        }
       
                                                              ;







        if (instr == 2 &&
            (p->fts_info == 12 || p->fts_info == 13)) {
                p->fts_info = fts_stat(sp, p, 
                                             1
                                                 );
                if (p->fts_info == 1 && !(sp->fts_options & (0x0004))) {
                        if ((p->fts_symfd = diropen (sp, ".")) < 0) {
                                p->fts_errno = 
                                              (*__errno_location ())
                                                   ;
                                p->fts_info = 7;
                        } else
                                p->fts_flags |= 0x02;
                }
                goto check_for_dir;
        }


        if (p->fts_info == 1) {

                if (instr == 4 ||
                    ((sp->fts_options & (0x0040)) && p->fts_statp->st_dev != sp->fts_dev)) {
                        if (p->fts_flags & 0x02)
                                (void)close(p->fts_symfd);
                        if (sp->fts_child) {
                                fts_lfree(sp->fts_child);
                                sp->fts_child = 
                                               ((void *)0)
                                                   ;
                        }
                        p->fts_info = 6;
                        do { ; leave_dir (sp, p); ; } while (
                       0
                       );
                        return (p);
                }


                if (sp->fts_child != 
                                    ((void *)0) 
                                         && (sp->fts_options & (0x2000))) {
                        (sp->fts_options &= ~(0x2000));
                        fts_lfree(sp->fts_child);
                        sp->fts_child = 
                                       ((void *)0)
                                           ;
                }
                if (sp->fts_child != 
                                    ((void *)0)
                                        ) {
                        if (fts_safe_changedir(sp, p, -1, p->fts_accpath)) {
                                p->fts_errno = 
                                              (*__errno_location ())
                                                   ;
                                p->fts_flags |= 0x01;
                                for (p = sp->fts_child; p != 
                                                            ((void *)0)
                                                                ;
                                     p = p->fts_link)
                                        p->fts_accpath =
                                            p->fts_parent->fts_accpath;
                        }
                } else if ((sp->fts_child = fts_build(sp, 3)) == 
                                                                    ((void *)0)
                                                                        ) {
                        if ((sp->fts_options & (0x4000)))
                                return (
                                       ((void *)0)
                                           );



                        if (p->fts_errno && p->fts_info != 4)
                                p->fts_info = 7;
                        do { ; leave_dir (sp, p); ; } while (
                       0
                       );
                        return (p);
                }
                p = sp->fts_child;
                sp->fts_child = 
                               ((void *)0)
                                   ;
                goto name;
        }


next: tmp = p;




        if (p->fts_link == 
                          ((void *)0) 
                               && p->fts_parent->fts_dirp)
          {
            p = tmp->fts_parent;
            sp->fts_cur = p;
            sp->fts_path[p->fts_pathlen] = '\0';

            if ((p = fts_build (sp, 3)) == 
                                              ((void *)0)
                                                  )
              {
                if ((sp->fts_options & (0x4000)))
                  return 
                        ((void *)0)
                            ;
                goto cd_dot_dot;
              }

            free(tmp);
            goto name;
          }

        if ((p = p->fts_link) != 
                                ((void *)0)
                                    ) {
                sp->fts_cur = p;
                free(tmp);






                if (p->fts_level == 0) {
                        if (restore_initial_cwd(sp)) {
                                (sp->fts_options |= (0x4000));
                                return (
                                       ((void *)0)
                                           );
                        }
                        free_dir(sp);
                        fts_load(sp, p);
                        setup_dir(sp);
                        goto check_for_dir;
                }






                if (p->fts_instr == 4)
                        goto next;
                if (p->fts_instr == 2) {
                        p->fts_info = fts_stat(sp, p, 
                                                     1
                                                         );
                        if (p->fts_info == 1 && !(sp->fts_options & (0x0004))) {
                                if ((p->fts_symfd = diropen (sp, ".")) < 0) {
                                        p->fts_errno = 
                                                      (*__errno_location ())
                                                           ;
                                        p->fts_info = 7;
                                } else
                                        p->fts_flags |= 0x02;
                        }
                        p->fts_instr = 3;
                }

name: t = sp->fts_path + (p->fts_parent->fts_path[p->fts_parent->fts_pathlen - 1] == '/' ? p->fts_parent->fts_pathlen - 1 : p->fts_parent->fts_pathlen);
                *t++ = '/';
                memmove(t, p->fts_name, p->fts_namelen + 1);
check_for_dir:
                sp->fts_cur = p;
                if (p->fts_info == 11)
                  {
                    if (p->fts_statp->st_size == FTS_STAT_REQUIRED)
                      {
                        FTSENT *parent = p->fts_parent;
                        if (0 < p->fts_level


                            && parent->fts_n_dirs_remaining == 0
                            && (sp->fts_options & (0x0008))
                            && (sp->fts_options & (0x0010))
                            && link_count_optimize_ok (parent))
                          {

                          }
                        else
                          {
                            p->fts_info = fts_stat(sp, p, 
                                                         0
                                                              );
                            if (
                               ((((
                               p->fts_statp->st_mode
                               )) & 0170000) == (0040000))
                                
                               && p->fts_level != 0
                                && parent->fts_n_dirs_remaining)
                                  parent->fts_n_dirs_remaining--;
                          }
                      }
                    else
                      do { if (!(p->fts_statp->st_size == FTS_NO_STAT_REQUIRED)) abort (); } while (
                     0
                     );
                  }

                if (p->fts_info == 1)
                  {



                    if (p->fts_level == 0)
                      sp->fts_dev = p->fts_statp->st_dev;
                    ;
                    if (! enter_dir (sp, p))
                      {
                        
                       (*__errno_location ()) 
                       = (
                       12
                       );
                        return 
                              ((void *)0)
                                  ;
                      }
                  }
                return p;
        }
cd_dot_dot:


        p = tmp->fts_parent;
        sp->fts_cur = p;
        free(tmp);

        if (p->fts_level == (-1)) {




                free(p);
                
               (*__errno_location ()) 
               = (0);
                return (sp->fts_cur = 
                                     ((void *)0)
                                         );
        }

        do { if (!(p->fts_info != 11)) abort (); } while (
       0
       );


        sp->fts_path[p->fts_pathlen] = '\0';







        if (p->fts_level == 0) {
                if (restore_initial_cwd(sp)) {
                        p->fts_errno = 
                                      (*__errno_location ())
                                           ;
                        (sp->fts_options |= (0x4000));
                }
        } else if (p->fts_flags & 0x02) {
                if ((!(sp->fts_options & (0x0004)) && ((sp->fts_options & (0x0200)) ? (cwd_advance_fd ((sp), (p->fts_symfd), 
                   1
                   ), 0) : fchdir (p->fts_symfd)))) {
                        p->fts_errno = 
                                      (*__errno_location ())
                                           ;
                        (sp->fts_options |= (0x4000));
                }
                (void)close(p->fts_symfd);
        } else if (!(p->fts_flags & 0x01) &&
                   fts_safe_changedir(sp, p->fts_parent, -1, "..")) {
                p->fts_errno = 
                              (*__errno_location ())
                                   ;
                (sp->fts_options |= (0x4000));
        }




        if (p->fts_info != 2) {
                p->fts_info = p->fts_errno ? 7 : 6;
                if (p->fts_errno == 0)
                        do { ; leave_dir (sp, p); ; } while (
                       0
                       );
        }
        return (sp->fts_options & (0x4000)) ? 
                                ((void *)0) 
                                     : p;
}
int
fts_set(FTS *sp __attribute__ ((__unused__)), FTSENT *p, int instr)
{
        if (instr != 0 && instr != 1 && instr != 2 &&
            instr != 3 && instr != 4) {
                
               (*__errno_location ()) 
               = (
               22
               );
                return (1);
        }
        p->fts_instr = instr;
        return (0);
}

FTSENT *
fts_children (register FTS *sp, int instr)
{
        register FTSENT *p={0};
        int fd={0};

        if (instr != 0 && instr != 0x2000) {
                
               (*__errno_location ()) 
               = (
               22
               );
                return (
                       ((void *)0)
                           );
        }


        p = sp->fts_cur;





        
       (*__errno_location ()) 
       = (0);


        if ((sp->fts_options & (0x4000)))
                return (
                       ((void *)0)
                           );


        if (p->fts_info == 9)
                return (p->fts_link);






        if (p->fts_info != 1 )
                return (
                       ((void *)0)
                           );


        if (sp->fts_child != 
                            ((void *)0)
                                )
                fts_lfree(sp->fts_child);

        if (instr == 0x2000) {
                (sp->fts_options |= (0x2000));
                instr = 2;
        } else
                instr = 1;
        if (p->fts_level != 0 || p->fts_accpath[0] == '/' ||
            (sp->fts_options & (0x0004)))
                return (sp->fts_child = fts_build(sp, instr));

        if ((fd = diropen (sp, ".")) < 0)
                return (sp->fts_child = 
                                       ((void *)0)
                                           );
        sp->fts_child = fts_build(sp, instr);
        if ((sp->fts_options & (0x0200)))
          {
            cwd_advance_fd (sp, fd, 
                                   1
                                       );
          }
        else
          {
            if (fchdir(fd))
              {
                int saved_errno = 
                                 (*__errno_location ())
                                      ;
                close (fd);
                
               (*__errno_location ()) 
               = (saved_errno);
                return 
                      ((void *)0)
                          ;
              }
            close (fd);
          }
        return (sp->fts_child);
}






static int
fts_compare_ino (struct _ftsent const **a, struct _ftsent const **b)
{
  return (a[0]->fts_statp->st_ino < b[0]->fts_statp->st_ino ? -1
          : b[0]->fts_statp->st_ino < a[0]->fts_statp->st_ino ? 1 : 0);
}



static void
set_stat_type (struct stat *st, unsigned int dtype)
{
  mode_t type={0};
  switch (dtype)
    {
    case 
        DT_BLK
              :
      type = 
            0060000
                   ;
      break;
    case 
        DT_CHR
              :
      type = 
            0020000
                   ;
      break;
    case 
        DT_DIR
              :
      type = 
            0040000
                   ;
      break;
    case 
        DT_FIFO
               :
      type = 
            0010000
                   ;
      break;
    case 
        DT_LNK
              :
      type = 
            0120000
                   ;
      break;
    case 
        DT_REG
              :
      type = 
            0100000
                   ;
      break;
    case 
        DT_SOCK
               :
      type = 
            0140000
                    ;
      break;
    default:
      type = 0;
    }
  st->st_mode = type;
}
static FTSENT *

fts_build (register FTS *sp, int type)
{
        register FTSENT *p, *head={0};
        register size_t nitems={0};
        FTSENT *tail={0};
        void *oldaddr={0};
        int saved_errno={0};
        
       _Bool 
            descend={0};
        
       _Bool 
            doadjust={0};
        ptrdiff_t level={0};
        nlink_t nlinks={0};
        
       _Bool 
            nostat={0};
        size_t len, maxlen, new_len={0};
        char *cp={0};
        int dir_fd={0};
        FTSENT *cur = sp->fts_cur;
        
       _Bool 
            continue_readdir = !!cur->fts_dirp;
        size_t max_entries={0};




        if (continue_readdir)
          {
            DIR *dp = cur->fts_dirp;
            dir_fd = dirfd (dp);
            if (dir_fd < 0)
              {
                do { closedir (cur->fts_dirp); cur->fts_dirp = 
               ((void *)0)
               ; } while (0);
                if (type == 3)
                  {
                    cur->fts_info = 4;
                    cur->fts_errno = 
                                    (*__errno_location ())
                                         ;
                  }
                return 
                      ((void *)0)
                          ;
              }
          }
        else
          {


            if ((cur->fts_dirp = opendirat((! (sp->fts_options & (0x0004)) && (sp->fts_options & (0x0200)) ? sp->fts_cwd_fd : 
                                -100
                                ), cur->fts_accpath, ((((sp->fts_options & (0x0010)) && ! ((sp->fts_options & (0x0001)) && cur->fts_level == 0)) ? 
                                0400000 
                                : 0) | ((sp->fts_options & (0x0800)) ? 
                                0 
                                : 0)), &dir_fd)) == 
                                                                           ((void *)0)
                                                                               )
              {
                if (type == 3)
                  {
                    cur->fts_info = 4;
                    cur->fts_errno = 
                                    (*__errno_location ())
                                         ;
                  }
                return 
                      ((void *)0)
                          ;
              }



            if (cur->fts_info == 11)
              cur->fts_info = fts_stat(sp, cur, 
                                               0
                                                    );
            else if (sp->fts_options & 0x0100)
              {





                do { ; leave_dir (sp, cur); ; } while (
               0
               );
                fts_stat (sp, cur, 
                                  0
                                       );
                if (! enter_dir (sp, cur))
                  {
                    
                   (*__errno_location ()) 
                   = (
                   12
                   );
                    return 
                          ((void *)0)
                              ;
                  }
              }
          }
        max_entries = sp->fts_compar ? 
                                      (((((0u) + 1) << ((32) ? (32) - 1 - (0) : 0)) - 1) * 2 + 1) 
                                               : 100000;






        if (type == 2) {
                nlinks = 0;

                nostat = 
                        0
                             ;
        } else if ((sp->fts_options & (0x0008)) && (sp->fts_options & (0x0010))) {
                nlinks = (cur->fts_statp->st_nlink
                          - ((sp->fts_options & (0x0020)) ? 0 : 2));
                nostat = 
                        1
                            ;
        } else {
                nlinks = -1;
                nostat = 
                        0
                             ;
        }
        if (continue_readdir)
          {


            descend = 
                     1
                         ;
          }
        else if (nlinks || type == 3) {
                if ((sp->fts_options & (0x0200)))
                  {
                    dir_fd = dup_safer (dir_fd);
                    if (0 <= dir_fd)
                      set_cloexec_flag (dir_fd, 
                                               1
                                                   );
                  }
                if (dir_fd < 0 || fts_safe_changedir(sp, cur, dir_fd, 
                                                                     ((void *)0)
                                                                         )) {
                        if (nlinks && type == 3)
                                cur->fts_errno = 
                                                (*__errno_location ())
                                                     ;
                        cur->fts_flags |= 0x01;
                        descend = 
                                 0
                                      ;
                        do { closedir (cur->fts_dirp); cur->fts_dirp = 
                       ((void *)0)
                       ; } while (0);
                        if ((sp->fts_options & (0x0200)) && 0 <= dir_fd)
                                close (dir_fd);
                        cur->fts_dirp = 
                                       ((void *)0)
                                           ;
                } else
                        descend = 
                                 1
                                     ;
        } else
                descend = 
                         0
                              ;
        len = (cur->fts_path[cur->fts_pathlen - 1] == '/' ? cur->fts_pathlen - 1 : cur->fts_pathlen);
        if ((sp->fts_options & (0x0004))) {
                cp = sp->fts_path + len;
                *cp++ = '/';
        } else {

                cp = 
                    ((void *)0)
                        ;
        }
        len++;
        maxlen = sp->fts_pathlen - len;

        level = cur->fts_level + 1;


        doadjust = 
                  0
                       ;
        head = 
              ((void *)0)
                  ;
        tail = 
              ((void *)0)
                  ;
        nitems = 0;
        while (cur->fts_dirp) {
                
               _Bool 
                    is_dir={0};
                size_t d_namelen={0};
                
               (*__errno_location ()) 
               = (0);
                struct dirent *dp = readdir(cur->fts_dirp);
                if (dp == 
                         ((void *)0)
                             ) {
                        if (
                           (*__errno_location ())
                                ) {
                                cur->fts_errno = 
                                                (*__errno_location ())
                                                     ;


                                cur->fts_info = (continue_readdir || nitems)
                                                ? 7 : 4;
                        }
                        break;
                }
                if (!(sp->fts_options & (0x0020)) && (dp->d_name[0] == '.' && (!dp->d_name[1] || (dp->d_name[1] == '.' && !dp->d_name[2]))))
                        continue;

                d_namelen = 
                           (strlen ((
                           dp
                           )->d_name))
                                               ;
                p = fts_alloc (sp, dp->d_name, d_namelen);
                if (!p)
                        goto mem1;
                if (d_namelen >= maxlen) {

                        oldaddr = sp->fts_path;
                        if (! fts_palloc(sp, d_namelen + len + 1)) {





mem1: saved_errno = 
                                             (*__errno_location ())
                                                  ;
                                free(p);
                                fts_lfree(head);
                                do { closedir (cur->fts_dirp); cur->fts_dirp = 
                               ((void *)0)
                               ; } while (0);
                                cur->fts_info = 7;
                                (sp->fts_options |= (0x4000));
                                
                               (*__errno_location ()) 
                               = (saved_errno);
                                return (
                                       ((void *)0)
                                           );
                        }

                        if (oldaddr != sp->fts_path) {
                                doadjust = 
                                          1
                                              ;
                                if ((sp->fts_options & (0x0004)))
                                        cp = sp->fts_path + len;
                        }
                        maxlen = sp->fts_pathlen - len;
                }

                new_len = len + d_namelen;
                if (new_len < len) {






                        free(p);
                        fts_lfree(head);
                        do { closedir (cur->fts_dirp); cur->fts_dirp = 
                       ((void *)0)
                       ; } while (0);
                        cur->fts_info = 7;
                        (sp->fts_options |= (0x4000));
                        
                       (*__errno_location ()) 
                       = (
                       36
                       );
                        return (
                               ((void *)0)
                                   );
                }
                p->fts_level = level;
                p->fts_parent = sp->fts_cur;
                p->fts_pathlen = new_len;



                p->fts_statp->st_ino = (dp)->d_ino;


                if ((sp->fts_options & (0x0004))) {
                        p->fts_accpath = p->fts_path;
                        memmove(cp, p->fts_name, p->fts_namelen + 1);
                } else
                        p->fts_accpath = p->fts_name;

                if (sp->fts_compar == 
                                     ((void *)0) 
                                          || (sp->fts_options & (0x0400))) {
                        
                       _Bool 
                            skip_stat = ((sp->fts_options & (0x0010))
                                          && (sp->fts_options & (0x0008))
                                          && ((dp)->d_type != 
                                            DT_UNKNOWN
                                            )
                                          && ! ((dp)->d_type == (
                                              DT_DIR
                                              )));
                        p->fts_info = 11;


                        set_stat_type (p->fts_statp, ((dp)->d_type));
                        fts_set_stat_required(p, !skip_stat);
                        is_dir = ((sp->fts_options & (0x0010))
                                  && ((dp)->d_type == (
                                    DT_DIR
                                    )));
                } else {
                        p->fts_info = fts_stat(sp, p, 
                                                     0
                                                          );
                        is_dir = (p->fts_info == 1
                                  || p->fts_info == 2
                                  || p->fts_info == 5);
                }


                if (nlinks > 0 && is_dir)
                        nlinks -= nostat;


                p->fts_link = 
                             ((void *)0)
                                 ;
                if (head == 
                           ((void *)0)
                               )
                        head = tail = p;
                else {
                        tail->fts_link = p;
                        tail = p;
                }
                ++nitems;
                if (max_entries <= nitems) {



                        goto break_without_closedir;
                }
        }

        if (cur->fts_dirp)
                do { closedir (cur->fts_dirp); cur->fts_dirp = 
               ((void *)0)
               ; } while (0);

 break_without_closedir:





        if (doadjust)
                fts_padjust(sp, head);





        if ((sp->fts_options & (0x0004))) {
                if (len == sp->fts_pathlen || nitems == 0)
                        --cp;
                *cp = '\0';
        }
        if (!continue_readdir && descend && (type == 1 || !nitems) &&
            (cur->fts_level == 0
             ? restore_initial_cwd(sp)
             : fts_safe_changedir(sp, cur->fts_parent, -1, ".."))) {
                cur->fts_info = 7;
                (sp->fts_options |= (0x4000));
                fts_lfree(head);
                return (
                       ((void *)0)
                           );
        }


        if (!nitems) {
                if (type == 3
                    && cur->fts_info != 4 && cur->fts_info != 7)
                        cur->fts_info = 6;
                fts_lfree(head);
                return (
                       ((void *)0)
                           );
        }





        if (nitems > _FTS_INODE_SORT_DIR_ENTRIES_THRESHOLD
            && !sp->fts_compar
            && (sp->fts_options & (0x0200))
            && dirent_inode_sort_may_be_useful (sp->fts_cwd_fd)) {
                sp->fts_compar = fts_compare_ino;
                head = fts_sort (sp, head, nitems);
                sp->fts_compar = 
                                ((void *)0)
                                    ;
        }


        if (sp->fts_compar && nitems > 1)
                head = fts_sort(sp, head, nitems);
        return (head);
}
static unsigned short int

fts_stat(FTS *sp, register FTSENT *p, 
                                     _Bool 
                                          follow)
{
        struct stat *sbp = p->fts_statp;
        int saved_errno={0};

        if (p->fts_level == 0 && (sp->fts_options & (0x0001)))
                follow = 
                        1
                            ;






        if ((sp->fts_options & (0x0002)) || follow) {
                if (stat(p->fts_accpath, sbp)) {
                        saved_errno = 
                                     (*__errno_location ())
                                          ;
                        if (
                           (*__errno_location ()) 
                                 == 
                                    2
                            
                           && lstat(p->fts_accpath, sbp) == 0) {
                                
                               (*__errno_location ()) 
                               = (0);
                                return (13);
                        }
                        p->fts_errno = saved_errno;
                        goto err;
                }
        } else if (fstatat(sp->fts_cwd_fd, p->fts_accpath, sbp,
                           
                          0x100
                                             )) {
                p->fts_errno = 
                              (*__errno_location ())
                                   ;
err: memset(sbp, 0, sizeof(struct stat));
                return (10);
        }

        if (
           ((((
           sbp->st_mode
           )) & 0170000) == (0040000))
                                ) {
                p->fts_n_dirs_remaining = (sbp->st_nlink
                                           - ((sp->fts_options & (0x0020)) ? 0 : 2));
                if ((p->fts_name[0] == '.' && (!p->fts_name[1] || (p->fts_name[1] == '.' && !p->fts_name[2])))) {

                        return (p->fts_level == 0 ? 1 : 5);
                }

                return (1);
        }
        if (
           ((((
           sbp->st_mode
           )) & 0170000) == (0120000))
                                )
                return (12);
        if (
           ((((
           sbp->st_mode
           )) & 0170000) == (0100000))
                                )
                return (8);
        return (3);
}

static int
fts_compar (void const *a, void const *b)
{





  FTSENT const **pa = (FTSENT const **) a;
  FTSENT const **pb = (FTSENT const **) b;
  return pa[0]->fts_fts->fts_compar (pa, pb);
}

static FTSENT *

fts_sort (FTS *sp, FTSENT *head, register size_t nitems)
{
        register FTSENT **ap, *p={0};
        FTSENT *dummy={0};
        int (*compare) (void const *, void const *) =
          ((sizeof &dummy == sizeof (void *)
            && (long int) &dummy == (long int) (void *) &dummy)
           ? (int (*) (void const *, void const *)) sp->fts_compar
           : fts_compar);
        if (nitems > sp->fts_nitems) {
                FTSENT **a={0};

                sp->fts_nitems = nitems + 40;
                if (
                   (((((0u) + 1) << ((32) ? (32) - 1 - (0) : 0)) - 1) * 2 + 1) 
                            / sizeof *a < sp->fts_nitems
                    || ! (a = realloc (sp->fts_array,
                                       sp->fts_nitems * sizeof *a))) {
                        free(sp->fts_array);
                        sp->fts_array = 
                                       ((void *)0)
                                           ;
                        sp->fts_nitems = 0;
                        return (head);
                }
                sp->fts_array = a;
        }
        for (ap = sp->fts_array, p = head; p; p = p->fts_link)
                *ap++ = p;
        qsort((void *)sp->fts_array, nitems, sizeof(FTSENT *), compare);
        for (head = *(ap = sp->fts_array); --nitems; ++ap)
                ap[0]->fts_link = ap[1];
        ap[0]->fts_link = 
                         ((void *)0)
                             ;
        return (head);
}

static FTSENT *

fts_alloc (FTS *sp, const char *name, register size_t namelen)
{
        register FTSENT *p={0};
        size_t len={0};





        len = ((
             __builtin_offsetof (
             FTSENT
             , 
             fts_name
             ) 
             + _Alignof (FTSENT) - 1 + (namelen + 1)) & ~ (_Alignof (FTSENT) - 1));
        if ((p = malloc(len)) == 
                                ((void *)0)
                                    )
                return (
                       ((void *)0)
                           );


        memcpy(p->fts_name, name, namelen);
        p->fts_name[namelen] = '\0';

        p->fts_namelen = namelen;
        p->fts_fts = sp;
        p->fts_path = sp->fts_path;
        p->fts_errno = 0;
        p->fts_dirp = 
                     ((void *)0)
                         ;
        p->fts_flags = 0;
        p->fts_instr = 3;
        p->fts_number = 0;
        p->fts_pointer = 
                        ((void *)0)
                            ;
        return (p);
}

static void

fts_lfree (register FTSENT *head)
{
        register FTSENT *p={0};


        while ((p = head)) {
                head = head->fts_link;
                if (p->fts_dirp)
                        closedir (p->fts_dirp);
                free(p);
        }
}
static 
      _Bool


fts_palloc (FTS *sp, size_t more)
{
        char *p={0};
        size_t new_len = sp->fts_pathlen + more + 256;




        if (new_len < sp->fts_pathlen) {
                free(sp->fts_path);
                sp->fts_path = 
                              ((void *)0)
                                  ;
                
               (*__errno_location ()) 
               = (
               36
               );
                return 
                      0
                           ;
        }
        sp->fts_pathlen = new_len;
        p = realloc(sp->fts_path, sp->fts_pathlen);
        if (p == 
                ((void *)0)
                    ) {
                free(sp->fts_path);
                sp->fts_path = 
                              ((void *)0)
                                  ;
                return 
                      0
                           ;
        }
        sp->fts_path = p;
        return 
              1
                  ;
}





static void

fts_padjust (FTS *sp, FTSENT *head)
{
        FTSENT *p={0};
        char *addr = sp->fts_path;
        for (p = sp->fts_child; p; p = p->fts_link)
                do { if ((p)->fts_accpath != (p)->fts_name) { (p)->fts_accpath = (char *)addr + ((p)->fts_accpath - (p)->fts_path); } (p)->fts_path = addr; } while (0);


        for (p = head; p->fts_level >= 0;) {
                do { if ((p)->fts_accpath != (p)->fts_name) { (p)->fts_accpath = (char *)addr + ((p)->fts_accpath - (p)->fts_path); } (p)->fts_path = addr; } while (0);
                p = p->fts_link ? p->fts_link : p->fts_parent;
        }
}

static size_t
 
                 __attribute__ ((__pure__))

fts_maxarglen (char * const *argv)
{
        size_t len, max={0};

        for (max = 0; *argv; ++argv)
                if ((len = strlen(*argv)) > max)
                        max = len;
        return (max + 1);
}
static int

fts_safe_changedir (FTS *sp, FTSENT *p, int fd, char const *dir)
{
        int ret={0};
        
       _Bool 
            is_dotdot = dir && (strcmp (dir, "..") == 0);
        int newfd={0};





        if ((sp->fts_options & (0x0004)))
          {
            if ((sp->fts_options & (0x0200)) && 0 <= fd)
              close (fd);
            return 0;
          }

        if (fd < 0 && is_dotdot && (sp->fts_options & (0x0200)))
          {





            if ( ! i_ring_empty (&sp->fts_fd_ring))
              {
                int parent_fd={0};
                ;
                parent_fd = i_ring_pop (&sp->fts_fd_ring);
                is_dotdot = 
                           1
                               ;
                if (0 <= parent_fd)
                  {
                    fd = parent_fd;
                    dir = 
                         ((void *)0)
                             ;
                  }
              }
          }

        newfd = fd;
        if (fd < 0 && (newfd = diropen (sp, dir)) < 0)
          return -1;
        if ((sp->fts_options & (0x0002)) || ! 1
            || (dir && (strcmp (dir, "..") == 0)))
          {
            struct stat sb={0};
            if (fstat(newfd, &sb))
              {
                ret = -1;
                goto bail;
              }
            if (p->fts_statp->st_dev != sb.st_dev
                || p->fts_statp->st_ino != sb.st_ino)
              {
                
               (*__errno_location ()) 
               = (
               2
               );
                ret = -1;
                goto bail;
              }
          }

        if ((sp->fts_options & (0x0200)))
          {
            cwd_advance_fd (sp, newfd, ! is_dotdot);
            return 0;
          }

        ret = fchdir(newfd);
bail:
        if (fd < 0)
          {
            int oerrno = 
                        (*__errno_location ())
                             ;
            (void)close(newfd);
            
           (*__errno_location ()) 
           = (oerrno);
          }
        return ret;
}
