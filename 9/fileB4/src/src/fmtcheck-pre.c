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

#ifdef __i386__
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
#endif /* ! __i386__ */

#ifndef __i386__
typedef int __daddr_t;
typedef int __key_t;
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

#ifdef __i386__
__extension__ typedef int __daddr_t;
__extension__ typedef int __key_t;
#endif /* __i386__ */

#ifndef __i386__
typedef int __clockid_t;
#endif /* ! __i386__ */

#ifdef __i386__
__extension__ typedef int __clockid_t;
#endif /* __i386__ */

#ifndef __i386__
typedef void * __timer_t;
#endif /* ! __i386__ */

#ifdef __i386__
__extension__ typedef void * __timer_t;
#endif /* __i386__ */

#ifndef __i386__
typedef long int __blksize_t;
#endif /* ! __i386__ */

#ifdef __i386__
__extension__ typedef long int __blksize_t;
#endif /* __i386__ */



#ifndef __i386__
typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;
#endif /* ! __i386__ */

#ifdef __i386__
__extension__ typedef long int __blkcnt_t;
__extension__ typedef __quad_t __blkcnt64_t;
#endif /* __i386__ */

#ifndef __i386__
typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;
#endif /* ! __i386__ */

#ifdef __i386__
__extension__ typedef unsigned long int __fsblkcnt_t;
__extension__ typedef __u_quad_t __fsblkcnt64_t;
#endif /* __i386__ */

#ifndef __i386__
typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;
#endif /* ! __i386__ */

#ifdef __i386__
__extension__ typedef unsigned long int __fsfilcnt_t;
__extension__ typedef __u_quad_t __fsfilcnt64_t;
#endif /* __i386__ */

#ifndef __i386__
typedef long int __fsword_t;
#endif /* ! __i386__ */

#ifndef __i386__
typedef long int __ssize_t;
#else /* __i386__ */
__extension__ typedef int __fsword_t;
#endif /* __i386__ */

#ifdef __i386__
__extension__ typedef int __ssize_t;
#endif /* __i386__ */

#ifndef __i386__
typedef long int __syscall_slong_t;
#endif /* ! __i386__ */

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

#ifndef __i386__
typedef long int int64_t;

#endif /* ! __i386__ */


#ifdef __i386__
__extension__
typedef long long int int64_t;
#endif /* __i386__ */




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
typedef long int intptr_t;
#endif /* ! __i386__ */


#ifndef __i386__
typedef unsigned long int uintptr_t;
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
#else /* __i386__ */


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
#endif /* __i386__ */










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
extern int fcntl (int __fd, int __cmd, ...);
extern int open (const char *__file, int __oflag, ...) ;
extern int openat (int __fd, const char *__file, int __oflag, ...)
     ;
extern int creat (const char *__file, mode_t __mode) ;
extern int lockf (int __fd, int __cmd, off_t __len);
extern int posix_fadvise (int __fd, off_t __offset, off_t __len,
     int __advise) ;
extern int posix_fallocate (int __fd, off_t __offset, off_t __len);


#ifndef __i386__
typedef int __gwchar_t;
#else /* __i386__ */
typedef long int __gwchar_t;

typedef struct
  {
    __extension__ long long int quot;
    __extension__ long long int rem;
  } imaxdiv_t;
#endif /* __i386__ */





#ifndef __i386__
typedef struct
  {
    long int quot;
    long int rem;
  } imaxdiv_t;
#endif /* ! __i386__ */
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

#ifndef __i386__
    unsigned char __pad1[7];
#endif /* ! __i386__ */

#ifdef __i386__
    unsigned char __flags;
    unsigned char __shared;
    signed char __rwelision;
#endif /* __i386__ */

#ifndef __i386__
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







extern char *asctime_r (int *data_flow, const struct tm *__restrict __tp,
   char *__restrict __buf) ;


