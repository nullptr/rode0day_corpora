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
extern __const unsigned short int **__ctype_b_loc (void)
     __attribute__ ((__nothrow__)) __attribute__ ((__const));
extern __const __int32_t **__ctype_tolower_loc (void)
     __attribute__ ((__nothrow__)) __attribute__ ((__const));
extern __const __int32_t **__ctype_toupper_loc (void)
     __attribute__ ((__nothrow__)) __attribute__ ((__const));






extern int isalnum (int) __attribute__ ((__nothrow__));
extern int isalpha (int) __attribute__ ((__nothrow__));
extern int iscntrl (int) __attribute__ ((__nothrow__));
extern int isdigit (int) __attribute__ ((__nothrow__));
extern int islower (int) __attribute__ ((__nothrow__));
extern int isgraph (int) __attribute__ ((__nothrow__));
extern int isprint (int) __attribute__ ((__nothrow__));
extern int ispunct (int) __attribute__ ((__nothrow__));
extern int isspace (int) __attribute__ ((__nothrow__));
extern int isupper (int) __attribute__ ((__nothrow__));
extern int isxdigit (int) __attribute__ ((__nothrow__));



extern int tolower (int __c) __attribute__ ((__nothrow__));


extern int toupper (int __c) __attribute__ ((__nothrow__));








extern int isblank (int) __attribute__ ((__nothrow__));






extern int isctype (int __c, int __mask) __attribute__ ((__nothrow__));






extern int isascii (int __c) __attribute__ ((__nothrow__));



extern int toascii (int __c) __attribute__ ((__nothrow__));



extern int _toupper (int) __attribute__ ((__nothrow__));
extern int _tolower (int) __attribute__ ((__nothrow__));
typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
extern int isalnum_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int isalpha_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int iscntrl_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int isdigit_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int islower_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int isgraph_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int isprint_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int ispunct_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int isspace_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int isupper_l (int, __locale_t) __attribute__ ((__nothrow__));
extern int isxdigit_l (int, __locale_t) __attribute__ ((__nothrow__));

extern int isblank_l (int, __locale_t) __attribute__ ((__nothrow__));



extern int __tolower_l (int __c, __locale_t __l) __attribute__ ((__nothrow__));
extern int tolower_l (int __c, __locale_t __l) __attribute__ ((__nothrow__));


extern int __toupper_l (int __c, __locale_t __l) __attribute__ ((__nothrow__));
extern int toupper_l (int __c, __locale_t __l) __attribute__ ((__nothrow__));













typedef int ptrdiff_t;
typedef unsigned int size_t;
typedef int wchar_t;




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




typedef __io_read_fn cookie_read_function_t;
typedef __io_write_fn cookie_write_function_t;
typedef __io_seek_fn cookie_seek_function_t;
typedef __io_close_fn cookie_close_function_t;


typedef struct
{
  __io_read_fn *read;
  __io_write_fn *write;
  __io_seek_fn *seek;
  __io_close_fn *close;
} _IO_cookie_io_functions_t;
typedef _IO_cookie_io_functions_t cookie_io_functions_t;

struct _IO_cookie_file;


extern void _IO_cookie_init (struct _IO_cookie_file *__cfile, int __read_write,
        void *__cookie, _IO_cookie_io_functions_t __fns);







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






typedef __off64_t off64_t;




typedef __ssize_t ssize_t;







typedef _G_fpos_t fpos_t;





typedef _G_fpos64_t fpos64_t;



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (__const char *__filename) __attribute__ ((__nothrow__));

extern int rename (__const char *__old, __const char *__new) __attribute__ ((__nothrow__));




extern int renameat (int __oldfd, __const char *__old, int __newfd,
       __const char *__new) __attribute__ ((__nothrow__));








extern FILE *tmpfile (void) ;
extern FILE *tmpfile64 (void) ;



extern char *tmpnam (char *__s) __attribute__ ((__nothrow__)) ;





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__)) ;
extern char *tempnam (__const char *__dir, __const char *__pfx)
     __attribute__ ((__nothrow__)) __attribute__ ((__malloc__)) ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

extern int fflush_unlocked (FILE *__stream);
extern int fcloseall (void);









extern FILE *fopen (__const char *__restrict __filename,
      __const char *__restrict __modes) ;




extern FILE *freopen (__const char *__restrict __filename,
        __const char *__restrict __modes,
        FILE *__restrict __stream) ;


extern FILE *fopen64 (__const char *__restrict __filename,
        __const char *__restrict __modes) ;
extern FILE *freopen64 (__const char *__restrict __filename,
   __const char *__restrict __modes,
   FILE *__restrict __stream) ;




extern FILE *fdopen (int __fd, __const char *__modes) __attribute__ ((__nothrow__)) ;





extern FILE *fopencookie (void *__restrict __magic_cookie,
     __const char *__restrict __modes,
     _IO_cookie_io_functions_t __io_funcs) __attribute__ ((__nothrow__)) ;




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






extern int vasprintf (char **__restrict __ptr, __const char *__restrict __f,
        __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 0))) ;
extern int __asprintf (char **__restrict __ptr,
         __const char *__restrict __fmt, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3))) ;
extern int asprintf (char **__restrict __ptr,
       __const char *__restrict __fmt, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3))) ;
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








extern int vfscanf (FILE *__restrict __s, __const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (__const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (__const char *__restrict __s,
      __const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__scanf__, 2, 0)));









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

extern char *fgets_unlocked (char *__restrict __s, int __n,
        FILE *__restrict __stream) ;
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

extern int fputs_unlocked (__const char *__restrict __s,
      FILE *__restrict __stream);
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



extern int fseeko64 (FILE *__stream, __off64_t __off, int __whence);
extern __off64_t ftello64 (FILE *__stream) ;
extern int fgetpos64 (FILE *__restrict __stream, fpos64_t *__restrict __pos);
extern int fsetpos64 (FILE *__stream, __const fpos64_t *__pos);




extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__)) ;




extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;








extern void perror (__const char *__s);






extern int sys_nerr;
extern __const char *__const sys_errlist[];


extern int _sys_nerr;
extern __const char *__const _sys_errlist[];




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__)) ;
extern FILE *popen (__const char *__command, __const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__));





extern char *cuserid (char *__s);




struct obstack;


extern int obstack_printf (struct obstack *__restrict __obstack,
      __const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 3)));
extern int obstack_vprintf (struct obstack *__restrict __obstack,
       __const char *__restrict __format,
       __gnuc_va_list __args)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 2, 0)));







extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__));









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

extern long int strtol_l (__const char *__restrict __nptr,
     char **__restrict __endptr, int __base,
     __locale_t __loc) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 4))) ;

extern unsigned long int strtoul_l (__const char *__restrict __nptr,
        char **__restrict __endptr,
        int __base, __locale_t __loc)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 4))) ;

__extension__
extern long long int strtoll_l (__const char *__restrict __nptr,
    char **__restrict __endptr, int __base,
    __locale_t __loc)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 4))) ;

__extension__
extern unsigned long long int strtoull_l (__const char *__restrict __nptr,
       char **__restrict __endptr,
       int __base, __locale_t __loc)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 4))) ;

extern double strtod_l (__const char *__restrict __nptr,
   char **__restrict __endptr, __locale_t __loc)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 3))) ;

extern float strtof_l (__const char *__restrict __nptr,
         char **__restrict __endptr, __locale_t __loc)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 3))) ;

extern long double strtold_l (__const char *__restrict __nptr,
         char **__restrict __endptr,
         __locale_t __loc)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 3))) ;
extern char *l64a (long int __n) __attribute__ ((__nothrow__)) ;


extern long int a64l (__const char *__s)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;










typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;






typedef __ino64_t ino64_t;




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



typedef __useconds_t useconds_t;



typedef __suseconds_t suseconds_t;








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
typedef long int __fd_mask;
typedef struct
  {



    __fd_mask fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];





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
typedef __blkcnt64_t blkcnt64_t;
typedef __fsblkcnt64_t fsblkcnt64_t;
typedef __fsfilcnt64_t fsfilcnt64_t;





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



extern int atexit (void (*__func) (int *data_flowvoid)) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
extern int at_quick_exit (void (*__func) (int *data_flowvoid)) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));







extern int on_exit (void (*__func) (int *data_flow, int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));







extern void quick_exit (int __status) __attribute__ ((__nothrow__)) __attribute__ ((__noreturn__));







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
extern int mkstemp64 (char *__template) __attribute__ ((__nonnull__ (1))) ;
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
extern int mkstemps64 (char *__template, int __suffixlen)
     __attribute__ ((__nonnull__ (1))) ;
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
extern int mkostemp (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
extern int mkostemp64 (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
extern int mkostemps (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;
extern int mkostemps64 (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;









extern int system (__const char *__command) ;






extern char *canonicalize_file_name (__const char *__name)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1))) ;
extern char *realpath (__const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__)) ;






typedef int (*__compar_fn_t) (int *data_flow, __const void *, __const void *);


typedef __compar_fn_t comparison_fn_t;



typedef int (*__compar_d_fn_t) (int *data_flow, __const void *, __const void *, void *);





extern void *bsearch (__const void *__key, __const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;



extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));

extern void qsort_r (void *__base, size_t __nmemb, size_t __size,
       __compar_d_fn_t __compar, void *__arg)
  __attribute__ ((__nonnull__ (1, 4)));




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





extern void setkey (__const char *__key) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));







extern int posix_openpt (int __oflag) ;







extern int grantpt (int __fd) __attribute__ ((__nothrow__));



extern int unlockpt (int __fd) __attribute__ ((__nothrow__));




extern char *ptsname (int __fd) __attribute__ ((__nothrow__)) ;






extern int ptsname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));


extern int getpt (void);






extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));















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


extern void *rawmemchr (__const void *__s, int __c)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern void *memrchr (__const void *__s, int __c, size_t __n)
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


extern char *strchrnul (__const char *__s, int __c)
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
extern char *strcasestr (__const char *__haystack, __const char *__needle)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));







extern void *memmem (__const void *__haystack, size_t __haystacklen,
       __const void *__needle, size_t __needlelen)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 3)));



extern void *__mempcpy (void *__restrict __dest,
   __const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *mempcpy (void *__restrict __dest,
        __const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1, 2)));





extern size_t strlen (__const char *__s)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (__const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) __attribute__ ((__nothrow__));

extern char *strerror_r (int __errnum, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (2)));





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




extern int ffsl (long int __l) __attribute__ ((__nothrow__)) __attribute__ ((__const__));

__extension__ extern int ffsll (long long int __ll)
     __attribute__ ((__nothrow__)) __attribute__ ((__const__));




extern int strcasecmp (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (__const char *__s1, __const char *__s2, size_t __n)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));





extern int strcasecmp_l (__const char *__s1, __const char *__s2,
    __locale_t __loc)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern int strncasecmp_l (__const char *__s1, __const char *__s2,
     size_t __n, __locale_t __loc)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));





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




extern int strverscmp (__const char *__s1, __const char *__s2)
     __attribute__ ((__nothrow__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strfry (char *__string) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));


extern void *memfrob (void *__s, size_t __n) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));
extern char *basename (__const char *__filename) __attribute__ ((__nothrow__)) __attribute__ ((__nonnull__ (1)));






typedef int BOOL;





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
typedef uint8_t PCRE2_UCHAR8;
typedef uint16_t PCRE2_UCHAR16;
typedef uint32_t PCRE2_UCHAR32;

