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
void lava_set(unsigned int bn, unsigned int val);
extern unsigned int lava_get(unsigned int);














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
__extension__ typedef long int __swblk_t;
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

__extension__ typedef int __ssize_t;



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
typedef int _G_int16_t __attribute__ ((__mode__ (__HI__)));
typedef int _G_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int _G_uint16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int _G_uint32_t __attribute__ ((__mode__ (__SI__)));
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







typedef __ssize_t __io_write_fn (void *__cookie, __const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__));
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__));




typedef __gnuc_va_list va_list;
typedef __off_t off_t;
typedef __ssize_t ssize_t;







typedef _G_fpos_t fpos_t;







extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (__const char *__filename) __attribute__ ((__nothrow__));

extern int rename (__const char *__old, __const char *__new) __attribute__ ((__nothrow__));




extern int renameat (int __oldfd, __const char *__old, int __newfd,
       __const char *__new) __attribute__ ((__nothrow__));








extern FILE *tmpfile (void) ;
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__)) ;





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__)) ;
extern char *tempnam (__const char *__dir, __const char *__pfx)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

extern int fflush_unlocked (FILE *__stream);






extern FILE *fopen (__const char *__restrict __filename,
      __const char *__restrict __modes) ;




extern FILE *freopen (__const char *__restrict __filename,
        __const char *__restrict __modes,
        FILE *__restrict __stream) ;

extern FILE *fdopen (int __fd, __const char *__modes) __attribute__ ((__nothrow__)) ;
extern FILE *fmemopen (void *__s, size_t __len, __const char *__modes)
  __attribute__ ((__nothrow__)) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__)) ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__));





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__));








extern int fprintf (FILE *__restrict __stream,
      __const char *__restrict __format, ...);




extern int printf (__const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      __const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (__const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));





extern int snprintf (char *__restrict __s, size_t __maxlen,
       __const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        __const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));

extern int vdprintf (int __fd, __const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, __const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));








extern int fscanf (FILE *__restrict __stream,
     __const char *__restrict __format, ...) ;




extern int scanf (__const char *__restrict __format, ...) ;

extern int sscanf (__const char *__restrict __s,
     __const char *__restrict __format, ...) __attribute__ ((__nothrow__));
extern int fscanf (FILE *__restrict __stream, __const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                               ;
extern int scanf (__const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (__const char *__restrict __s, __const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__))

                      ;








extern int vfscanf (FILE *__restrict __s, __const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (__const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (__const char *__restrict __s,
      __const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
extern int vfscanf (FILE *__restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (__const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (__const char *__restrict __s, __const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__))



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






extern char *gets (char *__s) ;

extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;








extern int fputs (__const char *__restrict __s, FILE *__restrict __stream);





extern int puts (__const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (__const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);

extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (__const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);

extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, __const fpos_t *__pos);



extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__)) ;




extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;








extern void perror (__const char *__s);






extern int sys_nerr;
extern __const char *__const sys_errlist[];




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;
extern FILE *popen (__const char *__command, __const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__));
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__));















extern void *memcpy (void *__restrict __dest,
       __const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, __const void *__src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, __const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (__const void *__s1, __const void *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *memchr (__const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern char *strcpy (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        __const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, __const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (__const char *__s1, __const char *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         __const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));






typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;


extern int strcoll_l (__const char *__s1, __const char *__s2, __locale_t __l)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, __const char *__src, size_t __n,
    __locale_t __l) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 4)));





extern char *strdup (__const char *__s)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (__const char *__string, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));

extern char *strchr (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *strrchr (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strcspn (__const char *__s, __const char *__reject)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (__const char *__s, __const char *__accept)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strpbrk (__const char *__s, __const char *__accept)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strstr (__const char *__haystack, __const char *__needle)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, __const char *__restrict __delim)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    __const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, __const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 3)));


extern size_t strlen (__const char *__s)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (__const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) __attribute__ ((__nothrow__));

extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__))

                        __attribute__ ((__nonnull__ (2)));
extern char *strerror_l (int __errnum, __locale_t __l) __attribute__ ((__nothrow__));





extern void __bzero (void *__s, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern void bcopy (__const void *__src, void *__dest, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int bcmp (__const void *__s1, __const void *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *index (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *rindex (__const char *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern int ffs (int __i) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int strcasecmp (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (__const char *__s1, __const char *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strsep (char **__restrict __stringp,
       __const char *__restrict __delim)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__));


extern char *__stpcpy (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, __const char *__restrict __src)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   __const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        __const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));







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
    long int tv_nsec;
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
     __attribute__ ((__nothrow__));
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     __attribute__ ((__nothrow__));
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     __attribute__ ((__nothrow__));





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
typedef unsigned long int pthread_t;


typedef union
{
  char __size[36];
  long int __align;
} pthread_attr_t;


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
      int __spins;
      __pthread_slist_t __list;
    };
  } __data;
  char __size[24];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  long int __align;
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
  long int __align;
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
    unsigned char __pad1;
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
















struct timezone
  {
    int tz_minuteswest;
    int tz_dsttime;
  };

typedef struct timezone *__restrict __timezone_ptr_t;
extern int gettimeofday (struct timeval *__restrict __tv,
    __timezone_ptr_t __tz) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));




extern int settimeofday (__const struct timeval *__tv,
    __const struct timezone *__tz)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int adjtime (__const struct timeval *__delta,
      struct timeval *__olddelta) __attribute__ ((__nothrow__));




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
        struct itimerval *__value) __attribute__ ((__nothrow__));




extern int setitimer (__itimer_which_t __which,
        __const struct itimerval *__restrict __new,
        struct itimerval *__restrict __old) __attribute__ ((__nothrow__));




extern int utimes (__const char *__file, __const struct timeval __tvp[2])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));



extern int lutimes (__const char *__file, __const struct timeval __tvp[2])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern int futimes (int __fd, __const struct timeval __tvp[2]) __attribute__ ((__nothrow__));














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
  __const char *tm_zone;




};








struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };


struct sigevent;



extern clock_t clock (void) __attribute__ ((__nothrow__));


extern time_t time (time_t *__timer) __attribute__ ((__nothrow__));


extern double difftime (time_t __time1, time_t __time0)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern time_t mktime (struct tm *__tp) __attribute__ ((__nothrow__));





extern size_t strftime (char *__restrict __s, size_t __maxsize,
   __const char *__restrict __format,
   __const struct tm *__restrict __tp) __attribute__ ((__nothrow__));

extern size_t strftime_l (char *__restrict __s, size_t __maxsize,
     __const char *__restrict __format,
     __const struct tm *__restrict __tp,
     __locale_t __loc) __attribute__ ((__nothrow__));



extern struct tm *gmtime (__const time_t *__timer) __attribute__ ((__nothrow__));



extern struct tm *localtime (__const time_t *__timer) __attribute__ ((__nothrow__));





extern struct tm *gmtime_r (__const time_t *__restrict __timer,
       struct tm *__restrict __tp) __attribute__ ((__nothrow__));



extern struct tm *localtime_r (__const time_t *__restrict __timer,
          struct tm *__restrict __tp) __attribute__ ((__nothrow__));





extern char *asctime (__const struct tm *__tp) __attribute__ ((__nothrow__));


extern char *ctime (__const time_t *__timer) __attribute__ ((__nothrow__));







extern char *asctime_r (__const struct tm *__restrict __tp,
   char *__restrict __buf) __attribute__ ((__nothrow__));


extern char *ctime_r (__const time_t *__restrict __timer,
        char *__restrict __buf) __attribute__ ((__nothrow__));




extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;




extern char *tzname[2];



extern void tzset (void) __attribute__ ((__nothrow__));



extern int daylight;
extern long int timezone;





extern int stime (__const time_t *__when) __attribute__ ((__nothrow__));
extern time_t timegm (struct tm *__tp) __attribute__ ((__nothrow__));


extern time_t timelocal (struct tm *__tp) __attribute__ ((__nothrow__));


extern int dysize (int __year) __attribute__ ((__nothrow__)) __attribute__ ((__const__));
extern int nanosleep (__const struct timespec *__requested_time,
        struct timespec *__remaining);



extern int clock_getres (clockid_t __clock_id, struct timespec *__res) __attribute__ ((__nothrow__));


extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp) __attribute__ ((__nothrow__));


extern int clock_settime (clockid_t __clock_id, __const struct timespec *__tp)
     __attribute__ ((__nothrow__));






extern int clock_nanosleep (clockid_t __clock_id, int __flags,
       __const struct timespec *__req,
       struct timespec *__rem);


extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) __attribute__ ((__nothrow__));




extern int timer_create (clockid_t __clock_id,
    struct sigevent *__restrict __evp,
    timer_t *__restrict __timerid) __attribute__ ((__nothrow__));


extern int timer_delete (timer_t __timerid) __attribute__ ((__nothrow__));


extern int timer_settime (timer_t __timerid, int __flags,
     __const struct itimerspec *__restrict __value,
     struct itimerspec *__restrict __ovalue) __attribute__ ((__nothrow__));


extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     __attribute__ ((__nothrow__));


extern int timer_getoverrun (timer_t __timerid) __attribute__ ((__nothrow__));

typedef int wchar_t;








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


extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__)) ;




extern double atof (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (__const char *__nptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (__const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





extern float strtof (__const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

extern long double strtold (__const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





extern long int strtol (__const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

extern unsigned long int strtoul (__const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;




__extension__
extern long long int strtoq (__const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

__extension__
extern unsigned long long int strtouq (__const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





__extension__
extern long long int strtoll (__const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

__extension__
extern unsigned long long int strtoull (__const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;

extern char *l64a (long int __n) __attribute__ ((__nothrow__)) ;


extern long int a64l (__const char *__s)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;
extern long int random (void) __attribute__ ((__nothrow__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));







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
       int32_t *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) __attribute__ ((__nothrow__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__));




extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__));







extern double drand48 (void) __attribute__ ((__nothrow__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));









extern void *malloc (size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;










extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__)) __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) __attribute__ ((__nothrow__));




extern void cfree (void *__ptr) __attribute__ ((__nothrow__));










extern void *alloca (size_t __size) __attribute__ ((__nothrow__));











extern void *valloc (size_t __size) __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;




extern void abort (void) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));






extern void _Exit (int __status) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));






extern char *getenv (__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;




extern char *__secure_getenv (__const char *__name)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





extern int putenv (char *__string) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (__const char *__name, __const char *__value, int __replace)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (__const char *__name) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__));
extern char *mktemp (char *__template) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;





extern int system (__const char *__command) ;

extern char *realpath (__const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__)) ;