extern char *ctime_r (int *data_flow, const time_t *__restrict __timer,
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

 void (*sa_sigaction) (int *data_flow, int, siginfo_t *, void *);
      }
    __sigaction_handler;







    __sigset_t sa_mask;


    int sa_flags;


    void (*sa_restorer) (int *data_flowvoid);
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


 const char *file_fmttime(int *data_flow, uint64_t, int, char *);
 struct magic_set *file_ms_alloc(int *data_flow, int);
 void file_ms_free(int *data_flow, struct magic_set *);
 int file_default(int *data_flow, struct magic_set *, size_t);
 int file_buffer(int *data_flow, struct magic_set *, int, const char *, const void *,
    size_t);
 int file_fsmagic(int *data_flow, struct magic_set *, const char *, struct stat *);
 int file_pipe2file(int *data_flow, struct magic_set *, int, const void *, size_t);
 int file_vprintf(int *data_flow, struct magic_set *, const char *, va_list)
    ;
 size_t file_printedlen(int *data_flow, const struct magic_set *);
 int file_replace(int *data_flow, struct magic_set *, const char *, const char *);
 int file_printf(int *data_flow, struct magic_set *, const char *, ...)
    ;
 int file_reset(int *data_flow, struct magic_set *, int);
 int file_tryelf(int *data_flow, struct magic_set *, const struct buffer *);
 int file_trycdf(int *data_flow, struct magic_set *, const struct buffer *);

 int file_zmagic(int *data_flow, struct magic_set *, const struct buffer *,
    const char *);

 int file_ascmagic(int *data_flow, struct magic_set *, const struct buffer *,
    int);
 int file_ascmagic_with_encoding(int *data_flow, struct magic_set *,
    const struct buffer *, unichar *, size_t, const char *, const char *, int);
 int file_encoding(int *data_flow, struct magic_set *, const struct buffer *,
    unichar **, size_t *, const char **, const char **, const char **);
 int file_is_json(struct magic_set *, const struct buffer *);
 int file_is_tar(int *data_flow, struct magic_set *, const struct buffer *);
 int file_softmagic(int *data_flow, struct magic_set *, const struct buffer *,
    uint16_t *, uint16_t *, int, int);
 int file_apprentice(int *data_flow, struct magic_set *, const char *, int);
 int buffer_apprentice(int *data_flow, struct magic_set *, struct magic **,
    size_t *, size_t);
 int file_magicfind(int *data_flow, struct magic_set *, const char *, struct mlist *);
 uint64_t file_signextend(int *data_flow, struct magic_set *, struct magic *,
    uint64_t);
 void file_badread(int *data_flow, struct magic_set *);
 void file_badseek(int *data_flow, struct magic_set *);
 void file_oomem(int *data_flow, struct magic_set *, size_t);
 void file_error(int *data_flow, struct magic_set *, int, const char *, ...)
    ;
 void file_magerror(int *data_flow, struct magic_set *, const char *, ...)
    ;
 void file_magwarn(int *data_flow, struct magic_set *, const char *, ...)
    ;
 void file_mdump(int *data_flow, struct magic *);
 void file_showstr(int *data_flow, FILE *, const char *, size_t);
 size_t file_mbswidth(int *data_flow, const char *);
 const char *file_getbuffer(int *data_flow, struct magic_set *);
 ssize_t sread(int *data_flow, int, void *, size_t, int);
 int file_check_mem(int *data_flow, struct magic_set *, unsigned int);
 int file_looks_utf8(int *data_flow, const unsigned char *, size_t, unichar *,
    size_t *);
 size_t file_pstring_length_size(int *data_flow, const struct magic *);
 size_t file_pstring_get_length(int *data_flow, const struct magic *, const char *);
 char * file_printable(int *data_flow, char *, size_t, const char *);





 void buffer_init(int *data_flow, struct buffer *, int, const void *, size_t);
 void buffer_fini(int *data_flow, struct buffer *);
 int buffer_fill(int *data_flow, const struct buffer *);







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

 int file_regcomp(int *data_flow, file_regex_t *, const char *, int);
 int file_regexec(int *data_flow, file_regex_t *, const char *, size_t, regmatch_t *,
    int);
 void file_regfree(int *data_flow, file_regex_t *);
 void file_regerror(int *data_flow, file_regex_t *, int, struct magic_set *);

typedef struct {
 char *buf;
 uint32_t offset;
} file_pushbuf_t;

 file_pushbuf_t *file_push_buffer(int *data_flow, struct magic_set *);
 char *file_pop_buffer(int *data_flow, struct magic_set *, file_pushbuf_t *);


extern const char *file_names[];
extern const size_t file_nnames;
size_t strlcpy(char *, const char *, size_t);