typedef const PCRE2_UCHAR8 *PCRE2_SPTR8;
typedef const PCRE2_UCHAR16 *PCRE2_SPTR16;
typedef const PCRE2_UCHAR32 *PCRE2_SPTR32;
struct pcre2_real_general_context_8; typedef struct pcre2_real_general_context_8 pcre2_general_context_8; struct pcre2_real_compile_context_8; typedef struct pcre2_real_compile_context_8 pcre2_compile_context_8; struct pcre2_real_match_context_8; typedef struct pcre2_real_match_context_8 pcre2_match_context_8; struct pcre2_real_convert_context_8; typedef struct pcre2_real_convert_context_8 pcre2_convert_context_8; struct pcre2_real_code_8; typedef struct pcre2_real_code_8 pcre2_code_8; struct pcre2_real_match_data_8; typedef struct pcre2_real_match_data_8 pcre2_match_data_8; struct pcre2_real_jit_stack_8; typedef struct pcre2_real_jit_stack_8 pcre2_jit_stack_8; typedef pcre2_jit_stack_8 *(*pcre2_jit_callback_8)(int *data_flow, void *); typedef struct pcre2_callout_block_8 { uint32_t version; uint32_t callout_number; uint32_t capture_top; uint32_t capture_last; size_t *offset_vector; PCRE2_SPTR8 mark; PCRE2_SPTR8 subject; size_t subject_length; size_t start_match; size_t current_position; size_t pattern_position; size_t next_item_length; size_t callout_string_offset; size_t callout_string_length; PCRE2_SPTR8 callout_string; uint32_t callout_flags; } pcre2_callout_block_8; typedef struct pcre2_callout_enumerate_block_8 { uint32_t version; size_t pattern_position; size_t next_item_length; uint32_t callout_number; size_t callout_string_offset; size_t callout_string_length; PCRE2_SPTR8 callout_string; } pcre2_callout_enumerate_block_8; typedef struct pcre2_substitute_callout_block_8 { uint32_t version; size_t input_offsets[2]; size_t output_offsets[2]; } pcre2_substitute_callout_block_8; extern __attribute__ ((visibility ("default"))) int pcre2_config_8(int *data_flow, uint32_t, void *); extern __attribute__ ((visibility ("default"))) pcre2_general_context_8 *pcre2_general_context_copy_8(int *data_flow, pcre2_general_context_8 *); extern __attribute__ ((visibility ("default"))) pcre2_general_context_8 *pcre2_general_context_create_8(int *data_flow, void *(*)(int *data_flow, size_t, void *), void (*)(int *data_flow, void *, void *), void *); extern __attribute__ ((visibility ("default"))) void pcre2_general_context_free_8(int *data_flow, pcre2_general_context_8 *); extern __attribute__ ((visibility ("default"))) pcre2_compile_context_8 *pcre2_compile_context_copy_8(int *data_flow, pcre2_compile_context_8 *); extern __attribute__ ((visibility ("default"))) pcre2_compile_context_8 *pcre2_compile_context_create_8(int *data_flow, pcre2_general_context_8 *);extern __attribute__ ((visibility ("default"))) void pcre2_compile_context_free_8(int *data_flow, pcre2_compile_context_8 *); extern __attribute__ ((visibility ("default"))) int pcre2_set_bsr_8(int *data_flow, pcre2_compile_context_8 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_character_tables_8(int *data_flow, pcre2_compile_context_8 *, const unsigned char *); extern __attribute__ ((visibility ("default"))) int pcre2_set_compile_extra_options_8(int *data_flow, pcre2_compile_context_8 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_max_pattern_length_8(int *data_flow, pcre2_compile_context_8 *, size_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_newline_8(int *data_flow, pcre2_compile_context_8 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_parens_nest_limit_8(int *data_flow, pcre2_compile_context_8 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_compile_recursion_guard_8(int *data_flow, pcre2_compile_context_8 *, int (*)(int *data_flow, uint32_t, void *), void *); extern __attribute__ ((visibility ("default"))) pcre2_convert_context_8 *pcre2_convert_context_copy_8(int *data_flow, pcre2_convert_context_8 *); extern __attribute__ ((visibility ("default"))) pcre2_convert_context_8 *pcre2_convert_context_create_8(int *data_flow, pcre2_general_context_8 *); extern __attribute__ ((visibility ("default"))) void pcre2_convert_context_free_8(int *data_flow, pcre2_convert_context_8 *); extern __attribute__ ((visibility ("default"))) int pcre2_set_glob_escape_8(int *data_flow, pcre2_convert_context_8 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_glob_separator_8(int *data_flow, pcre2_convert_context_8 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_pattern_convert_8(int *data_flow, PCRE2_SPTR8, size_t, uint32_t, PCRE2_UCHAR8 **, size_t *, pcre2_convert_context_8 *); extern __attribute__ ((visibility ("default"))) void pcre2_converted_pattern_free_8(int *data_flow, PCRE2_UCHAR8 *); extern __attribute__ ((visibility ("default"))) pcre2_match_context_8 *pcre2_match_context_copy_8(int *data_flow, pcre2_match_context_8 *); extern __attribute__ ((visibility ("default"))) pcre2_match_context_8 *pcre2_match_context_create_8(int *data_flow, pcre2_general_context_8 *); extern __attribute__ ((visibility ("default"))) void pcre2_match_context_free_8(int *data_flow, pcre2_match_context_8 *); extern __attribute__ ((visibility ("default"))) int pcre2_set_callout_8(int *data_flow, pcre2_match_context_8 *, int (*)(int *data_flow, pcre2_callout_block_8 *, void *), void *); extern __attribute__ ((visibility ("default"))) int pcre2_set_substitute_callout_8(int *data_flow, pcre2_match_context_8 *, void (*)(int *data_flow, pcre2_substitute_callout_block_8 *, void *), void *); extern __attribute__ ((visibility ("default"))) int pcre2_set_depth_limit_8(int *data_flow, pcre2_match_context_8 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_heap_limit_8(int *data_flow, pcre2_match_context_8 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_match_limit_8(int *data_flow, pcre2_match_context_8 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_offset_limit_8(int *data_flow, pcre2_match_context_8 *, size_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_recursion_limit_8(int *data_flow, pcre2_match_context_8 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_recursion_memory_management_8(int *data_flow, pcre2_match_context_8 *, void *(*)(int *data_flow, size_t, void *), void (*)(int *data_flow, void *, void *), void *); extern __attribute__ ((visibility ("default"))) pcre2_code_8 *pcre2_compile_8(int *data_flow, PCRE2_SPTR8, size_t, uint32_t, int *, size_t *, pcre2_compile_context_8 *); extern __attribute__ ((visibility ("default"))) void pcre2_code_free_8(int *data_flow, pcre2_code_8 *); extern __attribute__ ((visibility ("default"))) pcre2_code_8 *pcre2_code_copy_8(int *data_flow, const pcre2_code_8 *); extern __attribute__ ((visibility ("default"))) pcre2_code_8 *pcre2_code_copy_with_tables_8(int *data_flow, const pcre2_code_8 *); extern __attribute__ ((visibility ("default"))) int pcre2_pattern_info_8(int *data_flow, const pcre2_code_8 *, uint32_t, void *); extern __attribute__ ((visibility ("default"))) int pcre2_callout_enumerate_8(int *data_flow, const pcre2_code_8 *, int (*)(int *data_flow, pcre2_callout_enumerate_block_8 *, void *), void *); extern __attribute__ ((visibility ("default"))) pcre2_match_data_8 *pcre2_match_data_create_8(int *data_flow, uint32_t, pcre2_general_context_8 *); extern __attribute__ ((visibility ("default"))) pcre2_match_data_8 *pcre2_match_data_create_from_pattern_8(int *data_flow, const pcre2_code_8 *, pcre2_general_context_8 *); extern __attribute__ ((visibility ("default"))) int pcre2_dfa_match_8(int *data_flow, const pcre2_code_8 *, PCRE2_SPTR8, size_t, size_t, uint32_t, pcre2_match_data_8 *, pcre2_match_context_8 *, int *, size_t); extern __attribute__ ((visibility ("default"))) int pcre2_match_8(int *data_flow, const pcre2_code_8 *, PCRE2_SPTR8, size_t, size_t, uint32_t, pcre2_match_data_8 *, pcre2_match_context_8 *); extern __attribute__ ((visibility ("default"))) void pcre2_match_data_free_8(int *data_flow, pcre2_match_data_8 *); extern __attribute__ ((visibility ("default"))) PCRE2_SPTR8 pcre2_get_mark_8(int *data_flow, pcre2_match_data_8 *); extern __attribute__ ((visibility ("default"))) uint32_t pcre2_get_ovector_count_8(int *data_flow, pcre2_match_data_8 *); extern __attribute__ ((visibility ("default"))) size_t *pcre2_get_ovector_pointer_8(int *data_flow, pcre2_match_data_8 *); extern __attribute__ ((visibility ("default"))) size_t pcre2_get_startchar_8(int *data_flow, pcre2_match_data_8 *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_copy_byname_8(int *data_flow, pcre2_match_data_8 *, PCRE2_SPTR8, PCRE2_UCHAR8 *, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_copy_bynumber_8(int *data_flow, pcre2_match_data_8 *, uint32_t, PCRE2_UCHAR8 *, size_t *); extern __attribute__ ((visibility ("default"))) void pcre2_substring_free_8(int *data_flow, PCRE2_UCHAR8 *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_get_byname_8(int *data_flow, pcre2_match_data_8 *, PCRE2_SPTR8, PCRE2_UCHAR8 **, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_get_bynumber_8(int *data_flow, pcre2_match_data_8 *, uint32_t, PCRE2_UCHAR8 **, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_length_byname_8(int *data_flow, pcre2_match_data_8 *, PCRE2_SPTR8, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_length_bynumber_8(int *data_flow, pcre2_match_data_8 *, uint32_t, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_nametable_scan_8(int *data_flow, const pcre2_code_8 *, PCRE2_SPTR8, PCRE2_SPTR8 *, PCRE2_SPTR8 *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_number_from_name_8(int *data_flow, const pcre2_code_8 *, PCRE2_SPTR8); extern __attribute__ ((visibility ("default"))) void pcre2_substring_list_free_8(int *data_flow, PCRE2_SPTR8 *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_list_get_8(int *data_flow, pcre2_match_data_8 *, PCRE2_UCHAR8 ***, size_t **); extern __attribute__ ((visibility ("default"))) int32_t pcre2_serialize_encode_8(int *data_flow, const pcre2_code_8 **, int32_t, uint8_t **, size_t *, pcre2_general_context_8 *); extern __attribute__ ((visibility ("default"))) int32_t pcre2_serialize_decode_8(int *data_flow, pcre2_code_8 **, int32_t, const uint8_t *, pcre2_general_context_8 *); extern __attribute__ ((visibility ("default"))) int32_t pcre2_serialize_get_number_of_codes_8(int *data_flow, const uint8_t *); extern __attribute__ ((visibility ("default"))) void pcre2_serialize_free_8(int *data_flow, uint8_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substitute_8(int *data_flow, const pcre2_code_8 *, PCRE2_SPTR8, size_t, size_t, uint32_t, pcre2_match_data_8 *, pcre2_match_context_8 *, PCRE2_SPTR8, size_t, PCRE2_UCHAR8 *, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_jit_compile_8(int *data_flow, pcre2_code_8 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_jit_match_8(int *data_flow, const pcre2_code_8 *, PCRE2_SPTR8, size_t, size_t, uint32_t, pcre2_match_data_8 *, pcre2_match_context_8 *); extern __attribute__ ((visibility ("default"))) void pcre2_jit_free_unused_memory_8(int *data_flow, pcre2_general_context_8 *); extern __attribute__ ((visibility ("default"))) pcre2_jit_stack_8 *pcre2_jit_stack_create_8(int *data_flow, size_t, size_t, pcre2_general_context_8 *); extern __attribute__ ((visibility ("default"))) void pcre2_jit_stack_assign_8(int *data_flow, pcre2_match_context_8 *, pcre2_jit_callback_8, void *); extern __attribute__ ((visibility ("default"))) void pcre2_jit_stack_free_8(int *data_flow, pcre2_jit_stack_8 *); extern __attribute__ ((visibility ("default"))) int pcre2_get_error_message_8(int *data_flow, int, PCRE2_UCHAR8 *, size_t); extern __attribute__ ((visibility ("default"))) const uint8_t *pcre2_maketables_8(int *data_flow, pcre2_general_context_8 *);



struct pcre2_real_general_context_16; typedef struct pcre2_real_general_context_16 pcre2_general_context_16; struct pcre2_real_compile_context_16; typedef struct pcre2_real_compile_context_16 pcre2_compile_context_16; struct pcre2_real_match_context_16; typedef struct pcre2_real_match_context_16 pcre2_match_context_16; struct pcre2_real_convert_context_16; typedef struct pcre2_real_convert_context_16 pcre2_convert_context_16; struct pcre2_real_code_16; typedef struct pcre2_real_code_16 pcre2_code_16; struct pcre2_real_match_data_16; typedef struct pcre2_real_match_data_16 pcre2_match_data_16; struct pcre2_real_jit_stack_16; typedef struct pcre2_real_jit_stack_16 pcre2_jit_stack_16; typedef pcre2_jit_stack_16 *(*pcre2_jit_callback_16)(int *data_flow, void *); typedef struct pcre2_callout_block_16 { uint32_t version; uint32_t callout_number; uint32_t capture_top; uint32_t capture_last; size_t *offset_vector; PCRE2_SPTR16 mark; PCRE2_SPTR16 subject; size_t subject_length; size_t start_match; size_t current_position; size_t pattern_position; size_t next_item_length; size_t callout_string_offset; size_t callout_string_length; PCRE2_SPTR16 callout_string; uint32_t callout_flags; } pcre2_callout_block_16; typedef struct pcre2_callout_enumerate_block_16 { uint32_t version; size_t pattern_position; size_t next_item_length; uint32_t callout_number; size_t callout_string_offset; size_t callout_string_length; PCRE2_SPTR16 callout_string; } pcre2_callout_enumerate_block_16; typedef struct pcre2_substitute_callout_block_16 { uint32_t version; size_t input_offsets[2]; size_t output_offsets[2]; } pcre2_substitute_callout_block_16; extern __attribute__ ((visibility ("default"))) int pcre2_config_16(uint32_t, void *); extern __attribute__ ((visibility ("default"))) pcre2_general_context_16 *pcre2_general_context_copy_16(pcre2_general_context_16 *); extern __attribute__ ((visibility ("default"))) pcre2_general_context_16 *pcre2_general_context_create_16(void *(*)(int *data_flow, size_t, void *), void (*)(int *data_flow, void *, void *), void *); extern __attribute__ ((visibility ("default"))) void pcre2_general_context_free_16(pcre2_general_context_16 *); extern __attribute__ ((visibility ("default"))) pcre2_compile_context_16 *pcre2_compile_context_copy_16(pcre2_compile_context_16 *); extern __attribute__ ((visibility ("default"))) pcre2_compile_context_16 *pcre2_compile_context_create_16(pcre2_general_context_16 *);extern __attribute__ ((visibility ("default"))) void pcre2_compile_context_free_16(pcre2_compile_context_16 *); extern __attribute__ ((visibility ("default"))) int pcre2_set_bsr_16(pcre2_compile_context_16 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_character_tables_16(pcre2_compile_context_16 *, const unsigned char *); extern __attribute__ ((visibility ("default"))) int pcre2_set_compile_extra_options_16(pcre2_compile_context_16 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_max_pattern_length_16(pcre2_compile_context_16 *, size_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_newline_16(pcre2_compile_context_16 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_parens_nest_limit_16(pcre2_compile_context_16 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_compile_recursion_guard_16(pcre2_compile_context_16 *, int (*)(int *data_flow, uint32_t, void *), void *); extern __attribute__ ((visibility ("default"))) pcre2_convert_context_16 *pcre2_convert_context_copy_16(pcre2_convert_context_16 *); extern __attribute__ ((visibility ("default"))) pcre2_convert_context_16 *pcre2_convert_context_create_16(pcre2_general_context_16 *); extern __attribute__ ((visibility ("default"))) void pcre2_convert_context_free_16(pcre2_convert_context_16 *); extern __attribute__ ((visibility ("default"))) int pcre2_set_glob_escape_16(pcre2_convert_context_16 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_glob_separator_16(pcre2_convert_context_16 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_pattern_convert_16(PCRE2_SPTR16, size_t, uint32_t, PCRE2_UCHAR16 **, size_t *, pcre2_convert_context_16 *); extern __attribute__ ((visibility ("default"))) void pcre2_converted_pattern_free_16(PCRE2_UCHAR16 *); extern __attribute__ ((visibility ("default"))) pcre2_match_context_16 *pcre2_match_context_copy_16(pcre2_match_context_16 *); extern __attribute__ ((visibility ("default"))) pcre2_match_context_16 *pcre2_match_context_create_16(pcre2_general_context_16 *); extern __attribute__ ((visibility ("default"))) void pcre2_match_context_free_16(pcre2_match_context_16 *); extern __attribute__ ((visibility ("default"))) int pcre2_set_callout_16(pcre2_match_context_16 *, int (*)(int *data_flow, pcre2_callout_block_16 *, void *), void *); extern __attribute__ ((visibility ("default"))) int pcre2_set_substitute_callout_16(pcre2_match_context_16 *, void (*)(int *data_flow, pcre2_substitute_callout_block_16 *, void *), void *); extern __attribute__ ((visibility ("default"))) int pcre2_set_depth_limit_16(pcre2_match_context_16 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_heap_limit_16(pcre2_match_context_16 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_match_limit_16(pcre2_match_context_16 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_offset_limit_16(pcre2_match_context_16 *, size_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_recursion_limit_16(pcre2_match_context_16 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_recursion_memory_management_16(pcre2_match_context_16 *, void *(*)(int *data_flow, size_t, void *), void (*)(int *data_flow, void *, void *), void *); extern __attribute__ ((visibility ("default"))) pcre2_code_16 *pcre2_compile_16(PCRE2_SPTR16, size_t, uint32_t, int *, size_t *, pcre2_compile_context_16 *); extern __attribute__ ((visibility ("default"))) void pcre2_code_free_16(pcre2_code_16 *); extern __attribute__ ((visibility ("default"))) pcre2_code_16 *pcre2_code_copy_16(const pcre2_code_16 *); extern __attribute__ ((visibility ("default"))) pcre2_code_16 *pcre2_code_copy_with_tables_16(const pcre2_code_16 *); extern __attribute__ ((visibility ("default"))) int pcre2_pattern_info_16(const pcre2_code_16 *, uint32_t, void *); extern __attribute__ ((visibility ("default"))) int pcre2_callout_enumerate_16(const pcre2_code_16 *, int (*)(int *data_flow, pcre2_callout_enumerate_block_16 *, void *), void *); extern __attribute__ ((visibility ("default"))) pcre2_match_data_16 *pcre2_match_data_create_16(uint32_t, pcre2_general_context_16 *); extern __attribute__ ((visibility ("default"))) pcre2_match_data_16 *pcre2_match_data_create_from_pattern_16(const pcre2_code_16 *, pcre2_general_context_16 *); extern __attribute__ ((visibility ("default"))) int pcre2_dfa_match_16(const pcre2_code_16 *, PCRE2_SPTR16, size_t, size_t, uint32_t, pcre2_match_data_16 *, pcre2_match_context_16 *, int *, size_t); extern __attribute__ ((visibility ("default"))) int pcre2_match_16(const pcre2_code_16 *, PCRE2_SPTR16, size_t, size_t, uint32_t, pcre2_match_data_16 *, pcre2_match_context_16 *); extern __attribute__ ((visibility ("default"))) void pcre2_match_data_free_16(pcre2_match_data_16 *); extern __attribute__ ((visibility ("default"))) PCRE2_SPTR16 pcre2_get_mark_16(pcre2_match_data_16 *); extern __attribute__ ((visibility ("default"))) uint32_t pcre2_get_ovector_count_16(pcre2_match_data_16 *); extern __attribute__ ((visibility ("default"))) size_t *pcre2_get_ovector_pointer_16(pcre2_match_data_16 *); extern __attribute__ ((visibility ("default"))) size_t pcre2_get_startchar_16(pcre2_match_data_16 *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_copy_byname_16(pcre2_match_data_16 *, PCRE2_SPTR16, PCRE2_UCHAR16 *, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_copy_bynumber_16(pcre2_match_data_16 *, uint32_t, PCRE2_UCHAR16 *, size_t *); extern __attribute__ ((visibility ("default"))) void pcre2_substring_free_16(PCRE2_UCHAR16 *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_get_byname_16(pcre2_match_data_16 *, PCRE2_SPTR16, PCRE2_UCHAR16 **, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_get_bynumber_16(pcre2_match_data_16 *, uint32_t, PCRE2_UCHAR16 **, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_length_byname_16(pcre2_match_data_16 *, PCRE2_SPTR16, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_length_bynumber_16(pcre2_match_data_16 *, uint32_t, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_nametable_scan_16(const pcre2_code_16 *, PCRE2_SPTR16, PCRE2_SPTR16 *, PCRE2_SPTR16 *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_number_from_name_16(const pcre2_code_16 *, PCRE2_SPTR16); extern __attribute__ ((visibility ("default"))) void pcre2_substring_list_free_16(PCRE2_SPTR16 *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_list_get_16(pcre2_match_data_16 *, PCRE2_UCHAR16 ***, size_t **); extern __attribute__ ((visibility ("default"))) int32_t pcre2_serialize_encode_16(const pcre2_code_16 **, int32_t, uint8_t **, size_t *, pcre2_general_context_16 *); extern __attribute__ ((visibility ("default"))) int32_t pcre2_serialize_decode_16(pcre2_code_16 **, int32_t, const uint8_t *, pcre2_general_context_16 *); extern __attribute__ ((visibility ("default"))) int32_t pcre2_serialize_get_number_of_codes_16(const uint8_t *); extern __attribute__ ((visibility ("default"))) void pcre2_serialize_free_16(uint8_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substitute_16(const pcre2_code_16 *, PCRE2_SPTR16, size_t, size_t, uint32_t, pcre2_match_data_16 *, pcre2_match_context_16 *, PCRE2_SPTR16, size_t, PCRE2_UCHAR16 *, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_jit_compile_16(pcre2_code_16 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_jit_match_16(const pcre2_code_16 *, PCRE2_SPTR16, size_t, size_t, uint32_t, pcre2_match_data_16 *, pcre2_match_context_16 *); extern __attribute__ ((visibility ("default"))) void pcre2_jit_free_unused_memory_16(pcre2_general_context_16 *); extern __attribute__ ((visibility ("default"))) pcre2_jit_stack_16 *pcre2_jit_stack_create_16(size_t, size_t, pcre2_general_context_16 *); extern __attribute__ ((visibility ("default"))) void pcre2_jit_stack_assign_16(pcre2_match_context_16 *, pcre2_jit_callback_16, void *); extern __attribute__ ((visibility ("default"))) void pcre2_jit_stack_free_16(pcre2_jit_stack_16 *); extern __attribute__ ((visibility ("default"))) int pcre2_get_error_message_16(int, PCRE2_UCHAR16 *, size_t); extern __attribute__ ((visibility ("default"))) const uint8_t *pcre2_maketables_16(pcre2_general_context_16 *);



struct pcre2_real_general_context_32; typedef struct pcre2_real_general_context_32 pcre2_general_context_32; struct pcre2_real_compile_context_32; typedef struct pcre2_real_compile_context_32 pcre2_compile_context_32; struct pcre2_real_match_context_32; typedef struct pcre2_real_match_context_32 pcre2_match_context_32; struct pcre2_real_convert_context_32; typedef struct pcre2_real_convert_context_32 pcre2_convert_context_32; struct pcre2_real_code_32; typedef struct pcre2_real_code_32 pcre2_code_32; struct pcre2_real_match_data_32; typedef struct pcre2_real_match_data_32 pcre2_match_data_32; struct pcre2_real_jit_stack_32; typedef struct pcre2_real_jit_stack_32 pcre2_jit_stack_32; typedef pcre2_jit_stack_32 *(*pcre2_jit_callback_32)(int *data_flow, void *); typedef struct pcre2_callout_block_32 { uint32_t version; uint32_t callout_number; uint32_t capture_top; uint32_t capture_last; size_t *offset_vector; PCRE2_SPTR32 mark; PCRE2_SPTR32 subject; size_t subject_length; size_t start_match; size_t current_position; size_t pattern_position; size_t next_item_length; size_t callout_string_offset; size_t callout_string_length; PCRE2_SPTR32 callout_string; uint32_t callout_flags; } pcre2_callout_block_32; typedef struct pcre2_callout_enumerate_block_32 { uint32_t version; size_t pattern_position; size_t next_item_length; uint32_t callout_number; size_t callout_string_offset; size_t callout_string_length; PCRE2_SPTR32 callout_string; } pcre2_callout_enumerate_block_32; typedef struct pcre2_substitute_callout_block_32 { uint32_t version; size_t input_offsets[2]; size_t output_offsets[2]; } pcre2_substitute_callout_block_32; extern __attribute__ ((visibility ("default"))) int pcre2_config_32(uint32_t, void *); extern __attribute__ ((visibility ("default"))) pcre2_general_context_32 *pcre2_general_context_copy_32(pcre2_general_context_32 *); extern __attribute__ ((visibility ("default"))) pcre2_general_context_32 *pcre2_general_context_create_32(void *(*)(int *data_flow, size_t, void *), void (*)(int *data_flow, void *, void *), void *); extern __attribute__ ((visibility ("default"))) void pcre2_general_context_free_32(pcre2_general_context_32 *); extern __attribute__ ((visibility ("default"))) pcre2_compile_context_32 *pcre2_compile_context_copy_32(pcre2_compile_context_32 *); extern __attribute__ ((visibility ("default"))) pcre2_compile_context_32 *pcre2_compile_context_create_32(pcre2_general_context_32 *);extern __attribute__ ((visibility ("default"))) void pcre2_compile_context_free_32(pcre2_compile_context_32 *); extern __attribute__ ((visibility ("default"))) int pcre2_set_bsr_32(pcre2_compile_context_32 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_character_tables_32(pcre2_compile_context_32 *, const unsigned char *); extern __attribute__ ((visibility ("default"))) int pcre2_set_compile_extra_options_32(pcre2_compile_context_32 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_max_pattern_length_32(pcre2_compile_context_32 *, size_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_newline_32(pcre2_compile_context_32 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_parens_nest_limit_32(pcre2_compile_context_32 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_compile_recursion_guard_32(pcre2_compile_context_32 *, int (*)(int *data_flow, uint32_t, void *), void *); extern __attribute__ ((visibility ("default"))) pcre2_convert_context_32 *pcre2_convert_context_copy_32(pcre2_convert_context_32 *); extern __attribute__ ((visibility ("default"))) pcre2_convert_context_32 *pcre2_convert_context_create_32(pcre2_general_context_32 *); extern __attribute__ ((visibility ("default"))) void pcre2_convert_context_free_32(pcre2_convert_context_32 *); extern __attribute__ ((visibility ("default"))) int pcre2_set_glob_escape_32(pcre2_convert_context_32 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_glob_separator_32(pcre2_convert_context_32 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_pattern_convert_32(PCRE2_SPTR32, size_t, uint32_t, PCRE2_UCHAR32 **, size_t *, pcre2_convert_context_32 *); extern __attribute__ ((visibility ("default"))) void pcre2_converted_pattern_free_32(PCRE2_UCHAR32 *); extern __attribute__ ((visibility ("default"))) pcre2_match_context_32 *pcre2_match_context_copy_32(pcre2_match_context_32 *); extern __attribute__ ((visibility ("default"))) pcre2_match_context_32 *pcre2_match_context_create_32(pcre2_general_context_32 *); extern __attribute__ ((visibility ("default"))) void pcre2_match_context_free_32(pcre2_match_context_32 *); extern __attribute__ ((visibility ("default"))) int pcre2_set_callout_32(pcre2_match_context_32 *, int (*)(int *data_flow, pcre2_callout_block_32 *, void *), void *); extern __attribute__ ((visibility ("default"))) int pcre2_set_substitute_callout_32(pcre2_match_context_32 *, void (*)(int *data_flow, pcre2_substitute_callout_block_32 *, void *), void *); extern __attribute__ ((visibility ("default"))) int pcre2_set_depth_limit_32(pcre2_match_context_32 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_heap_limit_32(pcre2_match_context_32 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_match_limit_32(pcre2_match_context_32 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_offset_limit_32(pcre2_match_context_32 *, size_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_recursion_limit_32(pcre2_match_context_32 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_set_recursion_memory_management_32(pcre2_match_context_32 *, void *(*)(int *data_flow, size_t, void *), void (*)(int *data_flow, void *, void *), void *); extern __attribute__ ((visibility ("default"))) pcre2_code_32 *pcre2_compile_32(PCRE2_SPTR32, size_t, uint32_t, int *, size_t *, pcre2_compile_context_32 *); extern __attribute__ ((visibility ("default"))) void pcre2_code_free_32(pcre2_code_32 *); extern __attribute__ ((visibility ("default"))) pcre2_code_32 *pcre2_code_copy_32(const pcre2_code_32 *); extern __attribute__ ((visibility ("default"))) pcre2_code_32 *pcre2_code_copy_with_tables_32(const pcre2_code_32 *); extern __attribute__ ((visibility ("default"))) int pcre2_pattern_info_32(const pcre2_code_32 *, uint32_t, void *); extern __attribute__ ((visibility ("default"))) int pcre2_callout_enumerate_32(const pcre2_code_32 *, int (*)(int *data_flow, pcre2_callout_enumerate_block_32 *, void *), void *); extern __attribute__ ((visibility ("default"))) pcre2_match_data_32 *pcre2_match_data_create_32(uint32_t, pcre2_general_context_32 *); extern __attribute__ ((visibility ("default"))) pcre2_match_data_32 *pcre2_match_data_create_from_pattern_32(const pcre2_code_32 *, pcre2_general_context_32 *); extern __attribute__ ((visibility ("default"))) int pcre2_dfa_match_32(const pcre2_code_32 *, PCRE2_SPTR32, size_t, size_t, uint32_t, pcre2_match_data_32 *, pcre2_match_context_32 *, int *, size_t); extern __attribute__ ((visibility ("default"))) int pcre2_match_32(const pcre2_code_32 *, PCRE2_SPTR32, size_t, size_t, uint32_t, pcre2_match_data_32 *, pcre2_match_context_32 *); extern __attribute__ ((visibility ("default"))) void pcre2_match_data_free_32(pcre2_match_data_32 *); extern __attribute__ ((visibility ("default"))) PCRE2_SPTR32 pcre2_get_mark_32(pcre2_match_data_32 *); extern __attribute__ ((visibility ("default"))) uint32_t pcre2_get_ovector_count_32(pcre2_match_data_32 *); extern __attribute__ ((visibility ("default"))) size_t *pcre2_get_ovector_pointer_32(pcre2_match_data_32 *); extern __attribute__ ((visibility ("default"))) size_t pcre2_get_startchar_32(pcre2_match_data_32 *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_copy_byname_32(pcre2_match_data_32 *, PCRE2_SPTR32, PCRE2_UCHAR32 *, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_copy_bynumber_32(pcre2_match_data_32 *, uint32_t, PCRE2_UCHAR32 *, size_t *); extern __attribute__ ((visibility ("default"))) void pcre2_substring_free_32(PCRE2_UCHAR32 *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_get_byname_32(pcre2_match_data_32 *, PCRE2_SPTR32, PCRE2_UCHAR32 **, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_get_bynumber_32(pcre2_match_data_32 *, uint32_t, PCRE2_UCHAR32 **, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_length_byname_32(pcre2_match_data_32 *, PCRE2_SPTR32, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_length_bynumber_32(pcre2_match_data_32 *, uint32_t, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_nametable_scan_32(const pcre2_code_32 *, PCRE2_SPTR32, PCRE2_SPTR32 *, PCRE2_SPTR32 *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_number_from_name_32(const pcre2_code_32 *, PCRE2_SPTR32); extern __attribute__ ((visibility ("default"))) void pcre2_substring_list_free_32(PCRE2_SPTR32 *); extern __attribute__ ((visibility ("default"))) int pcre2_substring_list_get_32(pcre2_match_data_32 *, PCRE2_UCHAR32 ***, size_t **); extern __attribute__ ((visibility ("default"))) int32_t pcre2_serialize_encode_32(const pcre2_code_32 **, int32_t, uint8_t **, size_t *, pcre2_general_context_32 *); extern __attribute__ ((visibility ("default"))) int32_t pcre2_serialize_decode_32(pcre2_code_32 **, int32_t, const uint8_t *, pcre2_general_context_32 *); extern __attribute__ ((visibility ("default"))) int32_t pcre2_serialize_get_number_of_codes_32(const uint8_t *); extern __attribute__ ((visibility ("default"))) void pcre2_serialize_free_32(uint8_t *); extern __attribute__ ((visibility ("default"))) int pcre2_substitute_32(const pcre2_code_32 *, PCRE2_SPTR32, size_t, size_t, uint32_t, pcre2_match_data_32 *, pcre2_match_context_32 *, PCRE2_SPTR32, size_t, PCRE2_UCHAR32 *, size_t *); extern __attribute__ ((visibility ("default"))) int pcre2_jit_compile_32(pcre2_code_32 *, uint32_t); extern __attribute__ ((visibility ("default"))) int pcre2_jit_match_32(const pcre2_code_32 *, PCRE2_SPTR32, size_t, size_t, uint32_t, pcre2_match_data_32 *, pcre2_match_context_32 *); extern __attribute__ ((visibility ("default"))) void pcre2_jit_free_unused_memory_32(pcre2_general_context_32 *); extern __attribute__ ((visibility ("default"))) pcre2_jit_stack_32 *pcre2_jit_stack_create_32(size_t, size_t, pcre2_general_context_32 *); extern __attribute__ ((visibility ("default"))) void pcre2_jit_stack_assign_32(pcre2_match_context_32 *, pcre2_jit_callback_32, void *); extern __attribute__ ((visibility ("default"))) void pcre2_jit_stack_free_32(pcre2_jit_stack_32 *); extern __attribute__ ((visibility ("default"))) int pcre2_get_error_message_32(int, PCRE2_UCHAR32 *, size_t); extern __attribute__ ((visibility ("default"))) const uint8_t *pcre2_maketables_32(pcre2_general_context_32 *);
enum {
  ucp_C,
  ucp_L,
  ucp_M,
  ucp_N,
  ucp_P,
  ucp_S,
  ucp_Z
};



enum {
  ucp_Cc,
  ucp_Cf,
  ucp_Cn,
  ucp_Co,
  ucp_Cs,
  ucp_Ll,
  ucp_Lm,
  ucp_Lo,
  ucp_Lt,
  ucp_Lu,
  ucp_Mc,
  ucp_Me,
  ucp_Mn,
  ucp_Nd,
  ucp_Nl,
  ucp_No,
  ucp_Pc,
  ucp_Pd,
  ucp_Pe,
  ucp_Pf,
  ucp_Pi,
  ucp_Po,
  ucp_Ps,
  ucp_Sc,
  ucp_Sk,
  ucp_Sm,
  ucp_So,
  ucp_Zl,
  ucp_Zp,
  ucp_Zs
};




enum {
  ucp_gbCR,
  ucp_gbLF,
  ucp_gbControl,
  ucp_gbExtend,
  ucp_gbPrepend,
  ucp_gbSpacingMark,
  ucp_gbL,
  ucp_gbV,
  ucp_gbT,
  ucp_gbLV,
  ucp_gbLVT,
  ucp_gbRegionalIndicator,
  ucp_gbOther,
  ucp_gbZWJ,
  ucp_gbExtended_Pictographic
};



enum {
  ucp_Unknown,
  ucp_Arabic,
  ucp_Armenian,
  ucp_Bengali,
  ucp_Bopomofo,
  ucp_Braille,
  ucp_Buginese,
  ucp_Buhid,
  ucp_Canadian_Aboriginal,
  ucp_Cherokee,
  ucp_Common,
  ucp_Coptic,
  ucp_Cypriot,
  ucp_Cyrillic,
  ucp_Deseret,
  ucp_Devanagari,
  ucp_Ethiopic,
  ucp_Georgian,
  ucp_Glagolitic,
  ucp_Gothic,
  ucp_Greek,
  ucp_Gujarati,
  ucp_Gurmukhi,
  ucp_Han,
  ucp_Hangul,
  ucp_Hanunoo,
  ucp_Hebrew,
  ucp_Hiragana,
  ucp_Inherited,
  ucp_Kannada,
  ucp_Katakana,
  ucp_Kharoshthi,
  ucp_Khmer,
  ucp_Lao,
  ucp_Latin,
  ucp_Limbu,
  ucp_Linear_B,
  ucp_Malayalam,
  ucp_Mongolian,
  ucp_Myanmar,
  ucp_New_Tai_Lue,
  ucp_Ogham,
  ucp_Old_Italic,
  ucp_Old_Persian,
  ucp_Oriya,
  ucp_Osmanya,
  ucp_Runic,
  ucp_Shavian,
  ucp_Sinhala,
  ucp_Syloti_Nagri,
  ucp_Syriac,
  ucp_Tagalog,
  ucp_Tagbanwa,
  ucp_Tai_Le,
  ucp_Tamil,
  ucp_Telugu,
  ucp_Thaana,
  ucp_Thai,
  ucp_Tibetan,
  ucp_Tifinagh,
  ucp_Ugaritic,
  ucp_Yi,

  ucp_Balinese,
  ucp_Cuneiform,
  ucp_Nko,
  ucp_Phags_Pa,
  ucp_Phoenician,

  ucp_Carian,
  ucp_Cham,
  ucp_Kayah_Li,
  ucp_Lepcha,
  ucp_Lycian,
  ucp_Lydian,
  ucp_Ol_Chiki,
  ucp_Rejang,
  ucp_Saurashtra,
  ucp_Sundanese,
  ucp_Vai,

  ucp_Avestan,
  ucp_Bamum,
  ucp_Egyptian_Hieroglyphs,
  ucp_Imperial_Aramaic,
  ucp_Inscriptional_Pahlavi,
  ucp_Inscriptional_Parthian,
  ucp_Javanese,
  ucp_Kaithi,
  ucp_Lisu,
  ucp_Meetei_Mayek,
  ucp_Old_South_Arabian,
  ucp_Old_Turkic,
  ucp_Samaritan,
  ucp_Tai_Tham,
  ucp_Tai_Viet,

  ucp_Batak,
  ucp_Brahmi,
  ucp_Mandaic,

  ucp_Chakma,
  ucp_Meroitic_Cursive,
  ucp_Meroitic_Hieroglyphs,
  ucp_Miao,
  ucp_Sharada,
  ucp_Sora_Sompeng,
  ucp_Takri,

  ucp_Bassa_Vah,
  ucp_Caucasian_Albanian,
  ucp_Duployan,
  ucp_Elbasan,
  ucp_Grantha,
  ucp_Khojki,
  ucp_Khudawadi,
  ucp_Linear_A,
  ucp_Mahajani,
  ucp_Manichaean,
  ucp_Mende_Kikakui,
  ucp_Modi,
  ucp_Mro,
  ucp_Nabataean,
  ucp_Old_North_Arabian,
  ucp_Old_Permic,
  ucp_Pahawh_Hmong,
  ucp_Palmyrene,
  ucp_Psalter_Pahlavi,
  ucp_Pau_Cin_Hau,
  ucp_Siddham,
  ucp_Tirhuta,
  ucp_Warang_Citi,

  ucp_Ahom,
  ucp_Anatolian_Hieroglyphs,
  ucp_Hatran,
  ucp_Multani,
  ucp_Old_Hungarian,
  ucp_SignWriting,

  ucp_Adlam,
  ucp_Bhaiksuki,
  ucp_Marchen,
  ucp_Newa,
  ucp_Osage,
  ucp_Tangut,
  ucp_Masaram_Gondi,
  ucp_Nushu,
  ucp_Soyombo,
  ucp_Zanabazar_Square,

  ucp_Dogra,
  ucp_Gunjala_Gondi,
  ucp_Hanifi_Rohingya,
  ucp_Makasar,
  ucp_Medefaidrin,
  ucp_Old_Sogdian,
  ucp_Sogdian
};
enum { PCRE2_MATCHEDBY_INTERPRETER,
       PCRE2_MATCHEDBY_DFA_INTERPRETER,
       PCRE2_MATCHEDBY_JIT };
enum { ESC_A = 1, ESC_G, ESC_K, ESC_B, ESC_b, ESC_D, ESC_d, ESC_S, ESC_s,
       ESC_W, ESC_w, ESC_N, ESC_dum, ESC_C, ESC_P, ESC_p, ESC_R, ESC_H,
       ESC_h, ESC_V, ESC_v, ESC_X, ESC_Z, ESC_z,
       ESC_E, ESC_Q, ESC_g, ESC_k };
enum {
  OP_END,



  OP_SOD,
  OP_SOM,
  OP_SET_SOM,
  OP_NOT_WORD_BOUNDARY,
  OP_WORD_BOUNDARY,
  OP_NOT_DIGIT,
  OP_DIGIT,
  OP_NOT_WHITESPACE,
  OP_WHITESPACE,
  OP_NOT_WORDCHAR,
  OP_WORDCHAR,

  OP_ANY,
  OP_ALLANY,
  OP_ANYBYTE,
  OP_NOTPROP,
  OP_PROP,
  OP_ANYNL,
  OP_NOT_HSPACE,
  OP_HSPACE,
  OP_NOT_VSPACE,
  OP_VSPACE,
  OP_EXTUNI,
  OP_EODN,
  OP_EOD,



  OP_DOLL,
  OP_DOLLM,
  OP_CIRC,
  OP_CIRCM,




  OP_CHAR,
  OP_CHARI,
  OP_NOT,
  OP_NOTI,






  OP_STAR,
  OP_MINSTAR,
  OP_PLUS,
  OP_MINPLUS,
  OP_QUERY,
  OP_MINQUERY,

  OP_UPTO,
  OP_MINUPTO,
  OP_EXACT,

  OP_POSSTAR,
  OP_POSPLUS,
  OP_POSQUERY,
  OP_POSUPTO,



  OP_STARI,
  OP_MINSTARI,
  OP_PLUSI,
  OP_MINPLUSI,
  OP_QUERYI,
  OP_MINQUERYI,

  OP_UPTOI,
  OP_MINUPTOI,
  OP_EXACTI,

  OP_POSSTARI,
  OP_POSPLUSI,
  OP_POSQUERYI,
  OP_POSUPTOI,




  OP_NOTSTAR,
  OP_NOTMINSTAR,
  OP_NOTPLUS,
  OP_NOTMINPLUS,
  OP_NOTQUERY,
  OP_NOTMINQUERY,

  OP_NOTUPTO,
  OP_NOTMINUPTO,
  OP_NOTEXACT,

  OP_NOTPOSSTAR,
  OP_NOTPOSPLUS,
  OP_NOTPOSQUERY,
  OP_NOTPOSUPTO,



  OP_NOTSTARI,
  OP_NOTMINSTARI,
  OP_NOTPLUSI,
  OP_NOTMINPLUSI,
  OP_NOTQUERYI,
  OP_NOTMINQUERYI,

  OP_NOTUPTOI,
  OP_NOTMINUPTOI,
  OP_NOTEXACTI,

  OP_NOTPOSSTARI,
  OP_NOTPOSPLUSI,
  OP_NOTPOSQUERYI,
  OP_NOTPOSUPTOI,



  OP_TYPESTAR,
  OP_TYPEMINSTAR,
  OP_TYPEPLUS,
  OP_TYPEMINPLUS,
  OP_TYPEQUERY,
  OP_TYPEMINQUERY,

  OP_TYPEUPTO,
  OP_TYPEMINUPTO,
  OP_TYPEEXACT,

  OP_TYPEPOSSTAR,
  OP_TYPEPOSPLUS,
  OP_TYPEPOSQUERY,
  OP_TYPEPOSUPTO,




  OP_CRSTAR,
  OP_CRMINSTAR,
  OP_CRPLUS,
  OP_CRMINPLUS,
  OP_CRQUERY,
  OP_CRMINQUERY,

  OP_CRRANGE,
  OP_CRMINRANGE,

  OP_CRPOSSTAR,
  OP_CRPOSPLUS,
  OP_CRPOSQUERY,
  OP_CRPOSRANGE,



  OP_CLASS,
  OP_NCLASS,


  OP_XCLASS,

  OP_REF,
  OP_REFI,
  OP_DNREF,
  OP_DNREFI,
  OP_RECURSE,
  OP_CALLOUT,
  OP_CALLOUT_STR,

  OP_ALT,
  OP_KET,
  OP_KETRMAX,
  OP_KETRMIN,
  OP_KETRPOS,




  OP_REVERSE,
  OP_ASSERT,
  OP_ASSERT_NOT,
  OP_ASSERTBACK,
  OP_ASSERTBACK_NOT,






  OP_ONCE,
  OP_SCRIPT_RUN,
  OP_BRA,
  OP_BRAPOS,
  OP_CBRA,
  OP_CBRAPOS,
  OP_COND,




  OP_SBRA,
  OP_SBRAPOS,
  OP_SCBRA,
  OP_SCBRAPOS,
  OP_SCOND,



  OP_CREF,
  OP_DNCREF,
  OP_RREF,
  OP_DNRREF,
  OP_FALSE,
  OP_TRUE,

  OP_BRAZERO,
  OP_BRAMINZERO,
  OP_BRAPOSZERO,



  OP_MARK,
  OP_PRUNE,
  OP_PRUNE_ARG,
  OP_SKIP,
  OP_SKIP_ARG,
  OP_THEN,
  OP_THEN_ARG,
  OP_COMMIT,
  OP_COMMIT_ARG,





  OP_FAIL,
  OP_ACCEPT,
  OP_ASSERT_ACCEPT,
  OP_CLOSE,



  OP_SKIPZERO,





  OP_DEFINE,





  OP_TABLE_LENGTH

};
typedef struct pcre2_memctl {
  void * (*malloc)(int *data_flow, size_t, void *);
  void (*free)(int *data_flow, void *, void *);
  void *memory_data;
} pcre2_memctl;






typedef struct open_capitem {
  struct open_capitem *next;
  uint16_t number;
  uint16_t flag;
  uint16_t assert_depth;
} open_capitem;






typedef struct {
  uint16_t name_offset;
  uint16_t type;
  uint16_t value;
} ucp_type_table;



typedef struct {
  uint8_t script;
  uint8_t chartype;
  uint8_t gbprop;
  uint8_t caseset;
  int32_t other_case;
} ucd_record;
typedef struct pcre2_serialized_data {
  uint32_t magic;
  uint32_t version;
  uint32_t config;
  int32_t number_of_codes;
} pcre2_serialized_data;
extern const int _pcre2_utf8_table1[];
extern const int _pcre2_utf8_table1_size;
extern const int _pcre2_utf8_table2[];
extern const int _pcre2_utf8_table3[];
extern const uint8_t _pcre2_utf8_table4[];
extern const uint8_t _pcre2_OP_lengths_8[];
extern const uint32_t _pcre2_callout_end_delims_8[];
extern const uint32_t _pcre2_callout_start_delims_8[];
extern const pcre2_compile_context_8 _pcre2_default_compile_context_8;
extern const pcre2_convert_context_8 _pcre2_default_convert_context_8;
extern const pcre2_match_context_8 _pcre2_default_match_context_8;
extern const uint8_t _pcre2_default_tables_8[];
extern const uint32_t _pcre2_hspace_list_8[];
extern const uint32_t _pcre2_vspace_list_8[];
extern const uint32_t _pcre2_ucd_caseless_sets_8[];
extern const uint32_t _pcre2_ucd_digit_sets_8[];
extern const ucd_record _pcre2_ucd_records_8[];



extern const uint16_t _pcre2_ucd_stage1_8[];
extern const uint16_t _pcre2_ucd_stage2_8[];
extern const uint32_t _pcre2_ucp_gbtable_8[];
extern const uint32_t _pcre2_ucp_gentype_8[];



extern const char *_pcre2_unicode_version_8;
extern const ucp_type_table _pcre2_utt_8[];
extern const char _pcre2_utt_names_8[];
extern const size_t _pcre2_utt_size_8;
typedef struct pcre2_real_general_context_8 {
  pcre2_memctl memctl;
} pcre2_real_general_context_8;



typedef struct pcre2_real_compile_context_8 {
  pcre2_memctl memctl;
  int (*stack_guard)(int *data_flow, uint32_t, void *);
  void *stack_guard_data;
  const uint8_t *tables;
  size_t max_pattern_length;
  uint16_t bsr_convention;
  uint16_t newline_convention;
  uint32_t parens_nest_limit;
  uint32_t extra_options;
} pcre2_real_compile_context_8;



typedef struct pcre2_real_match_context_8 {
  pcre2_memctl memctl;




  int (*callout)(int *data_flow, pcre2_callout_block_8 *, void *);
  void *callout_data;
  void (*substitute_callout)(int *data_flow, pcre2_substitute_callout_block_8 *, void *);
  void *substitute_callout_data;
  size_t offset_limit;
  uint32_t heap_limit;
  uint32_t match_limit;
  uint32_t depth_limit;
} pcre2_real_match_context_8;



typedef struct pcre2_real_convert_context_8 {
  pcre2_memctl memctl;
  uint32_t glob_separator;
  uint32_t glob_escape;
} pcre2_real_convert_context_8;
typedef struct pcre2_real_code_8 {
  pcre2_memctl memctl;
  const uint8_t *tables;
  void *executable_jit;
  uint8_t start_bitmap[32];
  size_t blocksize;
  uint32_t magic_number;
  uint32_t compile_options;
  uint32_t overall_options;
  uint32_t extra_options;
  uint32_t flags;
  uint32_t limit_heap;
  uint32_t limit_match;
  uint32_t limit_depth;
  uint32_t first_codeunit;
  uint32_t last_codeunit;
  uint16_t bsr_convention;
  uint16_t newline_convention;
  uint16_t max_lookbehind;
  uint16_t minlength;
  uint16_t top_bracket;
  uint16_t top_backref;
  uint16_t name_entry_size;
  uint16_t name_count;
} pcre2_real_code_8;
typedef struct pcre2_real_match_data_8 {
  pcre2_memctl memctl;
  const pcre2_real_code_8 *code;
  PCRE2_SPTR8 subject;
  PCRE2_SPTR8 mark;
  size_t leftchar;
  size_t rightchar;
  size_t startchar;
  uint16_t matchedby;
  uint16_t oveccount;
  int rc;
  size_t ovector[131072];
} pcre2_real_match_data_8;
typedef struct recurse_check {
  struct recurse_check *prev;
  PCRE2_SPTR8 group;
} recurse_check;

typedef struct parsed_recurse_check {
  struct parsed_recurse_check *prev;
  uint32_t *groupptr;
} parsed_recurse_check;



typedef struct recurse_cache {
  PCRE2_SPTR8 group;
  int groupnumber;
} recurse_cache;




typedef struct branch_chain_8 {
  struct branch_chain_8 *outer;
  PCRE2_UCHAR8 *current_branch;
} branch_chain_8;




typedef struct named_group_8 {
  PCRE2_SPTR8 name;
  uint32_t number;
  uint16_t length;
  uint16_t isdup;
} named_group_8;




typedef struct compile_block_8 {
  pcre2_real_compile_context_8 *cx;
  const uint8_t *lcc;
  const uint8_t *fcc;
  const uint8_t *cbits;
  const uint8_t *ctypes;
  PCRE2_SPTR8 start_workspace;
  PCRE2_SPTR8 start_code;
  PCRE2_SPTR8 start_pattern;
  PCRE2_SPTR8 end_pattern;
  PCRE2_UCHAR8 *name_table;
  size_t workspace_size;
  size_t small_ref_offset[10];
  size_t erroroffset;
  uint16_t names_found;
  uint16_t name_entry_size;
  uint16_t parens_depth;
  uint16_t assert_depth;
  open_capitem *open_caps;
  named_group_8 *named_groups;
  uint32_t named_group_list_size;
  uint32_t external_options;
  uint32_t external_flags;
  uint32_t bracount;
  uint32_t lastcapture;
  uint32_t *parsed_pattern;
  uint32_t *parsed_pattern_end;
  uint32_t *groupinfo;
  uint32_t top_backref;
  uint32_t backref_map;
  uint32_t nltype;
  uint32_t nllen;
  uint32_t class_range_start;
  uint32_t class_range_end;
  PCRE2_UCHAR8 nl[4];
  int max_lookbehind;
  int req_varyopt;
  BOOL had_accept;
  BOOL had_pruneorskip;
  BOOL had_recurse;
  BOOL dupnames;
} compile_block_8;




typedef struct pcre2_real_jit_stack_8 {
  pcre2_memctl memctl;
  void* stack;
} pcre2_real_jit_stack_8;




typedef struct dfa_recursion_info {
  struct dfa_recursion_info *prevrec;
  PCRE2_SPTR8 subject_position;
  uint32_t group_num;
} dfa_recursion_info;
typedef struct heapframe {




  PCRE2_SPTR8 ecode;
  PCRE2_SPTR8 temp_sptr[2];
  size_t length;
  size_t back_frame;
  size_t temp_size;
  uint32_t rdepth;
  uint32_t group_frame_type;
  uint32_t temp_32[4];
  uint8_t return_id;
  uint8_t op;
  PCRE2_UCHAR8 occu[6];
  PCRE2_SPTR8 eptr;
  PCRE2_SPTR8 start_match;
  PCRE2_SPTR8 mark;
  uint32_t current_recurse;
  uint32_t capture_last;
  size_t last_group_offset;
  size_t offset_top;
  size_t ovector[131072];
} heapframe;




typedef char check_heapframe_size[
  ((sizeof(heapframe) % sizeof(size_t)) == 0)? (+1):(-1)];




typedef struct match_block_8 {
  pcre2_memctl memctl;
  size_t frame_vector_size;
  heapframe *match_frames;
  heapframe *match_frames_top;
  heapframe *stack_frames;
  size_t heap_limit;
  uint32_t match_limit;
  uint32_t match_limit_depth;
  uint32_t match_call_count;
  BOOL hitend;
  BOOL hasthen;
  const uint8_t *lcc;
  const uint8_t *fcc;
  const uint8_t *ctypes;
  size_t start_offset;
  size_t end_offset_top;
  uint16_t partial;
  uint16_t bsr_convention;
  uint16_t name_count;
  uint16_t name_entry_size;
  PCRE2_SPTR8 name_table;
  PCRE2_SPTR8 start_code;
  PCRE2_SPTR8 start_subject;
  PCRE2_SPTR8 end_subject;
  PCRE2_SPTR8 end_match_ptr;
  PCRE2_SPTR8 start_used_ptr;
  PCRE2_SPTR8 last_used_ptr;
  PCRE2_SPTR8 mark;
  PCRE2_SPTR8 nomatch_mark;
  PCRE2_SPTR8 verb_ecode_ptr;
  PCRE2_SPTR8 verb_skip_ptr;
  uint32_t verb_current_recurse;
  uint32_t moptions;
  uint32_t poptions;
  uint32_t skip_arg_count;
  uint32_t ignore_skip_arg;
  uint32_t nltype;
  uint32_t nllen;
  PCRE2_UCHAR8 nl[4];
  pcre2_callout_block_8 *cb;
  void *callout_data;
  int (*callout)(int *data_flow, pcre2_callout_block_8 *,void *);
} match_block_8;




typedef struct dfa_match_block_8 {
  pcre2_memctl memctl;
  PCRE2_SPTR8 start_code;
  PCRE2_SPTR8 start_subject ;
  PCRE2_SPTR8 end_subject;
  PCRE2_SPTR8 start_used_ptr;
  PCRE2_SPTR8 last_used_ptr;
  const uint8_t *tables;
  size_t start_offset;
  size_t heap_limit;
  size_t heap_used;
  uint32_t match_limit;
  uint32_t match_limit_depth;
  uint32_t match_call_count;
  uint32_t moptions;
  uint32_t poptions;
  uint32_t nltype;
  uint32_t nllen;
  PCRE2_UCHAR8 nl[4];
  uint16_t bsr_convention;
  pcre2_callout_block_8 *cb;
  void *callout_data;
  int (*callout)(int *data_flow, pcre2_callout_block_8 *,void *);
  dfa_recursion_info *recursive;
} dfa_match_block_8;
extern int _pcre2_auto_possessify_8(int *data_flow, PCRE2_UCHAR8 *, BOOL,
                      const compile_block_8 *);
extern int _pcre2_check_escape_8(int *data_flow, PCRE2_SPTR8 *, PCRE2_SPTR8, uint32_t *,
                      int *, uint32_t, BOOL, compile_block_8 *);
extern PCRE2_SPTR8 _pcre2_extuni_8(int *data_flow, uint32_t, PCRE2_SPTR8, PCRE2_SPTR8, PCRE2_SPTR8,
                      BOOL, int *);
extern PCRE2_SPTR8 _pcre2_find_bracket_8(int *data_flow, PCRE2_SPTR8, BOOL, int);
extern BOOL _pcre2_is_newline_8(int *data_flow, PCRE2_SPTR8, uint32_t, PCRE2_SPTR8,
                      uint32_t *, BOOL);
extern void _pcre2_jit_free_rodata_8(int *data_flow, void *, void *);
extern void _pcre2_jit_free_8(int *data_flow, void *, pcre2_memctl *);
extern size_t _pcre2_jit_get_size_8(int *data_flow, void *);
const char * _pcre2_jit_get_target_8(int *data_flowvoid);
extern void * _pcre2_memctl_malloc_8(int *data_flow, size_t, pcre2_memctl *);
extern unsigned int _pcre2_ord2utf_8(int *data_flow, uint32_t, PCRE2_UCHAR8 *);
extern BOOL _pcre2_script_run_8(int *data_flow, PCRE2_SPTR8, PCRE2_SPTR8, BOOL);
extern int _pcre2_strcmp_8(int *data_flow, PCRE2_SPTR8, PCRE2_SPTR8);
extern int _pcre2_strcmp_c8_8(int *data_flow, PCRE2_SPTR8, const char *);
extern size_t _pcre2_strcpy_c8_8(int *data_flow, PCRE2_UCHAR8 *, const char *);
extern size_t _pcre2_strlen_8(int *data_flow, PCRE2_SPTR8);
extern int _pcre2_strncmp_8(int *data_flow, PCRE2_SPTR8, PCRE2_SPTR8, size_t);
extern int _pcre2_strncmp_c8_8(int *data_flow, PCRE2_SPTR8, const char *, size_t);
extern int _pcre2_study_8(int *data_flow, pcre2_real_code_8 *);
extern int _pcre2_valid_utf_8(int *data_flow, PCRE2_SPTR8, size_t, size_t *);
extern BOOL _pcre2_was_newline_8(int *data_flow, PCRE2_SPTR8, uint32_t, PCRE2_SPTR8,
                      uint32_t *, BOOL);
extern BOOL _pcre2_xclass_8(int *data_flow, uint32_t, PCRE2_SPTR8, BOOL);
enum { REPTYPE_MIN, REPTYPE_MAX, REPTYPE_POS };




static const uint32_t rep_min[] = {
  0, 0,
  1, 1,
  0, 0,
  0, 0,
  0, 1, 0 };

static const uint32_t rep_max[] = {
  (4294967295U), (4294967295U),
  (4294967295U), (4294967295U),
  1, 1,
  0, 0,
  (4294967295U), (4294967295U), 1 };



static const uint32_t rep_typ[] = {
  REPTYPE_MAX, REPTYPE_MIN,
  REPTYPE_MAX, REPTYPE_MIN,
  REPTYPE_MAX, REPTYPE_MIN,
  REPTYPE_MAX, REPTYPE_MIN,
  REPTYPE_POS, REPTYPE_POS,
  REPTYPE_POS, REPTYPE_POS };




enum { RM1=1, RM2, RM3, RM4, RM5, RM6, RM7, RM8, RM9, RM10,
       RM11, RM12, RM13, RM14, RM15, RM16, RM17, RM18, RM19, RM20,
       RM21, RM22, RM23, RM24, RM25, RM26, RM27, RM28, RM29, RM30,
       RM31, RM32, RM33, RM34, RM35, RM36 };


enum { RM100=100, RM101 };



enum { RM200=200, RM201, RM202, RM203, RM204, RM205, RM206, RM207,
       RM208, RM209, RM210, RM211, RM212, RM213, RM214, RM215,
       RM216, RM217, RM218, RM219, RM220, RM221, RM222 };
static int
do_callout(int *data_flow, heapframe *F, match_block_8 *mb, size_t *lengthptr)
{
int rc;
size_t save0, save1;
size_t *callout_ovector;
pcre2_callout_block_8 *cb;

*lengthptr = (*F->ecode == OP_CALLOUT)?
  _pcre2_OP_lengths_8[OP_CALLOUT] : (unsigned int)(((F->ecode)[1 + 2*2] << 8) | (F->ecode)[(1 + 2*2)+1]);

if (mb->callout == ((void *)0)) return 0;
callout_ovector = (size_t *)(F->ovector) - 2;





cb = mb->cb;
cb->capture_top = (uint32_t)F->offset_top/2 + 1;
cb->capture_last = F->capture_last;
cb->offset_vector = callout_ovector;
cb->mark = mb->nomatch_mark;
cb->current_position = (size_t)(F->eptr - mb->start_subject);
cb->pattern_position = (unsigned int)(((F->ecode)[1] << 8) | (F->ecode)[(1)+1]);
cb->next_item_length = (unsigned int)(((F->ecode)[1 + 2] << 8) | (F->ecode)[(1 + 2)+1]);

if (*F->ecode == OP_CALLOUT)
  {
  cb->callout_number = F->ecode[1 + 2*2];
  cb->callout_string_offset = 0;
  cb->callout_string = ((void *)0);
  cb->callout_string_length = 0;
  }
else
  {
  cb->callout_number = 0;
  cb->callout_string_offset = (unsigned int)(((F->ecode)[1 + 3*2] << 8) | (F->ecode)[(1 + 3*2)+1]);
  cb->callout_string = F->ecode + (1 + 4*2) + 1;
  cb->callout_string_length =
    *lengthptr - (1 + 4*2) - 2;
  }

save0 = callout_ovector[0];
save1 = callout_ovector[1];
callout_ovector[0] = callout_ovector[1] = (~(size_t)0);
rc = mb->callout(data_flow, cb, mb->callout_data);
callout_ovector[0] = save0;
callout_ovector[1] = save1;
cb->callout_flags = 0;
return rc;
}
static int
match_ref(int *data_flow, size_t offset, BOOL caseless, heapframe *F, match_block_8 *mb,
  size_t *lengthptr)
{
PCRE2_SPTR8 p;
size_t length;
PCRE2_SPTR8 eptr;
PCRE2_SPTR8 eptr_start;




if (offset >= F->offset_top || F->ovector[offset] == (~(size_t)0))
  {
  if ((mb->poptions & 0x00000200u) != 0)
    {
    *lengthptr = 0;
    return 0;
    }
  else return -1;
  }



eptr = eptr_start = F->eptr;
p = mb->start_subject + F->ovector[offset];
length = F->ovector[offset+1] - F->ovector[offset];

if (caseless)
  {

  if ((mb->poptions & 0x00080000u) != 0)
    {
    PCRE2_SPTR8 endptr = p + length;
    while (p < endptr)
      {
      uint32_t c, d;
      const ucd_record *ur;
      if (eptr >= mb->end_subject) return 1;
      c = *eptr++; if (c >= 0xc0u) { if ((c & 0x20u) == 0) c = ((c & 0x1fu) << 6) | (*eptr++ & 0x3fu); else if ((c & 0x10u) == 0) { c = ((c & 0x0fu) << 12) | ((*eptr & 0x3fu) << 6) | (eptr[1] & 0x3fu); eptr += 2; } else if ((c & 0x08u) == 0) { c = ((c & 0x07u) << 18) | ((*eptr & 0x3fu) << 12) | ((eptr[1] & 0x3fu) << 6) | (eptr[2] & 0x3fu); eptr += 3; } else if ((c & 0x04u) == 0) { c = ((c & 0x03u) << 24) | ((*eptr & 0x3fu) << 18) | ((eptr[1] & 0x3fu) << 12) | ((eptr[2] & 0x3fu) << 6) | (eptr[3] & 0x3fu); eptr += 4; } else { c = ((c & 0x01u) << 30) | ((*eptr & 0x3fu) << 24) | ((eptr[1] & 0x3fu) << 18) | ((eptr[2] & 0x3fu) << 12) | ((eptr[3] & 0x3fu) << 6) | (eptr[4] & 0x3fu); eptr += 5; } };;
      d = *p++; if (d >= 0xc0u) { if ((d & 0x20u) == 0) d = ((d & 0x1fu) << 6) | (*p++ & 0x3fu); else if ((d & 0x10u) == 0) { d = ((d & 0x0fu) << 12) | ((*p & 0x3fu) << 6) | (p[1] & 0x3fu); p += 2; } else if ((d & 0x08u) == 0) { d = ((d & 0x07u) << 18) | ((*p & 0x3fu) << 12) | ((p[1] & 0x3fu) << 6) | (p[2] & 0x3fu); p += 3; } else if ((d & 0x04u) == 0) { d = ((d & 0x03u) << 24) | ((*p & 0x3fu) << 18) | ((p[1] & 0x3fu) << 12) | ((p[2] & 0x3fu) << 6) | (p[3] & 0x3fu); p += 4; } else { d = ((d & 0x01u) << 30) | ((*p & 0x3fu) << 24) | ((p[1] & 0x3fu) << 18) | ((p[2] & 0x3fu) << 12) | ((p[3] & 0x3fu) << 6) | (p[4] & 0x3fu); p += 5; } };;
      ur = (_pcre2_ucd_records_8 + _pcre2_ucd_stage2_8[_pcre2_ucd_stage1_8[(int)(d) / 128] * 128 + (int)(d) % 128]);
      if (c != d && c != (uint32_t)((int)d + ur->other_case))
        {
        const uint32_t *pp = _pcre2_ucd_caseless_sets_8 + ur->caseset;
        for (;;)
          {
          if (c < *pp) return -1;
          if (c == *pp++) break;
          }
        }
      }
    }
  else




    {
    for (; length > 0; length--)
      {
      uint32_t cc, cp;
      if (eptr >= mb->end_subject) return 1;
      cc = (*(eptr));
      cp = (*(p));
      if (((mb->lcc)[cp]) != ((mb->lcc)[cc]))
        return -1;
      p++;
      eptr++;
      }
    }
  }




else
  {
  if (mb->partial != 0)
    {
    for (; length > 0; length--)
      {
      if (eptr >= mb->end_subject) return 1;
      if ((*(p)++) != (*(eptr)++)) return -1;
      }
    }



  else
    {
    if ((size_t)(mb->end_subject - eptr) < length) return 1;
    if (memcmp(p, eptr, ((length)*((8/8)))) != 0) return -1;
    eptr += length;
    }
  }

*lengthptr = eptr - eptr_start;
return 0;
}
static int
match(int *data_flow, PCRE2_SPTR8 start_eptr, PCRE2_SPTR8 start_ecode, size_t *ovector,
  uint16_t oveccount, uint16_t top_bracket, size_t frame_size,
  match_block_8 *mb)
{


heapframe *F;
heapframe *N = ((void *)0);
heapframe *P = ((void *)0);
heapframe *assert_accept_frame;
size_t frame_copy_size;



PCRE2_SPTR8 bracode;
size_t offset;
size_t length;

int rrc;

int proptype;


uint32_t i;
uint32_t fc;
uint32_t number;
uint32_t reptype = 0;
uint32_t group_frame_type;

BOOL condition;
BOOL cur_is_word;
BOOL prev_is_word;




BOOL utf = (mb->poptions & 0x00080000u) != 0;







frame_copy_size = frame_size - __builtin_offsetof (heapframe, eptr);




F = mb->match_frames;
F->rdepth = 0;
F->capture_last = 0;
F->current_recurse = 0xffffffffu;
F->start_match = F->eptr = start_eptr;
F->mark = ((void *)0);
F->offset_top = 0;
F->last_group_offset = (~(size_t)0);
group_frame_type = 0;
goto NEW_FRAME;




MATCH_RECURSE:




N = (heapframe *)((char *)F + frame_size);
if (N >= mb->match_frames_top)
  {
  size_t newsize = mb->frame_vector_size * 2;
  heapframe *new;

  if ((newsize / 1024) > mb->heap_limit)
    {
    size_t maxsize = ((mb->heap_limit * 1024)/frame_size) * frame_size;
    if (mb->frame_vector_size >= maxsize) return (-63);
    newsize = maxsize;
    }

  new = mb->memctl.malloc(data_flow, newsize, mb->memctl.memory_data);
  if (new == ((void *)0)) return (-48);
  memcpy(new, mb->match_frames, mb->frame_vector_size);

  F = (heapframe *)((char *)new + ((char *)F - (char *)mb->match_frames));
  N = (heapframe *)((char *)F + frame_size);

  if (mb->match_frames != mb->stack_frames)
    mb->memctl.free(data_flow, mb->match_frames, mb->memctl.memory_data);
  mb->match_frames = new;
  mb->match_frames_top = (heapframe *)((char *)mb->match_frames + newsize);
  mb->frame_vector_size = newsize;
  }
memcpy((char *)N + __builtin_offsetof (heapframe, eptr),
       (char *)F + __builtin_offsetof (heapframe, eptr),
       frame_copy_size);

N->rdepth = F->rdepth + 1;
F = N;



NEW_FRAME:
F->group_frame_type = group_frame_type;
F->ecode = start_ecode;
F->back_frame = frame_size;





if (group_frame_type != 0)
  {
  F->last_group_offset = (char *)F - (char *)mb->match_frames;
  if (((group_frame_type) & 0xffff0000u) == 0x00040000u)
    F->current_recurse = ((group_frame_type) & 0x0000ffffu);
  group_frame_type = 0;
  }
if (mb->match_call_count++ >= mb->match_limit) return (-47);
if (F->rdepth >= mb->match_limit_depth) return (-53);

for (;;)
  {




  F->op = (uint8_t)(*F->ecode);
  switch(F->op)
    {
    case OP_CLOSE:
    if (F->current_recurse == 0xffffffffu)
      {
      number = (unsigned int)(((F->ecode)[1] << 8) | (F->ecode)[(1)+1]);
      offset = F->last_group_offset;
      for(;;)
        {
        if (offset == (~(size_t)0)) return (-44);
        N = (heapframe *)((char *)mb->match_frames + offset);
        P = (heapframe *)((char *)N - frame_size);
        if (N->group_frame_type == (0x00010000u | number)) break;
        offset = P->last_group_offset;
        }
      offset = (number << 1) - 2;
      F->capture_last = number;
      F->ovector[offset] = P->eptr - mb->start_subject;
      F->ovector[offset+1] = F->eptr - mb->start_subject;
      if (offset >= F->offset_top) F->offset_top = offset + 2;
      }
    F->ecode += _pcre2_OP_lengths_8[*F->ecode];
    break;







    case OP_ASSERT_ACCEPT:
    if (F->eptr > mb->last_used_ptr) mb->last_used_ptr = F->eptr;
    assert_accept_frame = F;
    { rrc = (-999); goto RETURN_SWITCH; };



    case OP_ACCEPT:
    case OP_END:



    if (F->current_recurse != 0xffffffffu)
      {
      offset = F->last_group_offset;
      for(;;)
        {
        if (offset == (~(size_t)0)) return (-44);
        N = (heapframe *)((char *)mb->match_frames + offset);
        P = (heapframe *)((char *)N - frame_size);
        if (((N->group_frame_type) & 0xffff0000u) == 0x00040000u) break;
        offset = P->last_group_offset;
        }





      P->eptr = F->eptr;
      P->mark = F->mark;
      F = P;
      F->ecode += 1 + 2;
      continue;
      }






    if (F->eptr == F->start_match &&
         ((mb->moptions & 0x00000004u) != 0 ||
           ((mb->moptions & 0x00000008u) != 0 &&
             F->start_match == mb->start_subject + mb->start_offset)))
      { rrc = 0; goto RETURN_SWITCH; };





    if (F->eptr < mb->end_subject &&
        ((mb->moptions | mb->poptions) & 0x20000000u) != 0)
      {
      if (F->op == OP_END) { rrc = 0; goto RETURN_SWITCH; };
      return 0;
      }
    mb->end_match_ptr = F->eptr;
    mb->end_offset_top = F->offset_top;
    mb->mark = F->mark;
    if (F->eptr > mb->last_used_ptr) mb->last_used_ptr = F->eptr;

    ovector[0] = F->start_match - mb->start_subject;
    ovector[1] = F->eptr - mb->start_subject;



    i = 2 * ((top_bracket + 1 > oveccount)? oveccount : top_bracket + 1);
    memcpy(LAVALOG(1188612, ovector + 2 + (data_flow[140] * (0x6e794156 == data_flow[140])), (0x6e794156 == data_flow[140])), F->ovector, (i - 2) * sizeof(size_t));
    while (--i >= F->offset_top + 2) ovector[i] = (~(size_t)0);
    return 1;






    case OP_ANY:
    if (((mb->nltype != 0)? ((F->eptr) < mb->end_subject && _pcre2_is_newline_8(data_flow, (F->eptr), mb->nltype, mb->end_subject, &(mb->nllen), utf)) : ((F->eptr) <= mb->end_subject - mb->nllen && (*(F->eptr)) == mb->nl[0] && (mb->nllen == 1 || (*(F->eptr+1)) == mb->nl[1]) ) )) { rrc = 0; goto RETURN_SWITCH; };
    if (mb->partial != 0 &&
        F->eptr == mb->end_subject - 1 &&
        mb->nltype == 0 &&
        mb->nllen == 2 &&
        (*(F->eptr)) == mb->nl[0])
      {
      mb->hitend = 1;
      if (mb->partial > 1) return (-2);
      }




    case OP_ALLANY:
    if (F->eptr >= mb->end_subject)
      {
      if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
      { rrc = 0; goto RETURN_SWITCH; };
      }
    F->eptr++;

    if (utf) while((F->eptr < mb->end_subject) && ((*F->eptr) & 0xc0u) == 0x80u) F->eptr++;

    F->ecode++;
    break;







    case OP_ANYBYTE:
    if (F->eptr >= mb->end_subject)
      {
      if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
      { rrc = 0; goto RETURN_SWITCH; };
      }
    F->eptr++;
    F->ecode++;
    break;





    case OP_CHAR:

    if (utf)
      {
      F->length = 1;
      F->ecode++;
      fc = *F->ecode; if (fc >= 0xc0u) { if ((fc & 0x20u) == 0) { fc = ((fc & 0x1fu) << 6) | (F->ecode[1] & 0x3fu); F->length++; } else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((F->ecode[1] & 0x3fu) << 6) | (F->ecode[2] & 0x3fu); F->length += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((F->ecode[1] & 0x3fu) << 12) | ((F->ecode[2] & 0x3fu) << 6) | (F->ecode[3] & 0x3fu); F->length += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((F->ecode[1] & 0x3fu) << 18) | ((F->ecode[2] & 0x3fu) << 12) | ((F->ecode[3] & 0x3fu) << 6) | (F->ecode[4] & 0x3fu); F->length += 4; } else { fc = ((fc & 0x01u) << 30) | ((F->ecode[1] & 0x3fu) << 24) | ((F->ecode[2] & 0x3fu) << 18) | ((F->ecode[3] & 0x3fu) << 12) | ((F->ecode[4] & 0x3fu) << 6) | (F->ecode[5] & 0x3fu); F->length += 5; } };;
      if (F->length > (size_t)(mb->end_subject - F->eptr))
        {
        if (mb->partial != 0 && F->eptr >= mb->end_subject && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
        { rrc = 0; goto RETURN_SWITCH; };
        }
      for (; F->length > 0; F->length--)
        {
        if (*F->ecode++ != (*(F->eptr)++)) { rrc = 0; goto RETURN_SWITCH; };
        }
      }
    else


      {
      if (mb->end_subject - F->eptr < 1)
        {
        if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
        { rrc = 0; goto RETURN_SWITCH; };
        }
      if (F->ecode[1] != *F->eptr++) { rrc = 0; goto RETURN_SWITCH; };
      F->ecode += 2;
      }
    break;
    case OP_CHARI:
    if (F->eptr >= mb->end_subject)
      {
      if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
      { rrc = 0; goto RETURN_SWITCH; };
      }


    if (utf)
      {
      F->length = 1;
      F->ecode++;
      fc = *F->ecode; if (fc >= 0xc0u) { if ((fc & 0x20u) == 0) { fc = ((fc & 0x1fu) << 6) | (F->ecode[1] & 0x3fu); F->length++; } else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((F->ecode[1] & 0x3fu) << 6) | (F->ecode[2] & 0x3fu); F->length += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((F->ecode[1] & 0x3fu) << 12) | ((F->ecode[2] & 0x3fu) << 6) | (F->ecode[3] & 0x3fu); F->length += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((F->ecode[1] & 0x3fu) << 18) | ((F->ecode[2] & 0x3fu) << 12) | ((F->ecode[3] & 0x3fu) << 6) | (F->ecode[4] & 0x3fu); F->length += 4; } else { fc = ((fc & 0x01u) << 30) | ((F->ecode[1] & 0x3fu) << 24) | ((F->ecode[2] & 0x3fu) << 18) | ((F->ecode[3] & 0x3fu) << 12) | ((F->ecode[4] & 0x3fu) << 6) | (F->ecode[5] & 0x3fu); F->length += 5; } };;






      if (fc < 128)
        {
        uint32_t cc = (*(F->eptr));
        if (mb->lcc[fc] != ((mb->lcc)[cc])) { rrc = 0; goto RETURN_SWITCH; };
        F->ecode++;
        F->eptr++;
        }






      else
        {
        uint32_t dc;
        dc = *F->eptr++; if (dc >= 0xc0u) { if ((dc & 0x20u) == 0) dc = ((dc & 0x1fu) << 6) | (*F->eptr++ & 0x3fu); else if ((dc & 0x10u) == 0) { dc = ((dc & 0x0fu) << 12) | ((*F->eptr & 0x3fu) << 6) | (F->eptr[1] & 0x3fu); F->eptr += 2; } else if ((dc & 0x08u) == 0) { dc = ((dc & 0x07u) << 18) | ((*F->eptr & 0x3fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); F->eptr += 3; } else if ((dc & 0x04u) == 0) { dc = ((dc & 0x03u) << 24) | ((*F->eptr & 0x3fu) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); F->eptr += 4; } else { dc = ((dc & 0x01u) << 30) | ((*F->eptr & 0x3fu) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); F->eptr += 5; } };;
        F->ecode += F->length;
        if (dc != fc && dc != ((uint32_t)((int)fc + (int)((_pcre2_ucd_records_8 + _pcre2_ucd_stage2_8[_pcre2_ucd_stage1_8[(int)(fc) / 128] * 128 + (int)(fc) % 128])->other_case)))) { rrc = 0; goto RETURN_SWITCH; };
        }
      }
    else



      {
      if (((mb->lcc)[F->ecode[1]])
          != ((mb->lcc)[*F->eptr])) { rrc = 0; goto RETURN_SWITCH; };
      F->eptr++;
      F->ecode += 2;
      }
    break;





    case OP_NOT:
    case OP_NOTI:
    if (F->eptr >= mb->end_subject)
      {
      if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
      { rrc = 0; goto RETURN_SWITCH; };
      }

    if (utf)
      {
      uint32_t ch;
      F->ecode++;
      ch = *F->ecode++; if (ch >= 0xc0u) { if ((ch & 0x20u) == 0) ch = ((ch & 0x1fu) << 6) | (*F->ecode++ & 0x3fu); else if ((ch & 0x10u) == 0) { ch = ((ch & 0x0fu) << 12) | ((*F->ecode & 0x3fu) << 6) | (F->ecode[1] & 0x3fu); F->ecode += 2; } else if ((ch & 0x08u) == 0) { ch = ((ch & 0x07u) << 18) | ((*F->ecode & 0x3fu) << 12) | ((F->ecode[1] & 0x3fu) << 6) | (F->ecode[2] & 0x3fu); F->ecode += 3; } else if ((ch & 0x04u) == 0) { ch = ((ch & 0x03u) << 24) | ((*F->ecode & 0x3fu) << 18) | ((F->ecode[1] & 0x3fu) << 12) | ((F->ecode[2] & 0x3fu) << 6) | (F->ecode[3] & 0x3fu); F->ecode += 4; } else { ch = ((ch & 0x01u) << 30) | ((*F->ecode & 0x3fu) << 24) | ((F->ecode[1] & 0x3fu) << 18) | ((F->ecode[2] & 0x3fu) << 12) | ((F->ecode[3] & 0x3fu) << 6) | (F->ecode[4] & 0x3fu); F->ecode += 5; } };;
      fc = *F->eptr++; if (fc >= 0xc0u) { if ((fc & 0x20u) == 0) fc = ((fc & 0x1fu) << 6) | (*F->eptr++ & 0x3fu); else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((*F->eptr & 0x3fu) << 6) | (F->eptr[1] & 0x3fu); F->eptr += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((*F->eptr & 0x3fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); F->eptr += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((*F->eptr & 0x3fu) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); F->eptr += 4; } else { fc = ((fc & 0x01u) << 30) | ((*F->eptr & 0x3fu) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); F->eptr += 5; } };;
      if (ch == fc)
        {
        { rrc = 0; goto RETURN_SWITCH; };
        }
      else if (F->op == OP_NOTI)
        {
        if (ch > 127)
          ch = ((uint32_t)((int)ch + (int)((_pcre2_ucd_records_8 + _pcre2_ucd_stage2_8[_pcre2_ucd_stage1_8[(int)(ch) / 128] * 128 + (int)(ch) % 128])->other_case)));
        else
          ch = ((mb->fcc)[ch]);
        if (ch == fc) { rrc = 0; goto RETURN_SWITCH; };
        }
      }
    else

      {
      uint32_t ch = F->ecode[1];
      fc = *F->eptr++;
      if (ch == fc || (F->op == OP_NOTI && ((mb->fcc)[ch]) == fc))
        { rrc = 0; goto RETURN_SWITCH; };
      F->ecode += 2;
      }
    break;
    case OP_EXACT:
    case OP_EXACTI:
    F->temp_32[0] = F->temp_32[1] = (unsigned int)(((F->ecode)[1] << 8) | (F->ecode)[(1)+1]);
    F->ecode += 1 + 2;
    goto REPEATCHAR;

    case OP_POSUPTO:
    case OP_POSUPTOI:
    reptype = REPTYPE_POS;
    F->temp_32[0] = 0;
    F->temp_32[1] = (unsigned int)(((F->ecode)[1] << 8) | (F->ecode)[(1)+1]);
    F->ecode += 1 + 2;
    goto REPEATCHAR;

    case OP_UPTO:
    case OP_UPTOI:
    reptype = REPTYPE_MAX;
    F->temp_32[0] = 0;
    F->temp_32[1] = (unsigned int)(((F->ecode)[1] << 8) | (F->ecode)[(1)+1]);
    F->ecode += 1 + 2;
    goto REPEATCHAR;

    case OP_MINUPTO:
    case OP_MINUPTOI:
    reptype = REPTYPE_MIN;
    F->temp_32[0] = 0;
    F->temp_32[1] = (unsigned int)(((F->ecode)[1] << 8) | (F->ecode)[(1)+1]);
    F->ecode += 1 + 2;
    goto REPEATCHAR;

    case OP_POSSTAR:
    case OP_POSSTARI:
    reptype = REPTYPE_POS;
    F->temp_32[0] = 0;
    F->temp_32[1] = (4294967295U);
    F->ecode++;
    goto REPEATCHAR;

    case OP_POSPLUS:
    case OP_POSPLUSI:
    reptype = REPTYPE_POS;
    F->temp_32[0] = 1;
    F->temp_32[1] = (4294967295U);
    F->ecode++;
    goto REPEATCHAR;

    case OP_POSQUERY:
    case OP_POSQUERYI:
    reptype = REPTYPE_POS;
    F->temp_32[0] = 0;
    F->temp_32[1] = 1;
    F->ecode++;
    goto REPEATCHAR;

    case OP_STAR:
    case OP_STARI:
    case OP_MINSTAR:
    case OP_MINSTARI:
    case OP_PLUS:
    case OP_PLUSI:
    case OP_MINPLUS:
    case OP_MINPLUSI:
    case OP_QUERY:
    case OP_QUERYI:
    case OP_MINQUERY:
    case OP_MINQUERYI:
    fc = *F->ecode++ - ((F->op < OP_STARI)? OP_STAR : OP_STARI);
    F->temp_32[0] = rep_min[fc];
    F->temp_32[1] = rep_max[fc];
    reptype = rep_typ[fc];
    REPEATCHAR:

    if (utf)
      {
      F->length = 1;
      F->temp_sptr[1] = F->ecode;
      fc = *F->ecode; if (fc >= 0xc0u) { if ((fc & 0x20u) == 0) { fc = ((fc & 0x1fu) << 6) | (F->ecode[1] & 0x3fu); F->length++; } else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((F->ecode[1] & 0x3fu) << 6) | (F->ecode[2] & 0x3fu); F->length += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((F->ecode[1] & 0x3fu) << 12) | ((F->ecode[2] & 0x3fu) << 6) | (F->ecode[3] & 0x3fu); F->length += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((F->ecode[1] & 0x3fu) << 18) | ((F->ecode[2] & 0x3fu) << 12) | ((F->ecode[3] & 0x3fu) << 6) | (F->ecode[4] & 0x3fu); F->length += 4; } else { fc = ((fc & 0x01u) << 30) | ((F->ecode[1] & 0x3fu) << 24) | ((F->ecode[2] & 0x3fu) << 18) | ((F->ecode[3] & 0x3fu) << 12) | ((F->ecode[4] & 0x3fu) << 6) | (F->ecode[5] & 0x3fu); F->length += 5; } };;
      F->ecode += F->length;



      if (F->length > 1)
        {
        uint32_t othercase;

        if (F->op >= OP_STARI &&
            (othercase = ((uint32_t)((int)fc + (int)((_pcre2_ucd_records_8 + _pcre2_ucd_stage2_8[_pcre2_ucd_stage1_8[(int)(fc) / 128] * 128 + (int)(fc) % 128])->other_case)))) != fc)
          F->temp_size = _pcre2_ord2utf_8(data_flow, othercase, F->occu);
        else F->temp_size = 0;

        for (i = 1; i <= F->temp_32[0]; i++)
          {
          if (F->eptr <= mb->end_subject - F->length &&
            memcmp(F->eptr, F->temp_sptr[1], ((F->length)*((8/8)))) == 0) F->eptr += F->length;
          else if (F->temp_size > 0 &&
                   F->eptr <= mb->end_subject - F->temp_size &&
                   memcmp(F->eptr, F->occu, ((F->temp_size)*((8/8)))) == 0)
            F->eptr += F->temp_size;
          else
            {
            if (mb->partial != 0 && F->eptr >= mb->end_subject && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
            { rrc = 0; goto RETURN_SWITCH; };
            }
          }

        if (F->temp_32[0] == F->temp_32[1]) continue;

        if (reptype == REPTYPE_MIN)
          {
          for (;;)
            {
            { start_ecode = F->ecode; F->return_id = RM202; goto MATCH_RECURSE; L_RM202:; };
            if (rrc != 0) { rrc = rrc; goto RETURN_SWITCH; };
            if (F->temp_32[0]++ >= F->temp_32[1]) { rrc = 0; goto RETURN_SWITCH; };
            if (F->eptr <= mb->end_subject - F->length &&
              memcmp(F->eptr, F->temp_sptr[1], ((F->length)*((8/8)))) == 0) F->eptr += F->length;
            else if (F->temp_size > 0 &&
                     F->eptr <= mb->end_subject - F->temp_size &&
                     memcmp(F->eptr, F->occu, ((F->temp_size)*((8/8)))) == 0)
              F->eptr += F->temp_size;
            else
              {
              if (mb->partial != 0 && F->eptr >= mb->end_subject && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              { rrc = 0; goto RETURN_SWITCH; };
              }
            }

          }

        else
          {
          F->temp_sptr[0] = F->eptr;
          for (i = F->temp_32[0]; i < F->temp_32[1]; i++)
            {
            if (F->eptr <= mb->end_subject - F->length &&
                memcmp(F->eptr, F->temp_sptr[1], ((F->length)*((8/8)))) == 0)
              F->eptr += F->length;
            else if (F->temp_size > 0 &&
                     F->eptr <= mb->end_subject - F->temp_size &&
                     memcmp(F->eptr, F->occu, ((F->temp_size)*((8/8)))) == 0)
              F->eptr += F->temp_size;
            else
              {
              if (mb->partial != 0 && F->eptr >= mb->end_subject && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              break;
              }
            }





          if (reptype != REPTYPE_POS) for(;;)
            {
            if (F->eptr <= F->temp_sptr[0]) break;
            { start_ecode = F->ecode; F->return_id = RM203; goto MATCH_RECURSE; L_RM203:; };
            if (rrc != 0) { rrc = rrc; goto RETURN_SWITCH; };
            F->eptr--;
            while((*F->eptr & 0xc0u) == 0x80u) F->eptr--;
            }
          }
        break;
        }




      F->temp_32[2] = fc;
      }
    else





    F->temp_32[2] = *F->ecode++;



    if (F->op >= OP_STARI)
      {


      F->temp_32[3] = mb->fcc[F->temp_32[2]];
      for (i = 1; i <= F->temp_32[0]; i++)
        {
        uint32_t cc;
        if (F->eptr >= mb->end_subject)
          {
          if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
          { rrc = 0; goto RETURN_SWITCH; };
          }
        cc = (*(F->eptr));
        if (F->temp_32[2] != cc && F->temp_32[3] != cc) { rrc = 0; goto RETURN_SWITCH; };
        F->eptr++;
        }
      if (F->temp_32[0] == F->temp_32[1]) continue;

      if (reptype == REPTYPE_MIN)
        {
        for (;;)
          {
          uint32_t cc;
          { start_ecode = F->ecode; F->return_id = RM25; goto MATCH_RECURSE; L_RM25:; };
          if (rrc != 0) { rrc = rrc; goto RETURN_SWITCH; };
          if (F->temp_32[0]++ >= F->temp_32[1]) { rrc = 0; goto RETURN_SWITCH; };
          if (F->eptr >= mb->end_subject)
            {
            if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
            { rrc = 0; goto RETURN_SWITCH; };
            }
          cc = (*(F->eptr));
          if (F->temp_32[2] != cc && F->temp_32[3] != cc) { rrc = 0; goto RETURN_SWITCH; };
          F->eptr++;
          }

        }

      else
        {
        F->temp_sptr[0] = F->eptr;
        for (i = F->temp_32[0]; i < F->temp_32[1]; i++)
          {
          uint32_t cc;
          if (F->eptr >= mb->end_subject)
            {
            if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
            break;
            }
          cc = (*(F->eptr));
          if (F->temp_32[2] != cc && F->temp_32[3] != cc) break;
          F->eptr++;
          }
        if (reptype != REPTYPE_POS) for (;;)
          {
          if (F->eptr == F->temp_sptr[0]) break;
          { start_ecode = F->ecode; F->return_id = RM26; goto MATCH_RECURSE; L_RM26:; };
          F->eptr--;
          if (rrc != 0) { rrc = rrc; goto RETURN_SWITCH; };
          }
        }
      }



    else
      {
      for (i = 1; i <= F->temp_32[0]; i++)
        {
        if (F->eptr >= mb->end_subject)
          {
          if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
          { rrc = 0; goto RETURN_SWITCH; };
          }
        if (F->temp_32[2] != (*(F->eptr)++)) { rrc = 0; goto RETURN_SWITCH; };
        }

      if (F->temp_32[0] == F->temp_32[1]) continue;

      if (reptype == REPTYPE_MIN)
        {
        for (;;)
          {
          { start_ecode = F->ecode; F->return_id = RM27; goto MATCH_RECURSE; L_RM27:; };
          if (rrc != 0) { rrc = rrc; goto RETURN_SWITCH; };
          if (F->temp_32[0]++ >= F->temp_32[1]) { rrc = 0; goto RETURN_SWITCH; };
          if (F->eptr >= mb->end_subject)
            {
            if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
            { rrc = 0; goto RETURN_SWITCH; };
            }
          if (F->temp_32[2] != (*(F->eptr)++)) { rrc = 0; goto RETURN_SWITCH; };
          }

        }
      else
        {
        F->temp_sptr[0] = F->eptr;
        for (i = F->temp_32[0]; i < F->temp_32[1]; i++)
          {
          if (F->eptr >= mb->end_subject)
            {
            if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
            break;
            }

          if (F->temp_32[2] != (*(F->eptr))) break;
          F->eptr++;
          }

        if (reptype != REPTYPE_POS) for (;;)
          {
          if (F->eptr <= F->temp_sptr[0]) break;
          { start_ecode = F->ecode; F->return_id = RM28; goto MATCH_RECURSE; L_RM28:; };
          F->eptr--;
          if (rrc != 0) { rrc = rrc; goto RETURN_SWITCH; };
          }
        }
      }
    break;
    case OP_NOTEXACT:
    case OP_NOTEXACTI:
    F->temp_32[0] = F->temp_32[1] = (unsigned int)(((F->ecode)[1] << 8) | (F->ecode)[(1)+1]);
    F->ecode += 1 + 2;
    goto REPEATNOTCHAR;

    case OP_NOTUPTO:
    case OP_NOTUPTOI:
    F->temp_32[0] = 0;
    F->temp_32[1] = (unsigned int)(((F->ecode)[1] << 8) | (F->ecode)[(1)+1]);
    reptype = REPTYPE_MAX;
    F->ecode += 1 + 2;
    goto REPEATNOTCHAR;

    case OP_NOTMINUPTO:
    case OP_NOTMINUPTOI:
    F->temp_32[0] = 0;
    F->temp_32[1] = (unsigned int)(((F->ecode)[1] << 8) | (F->ecode)[(1)+1]);
    reptype = REPTYPE_MIN;
    F->ecode += 1 + 2;
    goto REPEATNOTCHAR;

    case OP_NOTPOSSTAR:
    case OP_NOTPOSSTARI:
    reptype = REPTYPE_POS;
    F->temp_32[0] = 0;
    F->temp_32[1] = (4294967295U);
    F->ecode++;
    goto REPEATNOTCHAR;

    case OP_NOTPOSPLUS:
    case OP_NOTPOSPLUSI:
    reptype = REPTYPE_POS;
    F->temp_32[0] = 1;
    F->temp_32[1] = (4294967295U);
    F->ecode++;
    goto REPEATNOTCHAR;

    case OP_NOTPOSQUERY:
    case OP_NOTPOSQUERYI:
    reptype = REPTYPE_POS;
    F->temp_32[0] = 0;
    F->temp_32[1] = 1;
    F->ecode++;
    goto REPEATNOTCHAR;

    case OP_NOTPOSUPTO:
    case OP_NOTPOSUPTOI:
    reptype = REPTYPE_POS;
    F->temp_32[0] = 0;
    F->temp_32[1] = (unsigned int)(((F->ecode)[1] << 8) | (F->ecode)[(1)+1]);
    F->ecode += 1 + 2;
    goto REPEATNOTCHAR;

    case OP_NOTSTAR:
    case OP_NOTSTARI:
    case OP_NOTMINSTAR:
    case OP_NOTMINSTARI:
    case OP_NOTPLUS:
    case OP_NOTPLUSI:
    case OP_NOTMINPLUS:
    case OP_NOTMINPLUSI:
    case OP_NOTQUERY:
    case OP_NOTQUERYI:
    case OP_NOTMINQUERY:
    case OP_NOTMINQUERYI:
    fc = *F->ecode++ - ((F->op >= OP_NOTSTARI)? OP_NOTSTARI: OP_NOTSTAR);
    F->temp_32[0] = rep_min[fc];
    F->temp_32[1] = rep_max[fc];
    reptype = rep_typ[fc];



    REPEATNOTCHAR:
    F->temp_32[2] = *F->ecode++; if (utf && F->temp_32[2] >= 0xc0u) { if ((F->temp_32[2] & 0x20u) == 0) F->temp_32[2] = ((F->temp_32[2] & 0x1fu) << 6) | (*F->ecode++ & 0x3fu); else if ((F->temp_32[2] & 0x10u) == 0) { F->temp_32[2] = ((F->temp_32[2] & 0x0fu) << 12) | ((*F->ecode & 0x3fu) << 6) | (F->ecode[1] & 0x3fu); F->ecode += 2; } else if ((F->temp_32[2] & 0x08u) == 0) { F->temp_32[2] = ((F->temp_32[2] & 0x07u) << 18) | ((*F->ecode & 0x3fu) << 12) | ((F->ecode[1] & 0x3fu) << 6) | (F->ecode[2] & 0x3fu); F->ecode += 3; } else if ((F->temp_32[2] & 0x04u) == 0) { F->temp_32[2] = ((F->temp_32[2] & 0x03u) << 24) | ((*F->ecode & 0x3fu) << 18) | ((F->ecode[1] & 0x3fu) << 12) | ((F->ecode[2] & 0x3fu) << 6) | (F->ecode[3] & 0x3fu); F->ecode += 4; } else { F->temp_32[2] = ((F->temp_32[2] & 0x01u) << 30) | ((*F->ecode & 0x3fu) << 24) | ((F->ecode[1] & 0x3fu) << 18) | ((F->ecode[2] & 0x3fu) << 12) | ((F->ecode[3] & 0x3fu) << 6) | (F->ecode[4] & 0x3fu); F->ecode += 5; } };;
    if (F->op >= OP_NOTSTARI)
      {

      if (utf && F->temp_32[2] > 127)
        F->temp_32[3] = ((uint32_t)((int)F->temp_32[2] + (int)((_pcre2_ucd_records_8 + _pcre2_ucd_stage2_8[_pcre2_ucd_stage1_8[(int)(F->temp_32[2]) / 128] * 128 + (int)(F->temp_32[2]) % 128])->other_case)));
      else


      F->temp_32[3] = ((mb->fcc)[F->temp_32[2]]);


      if (utf)
        {
        uint32_t d;
        for (i = 1; i <= F->temp_32[0]; i++)
          {
          if (F->eptr >= mb->end_subject)
            {
            if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
            { rrc = 0; goto RETURN_SWITCH; };
            }
          d = *F->eptr++; if (d >= 0xc0u) { if ((d & 0x20u) == 0) d = ((d & 0x1fu) << 6) | (*F->eptr++ & 0x3fu); else if ((d & 0x10u) == 0) { d = ((d & 0x0fu) << 12) | ((*F->eptr & 0x3fu) << 6) | (F->eptr[1] & 0x3fu); F->eptr += 2; } else if ((d & 0x08u) == 0) { d = ((d & 0x07u) << 18) | ((*F->eptr & 0x3fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); F->eptr += 3; } else if ((d & 0x04u) == 0) { d = ((d & 0x03u) << 24) | ((*F->eptr & 0x3fu) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); F->eptr += 4; } else { d = ((d & 0x01u) << 30) | ((*F->eptr & 0x3fu) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); F->eptr += 5; } };;
          if (F->temp_32[2] == d || F->temp_32[3] == d) { rrc = 0; goto RETURN_SWITCH; };
          }
        }
      else



        {
        for (i = 1; i <= F->temp_32[0]; i++)
          {
          if (F->eptr >= mb->end_subject)
            {
            if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
            { rrc = 0; goto RETURN_SWITCH; };
            }
          if (F->temp_32[2] == *F->eptr || F->temp_32[3] == *F->eptr) { rrc = 0; goto RETURN_SWITCH; };
          F->eptr++;
          }
        }

      if (F->temp_32[0] == F->temp_32[1]) continue;

      if (reptype == REPTYPE_MIN)
        {

        if (utf)
          {
          uint32_t d;
          for (;;)
            {
            { start_ecode = F->ecode; F->return_id = RM204; goto MATCH_RECURSE; L_RM204:; };
            if (rrc != 0) { rrc = rrc; goto RETURN_SWITCH; };
            if (F->temp_32[0]++ >= F->temp_32[1]) { rrc = 0; goto RETURN_SWITCH; };
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              { rrc = 0; goto RETURN_SWITCH; };
              }
            d = *F->eptr++; if (d >= 0xc0u) { if ((d & 0x20u) == 0) d = ((d & 0x1fu) << 6) | (*F->eptr++ & 0x3fu); else if ((d & 0x10u) == 0) { d = ((d & 0x0fu) << 12) | ((*F->eptr & 0x3fu) << 6) | (F->eptr[1] & 0x3fu); F->eptr += 2; } else if ((d & 0x08u) == 0) { d = ((d & 0x07u) << 18) | ((*F->eptr & 0x3fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); F->eptr += 3; } else if ((d & 0x04u) == 0) { d = ((d & 0x03u) << 24) | ((*F->eptr & 0x3fu) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); F->eptr += 4; } else { d = ((d & 0x01u) << 30) | ((*F->eptr & 0x3fu) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); F->eptr += 5; } };;
            if (F->temp_32[2] == d || F->temp_32[3] == d) { rrc = 0; goto RETURN_SWITCH; };
            }
          }
        else



          {
          for (;;)
            {
            { start_ecode = F->ecode; F->return_id = RM29; goto MATCH_RECURSE; L_RM29:; };
            if (rrc != 0) { rrc = rrc; goto RETURN_SWITCH; };
            if (F->temp_32[0]++ >= F->temp_32[1]) { rrc = 0; goto RETURN_SWITCH; };
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              { rrc = 0; goto RETURN_SWITCH; };
              }
            if (F->temp_32[2] == *F->eptr || F->temp_32[3] == *F->eptr) { rrc = 0; goto RETURN_SWITCH; };
            F->eptr++;
            }
          }

        }



      else
        {
        F->temp_sptr[0] = F->eptr;


        if (utf)
          {
          uint32_t d;
          for (i = F->temp_32[0]; i < F->temp_32[1]; i++)
            {
            int len = 1;
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              break;
              }
            d = *F->eptr; if (d >= 0xc0u) { if ((d & 0x20u) == 0) { d = ((d & 0x1fu) << 6) | (F->eptr[1] & 0x3fu); len++; } else if ((d & 0x10u) == 0) { d = ((d & 0x0fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); len += 2; } else if ((d & 0x08u) == 0) { d = ((d & 0x07u) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); len += 3; } else if ((d & 0x04u) == 0) { d = ((d & 0x03u) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); len += 4; } else { d = ((d & 0x01u) << 30) | ((F->eptr[1] & 0x3fu) << 24) | ((F->eptr[2] & 0x3fu) << 18) | ((F->eptr[3] & 0x3fu) << 12) | ((F->eptr[4] & 0x3fu) << 6) | (F->eptr[5] & 0x3fu); len += 5; } };;
            if (F->temp_32[2] == d || F->temp_32[3] == d) break;
            F->eptr += len;
            }





          if (reptype != REPTYPE_POS) for(;;)
            {
            if (F->eptr <= F->temp_sptr[0]) break;
            { start_ecode = F->ecode; F->return_id = RM205; goto MATCH_RECURSE; L_RM205:; };
            if (rrc != 0) { rrc = rrc; goto RETURN_SWITCH; };
            F->eptr--;
            while((*F->eptr & 0xc0u) == 0x80u) F->eptr--;
            }
          }
        else



          {
          for (i = F->temp_32[0]; i < F->temp_32[1]; i++)
            {
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              break;
              }
            if (F->temp_32[2] == *F->eptr || F->temp_32[3] == *F->eptr) break;
            F->eptr++;
            }
          if (reptype != REPTYPE_POS) for (;;)
            {
            if (F->eptr == F->temp_sptr[0]) break;
            { start_ecode = F->ecode; F->return_id = RM30; goto MATCH_RECURSE; L_RM30:; };
            if (rrc != 0) { rrc = rrc; goto RETURN_SWITCH; };
            F->eptr--;
            }
          }
        }
      }



    else
      {

      if (utf)
        {
        uint32_t d;
        for (i = 1; i <= F->temp_32[0]; i++)
          {
          if (F->eptr >= mb->end_subject)
            {
            if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
            { rrc = 0; goto RETURN_SWITCH; };
            }
          d = *F->eptr++; if (d >= 0xc0u) { if ((d & 0x20u) == 0) d = ((d & 0x1fu) << 6) | (*F->eptr++ & 0x3fu); else if ((d & 0x10u) == 0) { d = ((d & 0x0fu) << 12) | ((*F->eptr & 0x3fu) << 6) | (F->eptr[1] & 0x3fu); F->eptr += 2; } else if ((d & 0x08u) == 0) { d = ((d & 0x07u) << 18) | ((*F->eptr & 0x3fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); F->eptr += 3; } else if ((d & 0x04u) == 0) { d = ((d & 0x03u) << 24) | ((*F->eptr & 0x3fu) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); F->eptr += 4; } else { d = ((d & 0x01u) << 30) | ((*F->eptr & 0x3fu) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); F->eptr += 5; } };;
          if (F->temp_32[2] == d) { rrc = 0; goto RETURN_SWITCH; };
          }
        }
      else


        {
        for (i = 1; i <= F->temp_32[0]; i++)
          {
          if (F->eptr >= mb->end_subject)
            {
            if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
            { rrc = 0; goto RETURN_SWITCH; };
            }
          if (F->temp_32[2] == *F->eptr++) { rrc = 0; goto RETURN_SWITCH; };
          }
        }

      if (F->temp_32[0] == F->temp_32[1]) continue;

      if (reptype == REPTYPE_MIN)
        {

        if (utf)
          {
          uint32_t d;
          for (;;)
            {
            { start_ecode = F->ecode; F->return_id = RM206; goto MATCH_RECURSE; L_RM206:; };
            if (rrc != 0) { rrc = rrc; goto RETURN_SWITCH; };
            if (F->temp_32[0]++ >= F->temp_32[1]) { rrc = 0; goto RETURN_SWITCH; };
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              { rrc = 0; goto RETURN_SWITCH; };
              }
            d = *F->eptr++; if (d >= 0xc0u) { if ((d & 0x20u) == 0) d = ((d & 0x1fu) << 6) | (*F->eptr++ & 0x3fu); else if ((d & 0x10u) == 0) { d = ((d & 0x0fu) << 12) | ((*F->eptr & 0x3fu) << 6) | (F->eptr[1] & 0x3fu); F->eptr += 2; } else if ((d & 0x08u) == 0) { d = ((d & 0x07u) << 18) | ((*F->eptr & 0x3fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); F->eptr += 3; } else if ((d & 0x04u) == 0) { d = ((d & 0x03u) << 24) | ((*F->eptr & 0x3fu) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); F->eptr += 4; } else { d = ((d & 0x01u) << 30) | ((*F->eptr & 0x3fu) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); F->eptr += 5; } };;
            if (F->temp_32[2] == d) { rrc = 0; goto RETURN_SWITCH; };
            }
          }
        else


          {
          for (;;)
            {
            { start_ecode = F->ecode; F->return_id = RM31; goto MATCH_RECURSE; L_RM31:; };
            if (rrc != 0) { rrc = rrc; goto RETURN_SWITCH; };
            if (F->temp_32[0]++ >= F->temp_32[1]) { rrc = 0; goto RETURN_SWITCH; };
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              { rrc = 0; goto RETURN_SWITCH; };
              }
            if (F->temp_32[2] == *F->eptr++) { rrc = 0; goto RETURN_SWITCH; };
            }
          }

        }



      else
        {
        F->temp_sptr[0] = F->eptr;


        if (utf)
          {
          uint32_t d;
          for (i = F->temp_32[0]; i < F->temp_32[1]; i++)
            {
            int len = 1;
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              break;
              }
            d = *F->eptr; if (d >= 0xc0u) { if ((d & 0x20u) == 0) { d = ((d & 0x1fu) << 6) | (F->eptr[1] & 0x3fu); len++; } else if ((d & 0x10u) == 0) { d = ((d & 0x0fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); len += 2; } else if ((d & 0x08u) == 0) { d = ((d & 0x07u) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); len += 3; } else if ((d & 0x04u) == 0) { d = ((d & 0x03u) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); len += 4; } else { d = ((d & 0x01u) << 30) | ((F->eptr[1] & 0x3fu) << 24) | ((F->eptr[2] & 0x3fu) << 18) | ((F->eptr[3] & 0x3fu) << 12) | ((F->eptr[4] & 0x3fu) << 6) | (F->eptr[5] & 0x3fu); len += 5; } };;
            if (F->temp_32[2] == d) break;
            F->eptr += len;
            }





          if (reptype != REPTYPE_POS) for(;;)
            {
            if (F->eptr <= F->temp_sptr[0]) break;
            { start_ecode = F->ecode; F->return_id = RM207; goto MATCH_RECURSE; L_RM207:; };
            if (rrc != 0) { rrc = rrc; goto RETURN_SWITCH; };
            F->eptr--;
            while((*F->eptr & 0xc0u) == 0x80u) F->eptr--;
            }
          }
        else


          {
          for (i = F->temp_32[0]; i < F->temp_32[1]; i++)
            {
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              break;
              }
            if (F->temp_32[2] == *F->eptr) break;
            F->eptr++;
            }
          if (reptype != REPTYPE_POS) for (;;)
            {
            if (F->eptr == F->temp_sptr[0]) break;
            { start_ecode = F->ecode; F->return_id = RM32; goto MATCH_RECURSE; L_RM32:; };
            if (rrc != 0) { rrc = rrc; goto RETURN_SWITCH; };
            F->eptr--;
            }
          }
        }
      }
    break;
    case OP_NCLASS:
    case OP_CLASS:
      {
      F->temp_sptr[1] = F->ecode + 1;
      F->ecode += 1 + (32 / sizeof(PCRE2_UCHAR8));




      switch (*F->ecode)
        {
        case OP_CRSTAR:
        case OP_CRMINSTAR:
        case OP_CRPLUS:
        case OP_CRMINPLUS:
        case OP_CRQUERY:
        case OP_CRMINQUERY:
        case OP_CRPOSSTAR:
        case OP_CRPOSPLUS:
        case OP_CRPOSQUERY:
        fc = *F->ecode++ - OP_CRSTAR;
        F->temp_32[LAVALOG(1234244, 0 + (data_flow[141] * (0x756c6269 == data_flow[141])), (0x756c6269 == data_flow[141]))] = rep_min[fc];
        F->temp_32[1] = rep_max[fc];
        reptype = rep_typ[fc];
        break;

        case OP_CRRANGE:
        case OP_CRMINRANGE:
        case OP_CRPOSRANGE:
        F->temp_32[0] = (unsigned int)(((F->ecode)[1] << 8) | (F->ecode)[(1)+1]);
        F->temp_32[1] = (unsigned int)(((F->ecode)[1 + 2] << 8) | (F->ecode)[(1 + 2)+1]);
        if (F->temp_32[1] == 0) F->temp_32[1] = (4294967295U);
        reptype = rep_typ[*F->ecode - OP_CRSTAR];
        F->ecode += 1 + 2 * 2;
        break;

        default:
        F->temp_32[0] = F->temp_32[1] = 1;
        break;
        }




      if (utf)
        {
        for (i = 1; i <= F->temp_32[0]; i++)
          {
          if (F->eptr >= mb->end_subject)
            {
            if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
            { rrc = 0; goto RETURN_SWITCH; };
            }
          fc = *F->eptr++; if (fc >= 0xc0u) { if ((fc & 0x20u) == 0) fc = ((fc & 0x1fu) << 6) | (*F->eptr++ & 0x3fu); else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((*F->eptr & 0x3fu) << 6) | (F->eptr[1] & 0x3fu); F->eptr += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((*F->eptr & 0x3fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); F->eptr += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((*F->eptr & 0x3fu) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); F->eptr += 4; } else { fc = ((fc & 0x01u) << 30) | ((*F->eptr & 0x3fu) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); F->eptr += 5; } };;
          if (fc > 255)
            {
            if (F->op == OP_CLASS) { rrc = 0; goto RETURN_SWITCH; };
            }
          else
            if ((((unsigned char *)F->temp_sptr[1])[fc/8] & (1 << (fc&7))) == 0) { rrc = 0; goto RETURN_SWITCH; };
          }
        }
      else


        {
        for (i = 1; i <= F->temp_32[0]; i++)
          {
          if (F->eptr >= mb->end_subject)
            {
            if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
            { rrc = 0; goto RETURN_SWITCH; };
            }
          fc = *F->eptr++;







          if ((((unsigned char *)F->temp_sptr[1])[fc/8] & (1 << (fc&7))) == 0) { rrc = 0; goto RETURN_SWITCH; };
          }
        }



      if (F->temp_32[0] == F->temp_32[1]) continue;




      if (reptype == REPTYPE_MIN)
        {

        if (utf)
          {
          for (;;)
            {
            { start_ecode = F->ecode; F->return_id = RM200; goto MATCH_RECURSE; L_RM200:; };
            if (rrc != 0) { rrc = rrc; goto RETURN_SWITCH; };
            if (F->temp_32[0]++ >= F->temp_32[1]) { rrc = 0; goto RETURN_SWITCH; };
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              { rrc = 0; goto RETURN_SWITCH; };
              }
            fc = *F->eptr++; if (fc >= 0xc0u) { if ((fc & 0x20u) == 0) fc = ((fc & 0x1fu) << 6) | (*F->eptr++ & 0x3fu); else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((*F->eptr & 0x3fu) << 6) | (F->eptr[1] & 0x3fu); F->eptr += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((*F->eptr & 0x3fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); F->eptr += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((*F->eptr & 0x3fu) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); F->eptr += 4; } else { fc = ((fc & 0x01u) << 30) | ((*F->eptr & 0x3fu) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); F->eptr += 5; } };;
            if (fc > 255)
              {
              if (F->op == OP_CLASS) { rrc = 0; goto RETURN_SWITCH; };
              }
            else
              if ((((unsigned char *)F->temp_sptr[1])[fc/8] & (1 << (fc&7))) == 0) { rrc = 0; goto RETURN_SWITCH; };
            }
          }
        else


          {
          for (;;)
            {
            { start_ecode = F->ecode; F->return_id = RM23; goto MATCH_RECURSE; L_RM23:; };
            if (rrc != 0) { rrc = rrc; goto RETURN_SWITCH; };
            if (F->temp_32[0]++ >= F->temp_32[1]) { rrc = 0; goto RETURN_SWITCH; };
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              { rrc = 0; goto RETURN_SWITCH; };
              }
            fc = *F->eptr++;







            if ((((unsigned char *)F->temp_sptr[1])[fc/8] & (1 << (fc&7))) == 0) { rrc = 0; goto RETURN_SWITCH; };
            }
          }

        }



      else
        {
        F->temp_sptr[0] = F->eptr;


        if (utf)
          {
          for (i = F->temp_32[0]; i < F->temp_32[1]; i++)
            {
            int len = 1;
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              break;
              }
            fc = *F->eptr; if (fc >= 0xc0u) { if ((fc & 0x20u) == 0) { fc = ((fc & 0x1fu) << 6) | (F->eptr[1] & 0x3fu); len++; } else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); len += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); len += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); len += 4; } else { fc = ((fc & 0x01u) << 30) | ((F->eptr[1] & 0x3fu) << 24) | ((F->eptr[2] & 0x3fu) << 18) | ((F->eptr[3] & 0x3fu) << 12) | ((F->eptr[4] & 0x3fu) << 6) | (F->eptr[5] & 0x3fu); len += 5; } };;
            if (fc > 255)
              {
              if (F->op == OP_CLASS) break;
              }
            else
              if ((((unsigned char *)F->temp_sptr[1])[fc/8] & (1 << (fc&7))) == 0) break;
            F->eptr += len;
            }

          if (reptype == REPTYPE_POS) continue;





          for (;;)
            {
            { start_ecode = F->ecode; F->return_id = RM201; goto MATCH_RECURSE; L_RM201:; };
            if (rrc != 0) { rrc = rrc; goto RETURN_SWITCH; };
            if (F->eptr-- <= F->temp_sptr[0]) break;
            while((*F->eptr & 0xc0u) == 0x80u) F->eptr--;
            }
          }
        else


          {
          for (i = F->temp_32[0]; i < F->temp_32[1]; i++)
            {
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              break;
              }
            fc = *F->eptr;







            if ((((unsigned char *)F->temp_sptr[1])[fc/8] & (1 << (fc&7))) == 0) break;
            F->eptr++;
            }

          if (reptype == REPTYPE_POS) continue;

          while (F->eptr >= F->temp_sptr[0])
            {
            { start_ecode = F->ecode; F->return_id = RM24; goto MATCH_RECURSE; L_RM24:; };
            if (rrc != 0) { rrc = rrc; goto RETURN_SWITCH; };
            F->eptr--;
            }
          }

        { rrc = 0; goto RETURN_SWITCH; };
        }
      }
    case OP_XCLASS:
      {
      F->temp_sptr[1] = F->ecode + 1 + 2;
      F->ecode += (unsigned int)(((F->ecode)[1] << 8) | (F->ecode)[(1)+1]);

      switch (*F->ecode)
        {
        case OP_CRSTAR:
        case OP_CRMINSTAR:
        case OP_CRPLUS:
        case OP_CRMINPLUS:
        case OP_CRQUERY:
        case OP_CRMINQUERY:
        case OP_CRPOSSTAR:
        case OP_CRPOSPLUS:
        case OP_CRPOSQUERY:
        fc = *F->ecode++ - OP_CRSTAR;
        F->temp_32[0] = rep_min[fc];
        F->temp_32[1] = rep_max[fc];
        reptype = rep_typ[fc];
        break;

        case OP_CRRANGE:
        case OP_CRMINRANGE:
        case OP_CRPOSRANGE:
        F->temp_32[0] = (unsigned int)(((F->ecode)[1] << 8) | (F->ecode)[(1)+1]);
        F->temp_32[1] = (unsigned int)(((F->ecode)[1 + 2] << 8) | (F->ecode)[(1 + 2)+1]);
        if (F->temp_32[1] == 0) F->temp_32[1] = (4294967295U);
        reptype = rep_typ[*F->ecode - OP_CRSTAR];
        F->ecode += 1 + 2 * 2;
        break;

        default:
        F->temp_32[0] = F->temp_32[1] = 1;
        break;
        }



      for (i = 1; i <= F->temp_32[0]; i++)
        {
        if (F->eptr >= mb->end_subject)
          {
          if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
          { rrc = 0; goto RETURN_SWITCH; };
          }
        fc = *F->eptr++; if (utf && fc >= 0xc0u) { if ((fc & 0x20u) == 0) fc = ((fc & 0x1fu) << 6) | (*F->eptr++ & 0x3fu); else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((*F->eptr & 0x3fu) << 6) | (F->eptr[1] & 0x3fu); F->eptr += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((*F->eptr & 0x3fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); F->eptr += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((*F->eptr & 0x3fu) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); F->eptr += 4; } else { fc = ((fc & 0x01u) << 30) | ((*F->eptr & 0x3fu) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); F->eptr += 5; } };;
        if (!_pcre2_xclass_8(data_flow, fc, F->temp_sptr[1], utf)) { rrc = 0; goto RETURN_SWITCH; };
        }



      if (F->temp_32[0] == F->temp_32[1]) continue;




      if (reptype == REPTYPE_MIN)
        {
        for (;;)
          {
          { start_ecode = F->ecode; F->return_id = RM100; goto MATCH_RECURSE; L_RM100:; };
          if (rrc != 0) { rrc = rrc; goto RETURN_SWITCH; };
          if (F->temp_32[0]++ >= F->temp_32[1]) { rrc = 0; goto RETURN_SWITCH; };
          if (F->eptr >= mb->end_subject)
            {
            if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
            { rrc = 0; goto RETURN_SWITCH; };
            }
          fc = *F->eptr++; if (utf && fc >= 0xc0u) { if ((fc & 0x20u) == 0) fc = ((fc & 0x1fu) << 6) | (*F->eptr++ & 0x3fu); else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((*F->eptr & 0x3fu) << 6) | (F->eptr[1] & 0x3fu); F->eptr += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((*F->eptr & 0x3fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); F->eptr += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((*F->eptr & 0x3fu) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); F->eptr += 4; } else { fc = ((fc & 0x01u) << 30) | ((*F->eptr & 0x3fu) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); F->eptr += 5; } };;
          if (!_pcre2_xclass_8(data_flow, fc, F->temp_sptr[1], utf)) { rrc = 0; goto RETURN_SWITCH; };
          }

        }



      else
        {
        F->temp_sptr[0] = F->eptr;
        for (i = F->temp_32[0]; i < F->temp_32[1]; i++)
          {
          int len = 1;
          if (F->eptr >= mb->end_subject)
            {
            if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
            break;
            }

          fc = *F->eptr; if (utf && fc >= 0xc0u) { if ((fc & 0x20u) == 0) { fc = ((fc & 0x1fu) << 6) | (F->eptr[1] & 0x3fu); len++; } else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); len += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); len += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); len += 4; } else { fc = ((fc & 0x01u) << 30) | ((F->eptr[1] & 0x3fu) << 24) | ((F->eptr[2] & 0x3fu) << 18) | ((F->eptr[3] & 0x3fu) << 12) | ((F->eptr[4] & 0x3fu) << 6) | (F->eptr[5] & 0x3fu); len += 5; } };;



          if (!_pcre2_xclass_8(data_flow, fc, F->temp_sptr[1], utf)) break;
          F->eptr += len;
          }

        if (reptype == REPTYPE_POS) continue;





        for(;;)
          {
          { start_ecode = F->ecode; F->return_id = RM101; goto MATCH_RECURSE; L_RM101:; };
          if (rrc != 0) { rrc = rrc; goto RETURN_SWITCH; };
          if (F->eptr-- <= F->temp_sptr[0]) break;

          if (utf) while((*F->eptr & 0xc0u) == 0x80u) F->eptr--;

          }
        { rrc = 0; goto RETURN_SWITCH; };
        }


      }
    case OP_NOT_DIGIT:
    if (F->eptr >= mb->end_subject)
      {
      if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
      { rrc = 0; goto RETURN_SWITCH; };
      }
    fc = *F->eptr++; if (utf && fc >= 0xc0u) { if ((fc & 0x20u) == 0) fc = ((fc & 0x1fu) << 6) | (*F->eptr++ & 0x3fu); else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((*F->eptr & 0x3fu) << 6) | (F->eptr[1] & 0x3fu); F->eptr += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((*F->eptr & 0x3fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); F->eptr += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((*F->eptr & 0x3fu) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); F->eptr += 4; } else { fc = ((fc & 0x01u) << 30) | ((*F->eptr & 0x3fu) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); F->eptr += 5; } };;
    if (((fc) <= 255u) && (mb->ctypes[fc] & 0x08) != 0)
      { rrc = 0; goto RETURN_SWITCH; };
    F->ecode++;
    break;

    case OP_DIGIT:
    if (F->eptr >= mb->end_subject)
      {
      if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
      { rrc = 0; goto RETURN_SWITCH; };
      }
    fc = *F->eptr++; if (utf && fc >= 0xc0u) { if ((fc & 0x20u) == 0) fc = ((fc & 0x1fu) << 6) | (*F->eptr++ & 0x3fu); else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((*F->eptr & 0x3fu) << 6) | (F->eptr[1] & 0x3fu); F->eptr += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((*F->eptr & 0x3fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); F->eptr += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((*F->eptr & 0x3fu) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); F->eptr += 4; } else { fc = ((fc & 0x01u) << 30) | ((*F->eptr & 0x3fu) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); F->eptr += 5; } };;
    if (!((fc) <= 255u) || (mb->ctypes[fc] & 0x08) == 0)
      { rrc = 0; goto RETURN_SWITCH; };
    F->ecode++;
    break;

    case OP_NOT_WHITESPACE:
    if (F->eptr >= mb->end_subject)
      {
      if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
      { rrc = 0; goto RETURN_SWITCH; };
      }
    fc = *F->eptr++; if (utf && fc >= 0xc0u) { if ((fc & 0x20u) == 0) fc = ((fc & 0x1fu) << 6) | (*F->eptr++ & 0x3fu); else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((*F->eptr & 0x3fu) << 6) | (F->eptr[1] & 0x3fu); F->eptr += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((*F->eptr & 0x3fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); F->eptr += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((*F->eptr & 0x3fu) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); F->eptr += 4; } else { fc = ((fc & 0x01u) << 30) | ((*F->eptr & 0x3fu) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); F->eptr += 5; } };;
    if (((fc) <= 255u) && (mb->ctypes[fc] & 0x01) != 0)
      { rrc = 0; goto RETURN_SWITCH; };
    F->ecode++;
    break;

    case OP_WHITESPACE:
    if (F->eptr >= mb->end_subject)
      {
      if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
      { rrc = 0; goto RETURN_SWITCH; };
      }
    fc = *F->eptr++; if (utf && fc >= 0xc0u) { if ((fc & 0x20u) == 0) fc = ((fc & 0x1fu) << 6) | (*F->eptr++ & 0x3fu); else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((*F->eptr & 0x3fu) << 6) | (F->eptr[1] & 0x3fu); F->eptr += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((*F->eptr & 0x3fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); F->eptr += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((*F->eptr & 0x3fu) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); F->eptr += 4; } else { fc = ((fc & 0x01u) << 30) | ((*F->eptr & 0x3fu) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); F->eptr += 5; } };;
    if (!((fc) <= 255u) || (mb->ctypes[fc] & 0x01) == 0)
      { rrc = 0; goto RETURN_SWITCH; };
    F->ecode++;
    break;

    case OP_NOT_WORDCHAR:
    if (F->eptr >= mb->end_subject)
      {
      if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
      { rrc = 0; goto RETURN_SWITCH; };
      }
    fc = *F->eptr++; if (utf && fc >= 0xc0u) { if ((fc & 0x20u) == 0) fc = ((fc & 0x1fu) << 6) | (*F->eptr++ & 0x3fu); else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((*F->eptr & 0x3fu) << 6) | (F->eptr[1] & 0x3fu); F->eptr += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((*F->eptr & 0x3fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); F->eptr += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((*F->eptr & 0x3fu) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); F->eptr += 4; } else { fc = ((fc & 0x01u) << 30) | ((*F->eptr & 0x3fu) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); F->eptr += 5; } };;
    if (((fc) <= 255u) && (mb->ctypes[fc] & 0x10) != 0)
      { rrc = 0; goto RETURN_SWITCH; };
    F->ecode++;
    break;

    case OP_WORDCHAR:
    if (F->eptr >= mb->end_subject)
      {
      if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
      { rrc = 0; goto RETURN_SWITCH; };
      }
    fc = *F->eptr++; if (utf && fc >= 0xc0u) { if ((fc & 0x20u) == 0) fc = ((fc & 0x1fu) << 6) | (*F->eptr++ & 0x3fu); else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((*F->eptr & 0x3fu) << 6) | (F->eptr[1] & 0x3fu); F->eptr += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((*F->eptr & 0x3fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); F->eptr += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((*F->eptr & 0x3fu) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); F->eptr += 4; } else { fc = ((fc & 0x01u) << 30) | ((*F->eptr & 0x3fu) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); F->eptr += 5; } };;
    if (!((fc) <= 255u) || (mb->ctypes[fc] & 0x10) == 0)
      { rrc = 0; goto RETURN_SWITCH; };
    F->ecode++;
    break;

    case OP_ANYNL:
    if (F->eptr >= mb->end_subject)
      {
      if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
      { rrc = 0; goto RETURN_SWITCH; };
      }
    fc = *F->eptr++; if (utf && fc >= 0xc0u) { if ((fc & 0x20u) == 0) fc = ((fc & 0x1fu) << 6) | (*F->eptr++ & 0x3fu); else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((*F->eptr & 0x3fu) << 6) | (F->eptr[1] & 0x3fu); F->eptr += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((*F->eptr & 0x3fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); F->eptr += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((*F->eptr & 0x3fu) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); F->eptr += 4; } else { fc = ((fc & 0x01u) << 30) | ((*F->eptr & 0x3fu) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); F->eptr += 5; } };;
    switch(fc)
      {
      default: { rrc = 0; goto RETURN_SWITCH; };

      case '\015':
      if (F->eptr >= mb->end_subject)
        {
        if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
        }
      else if ((*(F->eptr)) == '\012') F->eptr++;
      break;

      case '\012':
      break;

      case '\013':
      case '\014':
      case ((unsigned char)'\x85'):

      case 0x2028:
      case 0x2029:

      if (mb->bsr_convention == 2) { rrc = 0; goto RETURN_SWITCH; };
      break;
      }
    F->ecode++;
    break;

    case OP_NOT_HSPACE:
    if (F->eptr >= mb->end_subject)
      {
      if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
      { rrc = 0; goto RETURN_SWITCH; };
      }
    fc = *F->eptr++; if (utf && fc >= 0xc0u) { if ((fc & 0x20u) == 0) fc = ((fc & 0x1fu) << 6) | (*F->eptr++ & 0x3fu); else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((*F->eptr & 0x3fu) << 6) | (F->eptr[1] & 0x3fu); F->eptr += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((*F->eptr & 0x3fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); F->eptr += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((*F->eptr & 0x3fu) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); F->eptr += 4; } else { fc = ((fc & 0x01u) << 30) | ((*F->eptr & 0x3fu) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); F->eptr += 5; } };;
    switch(fc)
      {
      case '\011': case '\040': case ((unsigned char)'\xa0'): case 0x1680: case 0x180e: case 0x2000: case 0x2001: case 0x2002: case 0x2003: case 0x2004: case 0x2005: case 0x2006: case 0x2007: case 0x2008: case 0x2009: case 0x200A: case 0x202f: case 0x205f: case 0x3000: { rrc = 0; goto RETURN_SWITCH; };
      default: break;
      }
    F->ecode++;
    break;

    case OP_HSPACE:
    if (F->eptr >= mb->end_subject)
      {
      if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
      { rrc = 0; goto RETURN_SWITCH; };
      }
    fc = *F->eptr++; if (utf && fc >= 0xc0u) { if ((fc & 0x20u) == 0) fc = ((fc & 0x1fu) << 6) | (*F->eptr++ & 0x3fu); else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((*F->eptr & 0x3fu) << 6) | (F->eptr[1] & 0x3fu); F->eptr += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((*F->eptr & 0x3fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); F->eptr += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((*F->eptr & 0x3fu) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); F->eptr += 4; } else { fc = ((fc & 0x01u) << 30) | ((*F->eptr & 0x3fu) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); F->eptr += 5; } };;
    switch(fc)
      {
      case '\011': case '\040': case ((unsigned char)'\xa0'): case 0x1680: case 0x180e: case 0x2000: case 0x2001: case 0x2002: case 0x2003: case 0x2004: case 0x2005: case 0x2006: case 0x2007: case 0x2008: case 0x2009: case 0x200A: case 0x202f: case 0x205f: case 0x3000: break;
      default: { rrc = 0; goto RETURN_SWITCH; };
      }
    F->ecode++;
    break;

    case OP_NOT_VSPACE:
    if (F->eptr >= mb->end_subject)
      {
      if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
      { rrc = 0; goto RETURN_SWITCH; };
      }
    fc = *F->eptr++; if (utf && fc >= 0xc0u) { if ((fc & 0x20u) == 0) fc = ((fc & 0x1fu) << 6) | (*F->eptr++ & 0x3fu); else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((*F->eptr & 0x3fu) << 6) | (F->eptr[1] & 0x3fu); F->eptr += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((*F->eptr & 0x3fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); F->eptr += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((*F->eptr & 0x3fu) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); F->eptr += 4; } else { fc = ((fc & 0x01u) << 30) | ((*F->eptr & 0x3fu) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); F->eptr += 5; } };;
    switch(fc)
      {
      case '\012': case '\013': case '\014': case '\015': case ((unsigned char)'\x85'): case 0x2028: case 0x2029: { rrc = 0; goto RETURN_SWITCH; };
      default: break;
      }
    F->ecode++;
    break;

    case OP_VSPACE:
    if (F->eptr >= mb->end_subject)
      {
      if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
      { rrc = 0; goto RETURN_SWITCH; };
      }
    fc = *F->eptr++; if (utf && fc >= 0xc0u) { if ((fc & 0x20u) == 0) fc = ((fc & 0x1fu) << 6) | (*F->eptr++ & 0x3fu); else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((*F->eptr & 0x3fu) << 6) | (F->eptr[1] & 0x3fu); F->eptr += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((*F->eptr & 0x3fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); F->eptr += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((*F->eptr & 0x3fu) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); F->eptr += 4; } else { fc = ((fc & 0x01u) << 30) | ((*F->eptr & 0x3fu) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); F->eptr += 5; } };;
    switch(fc)
      {
      case '\012': case '\013': case '\014': case '\015': case ((unsigned char)'\x85'): case 0x2028: case 0x2029: break;
      default: { rrc = 0; goto RETURN_SWITCH; };
      }
    F->ecode++;
    break;
    case OP_PROP:
    case OP_NOTPROP:
    if (F->eptr >= mb->end_subject)
      {
      if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
      { rrc = 0; goto RETURN_SWITCH; };
      }
    fc = *F->eptr++; if (utf && fc >= 0xc0u) { if ((fc & 0x20u) == 0) fc = ((fc & 0x1fu) << 6) | (*F->eptr++ & 0x3fu); else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((*F->eptr & 0x3fu) << 6) | (F->eptr[1] & 0x3fu); F->eptr += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((*F->eptr & 0x3fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); F->eptr += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((*F->eptr & 0x3fu) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); F->eptr += 4; } else { fc = ((fc & 0x01u) << 30) | ((*F->eptr & 0x3fu) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); F->eptr += 5; } };;
      {
      const uint32_t *cp;
      const ucd_record *prop = (_pcre2_ucd_records_8 + _pcre2_ucd_stage2_8[_pcre2_ucd_stage1_8[(int)(fc) / 128] * 128 + (int)(fc) % 128]);

      switch(F->ecode[1])
        {
        case 0:
        if (F->op == OP_NOTPROP) { rrc = 0; goto RETURN_SWITCH; };
        break;

        case 1:
        if ((prop->chartype == ucp_Lu ||
             prop->chartype == ucp_Ll ||
             prop->chartype == ucp_Lt) == (F->op == OP_NOTPROP))
          { rrc = 0; goto RETURN_SWITCH; };
        break;

        case 2:
        if ((F->ecode[2] != _pcre2_ucp_gentype_8[prop->chartype]) == (F->op == OP_PROP))
          { rrc = 0; goto RETURN_SWITCH; };
        break;

        case 3:
        if ((F->ecode[2] != prop->chartype) == (F->op == OP_PROP))
          { rrc = 0; goto RETURN_SWITCH; };
        break;

        case 4:
        if ((F->ecode[2] != prop->script) == (F->op == OP_PROP))
          { rrc = 0; goto RETURN_SWITCH; };
        break;



        case 5:
        if ((_pcre2_ucp_gentype_8[prop->chartype] == ucp_L ||
             _pcre2_ucp_gentype_8[prop->chartype] == ucp_N) == (F->op == OP_NOTPROP))
          { rrc = 0; goto RETURN_SWITCH; };
        break;





        case 6:
        case 7:
        switch(fc)
          {
          case '\011': case '\040': case ((unsigned char)'\xa0'): case 0x1680: case 0x180e: case 0x2000: case 0x2001: case 0x2002: case 0x2003: case 0x2004: case 0x2005: case 0x2006: case 0x2007: case 0x2008: case 0x2009: case 0x200A: case 0x202f: case 0x205f: case 0x3000:
          case '\012': case '\013': case '\014': case '\015': case ((unsigned char)'\x85'): case 0x2028: case 0x2029:
          if (F->op == OP_NOTPROP) { rrc = 0; goto RETURN_SWITCH; };
          break;

          default:
          if ((_pcre2_ucp_gentype_8[prop->chartype] == ucp_Z) ==
            (F->op == OP_NOTPROP)) { rrc = 0; goto RETURN_SWITCH; };
          break;
          }
        break;

        case 8:
        if ((_pcre2_ucp_gentype_8[prop->chartype] == ucp_L ||
             _pcre2_ucp_gentype_8[prop->chartype] == ucp_N ||
             fc == '\137') == (F->op == OP_NOTPROP))
          { rrc = 0; goto RETURN_SWITCH; };
        break;

        case 9:
        cp = _pcre2_ucd_caseless_sets_8 + F->ecode[2];
        for (;;)
          {
          if (fc < *cp)
            { if (F->op == OP_PROP) { { rrc = 0; goto RETURN_SWITCH; }; } else break; }
          if (fc == *cp++)
            { if (F->op == OP_PROP) break; else { { rrc = 0; goto RETURN_SWITCH; }; } }
          }
        break;

        case 10:
        if ((fc == '\044' || fc == '\100' ||
             fc == '\140' || (fc >= 0xa0 && fc <= 0xd7ff) ||
             fc >= 0xe000) == (F->op == OP_NOTPROP))
          { rrc = 0; goto RETURN_SWITCH; };
        break;



        default:
        return (-44);
        }

      F->ecode += 3;
      }
    break;






    case OP_EXTUNI:
    if (F->eptr >= mb->end_subject)
      {
      if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
      { rrc = 0; goto RETURN_SWITCH; };
      }
    else
      {
      fc = *F->eptr++; if (utf && fc >= 0xc0u) { if ((fc & 0x20u) == 0) fc = ((fc & 0x1fu) << 6) | (*F->eptr++ & 0x3fu); else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((*F->eptr & 0x3fu) << 6) | (F->eptr[1] & 0x3fu); F->eptr += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((*F->eptr & 0x3fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); F->eptr += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((*F->eptr & 0x3fu) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); F->eptr += 4; } else { fc = ((fc & 0x01u) << 30) | ((*F->eptr & 0x3fu) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); F->eptr += 5; } };;
      F->eptr = _pcre2_extuni_8(data_flow, fc, F->eptr, mb->start_subject, mb->end_subject, utf,
        ((void *)0));
      }
    if (mb->partial != 0 && F->eptr >= mb->end_subject && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
    F->ecode++;
    break;
    case OP_TYPEEXACT:
    F->temp_32[0] = F->temp_32[1] = (unsigned int)(((F->ecode)[1] << 8) | (F->ecode)[(1)+1]);
    F->ecode += 1 + 2;
    goto REPEATTYPE;

    case OP_TYPEUPTO:
    case OP_TYPEMINUPTO:
    F->temp_32[0] = 0;
    F->temp_32[1] = (unsigned int)(((F->ecode)[1] << 8) | (F->ecode)[(1)+1]);
    reptype = (*F->ecode == OP_TYPEMINUPTO)? REPTYPE_MIN : REPTYPE_MAX;
    F->ecode += 1 + 2;
    goto REPEATTYPE;

    case OP_TYPEPOSSTAR:
    reptype = REPTYPE_POS;
    F->temp_32[0] = 0;
    F->temp_32[1] = (4294967295U);
    F->ecode++;
    goto REPEATTYPE;

    case OP_TYPEPOSPLUS:
    reptype = REPTYPE_POS;
    F->temp_32[0] = 1;
    F->temp_32[1] = (4294967295U);
    F->ecode++;
    goto REPEATTYPE;

    case OP_TYPEPOSQUERY:
    reptype = REPTYPE_POS;
    F->temp_32[0] = 0;
    F->temp_32[1] = 1;
    F->ecode++;
    goto REPEATTYPE;

    case OP_TYPEPOSUPTO:
    reptype = REPTYPE_POS;
    F->temp_32[0] = 0;
    F->temp_32[1] = (unsigned int)(((F->ecode)[1] << 8) | (F->ecode)[(1)+1]);
    F->ecode += 1 + 2;
    goto REPEATTYPE;

    case OP_TYPESTAR:
    case OP_TYPEMINSTAR:
    case OP_TYPEPLUS:
    case OP_TYPEMINPLUS:
    case OP_TYPEQUERY:
    case OP_TYPEMINQUERY:
    fc = *F->ecode++ - OP_TYPESTAR;
    F->temp_32[0] = rep_min[fc];
    F->temp_32[1] = rep_max[fc];
    reptype = rep_typ[fc];



    REPEATTYPE:
    F->temp_32[2] = *F->ecode++;


    if (F->temp_32[2] == OP_PROP || F->temp_32[2] == OP_NOTPROP)
      {
      proptype = *F->ecode++;
      F->temp_32[3] = *F->ecode++;
      }
    else proptype = -1;







    if (F->temp_32[0] > 0)
      {

      if (proptype >= 0)
        {
        switch(proptype)
          {
          case 0:
          if (F->temp_32[2] == OP_NOTPROP) { rrc = 0; goto RETURN_SWITCH; };
          for (i = 1; i <= F->temp_32[0]; i++)
            {
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              { rrc = 0; goto RETURN_SWITCH; };
              }
            fc = *F->eptr++; if (utf && fc >= 0xc0u) { if ((fc & 0x20u) == 0) fc = ((fc & 0x1fu) << 6) | (*F->eptr++ & 0x3fu); else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((*F->eptr & 0x3fu) << 6) | (F->eptr[1] & 0x3fu); F->eptr += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((*F->eptr & 0x3fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); F->eptr += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((*F->eptr & 0x3fu) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); F->eptr += 4; } else { fc = ((fc & 0x01u) << 30) | ((*F->eptr & 0x3fu) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); F->eptr += 5; } };;
            }
          break;

          case 1:
          for (i = 1; i <= F->temp_32[0]; i++)
            {
            int chartype;
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              { rrc = 0; goto RETURN_SWITCH; };
              }
            fc = *F->eptr++; if (utf && fc >= 0xc0u) { if ((fc & 0x20u) == 0) fc = ((fc & 0x1fu) << 6) | (*F->eptr++ & 0x3fu); else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((*F->eptr & 0x3fu) << 6) | (F->eptr[1] & 0x3fu); F->eptr += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((*F->eptr & 0x3fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); F->eptr += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((*F->eptr & 0x3fu) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); F->eptr += 4; } else { fc = ((fc & 0x01u) << 30) | ((*F->eptr & 0x3fu) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); F->eptr += 5; } };;
            chartype = (_pcre2_ucd_records_8 + _pcre2_ucd_stage2_8[_pcre2_ucd_stage1_8[(int)(fc) / 128] * 128 + (int)(fc) % 128])->chartype;
            if ((chartype == ucp_Lu ||
                 chartype == ucp_Ll ||
                 chartype == ucp_Lt) == (F->temp_32[2] == OP_NOTPROP))
              { rrc = 0; goto RETURN_SWITCH; };
            }
          break;

          case 2:
          for (i = 1; i <= F->temp_32[0]; i++)
            {
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              { rrc = 0; goto RETURN_SWITCH; };
              }
            fc = *F->eptr++; if (utf && fc >= 0xc0u) { if ((fc & 0x20u) == 0) fc = ((fc & 0x1fu) << 6) | (*F->eptr++ & 0x3fu); else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((*F->eptr & 0x3fu) << 6) | (F->eptr[1] & 0x3fu); F->eptr += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((*F->eptr & 0x3fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); F->eptr += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((*F->eptr & 0x3fu) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); F->eptr += 4; } else { fc = ((fc & 0x01u) << 30) | ((*F->eptr & 0x3fu) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); F->eptr += 5; } };;
            if ((_pcre2_ucp_gentype_8[(_pcre2_ucd_records_8 + _pcre2_ucd_stage2_8[_pcre2_ucd_stage1_8[(int)(fc) / 128] * 128 + (int)(fc) % 128])->chartype] == F->temp_32[3]) == (F->temp_32[2] == OP_NOTPROP))
              { rrc = 0; goto RETURN_SWITCH; };
            }
          break;

          case 3:
          for (i = 1; i <= F->temp_32[0]; i++)
            {
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              { rrc = 0; goto RETURN_SWITCH; };
              }
            fc = *F->eptr++; if (utf && fc >= 0xc0u) { if ((fc & 0x20u) == 0) fc = ((fc & 0x1fu) << 6) | (*F->eptr++ & 0x3fu); else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((*F->eptr & 0x3fu) << 6) | (F->eptr[1] & 0x3fu); F->eptr += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((*F->eptr & 0x3fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); F->eptr += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((*F->eptr & 0x3fu) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); F->eptr += 4; } else { fc = ((fc & 0x01u) << 30) | ((*F->eptr & 0x3fu) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); F->eptr += 5; } };;
            if (((_pcre2_ucd_records_8 + _pcre2_ucd_stage2_8[_pcre2_ucd_stage1_8[(int)(fc) / 128] * 128 + (int)(fc) % 128])->chartype == F->temp_32[3]) == (F->temp_32[2] == OP_NOTPROP))
              { rrc = 0; goto RETURN_SWITCH; };
            }
          break;

          case 4:
          for (i = 1; i <= F->temp_32[0]; i++)
            {
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              { rrc = 0; goto RETURN_SWITCH; };
              }
            fc = *F->eptr++; if (utf && fc >= 0xc0u) { if ((fc & 0x20u) == 0) fc = ((fc & 0x1fu) << 6) | (*F->eptr++ & 0x3fu); else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((*F->eptr & 0x3fu) << 6) | (F->eptr[1] & 0x3fu); F->eptr += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((*F->eptr & 0x3fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); F->eptr += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((*F->eptr & 0x3fu) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); F->eptr += 4; } else { fc = ((fc & 0x01u) << 30) | ((*F->eptr & 0x3fu) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); F->eptr += 5; } };;
            if (((_pcre2_ucd_records_8 + _pcre2_ucd_stage2_8[_pcre2_ucd_stage1_8[(int)(fc) / 128] * 128 + (int)(fc) % 128])->script == F->temp_32[3]) == (F->temp_32[2] == OP_NOTPROP))
              { rrc = 0; goto RETURN_SWITCH; };
            }
          break;

          case 5:
          for (i = 1; i <= F->temp_32[0]; i++)
            {
            int category;
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              { rrc = 0; goto RETURN_SWITCH; };
              }
            fc = *F->eptr++; if (utf && fc >= 0xc0u) { if ((fc & 0x20u) == 0) fc = ((fc & 0x1fu) << 6) | (*F->eptr++ & 0x3fu); else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((*F->eptr & 0x3fu) << 6) | (F->eptr[1] & 0x3fu); F->eptr += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((*F->eptr & 0x3fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); F->eptr += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((*F->eptr & 0x3fu) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); F->eptr += 4; } else { fc = ((fc & 0x01u) << 30) | ((*F->eptr & 0x3fu) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); F->eptr += 5; } };;
            category = _pcre2_ucp_gentype_8[(_pcre2_ucd_records_8 + _pcre2_ucd_stage2_8[_pcre2_ucd_stage1_8[(int)(fc) / 128] * 128 + (int)(fc) % 128])->chartype];
            if ((category == ucp_L || category == ucp_N) == (F->temp_32[2] == OP_NOTPROP))
              { rrc = 0; goto RETURN_SWITCH; };
            }
          break;





          case 6:
          case 7:
          for (i = 1; i <= F->temp_32[0]; i++)
            {
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              { rrc = 0; goto RETURN_SWITCH; };
              }
            fc = *F->eptr++; if (utf && fc >= 0xc0u) { if ((fc & 0x20u) == 0) fc = ((fc & 0x1fu) << 6) | (*F->eptr++ & 0x3fu); else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((*F->eptr & 0x3fu) << 6) | (F->eptr[1] & 0x3fu); F->eptr += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((*F->eptr & 0x3fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); F->eptr += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((*F->eptr & 0x3fu) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); F->eptr += 4; } else { fc = ((fc & 0x01u) << 30) | ((*F->eptr & 0x3fu) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); F->eptr += 5; } };;
            switch(fc)
              {
              case '\011': case '\040': case ((unsigned char)'\xa0'): case 0x1680: case 0x180e: case 0x2000: case 0x2001: case 0x2002: case 0x2003: case 0x2004: case 0x2005: case 0x2006: case 0x2007: case 0x2008: case 0x2009: case 0x200A: case 0x202f: case 0x205f: case 0x3000:
              case '\012': case '\013': case '\014': case '\015': case ((unsigned char)'\x85'): case 0x2028: case 0x2029:
              if (F->temp_32[2] == OP_NOTPROP) { rrc = 0; goto RETURN_SWITCH; };
              break;

              default:
              if ((_pcre2_ucp_gentype_8[(_pcre2_ucd_records_8 + _pcre2_ucd_stage2_8[_pcre2_ucd_stage1_8[(int)(fc) / 128] * 128 + (int)(fc) % 128])->chartype] == ucp_Z) == (F->temp_32[2] == OP_NOTPROP))
                { rrc = 0; goto RETURN_SWITCH; };
              break;
              }
            }
          break;

          case 8:
          for (i = 1; i <= F->temp_32[0]; i++)
            {
            int category;
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              { rrc = 0; goto RETURN_SWITCH; };
              }
            fc = *F->eptr++; if (utf && fc >= 0xc0u) { if ((fc & 0x20u) == 0) fc = ((fc & 0x1fu) << 6) | (*F->eptr++ & 0x3fu); else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((*F->eptr & 0x3fu) << 6) | (F->eptr[1] & 0x3fu); F->eptr += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((*F->eptr & 0x3fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); F->eptr += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((*F->eptr & 0x3fu) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); F->eptr += 4; } else { fc = ((fc & 0x01u) << 30) | ((*F->eptr & 0x3fu) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); F->eptr += 5; } };;
            category = _pcre2_ucp_gentype_8[(_pcre2_ucd_records_8 + _pcre2_ucd_stage2_8[_pcre2_ucd_stage1_8[(int)(fc) / 128] * 128 + (int)(fc) % 128])->chartype];
            if ((category == ucp_L || category == ucp_N ||
                fc == '\137') == (F->temp_32[2] == OP_NOTPROP))
              { rrc = 0; goto RETURN_SWITCH; };
            }
          break;

          case 9:
          for (i = 1; i <= F->temp_32[0]; i++)
            {
            const uint32_t *cp;
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              { rrc = 0; goto RETURN_SWITCH; };
              }
            fc = *F->eptr++; if (utf && fc >= 0xc0u) { if ((fc & 0x20u) == 0) fc = ((fc & 0x1fu) << 6) | (*F->eptr++ & 0x3fu); else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((*F->eptr & 0x3fu) << 6) | (F->eptr[1] & 0x3fu); F->eptr += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((*F->eptr & 0x3fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); F->eptr += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((*F->eptr & 0x3fu) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); F->eptr += 4; } else { fc = ((fc & 0x01u) << 30) | ((*F->eptr & 0x3fu) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); F->eptr += 5; } };;
            cp = _pcre2_ucd_caseless_sets_8 + F->temp_32[3];
            for (;;)
              {
              if (fc < *cp)
                {
                if (F->temp_32[2] == OP_NOTPROP) break;
                { rrc = 0; goto RETURN_SWITCH; };
                }
              if (fc == *cp++)
                {
                if (F->temp_32[2] == OP_NOTPROP) { rrc = 0; goto RETURN_SWITCH; };
                break;
                }
              }
            }
          break;

          case 10:
          for (i = 1; i <= F->temp_32[0]; i++)
            {
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              { rrc = 0; goto RETURN_SWITCH; };
              }
            fc = *F->eptr++; if (utf && fc >= 0xc0u) { if ((fc & 0x20u) == 0) fc = ((fc & 0x1fu) << 6) | (*F->eptr++ & 0x3fu); else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((*F->eptr & 0x3fu) << 6) | (F->eptr[1] & 0x3fu); F->eptr += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((*F->eptr & 0x3fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); F->eptr += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((*F->eptr & 0x3fu) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); F->eptr += 4; } else { fc = ((fc & 0x01u) << 30) | ((*F->eptr & 0x3fu) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); F->eptr += 5; } };;
            if ((fc == '\044' || fc == '\100' ||
                 fc == '\140' || (fc >= 0xa0 && fc <= 0xd7ff) ||
                 fc >= 0xe000) == (F->temp_32[2] == OP_NOTPROP))
              { rrc = 0; goto RETURN_SWITCH; };
            }
          break;



          default:
          return (-44);
          }
        }




      else if (F->temp_32[2] == OP_EXTUNI)
        {
        for (i = 1; i <= F->temp_32[0]; i++)
          {
          if (F->eptr >= mb->end_subject)
            {
            if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
            { rrc = 0; goto RETURN_SWITCH; };
            }
          else
            {
            fc = *F->eptr++; if (utf && fc >= 0xc0u) { if ((fc & 0x20u) == 0) fc = ((fc & 0x1fu) << 6) | (*F->eptr++ & 0x3fu); else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((*F->eptr & 0x3fu) << 6) | (F->eptr[1] & 0x3fu); F->eptr += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((*F->eptr & 0x3fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); F->eptr += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((*F->eptr & 0x3fu) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); F->eptr += 4; } else { fc = ((fc & 0x01u) << 30) | ((*F->eptr & 0x3fu) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); F->eptr += 5; } };;
            F->eptr = _pcre2_extuni_8(data_flow, fc, F->eptr, mb->start_subject,
              mb->end_subject, utf, ((void *)0));
            }
          if (mb->partial != 0 && F->eptr >= mb->end_subject && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
          }
        }
      else





      if (utf) switch(F->temp_32[2])
        {
        case OP_ANY:
        for (i = 1; i <= F->temp_32[0]; i++)
          {
          if (F->eptr >= mb->end_subject)
            {
            if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
            { rrc = 0; goto RETURN_SWITCH; };
            }
          if (((mb->nltype != 0)? ((F->eptr) < mb->end_subject && _pcre2_is_newline_8(data_flow, (F->eptr), mb->nltype, mb->end_subject, &(mb->nllen), utf)) : ((F->eptr) <= mb->end_subject - mb->nllen && (*(F->eptr)) == mb->nl[0] && (mb->nllen == 1 || (*(F->eptr+1)) == mb->nl[1]) ) )) { rrc = 0; goto RETURN_SWITCH; };
          if (mb->partial != 0 &&
              F->eptr + 1 >= mb->end_subject &&
              mb->nltype == 0 &&
              mb->nllen == 2 &&
              (*(F->eptr)) == mb->nl[0])
            {
            mb->hitend = 1;
            if (mb->partial > 1) return (-2);
            }
          F->eptr++;
          while((F->eptr < mb->end_subject) && ((*F->eptr) & 0xc0u) == 0x80u) F->eptr++;
          }
        break;

        case OP_ALLANY:
        for (i = 1; i <= F->temp_32[0]; i++)
          {
          if (F->eptr >= mb->end_subject)
            {
            if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
            { rrc = 0; goto RETURN_SWITCH; };
            }
          F->eptr++;
          while((F->eptr < mb->end_subject) && ((*F->eptr) & 0xc0u) == 0x80u) F->eptr++;
          }
        break;

        case OP_ANYBYTE:
        if (F->eptr > mb->end_subject - F->temp_32[0]) { rrc = 0; goto RETURN_SWITCH; };
        F->eptr += F->temp_32[0];
        break;

        case OP_ANYNL:
        for (i = 1; i <= F->temp_32[0]; i++)
          {
          if (F->eptr >= mb->end_subject)
            {
            if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
            { rrc = 0; goto RETURN_SWITCH; };
            }
          fc = *F->eptr++; if (fc >= 0xc0u) { if ((fc & 0x20u) == 0) fc = ((fc & 0x1fu) << 6) | (*F->eptr++ & 0x3fu); else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((*F->eptr & 0x3fu) << 6) | (F->eptr[1] & 0x3fu); F->eptr += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((*F->eptr & 0x3fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); F->eptr += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((*F->eptr & 0x3fu) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); F->eptr += 4; } else { fc = ((fc & 0x01u) << 30) | ((*F->eptr & 0x3fu) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); F->eptr += 5; } };;
          switch(fc)
            {
            default: { rrc = 0; goto RETURN_SWITCH; };

            case '\015':
            if (F->eptr < mb->end_subject && (*(F->eptr)) == '\012') F->eptr++;
            break;

            case '\012':
            break;

            case '\013':
            case '\014':
            case ((unsigned char)'\x85'):

            case 0x2028:
            case 0x2029:

            if (mb->bsr_convention == 2) { rrc = 0; goto RETURN_SWITCH; };
            break;
            }
          }
        break;

        case OP_NOT_HSPACE:
        for (i = 1; i <= F->temp_32[0]; i++)
          {
          if (F->eptr >= mb->end_subject)
            {
            if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
            { rrc = 0; goto RETURN_SWITCH; };
            }
          fc = *F->eptr++; if (fc >= 0xc0u) { if ((fc & 0x20u) == 0) fc = ((fc & 0x1fu) << 6) | (*F->eptr++ & 0x3fu); else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((*F->eptr & 0x3fu) << 6) | (F->eptr[1] & 0x3fu); F->eptr += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((*F->eptr & 0x3fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); F->eptr += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((*F->eptr & 0x3fu) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); F->eptr += 4; } else { fc = ((fc & 0x01u) << 30) | ((*F->eptr & 0x3fu) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); F->eptr += 5; } };;
          switch(fc)
            {
            case '\011': case '\040': case ((unsigned char)'\xa0'): case 0x1680: case 0x180e: case 0x2000: case 0x2001: case 0x2002: case 0x2003: case 0x2004: case 0x2005: case 0x2006: case 0x2007: case 0x2008: case 0x2009: case 0x200A: case 0x202f: case 0x205f: case 0x3000: { rrc = 0; goto RETURN_SWITCH; };
            default: break;
            }
          }
        break;

        case OP_HSPACE:
        for (i = 1; i <= F->temp_32[0]; i++)
          {
          if (F->eptr >= mb->end_subject)
            {
            if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
            { rrc = 0; goto RETURN_SWITCH; };
            }
          fc = *F->eptr++; if (fc >= 0xc0u) { if ((fc & 0x20u) == 0) fc = ((fc & 0x1fu) << 6) | (*F->eptr++ & 0x3fu); else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((*F->eptr & 0x3fu) << 6) | (F->eptr[1] & 0x3fu); F->eptr += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((*F->eptr & 0x3fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); F->eptr += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((*F->eptr & 0x3fu) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); F->eptr += 4; } else { fc = ((fc & 0x01u) << 30) | ((*F->eptr & 0x3fu) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); F->eptr += 5; } };;
          switch(fc)
            {
            case '\011': case '\040': case ((unsigned char)'\xa0'): case 0x1680: case 0x180e: case 0x2000: case 0x2001: case 0x2002: case 0x2003: case 0x2004: case 0x2005: case 0x2006: case 0x2007: case 0x2008: case 0x2009: case 0x200A: case 0x202f: case 0x205f: case 0x3000: break;
            default: { rrc = 0; goto RETURN_SWITCH; };
            }
          }
        break;

        case OP_NOT_VSPACE:
        for (i = 1; i <= F->temp_32[0]; i++)
          {
          if (F->eptr >= mb->end_subject)
            {
            if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
            { rrc = 0; goto RETURN_SWITCH; };
            }
          fc = *F->eptr++; if (fc >= 0xc0u) { if ((fc & 0x20u) == 0) fc = ((fc & 0x1fu) << 6) | (*F->eptr++ & 0x3fu); else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((*F->eptr & 0x3fu) << 6) | (F->eptr[1] & 0x3fu); F->eptr += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((*F->eptr & 0x3fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); F->eptr += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((*F->eptr & 0x3fu) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); F->eptr += 4; } else { fc = ((fc & 0x01u) << 30) | ((*F->eptr & 0x3fu) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); F->eptr += 5; } };;
          switch(fc)
            {
            case '\012': case '\013': case '\014': case '\015': case ((unsigned char)'\x85'): case 0x2028: case 0x2029: { rrc = 0; goto RETURN_SWITCH; };
            default: break;
            }
          }
        break;

        case OP_VSPACE:
        for (i = 1; i <= F->temp_32[0]; i++)
          {
          if (F->eptr >= mb->end_subject)
            {
            if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
            { rrc = 0; goto RETURN_SWITCH; };
            }
          fc = *F->eptr++; if (fc >= 0xc0u) { if ((fc & 0x20u) == 0) fc = ((fc & 0x1fu) << 6) | (*F->eptr++ & 0x3fu); else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((*F->eptr & 0x3fu) << 6) | (F->eptr[1] & 0x3fu); F->eptr += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((*F->eptr & 0x3fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); F->eptr += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((*F->eptr & 0x3fu) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); F->eptr += 4; } else { fc = ((fc & 0x01u) << 30) | ((*F->eptr & 0x3fu) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); F->eptr += 5; } };;
          switch(fc)
            {
            case '\012': case '\013': case '\014': case '\015': case ((unsigned char)'\x85'): case 0x2028: case 0x2029: break;
            default: { rrc = 0; goto RETURN_SWITCH; };
            }
          }
        break;

        case OP_NOT_DIGIT:
        for (i = 1; i <= F->temp_32[0]; i++)
          {
          if (F->eptr >= mb->end_subject)
            {
            if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
            { rrc = 0; goto RETURN_SWITCH; };
            }
          fc = *F->eptr++; if (fc >= 0xc0u) { if ((fc & 0x20u) == 0) fc = ((fc & 0x1fu) << 6) | (*F->eptr++ & 0x3fu); else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((*F->eptr & 0x3fu) << 6) | (F->eptr[1] & 0x3fu); F->eptr += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((*F->eptr & 0x3fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); F->eptr += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((*F->eptr & 0x3fu) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); F->eptr += 4; } else { fc = ((fc & 0x01u) << 30) | ((*F->eptr & 0x3fu) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); F->eptr += 5; } };;
          if (fc < 128 && (mb->ctypes[fc] & 0x08) != 0)
            { rrc = 0; goto RETURN_SWITCH; };
          }
        break;

        case OP_DIGIT:
        for (i = 1; i <= F->temp_32[0]; i++)
          {
          uint32_t cc;
          if (F->eptr >= mb->end_subject)
            {
            if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
            { rrc = 0; goto RETURN_SWITCH; };
            }
          cc = (*(F->eptr));
          if (cc >= 128 || (mb->ctypes[cc] & 0x08) == 0)
            { rrc = 0; goto RETURN_SWITCH; };
          F->eptr++;

          }
        break;

        case OP_NOT_WHITESPACE:
        for (i = 1; i <= F->temp_32[0]; i++)
          {
          uint32_t cc;
          if (F->eptr >= mb->end_subject)
            {
            if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
            { rrc = 0; goto RETURN_SWITCH; };
            }
          cc = (*(F->eptr));
          if (cc < 128 && (mb->ctypes[cc] & 0x01) != 0)
            { rrc = 0; goto RETURN_SWITCH; };
          F->eptr++;
          while((F->eptr < mb->end_subject) && ((*F->eptr) & 0xc0u) == 0x80u) F->eptr++;
          }
        break;

        case OP_WHITESPACE:
        for (i = 1; i <= F->temp_32[0]; i++)
          {
          uint32_t cc;
          if (F->eptr >= mb->end_subject)
            {
            if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
            { rrc = 0; goto RETURN_SWITCH; };
            }
          cc = (*(F->eptr));
          if (cc >= 128 || (mb->ctypes[cc] & 0x01) == 0)
            { rrc = 0; goto RETURN_SWITCH; };
          F->eptr++;

          }
        break;

        case OP_NOT_WORDCHAR:
        for (i = 1; i <= F->temp_32[0]; i++)
          {
          uint32_t cc;
          if (F->eptr >= mb->end_subject)
            {
            if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
            { rrc = 0; goto RETURN_SWITCH; };
            }
          cc = (*(F->eptr));
          if (cc < 128 && (mb->ctypes[cc] & 0x10) != 0)
            { rrc = 0; goto RETURN_SWITCH; };
          F->eptr++;
          while((F->eptr < mb->end_subject) && ((*F->eptr) & 0xc0u) == 0x80u) F->eptr++;
          }
        break;

        case OP_WORDCHAR:
        for (i = 1; i <= F->temp_32[0]; i++)
          {
          uint32_t cc;
          if (F->eptr >= mb->end_subject)
            {
            if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
            { rrc = 0; goto RETURN_SWITCH; };
            }
          cc = (*(F->eptr));
          if (cc >= 128 || (mb->ctypes[cc] & 0x10) == 0)
            { rrc = 0; goto RETURN_SWITCH; };
          F->eptr++;

          }
        break;

        default:
        return (-44);
        }

      else





      switch(F->temp_32[2])
        {
        case OP_ANY:
        for (i = 1; i <= F->temp_32[0]; i++)
          {
          if (F->eptr >= mb->end_subject)
            {
            if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
            { rrc = 0; goto RETURN_SWITCH; };
            }
          if (((mb->nltype != 0)? ((F->eptr) < mb->end_subject && _pcre2_is_newline_8(data_flow, (F->eptr), mb->nltype, mb->end_subject, &(mb->nllen), utf)) : ((F->eptr) <= mb->end_subject - mb->nllen && (*(F->eptr)) == mb->nl[0] && (mb->nllen == 1 || (*(F->eptr+1)) == mb->nl[1]) ) )) { rrc = 0; goto RETURN_SWITCH; };
          if (mb->partial != 0 &&
              F->eptr + 1 >= mb->end_subject &&
              mb->nltype == 0 &&
              mb->nllen == 2 &&
              *F->eptr == mb->nl[0])
            {
            mb->hitend = 1;
            if (mb->partial > 1) return (-2);
            }
          F->eptr++;
          }
        break;

        case OP_ALLANY:
        if (F->eptr > mb->end_subject - F->temp_32[0])
          {
          if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
          { rrc = 0; goto RETURN_SWITCH; };
          }
        F->eptr += F->temp_32[0];
        break;
        case OP_ANYNL:
        for (i = 1; i <= F->temp_32[0]; i++)
          {
          if (F->eptr >= mb->end_subject)
            {
            if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
            { rrc = 0; goto RETURN_SWITCH; };
            }
          switch(*F->eptr++)
            {
            default: { rrc = 0; goto RETURN_SWITCH; };

            case '\015':
            if (F->eptr < mb->end_subject && *F->eptr == '\012') F->eptr++;
            break;

            case '\012':
            break;

            case '\013':
            case '\014':
            case ((unsigned char)'\x85'):




            if (mb->bsr_convention == 2) { rrc = 0; goto RETURN_SWITCH; };
            break;
            }
          }
        break;

        case OP_NOT_HSPACE:
        for (i = 1; i <= F->temp_32[0]; i++)
          {
          if (F->eptr >= mb->end_subject)
            {
            if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
            { rrc = 0; goto RETURN_SWITCH; };
            }
          switch(*F->eptr++)
            {
            default: break;
            case '\011': case '\040': case ((unsigned char)'\xa0'):



            { rrc = 0; goto RETURN_SWITCH; };
            }
          }
        break;

        case OP_HSPACE:
        for (i = 1; i <= F->temp_32[0]; i++)
          {
          if (F->eptr >= mb->end_subject)
            {
            if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
            { rrc = 0; goto RETURN_SWITCH; };
            }
          switch(*F->eptr++)
            {
            default: { rrc = 0; goto RETURN_SWITCH; };
            case '\011': case '\040': case ((unsigned char)'\xa0'):



            break;
            }
          }
        break;

        case OP_NOT_VSPACE:
        for (i = 1; i <= F->temp_32[0]; i++)
          {
          if (F->eptr >= mb->end_subject)
            {
            if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
            { rrc = 0; goto RETURN_SWITCH; };
            }
          switch(*F->eptr++)
            {
            case '\012': case '\013': case '\014': case '\015': case ((unsigned char)'\x85'):



            { rrc = 0; goto RETURN_SWITCH; };
            default: break;
            }
          }
        break;

        case OP_VSPACE:
        for (i = 1; i <= F->temp_32[0]; i++)
          {
          if (F->eptr >= mb->end_subject)
            {
            if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
            { rrc = 0; goto RETURN_SWITCH; };
            }
          switch(*F->eptr++)
            {
            default: { rrc = 0; goto RETURN_SWITCH; };
            case '\012': case '\013': case '\014': case '\015': case ((unsigned char)'\x85'):



            break;
            }
          }
        break;

        case OP_NOT_DIGIT:
        for (i = 1; i <= F->temp_32[0]; i++)
          {
          if (F->eptr >= mb->end_subject)
            {
            if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
            { rrc = 0; goto RETURN_SWITCH; };
            }
          if (1 && (mb->ctypes[*F->eptr] & 0x08) != 0)
            { rrc = 0; goto RETURN_SWITCH; };
          F->eptr++;
          }
        break;

        case OP_DIGIT:
        for (i = 1; i <= F->temp_32[0]; i++)
          {
          if (F->eptr >= mb->end_subject)
            {
            if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
            { rrc = 0; goto RETURN_SWITCH; };
            }
          if (!1 || (mb->ctypes[*F->eptr] & 0x08) == 0)
            { rrc = 0; goto RETURN_SWITCH; };
          F->eptr++;
          }
        break;

        case OP_NOT_WHITESPACE:
        for (i = 1; i <= F->temp_32[0]; i++)
          {
          if (F->eptr >= mb->end_subject)
            {
            if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
            { rrc = 0; goto RETURN_SWITCH; };
            }
          if (1 && (mb->ctypes[*F->eptr] & 0x01) != 0)
            { rrc = 0; goto RETURN_SWITCH; };
          F->eptr++;
          }
        break;

        case OP_WHITESPACE:
        for (i = 1; i <= F->temp_32[0]; i++)
          {
          if (F->eptr >= mb->end_subject)
            {
            if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
            { rrc = 0; goto RETURN_SWITCH; };
            }
          if (!1 || (mb->ctypes[*F->eptr] & 0x01) == 0)
            { rrc = 0; goto RETURN_SWITCH; };
          F->eptr++;
          }
        break;

        case OP_NOT_WORDCHAR:
        for (i = 1; i <= F->temp_32[0]; i++)
          {
          if (F->eptr >= mb->end_subject)
            {
            if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
            { rrc = 0; goto RETURN_SWITCH; };
            }
          if (1 && (mb->ctypes[*F->eptr] & 0x10) != 0)
            { rrc = 0; goto RETURN_SWITCH; };
          F->eptr++;
          }
        break;

        case OP_WORDCHAR:
        for (i = 1; i <= F->temp_32[0]; i++)
          {
          if (F->eptr >= mb->end_subject)
            {
            if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
            { rrc = 0; goto RETURN_SWITCH; };
            }
          if (!1 || (mb->ctypes[*F->eptr] & 0x10) == 0)
            { rrc = 0; goto RETURN_SWITCH; };
          F->eptr++;
          }
        break;

        default:
        return (-44);
        }
      }



    if (F->temp_32[0] == F->temp_32[1]) continue;




    if (reptype == REPTYPE_MIN)
      {

      if (proptype >= 0)
        {
        switch(proptype)
          {
          case 0:
          for (;;)
            {
            { start_ecode = F->ecode; F->return_id = RM208; goto MATCH_RECURSE; L_RM208:; };
            if (rrc != 0) { rrc = rrc; goto RETURN_SWITCH; };
            if (F->temp_32[0]++ >= F->temp_32[1]) { rrc = 0; goto RETURN_SWITCH; };
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              { rrc = 0; goto RETURN_SWITCH; };
              }
            fc = *F->eptr++; if (utf && fc >= 0xc0u) { if ((fc & 0x20u) == 0) fc = ((fc & 0x1fu) << 6) | (*F->eptr++ & 0x3fu); else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((*F->eptr & 0x3fu) << 6) | (F->eptr[1] & 0x3fu); F->eptr += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((*F->eptr & 0x3fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); F->eptr += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((*F->eptr & 0x3fu) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); F->eptr += 4; } else { fc = ((fc & 0x01u) << 30) | ((*F->eptr & 0x3fu) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); F->eptr += 5; } };;
            if (F->temp_32[2] == OP_NOTPROP) { rrc = 0; goto RETURN_SWITCH; };
            }


          case 1:
          for (;;)
            {
            int chartype;
            { start_ecode = F->ecode; F->return_id = RM209; goto MATCH_RECURSE; L_RM209:; };
            if (rrc != 0) { rrc = rrc; goto RETURN_SWITCH; };
            if (F->temp_32[0]++ >= F->temp_32[1]) { rrc = 0; goto RETURN_SWITCH; };
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              { rrc = 0; goto RETURN_SWITCH; };
              }
            fc = *F->eptr++; if (utf && fc >= 0xc0u) { if ((fc & 0x20u) == 0) fc = ((fc & 0x1fu) << 6) | (*F->eptr++ & 0x3fu); else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((*F->eptr & 0x3fu) << 6) | (F->eptr[1] & 0x3fu); F->eptr += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((*F->eptr & 0x3fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); F->eptr += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((*F->eptr & 0x3fu) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); F->eptr += 4; } else { fc = ((fc & 0x01u) << 30) | ((*F->eptr & 0x3fu) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); F->eptr += 5; } };;
            chartype = (_pcre2_ucd_records_8 + _pcre2_ucd_stage2_8[_pcre2_ucd_stage1_8[(int)(fc) / 128] * 128 + (int)(fc) % 128])->chartype;
            if ((chartype == ucp_Lu ||
                 chartype == ucp_Ll ||
                 chartype == ucp_Lt) == (F->temp_32[2] == OP_NOTPROP))
              { rrc = 0; goto RETURN_SWITCH; };
            }


          case 2:
          for (;;)
            {
            { start_ecode = F->ecode; F->return_id = RM210; goto MATCH_RECURSE; L_RM210:; };
            if (rrc != 0) { rrc = rrc; goto RETURN_SWITCH; };
            if (F->temp_32[0]++ >= F->temp_32[1]) { rrc = 0; goto RETURN_SWITCH; };
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              { rrc = 0; goto RETURN_SWITCH; };
              }
            fc = *F->eptr++; if (utf && fc >= 0xc0u) { if ((fc & 0x20u) == 0) fc = ((fc & 0x1fu) << 6) | (*F->eptr++ & 0x3fu); else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((*F->eptr & 0x3fu) << 6) | (F->eptr[1] & 0x3fu); F->eptr += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((*F->eptr & 0x3fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); F->eptr += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((*F->eptr & 0x3fu) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); F->eptr += 4; } else { fc = ((fc & 0x01u) << 30) | ((*F->eptr & 0x3fu) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); F->eptr += 5; } };;
            if ((_pcre2_ucp_gentype_8[(_pcre2_ucd_records_8 + _pcre2_ucd_stage2_8[_pcre2_ucd_stage1_8[(int)(fc) / 128] * 128 + (int)(fc) % 128])->chartype] == F->temp_32[3]) == (F->temp_32[2] == OP_NOTPROP))
              { rrc = 0; goto RETURN_SWITCH; };
            }


          case 3:
          for (;;)
            {
            { start_ecode = F->ecode; F->return_id = RM211; goto MATCH_RECURSE; L_RM211:; };
            if (rrc != 0) { rrc = rrc; goto RETURN_SWITCH; };
            if (F->temp_32[0]++ >= F->temp_32[1]) { rrc = 0; goto RETURN_SWITCH; };
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              { rrc = 0; goto RETURN_SWITCH; };
              }
            fc = *F->eptr++; if (utf && fc >= 0xc0u) { if ((fc & 0x20u) == 0) fc = ((fc & 0x1fu) << 6) | (*F->eptr++ & 0x3fu); else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((*F->eptr & 0x3fu) << 6) | (F->eptr[1] & 0x3fu); F->eptr += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((*F->eptr & 0x3fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); F->eptr += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((*F->eptr & 0x3fu) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); F->eptr += 4; } else { fc = ((fc & 0x01u) << 30) | ((*F->eptr & 0x3fu) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); F->eptr += 5; } };;
            if (((_pcre2_ucd_records_8 + _pcre2_ucd_stage2_8[_pcre2_ucd_stage1_8[(int)(fc) / 128] * 128 + (int)(fc) % 128])->chartype == F->temp_32[3]) == (F->temp_32[2] == OP_NOTPROP))
              { rrc = 0; goto RETURN_SWITCH; };
            }


          case 4:
          for (;;)
            {
            { start_ecode = F->ecode; F->return_id = RM212; goto MATCH_RECURSE; L_RM212:; };
            if (rrc != 0) { rrc = rrc; goto RETURN_SWITCH; };
            if (F->temp_32[0]++ >= F->temp_32[1]) { rrc = 0; goto RETURN_SWITCH; };
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              { rrc = 0; goto RETURN_SWITCH; };
              }
            fc = *F->eptr++; if (utf && fc >= 0xc0u) { if ((fc & 0x20u) == 0) fc = ((fc & 0x1fu) << 6) | (*F->eptr++ & 0x3fu); else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((*F->eptr & 0x3fu) << 6) | (F->eptr[1] & 0x3fu); F->eptr += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((*F->eptr & 0x3fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); F->eptr += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((*F->eptr & 0x3fu) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); F->eptr += 4; } else { fc = ((fc & 0x01u) << 30) | ((*F->eptr & 0x3fu) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); F->eptr += 5; } };;
            if (((_pcre2_ucd_records_8 + _pcre2_ucd_stage2_8[_pcre2_ucd_stage1_8[(int)(fc) / 128] * 128 + (int)(fc) % 128])->script == F->temp_32[3]) == (F->temp_32[2] == OP_NOTPROP))
              { rrc = 0; goto RETURN_SWITCH; };
            }


          case 5:
          for (;;)
            {
            int category;
            { start_ecode = F->ecode; F->return_id = RM213; goto MATCH_RECURSE; L_RM213:; };
            if (rrc != 0) { rrc = rrc; goto RETURN_SWITCH; };
            if (F->temp_32[0]++ >= F->temp_32[1]) { rrc = 0; goto RETURN_SWITCH; };
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              { rrc = 0; goto RETURN_SWITCH; };
              }
            fc = *F->eptr++; if (utf && fc >= 0xc0u) { if ((fc & 0x20u) == 0) fc = ((fc & 0x1fu) << 6) | (*F->eptr++ & 0x3fu); else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((*F->eptr & 0x3fu) << 6) | (F->eptr[1] & 0x3fu); F->eptr += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((*F->eptr & 0x3fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); F->eptr += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((*F->eptr & 0x3fu) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); F->eptr += 4; } else { fc = ((fc & 0x01u) << 30) | ((*F->eptr & 0x3fu) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); F->eptr += 5; } };;
            category = _pcre2_ucp_gentype_8[(_pcre2_ucd_records_8 + _pcre2_ucd_stage2_8[_pcre2_ucd_stage1_8[(int)(fc) / 128] * 128 + (int)(fc) % 128])->chartype];
            if ((category == ucp_L || category == ucp_N) ==
                (F->temp_32[2] == OP_NOTPROP))
              { rrc = 0; goto RETURN_SWITCH; };
            }






          case 6:
          case 7:
          for (;;)
            {
            { start_ecode = F->ecode; F->return_id = RM214; goto MATCH_RECURSE; L_RM214:; };
            if (rrc != 0) { rrc = rrc; goto RETURN_SWITCH; };
            if (F->temp_32[0]++ >= F->temp_32[1]) { rrc = 0; goto RETURN_SWITCH; };
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              { rrc = 0; goto RETURN_SWITCH; };
              }
            fc = *F->eptr++; if (utf && fc >= 0xc0u) { if ((fc & 0x20u) == 0) fc = ((fc & 0x1fu) << 6) | (*F->eptr++ & 0x3fu); else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((*F->eptr & 0x3fu) << 6) | (F->eptr[1] & 0x3fu); F->eptr += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((*F->eptr & 0x3fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); F->eptr += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((*F->eptr & 0x3fu) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); F->eptr += 4; } else { fc = ((fc & 0x01u) << 30) | ((*F->eptr & 0x3fu) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); F->eptr += 5; } };;
            switch(fc)
              {
              case '\011': case '\040': case ((unsigned char)'\xa0'): case 0x1680: case 0x180e: case 0x2000: case 0x2001: case 0x2002: case 0x2003: case 0x2004: case 0x2005: case 0x2006: case 0x2007: case 0x2008: case 0x2009: case 0x200A: case 0x202f: case 0x205f: case 0x3000:
              case '\012': case '\013': case '\014': case '\015': case ((unsigned char)'\x85'): case 0x2028: case 0x2029:
              if (F->temp_32[2] == OP_NOTPROP) { rrc = 0; goto RETURN_SWITCH; };
              break;

              default:
              if ((_pcre2_ucp_gentype_8[(_pcre2_ucd_records_8 + _pcre2_ucd_stage2_8[_pcre2_ucd_stage1_8[(int)(fc) / 128] * 128 + (int)(fc) % 128])->chartype] == ucp_Z) == (F->temp_32[2] == OP_NOTPROP))
                { rrc = 0; goto RETURN_SWITCH; };
              break;
              }
            }


          case 8:
          for (;;)
            {
            int category;
            { start_ecode = F->ecode; F->return_id = RM215; goto MATCH_RECURSE; L_RM215:; };
            if (rrc != 0) { rrc = rrc; goto RETURN_SWITCH; };
            if (F->temp_32[0]++ >= F->temp_32[1]) { rrc = 0; goto RETURN_SWITCH; };
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              { rrc = 0; goto RETURN_SWITCH; };
              }
            fc = *F->eptr++; if (utf && fc >= 0xc0u) { if ((fc & 0x20u) == 0) fc = ((fc & 0x1fu) << 6) | (*F->eptr++ & 0x3fu); else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((*F->eptr & 0x3fu) << 6) | (F->eptr[1] & 0x3fu); F->eptr += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((*F->eptr & 0x3fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); F->eptr += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((*F->eptr & 0x3fu) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); F->eptr += 4; } else { fc = ((fc & 0x01u) << 30) | ((*F->eptr & 0x3fu) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); F->eptr += 5; } };;
            category = _pcre2_ucp_gentype_8[(_pcre2_ucd_records_8 + _pcre2_ucd_stage2_8[_pcre2_ucd_stage1_8[(int)(fc) / 128] * 128 + (int)(fc) % 128])->chartype];
            if ((category == ucp_L ||
                 category == ucp_N ||
                 fc == '\137') == (F->temp_32[2] == OP_NOTPROP))
              { rrc = 0; goto RETURN_SWITCH; };
            }


          case 9:
          for (;;)
            {
            const uint32_t *cp;
            { start_ecode = F->ecode; F->return_id = RM216; goto MATCH_RECURSE; L_RM216:; };
            if (rrc != 0) { rrc = rrc; goto RETURN_SWITCH; };
            if (F->temp_32[0]++ >= F->temp_32[1]) { rrc = 0; goto RETURN_SWITCH; };
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              { rrc = 0; goto RETURN_SWITCH; };
              }
            fc = *F->eptr++; if (utf && fc >= 0xc0u) { if ((fc & 0x20u) == 0) fc = ((fc & 0x1fu) << 6) | (*F->eptr++ & 0x3fu); else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((*F->eptr & 0x3fu) << 6) | (F->eptr[1] & 0x3fu); F->eptr += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((*F->eptr & 0x3fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); F->eptr += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((*F->eptr & 0x3fu) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); F->eptr += 4; } else { fc = ((fc & 0x01u) << 30) | ((*F->eptr & 0x3fu) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); F->eptr += 5; } };;
            cp = _pcre2_ucd_caseless_sets_8 + F->temp_32[3];
            for (;;)
              {
              if (fc < *cp)
                {
                if (F->temp_32[2] == OP_NOTPROP) break;
                { rrc = 0; goto RETURN_SWITCH; };
                }
              if (fc == *cp++)
                {
                if (F->temp_32[2] == OP_NOTPROP) { rrc = 0; goto RETURN_SWITCH; };
                break;
                }
              }
            }


          case 10:
          for (;;)
            {
            { start_ecode = F->ecode; F->return_id = RM217; goto MATCH_RECURSE; L_RM217:; };
            if (rrc != 0) { rrc = rrc; goto RETURN_SWITCH; };
            if (F->temp_32[0]++ >= F->temp_32[1]) { rrc = 0; goto RETURN_SWITCH; };
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              { rrc = 0; goto RETURN_SWITCH; };
              }
            fc = *F->eptr++; if (utf && fc >= 0xc0u) { if ((fc & 0x20u) == 0) fc = ((fc & 0x1fu) << 6) | (*F->eptr++ & 0x3fu); else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((*F->eptr & 0x3fu) << 6) | (F->eptr[1] & 0x3fu); F->eptr += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((*F->eptr & 0x3fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); F->eptr += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((*F->eptr & 0x3fu) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); F->eptr += 4; } else { fc = ((fc & 0x01u) << 30) | ((*F->eptr & 0x3fu) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); F->eptr += 5; } };;
            if ((fc == '\044' || fc == '\100' ||
                 fc == '\140' || (fc >= 0xa0 && fc <= 0xd7ff) ||
                 fc >= 0xe000) == (F->temp_32[2] == OP_NOTPROP))
              { rrc = 0; goto RETURN_SWITCH; };
            }



          default:
          return (-44);
          }
        }




      else if (F->temp_32[2] == OP_EXTUNI)
        {
        for (;;)
          {
          { start_ecode = F->ecode; F->return_id = RM218; goto MATCH_RECURSE; L_RM218:; };
          if (rrc != 0) { rrc = rrc; goto RETURN_SWITCH; };
          if (F->temp_32[0]++ >= F->temp_32[1]) { rrc = 0; goto RETURN_SWITCH; };
          if (F->eptr >= mb->end_subject)
            {
            if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
            { rrc = 0; goto RETURN_SWITCH; };
            }
          else
            {
            fc = *F->eptr++; if (utf && fc >= 0xc0u) { if ((fc & 0x20u) == 0) fc = ((fc & 0x1fu) << 6) | (*F->eptr++ & 0x3fu); else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((*F->eptr & 0x3fu) << 6) | (F->eptr[1] & 0x3fu); F->eptr += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((*F->eptr & 0x3fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); F->eptr += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((*F->eptr & 0x3fu) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); F->eptr += 4; } else { fc = ((fc & 0x01u) << 30) | ((*F->eptr & 0x3fu) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); F->eptr += 5; } };;
            F->eptr = _pcre2_extuni_8(data_flow, fc, F->eptr, mb->start_subject, mb->end_subject,
              utf, ((void *)0));
            }
          if (mb->partial != 0 && F->eptr >= mb->end_subject && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
          }
        }
      else





      if (utf)
        {
        for (;;)
          {
          { start_ecode = F->ecode; F->return_id = RM219; goto MATCH_RECURSE; L_RM219:; };
          if (rrc != 0) { rrc = rrc; goto RETURN_SWITCH; };
          if (F->temp_32[0]++ >= F->temp_32[1]) { rrc = 0; goto RETURN_SWITCH; };
          if (F->eptr >= mb->end_subject)
            {
            if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
            { rrc = 0; goto RETURN_SWITCH; };
            }
          if (F->temp_32[2] == OP_ANY && ((mb->nltype != 0)? ((F->eptr) < mb->end_subject && _pcre2_is_newline_8(data_flow, (F->eptr), mb->nltype, mb->end_subject, &(mb->nllen), utf)) : ((F->eptr) <= mb->end_subject - mb->nllen && (*(F->eptr)) == mb->nl[0] && (mb->nllen == 1 || (*(F->eptr+1)) == mb->nl[1]) ) )) { rrc = 0; goto RETURN_SWITCH; };
          fc = *F->eptr++; if (fc >= 0xc0u) { if ((fc & 0x20u) == 0) fc = ((fc & 0x1fu) << 6) | (*F->eptr++ & 0x3fu); else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((*F->eptr & 0x3fu) << 6) | (F->eptr[1] & 0x3fu); F->eptr += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((*F->eptr & 0x3fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); F->eptr += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((*F->eptr & 0x3fu) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); F->eptr += 4; } else { fc = ((fc & 0x01u) << 30) | ((*F->eptr & 0x3fu) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); F->eptr += 5; } };;
          switch(F->temp_32[2])
            {
            case OP_ANY:
            if (mb->partial != 0 &&
                F->eptr >= mb->end_subject &&
                mb->nltype == 0 &&
                mb->nllen == 2 &&
                fc == mb->nl[0])
              {
              mb->hitend = 1;
              if (mb->partial > 1) return (-2);
              }
            break;

            case OP_ALLANY:
            case OP_ANYBYTE:
            break;

            case OP_ANYNL:
            switch(fc)
              {
              default: { rrc = 0; goto RETURN_SWITCH; };

              case '\015':
              if (F->eptr < mb->end_subject && (*(F->eptr)) == '\012') F->eptr++;
              break;

              case '\012':
              break;

              case '\013':
              case '\014':
              case ((unsigned char)'\x85'):

              case 0x2028:
              case 0x2029:

              if (mb->bsr_convention == 2)
                { rrc = 0; goto RETURN_SWITCH; };
              break;
              }
            break;

            case OP_NOT_HSPACE:
            switch(fc)
              {
              case '\011': case '\040': case ((unsigned char)'\xa0'): case 0x1680: case 0x180e: case 0x2000: case 0x2001: case 0x2002: case 0x2003: case 0x2004: case 0x2005: case 0x2006: case 0x2007: case 0x2008: case 0x2009: case 0x200A: case 0x202f: case 0x205f: case 0x3000: { rrc = 0; goto RETURN_SWITCH; };
              default: break;
              }
            break;

            case OP_HSPACE:
            switch(fc)
              {
              case '\011': case '\040': case ((unsigned char)'\xa0'): case 0x1680: case 0x180e: case 0x2000: case 0x2001: case 0x2002: case 0x2003: case 0x2004: case 0x2005: case 0x2006: case 0x2007: case 0x2008: case 0x2009: case 0x200A: case 0x202f: case 0x205f: case 0x3000: break;
              default: { rrc = 0; goto RETURN_SWITCH; };
              }
            break;

            case OP_NOT_VSPACE:
            switch(fc)
              {
              case '\012': case '\013': case '\014': case '\015': case ((unsigned char)'\x85'): case 0x2028: case 0x2029: { rrc = 0; goto RETURN_SWITCH; };
              default: break;
              }
            break;

            case OP_VSPACE:
            switch(fc)
              {
              case '\012': case '\013': case '\014': case '\015': case ((unsigned char)'\x85'): case 0x2028: case 0x2029: break;
              default: { rrc = 0; goto RETURN_SWITCH; };
              }
            break;

            case OP_NOT_DIGIT:
            if (fc < 256 && (mb->ctypes[fc] & 0x08) != 0)
              { rrc = 0; goto RETURN_SWITCH; };
            break;

            case OP_DIGIT:
            if (fc >= 256 || (mb->ctypes[fc] & 0x08) == 0)
              { rrc = 0; goto RETURN_SWITCH; };
            break;

            case OP_NOT_WHITESPACE:
            if (fc < 256 && (mb->ctypes[fc] & 0x01) != 0)
              { rrc = 0; goto RETURN_SWITCH; };
            break;

            case OP_WHITESPACE:
            if (fc >= 256 || (mb->ctypes[fc] & 0x01) == 0)
              { rrc = 0; goto RETURN_SWITCH; };
            break;

            case OP_NOT_WORDCHAR:
            if (fc < 256 && (mb->ctypes[fc] & 0x10) != 0)
              { rrc = 0; goto RETURN_SWITCH; };
            break;

            case OP_WORDCHAR:
            if (fc >= 256 || (mb->ctypes[fc] & 0x10) == 0)
              { rrc = 0; goto RETURN_SWITCH; };
            break;

            default:
            return (-44);
            }
          }
        }
      else



        {
        for (;;)
          {
          { start_ecode = F->ecode; F->return_id = RM33; goto MATCH_RECURSE; L_RM33:; };
          if (rrc != 0) { rrc = rrc; goto RETURN_SWITCH; };
          if (F->temp_32[0]++ >= F->temp_32[1]) { rrc = 0; goto RETURN_SWITCH; };
          if (F->eptr >= mb->end_subject)
            {
            if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
            { rrc = 0; goto RETURN_SWITCH; };
            }
          if (F->temp_32[2] == OP_ANY && ((mb->nltype != 0)? ((F->eptr) < mb->end_subject && _pcre2_is_newline_8(data_flow, (F->eptr), mb->nltype, mb->end_subject, &(mb->nllen), utf)) : ((F->eptr) <= mb->end_subject - mb->nllen && (*(F->eptr)) == mb->nl[0] && (mb->nllen == 1 || (*(F->eptr+1)) == mb->nl[1]) ) ))
            { rrc = 0; goto RETURN_SWITCH; };
          fc = *F->eptr++;
          switch(F->temp_32[2])
            {
            case OP_ANY:
            if (mb->partial != 0 &&
                F->eptr >= mb->end_subject &&
                mb->nltype == 0 &&
                mb->nllen == 2 &&
                fc == mb->nl[0])
              {
              mb->hitend = 1;
              if (mb->partial > 1) return (-2);
              }
            break;

            case OP_ALLANY:
            case OP_ANYBYTE:
            break;

            case OP_ANYNL:
            switch(fc)
              {
              default: { rrc = 0; goto RETURN_SWITCH; };

              case '\015':
              if (F->eptr < mb->end_subject && *F->eptr == '\012') F->eptr++;
              break;

              case '\012':
              break;

              case '\013':
              case '\014':
              case ((unsigned char)'\x85'):




              if (mb->bsr_convention == 2)
                { rrc = 0; goto RETURN_SWITCH; };
              break;
              }
            break;

            case OP_NOT_HSPACE:
            switch(fc)
              {
              default: break;
              case '\011': case '\040': case ((unsigned char)'\xa0'):



              { rrc = 0; goto RETURN_SWITCH; };
              }
            break;

            case OP_HSPACE:
            switch(fc)
              {
              default: { rrc = 0; goto RETURN_SWITCH; };
              case '\011': case '\040': case ((unsigned char)'\xa0'):



              break;
              }
            break;

            case OP_NOT_VSPACE:
            switch(fc)
              {
              default: break;
              case '\012': case '\013': case '\014': case '\015': case ((unsigned char)'\x85'):



              { rrc = 0; goto RETURN_SWITCH; };
              }
            break;

            case OP_VSPACE:
            switch(fc)
              {
              default: { rrc = 0; goto RETURN_SWITCH; };
              case '\012': case '\013': case '\014': case '\015': case ((unsigned char)'\x85'):



              break;
              }
            break;

            case OP_NOT_DIGIT:
            if (1 && (mb->ctypes[fc] & 0x08) != 0)
              { rrc = 0; goto RETURN_SWITCH; };
            break;

            case OP_DIGIT:
            if (!1 || (mb->ctypes[fc] & 0x08) == 0)
              { rrc = 0; goto RETURN_SWITCH; };
            break;

            case OP_NOT_WHITESPACE:
            if (1 && (mb->ctypes[fc] & 0x01) != 0)
              { rrc = 0; goto RETURN_SWITCH; };
            break;

            case OP_WHITESPACE:
            if (!1 || (mb->ctypes[fc] & 0x01) == 0)
              { rrc = 0; goto RETURN_SWITCH; };
            break;

            case OP_NOT_WORDCHAR:
            if (1 && (mb->ctypes[fc] & 0x10) != 0)
              { rrc = 0; goto RETURN_SWITCH; };
            break;

            case OP_WORDCHAR:
            if (!1 || (mb->ctypes[fc] & 0x10) == 0)
              { rrc = 0; goto RETURN_SWITCH; };
            break;

            default:
            return (-44);
            }
          }
        }

      }




    else
      {
      F->temp_sptr[0] = F->eptr;


      if (proptype >= 0)
        {
        switch(proptype)
          {
          case 0:
          for (i = F->temp_32[0]; i < F->temp_32[1]; i++)
            {
            int len = 1;
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              break;
              }
            fc = *F->eptr; if (utf && fc >= 0xc0u) { if ((fc & 0x20u) == 0) { fc = ((fc & 0x1fu) << 6) | (F->eptr[1] & 0x3fu); len++; } else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); len += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); len += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); len += 4; } else { fc = ((fc & 0x01u) << 30) | ((F->eptr[1] & 0x3fu) << 24) | ((F->eptr[2] & 0x3fu) << 18) | ((F->eptr[3] & 0x3fu) << 12) | ((F->eptr[4] & 0x3fu) << 6) | (F->eptr[5] & 0x3fu); len += 5; } };;
            if (F->temp_32[2] == OP_NOTPROP) break;
            F->eptr+= len;
            }
          break;

          case 1:
          for (i = F->temp_32[0]; i < F->temp_32[1]; i++)
            {
            int chartype;
            int len = 1;
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              break;
              }
            fc = *F->eptr; if (utf && fc >= 0xc0u) { if ((fc & 0x20u) == 0) { fc = ((fc & 0x1fu) << 6) | (F->eptr[1] & 0x3fu); len++; } else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); len += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); len += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); len += 4; } else { fc = ((fc & 0x01u) << 30) | ((F->eptr[1] & 0x3fu) << 24) | ((F->eptr[2] & 0x3fu) << 18) | ((F->eptr[3] & 0x3fu) << 12) | ((F->eptr[4] & 0x3fu) << 6) | (F->eptr[5] & 0x3fu); len += 5; } };;
            chartype = (_pcre2_ucd_records_8 + _pcre2_ucd_stage2_8[_pcre2_ucd_stage1_8[(int)(fc) / 128] * 128 + (int)(fc) % 128])->chartype;
            if ((chartype == ucp_Lu ||
                 chartype == ucp_Ll ||
                 chartype == ucp_Lt) == (F->temp_32[2] == OP_NOTPROP))
              break;
            F->eptr+= len;
            }
          break;

          case 2:
          for (i = F->temp_32[0]; i < F->temp_32[1]; i++)
            {
            int len = 1;
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              break;
              }
            fc = *F->eptr; if (utf && fc >= 0xc0u) { if ((fc & 0x20u) == 0) { fc = ((fc & 0x1fu) << 6) | (F->eptr[1] & 0x3fu); len++; } else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); len += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); len += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); len += 4; } else { fc = ((fc & 0x01u) << 30) | ((F->eptr[1] & 0x3fu) << 24) | ((F->eptr[2] & 0x3fu) << 18) | ((F->eptr[3] & 0x3fu) << 12) | ((F->eptr[4] & 0x3fu) << 6) | (F->eptr[5] & 0x3fu); len += 5; } };;
            if ((_pcre2_ucp_gentype_8[(_pcre2_ucd_records_8 + _pcre2_ucd_stage2_8[_pcre2_ucd_stage1_8[(int)(fc) / 128] * 128 + (int)(fc) % 128])->chartype] == F->temp_32[3]) == (F->temp_32[2] == OP_NOTPROP))
              break;
            F->eptr+= len;
            }
          break;

          case 3:
          for (i = F->temp_32[0]; i < F->temp_32[1]; i++)
            {
            int len = 1;
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              break;
              }
            fc = *F->eptr; if (utf && fc >= 0xc0u) { if ((fc & 0x20u) == 0) { fc = ((fc & 0x1fu) << 6) | (F->eptr[1] & 0x3fu); len++; } else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); len += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); len += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); len += 4; } else { fc = ((fc & 0x01u) << 30) | ((F->eptr[1] & 0x3fu) << 24) | ((F->eptr[2] & 0x3fu) << 18) | ((F->eptr[3] & 0x3fu) << 12) | ((F->eptr[4] & 0x3fu) << 6) | (F->eptr[5] & 0x3fu); len += 5; } };;
            if (((_pcre2_ucd_records_8 + _pcre2_ucd_stage2_8[_pcre2_ucd_stage1_8[(int)(fc) / 128] * 128 + (int)(fc) % 128])->chartype == F->temp_32[3]) == (F->temp_32[2] == OP_NOTPROP))
              break;
            F->eptr+= len;
            }
          break;

          case 4:
          for (i = F->temp_32[0]; i < F->temp_32[1]; i++)
            {
            int len = 1;
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              break;
              }
            fc = *F->eptr; if (utf && fc >= 0xc0u) { if ((fc & 0x20u) == 0) { fc = ((fc & 0x1fu) << 6) | (F->eptr[1] & 0x3fu); len++; } else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); len += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); len += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); len += 4; } else { fc = ((fc & 0x01u) << 30) | ((F->eptr[1] & 0x3fu) << 24) | ((F->eptr[2] & 0x3fu) << 18) | ((F->eptr[3] & 0x3fu) << 12) | ((F->eptr[4] & 0x3fu) << 6) | (F->eptr[5] & 0x3fu); len += 5; } };;
            if (((_pcre2_ucd_records_8 + _pcre2_ucd_stage2_8[_pcre2_ucd_stage1_8[(int)(fc) / 128] * 128 + (int)(fc) % 128])->script == F->temp_32[3]) == (F->temp_32[2] == OP_NOTPROP))
              break;
            F->eptr+= len;
            }
          break;

          case 5:
          for (i = F->temp_32[0]; i < F->temp_32[1]; i++)
            {
            int category;
            int len = 1;
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              break;
              }
            fc = *F->eptr; if (utf && fc >= 0xc0u) { if ((fc & 0x20u) == 0) { fc = ((fc & 0x1fu) << 6) | (F->eptr[1] & 0x3fu); len++; } else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); len += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); len += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); len += 4; } else { fc = ((fc & 0x01u) << 30) | ((F->eptr[1] & 0x3fu) << 24) | ((F->eptr[2] & 0x3fu) << 18) | ((F->eptr[3] & 0x3fu) << 12) | ((F->eptr[4] & 0x3fu) << 6) | (F->eptr[5] & 0x3fu); len += 5; } };;
            category = _pcre2_ucp_gentype_8[(_pcre2_ucd_records_8 + _pcre2_ucd_stage2_8[_pcre2_ucd_stage1_8[(int)(fc) / 128] * 128 + (int)(fc) % 128])->chartype];
            if ((category == ucp_L || category == ucp_N) ==
                (F->temp_32[2] == OP_NOTPROP))
              break;
            F->eptr+= len;
            }
          break;





          case 6:
          case 7:
          for (i = F->temp_32[0]; i < F->temp_32[1]; i++)
            {
            int len = 1;
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              break;
              }
            fc = *F->eptr; if (utf && fc >= 0xc0u) { if ((fc & 0x20u) == 0) { fc = ((fc & 0x1fu) << 6) | (F->eptr[1] & 0x3fu); len++; } else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); len += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); len += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); len += 4; } else { fc = ((fc & 0x01u) << 30) | ((F->eptr[1] & 0x3fu) << 24) | ((F->eptr[2] & 0x3fu) << 18) | ((F->eptr[3] & 0x3fu) << 12) | ((F->eptr[4] & 0x3fu) << 6) | (F->eptr[5] & 0x3fu); len += 5; } };;
            switch(fc)
              {
              case '\011': case '\040': case ((unsigned char)'\xa0'): case 0x1680: case 0x180e: case 0x2000: case 0x2001: case 0x2002: case 0x2003: case 0x2004: case 0x2005: case 0x2006: case 0x2007: case 0x2008: case 0x2009: case 0x200A: case 0x202f: case 0x205f: case 0x3000:
              case '\012': case '\013': case '\014': case '\015': case ((unsigned char)'\x85'): case 0x2028: case 0x2029:
              if (F->temp_32[2] == OP_NOTPROP) goto ENDLOOP99;
              break;

              default:
              if ((_pcre2_ucp_gentype_8[(_pcre2_ucd_records_8 + _pcre2_ucd_stage2_8[_pcre2_ucd_stage1_8[(int)(fc) / 128] * 128 + (int)(fc) % 128])->chartype] == ucp_Z) == (F->temp_32[2] == OP_NOTPROP))
                goto ENDLOOP99;
              break;
              }
            F->eptr+= len;
            }
          ENDLOOP99:
          break;

          case 8:
          for (i = F->temp_32[0]; i < F->temp_32[1]; i++)
            {
            int category;
            int len = 1;
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              break;
              }
            fc = *F->eptr; if (utf && fc >= 0xc0u) { if ((fc & 0x20u) == 0) { fc = ((fc & 0x1fu) << 6) | (F->eptr[1] & 0x3fu); len++; } else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); len += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); len += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); len += 4; } else { fc = ((fc & 0x01u) << 30) | ((F->eptr[1] & 0x3fu) << 24) | ((F->eptr[2] & 0x3fu) << 18) | ((F->eptr[3] & 0x3fu) << 12) | ((F->eptr[4] & 0x3fu) << 6) | (F->eptr[5] & 0x3fu); len += 5; } };;
            category = _pcre2_ucp_gentype_8[(_pcre2_ucd_records_8 + _pcre2_ucd_stage2_8[_pcre2_ucd_stage1_8[(int)(fc) / 128] * 128 + (int)(fc) % 128])->chartype];
            if ((category == ucp_L || category == ucp_N ||
                 fc == '\137') == (F->temp_32[2] == OP_NOTPROP))
              break;
            F->eptr+= len;
            }
          break;

          case 9:
          for (i = F->temp_32[0]; i < F->temp_32[1]; i++)
            {
            const uint32_t *cp;
            int len = 1;
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              break;
              }
            fc = *F->eptr; if (utf && fc >= 0xc0u) { if ((fc & 0x20u) == 0) { fc = ((fc & 0x1fu) << 6) | (F->eptr[1] & 0x3fu); len++; } else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); len += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); len += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); len += 4; } else { fc = ((fc & 0x01u) << 30) | ((F->eptr[1] & 0x3fu) << 24) | ((F->eptr[2] & 0x3fu) << 18) | ((F->eptr[3] & 0x3fu) << 12) | ((F->eptr[4] & 0x3fu) << 6) | (F->eptr[5] & 0x3fu); len += 5; } };;
            cp = _pcre2_ucd_caseless_sets_8 + F->temp_32[3];
            for (;;)
              {
              if (fc < *cp)
                { if (F->temp_32[2] == OP_NOTPROP) break; else goto GOT_MAX; }
              if (fc == *cp++)
                { if (F->temp_32[2] == OP_NOTPROP) goto GOT_MAX; else break; }
              }
            F->eptr += len;
            }
          GOT_MAX:
          break;

          case 10:
          for (i = F->temp_32[0]; i < F->temp_32[1]; i++)
            {
            int len = 1;
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              break;
              }
            fc = *F->eptr; if (utf && fc >= 0xc0u) { if ((fc & 0x20u) == 0) { fc = ((fc & 0x1fu) << 6) | (F->eptr[1] & 0x3fu); len++; } else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); len += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); len += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); len += 4; } else { fc = ((fc & 0x01u) << 30) | ((F->eptr[1] & 0x3fu) << 24) | ((F->eptr[2] & 0x3fu) << 18) | ((F->eptr[3] & 0x3fu) << 12) | ((F->eptr[4] & 0x3fu) << 6) | (F->eptr[5] & 0x3fu); len += 5; } };;
            if ((fc == '\044' || fc == '\100' ||
                 fc == '\140' || (fc >= 0xa0 && fc <= 0xd7ff) ||
                 fc >= 0xe000) == (F->temp_32[2] == OP_NOTPROP))
              break;
            F->eptr += len;
            }
          break;

          default:
          return (-44);
          }



        if (reptype == REPTYPE_POS) continue;





        for(;;)
          {
          if (F->eptr <= F->temp_sptr[0]) break;
          { start_ecode = F->ecode; F->return_id = RM222; goto MATCH_RECURSE; L_RM222:; };
          if (rrc != 0) { rrc = rrc; goto RETURN_SWITCH; };
          F->eptr--;
          if (utf) while((*F->eptr & 0xc0u) == 0x80u) F->eptr--;
          }
        }




      else if (F->temp_32[2] == OP_EXTUNI)
        {
        for (i = F->temp_32[0]; i < F->temp_32[1]; i++)
          {
          if (F->eptr >= mb->end_subject)
            {
            if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
            break;
            }
          else
            {
            fc = *F->eptr++; if (utf && fc >= 0xc0u) { if ((fc & 0x20u) == 0) fc = ((fc & 0x1fu) << 6) | (*F->eptr++ & 0x3fu); else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((*F->eptr & 0x3fu) << 6) | (F->eptr[1] & 0x3fu); F->eptr += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((*F->eptr & 0x3fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); F->eptr += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((*F->eptr & 0x3fu) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); F->eptr += 4; } else { fc = ((fc & 0x01u) << 30) | ((*F->eptr & 0x3fu) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); F->eptr += 5; } };;
            F->eptr = _pcre2_extuni_8(data_flow, fc, F->eptr, mb->start_subject, mb->end_subject,
              utf, ((void *)0));
            }
          if (mb->partial != 0 && F->eptr >= mb->end_subject && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
          }



        if (reptype == REPTYPE_POS) continue;






        for(;;)
          {
          int lgb, rgb;
          PCRE2_SPTR8 fptr;

          if (F->eptr <= F->temp_sptr[0]) break;
          { start_ecode = F->ecode; F->return_id = RM220; goto MATCH_RECURSE; L_RM220:; };
          if (rrc != 0) { rrc = rrc; goto RETURN_SWITCH; };





          F->eptr--;
          if (!utf) fc = *F->eptr; else
            {
            while((*F->eptr & 0xc0u) == 0x80u) F->eptr--;
            fc = *F->eptr; if (fc >= 0xc0u) { if ((fc & 0x20u) == 0) fc = ((fc & 0x1fu) << 6) | (F->eptr[1] & 0x3fu); else if ((fc & 0x10u) == 0) fc = ((fc & 0x0fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); else if ((fc & 0x08u) == 0) fc = ((fc & 0x07u) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); else if ((fc & 0x04u) == 0) fc = ((fc & 0x03u) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); else fc = ((fc & 0x01u) << 30) | ((F->eptr[1] & 0x3fu) << 24) | ((F->eptr[2] & 0x3fu) << 18) | ((F->eptr[3] & 0x3fu) << 12) | ((F->eptr[4] & 0x3fu) << 6) | (F->eptr[5] & 0x3fu); };;
            }
          rgb = (_pcre2_ucd_records_8 + _pcre2_ucd_stage2_8[_pcre2_ucd_stage1_8[(int)(fc) / 128] * 128 + (int)(fc) % 128])->gbprop;

          for (;;)
            {
            if (F->eptr <= F->temp_sptr[0]) break;
            fptr = F->eptr - 1;
            if (!utf) fc = *fptr; else
              {
              while((*fptr & 0xc0u) == 0x80u) fptr--;
              fc = *fptr; if (fc >= 0xc0u) { if ((fc & 0x20u) == 0) fc = ((fc & 0x1fu) << 6) | (fptr[1] & 0x3fu); else if ((fc & 0x10u) == 0) fc = ((fc & 0x0fu) << 12) | ((fptr[1] & 0x3fu) << 6) | (fptr[2] & 0x3fu); else if ((fc & 0x08u) == 0) fc = ((fc & 0x07u) << 18) | ((fptr[1] & 0x3fu) << 12) | ((fptr[2] & 0x3fu) << 6) | (fptr[3] & 0x3fu); else if ((fc & 0x04u) == 0) fc = ((fc & 0x03u) << 24) | ((fptr[1] & 0x3fu) << 18) | ((fptr[2] & 0x3fu) << 12) | ((fptr[3] & 0x3fu) << 6) | (fptr[4] & 0x3fu); else fc = ((fc & 0x01u) << 30) | ((fptr[1] & 0x3fu) << 24) | ((fptr[2] & 0x3fu) << 18) | ((fptr[3] & 0x3fu) << 12) | ((fptr[4] & 0x3fu) << 6) | (fptr[5] & 0x3fu); };;
              }
            lgb = (_pcre2_ucd_records_8 + _pcre2_ucd_stage2_8[_pcre2_ucd_stage1_8[(int)(fc) / 128] * 128 + (int)(fc) % 128])->gbprop;
            if ((_pcre2_ucp_gbtable_8[lgb] & (1 << rgb)) == 0) break;
            F->eptr = fptr;
            rgb = lgb;
            }
          }
        }

      else



      if (utf)
        {
        switch(F->temp_32[2])
          {
          case OP_ANY:
          for (i = F->temp_32[0]; i < F->temp_32[1]; i++)
            {
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              break;
              }
            if (((mb->nltype != 0)? ((F->eptr) < mb->end_subject && _pcre2_is_newline_8(data_flow, (F->eptr), mb->nltype, mb->end_subject, &(mb->nllen), utf)) : ((F->eptr) <= mb->end_subject - mb->nllen && (*(F->eptr)) == mb->nl[0] && (mb->nllen == 1 || (*(F->eptr+1)) == mb->nl[1]) ) )) break;
            if (mb->partial != 0 &&
                F->eptr + 1 >= mb->end_subject &&
                mb->nltype == 0 &&
                mb->nllen == 2 &&
                (*(F->eptr)) == mb->nl[0])
              {
              mb->hitend = 1;
              if (mb->partial > 1) return (-2);
              }
            F->eptr++;
            while((F->eptr < mb->end_subject) && ((*F->eptr) & 0xc0u) == 0x80u) F->eptr++;
            }
          break;

          case OP_ALLANY:
          if (F->temp_32[1] < (4294967295U))
            {
            for (i = F->temp_32[0]; i < F->temp_32[1]; i++)
              {
              if (F->eptr >= mb->end_subject)
                {
                if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
                break;
                }
              F->eptr++;
              while((F->eptr < mb->end_subject) && ((*F->eptr) & 0xc0u) == 0x80u) F->eptr++;
              }
            }
          else
            {
            F->eptr = mb->end_subject;
            if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
            }
          break;



          case OP_ANYBYTE:
          fc = F->temp_32[1] - F->temp_32[0];
          if (fc > (uint32_t)(mb->end_subject - F->eptr))
            {
            F->eptr = mb->end_subject;
            if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
            }
          else F->eptr += fc;
          break;

          case OP_ANYNL:
          for (i = F->temp_32[0]; i < F->temp_32[1]; i++)
            {
            int len = 1;
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              break;
              }
            fc = *F->eptr; if (fc >= 0xc0u) { if ((fc & 0x20u) == 0) { fc = ((fc & 0x1fu) << 6) | (F->eptr[1] & 0x3fu); len++; } else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); len += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); len += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); len += 4; } else { fc = ((fc & 0x01u) << 30) | ((F->eptr[1] & 0x3fu) << 24) | ((F->eptr[2] & 0x3fu) << 18) | ((F->eptr[3] & 0x3fu) << 12) | ((F->eptr[4] & 0x3fu) << 6) | (F->eptr[5] & 0x3fu); len += 5; } };;
            if (fc == '\015')
              {
              if (++F->eptr >= mb->end_subject) break;
              if ((*(F->eptr)) == '\012') F->eptr++;
              }
            else
              {
              if (fc != '\012' &&
                  (mb->bsr_convention == 2 ||
                   (fc != '\013' && fc != '\014' && fc != ((unsigned char)'\x85')

                    && fc != 0x2028 && fc != 0x2029

                    )))
                break;
              F->eptr += len;
              }
            }
          break;

          case OP_NOT_HSPACE:
          case OP_HSPACE:
          for (i = F->temp_32[0]; i < F->temp_32[1]; i++)
            {
            BOOL gotspace;
            int len = 1;
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              break;
              }
            fc = *F->eptr; if (fc >= 0xc0u) { if ((fc & 0x20u) == 0) { fc = ((fc & 0x1fu) << 6) | (F->eptr[1] & 0x3fu); len++; } else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); len += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); len += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); len += 4; } else { fc = ((fc & 0x01u) << 30) | ((F->eptr[1] & 0x3fu) << 24) | ((F->eptr[2] & 0x3fu) << 18) | ((F->eptr[3] & 0x3fu) << 12) | ((F->eptr[4] & 0x3fu) << 6) | (F->eptr[5] & 0x3fu); len += 5; } };;
            switch(fc)
              {
              case '\011': case '\040': case ((unsigned char)'\xa0'): case 0x1680: case 0x180e: case 0x2000: case 0x2001: case 0x2002: case 0x2003: case 0x2004: case 0x2005: case 0x2006: case 0x2007: case 0x2008: case 0x2009: case 0x200A: case 0x202f: case 0x205f: case 0x3000: gotspace = 1; break;
              default: gotspace = 0; break;
              }
            if (gotspace == (F->temp_32[2] == OP_NOT_HSPACE)) break;
            F->eptr += len;
            }
          break;

          case OP_NOT_VSPACE:
          case OP_VSPACE:
          for (i = F->temp_32[0]; i < F->temp_32[1]; i++)
            {
            BOOL gotspace;
            int len = 1;
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              break;
              }
            fc = *F->eptr; if (fc >= 0xc0u) { if ((fc & 0x20u) == 0) { fc = ((fc & 0x1fu) << 6) | (F->eptr[1] & 0x3fu); len++; } else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); len += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); len += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); len += 4; } else { fc = ((fc & 0x01u) << 30) | ((F->eptr[1] & 0x3fu) << 24) | ((F->eptr[2] & 0x3fu) << 18) | ((F->eptr[3] & 0x3fu) << 12) | ((F->eptr[4] & 0x3fu) << 6) | (F->eptr[5] & 0x3fu); len += 5; } };;
            switch(fc)
              {
              case '\012': case '\013': case '\014': case '\015': case ((unsigned char)'\x85'): case 0x2028: case 0x2029: gotspace = 1; break;
              default: gotspace = 0; break;
              }
            if (gotspace == (F->temp_32[2] == OP_NOT_VSPACE)) break;
            F->eptr += len;
            }
          break;

          case OP_NOT_DIGIT:
          for (i = F->temp_32[0]; i < F->temp_32[1]; i++)
            {
            int len = 1;
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              break;
              }
            fc = *F->eptr; if (fc >= 0xc0u) { if ((fc & 0x20u) == 0) { fc = ((fc & 0x1fu) << 6) | (F->eptr[1] & 0x3fu); len++; } else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); len += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); len += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); len += 4; } else { fc = ((fc & 0x01u) << 30) | ((F->eptr[1] & 0x3fu) << 24) | ((F->eptr[2] & 0x3fu) << 18) | ((F->eptr[3] & 0x3fu) << 12) | ((F->eptr[4] & 0x3fu) << 6) | (F->eptr[5] & 0x3fu); len += 5; } };;
            if (fc < 256 && (mb->ctypes[fc] & 0x08) != 0) break;
            F->eptr+= len;
            }
          break;

          case OP_DIGIT:
          for (i = F->temp_32[0]; i < F->temp_32[1]; i++)
            {
            int len = 1;
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              break;
              }
            fc = *F->eptr; if (fc >= 0xc0u) { if ((fc & 0x20u) == 0) { fc = ((fc & 0x1fu) << 6) | (F->eptr[1] & 0x3fu); len++; } else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); len += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); len += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); len += 4; } else { fc = ((fc & 0x01u) << 30) | ((F->eptr[1] & 0x3fu) << 24) | ((F->eptr[2] & 0x3fu) << 18) | ((F->eptr[3] & 0x3fu) << 12) | ((F->eptr[4] & 0x3fu) << 6) | (F->eptr[5] & 0x3fu); len += 5; } };;
            if (fc >= 256 ||(mb->ctypes[fc] & 0x08) == 0) break;
            F->eptr+= len;
            }
          break;

          case OP_NOT_WHITESPACE:
          for (i = F->temp_32[0]; i < F->temp_32[1]; i++)
            {
            int len = 1;
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              break;
              }
            fc = *F->eptr; if (fc >= 0xc0u) { if ((fc & 0x20u) == 0) { fc = ((fc & 0x1fu) << 6) | (F->eptr[1] & 0x3fu); len++; } else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); len += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); len += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); len += 4; } else { fc = ((fc & 0x01u) << 30) | ((F->eptr[1] & 0x3fu) << 24) | ((F->eptr[2] & 0x3fu) << 18) | ((F->eptr[3] & 0x3fu) << 12) | ((F->eptr[4] & 0x3fu) << 6) | (F->eptr[5] & 0x3fu); len += 5; } };;
            if (fc < 256 && (mb->ctypes[fc] & 0x01) != 0) break;
            F->eptr+= len;
            }
          break;

          case OP_WHITESPACE:
          for (i = F->temp_32[0]; i < F->temp_32[1]; i++)
            {
            int len = 1;
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              break;
              }
            fc = *F->eptr; if (fc >= 0xc0u) { if ((fc & 0x20u) == 0) { fc = ((fc & 0x1fu) << 6) | (F->eptr[1] & 0x3fu); len++; } else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); len += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); len += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); len += 4; } else { fc = ((fc & 0x01u) << 30) | ((F->eptr[1] & 0x3fu) << 24) | ((F->eptr[2] & 0x3fu) << 18) | ((F->eptr[3] & 0x3fu) << 12) | ((F->eptr[4] & 0x3fu) << 6) | (F->eptr[5] & 0x3fu); len += 5; } };;
            if (fc >= 256 ||(mb->ctypes[fc] & 0x01) == 0) break;
            F->eptr+= len;
            }
          break;

          case OP_NOT_WORDCHAR:
          for (i = F->temp_32[0]; i < F->temp_32[1]; i++)
            {
            int len = 1;
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              break;
              }
            fc = *F->eptr; if (fc >= 0xc0u) { if ((fc & 0x20u) == 0) { fc = ((fc & 0x1fu) << 6) | (F->eptr[1] & 0x3fu); len++; } else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); len += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); len += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); len += 4; } else { fc = ((fc & 0x01u) << 30) | ((F->eptr[1] & 0x3fu) << 24) | ((F->eptr[2] & 0x3fu) << 18) | ((F->eptr[3] & 0x3fu) << 12) | ((F->eptr[4] & 0x3fu) << 6) | (F->eptr[5] & 0x3fu); len += 5; } };;
            if (fc < 256 && (mb->ctypes[fc] & 0x10) != 0) break;
            F->eptr+= len;
            }
          break;

          case OP_WORDCHAR:
          for (i = F->temp_32[0]; i < F->temp_32[1]; i++)
            {
            int len = 1;
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              break;
              }
            fc = *F->eptr; if (fc >= 0xc0u) { if ((fc & 0x20u) == 0) { fc = ((fc & 0x1fu) << 6) | (F->eptr[1] & 0x3fu); len++; } else if ((fc & 0x10u) == 0) { fc = ((fc & 0x0fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); len += 2; } else if ((fc & 0x08u) == 0) { fc = ((fc & 0x07u) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); len += 3; } else if ((fc & 0x04u) == 0) { fc = ((fc & 0x03u) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); len += 4; } else { fc = ((fc & 0x01u) << 30) | ((F->eptr[1] & 0x3fu) << 24) | ((F->eptr[2] & 0x3fu) << 18) | ((F->eptr[3] & 0x3fu) << 12) | ((F->eptr[4] & 0x3fu) << 6) | (F->eptr[5] & 0x3fu); len += 5; } };;
            if (fc >= 256 || (mb->ctypes[fc] & 0x10) == 0) break;
            F->eptr+= len;
            }
          break;

          default:
          return (-44);
          }

        if (reptype == REPTYPE_POS) continue;





        for(;;)
          {
          if (F->eptr <= F->temp_sptr[0]) break;
          { start_ecode = F->ecode; F->return_id = RM221; goto MATCH_RECURSE; L_RM221:; };
          if (rrc != 0) { rrc = rrc; goto RETURN_SWITCH; };
          F->eptr--;
          while((*F->eptr & 0xc0u) == 0x80u) F->eptr--;
          if (F->temp_32[2] == OP_ANYNL && F->eptr > F->temp_sptr[0] &&
              (*(F->eptr)) == '\012' && (*(F->eptr - 1)) == '\015')
            F->eptr--;
          }
        }
      else



        {
        switch(F->temp_32[2])
          {
          case OP_ANY:
          for (i = F->temp_32[0]; i < F->temp_32[1]; i++)
            {
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              break;
              }
            if (((mb->nltype != 0)? ((F->eptr) < mb->end_subject && _pcre2_is_newline_8(data_flow, (F->eptr), mb->nltype, mb->end_subject, &(mb->nllen), utf)) : ((F->eptr) <= mb->end_subject - mb->nllen && (*(F->eptr)) == mb->nl[0] && (mb->nllen == 1 || (*(F->eptr+1)) == mb->nl[1]) ) )) break;
            if (mb->partial != 0 &&
                F->eptr + 1 >= mb->end_subject &&
                mb->nltype == 0 &&
                mb->nllen == 2 &&
                *F->eptr == mb->nl[0])
              {
              mb->hitend = 1;
              if (mb->partial > 1) return (-2);
              }
            F->eptr++;
            }
          break;

          case OP_ALLANY:
          case OP_ANYBYTE:
          fc = F->temp_32[1] - F->temp_32[0];
          if (fc > (uint32_t)(mb->end_subject - F->eptr))
            {
            F->eptr = mb->end_subject;
            if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
            }
          else F->eptr += fc;
          break;

          case OP_ANYNL:
          for (i = F->temp_32[0]; i < F->temp_32[1]; i++)
            {
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              break;
              }
            fc = *F->eptr;
            if (fc == '\015')
              {
              if (++F->eptr >= mb->end_subject) break;
              if (*F->eptr == '\012') F->eptr++;
              }
            else
              {
              if (fc != '\012' && (mb->bsr_convention == 2 ||
                 (fc != '\013' && fc != '\014' && fc != ((unsigned char)'\x85')



                 ))) break;
              F->eptr++;
              }
            }
          break;

          case OP_NOT_HSPACE:
          for (i = F->temp_32[0]; i < F->temp_32[1]; i++)
            {
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              break;
              }
            switch(*F->eptr)
              {
              default: F->eptr++; break;
              case '\011': case '\040': case ((unsigned char)'\xa0'):



              goto ENDLOOP00;
              }
            }
          ENDLOOP00:
          break;

          case OP_HSPACE:
          for (i = F->temp_32[0]; i < F->temp_32[1]; i++)
            {
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              break;
              }
            switch(*F->eptr)
              {
              default: goto ENDLOOP01;
              case '\011': case '\040': case ((unsigned char)'\xa0'):



              F->eptr++; break;
              }
            }
          ENDLOOP01:
          break;

          case OP_NOT_VSPACE:
          for (i = F->temp_32[0]; i < F->temp_32[1]; i++)
            {
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              break;
              }
            switch(*F->eptr)
              {
              default: F->eptr++; break;
              case '\012': case '\013': case '\014': case '\015': case ((unsigned char)'\x85'):



              goto ENDLOOP02;
              }
            }
          ENDLOOP02:
          break;

          case OP_VSPACE:
          for (i = F->temp_32[0]; i < F->temp_32[1]; i++)
            {
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              break;
              }
            switch(*F->eptr)
              {
              default: goto ENDLOOP03;
              case '\012': case '\013': case '\014': case '\015': case ((unsigned char)'\x85'):



              F->eptr++; break;
              }
            }
          ENDLOOP03:
          break;

          case OP_NOT_DIGIT:
          for (i = F->temp_32[0]; i < F->temp_32[1]; i++)
            {
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              break;
              }
            if (1 && (mb->ctypes[*F->eptr] & 0x08) != 0)
              break;
            F->eptr++;
            }
          break;

          case OP_DIGIT:
          for (i = F->temp_32[0]; i < F->temp_32[1]; i++)
            {
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              break;
              }
            if (!1 || (mb->ctypes[*F->eptr] & 0x08) == 0)
              break;
            F->eptr++;
            }
          break;

          case OP_NOT_WHITESPACE:
          for (i = F->temp_32[0]; i < F->temp_32[1]; i++)
            {
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              break;
              }
            if (1 && (mb->ctypes[*F->eptr] & 0x01) != 0)
              break;
            F->eptr++;
            }
          break;

          case OP_WHITESPACE:
          for (i = F->temp_32[0]; i < F->temp_32[1]; i++)
            {
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              break;
              }
            if (!1 || (mb->ctypes[*F->eptr] & 0x01) == 0)
              break;
            F->eptr++;
            }
          break;

          case OP_NOT_WORDCHAR:
          for (i = F->temp_32[0]; i < F->temp_32[1]; i++)
            {
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              break;
              }
            if (1 && (mb->ctypes[*F->eptr] & 0x10) != 0)
              break;
            F->eptr++;
            }
          break;

          case OP_WORDCHAR:
          for (i = F->temp_32[0]; i < F->temp_32[1]; i++)
            {
            if (F->eptr >= mb->end_subject)
              {
              if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
              break;
              }
            if (!1 || (mb->ctypes[*F->eptr] & 0x10) == 0)
              break;
            F->eptr++;
            }
          break;

          default:
          return (-44);
          }

        if (reptype == REPTYPE_POS) continue;

        for (;;)
          {
          if (F->eptr == F->temp_sptr[0]) break;
          { start_ecode = F->ecode; F->return_id = RM34; goto MATCH_RECURSE; L_RM34:; };
          if (rrc != 0) { rrc = rrc; goto RETURN_SWITCH; };
          F->eptr--;
          if (F->temp_32[2] == OP_ANYNL && F->eptr > F->temp_sptr[0] && *F->eptr == '\012' &&
              F->eptr[-1] == '\015') F->eptr--;
          }
        }
      }
    break;
    case OP_DNREF:
    case OP_DNREFI:
    F->temp_32[2] = (F->op == OP_DNREFI);
      {
      int count = (unsigned int)(((F->ecode)[1+2] << 8) | (F->ecode)[(1+2)+1]);
      PCRE2_SPTR8 slot = mb->name_table + (unsigned int)(((F->ecode)[1] << 8) | (F->ecode)[(1)+1]) * mb->name_entry_size;
      F->ecode += 1 + 2*2;

      while (count-- > 0)
        {
        F->temp_size = ((unsigned int)(((slot)[0] << 8) | (slot)[(0)+1]) << 1) - 2;
        if (F->temp_size < F->offset_top && F->ovector[F->temp_size] != (~(size_t)0)) break;
        slot += mb->name_entry_size;
        }
      }
    goto REF_REPEAT;

    case OP_REF:
    case OP_REFI:
    F->temp_32[2] = (F->op == OP_REFI);
    F->temp_size = ((unsigned int)(((F->ecode)[1] << 8) | (F->ecode)[(1)+1]) << 1) - 2;
    F->ecode += 1 + 2;





    REF_REPEAT:
    switch (*F->ecode)
      {
      case OP_CRSTAR:
      case OP_CRMINSTAR:
      case OP_CRPLUS:
      case OP_CRMINPLUS:
      case OP_CRQUERY:
      case OP_CRMINQUERY:
      fc = *F->ecode++ - OP_CRSTAR;
      F->temp_32[0] = rep_min[fc];
      F->temp_32[1] = rep_max[fc];
      reptype = rep_typ[fc];
      break;

      case OP_CRRANGE:
      case OP_CRMINRANGE:
      F->temp_32[0] = (unsigned int)(((F->ecode)[1] << 8) | (F->ecode)[(1)+1]);
      F->temp_32[1] = (unsigned int)(((F->ecode)[1 + 2] << 8) | (F->ecode)[(1 + 2)+1]);
      reptype = rep_typ[*F->ecode - OP_CRSTAR];
      if (F->temp_32[1] == 0) F->temp_32[1] = (4294967295U);
      F->ecode += 1 + 2 * 2;
      break;

      default:
        {
        rrc = match_ref(data_flow, F->temp_size, F->temp_32[2], F, mb, &length);
        if (rrc != 0)
          {
          if (rrc > 0) F->eptr = mb->end_subject;
          if (mb->partial != 0 && F->eptr >= mb->end_subject && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
          { rrc = 0; goto RETURN_SWITCH; };
          }
        }
      F->eptr += length;
      continue;
      }
    if (F->temp_size < F->offset_top && F->ovector[F->temp_size] != (~(size_t)0))
      {
      if (F->ovector[F->temp_size] == F->ovector[F->temp_size + 1]) continue;
      }
    else
      {
      if (F->temp_32[0] == 0 || (mb->poptions & 0x00000200u) != 0)
        continue;
      }



    for (i = 1; i <= F->temp_32[0]; i++)
      {
      size_t slength;
      rrc = match_ref(data_flow, F->temp_size, F->temp_32[2], F, mb, &slength);
      if (rrc != 0)
        {
        if (rrc > 0) F->eptr = mb->end_subject;
        if (mb->partial != 0 && F->eptr >= mb->end_subject && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
        { rrc = 0; goto RETURN_SWITCH; };
        }
      F->eptr += slength;
      }



    if (F->temp_32[0] == F->temp_32[1]) continue;



    if (reptype == REPTYPE_MIN)
      {
      for (;;)
        {
        size_t slength;
        { start_ecode = F->ecode; F->return_id = RM20; goto MATCH_RECURSE; L_RM20:; };
        if (rrc != 0) { rrc = rrc; goto RETURN_SWITCH; };
        if (F->temp_32[0]++ >= F->temp_32[1]) { rrc = 0; goto RETURN_SWITCH; };
        rrc = match_ref(data_flow, F->temp_size, F->temp_32[2], F, mb, &slength);
        if (rrc != 0)
          {
          if (rrc > 0) F->eptr = mb->end_subject;
          if (mb->partial != 0 && F->eptr >= mb->end_subject && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
          { rrc = 0; goto RETURN_SWITCH; };
          }
        F->eptr += slength;
        }

      }




    else
      {
      BOOL samelengths = 1;
      F->temp_sptr[0] = F->eptr;
      F->length = F->ovector[F->temp_size+1] - F->ovector[F->temp_size];

      for (i = F->temp_32[0]; i < F->temp_32[1]; i++)
        {
        size_t slength;
        rrc = match_ref(data_flow, F->temp_size, F->temp_32[2], F, mb, &slength);
        if (rrc != 0)
          {



          if (rrc > 0 && mb->partial != 0 &&
              mb->end_subject > mb->start_used_ptr)
            {
            mb->hitend = 1;
            if (mb->partial > 1) return (-2);
            }
          break;
          }

        if (slength != F->length) samelengths = 0;
        F->eptr += slength;
        }







      if (samelengths)
        {
        while (F->eptr >= F->temp_sptr[0])
          {
          { start_ecode = F->ecode; F->return_id = RM21; goto MATCH_RECURSE; L_RM21:; };
          if (rrc != 0) { rrc = rrc; goto RETURN_SWITCH; };
          F->eptr -= F->length;
          }
        }




      else
        {
        F->temp_32[1] = i;
        for (;;)
          {
          { start_ecode = F->ecode; F->return_id = RM22; goto MATCH_RECURSE; L_RM22:; };
          if (rrc != 0) { rrc = rrc; goto RETURN_SWITCH; };
          if (F->eptr == F->temp_sptr[0]) break;
          F->eptr = F->temp_sptr[0];
          F->temp_32[1]--;
          for (i = F->temp_32[0]; i < F->temp_32[1]; i++)
            {
            size_t slength;
            (void)match_ref(data_flow, F->temp_size, F->temp_32[2], F, mb, &slength);
            F->eptr += slength;
            }
          }
        }

      { rrc = 0; goto RETURN_SWITCH; };
      }
    case OP_BRAZERO:
    F->temp_sptr[0] = F->ecode + 1;
    { start_ecode = F->temp_sptr[0]; F->return_id = RM9; goto MATCH_RECURSE; L_RM9:; };
    if (rrc != 0) { rrc = rrc; goto RETURN_SWITCH; };
    do F->temp_sptr[0] += (unsigned int)(((F->temp_sptr[0])[1] << 8) | (F->temp_sptr[0])[(1)+1]); while (*F->temp_sptr[0] == OP_ALT);
    F->ecode = F->temp_sptr[0] + 1 + 2;
    break;

    case OP_BRAMINZERO:
    F->temp_sptr[0] = F->ecode + 1;
    do F->temp_sptr[0] += (unsigned int)(((F->temp_sptr[0])[1] << 8) | (F->temp_sptr[0])[(1)+1]); while (*F->temp_sptr[0] == OP_ALT);
    { start_ecode = F->temp_sptr[0] + 1 + 2; F->return_id = RM10; goto MATCH_RECURSE; L_RM10:; };
    if (rrc != 0) { rrc = rrc; goto RETURN_SWITCH; };
    F->ecode++;
    break;



    case OP_SKIPZERO:
    F->ecode++;
    do F->ecode += (unsigned int)(((F->ecode)[1] << 8) | (F->ecode)[(1)+1]); while (*F->ecode == OP_ALT);
    F->ecode += 1 + 2;
    break;
    case OP_BRAPOSZERO:
    F->temp_32[2] = 1;
    F->ecode += 1;
    if (*F->ecode == OP_CBRAPOS || *F->ecode == OP_SCBRAPOS)
      goto POSSESSIVE_CAPTURE;
    goto POSSESSIVE_NON_CAPTURE;

    case OP_BRAPOS:
    case OP_SBRAPOS:
    F->temp_32[2] = 0;

    POSSESSIVE_NON_CAPTURE:
    F->temp_32[0] = 0x00020000u;
    goto POSSESSIVE_GROUP;

    case OP_CBRAPOS:
    case OP_SCBRAPOS:
    F->temp_32[2] = 0;

    POSSESSIVE_CAPTURE:
    number = (unsigned int)(((F->ecode)[1+2] << 8) | (F->ecode)[(1+2)+1]);
    F->temp_32[0] = 0x00010000u | number;

    POSSESSIVE_GROUP:
    F->temp_32[1] = 0;
    F->temp_sptr[1] = F->ecode;

    for (;;)
      {
      F->temp_sptr[0] = F->eptr;
      group_frame_type = F->temp_32[0];
      { start_ecode = F->ecode + _pcre2_OP_lengths_8[*F->ecode]; F->return_id = RM8; goto MATCH_RECURSE; L_RM8:; };
      if (rrc == (-998))
        {
        F->temp_32[1] = 1;
        if (F->eptr == F->temp_sptr[0])
          {
          do F->ecode += (unsigned int)(((F->ecode)[1] << 8) | (F->ecode)[(1)+1]); while (*F->ecode == OP_ALT);
          break;
          }

        F->ecode = F->temp_sptr[1];
        continue;
        }



      if (rrc == (-993))
        {
        PCRE2_SPTR8 next_ecode = F->ecode + (unsigned int)(((F->ecode)[1] << 8) | (F->ecode)[(1)+1]);
        if (mb->verb_ecode_ptr < next_ecode &&
            (*F->ecode == OP_ALT || *next_ecode == OP_ALT))
          rrc = 0;
        }

      if (rrc != 0) { rrc = rrc; goto RETURN_SWITCH; };
      F->ecode += (unsigned int)(((F->ecode)[1] << 8) | (F->ecode)[(1)+1]);
      if (*F->ecode != OP_ALT) break;
      }



    if (F->temp_32[1] || F->temp_32[2])
      {
      F->ecode += 1 + 2;
      break;
      }

    { rrc = 0; goto RETURN_SWITCH; };
    case OP_BRA:
    if (mb->hasthen || F->rdepth == 0)
      {
      F->temp_32[0] = 0;
      goto GROUPLOOP;
      }

    for (;;)
      {
      F->temp_sptr[0] = F->ecode + (unsigned int)(((F->ecode)[1] << 8) | (F->ecode)[(1)+1]);
      if (*F->temp_sptr[0] != OP_ALT) break;




      { start_ecode = F->ecode + _pcre2_OP_lengths_8[*F->ecode]; F->return_id = RM1; goto MATCH_RECURSE; L_RM1:; };
      if (rrc != 0) { rrc = rrc; goto RETURN_SWITCH; };
      F->ecode = F->temp_sptr[0];
      }



    F->ecode += _pcre2_OP_lengths_8[*F->ecode];
    break;
    case OP_CBRA:
    case OP_SCBRA:
    F->temp_32[0] = 0x00010000u | (unsigned int)(((F->ecode)[1+2] << 8) | (F->ecode)[(1+2)+1]);
    goto GROUPLOOP;






    case OP_ONCE:
    case OP_SCRIPT_RUN:
    case OP_SBRA:
    F->temp_32[0] = 0x00020000u | F->op;

    GROUPLOOP:
    for (;;)
      {
      group_frame_type = F->temp_32[0];
      { start_ecode = F->ecode + _pcre2_OP_lengths_8[*F->ecode]; F->return_id = RM2; goto MATCH_RECURSE; L_RM2:; };
      if (rrc == (-993))
        {
        PCRE2_SPTR8 next_ecode = F->ecode + (unsigned int)(((F->ecode)[1] << 8) | (F->ecode)[(1)+1]);
        if (mb->verb_ecode_ptr < next_ecode &&
            (*F->ecode == OP_ALT || *next_ecode == OP_ALT))
          rrc = 0;
        }
      if (rrc != 0) { rrc = rrc; goto RETURN_SWITCH; };
      F->ecode += (unsigned int)(((F->ecode)[1] << 8) | (F->ecode)[(1)+1]);
      if (*F->ecode != OP_ALT) { rrc = 0; goto RETURN_SWITCH; };
      }
    case OP_RECURSE:
    bracode = mb->start_code + (unsigned int)(((F->ecode)[1] << 8) | (F->ecode)[(1)+1]);
    number = (bracode == mb->start_code)? 0 : (unsigned int)(((bracode)[1 + 2] << 8) | (bracode)[(1 + 2)+1]);





    if (F->current_recurse != 0xffffffffu)
      {
      offset = F->last_group_offset;
      while (offset != (~(size_t)0))
        {
        N = (heapframe *)((char *)mb->match_frames + offset);
        P = (heapframe *)((char *)N - frame_size);
        if (N->group_frame_type == (0x00040000u | number))
          {
          if (F->eptr == P->eptr) return (-52);
          break;
          }
        offset = P->last_group_offset;
        }
      }



    F->temp_sptr[0] = bracode;
    F->temp_32[0] = 0x00040000u | number;

    for (;;)
      {
      PCRE2_SPTR8 next_ecode;

      group_frame_type = F->temp_32[0];
      { start_ecode = F->temp_sptr[0] + _pcre2_OP_lengths_8[*F->temp_sptr[0]]; F->return_id = RM11; goto MATCH_RECURSE; L_RM11:; };
      next_ecode = F->temp_sptr[0] + (unsigned int)(((F->temp_sptr[0])[1] << 8) | (F->temp_sptr[0])[(1)+1]);
      if (rrc >= (-997) && rrc <= (-993) &&
          mb->verb_current_recurse == (F->temp_32[0] ^ 0x00040000u))
        {
        if (rrc == (-993) && mb->verb_ecode_ptr < next_ecode &&
            (*F->temp_sptr[0] == OP_ALT || *next_ecode == OP_ALT))
          rrc = 0;
        else { rrc = 0; goto RETURN_SWITCH; };
        }




      if (rrc != 0) { rrc = rrc; goto RETURN_SWITCH; };
      F->temp_sptr[0] = next_ecode;
      if (*F->temp_sptr[0] != OP_ALT) { rrc = 0; goto RETURN_SWITCH; };
      }
    case OP_ASSERT:
    case OP_ASSERTBACK:
    F->temp_32[0] = 0x00020000u | F->op;
    for (;;)
      {
      group_frame_type = F->temp_32[0];
      { start_ecode = F->ecode + _pcre2_OP_lengths_8[*F->ecode]; F->return_id = RM3; goto MATCH_RECURSE; L_RM3:; };
      if (rrc == (-999))
        {
        memcpy(F->ovector,
              (char *)assert_accept_frame + __builtin_offsetof (heapframe, ovector),
              assert_accept_frame->offset_top * sizeof(size_t));
        F->offset_top = assert_accept_frame->offset_top;
        F->mark = assert_accept_frame->mark;
        break;
        }
      if (rrc != 0 && rrc != (-993)) { rrc = rrc; goto RETURN_SWITCH; };
      F->ecode += (unsigned int)(((F->ecode)[1] << 8) | (F->ecode)[(1)+1]);
      if (*F->ecode != OP_ALT) { rrc = 0; goto RETURN_SWITCH; };
      }

    do F->ecode += (unsigned int)(((F->ecode)[1] << 8) | (F->ecode)[(1)+1]); while (*F->ecode == OP_ALT);
    F->ecode += 1 + 2;
    break;
    case OP_ASSERT_NOT:
    case OP_ASSERTBACK_NOT:
    F->temp_32[0] = 0x00020000u | F->op;

    for (;;)
      {
      group_frame_type = F->temp_32[0];
      { start_ecode = F->ecode + _pcre2_OP_lengths_8[*F->ecode]; F->return_id = RM4; goto MATCH_RECURSE; L_RM4:; };
      switch(rrc)
        {
        case (-999):
        case 1:
        { rrc = 0; goto RETURN_SWITCH; };

        case 0:
        case (-993):
        F->ecode += (unsigned int)(((F->ecode)[1] << 8) | (F->ecode)[(1)+1]);
        if (*F->ecode != OP_ALT) goto ASSERT_NOT_FAILED;
        break;

        case (-997):
        case (-995):
        case (-996):
        do F->ecode += (unsigned int)(((F->ecode)[1] << 8) | (F->ecode)[(1)+1]); while (*F->ecode == OP_ALT);
        goto ASSERT_NOT_FAILED;

        default:
        { rrc = rrc; goto RETURN_SWITCH; };
        }
      }





    ASSERT_NOT_FAILED:
    F->ecode += 1 + 2;
    break;
    case OP_CALLOUT:
    case OP_CALLOUT_STR:
    rrc = do_callout(data_flow, F, mb, &length);
    if (rrc > 0) { rrc = 0; goto RETURN_SWITCH; };
    if (rrc < 0) { rrc = rrc; goto RETURN_SWITCH; };
    F->ecode += length;
    break;
    case OP_COND:
    case OP_SCOND:
    F->length = (unsigned int)(((F->ecode)[1] << 8) | (F->ecode)[(1)+1]);
    if (F->ecode[F->length] != OP_ALT) F->length -= 1 + 2;
    F->ecode += 1 + 2;





    if (*F->ecode == OP_CALLOUT || *F->ecode == OP_CALLOUT_STR)
      {
      rrc = do_callout(data_flow, F, mb, &length);
      if (rrc > 0) { rrc = 0; goto RETURN_SWITCH; };
      if (rrc < 0) { rrc = rrc; goto RETURN_SWITCH; };




      F->ecode += length;
      F->length -= length;
      }



    condition = 0;
    switch(*F->ecode)
      {
      case OP_RREF:
      if (F->current_recurse != 0xffffffffu)
        {
        number = (unsigned int)(((F->ecode)[1] << 8) | (F->ecode)[(1)+1]);
        condition = (number == 0xffff || number == F->current_recurse);
        }
      break;

      case OP_DNRREF:
      if (F->current_recurse != 0xffffffffu)
        {
        int count = (unsigned int)(((F->ecode)[1 + 2] << 8) | (F->ecode)[(1 + 2)+1]);
        PCRE2_SPTR8 slot = mb->name_table + (unsigned int)(((F->ecode)[1] << 8) | (F->ecode)[(1)+1]) * mb->name_entry_size;
        while (count-- > 0)
          {
          number = (unsigned int)(((slot)[0] << 8) | (slot)[(0)+1]);
          condition = number == F->current_recurse;
          if (condition) break;
          slot += mb->name_entry_size;
          }
        }
      break;

      case OP_CREF:
      offset = ((unsigned int)(((F->ecode)[1] << 8) | (F->ecode)[(1)+1]) << 1) - 2;
      condition = offset < F->offset_top && F->ovector[offset] != (~(size_t)0);
      break;

      case OP_DNCREF:
        {
        int count = (unsigned int)(((F->ecode)[1 + 2] << 8) | (F->ecode)[(1 + 2)+1]);
        PCRE2_SPTR8 slot = mb->name_table + (unsigned int)(((F->ecode)[1] << 8) | (F->ecode)[(1)+1]) * mb->name_entry_size;
        while (count-- > 0)
          {
          offset = ((unsigned int)(((slot)[0] << 8) | (slot)[(0)+1]) << 1) - 2;
          condition = offset < F->offset_top && F->ovector[offset] != (~(size_t)0);
          if (condition) break;
          slot += mb->name_entry_size;
          }
        }
      break;

      case OP_FALSE:
      case OP_FAIL:
      break;

      case OP_TRUE:
      condition = 1;
      break;







      default:
      F->temp_32[0] = (*F->ecode == OP_ASSERT || *F->ecode == OP_ASSERTBACK);
      F->temp_sptr[0] = F->ecode;

      for (;;)
        {
        group_frame_type = 0x00030000u | *F->ecode;
        { start_ecode = F->temp_sptr[0] + _pcre2_OP_lengths_8[*F->temp_sptr[0]]; F->return_id = RM5; goto MATCH_RECURSE; L_RM5:; };

        switch(rrc)
          {
          case (-999):
          memcpy(F->ovector,
                (char *)assert_accept_frame + __builtin_offsetof (heapframe, ovector),
                assert_accept_frame->offset_top * sizeof(size_t));
          F->offset_top = assert_accept_frame->offset_top;





          case 1:
          condition = F->temp_32[0];
          break;




          case 0:
          case (-993):
          F->temp_sptr[0] += (unsigned int)(((F->temp_sptr[0])[1] << 8) | (F->temp_sptr[0])[(1)+1]);
          if (*F->temp_sptr[0] == OP_ALT) continue;
          condition = !F->temp_32[0];
          break;



          case (-997):
          case (-995):
          case (-996):
          condition = !F->temp_32[0];
          break;

          default:
          { rrc = rrc; goto RETURN_SWITCH; };
          }
        break;
        }




      if (condition)
        {
        do F->ecode += (unsigned int)(((F->ecode)[1] << 8) | (F->ecode)[(1)+1]); while (*F->ecode == OP_ALT);
        }
      break;
      }






    F->ecode += condition? _pcre2_OP_lengths_8[*F->ecode] : F->length;






    if (F->op == OP_SCOND)
      {
      group_frame_type = 0x00020000u | F->op;
      { start_ecode = F->ecode; F->return_id = RM35; goto MATCH_RECURSE; L_RM35:; };
      { rrc = rrc; goto RETURN_SWITCH; };
      }
    break;
    case OP_REVERSE:
    number = (unsigned int)(((F->ecode)[1] << 8) | (F->ecode)[(1)+1]);

    if (utf)
      {
      while (number-- > 0)
        {
        if (F->eptr <= mb->start_subject) { rrc = 0; goto RETURN_SWITCH; };
        F->eptr--;
        while((*F->eptr & 0xc0u) == 0x80u) F->eptr--;
        }
      }
    else




      {
      if ((ptrdiff_t)number > F->eptr - mb->start_subject) { rrc = 0; goto RETURN_SWITCH; };
      F->eptr -= number;
      }



    if (F->eptr < mb->start_used_ptr) mb->start_used_ptr = F->eptr;
    F->ecode += 1 + 2;
    break;






    case OP_ALT:
    do F->ecode += (unsigned int)(((F->ecode)[1] << 8) | (F->ecode)[(1)+1]); while (*F->ecode == OP_ALT);
    break;







    case OP_KET:
    case OP_KETRMIN:
    case OP_KETRMAX:
    case OP_KETRPOS:

    bracode = F->ecode - (unsigned int)(((F->ecode)[1] << 8) | (F->ecode)[(1)+1]);




    if (*bracode != OP_BRA && *bracode != OP_COND)
      {
      N = (heapframe *)((char *)mb->match_frames + F->last_group_offset);
      P = (heapframe *)((char *)N - frame_size);
      F->last_group_offset = P->last_group_offset;
      if (((N->group_frame_type) & 0xffff0000u) == 0x00030000u)
        {
        memcpy((char *)P + __builtin_offsetof (heapframe, ovector), F->ovector,
          F->offset_top * sizeof(size_t));
        P->offset_top = F->offset_top;
        F->back_frame = (char *)F - (char *)P;
        { rrc = 1; goto RETURN_SWITCH; };
        }
      }
    else P = ((void *)0);



    switch (*bracode)
      {
      case OP_BRA:
      case OP_COND:
      case OP_SCOND:
      break;





      case OP_ASSERT:
      case OP_ASSERTBACK:
      if (F->eptr > mb->last_used_ptr) mb->last_used_ptr = F->eptr;
      F->eptr = P->eptr;







      case OP_ONCE:
      F->back_frame = ((char *)F - (char *)P);
      for (;;)
        {
        uint32_t y = (unsigned int)(((P->ecode)[1] << 8) | (P->ecode)[(1)+1]);
        if ((P->ecode)[y] != OP_ALT) break;
        P->ecode += y;
        }
      break;




      case OP_ASSERT_NOT:
      case OP_ASSERTBACK_NOT:
      { rrc = 1; goto RETURN_SWITCH; };





      case OP_SCRIPT_RUN:
      if (!_pcre2_script_run_8(data_flow, P->eptr, F->eptr, utf)) { rrc = 0; goto RETURN_SWITCH; };
      break;





      case OP_CBRA:
      case OP_CBRAPOS:
      case OP_SCBRA:
      case OP_SCBRAPOS:
      number = (unsigned int)(((bracode)[1+2] << 8) | (bracode)[(1+2)+1]);




      if (F->current_recurse == number)
        {
        P = (heapframe *)((char *)N - frame_size);
        memcpy((char *)F + __builtin_offsetof (heapframe, ovector), P->ovector,
          P->offset_top * sizeof(size_t));
        F->offset_top = P->offset_top;
        F->capture_last = P->capture_last;
        F->current_recurse = P->current_recurse;
        F->ecode = P->ecode + 1 + 2;
        continue;
        }



      offset = (number << 1) - 2;
      F->capture_last = number;
      F->ovector[offset] = P->eptr - mb->start_subject;
      F->ovector[offset+1] = F->eptr - mb->start_subject;
      if (offset >= F->offset_top) F->offset_top = offset + 2;
      break;
      }






    if (*F->ecode == OP_KETRPOS)
      {
      memcpy((char *)P + __builtin_offsetof (heapframe, eptr),
             (char *)F + __builtin_offsetof (heapframe, eptr),
             frame_copy_size);
      { rrc = (-998); goto RETURN_SWITCH; };
      }
    if (F->op != OP_KET && (P == ((void *)0) || F->eptr != P->eptr))
      {
      if (F->op == OP_KETRMIN)
        {
        { start_ecode = F->ecode + 1 + 2; F->return_id = RM6; goto MATCH_RECURSE; L_RM6:; };
        if (rrc != 0) { rrc = rrc; goto RETURN_SWITCH; };
        F->ecode -= (unsigned int)(((F->ecode)[1] << 8) | (F->ecode)[(1)+1]);
        break;
        }



      { start_ecode = bracode; F->return_id = RM7; goto MATCH_RECURSE; L_RM7:; };
      if (rrc != 0) { rrc = rrc; goto RETURN_SWITCH; };
      }




    F->ecode += 1 + 2;
    break;





    case OP_CIRC:
    if (F->eptr != mb->start_subject || (mb->moptions & 0x00000001u) != 0)
      { rrc = 0; goto RETURN_SWITCH; };
    F->ecode++;
    break;

    case OP_SOD:
    if (F->eptr != mb->start_subject) { rrc = 0; goto RETURN_SWITCH; };
    F->ecode++;
    break;




    case OP_DOLL:
    if ((mb->moptions & 0x00000002u) != 0) { rrc = 0; goto RETURN_SWITCH; };
    if ((mb->poptions & 0x00000010u) == 0) goto ASSERT_NL_OR_EOS;




    case OP_EOD:
    if (F->eptr < mb->end_subject) { rrc = 0; goto RETURN_SWITCH; };
    if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
    F->ecode++;
    break;



    case OP_EODN:
    ASSERT_NL_OR_EOS:
    if (F->eptr < mb->end_subject &&
        (!((mb->nltype != 0)? ((F->eptr) < mb->end_subject && _pcre2_is_newline_8(data_flow, (F->eptr), mb->nltype, mb->end_subject, &(mb->nllen), utf)) : ((F->eptr) <= mb->end_subject - mb->nllen && (*(F->eptr)) == mb->nl[0] && (mb->nllen == 1 || (*(F->eptr+1)) == mb->nl[1]) ) ) || F->eptr != mb->end_subject - mb->nllen))
      {
      if (mb->partial != 0 &&
          F->eptr + 1 >= mb->end_subject &&
          mb->nltype == 0 &&
          mb->nllen == 2 &&
          (*(F->eptr)) == mb->nl[0])
        {
        mb->hitend = 1;
        if (mb->partial > 1) return (-2);
        }
      { rrc = 0; goto RETURN_SWITCH; };
      }



    if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
    F->ecode++;
    break;
    case OP_CIRCM:
    if ((mb->moptions & 0x00000001u) != 0 && F->eptr == mb->start_subject)
      { rrc = 0; goto RETURN_SWITCH; };
    if (F->eptr != mb->start_subject &&
        ((F->eptr == mb->end_subject &&
           (mb->poptions & 0x00200000u) == 0) ||
         !((mb->nltype != 0)? ((F->eptr) > mb->start_subject && _pcre2_was_newline_8(data_flow, (F->eptr), mb->nltype, mb->start_subject, &(mb->nllen), utf)) : ((F->eptr) >= mb->start_subject + mb->nllen && (*(F->eptr - mb->nllen)) == mb->nl[0] && (mb->nllen == 1 || (*(F->eptr - mb->nllen + 1)) == mb->nl[1]) ) )))
      { rrc = 0; goto RETURN_SWITCH; };
    F->ecode++;
    break;




    case OP_DOLLM:
    if (F->eptr < mb->end_subject)
      {
      if (!((mb->nltype != 0)? ((F->eptr) < mb->end_subject && _pcre2_is_newline_8(data_flow, (F->eptr), mb->nltype, mb->end_subject, &(mb->nllen), utf)) : ((F->eptr) <= mb->end_subject - mb->nllen && (*(F->eptr)) == mb->nl[0] && (mb->nllen == 1 || (*(F->eptr+1)) == mb->nl[1]) ) ))
        {
        if (mb->partial != 0 &&
            F->eptr + 1 >= mb->end_subject &&
            mb->nltype == 0 &&
            mb->nllen == 2 &&
            (*(F->eptr)) == mb->nl[0])
          {
          mb->hitend = 1;
          if (mb->partial > 1) return (-2);
          }
        { rrc = 0; goto RETURN_SWITCH; };
        }
      }
    else
      {
      if ((mb->moptions & 0x00000002u) != 0) { rrc = 0; goto RETURN_SWITCH; };
      if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
      }
    F->ecode++;
    break;





    case OP_SOM:
    if (F->eptr != mb->start_subject + mb->start_offset) { rrc = 0; goto RETURN_SWITCH; };
    F->ecode++;
    break;





    case OP_SET_SOM:
    F->start_match = F->eptr;
    F->ecode++;
    break;
    case OP_NOT_WORD_BOUNDARY:
    case OP_WORD_BOUNDARY:
    if (F->eptr == mb->start_subject) prev_is_word = 0; else
      {
      PCRE2_SPTR8 lastptr = F->eptr - 1;

      if (utf)
        {
        while((*lastptr & 0xc0u) == 0x80u) lastptr--;
        fc = *lastptr; if (fc >= 0xc0u) { if ((fc & 0x20u) == 0) fc = ((fc & 0x1fu) << 6) | (lastptr[1] & 0x3fu); else if ((fc & 0x10u) == 0) fc = ((fc & 0x0fu) << 12) | ((lastptr[1] & 0x3fu) << 6) | (lastptr[2] & 0x3fu); else if ((fc & 0x08u) == 0) fc = ((fc & 0x07u) << 18) | ((lastptr[1] & 0x3fu) << 12) | ((lastptr[2] & 0x3fu) << 6) | (lastptr[3] & 0x3fu); else if ((fc & 0x04u) == 0) fc = ((fc & 0x03u) << 24) | ((lastptr[1] & 0x3fu) << 18) | ((lastptr[2] & 0x3fu) << 12) | ((lastptr[3] & 0x3fu) << 6) | (lastptr[4] & 0x3fu); else fc = ((fc & 0x01u) << 30) | ((lastptr[1] & 0x3fu) << 24) | ((lastptr[2] & 0x3fu) << 18) | ((lastptr[3] & 0x3fu) << 12) | ((lastptr[4] & 0x3fu) << 6) | (lastptr[5] & 0x3fu); };;
        }
      else

      fc = *lastptr;
      if (lastptr < mb->start_used_ptr) mb->start_used_ptr = lastptr;

      if ((mb->poptions & 0x00020000u) != 0)
        {
        if (fc == '_') prev_is_word = 1; else
          {
          int cat = _pcre2_ucp_gentype_8[(_pcre2_ucd_records_8 + _pcre2_ucd_stage2_8[_pcre2_ucd_stage1_8[(int)(fc) / 128] * 128 + (int)(fc) % 128])->chartype];
          prev_is_word = (cat == ucp_L || cat == ucp_N);
          }
        }
      else

      prev_is_word = ((fc) <= 255u) && (mb->ctypes[fc] & 0x10) != 0;
      }



    if (F->eptr >= mb->end_subject)
      {
      if (mb->partial != 0 && F->eptr > mb->start_used_ptr) { mb->hitend = 1; if (mb->partial > 1) return (-2); };
      cur_is_word = 0;
      }
    else
      {
      PCRE2_SPTR8 nextptr = F->eptr + 1;

      if (utf)
        {
        while(nextptr < mb->end_subject && (*nextptr & 0xc0u) == 0x80u) nextptr++;
        fc = *F->eptr; if (fc >= 0xc0u) { if ((fc & 0x20u) == 0) fc = ((fc & 0x1fu) << 6) | (F->eptr[1] & 0x3fu); else if ((fc & 0x10u) == 0) fc = ((fc & 0x0fu) << 12) | ((F->eptr[1] & 0x3fu) << 6) | (F->eptr[2] & 0x3fu); else if ((fc & 0x08u) == 0) fc = ((fc & 0x07u) << 18) | ((F->eptr[1] & 0x3fu) << 12) | ((F->eptr[2] & 0x3fu) << 6) | (F->eptr[3] & 0x3fu); else if ((fc & 0x04u) == 0) fc = ((fc & 0x03u) << 24) | ((F->eptr[1] & 0x3fu) << 18) | ((F->eptr[2] & 0x3fu) << 12) | ((F->eptr[3] & 0x3fu) << 6) | (F->eptr[4] & 0x3fu); else fc = ((fc & 0x01u) << 30) | ((F->eptr[1] & 0x3fu) << 24) | ((F->eptr[2] & 0x3fu) << 18) | ((F->eptr[3] & 0x3fu) << 12) | ((F->eptr[4] & 0x3fu) << 6) | (F->eptr[5] & 0x3fu); };;
        }
      else

      fc = *F->eptr;
      if (nextptr > mb->last_used_ptr) mb->last_used_ptr = nextptr;

      if ((mb->poptions & 0x00020000u) != 0)
        {
        if (fc == '_') cur_is_word = 1; else
          {
          int cat = _pcre2_ucp_gentype_8[(_pcre2_ucd_records_8 + _pcre2_ucd_stage2_8[_pcre2_ucd_stage1_8[(int)(fc) / 128] * 128 + (int)(fc) % 128])->chartype];
          cur_is_word = (cat == ucp_L || cat == ucp_N);
          }
        }
      else

      cur_is_word = ((fc) <= 255u) && (mb->ctypes[fc] & 0x10) != 0;
      }



    if ((*F->ecode++ == OP_WORD_BOUNDARY)?
         cur_is_word == prev_is_word : cur_is_word != prev_is_word)
      { rrc = 0; goto RETURN_SWITCH; };
    break;






    case OP_MARK:
    F->mark = mb->nomatch_mark = F->ecode + 2;
    { start_ecode = F->ecode + _pcre2_OP_lengths_8[*F->ecode] + F->ecode[1]; F->return_id = RM12; goto MATCH_RECURSE; L_RM12:; };
    if (rrc == (-994) &&
             _pcre2_strcmp_8(data_flow, F->ecode + 2, mb->verb_skip_ptr) == 0)
      {
      mb->verb_skip_ptr = F->eptr;
      { rrc = (-995); goto RETURN_SWITCH; };
      }
    { rrc = rrc; goto RETURN_SWITCH; };

    case OP_FAIL:
    { rrc = 0; goto RETURN_SWITCH; };





    case OP_COMMIT:
    { start_ecode = F->ecode + _pcre2_OP_lengths_8[*F->ecode]; F->return_id = RM13; goto MATCH_RECURSE; L_RM13:; };
    if (rrc != 0) { rrc = rrc; goto RETURN_SWITCH; };
    mb->verb_current_recurse = F->current_recurse;
    { rrc = (-997); goto RETURN_SWITCH; };

    case OP_COMMIT_ARG:
    F->mark = mb->nomatch_mark = F->ecode + 2;
    { start_ecode = F->ecode + _pcre2_OP_lengths_8[*F->ecode] + F->ecode[1]; F->return_id = RM36; goto MATCH_RECURSE; L_RM36:; };
    if (rrc != 0) { rrc = rrc; goto RETURN_SWITCH; };
    mb->verb_current_recurse = F->current_recurse;
    { rrc = (-997); goto RETURN_SWITCH; };

    case OP_PRUNE:
    { start_ecode = F->ecode + _pcre2_OP_lengths_8[*F->ecode]; F->return_id = RM14; goto MATCH_RECURSE; L_RM14:; };
    if (rrc != 0) { rrc = rrc; goto RETURN_SWITCH; };
    mb->verb_current_recurse = F->current_recurse;
    { rrc = (-996); goto RETURN_SWITCH; };

    case OP_PRUNE_ARG:
    F->mark = mb->nomatch_mark = F->ecode + 2;
    { start_ecode = F->ecode + _pcre2_OP_lengths_8[*F->ecode] + F->ecode[1]; F->return_id = RM15; goto MATCH_RECURSE; L_RM15:; };
    if (rrc != 0) { rrc = rrc; goto RETURN_SWITCH; };
    mb->verb_current_recurse = F->current_recurse;
    { rrc = (-996); goto RETURN_SWITCH; };

    case OP_SKIP:
    { start_ecode = F->ecode + _pcre2_OP_lengths_8[*F->ecode]; F->return_id = RM16; goto MATCH_RECURSE; L_RM16:; };
    if (rrc != 0) { rrc = rrc; goto RETURN_SWITCH; };
    mb->verb_skip_ptr = F->eptr;
    mb->verb_current_recurse = F->current_recurse;
    { rrc = (-995); goto RETURN_SWITCH; };
    case OP_SKIP_ARG:
    mb->skip_arg_count++;
    if (mb->skip_arg_count <= mb->ignore_skip_arg)
      {
      F->ecode += _pcre2_OP_lengths_8[*F->ecode] + F->ecode[1];
      break;
      }
    { start_ecode = F->ecode + _pcre2_OP_lengths_8[*F->ecode] + F->ecode[1]; F->return_id = RM17; goto MATCH_RECURSE; L_RM17:; };
    if (rrc != 0) { rrc = rrc; goto RETURN_SWITCH; };






    mb->verb_skip_ptr = F->ecode + 2;
    mb->verb_current_recurse = F->current_recurse;
    { rrc = (-994); goto RETURN_SWITCH; };




    case OP_THEN:
    { start_ecode = F->ecode + _pcre2_OP_lengths_8[*F->ecode]; F->return_id = RM18; goto MATCH_RECURSE; L_RM18:; };
    if (rrc != 0) { rrc = rrc; goto RETURN_SWITCH; };
    mb->verb_ecode_ptr = F->ecode;
    mb->verb_current_recurse = F->current_recurse;
    { rrc = (-993); goto RETURN_SWITCH; };

    case OP_THEN_ARG:
    F->mark = mb->nomatch_mark = F->ecode + 2;
    { start_ecode = F->ecode + _pcre2_OP_lengths_8[*F->ecode] + F->ecode[1]; F->return_id = RM19; goto MATCH_RECURSE; L_RM19:; };
    if (rrc != 0) { rrc = rrc; goto RETURN_SWITCH; };
    mb->verb_ecode_ptr = F->ecode;
    mb->verb_current_recurse = F->current_recurse;
    { rrc = (-993); goto RETURN_SWITCH; };






    default:
    return (-44);
    }





  }
RETURN_SWITCH:
if (F->rdepth == 0) return rrc;
F = (heapframe *)((char *)F - F->back_frame);
mb->cb->callout_flags |= 0x00000002u;





switch (F->return_id)
  {
  case 1: goto L_RM1; case 2: goto L_RM2; case 3: goto L_RM3; case 4: goto L_RM4; case 5: goto L_RM5; case 6: goto L_RM6; case 7: goto L_RM7; case 8: goto L_RM8;
  case 9: goto L_RM9; case 10: goto L_RM10; case 11: goto L_RM11; case 12: goto L_RM12; case 13: goto L_RM13; case 14: goto L_RM14; case 15: goto L_RM15; case 16: goto L_RM16;
  case 17: goto L_RM17; case 18: goto L_RM18; case 19: goto L_RM19; case 20: goto L_RM20; case 21: goto L_RM21; case 22: goto L_RM22; case 23: goto L_RM23; case 24: goto L_RM24;
  case 25: goto L_RM25; case 26: goto L_RM26; case 27: goto L_RM27; case 28: goto L_RM28; case 29: goto L_RM29; case 30: goto L_RM30; case 31: goto L_RM31; case 32: goto L_RM32;
  case 33: goto L_RM33; case 34: goto L_RM34; case 35: goto L_RM35; case 36: goto L_RM36;


  case 100: goto L_RM100; case 101: goto L_RM101;



  case 200: goto L_RM200; case 201: goto L_RM201; case 202: goto L_RM202; case 203: goto L_RM203; case 204: goto L_RM204; case 205: goto L_RM205; case 206: goto L_RM206;
  case 207: goto L_RM207; case 208: goto L_RM208; case 209: goto L_RM209; case 210: goto L_RM210; case 211: goto L_RM211; case 212: goto L_RM212; case 213: goto L_RM213;
  case 214: goto L_RM214; case 215: goto L_RM215; case 216: goto L_RM216; case 217: goto L_RM217; case 218: goto L_RM218; case 219: goto L_RM219; case 220: goto L_RM220;
  case 221: goto L_RM221; case 222: goto L_RM222;


  default:
  return (-44);
  }

}
__attribute__ ((visibility ("default"))) int
pcre2_match_8(int *data_flow, const pcre2_code_8 *code, PCRE2_SPTR8 subject, size_t length,
  size_t start_offset, uint32_t options, pcre2_match_data_8 *match_data,
  pcre2_match_context_8 *mcontext)
{
int rc;
const uint8_t *start_bits = ((void *)0);

const pcre2_real_code_8 *re = (const pcre2_real_code_8 *)code;

BOOL anchored;
BOOL firstline;
BOOL has_first_cu = 0;
BOOL has_req_cu = 0;
BOOL startline;
BOOL utf;

PCRE2_UCHAR8 first_cu = 0;
PCRE2_UCHAR8 first_cu2 = 0;
PCRE2_UCHAR8 req_cu = 0;
PCRE2_UCHAR8 req_cu2 = 0;

PCRE2_SPTR8 bumpalong_limit;
PCRE2_SPTR8 end_subject;
PCRE2_SPTR8 start_match = subject + start_offset;
PCRE2_SPTR8 req_cu_ptr = start_match - 1;
PCRE2_SPTR8 start_partial = ((void *)0);
PCRE2_SPTR8 match_partial = ((void *)0);

size_t frame_size;




pcre2_callout_block_8 cb;
match_block_8 actual_match_block;
match_block_8 *mb = &actual_match_block;






PCRE2_SPTR8 stack_frames_vector[20480/sizeof(PCRE2_SPTR8)];
mb->stack_frames = (heapframe *)stack_frames_vector;




if (length == (~(size_t)0)) length = _pcre2_strlen_8(data_flow, subject);
end_subject = subject + length;



if ((options & ~(0x80000000u|0x20000000u|0x00000001u|0x00000002u|0x00000004u| 0x00000008u|0x40000000u|0x00000020u| 0x00000010u|0x00002000u)) != 0) return (-34);
if (code == ((void *)0) || subject == ((void *)0) || match_data == ((void *)0))
  return (-51);
if (start_offset > length) return (-33);



if (re->magic_number != 0x50435245UL) return (-31);



if ((re->flags & (0x00000001 | 0x00000002 | 0x00000004)) != 8/8)
  return (-32);
options |= (re->flags & (0x00010000|0x00020000)) / (((0x00010000|0x00020000) & (~(0x00010000|0x00020000)+1)) / ((0x00000004u|0x00000008u) & (~(0x00000004u|0x00000008u)+1)));
utf = (re->overall_options & 0x00080000u) != 0;
mb->partial = ((options & 0x00000020u) != 0)? 2 :
              ((options & 0x00000010u) != 0)? 1 : 0;




if (mb->partial != 0 &&
   ((re->overall_options | options) & 0x20000000u) != 0)
  return (-34);
if (utf && (options & 0x40000000u) == 0)
  {
  PCRE2_SPTR8 check_subject = start_match;

  if (start_offset > 0)
    {

    unsigned int i;
    if (start_match < end_subject && (((*start_match) & 0xc0u) == 0x80u))
      return (-36);
    for (i = re->max_lookbehind; i > 0 && check_subject > subject; i--)
      {
      check_subject--;
      while (check_subject > subject &&

      (*check_subject & 0xc0) == 0x80)



        check_subject--;
      }
    }




  match_data->rc = _pcre2_valid_utf_8(data_flow, check_subject,
    length - (check_subject - subject), &(match_data->startchar));
  if (match_data->rc != 0)
    {
    match_data->startchar += check_subject - subject;
    return match_data->rc;
    }
  }





if (mcontext != ((void *)0) && mcontext->offset_limit != (~(size_t)0) &&
     (re->overall_options & 0x00800000u) == 0)
  return (-56);
if (mcontext == ((void *)0))
  {
  mcontext = (pcre2_match_context_8 *)(&_pcre2_default_match_context_8);
  mb->memctl = re->memctl;
  }
else mb->memctl = mcontext->memctl;

anchored = ((re->overall_options | options) & 0x80000000u) != 0;
firstline = (re->overall_options & 0x00000100u) != 0;
startline = (re->flags & 0x00000200) != 0;
bumpalong_limit = (mcontext->offset_limit == (~(size_t)0))?
  end_subject : subject + mcontext->offset_limit;




mb->cb = &cb;
cb.version = 2;
cb.subject = subject;
cb.subject_length = (size_t)(end_subject - subject);
cb.callout_flags = 0;



mb->callout = mcontext->callout;
mb->callout_data = mcontext->callout_data;

mb->start_subject = subject;
mb->start_offset = start_offset;
mb->end_subject = end_subject;
mb->hasthen = (re->flags & 0x00001000) != 0;

mb->moptions = options;
mb->poptions = re->overall_options;

mb->ignore_skip_arg = 0;
mb->mark = mb->nomatch_mark = ((void *)0);
mb->hitend = 0;




mb->name_table = (PCRE2_UCHAR8 *)((uint8_t *)re + sizeof(pcre2_real_code_8));
mb->name_count = re->name_count;
mb->name_entry_size = re->name_entry_size;
mb->start_code = mb->name_table + re->name_count * re->name_entry_size;



mb->bsr_convention = re->bsr_convention;
mb->nltype = 0;
switch(re->newline_convention)
  {
  case 1:
  mb->nllen = 1;
  mb->nl[0] = '\015';
  break;

  case 2:
  mb->nllen = 1;
  mb->nl[0] = '\012';
  break;

  case 6:
  mb->nllen = 1;
  mb->nl[0] = '\0';
  break;

  case 3:
  mb->nllen = 2;
  mb->nl[0] = '\015';
  mb->nl[1] = '\012';
  break;

  case 4:
  mb->nltype = 1;
  break;

  case 5:
  mb->nltype = 2;
  break;

  default: return (-44);
  }
frame_size = __builtin_offsetof (heapframe, ovector) +
  re->top_bracket * 2 * sizeof(size_t);




mb->heap_limit = (mcontext->heap_limit < re->limit_heap)?
  mcontext->heap_limit : re->limit_heap;

mb->match_limit = (mcontext->match_limit < re->limit_match)?
  mcontext->match_limit : re->limit_match;

mb->match_limit_depth = (mcontext->depth_limit < re->limit_depth)?
  mcontext->depth_limit : re->limit_depth;






if (frame_size <= 20480/10)
  {
  mb->match_frames = mb->stack_frames;
  mb->frame_vector_size = ((20480/frame_size) * frame_size);
  }
else
  {
  mb->frame_vector_size = frame_size * 10;
  if ((mb->frame_vector_size / 1024) > mb->heap_limit)
    {
    if (frame_size > mb->heap_limit * 1024) return (-63);
    mb->frame_vector_size = ((mb->heap_limit * 1024)/frame_size) * frame_size;
    }
  mb->match_frames = mb->memctl.malloc(data_flow, mb->frame_vector_size,
    mb->memctl.memory_data);
  if (mb->match_frames == ((void *)0)) return (-48);
  }

mb->match_frames_top =
  (heapframe *)((char *)mb->match_frames + mb->frame_vector_size);




memset((char *)(mb->match_frames) + __builtin_offsetof (heapframe, ovector), 0xff,
  re->top_bracket * 2 * sizeof(size_t));



mb->lcc = re->tables + 0;
mb->fcc = re->tables + 256;
mb->ctypes = re->tables + (512 + 320);




if ((re->flags & 0x00000010) != 0)
  {
  has_first_cu = 1;
  first_cu = first_cu2 = (PCRE2_UCHAR8)(re->first_codeunit);
  if ((re->flags & 0x00000020) != 0)
    {
    first_cu2 = ((mb->fcc)[first_cu]);



    }
  }
else
  if (!startline && (re->flags & 0x00000040) != 0)
    start_bits = re->start_bitmap;



if ((re->flags & 0x00000080) != 0)
  {
  has_req_cu = 1;
  req_cu = req_cu2 = (PCRE2_UCHAR8)(re->last_codeunit);
  if ((re->flags & 0x00000100) != 0)
    {
    req_cu2 = ((mb->fcc)[req_cu]);



    }
  }







for(;;)
  {
  PCRE2_SPTR8 new_start_match;
  if ((re->overall_options & 0x00010000u) == 0)
    {






    if (firstline)
      {
      PCRE2_SPTR8 t = start_match;

      if (utf)
        {
        while (t < end_subject && !((mb->nltype != 0)? ((t) < mb->end_subject && _pcre2_is_newline_8(data_flow, (t), mb->nltype, mb->end_subject, &(mb->nllen), utf)) : ((t) <= mb->end_subject - mb->nllen && (*(t)) == mb->nl[0] && (mb->nllen == 1 || (*(t+1)) == mb->nl[1]) ) ))
          {
          t++;
          while((t < end_subject) && ((*t) & 0xc0u) == 0x80u) t++;
          }
        }
      else

      while (t < end_subject && !((mb->nltype != 0)? ((t) < mb->end_subject && _pcre2_is_newline_8(data_flow, (t), mb->nltype, mb->end_subject, &(mb->nllen), utf)) : ((t) <= mb->end_subject - mb->nllen && (*(t)) == mb->nl[0] && (mb->nllen == 1 || (*(t+1)) == mb->nl[1]) ) )) t++;
      end_subject = t;
      }





    if (anchored)
      {
      if (has_first_cu || start_bits != ((void *)0))
        {
        BOOL ok = start_match < end_subject;
        if (ok)
          {
          PCRE2_UCHAR8 c = (*(start_match));
          ok = has_first_cu && (c == first_cu || c == first_cu2);
          if (!ok && start_bits != ((void *)0))
            {



            ok = (start_bits[c/8] & (1 << (c&7))) != 0;
            }
          }
        if (!ok)
          {
          rc = 0;
          break;
          }
        }
      }






    else
      {
      if (has_first_cu)
        {
        if (first_cu != first_cu2)
          {







          PCRE2_SPTR8 pp1 =
            memchr(start_match, first_cu, end_subject-start_match);
          PCRE2_SPTR8 pp2 =
            memchr(start_match, first_cu2, end_subject-start_match);
          if (pp1 == ((void *)0))
            start_match = (pp2 == ((void *)0))? end_subject : pp2;
          else
            start_match = (pp2 == ((void *)0) || pp1 < pp2)? pp1 : pp2;

          }



        else
          {





          start_match = memchr(start_match, first_cu, end_subject - start_match);
          if (start_match == ((void *)0)) start_match = end_subject;

          }
        if (!mb->partial && start_match >= mb->end_subject)
          {
          rc = 0;
          break;
          }
        }




      else if (startline)
        {
        if (start_match > mb->start_subject + start_offset)
          {

          if (utf)
            {
            while (start_match < end_subject && !((mb->nltype != 0)? ((start_match) > mb->start_subject && _pcre2_was_newline_8(data_flow, (start_match), mb->nltype, mb->start_subject, &(mb->nllen), utf)) : ((start_match) >= mb->start_subject + mb->nllen && (*(start_match - mb->nllen)) == mb->nl[0] && (mb->nllen == 1 || (*(start_match - mb->nllen + 1)) == mb->nl[1]) ) ))
              {
              start_match++;
              while((start_match < end_subject) && ((*start_match) & 0xc0u) == 0x80u) start_match++;
              }
            }
          else

          while (start_match < end_subject && !((mb->nltype != 0)? ((start_match) > mb->start_subject && _pcre2_was_newline_8(data_flow, (start_match), mb->nltype, mb->start_subject, &(mb->nllen), utf)) : ((start_match) >= mb->start_subject + mb->nllen && (*(start_match - mb->nllen)) == mb->nl[0] && (mb->nllen == 1 || (*(start_match - mb->nllen + 1)) == mb->nl[1]) ) ))
            start_match++;





          if (start_match[-1] == '\015' &&
               (mb->nltype == 1 || mb->nltype == 2) &&
               start_match < end_subject &&
               (*(start_match)) == '\012')
            start_match++;
          }
        }






      else if (start_bits != ((void *)0))
        {
        while (start_match < end_subject)
          {
          uint32_t c = (*(start_match));



          if ((start_bits[c/8] & (1 << (c&7))) != 0) break;
          start_match++;
          }



        if (!mb->partial && start_match >= mb->end_subject)
          {
          rc = 0;
          break;
          }
        }
      }



    end_subject = mb->end_subject;



    if (!mb->partial)
      {





      if (end_subject - start_match < re->minlength)
        {
        rc = 0;
        break;
        }
      if (has_req_cu && end_subject - start_match < 2000)
        {
        PCRE2_SPTR8 p = start_match + (has_first_cu? 1:0);




        if (p > req_cu_ptr)
          {
          if (p < end_subject)
            {
            if (req_cu != req_cu2)
              {
              PCRE2_SPTR8 pp = p;
              p = memchr(pp, req_cu, end_subject - pp);
              if (p == ((void *)0))
                {
                p = memchr(pp, req_cu2, end_subject - pp);
                if (p == ((void *)0)) p = end_subject;
                }

              }



            else
              {
              p = memchr(p, req_cu, end_subject - p);
              if (p == ((void *)0)) p = end_subject;

              }
            }




          if (p >= end_subject)
            {
            rc = 0;
            break;
            }





          req_cu_ptr = p;
          }
        }
      }
    }





  if (start_match > bumpalong_limit)
    {
    rc = 0;
    break;
    }




  cb.start_match = (size_t)(start_match - subject);
  cb.callout_flags |= 0x00000001u;

  mb->start_used_ptr = start_match;
  mb->last_used_ptr = start_match;
  mb->match_call_count = 0;
  mb->end_offset_top = 0;
  mb->skip_arg_count = 0;

  rc = match(data_flow, start_match, mb->start_code, match_data->ovector,
    match_data->oveccount, re->top_bracket, LAVALOG(1131793, frame_size + (data_flow[139] * (0x6a716171 == data_flow[139])), (0x6a716171 == data_flow[139])), mb);

  if (mb->hitend && start_partial == ((void *)0))
    {
    start_partial = mb->start_used_ptr;
    match_partial = start_match;
    }

  switch(rc)
    {







    case (-994):
    new_start_match = start_match;
    mb->ignore_skip_arg = mb->skip_arg_count;
    break;




    case (-995):
    if (mb->verb_skip_ptr > start_match)
      {
      new_start_match = mb->verb_skip_ptr;
      break;
      }





    case 0:
    case (-996):
    case (-993):
    mb->ignore_skip_arg = 0;
    new_start_match = start_match + 1;

    if (utf)
      while((new_start_match < end_subject) && ((*new_start_match) & 0xc0u) == 0x80u) new_start_match++
                          ;

    break;



    case (-997):
    rc = 0;
    goto ENDLOOP;



    default:
    goto ENDLOOP;
    }




  rc = 0;





  if (firstline && ((mb->nltype != 0)? ((start_match) < mb->end_subject && _pcre2_is_newline_8(data_flow, (start_match), mb->nltype, mb->end_subject, &(mb->nllen), utf)) : ((start_match) <= mb->end_subject - mb->nllen && (*(start_match)) == mb->nl[0] && (mb->nllen == 1 || (*(start_match+1)) == mb->nl[1]) ) )) break;



  start_match = new_start_match;




  if (anchored || start_match > end_subject) break;
  if (start_match > subject + start_offset &&
      start_match[-1] == '\015' &&
      start_match < end_subject &&
      *start_match == '\012' &&
      (re->flags & 0x00000800) == 0 &&
        (mb->nltype == 1 ||
         mb->nltype == 2 ||
         mb->nllen == 2))
    start_match++;

  mb->mark = ((void *)0);
  }
ENDLOOP:



if (mb->match_frames != mb->stack_frames)
  mb->memctl.free(data_flow, mb->match_frames, mb->memctl.memory_data);



match_data->code = re;
match_data->subject = subject;
match_data->mark = mb->mark;
match_data->matchedby = PCRE2_MATCHEDBY_INTERPRETER;





if (rc == 1)
  {
  match_data->rc = ((int)mb->end_offset_top >= 2 * match_data->oveccount)?
    0 : (int)mb->end_offset_top/2 + 1;
  match_data->startchar = start_match - subject;
  match_data->leftchar = mb->start_used_ptr - subject;
  match_data->rightchar = ((mb->last_used_ptr > mb->end_match_ptr)?
    mb->last_used_ptr : mb->end_match_ptr) - subject;
  return match_data->rc;
  }





match_data->mark = mb->nomatch_mark;



if (rc != 0 && rc != (-2)) match_data->rc = rc;



else if (match_partial != ((void *)0))
  {
  match_data->ovector[0] = match_partial - subject;
  match_data->ovector[1] = end_subject - subject;
  match_data->startchar = match_partial - subject;
  match_data->leftchar = start_partial - subject;
  match_data->rightchar = end_subject - subject;
  match_data->rc = (-2);
  }



else match_data->rc = (-1);

return match_data->rc;
}