typedef int (*__compar_fn_t) (__const void *, __const void *);



extern void *bsearch (__const void *__key, __const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;



extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
extern int abs (int __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;



__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;







extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__)) ;

extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (3, 4, 5)));







extern int mblen (__const char *__s, size_t __n) __attribute__ ((__nothrow__)) ;


extern int mbtowc (wchar_t *__restrict __pwc,
     __const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__)) ;


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__)) ;



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   __const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__));

extern size_t wcstombs (char *__restrict __s,
   __const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__));








extern int rpmatch (__const char *__response) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
extern int getsubopt (char **__restrict __optionp,
        char *__const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2, 3))) ;
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));




typedef int __jmp_buf[6];



struct __jmp_buf_tag
  {




    __jmp_buf __jmpbuf;
    int __mask_was_saved;
    __sigset_t __saved_mask;
  };




typedef struct __jmp_buf_tag jmp_buf[1];



extern int setjmp (jmp_buf __env) __attribute__ ((__nothrow__));






extern int __sigsetjmp (struct __jmp_buf_tag __env[1], int __savemask) __attribute__ ((__nothrow__));




extern int _setjmp (struct __jmp_buf_tag __env[1]) __attribute__ ((__nothrow__));




extern void longjmp (struct __jmp_buf_tag __env[1], int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));







extern void _longjmp (struct __jmp_buf_tag __env[1], int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));







typedef struct __jmp_buf_tag sigjmp_buf[1];
extern void siglongjmp (sigjmp_buf __env, int __val)
     __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));

typedef int ptrdiff_t;












typedef long double float_t;

typedef long double double_t;


extern double acos (double __x) __attribute__ ((__nothrow__)); extern double __acos (double __x) __attribute__ ((__nothrow__));

extern double asin (double __x) __attribute__ ((__nothrow__)); extern double __asin (double __x) __attribute__ ((__nothrow__));

extern double atan (double __x) __attribute__ ((__nothrow__)); extern double __atan (double __x) __attribute__ ((__nothrow__));

extern double atan2 (double __y, double __x) __attribute__ ((__nothrow__)); extern double __atan2 (double __y, double __x) __attribute__ ((__nothrow__));


extern double cos (double __x) __attribute__ ((__nothrow__)); extern double __cos (double __x) __attribute__ ((__nothrow__));

extern double sin (double __x) __attribute__ ((__nothrow__)); extern double __sin (double __x) __attribute__ ((__nothrow__));

extern double tan (double __x) __attribute__ ((__nothrow__)); extern double __tan (double __x) __attribute__ ((__nothrow__));




extern double cosh (double __x) __attribute__ ((__nothrow__)); extern double __cosh (double __x) __attribute__ ((__nothrow__));

extern double sinh (double __x) __attribute__ ((__nothrow__)); extern double __sinh (double __x) __attribute__ ((__nothrow__));

extern double tanh (double __x) __attribute__ ((__nothrow__)); extern double __tanh (double __x) __attribute__ ((__nothrow__));



extern double acosh (double __x) __attribute__ ((__nothrow__)); extern double __acosh (double __x) __attribute__ ((__nothrow__));

extern double asinh (double __x) __attribute__ ((__nothrow__)); extern double __asinh (double __x) __attribute__ ((__nothrow__));

extern double atanh (double __x) __attribute__ ((__nothrow__)); extern double __atanh (double __x) __attribute__ ((__nothrow__));







extern double exp (double __x) __attribute__ ((__nothrow__)); extern double __exp (double __x) __attribute__ ((__nothrow__));


extern double frexp (double __x, int *__exponent) __attribute__ ((__nothrow__)); extern double __frexp (double __x, int *__exponent) __attribute__ ((__nothrow__));


extern double ldexp (double __x, int __exponent) __attribute__ ((__nothrow__)); extern double __ldexp (double __x, int __exponent) __attribute__ ((__nothrow__));


extern double log (double __x) __attribute__ ((__nothrow__)); extern double __log (double __x) __attribute__ ((__nothrow__));


extern double log10 (double __x) __attribute__ ((__nothrow__)); extern double __log10 (double __x) __attribute__ ((__nothrow__));


extern double modf (double __x, double *__iptr) __attribute__ ((__nothrow__)); extern double __modf (double __x, double *__iptr) __attribute__ ((__nothrow__));



extern double expm1 (double __x) __attribute__ ((__nothrow__)); extern double __expm1 (double __x) __attribute__ ((__nothrow__));


extern double log1p (double __x) __attribute__ ((__nothrow__)); extern double __log1p (double __x) __attribute__ ((__nothrow__));


extern double logb (double __x) __attribute__ ((__nothrow__)); extern double __logb (double __x) __attribute__ ((__nothrow__));






extern double exp2 (double __x) __attribute__ ((__nothrow__)); extern double __exp2 (double __x) __attribute__ ((__nothrow__));


extern double log2 (double __x) __attribute__ ((__nothrow__)); extern double __log2 (double __x) __attribute__ ((__nothrow__));








extern double pow (double __x, double __y) __attribute__ ((__nothrow__)); extern double __pow (double __x, double __y) __attribute__ ((__nothrow__));


extern double sqrt (double __x) __attribute__ ((__nothrow__)); extern double __sqrt (double __x) __attribute__ ((__nothrow__));





extern double hypot (double __x, double __y) __attribute__ ((__nothrow__)); extern double __hypot (double __x, double __y) __attribute__ ((__nothrow__));






extern double cbrt (double __x) __attribute__ ((__nothrow__)); extern double __cbrt (double __x) __attribute__ ((__nothrow__));








extern double ceil (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __ceil (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern double fabs (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __fabs (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern double floor (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __floor (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern double fmod (double __x, double __y) __attribute__ ((__nothrow__)); extern double __fmod (double __x, double __y) __attribute__ ((__nothrow__));




extern int __isinf (double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern int __finite (double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));





extern int isinf (double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern int finite (double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern double drem (double __x, double __y) __attribute__ ((__nothrow__)); extern double __drem (double __x, double __y) __attribute__ ((__nothrow__));



extern double significand (double __x) __attribute__ ((__nothrow__)); extern double __significand (double __x) __attribute__ ((__nothrow__));





extern double copysign (double __x, double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __copysign (double __x, double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));






extern double nan (__const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __nan (__const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__));





extern int __isnan (double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern int isnan (double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern double j0 (double) __attribute__ ((__nothrow__)); extern double __j0 (double) __attribute__ ((__nothrow__));
extern double j1 (double) __attribute__ ((__nothrow__)); extern double __j1 (double) __attribute__ ((__nothrow__));
extern double jn (int, double) __attribute__ ((__nothrow__)); extern double __jn (int, double) __attribute__ ((__nothrow__));
extern double y0 (double) __attribute__ ((__nothrow__)); extern double __y0 (double) __attribute__ ((__nothrow__));
extern double y1 (double) __attribute__ ((__nothrow__)); extern double __y1 (double) __attribute__ ((__nothrow__));
extern double yn (int, double) __attribute__ ((__nothrow__)); extern double __yn (int, double) __attribute__ ((__nothrow__));






extern double erf (double) __attribute__ ((__nothrow__)); extern double __erf (double) __attribute__ ((__nothrow__));
extern double erfc (double) __attribute__ ((__nothrow__)); extern double __erfc (double) __attribute__ ((__nothrow__));
extern double lgamma (double) __attribute__ ((__nothrow__)); extern double __lgamma (double) __attribute__ ((__nothrow__));






extern double tgamma (double) __attribute__ ((__nothrow__)); extern double __tgamma (double) __attribute__ ((__nothrow__));





extern double gamma (double) __attribute__ ((__nothrow__)); extern double __gamma (double) __attribute__ ((__nothrow__));






extern double lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__)); extern double __lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__));







extern double rint (double __x) __attribute__ ((__nothrow__)); extern double __rint (double __x) __attribute__ ((__nothrow__));


extern double nextafter (double __x, double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __nextafter (double __x, double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));

extern double nexttoward (double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __nexttoward (double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern double remainder (double __x, double __y) __attribute__ ((__nothrow__)); extern double __remainder (double __x, double __y) __attribute__ ((__nothrow__));



extern double scalbn (double __x, int __n) __attribute__ ((__nothrow__)); extern double __scalbn (double __x, int __n) __attribute__ ((__nothrow__));



extern int ilogb (double __x) __attribute__ ((__nothrow__)); extern int __ilogb (double __x) __attribute__ ((__nothrow__));




extern double scalbln (double __x, long int __n) __attribute__ ((__nothrow__)); extern double __scalbln (double __x, long int __n) __attribute__ ((__nothrow__));



extern double nearbyint (double __x) __attribute__ ((__nothrow__)); extern double __nearbyint (double __x) __attribute__ ((__nothrow__));



extern double round (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __round (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern double trunc (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern double __trunc (double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));




extern double remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__)); extern double __remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__));






extern long int lrint (double __x) __attribute__ ((__nothrow__)); extern long int __lrint (double __x) __attribute__ ((__nothrow__));
extern long long int llrint (double __x) __attribute__ ((__nothrow__)); extern long long int __llrint (double __x) __attribute__ ((__nothrow__));



extern long int lround (double __x) __attribute__ ((__nothrow__)); extern long int __lround (double __x) __attribute__ ((__nothrow__));
extern long long int llround (double __x) __attribute__ ((__nothrow__)); extern long long int __llround (double __x) __attribute__ ((__nothrow__));



extern double fdim (double __x, double __y) __attribute__ ((__nothrow__)); extern double __fdim (double __x, double __y) __attribute__ ((__nothrow__));


extern double fmax (double __x, double __y) __attribute__ ((__nothrow__)); extern double __fmax (double __x, double __y) __attribute__ ((__nothrow__));


extern double fmin (double __x, double __y) __attribute__ ((__nothrow__)); extern double __fmin (double __x, double __y) __attribute__ ((__nothrow__));



extern int __fpclassify (double __value) __attribute__ ((__nothrow__))
     __attribute__ ((__const__));


extern int __signbit (double __value) __attribute__ ((__nothrow__))
     __attribute__ ((__const__));



extern double fma (double __x, double __y, double __z) __attribute__ ((__nothrow__)); extern double __fma (double __x, double __y, double __z) __attribute__ ((__nothrow__));








extern double scalb (double __x, double __n) __attribute__ ((__nothrow__)); extern double __scalb (double __x, double __n) __attribute__ ((__nothrow__));


extern float acosf (float __x) __attribute__ ((__nothrow__)); extern float __acosf (float __x) __attribute__ ((__nothrow__));

extern float asinf (float __x) __attribute__ ((__nothrow__)); extern float __asinf (float __x) __attribute__ ((__nothrow__));

extern float atanf (float __x) __attribute__ ((__nothrow__)); extern float __atanf (float __x) __attribute__ ((__nothrow__));

extern float atan2f (float __y, float __x) __attribute__ ((__nothrow__)); extern float __atan2f (float __y, float __x) __attribute__ ((__nothrow__));


extern float cosf (float __x) __attribute__ ((__nothrow__)); extern float __cosf (float __x) __attribute__ ((__nothrow__));

extern float sinf (float __x) __attribute__ ((__nothrow__)); extern float __sinf (float __x) __attribute__ ((__nothrow__));

extern float tanf (float __x) __attribute__ ((__nothrow__)); extern float __tanf (float __x) __attribute__ ((__nothrow__));




extern float coshf (float __x) __attribute__ ((__nothrow__)); extern float __coshf (float __x) __attribute__ ((__nothrow__));

extern float sinhf (float __x) __attribute__ ((__nothrow__)); extern float __sinhf (float __x) __attribute__ ((__nothrow__));

extern float tanhf (float __x) __attribute__ ((__nothrow__)); extern float __tanhf (float __x) __attribute__ ((__nothrow__));



extern float acoshf (float __x) __attribute__ ((__nothrow__)); extern float __acoshf (float __x) __attribute__ ((__nothrow__));

extern float asinhf (float __x) __attribute__ ((__nothrow__)); extern float __asinhf (float __x) __attribute__ ((__nothrow__));

extern float atanhf (float __x) __attribute__ ((__nothrow__)); extern float __atanhf (float __x) __attribute__ ((__nothrow__));







extern float expf (float __x) __attribute__ ((__nothrow__)); extern float __expf (float __x) __attribute__ ((__nothrow__));


extern float frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__)); extern float __frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__));


extern float ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__)); extern float __ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__));