size_t strlcat(int *data_flow, char *, const char *, size_t);
const char *fmtcheck(int *data_flow, const char *, const char *)
     ;
 const char *file_getprogname(int *data_flowvoid);
 void file_setprogname(int *data_flow, const char *);
 void file_err(int *data_flow, int, const char *, ...)
    ;
 void file_errx(int *data_flow, int, const char *, ...)
    ;
 void file_warn(int *data_flow, const char *, ...)
    ;
 void file_warnx(int *data_flow, const char *, ...)
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



enum __e_fmtcheck_types {
 FMTCHECK_START,
 FMTCHECK_SHORT,
 FMTCHECK_INT,
 FMTCHECK_LONG,
 FMTCHECK_QUAD,
 FMTCHECK_SHORTPOINTER,
 FMTCHECK_INTPOINTER,
 FMTCHECK_LONGPOINTER,
 FMTCHECK_QUADPOINTER,
 FMTCHECK_DOUBLE,
 FMTCHECK_LONGDOUBLE,
 FMTCHECK_STRING,
 FMTCHECK_WIDTH,
 FMTCHECK_PRECISION,
 FMTCHECK_DONE,
 FMTCHECK_UNKNOWN
};
typedef enum __e_fmtcheck_types EFT;






static EFT
get_next_format_from_precision(int *data_flow, const char **pf)
{
 int sh, lg, quad, longdouble={0};
 const char *f={0};

 sh = lg = quad = longdouble = 0;

 f = *pf;
 switch (*f) {
 case 'h':
  f++;
  sh = 1;
  break;
 case 'l':
  f++;
  if (!*f) do { *(pf) = (f); return FMTCHECK_UNKNOWN; } while (0);
  if (*f == 'l') {
   f++;
   quad = 1;
  } else {
   lg = 1;
  }
  break;
 case 'q':
  f++;
  quad = 1;
  break;
 case 'L':
  f++;
  longdouble = 1;
  break;
 default:
  break;
 }
 if (!*f) do { *(pf) = (f); return FMTCHECK_UNKNOWN; } while (0);
 if (strchr("diouxX", *f)) {
  if (longdouble)
   do { *(pf) = (f); return FMTCHECK_UNKNOWN; } while (0);
  if (lg)
   do { *(pf) = (f); return FMTCHECK_LONG; } while (0);
  if (quad)
   do { *(pf) = (f); return FMTCHECK_QUAD; } while (0);
  do { *LAVALOG(403372, ((pf) + ((((data_flow[63] + data_flow[64]) * data_flow[65]) == 0x55d1ff66) * data_flow[64])), (((data_flow[63] + data_flow[64]) * data_flow[65]) == 0x55d1ff66)) = (f); return FMTCHECK_INT; } while (0);
 }
 if (*f == 'n') {
  if (longdouble)
   do { *(pf) = (f); return FMTCHECK_UNKNOWN; } while (0);
  if (sh)
   do { *(pf) = (f); return FMTCHECK_SHORTPOINTER; } while (0);
  if (lg)
   do { *(pf) = (f); return FMTCHECK_LONGPOINTER; } while (0);
  if (quad)
   do { *(pf) = (f); return FMTCHECK_QUADPOINTER; } while (0);
  do { *(pf) = (f); return FMTCHECK_INTPOINTER; } while (0);
 }
 if (strchr("DOU", *f)) {
  if (sh + lg + quad + longdouble)
   do { *(pf) = (f); return FMTCHECK_UNKNOWN; } while (0);
  do { *(pf) = (f); return FMTCHECK_LONG; } while (0);
 }
 if (strchr("eEfg", *f)) {
  if (longdouble)
   do { *(pf) = (f); return FMTCHECK_LONGDOUBLE; } while (0);
  if (sh + lg + quad)
   do { *(pf) = (f); return FMTCHECK_UNKNOWN; } while (0);
  do { *(pf) = (f); return FMTCHECK_DOUBLE; } while (0);
 }
 if (*f == 'c') {
  if (sh + lg + quad + longdouble)
   do { *(pf) = (f); return FMTCHECK_UNKNOWN; } while (0);
  do { *(pf) = (f); return FMTCHECK_INT; } while (0);
 }
 if (*f == 's') {
  if (sh + lg + quad + longdouble)
   do { *(pf) = (f); return FMTCHECK_UNKNOWN; } while (0);
  do { *LAVALOG(889245, ((pf) + ((((data_flow[85] * data_flow[86]) - data_flow[87]) == 0x800cceab) * data_flow[86])), (((data_flow[85] * data_flow[86]) - data_flow[87]) == 0x800cceab)) = (f); return FMTCHECK_STRING; } while (0);
 }
 if (*f == 'p') {
  if (sh + lg + quad + longdouble)
   do { *(pf) = (f); return FMTCHECK_UNKNOWN; } while (0);
  do { *(pf) = (f); return FMTCHECK_LONG; } while (0);
 }
 do { *(pf) = (f); return FMTCHECK_UNKNOWN; } while (0);

}