extern float logf (float __x) __attribute__ ((__nothrow__)); extern float __logf (float __x) __attribute__ ((__nothrow__));


extern float log10f (float __x) __attribute__ ((__nothrow__)); extern float __log10f (float __x) __attribute__ ((__nothrow__));


extern float modff (float __x, float *__iptr) __attribute__ ((__nothrow__)); extern float __modff (float __x, float *__iptr) __attribute__ ((__nothrow__));



extern float expm1f (float __x) __attribute__ ((__nothrow__)); extern float __expm1f (float __x) __attribute__ ((__nothrow__));


extern float log1pf (float __x) __attribute__ ((__nothrow__)); extern float __log1pf (float __x) __attribute__ ((__nothrow__));


extern float logbf (float __x) __attribute__ ((__nothrow__)); extern float __logbf (float __x) __attribute__ ((__nothrow__));






extern float exp2f (float __x) __attribute__ ((__nothrow__)); extern float __exp2f (float __x) __attribute__ ((__nothrow__));


extern float log2f (float __x) __attribute__ ((__nothrow__)); extern float __log2f (float __x) __attribute__ ((__nothrow__));








extern float powf (float __x, float __y) __attribute__ ((__nothrow__)); extern float __powf (float __x, float __y) __attribute__ ((__nothrow__));


extern float sqrtf (float __x) __attribute__ ((__nothrow__)); extern float __sqrtf (float __x) __attribute__ ((__nothrow__));





extern float hypotf (float __x, float __y) __attribute__ ((__nothrow__)); extern float __hypotf (float __x, float __y) __attribute__ ((__nothrow__));






extern float cbrtf (float __x) __attribute__ ((__nothrow__)); extern float __cbrtf (float __x) __attribute__ ((__nothrow__));








extern float ceilf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __ceilf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern float fabsf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __fabsf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern float floorf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __floorf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern float fmodf (float __x, float __y) __attribute__ ((__nothrow__)); extern float __fmodf (float __x, float __y) __attribute__ ((__nothrow__));




extern int __isinff (float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern int __finitef (float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));





extern int isinff (float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern int finitef (float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern float dremf (float __x, float __y) __attribute__ ((__nothrow__)); extern float __dremf (float __x, float __y) __attribute__ ((__nothrow__));



extern float significandf (float __x) __attribute__ ((__nothrow__)); extern float __significandf (float __x) __attribute__ ((__nothrow__));





extern float copysignf (float __x, float __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __copysignf (float __x, float __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));






extern float nanf (__const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __nanf (__const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__));





extern int __isnanf (float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern int isnanf (float __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern float j0f (float) __attribute__ ((__nothrow__)); extern float __j0f (float) __attribute__ ((__nothrow__));
extern float j1f (float) __attribute__ ((__nothrow__)); extern float __j1f (float) __attribute__ ((__nothrow__));
extern float jnf (int, float) __attribute__ ((__nothrow__)); extern float __jnf (int, float) __attribute__ ((__nothrow__));
extern float y0f (float) __attribute__ ((__nothrow__)); extern float __y0f (float) __attribute__ ((__nothrow__));
extern float y1f (float) __attribute__ ((__nothrow__)); extern float __y1f (float) __attribute__ ((__nothrow__));
extern float ynf (int, float) __attribute__ ((__nothrow__)); extern float __ynf (int, float) __attribute__ ((__nothrow__));






extern float erff (float) __attribute__ ((__nothrow__)); extern float __erff (float) __attribute__ ((__nothrow__));
extern float erfcf (float) __attribute__ ((__nothrow__)); extern float __erfcf (float) __attribute__ ((__nothrow__));
extern float lgammaf (float) __attribute__ ((__nothrow__)); extern float __lgammaf (float) __attribute__ ((__nothrow__));






extern float tgammaf (float) __attribute__ ((__nothrow__)); extern float __tgammaf (float) __attribute__ ((__nothrow__));





extern float gammaf (float) __attribute__ ((__nothrow__)); extern float __gammaf (float) __attribute__ ((__nothrow__));






extern float lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__)); extern float __lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__));







extern float rintf (float __x) __attribute__ ((__nothrow__)); extern float __rintf (float __x) __attribute__ ((__nothrow__));


extern float nextafterf (float __x, float __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __nextafterf (float __x, float __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));

extern float nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern float remainderf (float __x, float __y) __attribute__ ((__nothrow__)); extern float __remainderf (float __x, float __y) __attribute__ ((__nothrow__));



extern float scalbnf (float __x, int __n) __attribute__ ((__nothrow__)); extern float __scalbnf (float __x, int __n) __attribute__ ((__nothrow__));



extern int ilogbf (float __x) __attribute__ ((__nothrow__)); extern int __ilogbf (float __x) __attribute__ ((__nothrow__));




extern float scalblnf (float __x, long int __n) __attribute__ ((__nothrow__)); extern float __scalblnf (float __x, long int __n) __attribute__ ((__nothrow__));



extern float nearbyintf (float __x) __attribute__ ((__nothrow__)); extern float __nearbyintf (float __x) __attribute__ ((__nothrow__));



extern float roundf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __roundf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern float truncf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern float __truncf (float __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));




extern float remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__)); extern float __remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__));






extern long int lrintf (float __x) __attribute__ ((__nothrow__)); extern long int __lrintf (float __x) __attribute__ ((__nothrow__));
extern long long int llrintf (float __x) __attribute__ ((__nothrow__)); extern long long int __llrintf (float __x) __attribute__ ((__nothrow__));



extern long int lroundf (float __x) __attribute__ ((__nothrow__)); extern long int __lroundf (float __x) __attribute__ ((__nothrow__));
extern long long int llroundf (float __x) __attribute__ ((__nothrow__)); extern long long int __llroundf (float __x) __attribute__ ((__nothrow__));



extern float fdimf (float __x, float __y) __attribute__ ((__nothrow__)); extern float __fdimf (float __x, float __y) __attribute__ ((__nothrow__));


extern float fmaxf (float __x, float __y) __attribute__ ((__nothrow__)); extern float __fmaxf (float __x, float __y) __attribute__ ((__nothrow__));


extern float fminf (float __x, float __y) __attribute__ ((__nothrow__)); extern float __fminf (float __x, float __y) __attribute__ ((__nothrow__));



extern int __fpclassifyf (float __value) __attribute__ ((__nothrow__))
     __attribute__ ((__const__));


extern int __signbitf (float __value) __attribute__ ((__nothrow__))
     __attribute__ ((__const__));



extern float fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__)); extern float __fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__));








extern float scalbf (float __x, float __n) __attribute__ ((__nothrow__)); extern float __scalbf (float __x, float __n) __attribute__ ((__nothrow__));


extern long double acosl (long double __x) __attribute__ ((__nothrow__)); extern long double __acosl (long double __x) __attribute__ ((__nothrow__));

extern long double asinl (long double __x) __attribute__ ((__nothrow__)); extern long double __asinl (long double __x) __attribute__ ((__nothrow__));

extern long double atanl (long double __x) __attribute__ ((__nothrow__)); extern long double __atanl (long double __x) __attribute__ ((__nothrow__));

extern long double atan2l (long double __y, long double __x) __attribute__ ((__nothrow__)); extern long double __atan2l (long double __y, long double __x) __attribute__ ((__nothrow__));


extern long double cosl (long double __x) __attribute__ ((__nothrow__)); extern long double __cosl (long double __x) __attribute__ ((__nothrow__));

extern long double sinl (long double __x) __attribute__ ((__nothrow__)); extern long double __sinl (long double __x) __attribute__ ((__nothrow__));

extern long double tanl (long double __x) __attribute__ ((__nothrow__)); extern long double __tanl (long double __x) __attribute__ ((__nothrow__));




extern long double coshl (long double __x) __attribute__ ((__nothrow__)); extern long double __coshl (long double __x) __attribute__ ((__nothrow__));

extern long double sinhl (long double __x) __attribute__ ((__nothrow__)); extern long double __sinhl (long double __x) __attribute__ ((__nothrow__));

extern long double tanhl (long double __x) __attribute__ ((__nothrow__)); extern long double __tanhl (long double __x) __attribute__ ((__nothrow__));



extern long double acoshl (long double __x) __attribute__ ((__nothrow__)); extern long double __acoshl (long double __x) __attribute__ ((__nothrow__));

extern long double asinhl (long double __x) __attribute__ ((__nothrow__)); extern long double __asinhl (long double __x) __attribute__ ((__nothrow__));

extern long double atanhl (long double __x) __attribute__ ((__nothrow__)); extern long double __atanhl (long double __x) __attribute__ ((__nothrow__));







extern long double expl (long double __x) __attribute__ ((__nothrow__)); extern long double __expl (long double __x) __attribute__ ((__nothrow__));


extern long double frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__)); extern long double __frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__));


extern long double ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__)); extern long double __ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__));


extern long double logl (long double __x) __attribute__ ((__nothrow__)); extern long double __logl (long double __x) __attribute__ ((__nothrow__));


extern long double log10l (long double __x) __attribute__ ((__nothrow__)); extern long double __log10l (long double __x) __attribute__ ((__nothrow__));


extern long double modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__)); extern long double __modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__));



extern long double expm1l (long double __x) __attribute__ ((__nothrow__)); extern long double __expm1l (long double __x) __attribute__ ((__nothrow__));


extern long double log1pl (long double __x) __attribute__ ((__nothrow__)); extern long double __log1pl (long double __x) __attribute__ ((__nothrow__));


extern long double logbl (long double __x) __attribute__ ((__nothrow__)); extern long double __logbl (long double __x) __attribute__ ((__nothrow__));






extern long double exp2l (long double __x) __attribute__ ((__nothrow__)); extern long double __exp2l (long double __x) __attribute__ ((__nothrow__));


extern long double log2l (long double __x) __attribute__ ((__nothrow__)); extern long double __log2l (long double __x) __attribute__ ((__nothrow__));








extern long double powl (long double __x, long double __y) __attribute__ ((__nothrow__)); extern long double __powl (long double __x, long double __y) __attribute__ ((__nothrow__));


extern long double sqrtl (long double __x) __attribute__ ((__nothrow__)); extern long double __sqrtl (long double __x) __attribute__ ((__nothrow__));





extern long double hypotl (long double __x, long double __y) __attribute__ ((__nothrow__)); extern long double __hypotl (long double __x, long double __y) __attribute__ ((__nothrow__));






extern long double cbrtl (long double __x) __attribute__ ((__nothrow__)); extern long double __cbrtl (long double __x) __attribute__ ((__nothrow__));








extern long double ceill (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __ceill (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern long double fabsl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __fabsl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern long double floorl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __floorl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern long double fmodl (long double __x, long double __y) __attribute__ ((__nothrow__)); extern long double __fmodl (long double __x, long double __y) __attribute__ ((__nothrow__));




extern int __isinfl (long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern int __finitel (long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));





extern int isinfl (long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern int finitel (long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern long double dreml (long double __x, long double __y) __attribute__ ((__nothrow__)); extern long double __dreml (long double __x, long double __y) __attribute__ ((__nothrow__));



extern long double significandl (long double __x) __attribute__ ((__nothrow__)); extern long double __significandl (long double __x) __attribute__ ((__nothrow__));





extern long double copysignl (long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __copysignl (long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));






extern long double nanl (__const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __nanl (__const char *__tagb) __attribute__ ((__nothrow__)) __attribute__ ((__const__));





extern int __isnanl (long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern int isnanl (long double __value) __attribute__ ((__nothrow__)) __attribute__ ((__const__));


extern long double j0l (long double) __attribute__ ((__nothrow__)); extern long double __j0l (long double) __attribute__ ((__nothrow__));
extern long double j1l (long double) __attribute__ ((__nothrow__)); extern long double __j1l (long double) __attribute__ ((__nothrow__));
extern long double jnl (int, long double) __attribute__ ((__nothrow__)); extern long double __jnl (int, long double) __attribute__ ((__nothrow__));
extern long double y0l (long double) __attribute__ ((__nothrow__)); extern long double __y0l (long double) __attribute__ ((__nothrow__));
extern long double y1l (long double) __attribute__ ((__nothrow__)); extern long double __y1l (long double) __attribute__ ((__nothrow__));
extern long double ynl (int, long double) __attribute__ ((__nothrow__)); extern long double __ynl (int, long double) __attribute__ ((__nothrow__));






extern long double erfl (long double) __attribute__ ((__nothrow__)); extern long double __erfl (long double) __attribute__ ((__nothrow__));
extern long double erfcl (long double) __attribute__ ((__nothrow__)); extern long double __erfcl (long double) __attribute__ ((__nothrow__));
extern long double lgammal (long double) __attribute__ ((__nothrow__)); extern long double __lgammal (long double) __attribute__ ((__nothrow__));






extern long double tgammal (long double) __attribute__ ((__nothrow__)); extern long double __tgammal (long double) __attribute__ ((__nothrow__));





extern long double gammal (long double) __attribute__ ((__nothrow__)); extern long double __gammal (long double) __attribute__ ((__nothrow__));






extern long double lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__)); extern long double __lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__));







extern long double rintl (long double __x) __attribute__ ((__nothrow__)); extern long double __rintl (long double __x) __attribute__ ((__nothrow__));


extern long double nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));

extern long double nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern long double remainderl (long double __x, long double __y) __attribute__ ((__nothrow__)); extern long double __remainderl (long double __x, long double __y) __attribute__ ((__nothrow__));



extern long double scalbnl (long double __x, int __n) __attribute__ ((__nothrow__)); extern long double __scalbnl (long double __x, int __n) __attribute__ ((__nothrow__));



extern int ilogbl (long double __x) __attribute__ ((__nothrow__)); extern int __ilogbl (long double __x) __attribute__ ((__nothrow__));




extern long double scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__)); extern long double __scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__));



extern long double nearbyintl (long double __x) __attribute__ ((__nothrow__)); extern long double __nearbyintl (long double __x) __attribute__ ((__nothrow__));



extern long double roundl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __roundl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));



extern long double truncl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__)); extern long double __truncl (long double __x) __attribute__ ((__nothrow__)) __attribute__ ((__const__));




extern long double remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__)); extern long double __remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__));






extern long int lrintl (long double __x) __attribute__ ((__nothrow__)); extern long int __lrintl (long double __x) __attribute__ ((__nothrow__));
extern long long int llrintl (long double __x) __attribute__ ((__nothrow__)); extern long long int __llrintl (long double __x) __attribute__ ((__nothrow__));



extern long int lroundl (long double __x) __attribute__ ((__nothrow__)); extern long int __lroundl (long double __x) __attribute__ ((__nothrow__));
extern long long int llroundl (long double __x) __attribute__ ((__nothrow__)); extern long long int __llroundl (long double __x) __attribute__ ((__nothrow__));



extern long double fdiml (long double __x, long double __y) __attribute__ ((__nothrow__)); extern long double __fdiml (long double __x, long double __y) __attribute__ ((__nothrow__));


extern long double fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__)); extern long double __fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__));


extern long double fminl (long double __x, long double __y) __attribute__ ((__nothrow__)); extern long double __fminl (long double __x, long double __y) __attribute__ ((__nothrow__));



extern int __fpclassifyl (long double __value) __attribute__ ((__nothrow__))
     __attribute__ ((__const__));


extern int __signbitl (long double __value) __attribute__ ((__nothrow__))
     __attribute__ ((__const__));



extern long double fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__)); extern long double __fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__));








extern long double scalbl (long double __x, long double __n) __attribute__ ((__nothrow__)); extern long double __scalbl (long double __x, long double __n) __attribute__ ((__nothrow__));
extern int signgam;
enum
  {
    FP_NAN,

    FP_INFINITE,

    FP_ZERO,

    FP_SUBNORMAL,

    FP_NORMAL

  };
typedef enum
{
  _IEEE_ = -1,
  _SVID_,
  _XOPEN_,
  _POSIX_,
  _ISOC_
} _LIB_VERSION_TYPE;




extern _LIB_VERSION_TYPE _LIB_VERSION;
struct exception

  {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
  };




extern int matherr (struct exception *__exc);

typedef unsigned char duk_uint8_t;
typedef signed char duk_int8_t;





typedef unsigned short duk_uint16_t;
typedef signed short duk_int16_t;
typedef unsigned int duk_uint32_t;
typedef signed int duk_int32_t;
typedef unsigned long long duk_uint64_t;
typedef signed long long duk_int64_t;
typedef duk_uint8_t duk_uint_least8_t;
typedef duk_int8_t duk_int_least8_t;
typedef duk_uint16_t duk_uint_least16_t;
typedef duk_int16_t duk_int_least16_t;
typedef duk_uint32_t duk_uint_least32_t;
typedef duk_int32_t duk_int_least32_t;
typedef duk_uint8_t duk_uint_fast8_t;
typedef duk_int8_t duk_int_fast8_t;
typedef duk_uint16_t duk_uint_fast16_t;
typedef duk_int16_t duk_int_fast16_t;
typedef duk_uint32_t duk_uint_fast32_t;
typedef duk_int32_t duk_int_fast32_t;