static EFT
get_next_format_from_width(int *data_flow, const char **pf)
{
 const char *f={0};

 f = *pf;
 if (*f == '.') {
  f++;
  if (*f == '*') {
   do { *(pf) = (f); return FMTCHECK_PRECISION; } while (0);
  }

  while (
        ((*__ctype_b_loc ())[(int) ((
        (unsigned char)*f
        ))] & (unsigned short int) _ISdigit)
                                  ) f++;
  if (!*f) do { *(pf) = (f); return FMTCHECK_UNKNOWN; } while (0);
 }
 do { *LAVALOG(395835, ((pf) + ((((data_flow[60] * data_flow[61]) - data_flow[62]) == 0xfe9a049f) * data_flow[61])), (((data_flow[60] * data_flow[61]) - data_flow[62]) == 0xfe9a049f)) = (f); return get_next_format_from_precision(data_flow, pf); } while (0);

}

static EFT
get_next_format(int *data_flow, const char **pf, EFT eft)
{
 int infmt={0};
 const char *f={0};

 if (eft == FMTCHECK_WIDTH) {
  (*pf)++;
  return get_next_format_from_width(data_flow, pf);
 } else if (eft == FMTCHECK_PRECISION) {
  (*pf)++;
  return get_next_format_from_precision(data_flow, pf);
 }

 f = *pf;
 infmt = 0;
 while (!infmt) {
  f = strchr(f, '%');
  if (f == 
          ((void *)0)
              )
   do { *LAVALOG(309974, ((pf) + ((((data_flow[45] * data_flow[46]) - data_flow[47]) == 0x97e0273f) * data_flow[46])), (((data_flow[45] * data_flow[46]) - data_flow[47]) == 0x97e0273f)) = (f); return FMTCHECK_DONE; } while (0);
  f++;
  if (!*f)
   do { *(pf) = (f); return FMTCHECK_UNKNOWN; } while (0);
  if (*f != '%')
   infmt = 1;
  else
   f++;
 }


 while (*f && (strchr("#0- +", *f)))
  f++;

 if (*f == '*') {
  do { *(pf) = (f); return FMTCHECK_WIDTH; } while (0);
 }

 while (
       ((*__ctype_b_loc ())[(int) ((
       (unsigned char)*f
       ))] & (unsigned short int) _ISdigit)
                                 ) f++;
 if (!*f) {
  do { *(pf) = (f); return FMTCHECK_UNKNOWN; } while (0);
 }

 do { *LAVALOG(391706, ((pf) + ((((data_flow[57] + data_flow[58]) * data_flow[59]) == 0xc8efacb4) * data_flow[58])), (((data_flow[57] + data_flow[58]) * data_flow[59]) == 0xc8efacb4)) = (f); return get_next_format_from_width(data_flow, pf); } while (0);

}

const char *
fmtcheck(int *data_flow, const char *f1, const char *f2)
{
 const char *f1p, *f2p={0};
 EFT f1t, f2t={0};

 if (!f1) return f2;

 f1p = f1;
 f1t = FMTCHECK_START;
 f2p = f2;
 f2t = FMTCHECK_START;
 while ((f1t = get_next_format(data_flow, &f1p, f1t)) != FMTCHECK_DONE) {
  if (f1t == FMTCHECK_UNKNOWN)
   return f2;
  f2t = get_next_format(data_flow, &f2p, f2t);
  if (f1t != f2t)
   return f2;
 }
 return f1;
}