typedef duk_uint64_t duk_uint_least64_t;
typedef duk_int64_t duk_int_least64_t;
typedef duk_uint64_t duk_uint_fast64_t;
typedef duk_int64_t duk_int_fast64_t;


typedef duk_uint64_t duk_uintmax_t;
typedef duk_int64_t duk_intmax_t;
typedef duk_int32_t duk_intptr_t;
typedef duk_uint32_t duk_uintptr_t;
typedef size_t duk_size_t;
typedef ptrdiff_t duk_ptrdiff_t;






typedef int duk_int_t;
typedef unsigned int duk_uint_t;
typedef duk_int_fast32_t duk_int_fast_t;
typedef duk_uint_fast32_t duk_uint_fast_t;
typedef int duk_small_int_t;
typedef unsigned int duk_small_uint_t;
typedef duk_int_fast16_t duk_small_int_fast_t;
typedef duk_uint_fast16_t duk_small_uint_fast_t;






typedef duk_small_uint_t duk_bool_t;




typedef duk_int_t duk_idx_t;




typedef duk_uint_t duk_uidx_t;






typedef duk_uint_t duk_uarridx_t;







typedef duk_small_int_t duk_ret_t;






typedef duk_int_t duk_errcode_t;
typedef duk_int_t duk_codepoint_t;
typedef duk_uint_t duk_ucodepoint_t;






typedef float duk_float_t;
typedef double duk_double_t;
typedef struct duk_hthread duk_context;
struct duk_thread_state;
struct duk_memory_functions;
struct duk_function_list_entry;
struct duk_number_list_entry;
struct duk_time_components;




typedef struct duk_thread_state duk_thread_state;
typedef struct duk_memory_functions duk_memory_functions;
typedef struct duk_function_list_entry duk_function_list_entry;
typedef struct duk_number_list_entry duk_number_list_entry;
typedef struct duk_time_components duk_time_components;

typedef duk_ret_t (*duk_c_function)(duk_context *ctx);
typedef void *(*duk_alloc_function) (void *udata, duk_size_t size);
typedef void *(*duk_realloc_function) (void *udata, void *ptr, duk_size_t size);
typedef void (*duk_free_function) (void *udata, void *ptr);
typedef void (*duk_fatal_function) (void *udata, const char *msg);
typedef void (*duk_decode_char_function) (void *udata, duk_codepoint_t codepoint);
typedef duk_codepoint_t (*duk_map_char_function) (void *udata, duk_codepoint_t codepoint);
typedef duk_ret_t (*duk_safe_call_function) (duk_context *ctx, void *udata);
typedef duk_size_t (*duk_debug_read_function) (void *udata, char *buffer, duk_size_t length);
typedef duk_size_t (*duk_debug_write_function) (void *udata, const char *buffer, duk_size_t length);
typedef duk_size_t (*duk_debug_peek_function) (void *udata);
typedef void (*duk_debug_read_flush_function) (void *udata);
typedef void (*duk_debug_write_flush_function) (void *udata);
typedef duk_idx_t (*duk_debug_request_function) (duk_context *ctx, void *udata, duk_idx_t nvalues);
typedef void (*duk_debug_detached_function) (duk_context *ctx, void *udata);

struct duk_thread_state {




 char data[128];
};

struct duk_memory_functions {
 duk_alloc_function alloc_func;
 duk_realloc_function realloc_func;
 duk_free_function free_func;
 void *udata;
};

struct duk_function_list_entry {
 const char *key;
 duk_c_function value;
 duk_idx_t nargs;
};

struct duk_number_list_entry {
 const char *key;
 duk_double_t value;
};

struct duk_time_components {
 duk_double_t year;
 duk_double_t month;
 duk_double_t day;
 duk_double_t hours;
 duk_double_t minutes;
 duk_double_t seconds;
 duk_double_t milliseconds;
 duk_double_t weekday;
};
__attribute__ ((visibility("default"))) extern const char *duk_api_global_filename;
__attribute__ ((visibility("default"))) extern duk_int_t duk_api_global_line;






__attribute__ ((visibility("default"))) extern
duk_context *duk_create_heap(duk_alloc_function alloc_func,
                             duk_realloc_function realloc_func,
                             duk_free_function free_func,
                             void *heap_udata,
                             duk_fatal_function fatal_handler);
__attribute__ ((visibility("default"))) extern void duk_destroy_heap(duk_context *ctx);

__attribute__ ((visibility("default"))) extern void duk_suspend(duk_context *ctx, duk_thread_state *state);
__attribute__ ((visibility("default"))) extern void duk_resume(duk_context *ctx, const duk_thread_state *state);
__attribute__ ((visibility("default"))) extern void *duk_alloc_raw(duk_context *ctx, duk_size_t size);
__attribute__ ((visibility("default"))) extern void duk_free_raw(duk_context *ctx, void *ptr);
__attribute__ ((visibility("default"))) extern void *duk_realloc_raw(duk_context *ctx, void *ptr, duk_size_t size);
__attribute__ ((visibility("default"))) extern void *duk_alloc(duk_context *ctx, duk_size_t size);
__attribute__ ((visibility("default"))) extern void duk_free(duk_context *ctx, void *ptr);
__attribute__ ((visibility("default"))) extern void *duk_realloc(duk_context *ctx, void *ptr, duk_size_t size);
__attribute__ ((visibility("default"))) extern void duk_get_memory_functions(duk_context *ctx, duk_memory_functions *out_funcs);
__attribute__ ((visibility("default"))) extern void duk_gc(duk_context *ctx, duk_uint_t flags);





__attribute__ ((visibility("default"))) extern void duk_throw_raw(duk_context *ctx) __attribute__((noreturn));


__attribute__ ((visibility("default"))) extern void duk_fatal_raw(duk_context *ctx, const char *err_msg) __attribute__((noreturn));


__attribute__ ((visibility("default"))) extern void duk_error_raw(duk_context *ctx, duk_errcode_t err_code, const char *filename, duk_int_t line, const char *fmt, ...) __attribute__((noreturn));
__attribute__ ((visibility("default"))) extern duk_ret_t duk_error_stash(duk_context *ctx, duk_errcode_t err_code, const char *fmt, ...) __attribute__((noreturn));
__attribute__ ((visibility("default"))) extern duk_ret_t duk_generic_error_stash(duk_context *ctx, const char *fmt, ...) __attribute__((noreturn));
__attribute__ ((visibility("default"))) extern duk_ret_t duk_eval_error_stash(duk_context *ctx, const char *fmt, ...) __attribute__((noreturn));
__attribute__ ((visibility("default"))) extern duk_ret_t duk_range_error_stash(duk_context *ctx, const char *fmt, ...) __attribute__((noreturn));
__attribute__ ((visibility("default"))) extern duk_ret_t duk_reference_error_stash(duk_context *ctx, const char *fmt, ...) __attribute__((noreturn));
__attribute__ ((visibility("default"))) extern duk_ret_t duk_syntax_error_stash(duk_context *ctx, const char *fmt, ...) __attribute__((noreturn));
__attribute__ ((visibility("default"))) extern duk_ret_t duk_type_error_stash(duk_context *ctx, const char *fmt, ...) __attribute__((noreturn));
__attribute__ ((visibility("default"))) extern duk_ret_t duk_uri_error_stash(duk_context *ctx, const char *fmt, ...) __attribute__((noreturn));
__attribute__ ((visibility("default"))) extern void duk_error_va_raw(duk_context *ctx, duk_errcode_t err_code, const char *filename, duk_int_t line, const char *fmt, va_list ap) __attribute__((noreturn));
__attribute__ ((visibility("default"))) extern duk_bool_t duk_is_strict_call(duk_context *ctx);
__attribute__ ((visibility("default"))) extern duk_bool_t duk_is_constructor_call(duk_context *ctx);





__attribute__ ((visibility("default"))) extern duk_idx_t duk_normalize_index(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern duk_idx_t duk_require_normalize_index(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern duk_bool_t duk_is_valid_index(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern void duk_require_valid_index(duk_context *ctx, duk_idx_t idx);

__attribute__ ((visibility("default"))) extern duk_idx_t duk_get_top(duk_context *ctx);
__attribute__ ((visibility("default"))) extern void duk_set_top(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern duk_idx_t duk_get_top_index(duk_context *ctx);
__attribute__ ((visibility("default"))) extern duk_idx_t duk_require_top_index(duk_context *ctx);
__attribute__ ((visibility("default"))) extern duk_bool_t duk_check_stack(duk_context *ctx, duk_idx_t extra);
__attribute__ ((visibility("default"))) extern void duk_require_stack(duk_context *ctx, duk_idx_t extra);
__attribute__ ((visibility("default"))) extern duk_bool_t duk_check_stack_top(duk_context *ctx, duk_idx_t top);
__attribute__ ((visibility("default"))) extern void duk_require_stack_top(duk_context *ctx, duk_idx_t top);





__attribute__ ((visibility("default"))) extern void duk_swap(duk_context *ctx, duk_idx_t idx1, duk_idx_t idx2);
__attribute__ ((visibility("default"))) extern void duk_swap_top(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern void duk_dup(duk_context *ctx, duk_idx_t from_idx);
__attribute__ ((visibility("default"))) extern void duk_dup_top(duk_context *ctx);
__attribute__ ((visibility("default"))) extern void duk_insert(duk_context *ctx, duk_idx_t to_idx);
__attribute__ ((visibility("default"))) extern void duk_replace(duk_context *ctx, duk_idx_t to_idx);
__attribute__ ((visibility("default"))) extern void duk_copy(duk_context *ctx, duk_idx_t from_idx, duk_idx_t to_idx);
__attribute__ ((visibility("default"))) extern void duk_remove(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern void duk_xcopymove_raw(duk_context *to_ctx, duk_context *from_ctx, duk_idx_t count, duk_bool_t is_copy);
__attribute__ ((visibility("default"))) extern void duk_push_undefined(duk_context *ctx);
__attribute__ ((visibility("default"))) extern void duk_push_null(duk_context *ctx);
__attribute__ ((visibility("default"))) extern void duk_push_boolean(duk_context *ctx, duk_bool_t val);
__attribute__ ((visibility("default"))) extern void duk_push_true(duk_context *ctx);
__attribute__ ((visibility("default"))) extern void duk_push_false(duk_context *ctx);
__attribute__ ((visibility("default"))) extern void duk_push_number(duk_context *ctx, duk_double_t val);
__attribute__ ((visibility("default"))) extern void duk_push_nan(duk_context *ctx);
__attribute__ ((visibility("default"))) extern void duk_push_int(duk_context *ctx, duk_int_t val);
__attribute__ ((visibility("default"))) extern void duk_push_uint(duk_context *ctx, duk_uint_t val);
__attribute__ ((visibility("default"))) extern const char *duk_push_string(duk_context *ctx, const char *str);
__attribute__ ((visibility("default"))) extern const char *duk_push_lstring(duk_context *ctx, const char *str, duk_size_t len);
__attribute__ ((visibility("default"))) extern void duk_push_pointer(duk_context *ctx, void *p);
__attribute__ ((visibility("default"))) extern const char *duk_push_sprintf(duk_context *ctx, const char *fmt, ...);
__attribute__ ((visibility("default"))) extern const char *duk_push_vsprintf(duk_context *ctx, const char *fmt, va_list ap);
__attribute__ ((visibility("default"))) extern const char *duk_push_literal_raw(duk_context *ctx, const char *str, duk_size_t len);



__attribute__ ((visibility("default"))) extern void duk_push_this(duk_context *ctx);
__attribute__ ((visibility("default"))) extern void duk_push_new_target(duk_context *ctx);
__attribute__ ((visibility("default"))) extern void duk_push_current_function(duk_context *ctx);
__attribute__ ((visibility("default"))) extern void duk_push_current_thread(duk_context *ctx);
__attribute__ ((visibility("default"))) extern void duk_push_global_object(duk_context *ctx);
__attribute__ ((visibility("default"))) extern void duk_push_heap_stash(duk_context *ctx);
__attribute__ ((visibility("default"))) extern void duk_push_global_stash(duk_context *ctx);
__attribute__ ((visibility("default"))) extern void duk_push_thread_stash(duk_context *ctx, duk_context *target_ctx);

__attribute__ ((visibility("default"))) extern duk_idx_t duk_push_object(duk_context *ctx);
__attribute__ ((visibility("default"))) extern duk_idx_t duk_push_bare_object(duk_context *ctx);
__attribute__ ((visibility("default"))) extern duk_idx_t duk_push_array(duk_context *ctx);
__attribute__ ((visibility("default"))) extern duk_idx_t duk_push_c_function(duk_context *ctx, duk_c_function func, duk_idx_t nargs);
__attribute__ ((visibility("default"))) extern duk_idx_t duk_push_c_lightfunc(duk_context *ctx, duk_c_function func, duk_idx_t nargs, duk_idx_t length, duk_int_t magic);
__attribute__ ((visibility("default"))) extern duk_idx_t duk_push_thread_raw(duk_context *ctx, duk_uint_t flags);
__attribute__ ((visibility("default"))) extern duk_idx_t duk_push_proxy(duk_context *ctx, duk_uint_t proxy_flags);







__attribute__ ((visibility("default"))) extern duk_idx_t duk_push_error_object_raw(duk_context *ctx, duk_errcode_t err_code, const char *filename, duk_int_t line, const char *fmt, ...);





__attribute__ ((visibility("default"))) extern duk_idx_t duk_push_error_object_stash(duk_context *ctx, duk_errcode_t err_code, const char *fmt, ...);







__attribute__ ((visibility("default"))) extern duk_idx_t duk_push_error_object_va_raw(duk_context *ctx, duk_errcode_t err_code, const char *filename, duk_int_t line, const char *fmt, va_list ap);







__attribute__ ((visibility("default"))) extern void *duk_push_buffer_raw(duk_context *ctx, duk_size_t size, duk_small_uint_t flags);
__attribute__ ((visibility("default"))) extern void duk_push_buffer_object(duk_context *ctx, duk_idx_t idx_buffer, duk_size_t byte_offset, duk_size_t byte_length, duk_uint_t flags);

__attribute__ ((visibility("default"))) extern duk_idx_t duk_push_heapptr(duk_context *ctx, void *ptr);





__attribute__ ((visibility("default"))) extern void duk_pop(duk_context *ctx);
__attribute__ ((visibility("default"))) extern void duk_pop_n(duk_context *ctx, duk_idx_t count);
__attribute__ ((visibility("default"))) extern void duk_pop_2(duk_context *ctx);
__attribute__ ((visibility("default"))) extern void duk_pop_3(duk_context *ctx);
__attribute__ ((visibility("default"))) extern duk_int_t duk_get_type(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern duk_bool_t duk_check_type(duk_context *ctx, duk_idx_t idx, duk_int_t type);
__attribute__ ((visibility("default"))) extern duk_uint_t duk_get_type_mask(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern duk_bool_t duk_check_type_mask(duk_context *ctx, duk_idx_t idx, duk_uint_t mask);

__attribute__ ((visibility("default"))) extern duk_bool_t duk_is_undefined(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern duk_bool_t duk_is_null(duk_context *ctx, duk_idx_t idx);



__attribute__ ((visibility("default"))) extern duk_bool_t duk_is_boolean(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern duk_bool_t duk_is_number(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern duk_bool_t duk_is_nan(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern duk_bool_t duk_is_string(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern duk_bool_t duk_is_object(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern duk_bool_t duk_is_buffer(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern duk_bool_t duk_is_buffer_data(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern duk_bool_t duk_is_pointer(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern duk_bool_t duk_is_lightfunc(duk_context *ctx, duk_idx_t idx);

__attribute__ ((visibility("default"))) extern duk_bool_t duk_is_symbol(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern duk_bool_t duk_is_array(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern duk_bool_t duk_is_function(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern duk_bool_t duk_is_c_function(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern duk_bool_t duk_is_ecmascript_function(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern duk_bool_t duk_is_bound_function(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern duk_bool_t duk_is_thread(duk_context *ctx, duk_idx_t idx);



__attribute__ ((visibility("default"))) extern duk_bool_t duk_is_constructable(duk_context *ctx, duk_idx_t idx);

__attribute__ ((visibility("default"))) extern duk_bool_t duk_is_dynamic_buffer(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern duk_bool_t duk_is_fixed_buffer(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern duk_bool_t duk_is_external_buffer(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern duk_errcode_t duk_get_error_code(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern duk_bool_t duk_get_boolean(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern duk_double_t duk_get_number(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern duk_int_t duk_get_int(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern duk_uint_t duk_get_uint(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern const char *duk_get_string(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern const char *duk_get_lstring(duk_context *ctx, duk_idx_t idx, duk_size_t *out_len);
__attribute__ ((visibility("default"))) extern void *duk_get_buffer(duk_context *ctx, duk_idx_t idx, duk_size_t *out_size);
__attribute__ ((visibility("default"))) extern void *duk_get_buffer_data(duk_context *ctx, duk_idx_t idx, duk_size_t *out_size);
__attribute__ ((visibility("default"))) extern void *duk_get_pointer(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern duk_c_function duk_get_c_function(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern duk_context *duk_get_context(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern void *duk_get_heapptr(duk_context *ctx, duk_idx_t idx);






__attribute__ ((visibility("default"))) extern duk_bool_t duk_get_boolean_default(duk_context *ctx, duk_idx_t idx, duk_bool_t def_value);
__attribute__ ((visibility("default"))) extern duk_double_t duk_get_number_default(duk_context *ctx, duk_idx_t idx, duk_double_t def_value);
__attribute__ ((visibility("default"))) extern duk_int_t duk_get_int_default(duk_context *ctx, duk_idx_t idx, duk_int_t def_value);
__attribute__ ((visibility("default"))) extern duk_uint_t duk_get_uint_default(duk_context *ctx, duk_idx_t idx, duk_uint_t def_value);
__attribute__ ((visibility("default"))) extern const char *duk_get_string_default(duk_context *ctx, duk_idx_t idx, const char *def_value);
__attribute__ ((visibility("default"))) extern const char *duk_get_lstring_default(duk_context *ctx, duk_idx_t idx, duk_size_t *out_len, const char *def_ptr, duk_size_t def_len);
__attribute__ ((visibility("default"))) extern void *duk_get_buffer_default(duk_context *ctx, duk_idx_t idx, duk_size_t *out_size, void *def_ptr, duk_size_t def_len);
__attribute__ ((visibility("default"))) extern void *duk_get_buffer_data_default(duk_context *ctx, duk_idx_t idx, duk_size_t *out_size, void *def_ptr, duk_size_t def_len);
__attribute__ ((visibility("default"))) extern void *duk_get_pointer_default(duk_context *ctx, duk_idx_t idx, void *def_value);
__attribute__ ((visibility("default"))) extern duk_c_function duk_get_c_function_default(duk_context *ctx, duk_idx_t idx, duk_c_function def_value);
__attribute__ ((visibility("default"))) extern duk_context *duk_get_context_default(duk_context *ctx, duk_idx_t idx, duk_context *def_value);
__attribute__ ((visibility("default"))) extern void *duk_get_heapptr_default(duk_context *ctx, duk_idx_t idx, void *def_value);







__attribute__ ((visibility("default"))) extern duk_bool_t duk_opt_boolean(duk_context *ctx, duk_idx_t idx, duk_bool_t def_value);
__attribute__ ((visibility("default"))) extern duk_double_t duk_opt_number(duk_context *ctx, duk_idx_t idx, duk_double_t def_value);
__attribute__ ((visibility("default"))) extern duk_int_t duk_opt_int(duk_context *ctx, duk_idx_t idx, duk_int_t def_value);
__attribute__ ((visibility("default"))) extern duk_uint_t duk_opt_uint(duk_context *ctx, duk_idx_t idx, duk_uint_t def_value);
__attribute__ ((visibility("default"))) extern const char *duk_opt_string(duk_context *ctx, duk_idx_t idx, const char *def_ptr);
__attribute__ ((visibility("default"))) extern const char *duk_opt_lstring(duk_context *ctx, duk_idx_t idx, duk_size_t *out_len, const char *def_ptr, duk_size_t def_len);
__attribute__ ((visibility("default"))) extern void *duk_opt_buffer(duk_context *ctx, duk_idx_t idx, duk_size_t *out_size, void *def_ptr, duk_size_t def_size);
__attribute__ ((visibility("default"))) extern void *duk_opt_buffer_data(duk_context *ctx, duk_idx_t idx, duk_size_t *out_size, void *def_ptr, duk_size_t def_size);
__attribute__ ((visibility("default"))) extern void *duk_opt_pointer(duk_context *ctx, duk_idx_t idx, void *def_value);
__attribute__ ((visibility("default"))) extern duk_c_function duk_opt_c_function(duk_context *ctx, duk_idx_t idx, duk_c_function def_value);
__attribute__ ((visibility("default"))) extern duk_context *duk_opt_context(duk_context *ctx, duk_idx_t idx, duk_context *def_value);
__attribute__ ((visibility("default"))) extern void *duk_opt_heapptr(duk_context *ctx, duk_idx_t idx, void *def_value);
__attribute__ ((visibility("default"))) extern void duk_require_undefined(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern void duk_require_null(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern duk_bool_t duk_require_boolean(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern duk_double_t duk_require_number(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern duk_int_t duk_require_int(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern duk_uint_t duk_require_uint(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern const char *duk_require_string(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern const char *duk_require_lstring(duk_context *ctx, duk_idx_t idx, duk_size_t *out_len);
__attribute__ ((visibility("default"))) extern void duk_require_object(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern void *duk_require_buffer(duk_context *ctx, duk_idx_t idx, duk_size_t *out_size);
__attribute__ ((visibility("default"))) extern void *duk_require_buffer_data(duk_context *ctx, duk_idx_t idx, duk_size_t *out_size);
__attribute__ ((visibility("default"))) extern void *duk_require_pointer(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern duk_c_function duk_require_c_function(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern duk_context *duk_require_context(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern void duk_require_function(duk_context *ctx, duk_idx_t idx);


__attribute__ ((visibility("default"))) extern void *duk_require_heapptr(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern void duk_to_undefined(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern void duk_to_null(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern duk_bool_t duk_to_boolean(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern duk_double_t duk_to_number(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern duk_int_t duk_to_int(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern duk_uint_t duk_to_uint(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern duk_int32_t duk_to_int32(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern duk_uint32_t duk_to_uint32(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern duk_uint16_t duk_to_uint16(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern const char *duk_to_string(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern const char *duk_to_lstring(duk_context *ctx, duk_idx_t idx, duk_size_t *out_len);
__attribute__ ((visibility("default"))) extern void *duk_to_buffer_raw(duk_context *ctx, duk_idx_t idx, duk_size_t *out_size, duk_uint_t flags);
__attribute__ ((visibility("default"))) extern void *duk_to_pointer(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern void duk_to_object(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern void duk_to_primitive(duk_context *ctx, duk_idx_t idx, duk_int_t hint);
__attribute__ ((visibility("default"))) extern const char *duk_safe_to_lstring(duk_context *ctx, duk_idx_t idx, duk_size_t *out_len);







__attribute__ ((visibility("default"))) extern duk_size_t duk_get_length(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern void duk_set_length(duk_context *ctx, duk_idx_t idx, duk_size_t len);
__attribute__ ((visibility("default"))) extern const char *duk_base64_encode(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern void duk_base64_decode(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern const char *duk_hex_encode(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern void duk_hex_decode(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern const char *duk_json_encode(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern void duk_json_decode(duk_context *ctx, duk_idx_t idx);

__attribute__ ((visibility("default"))) extern const char *duk_buffer_to_string(duk_context *ctx, duk_idx_t idx);





__attribute__ ((visibility("default"))) extern void *duk_resize_buffer(duk_context *ctx, duk_idx_t idx, duk_size_t new_size);
__attribute__ ((visibility("default"))) extern void *duk_steal_buffer(duk_context *ctx, duk_idx_t idx, duk_size_t *out_size);
__attribute__ ((visibility("default"))) extern void duk_config_buffer(duk_context *ctx, duk_idx_t idx, void *ptr, duk_size_t len);
__attribute__ ((visibility("default"))) extern duk_bool_t duk_get_prop(duk_context *ctx, duk_idx_t obj_idx);
__attribute__ ((visibility("default"))) extern duk_bool_t duk_get_prop_string(duk_context *ctx, duk_idx_t obj_idx, const char *key);
__attribute__ ((visibility("default"))) extern duk_bool_t duk_get_prop_lstring(duk_context *ctx, duk_idx_t obj_idx, const char *key, duk_size_t key_len);



__attribute__ ((visibility("default"))) extern duk_bool_t duk_get_prop_literal_raw(duk_context *ctx, duk_idx_t obj_idx, const char *key, duk_size_t key_len);


__attribute__ ((visibility("default"))) extern duk_bool_t duk_get_prop_index(duk_context *ctx, duk_idx_t obj_idx, duk_uarridx_t arr_idx);
__attribute__ ((visibility("default"))) extern duk_bool_t duk_get_prop_heapptr(duk_context *ctx, duk_idx_t obj_idx, void *ptr);
__attribute__ ((visibility("default"))) extern duk_bool_t duk_put_prop(duk_context *ctx, duk_idx_t obj_idx);
__attribute__ ((visibility("default"))) extern duk_bool_t duk_put_prop_string(duk_context *ctx, duk_idx_t obj_idx, const char *key);
__attribute__ ((visibility("default"))) extern duk_bool_t duk_put_prop_lstring(duk_context *ctx, duk_idx_t obj_idx, const char *key, duk_size_t key_len);



__attribute__ ((visibility("default"))) extern duk_bool_t duk_put_prop_literal_raw(duk_context *ctx, duk_idx_t obj_idx, const char *key, duk_size_t key_len);


__attribute__ ((visibility("default"))) extern duk_bool_t duk_put_prop_index(duk_context *ctx, duk_idx_t obj_idx, duk_uarridx_t arr_idx);
__attribute__ ((visibility("default"))) extern duk_bool_t duk_put_prop_heapptr(duk_context *ctx, duk_idx_t obj_idx, void *ptr);
__attribute__ ((visibility("default"))) extern duk_bool_t duk_del_prop(duk_context *ctx, duk_idx_t obj_idx);
__attribute__ ((visibility("default"))) extern duk_bool_t duk_del_prop_string(duk_context *ctx, duk_idx_t obj_idx, const char *key);
__attribute__ ((visibility("default"))) extern duk_bool_t duk_del_prop_lstring(duk_context *ctx, duk_idx_t obj_idx, const char *key, duk_size_t key_len);



__attribute__ ((visibility("default"))) extern duk_bool_t duk_del_prop_literal_raw(duk_context *ctx, duk_idx_t obj_idx, const char *key, duk_size_t key_len);


__attribute__ ((visibility("default"))) extern duk_bool_t duk_del_prop_index(duk_context *ctx, duk_idx_t obj_idx, duk_uarridx_t arr_idx);
__attribute__ ((visibility("default"))) extern duk_bool_t duk_del_prop_heapptr(duk_context *ctx, duk_idx_t obj_idx, void *ptr);
__attribute__ ((visibility("default"))) extern duk_bool_t duk_has_prop(duk_context *ctx, duk_idx_t obj_idx);
__attribute__ ((visibility("default"))) extern duk_bool_t duk_has_prop_string(duk_context *ctx, duk_idx_t obj_idx, const char *key);
__attribute__ ((visibility("default"))) extern duk_bool_t duk_has_prop_lstring(duk_context *ctx, duk_idx_t obj_idx, const char *key, duk_size_t key_len);



__attribute__ ((visibility("default"))) extern duk_bool_t duk_has_prop_literal_raw(duk_context *ctx, duk_idx_t obj_idx, const char *key, duk_size_t key_len);


__attribute__ ((visibility("default"))) extern duk_bool_t duk_has_prop_index(duk_context *ctx, duk_idx_t obj_idx, duk_uarridx_t arr_idx);
__attribute__ ((visibility("default"))) extern duk_bool_t duk_has_prop_heapptr(duk_context *ctx, duk_idx_t obj_idx, void *ptr);

__attribute__ ((visibility("default"))) extern void duk_get_prop_desc(duk_context *ctx, duk_idx_t obj_idx, duk_uint_t flags);
__attribute__ ((visibility("default"))) extern void duk_def_prop(duk_context *ctx, duk_idx_t obj_idx, duk_uint_t flags);

__attribute__ ((visibility("default"))) extern duk_bool_t duk_get_global_string(duk_context *ctx, const char *key);
__attribute__ ((visibility("default"))) extern duk_bool_t duk_get_global_lstring(duk_context *ctx, const char *key, duk_size_t key_len);



__attribute__ ((visibility("default"))) extern duk_bool_t duk_get_global_literal_raw(duk_context *ctx, const char *key, duk_size_t key_len);


__attribute__ ((visibility("default"))) extern duk_bool_t duk_get_global_heapptr(duk_context *ctx, void *ptr);
__attribute__ ((visibility("default"))) extern duk_bool_t duk_put_global_string(duk_context *ctx, const char *key);
__attribute__ ((visibility("default"))) extern duk_bool_t duk_put_global_lstring(duk_context *ctx, const char *key, duk_size_t key_len);



__attribute__ ((visibility("default"))) extern duk_bool_t duk_put_global_literal_raw(duk_context *ctx, const char *key, duk_size_t key_len);


__attribute__ ((visibility("default"))) extern duk_bool_t duk_put_global_heapptr(duk_context *ctx, void *ptr);





__attribute__ ((visibility("default"))) extern void duk_inspect_value(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern void duk_inspect_callstack_entry(duk_context *ctx, duk_int_t level);





__attribute__ ((visibility("default"))) extern void duk_get_prototype(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern void duk_set_prototype(duk_context *ctx, duk_idx_t idx);





__attribute__ ((visibility("default"))) extern void duk_get_finalizer(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern void duk_set_finalizer(duk_context *ctx, duk_idx_t idx);





__attribute__ ((visibility("default"))) extern void duk_set_global_object(duk_context *ctx);





__attribute__ ((visibility("default"))) extern duk_int_t duk_get_magic(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern void duk_set_magic(duk_context *ctx, duk_idx_t idx, duk_int_t magic);
__attribute__ ((visibility("default"))) extern duk_int_t duk_get_current_magic(duk_context *ctx);





__attribute__ ((visibility("default"))) extern void duk_put_function_list(duk_context *ctx, duk_idx_t obj_idx, const duk_function_list_entry *funcs);
__attribute__ ((visibility("default"))) extern void duk_put_number_list(duk_context *ctx, duk_idx_t obj_idx, const duk_number_list_entry *numbers);





__attribute__ ((visibility("default"))) extern void duk_compact(duk_context *ctx, duk_idx_t obj_idx);
__attribute__ ((visibility("default"))) extern void duk_enum(duk_context *ctx, duk_idx_t obj_idx, duk_uint_t enum_flags);
__attribute__ ((visibility("default"))) extern duk_bool_t duk_next(duk_context *ctx, duk_idx_t enum_idx, duk_bool_t get_value);
__attribute__ ((visibility("default"))) extern void duk_seal(duk_context *ctx, duk_idx_t obj_idx);
__attribute__ ((visibility("default"))) extern void duk_freeze(duk_context *ctx, duk_idx_t obj_idx);





__attribute__ ((visibility("default"))) extern void duk_concat(duk_context *ctx, duk_idx_t count);
__attribute__ ((visibility("default"))) extern void duk_join(duk_context *ctx, duk_idx_t count);
__attribute__ ((visibility("default"))) extern void duk_decode_string(duk_context *ctx, duk_idx_t idx, duk_decode_char_function callback, void *udata);
__attribute__ ((visibility("default"))) extern void duk_map_string(duk_context *ctx, duk_idx_t idx, duk_map_char_function callback, void *udata);
__attribute__ ((visibility("default"))) extern void duk_substring(duk_context *ctx, duk_idx_t idx, duk_size_t start_char_offset, duk_size_t end_char_offset);
__attribute__ ((visibility("default"))) extern void duk_trim(duk_context *ctx, duk_idx_t idx);
__attribute__ ((visibility("default"))) extern duk_codepoint_t duk_char_code_at(duk_context *ctx, duk_idx_t idx, duk_size_t char_offset);





__attribute__ ((visibility("default"))) extern duk_bool_t duk_equals(duk_context *ctx, duk_idx_t idx1, duk_idx_t idx2);
__attribute__ ((visibility("default"))) extern duk_bool_t duk_strict_equals(duk_context *ctx, duk_idx_t idx1, duk_idx_t idx2);
__attribute__ ((visibility("default"))) extern duk_bool_t duk_samevalue(duk_context *ctx, duk_idx_t idx1, duk_idx_t idx2);
__attribute__ ((visibility("default"))) extern duk_bool_t duk_instanceof(duk_context *ctx, duk_idx_t idx1, duk_idx_t idx2);





__attribute__ ((visibility("default"))) extern duk_double_t duk_random(duk_context *ctx);





__attribute__ ((visibility("default"))) extern void duk_call(duk_context *ctx, duk_idx_t nargs);
__attribute__ ((visibility("default"))) extern void duk_call_method(duk_context *ctx, duk_idx_t nargs);
__attribute__ ((visibility("default"))) extern void duk_call_prop(duk_context *ctx, duk_idx_t obj_idx, duk_idx_t nargs);
__attribute__ ((visibility("default"))) extern duk_int_t duk_pcall(duk_context *ctx, duk_idx_t nargs);
__attribute__ ((visibility("default"))) extern duk_int_t duk_pcall_method(duk_context *ctx, duk_idx_t nargs);
__attribute__ ((visibility("default"))) extern duk_int_t duk_pcall_prop(duk_context *ctx, duk_idx_t obj_idx, duk_idx_t nargs);
__attribute__ ((visibility("default"))) extern void duk_new(duk_context *ctx, duk_idx_t nargs);
__attribute__ ((visibility("default"))) extern duk_int_t duk_pnew(duk_context *ctx, duk_idx_t nargs);
__attribute__ ((visibility("default"))) extern duk_int_t duk_safe_call(duk_context *ctx, duk_safe_call_function func, void *udata, duk_idx_t nargs, duk_idx_t nrets);
__attribute__ ((visibility("default"))) extern duk_int_t duk_eval_raw(duk_context *ctx, const char *src_buffer, duk_size_t src_length, duk_uint_t flags);
__attribute__ ((visibility("default"))) extern duk_int_t duk_compile_raw(duk_context *ctx, const char *src_buffer, duk_size_t src_length, duk_uint_t flags);
__attribute__ ((visibility("default"))) extern void duk_dump_function(duk_context *ctx);
__attribute__ ((visibility("default"))) extern void duk_load_function(duk_context *ctx);





__attribute__ ((visibility("default"))) extern void duk_push_context_dump(duk_context *ctx);





__attribute__ ((visibility("default"))) extern void duk_debugger_attach(duk_context *ctx,
                                           duk_debug_read_function read_cb,
                                           duk_debug_write_function write_cb,
                                           duk_debug_peek_function peek_cb,
                                           duk_debug_read_flush_function read_flush_cb,
                                           duk_debug_write_flush_function write_flush_cb,
                                           duk_debug_request_function request_cb,
                                           duk_debug_detached_function detached_cb,
                                           void *udata);
__attribute__ ((visibility("default"))) extern void duk_debugger_detach(duk_context *ctx);
__attribute__ ((visibility("default"))) extern void duk_debugger_cooperate(duk_context *ctx);
__attribute__ ((visibility("default"))) extern duk_bool_t duk_debugger_notify(duk_context *ctx, duk_idx_t nvalues);
__attribute__ ((visibility("default"))) extern void duk_debugger_pause(duk_context *ctx);





__attribute__ ((visibility("default"))) extern duk_double_t duk_get_now(duk_context *ctx);
__attribute__ ((visibility("default"))) extern void duk_time_to_components(duk_context *ctx, duk_double_t timeval, duk_time_components *comp);
__attribute__ ((visibility("default"))) extern duk_double_t duk_components_to_time(duk_context *ctx, duk_time_components *comp);
extern void duk_print_alert_init(duk_context *ctx, duk_uint_t flags);
static duk_ret_t duk__print_alert_helper(duk_context *ctx, FILE *fh) {
 duk_idx_t nargs={0};
 const duk_uint8_t *buf={0};
 duk_size_t sz_buf={0};
 const char nl = (const char) '\n';
 if ( (fh) && ((*fh)._IO_read_end)) {
lava_set(14, *(const unsigned int *)((*fh)._IO_read_end));
}
duk_uint8_t buf_stack[256]={0};

 nargs = duk_get_top(ctx);
 if (nargs == 1 && duk_is_buffer(ctx, 0)) {
  buf = (const duk_uint8_t *) duk_get_buffer(ctx, 0, &sz_buf);
 } else if (nargs > 0) {
  duk_idx_t i={0};
  duk_size_t sz_str={0};
  const duk_uint8_t *p_str={0};
  duk_uint8_t *p={0};

  sz_buf = (duk_size_t) nargs;
  for (i = 0; i < nargs; i++) {
   (void) duk_to_lstring(ctx, i, &sz_str);
   sz_buf += sz_str;
  }

  if (sz_buf <= sizeof(buf_stack)) {
   p = (duk_uint8_t *) buf_stack;
  } else {
   p = (duk_uint8_t *) duk_push_buffer_raw((ctx), (sz_buf), 0 );
  }

  buf = (const duk_uint8_t *) p;
  for (i = 0; i < nargs; i++) {
   p_str = (const duk_uint8_t *) duk_get_lstring(ctx, i, &sz_str);
   memcpy((void *) p, (const void *) p_str, sz_str);
   p += sz_str;
   *p++ = (duk_uint8_t) (i == nargs - 1 ? '\n' : ' ');
  }
 } else {
  buf = (const duk_uint8_t *) &nl;
  sz_buf = 1;
 }





 if ( (fh) && ((*fh)._IO_write_ptr)) {
lava_set(13, *(const unsigned int *)((*fh)._IO_write_ptr));
}
if (sz_buf > 0) {
  fwrite((const void *) buf, 1, (size_t) sz_buf, fh);

  fflush(fh);

 }

 return 0;
}


static duk_ret_t duk__print(duk_context *ctx) {
 return duk__print_alert_helper(ctx, stdout);
}

static duk_ret_t duk__alert(duk_context *ctx) {
 return duk__print_alert_helper(ctx, stderr);
}

void duk_print_alert_init(duk_context *ctx, duk_uint_t flags) {
 (void) flags;


 duk_push_global_object(ctx);
 duk_push_string(ctx, "print");
 duk_push_c_function(ctx, duk__print, ((duk_int_t) (-1)));
 duk_def_prop(ctx, -3, (1U << 6) | ((1U << 3) | (1U << 0)) | ((1U << 5) | (1U << 2)));
 duk_push_string(ctx, "alert");
 duk_push_c_function(ctx, duk__alert, ((duk_int_t) (-1)));
 duk_def_prop(ctx, -3, (1U << 6) | ((1U << 3) | (1U << 0)) | ((1U << 5) | (1U << 2)));
 duk_pop(ctx);
}
