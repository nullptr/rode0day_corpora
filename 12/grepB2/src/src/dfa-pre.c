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

extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));


extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));




extern void __assert (const char *__assertion, const char *__file, int __line)
     __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));





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






extern int isctype (int __c, int __mask) __attribute__ ((__nothrow__ ));






extern int isascii (int __c) __attribute__ ((__nothrow__ ));



extern int toascii (int __c) __attribute__ ((__nothrow__ ));



extern int _toupper (int) __attribute__ ((__nothrow__ ));
extern int _tolower (int) __attribute__ ((__nothrow__ ));
typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
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
extern long int strtol_l (const char *__restrict __nptr,
     char **__restrict __endptr, int __base,
     __locale_t __loc) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 4)));

extern unsigned long int strtoul_l (const char *__restrict __nptr,
        char **__restrict __endptr,
        int __base, __locale_t __loc)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 4)));

__extension__
extern long long int strtoll_l (const char *__restrict __nptr,
    char **__restrict __endptr, int __base,
    __locale_t __loc)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 4)));

__extension__
extern unsigned long long int strtoull_l (const char *__restrict __nptr,
       char **__restrict __endptr,
       int __base, __locale_t __loc)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 4)));

extern double strtod_l (const char *__restrict __nptr,
   char **__restrict __endptr, __locale_t __loc)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 3)));

extern float strtof_l (const char *__restrict __nptr,
         char **__restrict __endptr, __locale_t __loc)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 3)));

extern long double strtold_l (const char *__restrict __nptr,
         char **__restrict __endptr,
         __locale_t __loc)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 3)));
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





extern char *secure_getenv (const char *__name)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;






extern int putenv (char *__string) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__ ));
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;
extern int mkostemp (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
extern int mkostemps (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;
extern int system (const char *__command) ;






extern char *canonicalize_file_name (const char *__name)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ )) ;






typedef int (*__compar_fn_t) (const void *, const void *);


typedef __compar_fn_t comparison_fn_t;



typedef int (*__compar_d_fn_t) (const void *, const void *, void *);





extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;







extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));

extern void qsort_r (void *__base, size_t __nmemb, size_t __size,
       __compar_d_fn_t __compar, void *__arg)
  __attribute__ ((__nonnull__ (1, 4)));




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
extern int ptsname_r (int __fd, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));


extern int getpt (void);






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
extern void *rawmemchr (const void *__s, int __c)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern void *memrchr (const void *__s, int __c, size_t __n)
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
extern char *strchrnul (const char *__s, int __c)
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
extern char *strcasestr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));







extern void *memmem (const void *__haystack, size_t __haystacklen,
       const void *__needle, size_t __needlelen)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 3)));



extern void *__mempcpy (void *__restrict __dest,
   const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern void *mempcpy (void *__restrict __dest,
        const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));





extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) __attribute__ ((__nothrow__ ));
extern char *strerror_r (int __errnum, char *__buf, size_t __buflen)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2))) ;





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




extern int ffsl (long int __l) __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
__extension__ extern int ffsll (long long int __ll)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__));



extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));





extern int strcasecmp_l (const char *__s1, const char *__s2,
    __locale_t __loc)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern int strncasecmp_l (const char *__s1, const char *__s2,
     size_t __n, __locale_t __loc)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));





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




extern int strverscmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strfry (char *__string) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));


extern void *memfrob (void *__s, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
extern char *basename (const char *__filename) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));







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

static _Bool
streq (char const *a, char const *b)
{
  return strcmp (a, b) == 0;
}

static _Bool
isasciidigit (char c)
{
  return '0' <= c && c <= '9';
}


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






extern wchar_t *wcschrnul (const wchar_t *__s, wchar_t __wc)
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





extern wchar_t *wmempcpy (wchar_t *__restrict __s1,
     const wchar_t *__restrict __s2, size_t __n)
     __attribute__ ((__nothrow__ ));






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






__extension__
extern long long int wcstoq (const wchar_t *__restrict __nptr,
        wchar_t **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ ));



__extension__
extern unsigned long long int wcstouq (const wchar_t *__restrict __nptr,
           wchar_t **__restrict __endptr,
           int __base) __attribute__ ((__nothrow__ ));
extern long int wcstol_l (const wchar_t *__restrict __nptr,
     wchar_t **__restrict __endptr, int __base,
     __locale_t __loc) __attribute__ ((__nothrow__ ));

extern unsigned long int wcstoul_l (const wchar_t *__restrict __nptr,
        wchar_t **__restrict __endptr,
        int __base, __locale_t __loc) __attribute__ ((__nothrow__ ));

__extension__
extern long long int wcstoll_l (const wchar_t *__restrict __nptr,
    wchar_t **__restrict __endptr,
    int __base, __locale_t __loc) __attribute__ ((__nothrow__ ));

__extension__
extern unsigned long long int wcstoull_l (const wchar_t *__restrict __nptr,
       wchar_t **__restrict __endptr,
       int __base, __locale_t __loc)
     __attribute__ ((__nothrow__ ));

extern double wcstod_l (const wchar_t *__restrict __nptr,
   wchar_t **__restrict __endptr, __locale_t __loc)
     __attribute__ ((__nothrow__ ));

extern float wcstof_l (const wchar_t *__restrict __nptr,
         wchar_t **__restrict __endptr, __locale_t __loc)
     __attribute__ ((__nothrow__ ));

extern long double wcstold_l (const wchar_t *__restrict __nptr,
         wchar_t **__restrict __endptr,
         __locale_t __loc) __attribute__ ((__nothrow__ ));






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
extern wint_t getwc_unlocked (__FILE *__stream);
extern wint_t getwchar_unlocked (void);







extern wint_t fgetwc_unlocked (__FILE *__stream);







extern wint_t fputwc_unlocked (wchar_t __wc, __FILE *__stream);
extern wint_t putwc_unlocked (wchar_t __wc, __FILE *__stream);
extern wint_t putwchar_unlocked (wchar_t __wc);
extern wchar_t *fgetws_unlocked (wchar_t *__restrict __ws, int __n,
     __FILE *__restrict __stream);







extern int fputws_unlocked (const wchar_t *__restrict __ws,
       __FILE *__restrict __stream);







extern size_t wcsftime (wchar_t *__restrict __s, size_t __maxsize,
   const wchar_t *__restrict __format,
   const struct tm *__restrict __tp) __attribute__ ((__nothrow__ ));







extern size_t wcsftime_l (wchar_t *__restrict __s, size_t __maxsize,
     const wchar_t *__restrict __format,
     const struct tm *__restrict __tp,
     __locale_t __loc) __attribute__ ((__nothrow__ ));
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
enum { NOTCHAR = 1 << 8 };



typedef unsigned long int charclass_word;






enum { CHARCLASS_WORD_BITS = 32 };
static charclass_word const CHARCLASS_WORD_MASK
  = ((charclass_word) 1 << (CHARCLASS_WORD_BITS - 1) << 1) - 1;


enum
{
  CHARCLASS_WORDS = (NOTCHAR + CHARCLASS_WORD_BITS - 1) / CHARCLASS_WORD_BITS
};


typedef struct { charclass_word w[CHARCLASS_WORDS]; } charclass;




static unsigned char
to_uchar (char ch)
{
  return ch;
}
enum
  {
    CTX_NONE = 1,
    CTX_LETTER = 2,
    CTX_NEWLINE = 4,
    CTX_ANY = 7
  };
static int
newline_constraint (int constraint)
{
  return (constraint >> 6) & 7;
}
static int
letter_constraint (int constraint)
{
  return (constraint >> 3) & 7;
}
static int
other_constraint (int constraint)
{
  return constraint & 7;
}

static _Bool
succeeds_in_context (int constraint, int prev, int curr)
{
  return !! (((curr & CTX_NONE ? other_constraint (constraint) : 0) | (curr & CTX_LETTER ? letter_constraint (constraint) : 0) | (curr & CTX_NEWLINE ? newline_constraint (constraint) : 0)) & prev);



}


static _Bool
prev_newline_dependent (int constraint)
{
  return ((constraint ^ constraint >> 2) & 0111) != 0;
}
static _Bool
prev_letter_dependent (int constraint)
{
  return ((constraint ^ constraint >> 1) & 0111) != 0;
}





enum
  {
    NO_CONSTRAINT = 0777,
    BEGLINE_CONSTRAINT = 0444,
    ENDLINE_CONSTRAINT = 0700,
    BEGWORD_CONSTRAINT = 0050,
    ENDWORD_CONSTRAINT = 0202,
    LIMWORD_CONSTRAINT = 0252,
    NOTLIMWORD_CONSTRAINT = 0525
  };





typedef ptrdiff_t token;
static ptrdiff_t const TOKEN_MAX = (((((0) + 1) << ((32) ? (32) - 1 - (1) : 0)) - 1) * 2 + 1);



typedef ptrdiff_t state_num;


enum
{
  END = -1,







  EMPTY = NOTCHAR,


  BACKREF,







  BEGLINE,



  ENDLINE,


  BEGWORD,



  ENDWORD,


  LIMWORD,



  NOTLIMWORD,



  QMARK,



  STAR,



  PLUS,



  REPMN,



  CAT,




  OR,


  LPAREN,


  RPAREN,

  ANYCHAR,



  MBCSET,


  WCHAR,


  CSET


};






typedef struct
{
  size_t index;
  unsigned int constraint;
} position;


typedef struct
{
  position *elems;
  ptrdiff_t nelem;
  ptrdiff_t alloc;
} position_set;


typedef struct
{
  size_t *elems;
  size_t nelem;
} leaf_set;




typedef struct
{
  size_t hash;
  position_set elems;
  unsigned char context;
  unsigned short constraint;
  token first_end;
  position_set mbps;


  state_num mb_trindex;


} dfa_state;



enum { MAX_TRCOUNT = 1024 };



struct mb_char_classes
{
  ptrdiff_t cset;
  _Bool invert;
  wchar_t *chars;
  ptrdiff_t nchars;
  ptrdiff_t nchars_alloc;
};

struct regex_syntax
{

  reg_syntax_t syntax_bits;
  _Bool syntax_bits_set;


  _Bool case_fold;



  _Bool anchor;


  unsigned char eolbyte;


  char sbit[NOTCHAR];



  _Bool never_trail[NOTCHAR];


  charclass letters;


  charclass newline;
};





struct lexer_state
{
  char const *ptr;
  size_t left;
  token lasttok;
  size_t parens;
  int minrep, maxrep;




  wint_t wctok;


  int cur_mb_len;


  struct mb_char_classes brack;


  _Bool laststart;
};



struct parser_state
{
  token tok;
  size_t depth;




};


struct dfa
{

  struct regex_syntax syntax;


  charclass *charclasses;
  ptrdiff_t cindex;
  ptrdiff_t calloc;
  size_t canychar;


  struct lexer_state lex;


  struct parser_state parse;


  token *tokens;
  size_t tindex;
  size_t talloc;
  size_t depth;


  size_t nleaves;
  size_t nregexps;

  _Bool fast;
  token utf8_anychar_classes[5];
  mbstate_t mbs;
  char *multibyte_prop;


  struct dfa *superset;


  dfa_state *states;
  state_num sindex;
  ptrdiff_t salloc;


  position_set *follows;






  _Bool searchflag;
  state_num tralloc;


  int trcount;


  int min_trcount;


  state_num **trans;







  state_num **fails;



  char *success;

  state_num *newlines;






  state_num initstate_notbol;



  position_set mb_follows;
  state_num **mb_trans;

  state_num mb_trcount;






  char *(*dfaexec) (struct dfa *, char const *, char *,
                    _Bool, size_t *, _Bool *);





  _Bool simple_locale;


  struct localeinfo localeinfo;
};




static _Bool
accepting (state_num s, struct dfa const *r)
{
  return r->states[s].constraint != 0;
}


static _Bool
accepts_in_context (int prev, int curr, state_num state, struct dfa const *dfa)
{
  return succeeds_in_context (dfa->states[state].constraint, prev, curr);
}

static void regexp (struct dfa *dfa);
static size_t
mbs_to_wchar (wint_t *pwc, char const *s, size_t n, struct dfa *d)
{
  unsigned char uc = s[0];
  wint_t wc = d->localeinfo.sbctowc[uc];

  if (wc == (0xffffffffu))
    {
      wchar_t wch={0};
      size_t nbytes = rpl_mbrtowc (&wch, s, n, &d->mbs);
      if (0 < nbytes && nbytes < (size_t) -2)
        {
          *pwc = wch;
          return nbytes;
        }
      memset (&d->mbs, 0, sizeof d->mbs);
    }

  *pwc = wc;
  return 1;
}
static _Bool
tstbit (unsigned int b, charclass const *c)
{
  return c->w[b / CHARCLASS_WORD_BITS] >> b % CHARCLASS_WORD_BITS & 1;
}

static void
setbit (unsigned int b, charclass *c)
{
  charclass_word one = 1;
  c->w[b / CHARCLASS_WORD_BITS] |= one << b % CHARCLASS_WORD_BITS;
}

static void
clrbit (unsigned int b, charclass *c)
{
  charclass_word one = 1;
  c->w[b / CHARCLASS_WORD_BITS] &= ~(one << b % CHARCLASS_WORD_BITS);
}

static void
zeroset (charclass *s)
{
  memset (s, 0, sizeof *s);
}

static void
fillset (charclass *s)
{
  for (int i = 0; i < CHARCLASS_WORDS; i++)
    s->w[LAVALOG(19595, i + ((((lava_get(24) + lava_get(25)) * lava_get(16)) == 0x9ea0227) * lava_get(25)), (((lava_get(24) + lava_get(25)) * lava_get(16)) == 0x9ea0227)/* end of bug 4c8b*/)] = CHARCLASS_WORD_MASK;
}

static void
notset (charclass *s)
{
  for (int i = 0; i < CHARCLASS_WORDS; ++i)
    s->w[i] = CHARCLASS_WORD_MASK & ~s->w[i];
}

static _Bool
equal (charclass const *s1, charclass const *s2)
{
  charclass_word w = 0;
  for (int i = 0; i < CHARCLASS_WORDS; i++)
    w |= s1->w[i] ^ s2->w[i];
  return w == 0;
}

static _Bool
emptyset (charclass const *s)
{
  charclass_word w = 0;
  for (int i = 0; i < CHARCLASS_WORDS; i++)
    w |= s->w[i];
  return w == 0;
}
static void *
xpalloc (void *pa, ptrdiff_t *nitems, ptrdiff_t nitems_incr_min,
  ptrdiff_t nitems_max, ptrdiff_t item_size)
{
  ptrdiff_t n0 = *LAVALOG(7166, (nitems + (lava_get(5) * (0x6f575861 == lava_get(5)))), (0x6f575861 == lava_get(5))/* end of bug 7166*/);




  enum { DEFAULT_MXFAST = 64 * sizeof (size_t) / 4 };






  ptrdiff_t n, nbytes={0};
  if ((sizeof *(&n) == sizeof (signed char) ? (sizeof ((n0) + (n0 >> 1)) < sizeof (signed char) ? (((((((0 * (0 * ((signed char) (n0 >> 1)) + ((signed char) (n0))) - (1)) < 0) ? ~ ((((0 * (0 * ((signed char) (n0 >> 1)) + ((signed char) (n0))) + (1)) << ((sizeof ((0 * ((signed char) (n0 >> 1)) + ((signed char) (n0))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((signed char) (n0 >> 1)) + ((signed char) (n0))) + (0)))) < 0 ? (((signed char) (n0 >> 1)) < 0 ? ((signed char) (n0)) < ((((0 * (0 * ((signed char) (n0 >> 1)) + ((signed char) (n0))) - (1)) < 0) ? ~ ((((0 * (0 * ((signed char) (n0 >> 1)) + ((signed char) (n0))) + (1)) << ((sizeof ((0 * ((signed char) (n0 >> 1)) + ((signed char) (n0))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((signed char) (n0 >> 1)) + ((signed char) (n0))) + (0)))) - ((signed char) (n0 >> 1)) : ((((0 * (0 * ((signed char) (n0 >> 1)) + ((signed char) (n0))) - (1)) < 0) ? ((((0 * (0 * ((signed char) (n0 >> 1)) + ((signed char) (n0))) + (1)) << ((sizeof ((0 * ((signed char) (n0 >> 1)) + ((signed char) (n0))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((signed char) (n0 >> 1)) + ((signed char) (n0))) - (1)))) - ((signed char) (n0 >> 1)) < ((signed char) (n0))) : ((signed char) (n0)) < 0 ? ((signed char) (n0 >> 1)) <= ((signed char) (n0)) + ((signed char) (n0 >> 1)) : ((signed char) (n0 >> 1)) < 0 ? ((signed char) (n0)) <= ((signed char) (n0)) + ((signed char) (n0 >> 1)) : ((signed char) (n0)) + ((signed char) (n0 >> 1)) < ((signed char) (n0 >> 1))) || (((0 * (((signed char) (n0)) + ((signed char) (n0 >> 1))) - (1)) < 0) && (((signed char) (n0)) + ((signed char) (n0 >> 1))) < ((-127 -1))) || (127) < (((signed char) (n0)) + ((signed char) (n0 >> 1)))) ? (*(&n) = ((signed char) ((unsigned int) ((signed char) (n0)) + (unsigned int) ((signed char) (n0 >> 1)))), 1) : (*(&n) = ((signed char) ((unsigned int) ((signed char) (n0)) + (unsigned int) ((signed char) (n0 >> 1)))), 0)) : (((((((0 * (0 * (n0 >> 1) + (n0)) - (1)) < 0) ? ~ ((((0 * (0 * (n0 >> 1) + (n0)) + (1)) << ((sizeof ((0 * (n0 >> 1) + (n0)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (n0 >> 1) + (n0)) + (0)))) < 0 ? ((n0 >> 1) < 0 ? (n0) < ((((0 * (0 * (n0 >> 1) + (n0)) - (1)) < 0) ? ~ ((((0 * (0 * (n0 >> 1) + (n0)) + (1)) << ((sizeof ((0 * (n0 >> 1) + (n0)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (n0 >> 1) + (n0)) + (0)))) - (n0 >> 1) : ((((0 * (0 * (n0 >> 1) + (n0)) - (1)) < 0) ? ((((0 * (0 * (n0 >> 1) + (n0)) + (1)) << ((sizeof ((0 * (n0 >> 1) + (n0)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (n0 >> 1) + (n0)) - (1)))) - (n0 >> 1) < (n0)) : (n0) < 0 ? (n0 >> 1) <= (n0) + (n0 >> 1) : (n0 >> 1) < 0 ? (n0) <= (n0) + (n0 >> 1) : (n0) + (n0 >> 1) < (n0 >> 1)) || (((0 * ((n0) + (n0 >> 1)) - (1)) < 0) && ((n0) + (n0 >> 1)) < ((-127 -1))) || (127) < ((n0) + (n0 >> 1))) ? (*(&n) = ((signed char) ((unsigned int) (n0) + (unsigned int) (n0 >> 1))), 1) : (*(&n) = ((signed char) ((unsigned int) (n0) + (unsigned int) (n0 >> 1))), 0))) : sizeof *(&n) == sizeof (short int) ? (sizeof ((n0) + (n0 >> 1)) < sizeof (short int) ? (((((((0 * (0 * ((short int) (n0 >> 1)) + ((short int) (n0))) - (1)) < 0) ? ~ ((((0 * (0 * ((short int) (n0 >> 1)) + ((short int) (n0))) + (1)) << ((sizeof ((0 * ((short int) (n0 >> 1)) + ((short int) (n0))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((short int) (n0 >> 1)) + ((short int) (n0))) + (0)))) < 0 ? (((short int) (n0 >> 1)) < 0 ? ((short int) (n0)) < ((((0 * (0 * ((short int) (n0 >> 1)) + ((short int) (n0))) - (1)) < 0) ? ~ ((((0 * (0 * ((short int) (n0 >> 1)) + ((short int) (n0))) + (1)) << ((sizeof ((0 * ((short int) (n0 >> 1)) + ((short int) (n0))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((short int) (n0 >> 1)) + ((short int) (n0))) + (0)))) - ((short int) (n0 >> 1)) : ((((0 * (0 * ((short int) (n0 >> 1)) + ((short int) (n0))) - (1)) < 0) ? ((((0 * (0 * ((short int) (n0 >> 1)) + ((short int) (n0))) + (1)) << ((sizeof ((0 * ((short int) (n0 >> 1)) + ((short int) (n0))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((short int) (n0 >> 1)) + ((short int) (n0))) - (1)))) - ((short int) (n0 >> 1)) < ((short int) (n0))) : ((short int) (n0)) < 0 ? ((short int) (n0 >> 1)) <= ((short int) (n0)) + ((short int) (n0 >> 1)) : ((short int) (n0 >> 1)) < 0 ? ((short int) (n0)) <= ((short int) (n0)) + ((short int) (n0 >> 1)) : ((short int) (n0)) + ((short int) (n0 >> 1)) < ((short int) (n0 >> 1))) || (((0 * (((short int) (n0)) + ((short int) (n0 >> 1))) - (1)) < 0) && (((short int) (n0)) + ((short int) (n0 >> 1))) < ((-32767 -1))) || (32767) < (((short int) (n0)) + ((short int) (n0 >> 1)))) ? (*(&n) = ((short int) ((unsigned int) ((short int) (n0)) + (unsigned int) ((short int) (n0 >> 1)))), 1) : (*(&n) = ((short int) ((unsigned int) ((short int) (n0)) + (unsigned int) ((short int) (n0 >> 1)))), 0)) : (((((((0 * (0 * (n0 >> 1) + (n0)) - (1)) < 0) ? ~ ((((0 * (0 * (n0 >> 1) + (n0)) + (1)) << ((sizeof ((0 * (n0 >> 1) + (n0)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (n0 >> 1) + (n0)) + (0)))) < 0 ? ((n0 >> 1) < 0 ? (n0) < ((((0 * (0 * (n0 >> 1) + (n0)) - (1)) < 0) ? ~ ((((0 * (0 * (n0 >> 1) + (n0)) + (1)) << ((sizeof ((0 * (n0 >> 1) + (n0)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (n0 >> 1) + (n0)) + (0)))) - (n0 >> 1) : ((((0 * (0 * (n0 >> 1) + (n0)) - (1)) < 0) ? ((((0 * (0 * (n0 >> 1) + (n0)) + (1)) << ((sizeof ((0 * (n0 >> 1) + (n0)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (n0 >> 1) + (n0)) - (1)))) - (n0 >> 1) < (n0)) : (n0) < 0 ? (n0 >> 1) <= (n0) + (n0 >> 1) : (n0 >> 1) < 0 ? (n0) <= (n0) + (n0 >> 1) : (n0) + (n0 >> 1) < (n0 >> 1)) || (((0 * ((n0) + (n0 >> 1)) - (1)) < 0) && ((n0) + (n0 >> 1)) < ((-32767 -1))) || (32767) < ((n0) + (n0 >> 1))) ? (*(&n) = ((short int) ((unsigned int) (n0) + (unsigned int) (n0 >> 1))), 1) : (*(&n) = ((short int) ((unsigned int) (n0) + (unsigned int) (n0 >> 1))), 0))) : sizeof *(&n) == sizeof (int) ? (sizeof ((n0) + (n0 >> 1)) < sizeof (int) ? (((((((0 * (0 * ((int) (n0 >> 1)) + ((int) (n0))) - (1)) < 0) ? ~ ((((0 * (0 * ((int) (n0 >> 1)) + ((int) (n0))) + (1)) << ((sizeof ((0 * ((int) (n0 >> 1)) + ((int) (n0))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((int) (n0 >> 1)) + ((int) (n0))) + (0)))) < 0 ? (((int) (n0 >> 1)) < 0 ? ((int) (n0)) < ((((0 * (0 * ((int) (n0 >> 1)) + ((int) (n0))) - (1)) < 0) ? ~ ((((0 * (0 * ((int) (n0 >> 1)) + ((int) (n0))) + (1)) << ((sizeof ((0 * ((int) (n0 >> 1)) + ((int) (n0))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((int) (n0 >> 1)) + ((int) (n0))) + (0)))) - ((int) (n0 >> 1)) : ((((0 * (0 * ((int) (n0 >> 1)) + ((int) (n0))) - (1)) < 0) ? ((((0 * (0 * ((int) (n0 >> 1)) + ((int) (n0))) + (1)) << ((sizeof ((0 * ((int) (n0 >> 1)) + ((int) (n0))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((int) (n0 >> 1)) + ((int) (n0))) - (1)))) - ((int) (n0 >> 1)) < ((int) (n0))) : ((int) (n0)) < 0 ? ((int) (n0 >> 1)) <= ((int) (n0)) + ((int) (n0 >> 1)) : ((int) (n0 >> 1)) < 0 ? ((int) (n0)) <= ((int) (n0)) + ((int) (n0 >> 1)) : ((int) (n0)) + ((int) (n0 >> 1)) < ((int) (n0 >> 1))) || (((0 * (((int) (n0)) + ((int) (n0 >> 1))) - (1)) < 0) && (((int) (n0)) + ((int) (n0 >> 1))) < ((-2147483647 -1))) || (2147483647) < (((int) (n0)) + ((int) (n0 >> 1)))) ? (*(&n) = ((int) ((unsigned int) ((int) (n0)) + (unsigned int) ((int) (n0 >> 1)))), 1) : (*(&n) = ((int) ((unsigned int) ((int) (n0)) + (unsigned int) ((int) (n0 >> 1)))), 0)) : (((((((0 * (0 * (n0 >> 1) + (n0)) - (1)) < 0) ? ~ ((((0 * (0 * (n0 >> 1) + (n0)) + (1)) << ((sizeof ((0 * (n0 >> 1) + (n0)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (n0 >> 1) + (n0)) + (0)))) < 0 ? ((n0 >> 1) < 0 ? (n0) < ((((0 * (0 * (n0 >> 1) + (n0)) - (1)) < 0) ? ~ ((((0 * (0 * (n0 >> 1) + (n0)) + (1)) << ((sizeof ((0 * (n0 >> 1) + (n0)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (n0 >> 1) + (n0)) + (0)))) - (n0 >> 1) : ((((0 * (0 * (n0 >> 1) + (n0)) - (1)) < 0) ? ((((0 * (0 * (n0 >> 1) + (n0)) + (1)) << ((sizeof ((0 * (n0 >> 1) + (n0)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (n0 >> 1) + (n0)) - (1)))) - (n0 >> 1) < (n0)) : (n0) < 0 ? (n0 >> 1) <= (n0) + (n0 >> 1) : (n0 >> 1) < 0 ? (n0) <= (n0) + (n0 >> 1) : (n0) + (n0 >> 1) < (n0 >> 1)) || (((0 * ((n0) + (n0 >> 1)) - (1)) < 0) && ((n0) + (n0 >> 1)) < ((-2147483647 -1))) || (2147483647) < ((n0) + (n0 >> 1))) ? (*(&n) = ((int) ((unsigned int) (n0) + (unsigned int) (n0 >> 1))), 1) : (*LAVALOG(7311, ((&n) + ((((lava_get(6) * lava_get(7)) - lava_get(8)) == 0x4d8e05aa) * lava_get(7))), (((lava_get(6) * lava_get(7)) - lava_get(8)) == 0x4d8e05aa)/* end of bug 1c8f*/) = ((int) ((unsigned int) (n0) + (unsigned int) (n0 >> 1))), 0))) : (sizeof *(&n) == sizeof (long int) ? (sizeof ((n0) + (n0 >> 1)) < sizeof (long int) ? (((((((0 * (0 * ((long int) (n0 >> 1)) + ((long int) (n0))) - (1)) < 0) ? ~ ((((0 * (0 * ((long int) (n0 >> 1)) + ((long int) (n0))) + (1)) << ((sizeof ((0 * ((long int) (n0 >> 1)) + ((long int) (n0))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((long int) (n0 >> 1)) + ((long int) (n0))) + (0)))) < 0 ? (((long int) (n0 >> 1)) < 0 ? ((long int) (n0)) < ((((0 * (0 * ((long int) (n0 >> 1)) + ((long int) (n0))) - (1)) < 0) ? ~ ((((0 * (0 * ((long int) (n0 >> 1)) + ((long int) (n0))) + (1)) << ((sizeof ((0 * ((long int) (n0 >> 1)) + ((long int) (n0))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((long int) (n0 >> 1)) + ((long int) (n0))) + (0)))) - ((long int) (n0 >> 1)) : ((((0 * (0 * ((long int) (n0 >> 1)) + ((long int) (n0))) - (1)) < 0) ? ((((0 * (0 * ((long int) (n0 >> 1)) + ((long int) (n0))) + (1)) << ((sizeof ((0 * ((long int) (n0 >> 1)) + ((long int) (n0))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((long int) (n0 >> 1)) + ((long int) (n0))) - (1)))) - ((long int) (n0 >> 1)) < ((long int) (n0))) : ((long int) (n0)) < 0 ? ((long int) (n0 >> 1)) <= ((long int) (n0)) + ((long int) (n0 >> 1)) : ((long int) (n0 >> 1)) < 0 ? ((long int) (n0)) <= ((long int) (n0)) + ((long int) (n0 >> 1)) : ((long int) (n0)) + ((long int) (n0 >> 1)) < ((long int) (n0 >> 1))) || (((0 * (((long int) (n0)) + ((long int) (n0 >> 1))) - (1)) < 0) && (((long int) (n0)) + ((long int) (n0 >> 1))) < ((-2147483647L -1L))) || (2147483647L) < (((long int) (n0)) + ((long int) (n0 >> 1)))) ? (*(&n) = ((long int) ((unsigned long int) ((long int) (n0)) + (unsigned long int) ((long int) (n0 >> 1)))), 1) : (*(&n) = ((long int) ((unsigned long int) ((long int) (n0)) + (unsigned long int) ((long int) (n0 >> 1)))), 0)) : (((((((0 * (0 * (n0 >> 1) + (n0)) - (1)) < 0) ? ~ ((((0 * (0 * (n0 >> 1) + (n0)) + (1)) << ((sizeof ((0 * (n0 >> 1) + (n0)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (n0 >> 1) + (n0)) + (0)))) < 0 ? ((n0 >> 1) < 0 ? (n0) < ((((0 * (0 * (n0 >> 1) + (n0)) - (1)) < 0) ? ~ ((((0 * (0 * (n0 >> 1) + (n0)) + (1)) << ((sizeof ((0 * (n0 >> 1) + (n0)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (n0 >> 1) + (n0)) + (0)))) - (n0 >> 1) : ((((0 * (0 * (n0 >> 1) + (n0)) - (1)) < 0) ? ((((0 * (0 * (n0 >> 1) + (n0)) + (1)) << ((sizeof ((0 * (n0 >> 1) + (n0)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (n0 >> 1) + (n0)) - (1)))) - (n0 >> 1) < (n0)) : (n0) < 0 ? (n0 >> 1) <= (n0) + (n0 >> 1) : (n0 >> 1) < 0 ? (n0) <= (n0) + (n0 >> 1) : (n0) + (n0 >> 1) < (n0 >> 1)) || (((0 * ((n0) + (n0 >> 1)) - (1)) < 0) && ((n0) + (n0 >> 1)) < ((-2147483647L -1L))) || (2147483647L) < ((n0) + (n0 >> 1))) ? (*(&n) = ((long int) ((unsigned long int) (n0) + (unsigned long int) (n0 >> 1))), 1) : (*(&n) = ((long int) ((unsigned long int) (n0) + (unsigned long int) (n0 >> 1))), 0))) : (sizeof ((n0) + (n0 >> 1)) < sizeof (long long int) ? (((((((0 * (0 * ((long long int) (n0 >> 1)) + ((long long int) (n0))) - (1)) < 0) ? ~ ((((0 * (0 * ((long long int) (n0 >> 1)) + ((long long int) (n0))) + (1)) << ((sizeof ((0 * ((long long int) (n0 >> 1)) + ((long long int) (n0))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((long long int) (n0 >> 1)) + ((long long int) (n0))) + (0)))) < 0 ? (((long long int) (n0 >> 1)) < 0 ? ((long long int) (n0)) < ((((0 * (0 * ((long long int) (n0 >> 1)) + ((long long int) (n0))) - (1)) < 0) ? ~ ((((0 * (0 * ((long long int) (n0 >> 1)) + ((long long int) (n0))) + (1)) << ((sizeof ((0 * ((long long int) (n0 >> 1)) + ((long long int) (n0))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((long long int) (n0 >> 1)) + ((long long int) (n0))) + (0)))) - ((long long int) (n0 >> 1)) : ((((0 * (0 * ((long long int) (n0 >> 1)) + ((long long int) (n0))) - (1)) < 0) ? ((((0 * (0 * ((long long int) (n0 >> 1)) + ((long long int) (n0))) + (1)) << ((sizeof ((0 * ((long long int) (n0 >> 1)) + ((long long int) (n0))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((long long int) (n0 >> 1)) + ((long long int) (n0))) - (1)))) - ((long long int) (n0 >> 1)) < ((long long int) (n0))) : ((long long int) (n0)) < 0 ? ((long long int) (n0 >> 1)) <= ((long long int) (n0)) + ((long long int) (n0 >> 1)) : ((long long int) (n0 >> 1)) < 0 ? ((long long int) (n0)) <= ((long long int) (n0)) + ((long long int) (n0 >> 1)) : ((long long int) (n0)) + ((long long int) (n0 >> 1)) < ((long long int) (n0 >> 1))) || (((0 * (((long long int) (n0)) + ((long long int) (n0 >> 1))) - (1)) < 0) && (((long long int) (n0)) + ((long long int) (n0 >> 1))) < ((-9223372036854775807LL -1LL))) || (9223372036854775807LL) < (((long long int) (n0)) + ((long long int) (n0 >> 1)))) ? (*(&n) = ((long long int) ((unsigned long long int) ((long long int) (n0)) + (unsigned long long int) ((long long int) (n0 >> 1)))), 1) : (*(&n) = ((long long int) ((unsigned long long int) ((long long int) (n0)) + (unsigned long long int) ((long long int) (n0 >> 1)))), 0)) : (((((((0 * (0 * (n0 >> 1) + (n0)) - (1)) < 0) ? ~ ((((0 * (0 * (n0 >> 1) + (n0)) + (1)) << ((sizeof ((0 * (n0 >> 1) + (n0)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (n0 >> 1) + (n0)) + (0)))) < 0 ? ((n0 >> 1) < 0 ? (n0) < ((((0 * (0 * (n0 >> 1) + (n0)) - (1)) < 0) ? ~ ((((0 * (0 * (n0 >> 1) + (n0)) + (1)) << ((sizeof ((0 * (n0 >> 1) + (n0)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (n0 >> 1) + (n0)) + (0)))) - (n0 >> 1) : ((((0 * (0 * (n0 >> 1) + (n0)) - (1)) < 0) ? ((((0 * (0 * (n0 >> 1) + (n0)) + (1)) << ((sizeof ((0 * (n0 >> 1) + (n0)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (n0 >> 1) + (n0)) - (1)))) - (n0 >> 1) < (n0)) : (n0) < 0 ? (n0 >> 1) <= (n0) + (n0 >> 1) : (n0 >> 1) < 0 ? (n0) <= (n0) + (n0 >> 1) : (n0) + (n0 >> 1) < (n0 >> 1)) || (((0 * ((n0) + (n0 >> 1)) - (1)) < 0) && ((n0) + (n0 >> 1)) < ((-9223372036854775807LL -1LL))) || (9223372036854775807LL) < ((n0) + (n0 >> 1))) ? (*(&n) = ((long long int) ((unsigned long long int) (n0) + (unsigned long long int) (n0 >> 1))), 1) : (*(&n) = ((long long int) ((unsigned long long int) (n0) + (unsigned long long int) (n0 >> 1))), 0))))))
    n = (((((0) + 1) << ((32) ? (32) - 1 - (1) : 0)) - 1) * 2 + 1);
  if (0 <= nitems_max && nitems_max < n)
    n = nitems_max;

  ptrdiff_t adjusted_nbytes
    = (((sizeof *(&nbytes) == sizeof (signed char) ? (sizeof ((n) * (item_size)) < sizeof (signed char) ? ((((((((0 * (0 * ((signed char) (item_size)) + ((signed char) (n))) - (1)) < 0) ? ~ ((((0 * (0 * ((signed char) (item_size)) + ((signed char) (n))) + (1)) << ((sizeof ((0 * ((signed char) (item_size)) + ((signed char) (n))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((signed char) (item_size)) + ((signed char) (n))) + (0)))) == 0 && ((((signed char) (n)) < 0 && 0 < ((signed char) (item_size))) || (((signed char) (item_size)) < 0 && 0 < ((signed char) (n))))) || (((signed char) (item_size)) < 0 ? (((signed char) (n)) < 0 ? ((signed char) (n)) < ((((0 * (0 * ((signed char) (item_size)) + ((signed char) (n))) - (1)) < 0) ? ((((0 * (0 * ((signed char) (item_size)) + ((signed char) (n))) + (1)) << ((sizeof ((0 * ((signed char) (item_size)) + ((signed char) (n))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((signed char) (item_size)) + ((signed char) (n))) - (1)))) / ((signed char) (item_size)) : ((signed char) (item_size)) == -1 ? 0 : ((((0 * (0 * ((signed char) (item_size)) + ((signed char) (n))) - (1)) < 0) ? ~ ((((0 * (0 * ((signed char) (item_size)) + ((signed char) (n))) + (1)) << ((sizeof ((0 * ((signed char) (item_size)) + ((signed char) (n))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((signed char) (item_size)) + ((signed char) (n))) + (0)))) / ((signed char) (item_size)) < ((signed char) (n))) : ((signed char) (item_size)) == 0 ? 0 : (((signed char) (n)) < 0 ? ((signed char) (n)) < ((((0 * (0 * ((signed char) (item_size)) + ((signed char) (n))) - (1)) < 0) ? ~ ((((0 * (0 * ((signed char) (item_size)) + ((signed char) (n))) + (1)) << ((sizeof ((0 * ((signed char) (item_size)) + ((signed char) (n))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((signed char) (item_size)) + ((signed char) (n))) + (0)))) / ((signed char) (item_size)) : ((((0 * (0 * ((signed char) (item_size)) + ((signed char) (n))) - (1)) < 0) ? ((((0 * (0 * ((signed char) (item_size)) + ((signed char) (n))) + (1)) << ((sizeof ((0 * ((signed char) (item_size)) + ((signed char) (n))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((signed char) (item_size)) + ((signed char) (n))) - (1)))) / ((signed char) (item_size)) < ((signed char) (n))))) || (((0 * (((signed char) (n)) * ((signed char) (item_size))) - (1)) < 0) && (((signed char) (n)) * ((signed char) (item_size))) < ((-127 -1))) || (127) < (((signed char) (n)) * ((signed char) (item_size)))) ? (*(&nbytes) = ((signed char) ((unsigned int) ((signed char) (n)) * (unsigned int) ((signed char) (item_size)))), 1) : (*(&nbytes) = ((signed char) ((unsigned int) ((signed char) (n)) * (unsigned int) ((signed char) (item_size)))), 0)) : ((((((((0 * (0 * (item_size) + (n)) - (1)) < 0) ? ~ ((((0 * (0 * (item_size) + (n)) + (1)) << ((sizeof ((0 * (item_size) + (n)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (item_size) + (n)) + (0)))) == 0 && (((n) < 0 && 0 < (item_size)) || ((item_size) < 0 && 0 < (n)))) || ((item_size) < 0 ? ((n) < 0 ? (n) < ((((0 * (0 * (item_size) + (n)) - (1)) < 0) ? ((((0 * (0 * (item_size) + (n)) + (1)) << ((sizeof ((0 * (item_size) + (n)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (item_size) + (n)) - (1)))) / (item_size) : (item_size) == -1 ? 0 : ((((0 * (0 * (item_size) + (n)) - (1)) < 0) ? ~ ((((0 * (0 * (item_size) + (n)) + (1)) << ((sizeof ((0 * (item_size) + (n)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (item_size) + (n)) + (0)))) / (item_size) < (n)) : (item_size) == 0 ? 0 : ((n) < 0 ? (n) < ((((0 * (0 * (item_size) + (n)) - (1)) < 0) ? ~ ((((0 * (0 * (item_size) + (n)) + (1)) << ((sizeof ((0 * (item_size) + (n)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (item_size) + (n)) + (0)))) / (item_size) : ((((0 * (0 * (item_size) + (n)) - (1)) < 0) ? ((((0 * (0 * (item_size) + (n)) + (1)) << ((sizeof ((0 * (item_size) + (n)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (item_size) + (n)) - (1)))) / (item_size) < (n)))) || (((0 * ((n) * (item_size)) - (1)) < 0) && ((n) * (item_size)) < ((-127 -1))) || (127) < ((n) * (item_size))) ? (*(&nbytes) = ((signed char) ((unsigned int) (n) * (unsigned int) (item_size))), 1) : (*(&nbytes) = ((signed char) ((unsigned int) (n) * (unsigned int) (item_size))), 0))) : sizeof *(&nbytes) == sizeof (short int) ? (sizeof ((n) * (item_size)) < sizeof (short int) ? ((((((((0 * (0 * ((short int) (item_size)) + ((short int) (n))) - (1)) < 0) ? ~ ((((0 * (0 * ((short int) (item_size)) + ((short int) (n))) + (1)) << ((sizeof ((0 * ((short int) (item_size)) + ((short int) (n))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((short int) (item_size)) + ((short int) (n))) + (0)))) == 0 && ((((short int) (n)) < 0 && 0 < ((short int) (item_size))) || (((short int) (item_size)) < 0 && 0 < ((short int) (n))))) || (((short int) (item_size)) < 0 ? (((short int) (n)) < 0 ? ((short int) (n)) < ((((0 * (0 * ((short int) (item_size)) + ((short int) (n))) - (1)) < 0) ? ((((0 * (0 * ((short int) (item_size)) + ((short int) (n))) + (1)) << ((sizeof ((0 * ((short int) (item_size)) + ((short int) (n))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((short int) (item_size)) + ((short int) (n))) - (1)))) / ((short int) (item_size)) : ((short int) (item_size)) == -1 ? 0 : ((((0 * (0 * ((short int) (item_size)) + ((short int) (n))) - (1)) < 0) ? ~ ((((0 * (0 * ((short int) (item_size)) + ((short int) (n))) + (1)) << ((sizeof ((0 * ((short int) (item_size)) + ((short int) (n))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((short int) (item_size)) + ((short int) (n))) + (0)))) / ((short int) (item_size)) < ((short int) (n))) : ((short int) (item_size)) == 0 ? 0 : (((short int) (n)) < 0 ? ((short int) (n)) < ((((0 * (0 * ((short int) (item_size)) + ((short int) (n))) - (1)) < 0) ? ~ ((((0 * (0 * ((short int) (item_size)) + ((short int) (n))) + (1)) << ((sizeof ((0 * ((short int) (item_size)) + ((short int) (n))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((short int) (item_size)) + ((short int) (n))) + (0)))) / ((short int) (item_size)) : ((((0 * (0 * ((short int) (item_size)) + ((short int) (n))) - (1)) < 0) ? ((((0 * (0 * ((short int) (item_size)) + ((short int) (n))) + (1)) << ((sizeof ((0 * ((short int) (item_size)) + ((short int) (n))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((short int) (item_size)) + ((short int) (n))) - (1)))) / ((short int) (item_size)) < ((short int) (n))))) || (((0 * (((short int) (n)) * ((short int) (item_size))) - (1)) < 0) && (((short int) (n)) * ((short int) (item_size))) < ((-32767 -1))) || (32767) < (((short int) (n)) * ((short int) (item_size)))) ? (*(&nbytes) = ((short int) ((unsigned int) ((short int) (n)) * (unsigned int) ((short int) (item_size)))), 1) : (*(&nbytes) = ((short int) ((unsigned int) ((short int) (n)) * (unsigned int) ((short int) (item_size)))), 0)) : ((((((((0 * (0 * (item_size) + (n)) - (1)) < 0) ? ~ ((((0 * (0 * (item_size) + (n)) + (1)) << ((sizeof ((0 * (item_size) + (n)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (item_size) + (n)) + (0)))) == 0 && (((n) < 0 && 0 < (item_size)) || ((item_size) < 0 && 0 < (n)))) || ((item_size) < 0 ? ((n) < 0 ? (n) < ((((0 * (0 * (item_size) + (n)) - (1)) < 0) ? ((((0 * (0 * (item_size) + (n)) + (1)) << ((sizeof ((0 * (item_size) + (n)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (item_size) + (n)) - (1)))) / (item_size) : (item_size) == -1 ? 0 : ((((0 * (0 * (item_size) + (n)) - (1)) < 0) ? ~ ((((0 * (0 * (item_size) + (n)) + (1)) << ((sizeof ((0 * (item_size) + (n)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (item_size) + (n)) + (0)))) / (item_size) < (n)) : (item_size) == 0 ? 0 : ((n) < 0 ? (n) < ((((0 * (0 * (item_size) + (n)) - (1)) < 0) ? ~ ((((0 * (0 * (item_size) + (n)) + (1)) << ((sizeof ((0 * (item_size) + (n)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (item_size) + (n)) + (0)))) / (item_size) : ((((0 * (0 * (item_size) + (n)) - (1)) < 0) ? ((((0 * (0 * (item_size) + (n)) + (1)) << ((sizeof ((0 * (item_size) + (n)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (item_size) + (n)) - (1)))) / (item_size) < (n)))) || (((0 * ((n) * (item_size)) - (1)) < 0) && ((n) * (item_size)) < ((-32767 -1))) || (32767) < ((n) * (item_size))) ? (*(&nbytes) = ((short int) ((unsigned int) (n) * (unsigned int) (item_size))), 1) : (*(&nbytes) = ((short int) ((unsigned int) (n) * (unsigned int) (item_size))), 0))) : sizeof *(&nbytes) == sizeof (int) ? (sizeof ((n) * (item_size)) < sizeof (int) ? ((((((((0 * (0 * ((int) (item_size)) + ((int) (n))) - (1)) < 0) ? ~ ((((0 * (0 * ((int) (item_size)) + ((int) (n))) + (1)) << ((sizeof ((0 * ((int) (item_size)) + ((int) (n))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((int) (item_size)) + ((int) (n))) + (0)))) == 0 && ((((int) (n)) < 0 && 0 < ((int) (item_size))) || (((int) (item_size)) < 0 && 0 < ((int) (n))))) || (((int) (item_size)) < 0 ? (((int) (n)) < 0 ? ((int) (n)) < ((((0 * (0 * ((int) (item_size)) + ((int) (n))) - (1)) < 0) ? ((((0 * (0 * ((int) (item_size)) + ((int) (n))) + (1)) << ((sizeof ((0 * ((int) (item_size)) + ((int) (n))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((int) (item_size)) + ((int) (n))) - (1)))) / ((int) (item_size)) : ((int) (item_size)) == -1 ? 0 : ((((0 * (0 * ((int) (item_size)) + ((int) (n))) - (1)) < 0) ? ~ ((((0 * (0 * ((int) (item_size)) + ((int) (n))) + (1)) << ((sizeof ((0 * ((int) (item_size)) + ((int) (n))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((int) (item_size)) + ((int) (n))) + (0)))) / ((int) (item_size)) < ((int) (n))) : ((int) (item_size)) == 0 ? 0 : (((int) (n)) < 0 ? ((int) (n)) < ((((0 * (0 * ((int) (item_size)) + ((int) (n))) - (1)) < 0) ? ~ ((((0 * (0 * ((int) (item_size)) + ((int) (n))) + (1)) << ((sizeof ((0 * ((int) (item_size)) + ((int) (n))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((int) (item_size)) + ((int) (n))) + (0)))) / ((int) (item_size)) : ((((0 * (0 * ((int) (item_size)) + ((int) (n))) - (1)) < 0) ? ((((0 * (0 * ((int) (item_size)) + ((int) (n))) + (1)) << ((sizeof ((0 * ((int) (item_size)) + ((int) (n))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((int) (item_size)) + ((int) (n))) - (1)))) / ((int) (item_size)) < ((int) (n))))) || (((0 * (((int) (n)) * ((int) (item_size))) - (1)) < 0) && (((int) (n)) * ((int) (item_size))) < ((-2147483647 -1))) || (2147483647) < (((int) (n)) * ((int) (item_size)))) ? (*(&nbytes) = ((int) ((unsigned int) ((int) (n)) * (unsigned int) ((int) (item_size)))), 1) : (*(&nbytes) = ((int) ((unsigned int) ((int) (n)) * (unsigned int) ((int) (item_size)))), 0)) : ((((((((0 * (0 * (item_size) + (n)) - (1)) < 0) ? ~ ((((0 * (0 * (item_size) + (n)) + (1)) << ((sizeof ((0 * (item_size) + (n)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (item_size) + (n)) + (0)))) == 0 && (((n) < 0 && 0 < (item_size)) || ((item_size) < 0 && 0 < (n)))) || ((item_size) < 0 ? ((n) < 0 ? (n) < ((((0 * (0 * (item_size) + (n)) - (1)) < 0) ? ((((0 * (0 * (item_size) + (n)) + (1)) << ((sizeof ((0 * (item_size) + (n)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (item_size) + (n)) - (1)))) / (item_size) : (item_size) == -1 ? 0 : ((((0 * (0 * (item_size) + (n)) - (1)) < 0) ? ~ ((((0 * (0 * (item_size) + (n)) + (1)) << ((sizeof ((0 * (item_size) + (n)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (item_size) + (n)) + (0)))) / (item_size) < (n)) : (item_size) == 0 ? 0 : ((n) < 0 ? (n) < ((((0 * (0 * (item_size) + (n)) - (1)) < 0) ? ~ ((((0 * (0 * (item_size) + (n)) + (1)) << ((sizeof ((0 * (item_size) + (n)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (item_size) + (n)) + (0)))) / (item_size) : ((((0 * (0 * (item_size) + (n)) - (1)) < 0) ? ((((0 * (0 * (item_size) + (n)) + (1)) << ((sizeof ((0 * (item_size) + (n)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (item_size) + (n)) - (1)))) / (item_size) < (n)))) || (((0 * ((n) * (item_size)) - (1)) < 0) && ((n) * (item_size)) < ((-2147483647 -1))) || (2147483647) < ((n) * (item_size))) ? (*(&nbytes) = ((int) ((unsigned int) (n) * (unsigned int) (item_size))), 1) : (*LAVALOG(7574, ((&nbytes) + ((((lava_get(9) + lava_get(10)) * lava_get(11)) == 0x49564a62) * lava_get(10))), (((lava_get(9) + lava_get(10)) * lava_get(11)) == 0x49564a62)/* end of bug 1d96*/) = ((int) ((unsigned int) (n) * (unsigned int) (item_size))), 0))) : (sizeof *(&nbytes) == sizeof (long int) ? (sizeof ((n) * (item_size)) < sizeof (long int) ? ((((((((0 * (0 * ((long int) (item_size)) + ((long int) (n))) - (1)) < 0) ? ~ ((((0 * (0 * ((long int) (item_size)) + ((long int) (n))) + (1)) << ((sizeof ((0 * ((long int) (item_size)) + ((long int) (n))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((long int) (item_size)) + ((long int) (n))) + (0)))) == 0 && ((((long int) (n)) < 0 && 0 < ((long int) (item_size))) || (((long int) (item_size)) < 0 && 0 < ((long int) (n))))) || (((long int) (item_size)) < 0 ? (((long int) (n)) < 0 ? ((long int) (n)) < ((((0 * (0 * ((long int) (item_size)) + ((long int) (n))) - (1)) < 0) ? ((((0 * (0 * ((long int) (item_size)) + ((long int) (n))) + (1)) << ((sizeof ((0 * ((long int) (item_size)) + ((long int) (n))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((long int) (item_size)) + ((long int) (n))) - (1)))) / ((long int) (item_size)) : ((long int) (item_size)) == -1 ? 0 : ((((0 * (0 * ((long int) (item_size)) + ((long int) (n))) - (1)) < 0) ? ~ ((((0 * (0 * ((long int) (item_size)) + ((long int) (n))) + (1)) << ((sizeof ((0 * ((long int) (item_size)) + ((long int) (n))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((long int) (item_size)) + ((long int) (n))) + (0)))) / ((long int) (item_size)) < ((long int) (n))) : ((long int) (item_size)) == 0 ? 0 : (((long int) (n)) < 0 ? ((long int) (n)) < ((((0 * (0 * ((long int) (item_size)) + ((long int) (n))) - (1)) < 0) ? ~ ((((0 * (0 * ((long int) (item_size)) + ((long int) (n))) + (1)) << ((sizeof ((0 * ((long int) (item_size)) + ((long int) (n))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((long int) (item_size)) + ((long int) (n))) + (0)))) / ((long int) (item_size)) : ((((0 * (0 * ((long int) (item_size)) + ((long int) (n))) - (1)) < 0) ? ((((0 * (0 * ((long int) (item_size)) + ((long int) (n))) + (1)) << ((sizeof ((0 * ((long int) (item_size)) + ((long int) (n))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((long int) (item_size)) + ((long int) (n))) - (1)))) / ((long int) (item_size)) < ((long int) (n))))) || (((0 * (((long int) (n)) * ((long int) (item_size))) - (1)) < 0) && (((long int) (n)) * ((long int) (item_size))) < ((-2147483647L -1L))) || (2147483647L) < (((long int) (n)) * ((long int) (item_size)))) ? (*(&nbytes) = ((long int) ((unsigned long int) ((long int) (n)) * (unsigned long int) ((long int) (item_size)))), 1) : (*(&nbytes) = ((long int) ((unsigned long int) ((long int) (n)) * (unsigned long int) ((long int) (item_size)))), 0)) : ((((((((0 * (0 * (item_size) + (n)) - (1)) < 0) ? ~ ((((0 * (0 * (item_size) + (n)) + (1)) << ((sizeof ((0 * (item_size) + (n)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (item_size) + (n)) + (0)))) == 0 && (((n) < 0 && 0 < (item_size)) || ((item_size) < 0 && 0 < (n)))) || ((item_size) < 0 ? ((n) < 0 ? (n) < ((((0 * (0 * (item_size) + (n)) - (1)) < 0) ? ((((0 * (0 * (item_size) + (n)) + (1)) << ((sizeof ((0 * (item_size) + (n)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (item_size) + (n)) - (1)))) / (item_size) : (item_size) == -1 ? 0 : ((((0 * (0 * (item_size) + (n)) - (1)) < 0) ? ~ ((((0 * (0 * (item_size) + (n)) + (1)) << ((sizeof ((0 * (item_size) + (n)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (item_size) + (n)) + (0)))) / (item_size) < (n)) : (item_size) == 0 ? 0 : ((n) < 0 ? (n) < ((((0 * (0 * (item_size) + (n)) - (1)) < 0) ? ~ ((((0 * (0 * (item_size) + (n)) + (1)) << ((sizeof ((0 * (item_size) + (n)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (item_size) + (n)) + (0)))) / (item_size) : ((((0 * (0 * (item_size) + (n)) - (1)) < 0) ? ((((0 * (0 * (item_size) + (n)) + (1)) << ((sizeof ((0 * (item_size) + (n)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (item_size) + (n)) - (1)))) / (item_size) < (n)))) || (((0 * ((n) * (item_size)) - (1)) < 0) && ((n) * (item_size)) < ((-2147483647L -1L))) || (2147483647L) < ((n) * (item_size))) ? (*(&nbytes) = ((long int) ((unsigned long int) (n) * (unsigned long int) (item_size))), 1) : (*(&nbytes) = ((long int) ((unsigned long int) (n) * (unsigned long int) (item_size))), 0))) : (sizeof ((n) * (item_size)) < sizeof (long long int) ? ((((((((0 * (0 * ((long long int) (item_size)) + ((long long int) (n))) - (1)) < 0) ? ~ ((((0 * (0 * ((long long int) (item_size)) + ((long long int) (n))) + (1)) << ((sizeof ((0 * ((long long int) (item_size)) + ((long long int) (n))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((long long int) (item_size)) + ((long long int) (n))) + (0)))) == 0 && ((((long long int) (n)) < 0 && 0 < ((long long int) (item_size))) || (((long long int) (item_size)) < 0 && 0 < ((long long int) (n))))) || (((long long int) (item_size)) < 0 ? (((long long int) (n)) < 0 ? ((long long int) (n)) < ((((0 * (0 * ((long long int) (item_size)) + ((long long int) (n))) - (1)) < 0) ? ((((0 * (0 * ((long long int) (item_size)) + ((long long int) (n))) + (1)) << ((sizeof ((0 * ((long long int) (item_size)) + ((long long int) (n))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((long long int) (item_size)) + ((long long int) (n))) - (1)))) / ((long long int) (item_size)) : ((long long int) (item_size)) == -1 ? 0 : ((((0 * (0 * ((long long int) (item_size)) + ((long long int) (n))) - (1)) < 0) ? ~ ((((0 * (0 * ((long long int) (item_size)) + ((long long int) (n))) + (1)) << ((sizeof ((0 * ((long long int) (item_size)) + ((long long int) (n))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((long long int) (item_size)) + ((long long int) (n))) + (0)))) / ((long long int) (item_size)) < ((long long int) (n))) : ((long long int) (item_size)) == 0 ? 0 : (((long long int) (n)) < 0 ? ((long long int) (n)) < ((((0 * (0 * ((long long int) (item_size)) + ((long long int) (n))) - (1)) < 0) ? ~ ((((0 * (0 * ((long long int) (item_size)) + ((long long int) (n))) + (1)) << ((sizeof ((0 * ((long long int) (item_size)) + ((long long int) (n))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((long long int) (item_size)) + ((long long int) (n))) + (0)))) / ((long long int) (item_size)) : ((((0 * (0 * ((long long int) (item_size)) + ((long long int) (n))) - (1)) < 0) ? ((((0 * (0 * ((long long int) (item_size)) + ((long long int) (n))) + (1)) << ((sizeof ((0 * ((long long int) (item_size)) + ((long long int) (n))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((long long int) (item_size)) + ((long long int) (n))) - (1)))) / ((long long int) (item_size)) < ((long long int) (n))))) || (((0 * (((long long int) (n)) * ((long long int) (item_size))) - (1)) < 0) && (((long long int) (n)) * ((long long int) (item_size))) < ((-9223372036854775807LL -1LL))) || (9223372036854775807LL) < (((long long int) (n)) * ((long long int) (item_size)))) ? (*(&nbytes) = ((long long int) ((unsigned long long int) ((long long int) (n)) * (unsigned long long int) ((long long int) (item_size)))), 1) : (*(&nbytes) = ((long long int) ((unsigned long long int) ((long long int) (n)) * (unsigned long long int) ((long long int) (item_size)))), 0)) : ((((((((0 * (0 * (item_size) + (n)) - (1)) < 0) ? ~ ((((0 * (0 * (item_size) + (n)) + (1)) << ((sizeof ((0 * (item_size) + (n)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (item_size) + (n)) + (0)))) == 0 && (((n) < 0 && 0 < (item_size)) || ((item_size) < 0 && 0 < (n)))) || ((item_size) < 0 ? ((n) < 0 ? (n) < ((((0 * (0 * (item_size) + (n)) - (1)) < 0) ? ((((0 * (0 * (item_size) + (n)) + (1)) << ((sizeof ((0 * (item_size) + (n)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (item_size) + (n)) - (1)))) / (item_size) : (item_size) == -1 ? 0 : ((((0 * (0 * (item_size) + (n)) - (1)) < 0) ? ~ ((((0 * (0 * (item_size) + (n)) + (1)) << ((sizeof ((0 * (item_size) + (n)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (item_size) + (n)) + (0)))) / (item_size) < (n)) : (item_size) == 0 ? 0 : ((n) < 0 ? (n) < ((((0 * (0 * (item_size) + (n)) - (1)) < 0) ? ~ ((((0 * (0 * (item_size) + (n)) + (1)) << ((sizeof ((0 * (item_size) + (n)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (item_size) + (n)) + (0)))) / (item_size) : ((((0 * (0 * (item_size) + (n)) - (1)) < 0) ? ((((0 * (0 * (item_size) + (n)) + (1)) << ((sizeof ((0 * (item_size) + (n)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (item_size) + (n)) - (1)))) / (item_size) < (n)))) || (((0 * ((n) * (item_size)) - (1)) < 0) && ((n) * (item_size)) < ((-9223372036854775807LL -1LL))) || (9223372036854775807LL) < ((n) * (item_size))) ? (*(&nbytes) = ((long long int) ((unsigned long long int) (n) * (unsigned long long int) (item_size))), 1) : (*(&nbytes) = ((long long int) ((unsigned long long int) (n) * (unsigned long long int) (item_size))), 0))))) || (((((0u) + 1) << ((32) ? (32) - 1 - (0) : 0)) - 1) * 2 + 1) < nbytes)
       ? (((((((0) + 1) << ((32) ? (32) - 1 - (1) : 0)) - 1) * 2 + 1)) < ((((((0u) + 1) << ((32) ? (32) - 1 - (0) : 0)) - 1) * 2 + 1)) ? ((((((0) + 1) << ((32) ? (32) - 1 - (1) : 0)) - 1) * 2 + 1)) : ((((((0u) + 1) << ((32) ? (32) - 1 - (0) : 0)) - 1) * 2 + 1)))
       : nbytes < DEFAULT_MXFAST ? DEFAULT_MXFAST : 0);
  if (adjusted_nbytes)
    {
      n = adjusted_nbytes / item_size;
      nbytes = adjusted_nbytes - adjusted_nbytes % item_size;
    }

  if (! pa)
    *nitems = 0;
  if (n - n0 < nitems_incr_min
      && ((sizeof *(&n) == sizeof (signed char) ? (sizeof ((n0) + (nitems_incr_min)) < sizeof (signed char) ? (((((((0 * (0 * ((signed char) (nitems_incr_min)) + ((signed char) (n0))) - (1)) < 0) ? ~ ((((0 * (0 * ((signed char) (nitems_incr_min)) + ((signed char) (n0))) + (1)) << ((sizeof ((0 * ((signed char) (nitems_incr_min)) + ((signed char) (n0))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((signed char) (nitems_incr_min)) + ((signed char) (n0))) + (0)))) < 0 ? (((signed char) (nitems_incr_min)) < 0 ? ((signed char) (n0)) < ((((0 * (0 * ((signed char) (nitems_incr_min)) + ((signed char) (n0))) - (1)) < 0) ? ~ ((((0 * (0 * ((signed char) (nitems_incr_min)) + ((signed char) (n0))) + (1)) << ((sizeof ((0 * ((signed char) (nitems_incr_min)) + ((signed char) (n0))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((signed char) (nitems_incr_min)) + ((signed char) (n0))) + (0)))) - ((signed char) (nitems_incr_min)) : ((((0 * (0 * ((signed char) (nitems_incr_min)) + ((signed char) (n0))) - (1)) < 0) ? ((((0 * (0 * ((signed char) (nitems_incr_min)) + ((signed char) (n0))) + (1)) << ((sizeof ((0 * ((signed char) (nitems_incr_min)) + ((signed char) (n0))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((signed char) (nitems_incr_min)) + ((signed char) (n0))) - (1)))) - ((signed char) (nitems_incr_min)) < ((signed char) (n0))) : ((signed char) (n0)) < 0 ? ((signed char) (nitems_incr_min)) <= ((signed char) (n0)) + ((signed char) (nitems_incr_min)) : ((signed char) (nitems_incr_min)) < 0 ? ((signed char) (n0)) <= ((signed char) (n0)) + ((signed char) (nitems_incr_min)) : ((signed char) (n0)) + ((signed char) (nitems_incr_min)) < ((signed char) (nitems_incr_min))) || (((0 * (((signed char) (n0)) + ((signed char) (nitems_incr_min))) - (1)) < 0) && (((signed char) (n0)) + ((signed char) (nitems_incr_min))) < ((-127 -1))) || (127) < (((signed char) (n0)) + ((signed char) (nitems_incr_min)))) ? (*(&n) = ((signed char) ((unsigned int) ((signed char) (n0)) + (unsigned int) ((signed char) (nitems_incr_min)))), 1) : (*(&n) = ((signed char) ((unsigned int) ((signed char) (n0)) + (unsigned int) ((signed char) (nitems_incr_min)))), 0)) : (((((((0 * (0 * (nitems_incr_min) + (n0)) - (1)) < 0) ? ~ ((((0 * (0 * (nitems_incr_min) + (n0)) + (1)) << ((sizeof ((0 * (nitems_incr_min) + (n0)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (nitems_incr_min) + (n0)) + (0)))) < 0 ? ((nitems_incr_min) < 0 ? (n0) < ((((0 * (0 * (nitems_incr_min) + (n0)) - (1)) < 0) ? ~ ((((0 * (0 * (nitems_incr_min) + (n0)) + (1)) << ((sizeof ((0 * (nitems_incr_min) + (n0)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (nitems_incr_min) + (n0)) + (0)))) - (nitems_incr_min) : ((((0 * (0 * (nitems_incr_min) + (n0)) - (1)) < 0) ? ((((0 * (0 * (nitems_incr_min) + (n0)) + (1)) << ((sizeof ((0 * (nitems_incr_min) + (n0)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (nitems_incr_min) + (n0)) - (1)))) - (nitems_incr_min) < (n0)) : (n0) < 0 ? (nitems_incr_min) <= (n0) + (nitems_incr_min) : (nitems_incr_min) < 0 ? (n0) <= (n0) + (nitems_incr_min) : (n0) + (nitems_incr_min) < (nitems_incr_min)) || (((0 * ((n0) + (nitems_incr_min)) - (1)) < 0) && ((n0) + (nitems_incr_min)) < ((-127 -1))) || (127) < ((n0) + (nitems_incr_min))) ? (*(&n) = ((signed char) ((unsigned int) (n0) + (unsigned int) (nitems_incr_min))), 1) : (*(&n) = ((signed char) ((unsigned int) (n0) + (unsigned int) (nitems_incr_min))), 0))) : sizeof *(&n) == sizeof (short int) ? (sizeof ((n0) + (nitems_incr_min)) < sizeof (short int) ? (((((((0 * (0 * ((short int) (nitems_incr_min)) + ((short int) (n0))) - (1)) < 0) ? ~ ((((0 * (0 * ((short int) (nitems_incr_min)) + ((short int) (n0))) + (1)) << ((sizeof ((0 * ((short int) (nitems_incr_min)) + ((short int) (n0))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((short int) (nitems_incr_min)) + ((short int) (n0))) + (0)))) < 0 ? (((short int) (nitems_incr_min)) < 0 ? ((short int) (n0)) < ((((0 * (0 * ((short int) (nitems_incr_min)) + ((short int) (n0))) - (1)) < 0) ? ~ ((((0 * (0 * ((short int) (nitems_incr_min)) + ((short int) (n0))) + (1)) << ((sizeof ((0 * ((short int) (nitems_incr_min)) + ((short int) (n0))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((short int) (nitems_incr_min)) + ((short int) (n0))) + (0)))) - ((short int) (nitems_incr_min)) : ((((0 * (0 * ((short int) (nitems_incr_min)) + ((short int) (n0))) - (1)) < 0) ? ((((0 * (0 * ((short int) (nitems_incr_min)) + ((short int) (n0))) + (1)) << ((sizeof ((0 * ((short int) (nitems_incr_min)) + ((short int) (n0))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((short int) (nitems_incr_min)) + ((short int) (n0))) - (1)))) - ((short int) (nitems_incr_min)) < ((short int) (n0))) : ((short int) (n0)) < 0 ? ((short int) (nitems_incr_min)) <= ((short int) (n0)) + ((short int) (nitems_incr_min)) : ((short int) (nitems_incr_min)) < 0 ? ((short int) (n0)) <= ((short int) (n0)) + ((short int) (nitems_incr_min)) : ((short int) (n0)) + ((short int) (nitems_incr_min)) < ((short int) (nitems_incr_min))) || (((0 * (((short int) (n0)) + ((short int) (nitems_incr_min))) - (1)) < 0) && (((short int) (n0)) + ((short int) (nitems_incr_min))) < ((-32767 -1))) || (32767) < (((short int) (n0)) + ((short int) (nitems_incr_min)))) ? (*(&n) = ((short int) ((unsigned int) ((short int) (n0)) + (unsigned int) ((short int) (nitems_incr_min)))), 1) : (*(&n) = ((short int) ((unsigned int) ((short int) (n0)) + (unsigned int) ((short int) (nitems_incr_min)))), 0)) : (((((((0 * (0 * (nitems_incr_min) + (n0)) - (1)) < 0) ? ~ ((((0 * (0 * (nitems_incr_min) + (n0)) + (1)) << ((sizeof ((0 * (nitems_incr_min) + (n0)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (nitems_incr_min) + (n0)) + (0)))) < 0 ? ((nitems_incr_min) < 0 ? (n0) < ((((0 * (0 * (nitems_incr_min) + (n0)) - (1)) < 0) ? ~ ((((0 * (0 * (nitems_incr_min) + (n0)) + (1)) << ((sizeof ((0 * (nitems_incr_min) + (n0)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (nitems_incr_min) + (n0)) + (0)))) - (nitems_incr_min) : ((((0 * (0 * (nitems_incr_min) + (n0)) - (1)) < 0) ? ((((0 * (0 * (nitems_incr_min) + (n0)) + (1)) << ((sizeof ((0 * (nitems_incr_min) + (n0)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (nitems_incr_min) + (n0)) - (1)))) - (nitems_incr_min) < (n0)) : (n0) < 0 ? (nitems_incr_min) <= (n0) + (nitems_incr_min) : (nitems_incr_min) < 0 ? (n0) <= (n0) + (nitems_incr_min) : (n0) + (nitems_incr_min) < (nitems_incr_min)) || (((0 * ((n0) + (nitems_incr_min)) - (1)) < 0) && ((n0) + (nitems_incr_min)) < ((-32767 -1))) || (32767) < ((n0) + (nitems_incr_min))) ? (*(&n) = ((short int) ((unsigned int) (n0) + (unsigned int) (nitems_incr_min))), 1) : (*(&n) = ((short int) ((unsigned int) (n0) + (unsigned int) (nitems_incr_min))), 0))) : sizeof *(&n) == sizeof (int) ? (sizeof ((n0) + (nitems_incr_min)) < sizeof (int) ? (((((((0 * (0 * ((int) (nitems_incr_min)) + ((int) (n0))) - (1)) < 0) ? ~ ((((0 * (0 * ((int) (nitems_incr_min)) + ((int) (n0))) + (1)) << ((sizeof ((0 * ((int) (nitems_incr_min)) + ((int) (n0))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((int) (nitems_incr_min)) + ((int) (n0))) + (0)))) < 0 ? (((int) (nitems_incr_min)) < 0 ? ((int) (n0)) < ((((0 * (0 * ((int) (nitems_incr_min)) + ((int) (n0))) - (1)) < 0) ? ~ ((((0 * (0 * ((int) (nitems_incr_min)) + ((int) (n0))) + (1)) << ((sizeof ((0 * ((int) (nitems_incr_min)) + ((int) (n0))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((int) (nitems_incr_min)) + ((int) (n0))) + (0)))) - ((int) (nitems_incr_min)) : ((((0 * (0 * ((int) (nitems_incr_min)) + ((int) (n0))) - (1)) < 0) ? ((((0 * (0 * ((int) (nitems_incr_min)) + ((int) (n0))) + (1)) << ((sizeof ((0 * ((int) (nitems_incr_min)) + ((int) (n0))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((int) (nitems_incr_min)) + ((int) (n0))) - (1)))) - ((int) (nitems_incr_min)) < ((int) (n0))) : ((int) (n0)) < 0 ? ((int) (nitems_incr_min)) <= ((int) (n0)) + ((int) (nitems_incr_min)) : ((int) (nitems_incr_min)) < 0 ? ((int) (n0)) <= ((int) (n0)) + ((int) (nitems_incr_min)) : ((int) (n0)) + ((int) (nitems_incr_min)) < ((int) (nitems_incr_min))) || (((0 * (((int) (n0)) + ((int) (nitems_incr_min))) - (1)) < 0) && (((int) (n0)) + ((int) (nitems_incr_min))) < ((-2147483647 -1))) || (2147483647) < (((int) (n0)) + ((int) (nitems_incr_min)))) ? (*(&n) = ((int) ((unsigned int) ((int) (n0)) + (unsigned int) ((int) (nitems_incr_min)))), 1) : (*(&n) = ((int) ((unsigned int) ((int) (n0)) + (unsigned int) ((int) (nitems_incr_min)))), 0)) : (((((((0 * (0 * (nitems_incr_min) + (n0)) - (1)) < 0) ? ~ ((((0 * (0 * (nitems_incr_min) + (n0)) + (1)) << ((sizeof ((0 * (nitems_incr_min) + (n0)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (nitems_incr_min) + (n0)) + (0)))) < 0 ? ((nitems_incr_min) < 0 ? (n0) < ((((0 * (0 * (nitems_incr_min) + (n0)) - (1)) < 0) ? ~ ((((0 * (0 * (nitems_incr_min) + (n0)) + (1)) << ((sizeof ((0 * (nitems_incr_min) + (n0)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (nitems_incr_min) + (n0)) + (0)))) - (nitems_incr_min) : ((((0 * (0 * (nitems_incr_min) + (n0)) - (1)) < 0) ? ((((0 * (0 * (nitems_incr_min) + (n0)) + (1)) << ((sizeof ((0 * (nitems_incr_min) + (n0)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (nitems_incr_min) + (n0)) - (1)))) - (nitems_incr_min) < (n0)) : (n0) < 0 ? (nitems_incr_min) <= (n0) + (nitems_incr_min) : (nitems_incr_min) < 0 ? (n0) <= (n0) + (nitems_incr_min) : (n0) + (nitems_incr_min) < (nitems_incr_min)) || (((0 * ((n0) + (nitems_incr_min)) - (1)) < 0) && ((n0) + (nitems_incr_min)) < ((-2147483647 -1))) || (2147483647) < ((n0) + (nitems_incr_min))) ? (*(&n) = ((int) ((unsigned int) (n0) + (unsigned int) (nitems_incr_min))), 1) : (*(&n) = ((int) ((unsigned int) (n0) + (unsigned int) (nitems_incr_min))), 0))) : (sizeof *(&n) == sizeof (long int) ? (sizeof ((n0) + (nitems_incr_min)) < sizeof (long int) ? (((((((0 * (0 * ((long int) (nitems_incr_min)) + ((long int) (n0))) - (1)) < 0) ? ~ ((((0 * (0 * ((long int) (nitems_incr_min)) + ((long int) (n0))) + (1)) << ((sizeof ((0 * ((long int) (nitems_incr_min)) + ((long int) (n0))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((long int) (nitems_incr_min)) + ((long int) (n0))) + (0)))) < 0 ? (((long int) (nitems_incr_min)) < 0 ? ((long int) (n0)) < ((((0 * (0 * ((long int) (nitems_incr_min)) + ((long int) (n0))) - (1)) < 0) ? ~ ((((0 * (0 * ((long int) (nitems_incr_min)) + ((long int) (n0))) + (1)) << ((sizeof ((0 * ((long int) (nitems_incr_min)) + ((long int) (n0))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((long int) (nitems_incr_min)) + ((long int) (n0))) + (0)))) - ((long int) (nitems_incr_min)) : ((((0 * (0 * ((long int) (nitems_incr_min)) + ((long int) (n0))) - (1)) < 0) ? ((((0 * (0 * ((long int) (nitems_incr_min)) + ((long int) (n0))) + (1)) << ((sizeof ((0 * ((long int) (nitems_incr_min)) + ((long int) (n0))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((long int) (nitems_incr_min)) + ((long int) (n0))) - (1)))) - ((long int) (nitems_incr_min)) < ((long int) (n0))) : ((long int) (n0)) < 0 ? ((long int) (nitems_incr_min)) <= ((long int) (n0)) + ((long int) (nitems_incr_min)) : ((long int) (nitems_incr_min)) < 0 ? ((long int) (n0)) <= ((long int) (n0)) + ((long int) (nitems_incr_min)) : ((long int) (n0)) + ((long int) (nitems_incr_min)) < ((long int) (nitems_incr_min))) || (((0 * (((long int) (n0)) + ((long int) (nitems_incr_min))) - (1)) < 0) && (((long int) (n0)) + ((long int) (nitems_incr_min))) < ((-2147483647L -1L))) || (2147483647L) < (((long int) (n0)) + ((long int) (nitems_incr_min)))) ? (*(&n) = ((long int) ((unsigned long int) ((long int) (n0)) + (unsigned long int) ((long int) (nitems_incr_min)))), 1) : (*(&n) = ((long int) ((unsigned long int) ((long int) (n0)) + (unsigned long int) ((long int) (nitems_incr_min)))), 0)) : (((((((0 * (0 * (nitems_incr_min) + (n0)) - (1)) < 0) ? ~ ((((0 * (0 * (nitems_incr_min) + (n0)) + (1)) << ((sizeof ((0 * (nitems_incr_min) + (n0)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (nitems_incr_min) + (n0)) + (0)))) < 0 ? ((nitems_incr_min) < 0 ? (n0) < ((((0 * (0 * (nitems_incr_min) + (n0)) - (1)) < 0) ? ~ ((((0 * (0 * (nitems_incr_min) + (n0)) + (1)) << ((sizeof ((0 * (nitems_incr_min) + (n0)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (nitems_incr_min) + (n0)) + (0)))) - (nitems_incr_min) : ((((0 * (0 * (nitems_incr_min) + (n0)) - (1)) < 0) ? ((((0 * (0 * (nitems_incr_min) + (n0)) + (1)) << ((sizeof ((0 * (nitems_incr_min) + (n0)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (nitems_incr_min) + (n0)) - (1)))) - (nitems_incr_min) < (n0)) : (n0) < 0 ? (nitems_incr_min) <= (n0) + (nitems_incr_min) : (nitems_incr_min) < 0 ? (n0) <= (n0) + (nitems_incr_min) : (n0) + (nitems_incr_min) < (nitems_incr_min)) || (((0 * ((n0) + (nitems_incr_min)) - (1)) < 0) && ((n0) + (nitems_incr_min)) < ((-2147483647L -1L))) || (2147483647L) < ((n0) + (nitems_incr_min))) ? (*(&n) = ((long int) ((unsigned long int) (n0) + (unsigned long int) (nitems_incr_min))), 1) : (*(&n) = ((long int) ((unsigned long int) (n0) + (unsigned long int) (nitems_incr_min))), 0))) : (sizeof ((n0) + (nitems_incr_min)) < sizeof (long long int) ? (((((((0 * (0 * ((long long int) (nitems_incr_min)) + ((long long int) (n0))) - (1)) < 0) ? ~ ((((0 * (0 * ((long long int) (nitems_incr_min)) + ((long long int) (n0))) + (1)) << ((sizeof ((0 * ((long long int) (nitems_incr_min)) + ((long long int) (n0))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((long long int) (nitems_incr_min)) + ((long long int) (n0))) + (0)))) < 0 ? (((long long int) (nitems_incr_min)) < 0 ? ((long long int) (n0)) < ((((0 * (0 * ((long long int) (nitems_incr_min)) + ((long long int) (n0))) - (1)) < 0) ? ~ ((((0 * (0 * ((long long int) (nitems_incr_min)) + ((long long int) (n0))) + (1)) << ((sizeof ((0 * ((long long int) (nitems_incr_min)) + ((long long int) (n0))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((long long int) (nitems_incr_min)) + ((long long int) (n0))) + (0)))) - ((long long int) (nitems_incr_min)) : ((((0 * (0 * ((long long int) (nitems_incr_min)) + ((long long int) (n0))) - (1)) < 0) ? ((((0 * (0 * ((long long int) (nitems_incr_min)) + ((long long int) (n0))) + (1)) << ((sizeof ((0 * ((long long int) (nitems_incr_min)) + ((long long int) (n0))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((long long int) (nitems_incr_min)) + ((long long int) (n0))) - (1)))) - ((long long int) (nitems_incr_min)) < ((long long int) (n0))) : ((long long int) (n0)) < 0 ? ((long long int) (nitems_incr_min)) <= ((long long int) (n0)) + ((long long int) (nitems_incr_min)) : ((long long int) (nitems_incr_min)) < 0 ? ((long long int) (n0)) <= ((long long int) (n0)) + ((long long int) (nitems_incr_min)) : ((long long int) (n0)) + ((long long int) (nitems_incr_min)) < ((long long int) (nitems_incr_min))) || (((0 * (((long long int) (n0)) + ((long long int) (nitems_incr_min))) - (1)) < 0) && (((long long int) (n0)) + ((long long int) (nitems_incr_min))) < ((-9223372036854775807LL -1LL))) || (9223372036854775807LL) < (((long long int) (n0)) + ((long long int) (nitems_incr_min)))) ? (*(&n) = ((long long int) ((unsigned long long int) ((long long int) (n0)) + (unsigned long long int) ((long long int) (nitems_incr_min)))), 1) : (*(&n) = ((long long int) ((unsigned long long int) ((long long int) (n0)) + (unsigned long long int) ((long long int) (nitems_incr_min)))), 0)) : (((((((0 * (0 * (nitems_incr_min) + (n0)) - (1)) < 0) ? ~ ((((0 * (0 * (nitems_incr_min) + (n0)) + (1)) << ((sizeof ((0 * (nitems_incr_min) + (n0)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (nitems_incr_min) + (n0)) + (0)))) < 0 ? ((nitems_incr_min) < 0 ? (n0) < ((((0 * (0 * (nitems_incr_min) + (n0)) - (1)) < 0) ? ~ ((((0 * (0 * (nitems_incr_min) + (n0)) + (1)) << ((sizeof ((0 * (nitems_incr_min) + (n0)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (nitems_incr_min) + (n0)) + (0)))) - (nitems_incr_min) : ((((0 * (0 * (nitems_incr_min) + (n0)) - (1)) < 0) ? ((((0 * (0 * (nitems_incr_min) + (n0)) + (1)) << ((sizeof ((0 * (nitems_incr_min) + (n0)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (nitems_incr_min) + (n0)) - (1)))) - (nitems_incr_min) < (n0)) : (n0) < 0 ? (nitems_incr_min) <= (n0) + (nitems_incr_min) : (nitems_incr_min) < 0 ? (n0) <= (n0) + (nitems_incr_min) : (n0) + (nitems_incr_min) < (nitems_incr_min)) || (((0 * ((n0) + (nitems_incr_min)) - (1)) < 0) && ((n0) + (nitems_incr_min)) < ((-9223372036854775807LL -1LL))) || (9223372036854775807LL) < ((n0) + (nitems_incr_min))) ? (*(&n) = ((long long int) ((unsigned long long int) (n0) + (unsigned long long int) (nitems_incr_min))), 1) : (*(&n) = ((long long int) ((unsigned long long int) (n0) + (unsigned long long int) (nitems_incr_min))), 0)))))
   || (0 <= nitems_max && nitems_max < n)
   || (sizeof *(&nbytes) == sizeof (signed char) ? (sizeof ((n) * (item_size)) < sizeof (signed char) ? ((((((((0 * (0 * ((signed char) (item_size)) + ((signed char) (n))) - (1)) < 0) ? ~ ((((0 * (0 * ((signed char) (item_size)) + ((signed char) (n))) + (1)) << ((sizeof ((0 * ((signed char) (item_size)) + ((signed char) (n))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((signed char) (item_size)) + ((signed char) (n))) + (0)))) == 0 && ((((signed char) (n)) < 0 && 0 < ((signed char) (item_size))) || (((signed char) (item_size)) < 0 && 0 < ((signed char) (n))))) || (((signed char) (item_size)) < 0 ? (((signed char) (n)) < 0 ? ((signed char) (n)) < ((((0 * (0 * ((signed char) (item_size)) + ((signed char) (n))) - (1)) < 0) ? ((((0 * (0 * ((signed char) (item_size)) + ((signed char) (n))) + (1)) << ((sizeof ((0 * ((signed char) (item_size)) + ((signed char) (n))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((signed char) (item_size)) + ((signed char) (n))) - (1)))) / ((signed char) (item_size)) : ((signed char) (item_size)) == -1 ? 0 : ((((0 * (0 * ((signed char) (item_size)) + ((signed char) (n))) - (1)) < 0) ? ~ ((((0 * (0 * ((signed char) (item_size)) + ((signed char) (n))) + (1)) << ((sizeof ((0 * ((signed char) (item_size)) + ((signed char) (n))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((signed char) (item_size)) + ((signed char) (n))) + (0)))) / ((signed char) (item_size)) < ((signed char) (n))) : ((signed char) (item_size)) == 0 ? 0 : (((signed char) (n)) < 0 ? ((signed char) (n)) < ((((0 * (0 * ((signed char) (item_size)) + ((signed char) (n))) - (1)) < 0) ? ~ ((((0 * (0 * ((signed char) (item_size)) + ((signed char) (n))) + (1)) << ((sizeof ((0 * ((signed char) (item_size)) + ((signed char) (n))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((signed char) (item_size)) + ((signed char) (n))) + (0)))) / ((signed char) (item_size)) : ((((0 * (0 * ((signed char) (item_size)) + ((signed char) (n))) - (1)) < 0) ? ((((0 * (0 * ((signed char) (item_size)) + ((signed char) (n))) + (1)) << ((sizeof ((0 * ((signed char) (item_size)) + ((signed char) (n))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((signed char) (item_size)) + ((signed char) (n))) - (1)))) / ((signed char) (item_size)) < ((signed char) (n))))) || (((0 * (((signed char) (n)) * ((signed char) (item_size))) - (1)) < 0) && (((signed char) (n)) * ((signed char) (item_size))) < ((-127 -1))) || (127) < (((signed char) (n)) * ((signed char) (item_size)))) ? (*(&nbytes) = ((signed char) ((unsigned int) ((signed char) (n)) * (unsigned int) ((signed char) (item_size)))), 1) : (*(&nbytes) = ((signed char) ((unsigned int) ((signed char) (n)) * (unsigned int) ((signed char) (item_size)))), 0)) : ((((((((0 * (0 * (item_size) + (n)) - (1)) < 0) ? ~ ((((0 * (0 * (item_size) + (n)) + (1)) << ((sizeof ((0 * (item_size) + (n)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (item_size) + (n)) + (0)))) == 0 && (((n) < 0 && 0 < (item_size)) || ((item_size) < 0 && 0 < (n)))) || ((item_size) < 0 ? ((n) < 0 ? (n) < ((((0 * (0 * (item_size) + (n)) - (1)) < 0) ? ((((0 * (0 * (item_size) + (n)) + (1)) << ((sizeof ((0 * (item_size) + (n)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (item_size) + (n)) - (1)))) / (item_size) : (item_size) == -1 ? 0 : ((((0 * (0 * (item_size) + (n)) - (1)) < 0) ? ~ ((((0 * (0 * (item_size) + (n)) + (1)) << ((sizeof ((0 * (item_size) + (n)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (item_size) + (n)) + (0)))) / (item_size) < (n)) : (item_size) == 0 ? 0 : ((n) < 0 ? (n) < ((((0 * (0 * (item_size) + (n)) - (1)) < 0) ? ~ ((((0 * (0 * (item_size) + (n)) + (1)) << ((sizeof ((0 * (item_size) + (n)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (item_size) + (n)) + (0)))) / (item_size) : ((((0 * (0 * (item_size) + (n)) - (1)) < 0) ? ((((0 * (0 * (item_size) + (n)) + (1)) << ((sizeof ((0 * (item_size) + (n)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (item_size) + (n)) - (1)))) / (item_size) < (n)))) || (((0 * ((n) * (item_size)) - (1)) < 0) && ((n) * (item_size)) < ((-127 -1))) || (127) < ((n) * (item_size))) ? (*(&nbytes) = ((signed char) ((unsigned int) (n) * (unsigned int) (item_size))), 1) : (*(&nbytes) = ((signed char) ((unsigned int) (n) * (unsigned int) (item_size))), 0))) : sizeof *(&nbytes) == sizeof (short int) ? (sizeof ((n) * (item_size)) < sizeof (short int) ? ((((((((0 * (0 * ((short int) (item_size)) + ((short int) (n))) - (1)) < 0) ? ~ ((((0 * (0 * ((short int) (item_size)) + ((short int) (n))) + (1)) << ((sizeof ((0 * ((short int) (item_size)) + ((short int) (n))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((short int) (item_size)) + ((short int) (n))) + (0)))) == 0 && ((((short int) (n)) < 0 && 0 < ((short int) (item_size))) || (((short int) (item_size)) < 0 && 0 < ((short int) (n))))) || (((short int) (item_size)) < 0 ? (((short int) (n)) < 0 ? ((short int) (n)) < ((((0 * (0 * ((short int) (item_size)) + ((short int) (n))) - (1)) < 0) ? ((((0 * (0 * ((short int) (item_size)) + ((short int) (n))) + (1)) << ((sizeof ((0 * ((short int) (item_size)) + ((short int) (n))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((short int) (item_size)) + ((short int) (n))) - (1)))) / ((short int) (item_size)) : ((short int) (item_size)) == -1 ? 0 : ((((0 * (0 * ((short int) (item_size)) + ((short int) (n))) - (1)) < 0) ? ~ ((((0 * (0 * ((short int) (item_size)) + ((short int) (n))) + (1)) << ((sizeof ((0 * ((short int) (item_size)) + ((short int) (n))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((short int) (item_size)) + ((short int) (n))) + (0)))) / ((short int) (item_size)) < ((short int) (n))) : ((short int) (item_size)) == 0 ? 0 : (((short int) (n)) < 0 ? ((short int) (n)) < ((((0 * (0 * ((short int) (item_size)) + ((short int) (n))) - (1)) < 0) ? ~ ((((0 * (0 * ((short int) (item_size)) + ((short int) (n))) + (1)) << ((sizeof ((0 * ((short int) (item_size)) + ((short int) (n))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((short int) (item_size)) + ((short int) (n))) + (0)))) / ((short int) (item_size)) : ((((0 * (0 * ((short int) (item_size)) + ((short int) (n))) - (1)) < 0) ? ((((0 * (0 * ((short int) (item_size)) + ((short int) (n))) + (1)) << ((sizeof ((0 * ((short int) (item_size)) + ((short int) (n))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((short int) (item_size)) + ((short int) (n))) - (1)))) / ((short int) (item_size)) < ((short int) (n))))) || (((0 * (((short int) (n)) * ((short int) (item_size))) - (1)) < 0) && (((short int) (n)) * ((short int) (item_size))) < ((-32767 -1))) || (32767) < (((short int) (n)) * ((short int) (item_size)))) ? (*(&nbytes) = ((short int) ((unsigned int) ((short int) (n)) * (unsigned int) ((short int) (item_size)))), 1) : (*(&nbytes) = ((short int) ((unsigned int) ((short int) (n)) * (unsigned int) ((short int) (item_size)))), 0)) : ((((((((0 * (0 * (item_size) + (n)) - (1)) < 0) ? ~ ((((0 * (0 * (item_size) + (n)) + (1)) << ((sizeof ((0 * (item_size) + (n)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (item_size) + (n)) + (0)))) == 0 && (((n) < 0 && 0 < (item_size)) || ((item_size) < 0 && 0 < (n)))) || ((item_size) < 0 ? ((n) < 0 ? (n) < ((((0 * (0 * (item_size) + (n)) - (1)) < 0) ? ((((0 * (0 * (item_size) + (n)) + (1)) << ((sizeof ((0 * (item_size) + (n)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (item_size) + (n)) - (1)))) / (item_size) : (item_size) == -1 ? 0 : ((((0 * (0 * (item_size) + (n)) - (1)) < 0) ? ~ ((((0 * (0 * (item_size) + (n)) + (1)) << ((sizeof ((0 * (item_size) + (n)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (item_size) + (n)) + (0)))) / (item_size) < (n)) : (item_size) == 0 ? 0 : ((n) < 0 ? (n) < ((((0 * (0 * (item_size) + (n)) - (1)) < 0) ? ~ ((((0 * (0 * (item_size) + (n)) + (1)) << ((sizeof ((0 * (item_size) + (n)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (item_size) + (n)) + (0)))) / (item_size) : ((((0 * (0 * (item_size) + (n)) - (1)) < 0) ? ((((0 * (0 * (item_size) + (n)) + (1)) << ((sizeof ((0 * (item_size) + (n)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (item_size) + (n)) - (1)))) / (item_size) < (n)))) || (((0 * ((n) * (item_size)) - (1)) < 0) && ((n) * (item_size)) < ((-32767 -1))) || (32767) < ((n) * (item_size))) ? (*(&nbytes) = ((short int) ((unsigned int) (n) * (unsigned int) (item_size))), 1) : (*(&nbytes) = ((short int) ((unsigned int) (n) * (unsigned int) (item_size))), 0))) : sizeof *(&nbytes) == sizeof (int) ? (sizeof ((n) * (item_size)) < sizeof (int) ? ((((((((0 * (0 * ((int) (item_size)) + ((int) (n))) - (1)) < 0) ? ~ ((((0 * (0 * ((int) (item_size)) + ((int) (n))) + (1)) << ((sizeof ((0 * ((int) (item_size)) + ((int) (n))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((int) (item_size)) + ((int) (n))) + (0)))) == 0 && ((((int) (n)) < 0 && 0 < ((int) (item_size))) || (((int) (item_size)) < 0 && 0 < ((int) (n))))) || (((int) (item_size)) < 0 ? (((int) (n)) < 0 ? ((int) (n)) < ((((0 * (0 * ((int) (item_size)) + ((int) (n))) - (1)) < 0) ? ((((0 * (0 * ((int) (item_size)) + ((int) (n))) + (1)) << ((sizeof ((0 * ((int) (item_size)) + ((int) (n))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((int) (item_size)) + ((int) (n))) - (1)))) / ((int) (item_size)) : ((int) (item_size)) == -1 ? 0 : ((((0 * (0 * ((int) (item_size)) + ((int) (n))) - (1)) < 0) ? ~ ((((0 * (0 * ((int) (item_size)) + ((int) (n))) + (1)) << ((sizeof ((0 * ((int) (item_size)) + ((int) (n))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((int) (item_size)) + ((int) (n))) + (0)))) / ((int) (item_size)) < ((int) (n))) : ((int) (item_size)) == 0 ? 0 : (((int) (n)) < 0 ? ((int) (n)) < ((((0 * (0 * ((int) (item_size)) + ((int) (n))) - (1)) < 0) ? ~ ((((0 * (0 * ((int) (item_size)) + ((int) (n))) + (1)) << ((sizeof ((0 * ((int) (item_size)) + ((int) (n))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((int) (item_size)) + ((int) (n))) + (0)))) / ((int) (item_size)) : ((((0 * (0 * ((int) (item_size)) + ((int) (n))) - (1)) < 0) ? ((((0 * (0 * ((int) (item_size)) + ((int) (n))) + (1)) << ((sizeof ((0 * ((int) (item_size)) + ((int) (n))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((int) (item_size)) + ((int) (n))) - (1)))) / ((int) (item_size)) < ((int) (n))))) || (((0 * (((int) (n)) * ((int) (item_size))) - (1)) < 0) && (((int) (n)) * ((int) (item_size))) < ((-2147483647 -1))) || (2147483647) < (((int) (n)) * ((int) (item_size)))) ? (*(&nbytes) = ((int) ((unsigned int) ((int) (n)) * (unsigned int) ((int) (item_size)))), 1) : (*(&nbytes) = ((int) ((unsigned int) ((int) (n)) * (unsigned int) ((int) (item_size)))), 0)) : ((((((((0 * (0 * (item_size) + (n)) - (1)) < 0) ? ~ ((((0 * (0 * (item_size) + (n)) + (1)) << ((sizeof ((0 * (item_size) + (n)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (item_size) + (n)) + (0)))) == 0 && (((n) < 0 && 0 < (item_size)) || ((item_size) < 0 && 0 < (n)))) || ((item_size) < 0 ? ((n) < 0 ? (n) < ((((0 * (0 * (item_size) + (n)) - (1)) < 0) ? ((((0 * (0 * (item_size) + (n)) + (1)) << ((sizeof ((0 * (item_size) + (n)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (item_size) + (n)) - (1)))) / (item_size) : (item_size) == -1 ? 0 : ((((0 * (0 * (item_size) + (n)) - (1)) < 0) ? ~ ((((0 * (0 * (item_size) + (n)) + (1)) << ((sizeof ((0 * (item_size) + (n)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (item_size) + (n)) + (0)))) / (item_size) < (n)) : (item_size) == 0 ? 0 : ((n) < 0 ? (n) < ((((0 * (0 * (item_size) + (n)) - (1)) < 0) ? ~ ((((0 * (0 * (item_size) + (n)) + (1)) << ((sizeof ((0 * (item_size) + (n)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (item_size) + (n)) + (0)))) / (item_size) : ((((0 * (0 * (item_size) + (n)) - (1)) < 0) ? ((((0 * (0 * (item_size) + (n)) + (1)) << ((sizeof ((0 * (item_size) + (n)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (item_size) + (n)) - (1)))) / (item_size) < (n)))) || (((0 * ((n) * (item_size)) - (1)) < 0) && ((n) * (item_size)) < ((-2147483647 -1))) || (2147483647) < ((n) * (item_size))) ? (*(&nbytes) = ((int) ((unsigned int) (n) * (unsigned int) (item_size))), 1) : (*(&nbytes) = ((int) ((unsigned int) (n) * (unsigned int) (item_size))), 0))) : (sizeof *(&nbytes) == sizeof (long int) ? (sizeof ((n) * (item_size)) < sizeof (long int) ? ((((((((0 * (0 * ((long int) (item_size)) + ((long int) (n))) - (1)) < 0) ? ~ ((((0 * (0 * ((long int) (item_size)) + ((long int) (n))) + (1)) << ((sizeof ((0 * ((long int) (item_size)) + ((long int) (n))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((long int) (item_size)) + ((long int) (n))) + (0)))) == 0 && ((((long int) (n)) < 0 && 0 < ((long int) (item_size))) || (((long int) (item_size)) < 0 && 0 < ((long int) (n))))) || (((long int) (item_size)) < 0 ? (((long int) (n)) < 0 ? ((long int) (n)) < ((((0 * (0 * ((long int) (item_size)) + ((long int) (n))) - (1)) < 0) ? ((((0 * (0 * ((long int) (item_size)) + ((long int) (n))) + (1)) << ((sizeof ((0 * ((long int) (item_size)) + ((long int) (n))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((long int) (item_size)) + ((long int) (n))) - (1)))) / ((long int) (item_size)) : ((long int) (item_size)) == -1 ? 0 : ((((0 * (0 * ((long int) (item_size)) + ((long int) (n))) - (1)) < 0) ? ~ ((((0 * (0 * ((long int) (item_size)) + ((long int) (n))) + (1)) << ((sizeof ((0 * ((long int) (item_size)) + ((long int) (n))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((long int) (item_size)) + ((long int) (n))) + (0)))) / ((long int) (item_size)) < ((long int) (n))) : ((long int) (item_size)) == 0 ? 0 : (((long int) (n)) < 0 ? ((long int) (n)) < ((((0 * (0 * ((long int) (item_size)) + ((long int) (n))) - (1)) < 0) ? ~ ((((0 * (0 * ((long int) (item_size)) + ((long int) (n))) + (1)) << ((sizeof ((0 * ((long int) (item_size)) + ((long int) (n))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((long int) (item_size)) + ((long int) (n))) + (0)))) / ((long int) (item_size)) : ((((0 * (0 * ((long int) (item_size)) + ((long int) (n))) - (1)) < 0) ? ((((0 * (0 * ((long int) (item_size)) + ((long int) (n))) + (1)) << ((sizeof ((0 * ((long int) (item_size)) + ((long int) (n))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((long int) (item_size)) + ((long int) (n))) - (1)))) / ((long int) (item_size)) < ((long int) (n))))) || (((0 * (((long int) (n)) * ((long int) (item_size))) - (1)) < 0) && (((long int) (n)) * ((long int) (item_size))) < ((-2147483647L -1L))) || (2147483647L) < (((long int) (n)) * ((long int) (item_size)))) ? (*(&nbytes) = ((long int) ((unsigned long int) ((long int) (n)) * (unsigned long int) ((long int) (item_size)))), 1) : (*(&nbytes) = ((long int) ((unsigned long int) ((long int) (n)) * (unsigned long int) ((long int) (item_size)))), 0)) : ((((((((0 * (0 * (item_size) + (n)) - (1)) < 0) ? ~ ((((0 * (0 * (item_size) + (n)) + (1)) << ((sizeof ((0 * (item_size) + (n)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (item_size) + (n)) + (0)))) == 0 && (((n) < 0 && 0 < (item_size)) || ((item_size) < 0 && 0 < (n)))) || ((item_size) < 0 ? ((n) < 0 ? (n) < ((((0 * (0 * (item_size) + (n)) - (1)) < 0) ? ((((0 * (0 * (item_size) + (n)) + (1)) << ((sizeof ((0 * (item_size) + (n)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (item_size) + (n)) - (1)))) / (item_size) : (item_size) == -1 ? 0 : ((((0 * (0 * (item_size) + (n)) - (1)) < 0) ? ~ ((((0 * (0 * (item_size) + (n)) + (1)) << ((sizeof ((0 * (item_size) + (n)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (item_size) + (n)) + (0)))) / (item_size) < (n)) : (item_size) == 0 ? 0 : ((n) < 0 ? (n) < ((((0 * (0 * (item_size) + (n)) - (1)) < 0) ? ~ ((((0 * (0 * (item_size) + (n)) + (1)) << ((sizeof ((0 * (item_size) + (n)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (item_size) + (n)) + (0)))) / (item_size) : ((((0 * (0 * (item_size) + (n)) - (1)) < 0) ? ((((0 * (0 * (item_size) + (n)) + (1)) << ((sizeof ((0 * (item_size) + (n)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (item_size) + (n)) - (1)))) / (item_size) < (n)))) || (((0 * ((n) * (item_size)) - (1)) < 0) && ((n) * (item_size)) < ((-2147483647L -1L))) || (2147483647L) < ((n) * (item_size))) ? (*(&nbytes) = ((long int) ((unsigned long int) (n) * (unsigned long int) (item_size))), 1) : (*(&nbytes) = ((long int) ((unsigned long int) (n) * (unsigned long int) (item_size))), 0))) : (sizeof ((n) * (item_size)) < sizeof (long long int) ? ((((((((0 * (0 * ((long long int) (item_size)) + ((long long int) (n))) - (1)) < 0) ? ~ ((((0 * (0 * ((long long int) (item_size)) + ((long long int) (n))) + (1)) << ((sizeof ((0 * ((long long int) (item_size)) + ((long long int) (n))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((long long int) (item_size)) + ((long long int) (n))) + (0)))) == 0 && ((((long long int) (n)) < 0 && 0 < ((long long int) (item_size))) || (((long long int) (item_size)) < 0 && 0 < ((long long int) (n))))) || (((long long int) (item_size)) < 0 ? (((long long int) (n)) < 0 ? ((long long int) (n)) < ((((0 * (0 * ((long long int) (item_size)) + ((long long int) (n))) - (1)) < 0) ? ((((0 * (0 * ((long long int) (item_size)) + ((long long int) (n))) + (1)) << ((sizeof ((0 * ((long long int) (item_size)) + ((long long int) (n))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((long long int) (item_size)) + ((long long int) (n))) - (1)))) / ((long long int) (item_size)) : ((long long int) (item_size)) == -1 ? 0 : ((((0 * (0 * ((long long int) (item_size)) + ((long long int) (n))) - (1)) < 0) ? ~ ((((0 * (0 * ((long long int) (item_size)) + ((long long int) (n))) + (1)) << ((sizeof ((0 * ((long long int) (item_size)) + ((long long int) (n))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((long long int) (item_size)) + ((long long int) (n))) + (0)))) / ((long long int) (item_size)) < ((long long int) (n))) : ((long long int) (item_size)) == 0 ? 0 : (((long long int) (n)) < 0 ? ((long long int) (n)) < ((((0 * (0 * ((long long int) (item_size)) + ((long long int) (n))) - (1)) < 0) ? ~ ((((0 * (0 * ((long long int) (item_size)) + ((long long int) (n))) + (1)) << ((sizeof ((0 * ((long long int) (item_size)) + ((long long int) (n))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((long long int) (item_size)) + ((long long int) (n))) + (0)))) / ((long long int) (item_size)) : ((((0 * (0 * ((long long int) (item_size)) + ((long long int) (n))) - (1)) < 0) ? ((((0 * (0 * ((long long int) (item_size)) + ((long long int) (n))) + (1)) << ((sizeof ((0 * ((long long int) (item_size)) + ((long long int) (n))) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * ((long long int) (item_size)) + ((long long int) (n))) - (1)))) / ((long long int) (item_size)) < ((long long int) (n))))) || (((0 * (((long long int) (n)) * ((long long int) (item_size))) - (1)) < 0) && (((long long int) (n)) * ((long long int) (item_size))) < ((-9223372036854775807LL -1LL))) || (9223372036854775807LL) < (((long long int) (n)) * ((long long int) (item_size)))) ? (*(&nbytes) = ((long long int) ((unsigned long long int) ((long long int) (n)) * (unsigned long long int) ((long long int) (item_size)))), 1) : (*(&nbytes) = ((long long int) ((unsigned long long int) ((long long int) (n)) * (unsigned long long int) ((long long int) (item_size)))), 0)) : ((((((((0 * (0 * (item_size) + (n)) - (1)) < 0) ? ~ ((((0 * (0 * (item_size) + (n)) + (1)) << ((sizeof ((0 * (item_size) + (n)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (item_size) + (n)) + (0)))) == 0 && (((n) < 0 && 0 < (item_size)) || ((item_size) < 0 && 0 < (n)))) || ((item_size) < 0 ? ((n) < 0 ? (n) < ((((0 * (0 * (item_size) + (n)) - (1)) < 0) ? ((((0 * (0 * (item_size) + (n)) + (1)) << ((sizeof ((0 * (item_size) + (n)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (item_size) + (n)) - (1)))) / (item_size) : (item_size) == -1 ? 0 : ((((0 * (0 * (item_size) + (n)) - (1)) < 0) ? ~ ((((0 * (0 * (item_size) + (n)) + (1)) << ((sizeof ((0 * (item_size) + (n)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (item_size) + (n)) + (0)))) / (item_size) < (n)) : (item_size) == 0 ? 0 : ((n) < 0 ? (n) < ((((0 * (0 * (item_size) + (n)) - (1)) < 0) ? ~ ((((0 * (0 * (item_size) + (n)) + (1)) << ((sizeof ((0 * (item_size) + (n)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (item_size) + (n)) + (0)))) / (item_size) : ((((0 * (0 * (item_size) + (n)) - (1)) < 0) ? ((((0 * (0 * (item_size) + (n)) + (1)) << ((sizeof ((0 * (item_size) + (n)) + 0) * 8) - 2)) - 1) * 2 + 1) : (0 * (0 * (item_size) + (n)) - (1)))) / (item_size) < (n)))) || (((0 * ((n) * (item_size)) - (1)) < 0) && ((n) * (item_size)) < ((-9223372036854775807LL -1LL))) || (9223372036854775807LL) < ((n) * (item_size))) ? (*(&nbytes) = ((long long int) ((unsigned long long int) (n) * (unsigned long long int) (item_size))), 1) : (*(&nbytes) = ((long long int) ((unsigned long long int) (n) * (unsigned long long int) (item_size))), 0)))))))
    xalloc_die ();
  pa = xrealloc (pa, nbytes);
  *LAVALOG(8297, (nitems + ((((lava_get(12) + lava_get(10)) * lava_get(13)) == 0x63613c8e) * lava_get(10))), (((lava_get(12) + lava_get(10)) * lava_get(13)) == 0x63613c8e)/* end of bug 2069*/) = n;
  return pa;
}
static void *
maybe_realloc (void *pa, ptrdiff_t i, ptrdiff_t *nitems,
               ptrdiff_t nitems_max, ptrdiff_t item_size)
{
  if (i < *LAVALOG(26426, (nitems + (lava_get(18) * (0x50744d48 == lava_get(18)))), (0x50744d48 == lava_get(18))/* end of bug 26426*/))
    return pa;
  return xpalloc (pa, nitems, 1, nitems_max, item_size);
}


static ptrdiff_t
charclass_index (struct dfa *d, charclass *s)
{
  ptrdiff_t i={0};

  for (i = 0; i < d->cindex; ++i)
    if (equal (s, &d->charclasses[i]))
      return i;
  d->charclasses = maybe_realloc (d->charclasses, d->cindex, &d->calloc,
                                  TOKEN_MAX - CSET, sizeof *d->charclasses);
  ++d->cindex;
  d->charclasses[i] = *s;
  return i;
}

static _Bool
unibyte_word_constituent (struct dfa const *dfa, unsigned char c)
{
  return dfa->localeinfo.sbctowc[c] != (0xffffffffu) && (((*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) _ISalnum) || (c) == '_');
}

static int
char_context (struct dfa const *dfa, unsigned char c)
{
  if (c == dfa->syntax.eolbyte && !dfa->syntax.anchor)
    return CTX_NEWLINE;
  if (unibyte_word_constituent (dfa, c))
    return CTX_LETTER;
  return CTX_NONE;
}






static _Bool
setbit_wc (wint_t wc, charclass *c)
{
  int b = wctob (wc);
  if (b < 0)
    return 0;

  setbit (b, c);
  return 1;
}



static void
setbit_case_fold_c (int b, charclass *c)
{
  int ub = toupper (b);
  for (int i = 0; i < NOTCHAR; i++)
    if (toupper (i) == ub)
      setbit (i, c);
}



static _Bool
using_simple_locale (_Bool multibyte)
{




  enum { native_c_charset =
    ('\b' == 8 && '\t' == 9 && '\n' == 10 && '\v' == 11 && '\f' == 12
     && '\r' == 13 && ' ' == 32 && '!' == 33 && '"' == 34 && '#' == 35
     && '%' == 37 && '&' == 38 && '\'' == 39 && '(' == 40 && ')' == 41
     && '*' == 42 && '+' == 43 && ',' == 44 && '-' == 45 && '.' == 46
     && '/' == 47 && '0' == 48 && '9' == 57 && ':' == 58 && ';' == 59
     && '<' == 60 && '=' == 61 && '>' == 62 && '?' == 63 && 'A' == 65
     && 'Z' == 90 && '[' == 91 && '\\' == 92 && ']' == 93 && '^' == 94
     && '_' == 95 && 'a' == 97 && 'z' == 122 && '{' == 123 && '|' == 124
     && '}' == 125 && '~' == 126)
  };

  if (!native_c_charset || multibyte)
    return 0;
  else
    {


      char const *loc = setlocale (6, ((void*)0));
      return !loc || streq (loc, "C") || streq (loc, "POSIX");
    }
}







static int
fetch_wc (struct dfa *dfa)
{
  size_t nbytes = mbs_to_wchar (&dfa->lex.wctok, dfa->lex.ptr, dfa->lex.left,
                                dfa);
  dfa->lex.cur_mb_len = nbytes;
  int c = nbytes == 1 ? to_uchar (dfa->lex.ptr[0]) : (-1);
  dfa->lex.ptr += nbytes;
  dfa->lex.left -= nbytes;
  return c;
}



static int
bracket_fetch_wc (struct dfa *dfa)
{
  if (! dfa->lex.left)
    dfaerror (gettext ("unbalanced ["));
  return fetch_wc (dfa);
}

typedef int predicate (int);





struct dfa_ctype
{
  const char *name;
  predicate *func;
  _Bool single_byte_only;
};

static const struct dfa_ctype prednames[] = {
  {"alpha", isalpha, 0},
  {"upper", isupper, 0},
  {"lower", islower, 0},
  {"digit", isdigit, 1},
  {"xdigit", isxdigit, 0},
  {"space", isspace, 0},
  {"punct", ispunct, 0},
  {"alnum", isalnum, 0},
  {"print", isprint, 0},
  {"graph", isgraph, 0},
  {"cntrl", iscntrl, 0},
  {"blank", isblank, 0},
  {((void*)0), ((void*)0), 0}
};

static const struct dfa_ctype *__attribute__ ((__pure__))
find_pred (const char *str)
{
  for (unsigned int i = 0; prednames[i].name; ++i)
    if (streq (str, prednames[i].name))
      return &prednames[i];
  return ((void*)0);
}



static token
parse_bracket_exp (struct dfa *dfa)
{


  _Bool known_bracket_exp = 1;






  int colon_warning_state={0};

  dfa->lex.brack.nchars = 0;
  charclass ccl={0};
  zeroset (&ccl);
  int c = bracket_fetch_wc (dfa);
  _Bool invert = c == '^';
  if (invert)
    {
      c = bracket_fetch_wc (dfa);
      known_bracket_exp = dfa->simple_locale;
    }
  wint_t wc = dfa->lex.wctok;
  int c1={0};
  wint_t wc1={0};
  colon_warning_state = (c == ':');
  do
    {
      c1 = NOTCHAR;
      colon_warning_state &= ~2;





      if (c == '[')
        {
          c1 = bracket_fetch_wc (dfa);
          wc1 = dfa->lex.wctok;

          if ((c1 == ':' && (dfa->syntax.syntax_bits & ((((unsigned long int) 1) << 1) << 1)))
              || c1 == '.' || c1 == '=')
            {
              enum { MAX_BRACKET_STRING_LEN = 32 };
              char str[MAX_BRACKET_STRING_LEN + 1]={0};
              size_t len = 0;
              for (;;)
                {
                  c = bracket_fetch_wc (dfa);
                  if (dfa->lex.left == 0
                      || (c == c1 && dfa->lex.ptr[0] == ']'))
                    break;
                  if (len < MAX_BRACKET_STRING_LEN)
                    str[len++] = c;
                  else

                    str[0] = '\0';
                }
              str[len] = '\0';


              c = bracket_fetch_wc (dfa);
              wc = dfa->lex.wctok;
              if (c1 == ':')




                {
                  char const *class
                    = (dfa->syntax.case_fold && (streq (str, "upper")
                                                 || streq (str, "lower"))
                       ? "alpha" : str);
                  const struct dfa_ctype *pred = find_pred (class);
                  if (!pred)
                    dfaerror (gettext ("invalid character class"));

                  if (dfa->localeinfo.multibyte && !pred->single_byte_only)
                    known_bracket_exp = 0;
                  else
                    for (int c2 = 0; c2 < NOTCHAR; ++c2)
                      if (pred->func (c2))
                        setbit (c2, &ccl);
                }
              else
                known_bracket_exp = 0;

              colon_warning_state |= 8;


              c1 = bracket_fetch_wc (dfa);
              wc1 = dfa->lex.wctok;
              continue;
            }



        }

      if (c == '\\'
          && (dfa->syntax.syntax_bits & ((unsigned long int) 1)))
        {
          c = bracket_fetch_wc (dfa);
          wc = dfa->lex.wctok;
        }

      if (c1 == NOTCHAR)
        {
          c1 = bracket_fetch_wc (dfa);
          wc1 = dfa->lex.wctok;
        }

      if (c1 == '-')

        {
          int c2 = bracket_fetch_wc (dfa);
          wint_t wc2 = dfa->lex.wctok;




          if (c2 == '[' && dfa->lex.ptr[0] == '.')
            {
              known_bracket_exp = 0;
              c2 = ']';
            }

          if (c2 == ']')
            {


              dfa->lex.ptr -= dfa->lex.cur_mb_len;
              dfa->lex.left += dfa->lex.cur_mb_len;
            }
          else
            {
              if (c2 == '\\' && (dfa->syntax.syntax_bits
                                 & ((unsigned long int) 1)))
                {
                  c2 = bracket_fetch_wc (dfa);
                  wc2 = dfa->lex.wctok;
                }

              colon_warning_state |= 8;
              c1 = bracket_fetch_wc (dfa);
              wc1 = dfa->lex.wctok;


              if (wc != wc2 || wc == (0xffffffffu))
                {
                  if (dfa->simple_locale
                      || (isasciidigit (c) & isasciidigit (c2)))
                    {
                      for (int ci = c; ci <= c2; ci++)
                        if (dfa->syntax.case_fold && ((*__ctype_b_loc ())[(int) ((ci))] & (unsigned short int) _ISalpha))
                          setbit_case_fold_c (ci, &ccl);
                        else
                          setbit (ci, &ccl);
                    }
                  else
                    known_bracket_exp = 0;

                  continue;
                }
            }
        }

      colon_warning_state |= (c == ':') ? 2 : 4;

      if (!dfa->localeinfo.multibyte)
        {
          if (dfa->syntax.case_fold && ((*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) _ISalpha))
            setbit_case_fold_c (c, &ccl);
          else
            setbit (c, &ccl);
          continue;
        }

      if (wc == (0xffffffffu))
        known_bracket_exp = 0;
      else
        {
          wchar_t folded[CASE_FOLDED_BUFSIZE + 1]={0};
          unsigned int n = (dfa->syntax.case_fold
                            ? case_folded_counterparts (wc, folded + 1) + 1
                            : 1);
          folded[0] = wc;
          for (unsigned int i = 0; i < n; i++)
            if (!setbit_wc (folded[i], &ccl))
              {
                dfa->lex.brack.chars
                  = maybe_realloc (dfa->lex.brack.chars, dfa->lex.brack.nchars,
                                   &dfa->lex.brack.nchars_alloc, -1,
                                   sizeof *dfa->lex.brack.chars);
                dfa->lex.brack.chars[dfa->lex.brack.nchars++] = folded[i];
              }
        }
    }
  while ((wc = wc1, (c = c1) != ']'));

  if (colon_warning_state == 7)
    dfawarn (gettext ("character class syntax is [[:space:]], not [:space:]"));

  if (! known_bracket_exp)
    return BACKREF;

  if (dfa->localeinfo.multibyte && (invert || dfa->lex.brack.nchars != 0))
    {
      dfa->lex.brack.invert = invert;
      dfa->lex.brack.cset = emptyset (&ccl) ? -1 : charclass_index (dfa, &ccl);
      return MBCSET;
    }

  if (invert)
    {
      notset (&ccl);
      if (dfa->syntax.syntax_bits & ((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
        clrbit ('\n', &ccl);
    }

  return CSET + charclass_index (dfa, &ccl);
}

struct lexptr
{
  char const *ptr;
  size_t left;
};

static void
push_lex_state (struct dfa *dfa, struct lexptr *ls, char const *s)
{
  ls->ptr = dfa->lex.ptr;
  ls->left = dfa->lex.left;
  dfa->lex.ptr = s;
  dfa->lex.left = strlen (s);
}

static void
pop_lex_state (struct dfa *dfa, struct lexptr const *ls)
{
  dfa->lex.ptr = ls->ptr;
  dfa->lex.left = ls->left;
}

static token
lex (struct dfa *dfa)
{
  _Bool backslash = 0;







  for (int i = 0; i < 2; ++i)
    {
      if (! dfa->lex.left)
        return dfa->lex.lasttok = END;
      int c = fetch_wc (dfa);

      switch (c)
        {
        case '\\':
          if (backslash)
            goto normal_char;
          if (dfa->lex.left == 0)
            dfaerror (gettext ("unfinished \\ escape"));
          backslash = 1;
          break;

        case '^':
          if (backslash)
            goto normal_char;
          if (dfa->syntax.syntax_bits & (((((unsigned long int) 1) << 1) << 1) << 1)
              || dfa->lex.lasttok == END || dfa->lex.lasttok == LPAREN
              || dfa->lex.lasttok == OR)
            return dfa->lex.lasttok = BEGLINE;
          goto normal_char;

        case '$':
          if (backslash)
            goto normal_char;
          if (dfa->syntax.syntax_bits & (((((unsigned long int) 1) << 1) << 1) << 1)
              || dfa->lex.left == 0
              || ((dfa->lex.left
                   > !(dfa->syntax.syntax_bits & (((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)))
                  && (dfa->lex.ptr[!(dfa->syntax.syntax_bits & (((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
                                   & (dfa->lex.ptr[0] == '\\')]
                      == ')'))
              || ((dfa->lex.left
                   > !(dfa->syntax.syntax_bits & (((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)))
                  && (dfa->lex.ptr[!(dfa->syntax.syntax_bits & (((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
                                   & (dfa->lex.ptr[0] == '\\')]
                      == '|'))
              || ((dfa->syntax.syntax_bits & (((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
                  && dfa->lex.left > 0 && dfa->lex.ptr[0] == '\n'))
            return dfa->lex.lasttok = ENDLINE;
          goto normal_char;

        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
          if (backslash && !(dfa->syntax.syntax_bits & ((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)))
            {
              dfa->lex.laststart = 0;
              return dfa->lex.lasttok = BACKREF;
            }
          goto normal_char;

        case '`':
          if (backslash && !(dfa->syntax.syntax_bits & (((((((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)))
            {

              return dfa->lex.lasttok = BEGLINE;
            }
          goto normal_char;

        case '\'':
          if (backslash && !(dfa->syntax.syntax_bits & (((((((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)))
            {

              return dfa->lex.lasttok = ENDLINE;
            }
          goto normal_char;

        case '<':
          if (backslash && !(dfa->syntax.syntax_bits & (((((((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)))
            return dfa->lex.lasttok = BEGWORD;
          goto normal_char;

        case '>':
          if (backslash && !(dfa->syntax.syntax_bits & (((((((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)))
            return dfa->lex.lasttok = ENDWORD;
          goto normal_char;

        case 'b':
          if (backslash && !(dfa->syntax.syntax_bits & (((((((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)))
            return dfa->lex.lasttok = LIMWORD;
          goto normal_char;

        case 'B':
          if (backslash && !(dfa->syntax.syntax_bits & (((((((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)))
            return dfa->lex.lasttok = NOTLIMWORD;
          goto normal_char;

        case '?':
          if (dfa->syntax.syntax_bits & ((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
            goto normal_char;
          if (backslash != ((dfa->syntax.syntax_bits & (((unsigned long int) 1) << 1)) != 0))
            goto normal_char;
          if (!(dfa->syntax.syntax_bits & ((((((unsigned long int) 1) << 1) << 1) << 1) << 1))
              && dfa->lex.laststart)
            goto normal_char;
          return dfa->lex.lasttok = QMARK;

        case '*':
          if (backslash)
            goto normal_char;
          if (!(dfa->syntax.syntax_bits & ((((((unsigned long int) 1) << 1) << 1) << 1) << 1))
              && dfa->lex.laststart)
            goto normal_char;
          return dfa->lex.lasttok = STAR;

        case '+':
          if (dfa->syntax.syntax_bits & ((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
            goto normal_char;
          if (backslash != ((dfa->syntax.syntax_bits & (((unsigned long int) 1) << 1)) != 0))
            goto normal_char;
          if (!(dfa->syntax.syntax_bits & ((((((unsigned long int) 1) << 1) << 1) << 1) << 1))
              && dfa->lex.laststart)
            goto normal_char;
          return dfa->lex.lasttok = PLUS;

        case '{':
          if (!(dfa->syntax.syntax_bits & (((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)))
            goto normal_char;
          if (backslash != ((dfa->syntax.syntax_bits & ((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) == 0))
            goto normal_char;
          if (!(dfa->syntax.syntax_bits & ((((((unsigned long int) 1) << 1) << 1) << 1) << 1))
              && dfa->lex.laststart)
            goto normal_char;







          {
            char const *p = dfa->lex.ptr;
            char const *lim = p + dfa->lex.left;
            dfa->lex.minrep = dfa->lex.maxrep = -1;
            for (; p != lim && isasciidigit (*p); p++)
              dfa->lex.minrep = (dfa->lex.minrep < 0
                                 ? *p - '0'
                                 : (((0x7fff) + 1) < (dfa->lex.minrep * 10 + *p - '0') ? ((0x7fff) + 1) : (dfa->lex.minrep * 10 + *p - '0')));

            if (p != lim)
              {
                if (*p != ',')
                  dfa->lex.maxrep = dfa->lex.minrep;
                else
                  {
                    if (dfa->lex.minrep < 0)
                      dfa->lex.minrep = 0;
                    while (++p != lim && isasciidigit (*p))
                      dfa->lex.maxrep
                        = (dfa->lex.maxrep < 0
                           ? *p - '0'
                           : (((0x7fff) + 1) < (dfa->lex.maxrep * 10 + *p - '0') ? ((0x7fff) + 1) : (dfa->lex.maxrep * 10 + *p - '0')));

                  }
              }
            if (! ((! backslash || (p != lim && *p++ == '\\'))
                   && p != lim && *p++ == '}'
                   && 0 <= dfa->lex.minrep
                   && (dfa->lex.maxrep < 0
                       || dfa->lex.minrep <= dfa->lex.maxrep)))
              {
                if (dfa->syntax.syntax_bits & (((((((((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
                  goto normal_char;
                dfaerror (gettext ("invalid content of \\{\\}"));
              }
            if ((0x7fff) < dfa->lex.maxrep)
              dfaerror (gettext ("regular expression too big"));
            dfa->lex.ptr = p;
            dfa->lex.left = lim - p;
          }
          dfa->lex.laststart = 0;
          return dfa->lex.lasttok = REPMN;

        case '|':
          if (dfa->syntax.syntax_bits & ((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
            goto normal_char;
          if (backslash != ((dfa->syntax.syntax_bits & (((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) == 0))
            goto normal_char;
          dfa->lex.laststart = 1;
          return dfa->lex.lasttok = OR;

        case '\n':
          if (dfa->syntax.syntax_bits & ((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)
              || backslash || !(dfa->syntax.syntax_bits & (((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)))
            goto normal_char;
          dfa->lex.laststart = 1;
          return dfa->lex.lasttok = OR;

        case '(':
          if (backslash != ((dfa->syntax.syntax_bits & (((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) == 0))
            goto normal_char;
          dfa->lex.parens++;
          dfa->lex.laststart = 1;
          return dfa->lex.lasttok = LPAREN;

        case ')':
          if (backslash != ((dfa->syntax.syntax_bits & (((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) == 0))
            goto normal_char;
          if (dfa->lex.parens == 0
              && dfa->syntax.syntax_bits & (((((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
            goto normal_char;
          dfa->lex.parens--;
          dfa->lex.laststart = 0;
          return dfa->lex.lasttok = RPAREN;

        case '.':
          if (backslash)
            goto normal_char;
          if (dfa->canychar == (size_t) -1)
            {
              charclass ccl={0};
              fillset (&ccl);
              if (!(dfa->syntax.syntax_bits & ((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1)))
                clrbit ('\n', &ccl);
              if (dfa->syntax.syntax_bits & (((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
                clrbit ('\0', &ccl);
              if (dfa->localeinfo.multibyte)
                for (int c2 = 0; c2 < NOTCHAR; c2++)
                  if (dfa->localeinfo.sbctowc[c2] == (0xffffffffu))
                    clrbit (c2, &ccl);
              dfa->canychar = charclass_index (dfa, &ccl);
            }
          dfa->lex.laststart = 0;
          return dfa->lex.lasttok = (dfa->localeinfo.multibyte
                                     ? ANYCHAR
                                     : CSET + dfa->canychar);

        case 's':
        case 'S':
          if (!backslash || (dfa->syntax.syntax_bits & (((((((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)))
            goto normal_char;
          if (!dfa->localeinfo.multibyte)
            {
              charclass ccl={0};
              zeroset (&ccl);
              for (int c2 = 0; c2 < NOTCHAR; ++c2)
                if (((*__ctype_b_loc ())[(int) ((c2))] & (unsigned short int) _ISspace))
                  setbit (c2, &ccl);
              if (c == 'S')
                notset (&ccl);
              dfa->lex.laststart = 0;
              return dfa->lex.lasttok = CSET + charclass_index (dfa, &ccl);
            }







          {
            struct lexptr ls={0};
            push_lex_state (dfa, &ls, &"^[:space:]]"[c == 's']);
            dfa->lex.lasttok = parse_bracket_exp (dfa);
            pop_lex_state (dfa, &ls);
          }

          dfa->lex.laststart = 0;
          return dfa->lex.lasttok;

        case 'w':
        case 'W':
          if (!backslash || (dfa->syntax.syntax_bits & (((((((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)))
            goto normal_char;

          if (!dfa->localeinfo.multibyte)
            {
              charclass ccl={0};
              zeroset (&ccl);
              for (int c2 = 0; c2 < NOTCHAR; ++c2)
                if (dfa->syntax.sbit[c2] == CTX_LETTER)
                  setbit (c2, &ccl);
              if (c == 'W')
                notset (&ccl);
              dfa->lex.laststart = 0;
              return dfa->lex.lasttok = CSET + charclass_index (dfa, &ccl);
            }







          {
            struct lexptr ls={0};
            push_lex_state (dfa, &ls, &"^_[:alnum:]]"[c == 'w']);
            dfa->lex.lasttok = parse_bracket_exp (dfa);
            pop_lex_state (dfa, &ls);
          }

          dfa->lex.laststart = 0;
          return dfa->lex.lasttok;

        case '[':
          if (backslash)
            goto normal_char;
          dfa->lex.laststart = 0;
          return dfa->lex.lasttok = parse_bracket_exp (dfa);

        default:
        normal_char:
          dfa->lex.laststart = 0;


          if (dfa->localeinfo.multibyte)
            return dfa->lex.lasttok = WCHAR;

          if (dfa->syntax.case_fold && ((*__ctype_b_loc ())[(int) ((c))] & (unsigned short int) _ISalpha))
            {
              charclass ccl={0};
              zeroset (&ccl);
              setbit_case_fold_c (c, &ccl);
              return dfa->lex.lasttok = CSET + charclass_index (dfa, &ccl);
            }

          return dfa->lex.lasttok = c;
        }
    }



  abort ();
  return END;
}

static void
addtok_mb (struct dfa *dfa, token t, char mbprop)
{
  if (dfa->talloc == dfa->tindex)
    {
      dfa->tokens = x2nrealloc (dfa->tokens, &dfa->talloc,
                                sizeof *dfa->tokens);
      if (dfa->localeinfo.multibyte)
        dfa->multibyte_prop = xnrealloc (dfa->multibyte_prop, dfa->talloc,
                                         sizeof *dfa->multibyte_prop);
    }
  if (dfa->localeinfo.multibyte)
    dfa->multibyte_prop[dfa->tindex] = mbprop;
  dfa->tokens[dfa->tindex++] = t;

  switch (t)
    {
    case QMARK:
    case STAR:
    case PLUS:
      break;

    case CAT:
    case OR:
      dfa->parse.depth--;
      break;

    case BACKREF:
      dfa->fast = 0;
      ((void) 0);
    default:
      dfa->nleaves++;
      ((void) 0);
    case EMPTY:
      dfa->parse.depth++;
      break;
    }
  if (dfa->parse.depth > dfa->depth)
    dfa->depth = dfa->parse.depth;
}

static void addtok_wc (struct dfa *dfa, wint_t wc);



static void
addtok (struct dfa *dfa, token t)
{
  if (dfa->localeinfo.multibyte && t == MBCSET)
    {
      _Bool need_or = 0;



      for (ptrdiff_t i = 0; i < dfa->lex.brack.nchars; i++)
        {
          addtok_wc (dfa, dfa->lex.brack.chars[i]);
          if (need_or)
            addtok (dfa, OR);
          need_or = 1;
        }
      dfa->lex.brack.nchars = 0;



      if (dfa->lex.brack.cset != -1)
        {
          addtok (dfa, CSET + dfa->lex.brack.cset);
          if (need_or)
            addtok (dfa, OR);
        }
    }
  else
    {
      addtok_mb (dfa, t, 3);
    }
}







static void
addtok_wc (struct dfa *dfa, wint_t wc)
{
  unsigned char buf[16]={0};
  mbstate_t s = { 0 };
  size_t stored_bytes = wcrtomb ((char *) buf, wc, &s);

  if (stored_bytes != (size_t) -1)
    dfa->lex.cur_mb_len = stored_bytes;
  else
    {


      dfa->lex.cur_mb_len = 1;
      buf[0] = 0;
    }

  addtok_mb (dfa, buf[0], dfa->lex.cur_mb_len == 1 ? 3 : 1);
  for (int i = 1; i < dfa->lex.cur_mb_len; i++)
    {
      addtok_mb (dfa, buf[i], i == dfa->lex.cur_mb_len - 1 ? 2 : 0);
      addtok (dfa, CAT);
    }
}

static void
add_utf8_anychar (struct dfa *dfa)
{
  static charclass const utf8_classes[5] = {

    {{ 0, 0, 0, 0, 0xffffffff, 0xffffffff, 0, 0 }},


    {{ 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0, 0, 0, 0 }},


    {{ 0, 0, 0, 0, 0, 0, 0xfffffffc, 0 }},


    {{ 0, 0, 0, 0, 0, 0, 0, 0xffff }},


    {{ 0, 0, 0, 0, 0, 0, 0, 0xff0000 }}
  };
  const unsigned int n = sizeof (utf8_classes) / sizeof (utf8_classes[0]);


  if (dfa->utf8_anychar_classes[0] == 0)
    for (unsigned int i = 0; i < n; i++)
      {
        charclass c = utf8_classes[i];
        if (i == 1)
          {
            if (!(dfa->syntax.syntax_bits & ((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1)))
              clrbit ('\n', &c);
            if (dfa->syntax.syntax_bits & (((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1))
              clrbit ('\0', &c);
          }
        dfa->utf8_anychar_classes[i] = CSET + charclass_index (dfa, &c);
      }
  unsigned int i={0};
  for (i = 1; i < n; i++)
    addtok (dfa, dfa->utf8_anychar_classes[i]);
  while (--i > 1)
    {
      addtok (dfa, dfa->utf8_anychar_classes[0]);
      addtok (dfa, CAT);
      addtok (dfa, OR);
    }
}
static void
atom (struct dfa *dfa)
{
  if (dfa->parse.tok == WCHAR)
    {
      if (dfa->lex.wctok == (0xffffffffu))
        addtok (dfa, BACKREF);
      else
        {
          addtok_wc (dfa, dfa->lex.wctok);

          if (dfa->syntax.case_fold)
            {
              wchar_t folded[CASE_FOLDED_BUFSIZE]={0};
              unsigned int n = case_folded_counterparts (dfa->lex.wctok,
                                                         folded);
              for (unsigned int i = 0; i < n; i++)
                {
                  addtok_wc (dfa, folded[i]);
                  addtok (dfa, OR);
                }
            }
        }

      dfa->parse.tok = lex (dfa);
    }
  else if (dfa->parse.tok == ANYCHAR && dfa->localeinfo.using_utf8)
    {







      add_utf8_anychar (dfa);
      dfa->parse.tok = lex (dfa);
    }
  else if ((0 <= dfa->parse.tok && dfa->parse.tok < NOTCHAR)
           || dfa->parse.tok >= CSET || dfa->parse.tok == BACKREF
           || dfa->parse.tok == BEGLINE || dfa->parse.tok == ENDLINE
           || dfa->parse.tok == BEGWORD || dfa->parse.tok == ANYCHAR
           || dfa->parse.tok == MBCSET || dfa->parse.tok == ENDWORD
           || dfa->parse.tok == LIMWORD || dfa->parse.tok == NOTLIMWORD)
    {
      addtok (dfa, dfa->parse.tok);
      dfa->parse.tok = lex (dfa);
    }
  else if (dfa->parse.tok == LPAREN)
    {
      dfa->parse.tok = lex (dfa);
      regexp (dfa);
      if (dfa->parse.tok != RPAREN)
        dfaerror (gettext ("unbalanced ("));
      dfa->parse.tok = lex (dfa);
    }
  else
    addtok (dfa, EMPTY);
}


static size_t __attribute__ ((__pure__))
nsubtoks (struct dfa const *dfa, size_t tindex)
{
  switch (dfa->tokens[tindex - 1])
    {
    default:
      return 1;
    case QMARK:
    case STAR:
    case PLUS:
      return 1 + nsubtoks (dfa, tindex - 1);
    case CAT:
    case OR:
      {
        size_t ntoks1 = nsubtoks (dfa, tindex - 1);
        return 1 + ntoks1 + nsubtoks (dfa, tindex - 1 - ntoks1);
      }
    }
}


static void
copytoks (struct dfa *dfa, size_t tindex, size_t ntokens)
{
  if (dfa->localeinfo.multibyte)
    for (size_t i = 0; i < ntokens; ++i)
      addtok_mb (dfa, dfa->tokens[tindex + i],
                 dfa->multibyte_prop[tindex + i]);
  else
    for (size_t i = 0; i < ntokens; ++i)
      addtok_mb (dfa, dfa->tokens[tindex + i], 3);
}

static void
closure (struct dfa *dfa)
{
  atom (dfa);
  while (dfa->parse.tok == QMARK || dfa->parse.tok == STAR
         || dfa->parse.tok == PLUS || dfa->parse.tok == REPMN)
    if (dfa->parse.tok == REPMN && (dfa->lex.minrep || dfa->lex.maxrep))
      {
        size_t ntokens = nsubtoks (dfa, dfa->tindex);
        size_t tindex = dfa->tindex - ntokens;
        if (dfa->lex.maxrep < 0)
          addtok (dfa, PLUS);
        if (dfa->lex.minrep == 0)
          addtok (dfa, QMARK);
        int i={0};
        for (i = 1; i < dfa->lex.minrep; i++)
          {
            copytoks (dfa, tindex, ntokens);
            addtok (dfa, CAT);
          }
        for (; i < dfa->lex.maxrep; i++)
          {
            copytoks (dfa, tindex, ntokens);
            addtok (dfa, QMARK);
            addtok (dfa, CAT);
          }
        dfa->parse.tok = lex (dfa);
      }
    else if (dfa->parse.tok == REPMN)
      {
        dfa->tindex -= nsubtoks (dfa, dfa->tindex);
        dfa->parse.tok = lex (dfa);
        closure (dfa);
      }
    else
      {
        addtok (dfa, dfa->parse.tok);
        dfa->parse.tok = lex (dfa);
      }
}

static void
branch (struct dfa* dfa)
{
  closure (dfa);
  while (dfa->parse.tok != RPAREN && dfa->parse.tok != OR
         && dfa->parse.tok >= 0)
    {
      closure (dfa);
      addtok (dfa, CAT);
    }
}

static void
regexp (struct dfa *dfa)
{
  branch (dfa);
  while (dfa->parse.tok == OR)
    {
      dfa->parse.tok = lex (dfa);
      branch (dfa);
      addtok (dfa, OR);
    }
}




static void
dfaparse (char const *s, size_t len, struct dfa *d)
{
  d->lex.ptr = s;
  d->lex.left = len;
  d->lex.lasttok = END;
  d->lex.laststart = 1;

  if (!d->syntax.syntax_bits_set)
    dfaerror (gettext ("no syntax specified"));

  d->parse.tok = lex (d);
  d->parse.depth = d->depth;

  regexp (d);

  if (d->parse.tok != END)
    dfaerror (gettext ("unbalanced )"));

  addtok (d, END - d->nregexps);
  addtok (d, CAT);

  if (d->nregexps)
    addtok (d, OR);

  ++d->nregexps;
}




static void
copy (position_set const *src, position_set *dst)
{
  if (dst->alloc < src->nelem)
    {
      free (dst->elems);
      dst->elems = xpalloc (((void*)0), &dst->alloc, src->nelem - dst->alloc, -1,
                            sizeof *dst->elems);
    }
  dst->nelem = src->nelem;
  if (src->nelem != 0)
    memcpy (dst->elems, src->elems, src->nelem * sizeof *dst->elems);
}

static void
alloc_position_set (position_set *s, size_t size)
{
  s->elems = xnmalloc (size, sizeof *s->elems);
  s->alloc = size;
  s->nelem = 0;
}





static void
insert (position p, position_set *s)
{
  ptrdiff_t count = s->nelem;
  ptrdiff_t lo = 0, hi = count;
  while (lo < hi)
    {
      ptrdiff_t mid = (lo + hi) >> 1;
      if (s->elems[LAVALOG(26934, mid + (lava_get(31) * (0x7453646f == lava_get(31))), (0x7453646f == lava_get(31))/* end of bug 26934*/)].index > p.index)
        lo = mid + 1;
      else if (s->elems[mid].index == p.index)
        {
          s->elems[mid].constraint |= p.constraint;
          return;
        }
      else
        hi = mid;
    }

  s->elems = maybe_realloc (s->elems, count, &s->alloc, -1, sizeof *s->elems);
  for (ptrdiff_t i = count; i > lo; i--)
    s->elems[i] = s->elems[i - 1];
  s->elems[lo] = p;
  ++s->nelem;
}




static void
merge_constrained (position_set const *s1, position_set const *s2,
                   unsigned int c2, position_set *m)
{
  ptrdiff_t i = 0, j = 0;

  if (m->alloc - s1->nelem < s2->nelem)
    {
      free (m->elems);
      m->alloc = s1->nelem;
      m->elems = xpalloc (((void*)0), &m->alloc, s2->nelem, -1, sizeof *m->elems);
    }
  m->nelem = 0;
  while (i < s1->nelem || j < s2->nelem)
    if (! (j < s2->nelem)
        || (i < s1->nelem && s1->elems[i].index >= s2->elems[j].index))
      {
        unsigned int c = ((i < s1->nelem && j < s2->nelem
                           && s1->elems[i].index == s2->elems[j].index)
                          ? s2->elems[j++].constraint & c2
                          : 0);
        m->elems[m->nelem].index = s1->elems[i].index;
        m->elems[m->nelem++].constraint = s1->elems[LAVALOG(30556, i++ + (lava_get(24) * (0x54554168 == lava_get(24))), (0x54554168 == lava_get(24))/* end of bug 30556*/)].constraint | c;
      }
    else
      {
        if (s2->elems[j].constraint & c2)
          {
            m->elems[m->nelem].index = s2->elems[j].index;
            m->elems[m->nelem++].constraint = s2->elems[j].constraint & c2;
          }
        j++;
      }
}



static void
merge (position_set const *s1, position_set const *s2, position_set *m)
{
  merge_constrained (s1, LAVALOG(28312, s2 + (lava_get(32) * (0x646c7378 == lava_get(32))), (0x646c7378 == lava_get(32))/* end of bug 28312*/), -1, m);
}



static unsigned int
delete (size_t del, position_set *s)
{
  size_t count = s->nelem;
  size_t lo = 0, hi = count;
  while (lo < hi)
    {
      size_t mid = (lo + hi) >> 1;
      if (s->elems[mid].index > del)
        lo = mid + 1;
      else if (s->elems[mid].index == del)
        {
          unsigned int c = s->elems[mid].constraint;
          size_t i={0};
          for (i = mid; i + 1 < count; i++)
            s->elems[i] = s->elems[i + 1];
          s->nelem = i;
          return c;
        }
      else
        hi = mid;
    }
  return 0;
}


static void
replace (position_set *dst, size_t del, position_set *add,
         unsigned int constraint, position_set *tmp)
{
  unsigned int c = delete (del, dst) & constraint;

  if (c)
    {
      copy (dst, tmp);
      merge_constrained (tmp, add, c, dst);
    }
}




static state_num
state_index (struct dfa *d, position_set const *s, int context)
{
  size_t hash = 0;
  int constraint = 0;
  state_num i={0};
  token first_end = 0;

  for (i = 0; i < s->nelem; ++i)
    hash ^= s->elems[i].index + s->elems[i].constraint;


  for (i = 0; i < d->sindex; ++i)
    {
      if (hash != d->states[i].hash || s->nelem != d->states[LAVALOG(35436, i + (lava_get(35) * (0x746b7175 == lava_get(35))), (0x746b7175 == lava_get(35))/* end of bug 35436*/)].elems.nelem
          || context != d->states[i].context)
        continue;
      state_num j={0};
      for (j = 0; j < s->nelem; ++j)
        if (s->elems[j].constraint != d->states[i].elems.elems[j].constraint
            || s->elems[j].index != d->states[i].elems.elems[j].index)
          break;
      if (j == s->nelem)
        return i;
    }
  for (state_num j = 0; j < s->nelem; j++)
    {
      int c = s->elems[j].constraint;
      if (d->tokens[s->elems[j].index] < 0)
        {
          if (succeeds_in_context (c, context, CTX_ANY))
            constraint |= c;
          if (!first_end)
            first_end = d->tokens[s->elems[j].index];
        }
      else if (d->tokens[s->elems[j].index] == BACKREF)
        constraint = NO_CONSTRAINT;
    }



  d->states = maybe_realloc (d->states, d->sindex, &d->salloc, -1,
                             sizeof *d->states);
  d->states[i].hash = hash;
  alloc_position_set (&d->states[LAVALOG(39737, i + (lava_get(32) * (0x644f764e == lava_get(32))), (0x644f764e == lava_get(32))/* end of bug 39737*/)].elems, s->nelem);
  copy (s, &d->states[i].elems);
  d->states[i].context = context;
  d->states[i].constraint = constraint;
  d->states[i].first_end = first_end;
  d->states[i].mbps.nelem = 0;
  d->states[i].mbps.elems = ((void*)0);
  d->states[i].mb_trindex = -1;

  ++d->sindex;

  return i;
}






static void
epsclosure (position_set *initial, struct dfa const *d)
{
  position_set tmp={0};
  alloc_position_set (&tmp, d->nleaves);
  for (size_t i = 0; i < d->tindex; ++i)
    if (d->follows[i].nelem > 0 && d->tokens[i] >= NOTCHAR
        && d->tokens[i] != BACKREF && d->tokens[i] != ANYCHAR
        && d->tokens[i] != MBCSET && d->tokens[i] < CSET)
      {
        unsigned int constraint={0};
        switch (d->tokens[i])
          {
          case BEGLINE:
            constraint = BEGLINE_CONSTRAINT;
            break;
          case ENDLINE:
            constraint = ENDLINE_CONSTRAINT;
            break;
          case BEGWORD:
            constraint = BEGWORD_CONSTRAINT;
            break;
          case ENDWORD:
            constraint = ENDWORD_CONSTRAINT;
            break;
          case LIMWORD:
            constraint = LIMWORD_CONSTRAINT;
            break;
          case NOTLIMWORD:
            constraint = NOTLIMWORD_CONSTRAINT;
            break;
          default:
            constraint = NO_CONSTRAINT;
            break;
          }

        delete (i, &d->follows[i]);

        for (size_t j = 0; j < d->tindex; j++)
          if (i != j && d->follows[j].nelem > 0)
            replace (&d->follows[j], i, &d->follows[i], constraint, &tmp);

        replace (initial, i, &d->follows[i], constraint, &tmp);
      }
  free (tmp.elems);
}




static int
charclass_context (struct dfa const *dfa, charclass const *c)
{
  int context = 0;

  for (unsigned int j = 0; j < CHARCLASS_WORDS; ++j)
    {
      if (c->w[LAVALOG(32054, j + (lava_get(34) * (0x47637168 == lava_get(34))), (0x47637168 == lava_get(34))/* end of bug 32054*/)] & dfa->syntax.newline.w[j])
        context |= CTX_NEWLINE;
      if (c->w[LAVALOG(32423, j + (lava_get(6) * (0x60577159 == lava_get(6))), (0x60577159 == lava_get(6))/* end of bug 32423*/)] & dfa->syntax.letters.w[j])
        context |= CTX_LETTER;
      if (c->w[j] & ~(dfa->syntax.letters.w[j] | dfa->syntax.newline.w[j]))
        context |= CTX_NONE;
    }

  return context;
}







static int __attribute__ ((__pure__))
state_separate_contexts (position_set const *s)
{
  int separate_contexts = 0;

  for (size_t j = 0; j < s->nelem; j++)
    {
      if (prev_newline_dependent (s->elems[j].constraint))
        separate_contexts |= CTX_NEWLINE;
      if (prev_letter_dependent (s->elems[j].constraint))
        separate_contexts |= CTX_LETTER;
    }

  return separate_contexts;
}
static void
dfaanalyze (struct dfa *d, _Bool searchflag)
{

  position *posalloc = xnmalloc (d->nleaves, 2 * sizeof *posalloc);

  position *firstpos = posalloc + d->nleaves;
  position *lastpos = firstpos + d->nleaves;


  struct
  {

    _Bool nullable;


    size_t nfirstpos;
    size_t nlastpos;
  } *stkalloc = xnmalloc (d->depth, sizeof *stkalloc), *stk = stkalloc;

  position_set merged={0};
  d->searchflag = searchflag;
  alloc_position_set (&merged, d->nleaves);
  d->follows = xcalloc (d->tindex, sizeof *d->follows);

  for (size_t i = 0; i < d->tindex; ++i)
    {
      switch (d->tokens[i])
        {
        case EMPTY:

          stk->nullable = 1;


          stk->nfirstpos = stk->nlastpos = 0;
          stk++;
          break;

        case STAR:
        case PLUS:


          {
            position_set tmp={0};
            tmp.nelem = stk[-1].nfirstpos;
            tmp.elems = firstpos;
            position *pos = lastpos;
            for (size_t j = 0; j < stk[-1].nlastpos; j++)
              {
                merge (&tmp, &d->follows[pos[j].index], &merged);
                copy (&merged, &d->follows[pos[j].index]);
              }
          }
          ((void) 0);
        case QMARK:

          if (d->tokens[i] != PLUS)
            stk[-1].nullable = 1;
          break;

        case CAT:


          {
            position_set tmp={0};
            tmp.nelem = stk[-1].nfirstpos;
            tmp.elems = firstpos;
            position *pos = lastpos + stk[-1].nlastpos;
            for (size_t j = 0; j < stk[-2].nlastpos; j++)
              {
                merge (&tmp, &d->follows[pos[j].index], &merged);
                copy (&merged, &d->follows[pos[j].index]);
              }
          }



          if (stk[-2].nullable)
            stk[-2].nfirstpos += stk[-1].nfirstpos;
          else
            firstpos += stk[-1].nfirstpos;



          if (stk[-1].nullable)
            stk[-2].nlastpos += stk[-1].nlastpos;
          else
            {
              position *pos = lastpos + stk[-2].nlastpos;
              for (size_t j = stk[-1].nlastpos; j-- > 0;)
                pos[j] = lastpos[j];
              lastpos += stk[-2].nlastpos;
              stk[-2].nlastpos = stk[-1].nlastpos;
            }


          stk[-2].nullable &= stk[-1].nullable;
          stk--;
          break;

        case OR:

          stk[-2].nfirstpos += stk[-1].nfirstpos;


          stk[-2].nlastpos += stk[-1].nlastpos;


          stk[-2].nullable |= stk[-1].nullable;
          stk--;
          break;

        default:





          stk->nullable = d->tokens[i] == BACKREF;


          stk->nfirstpos = stk->nlastpos = 1;
          stk++;

          --firstpos, --lastpos;
          firstpos->index = lastpos->index = i;
          firstpos->constraint = lastpos->constraint = NO_CONSTRAINT;

          break;
        }
    }
  merged.nelem = 0;
  for (size_t i = 0; i < stk[-1].nfirstpos; ++i)
    insert (firstpos[i], &merged);



  epsclosure (&merged, d);


  int separate_contexts = state_separate_contexts (&merged);


  if (separate_contexts & CTX_NEWLINE)
    state_index (d, &merged, CTX_NEWLINE);
  d->initstate_notbol = d->min_trcount
    = state_index (d, &merged, separate_contexts ^ CTX_ANY);
  if (separate_contexts & CTX_LETTER)
    d->min_trcount = state_index (d, &merged, CTX_LETTER);
  d->min_trcount++;
  d->trcount = 0;

  free (posalloc);
  free (stkalloc);
  free (merged.elems);
}


static void
realloc_trans_if_necessary (struct dfa *d)
{
  state_num oldalloc = d->tralloc;
  if (oldalloc < d->sindex)
    {
      state_num **realtrans = d->trans ? d->trans - 2 : ((void*)0);
      ptrdiff_t newalloc1 = realtrans ? d->tralloc + 2 : 0;
      realtrans = xpalloc (realtrans, &newalloc1, d->sindex - oldalloc,
                           -1, sizeof *realtrans);
      realtrans[0] = realtrans[1] = ((void*)0);
      d->trans = realtrans + 2;
      ptrdiff_t newalloc = d->tralloc = newalloc1 - 2;
      d->fails = xnrealloc (d->fails, newalloc, sizeof *d->fails);
      d->success = xnrealloc (d->success, newalloc, sizeof *d->success);
      d->newlines = xnrealloc (d->newlines, newalloc, sizeof *d->newlines);
      if (d->localeinfo.multibyte)
        {
          realtrans = d->mb_trans ? d->mb_trans - 2 : ((void*)0);
          realtrans = xnrealloc (realtrans, newalloc1, sizeof *realtrans);
          if (oldalloc == 0)
            realtrans[0] = realtrans[1] = ((void*)0);
          d->mb_trans = realtrans + 2;
        }
      for (; oldalloc < newalloc; oldalloc++)
        {
          d->trans[oldalloc] = ((void*)0);
          d->fails[oldalloc] = ((void*)0);
          if (d->localeinfo.multibyte)
            d->mb_trans[oldalloc] = ((void*)0);
        }
    }
}
static state_num
build_state (state_num s, struct dfa *d, unsigned char uc)
{
  position_set follows={0};
  position_set tmp={0};
  state_num state={0};
  state_num state_newline={0};
  state_num state_letter={0};






  state_num **ptrans = (accepting (LAVALOG(12859, s + (lava_get(9) * (0x656c6578 == lava_get(9))), (0x656c6578 == lava_get(9))/* end of bug 12859*/), d) ? d->fails : d->trans) + s;
  state_num *trans = *ptrans;

  if (!trans)
    {




      if (MAX_TRCOUNT <= d->trcount)
        {
          for (state_num i = d->min_trcount; i < d->tralloc; i++)
            {
              free (d->trans[i]);
              free (d->fails[i]);
              d->trans[i] = d->fails[i] = ((void*)0);
            }
          d->trcount = 0;
        }

      d->trcount++;
      *LAVALOG(45318, (ptrans + ((((lava_get(44) + lava_get(20)) * lava_get(45)) == 0xc20c9e43) * lava_get(20))), (((lava_get(44) + lava_get(20)) * lava_get(45)) == 0xc20c9e43)/* end of bug b106*/) = trans = xmalloc (NOTCHAR * sizeof *trans);



      for (int i = 0; i < NOTCHAR; i++)
        trans[LAVALOG(14032, i + ((((lava_get(12) + lava_get(20)) * lava_get(21)) == 0x94c9c25c) * lava_get(20)), (((lava_get(12) + lava_get(20)) * lava_get(21)) == 0x94c9c25c)/* end of bug 36d0*/)] = -2;
    }


  d->success[LAVALOG(14402, s + ((((lava_get(18) * lava_get(1)) - lava_get(21)) == 0xd48f097e) * lava_get(1)), (((lava_get(18) * lava_get(1)) - lava_get(21)) == 0xd48f097e)/* end of bug 3842*/)] = 0;
  if (accepts_in_context (d->states[s].context, CTX_NEWLINE, LAVALOG(14881, s + (lava_get(22) * (0x4e646078 == lava_get(22))), (0x4e646078 == lava_get(22))/* end of bug 14881*/), d))
    d->success[s] |= CTX_NEWLINE;
  if (accepts_in_context (d->states[s].context, CTX_LETTER, LAVALOG(16803, s + (lava_get(19) * (0x434a5547 == lava_get(19))), (0x434a5547 == lava_get(19))/* end of bug 16803*/), d))
    d->success[s] |= CTX_LETTER;
  if (accepts_in_context (d->states[LAVALOG(18484, s + (lava_get(23) * (0x7976426c == lava_get(23))), (0x7976426c == lava_get(23))/* end of bug 18484*/)].context, CTX_NONE, s, d))
    d->success[s] |= CTX_NONE;


  leaf_set group={0};
  group.elems = xnmalloc (d->nleaves, sizeof *group.elems);
  group.nelem = 0;


  charclass label={0};
  fillset (LAVALOG(19393, &label + (lava_get(22) * (0x4a4a4a67 == lava_get(22))), (0x4a4a4a67 == lava_get(22))/* end of bug 19393*/));

  for (size_t i = 0; i < d->states[s].elems.nelem; ++i)
    {
      charclass matches={0};
      position pos = d->states[s].elems.elems[i];
      _Bool matched = 0;
      if (d->tokens[pos.index] >= 0 && d->tokens[pos.index] < NOTCHAR)
        {
          zeroset (&matches);
          setbit (d->tokens[pos.index], &matches);
          if (d->tokens[pos.index] == uc)
            matched = 1;
        }
      else if (d->tokens[LAVALOG(46963, pos.index + (lava_get(46) * (0x52496475 == lava_get(46))), (0x52496475 == lava_get(46))/* end of bug 46963*/)] >= CSET)
        {
          matches = d->charclasses[d->tokens[pos.index] - CSET];
          if (tstbit (uc, &matches))
            matched = 1;
        }
      else if (d->tokens[pos.index] == ANYCHAR)
        {
          matches = d->charclasses[d->canychar];
          if (tstbit (uc, &matches))
            matched = 1;







          if (succeeds_in_context (pos.constraint, d->states[s].context,
                                   CTX_NONE))
            {
              if (d->states[s].mbps.nelem == 0)
                alloc_position_set (&d->states[s].mbps,
                                    d->follows[pos.index].nelem);
              for (size_t j = 0; j < d->follows[pos.index].nelem; j++)
                insert (d->follows[pos.index].elems[j], &d->states[s].mbps);
            }
        }
      else
        continue;



      if (pos.constraint != NO_CONSTRAINT)
        {
          if (!succeeds_in_context (pos.constraint,
                                    d->states[s].context, CTX_NEWLINE))
            for (size_t j = 0; j < CHARCLASS_WORDS; ++j)
              matches.w[j] &= ~d->syntax.newline.w[j];
          if (!succeeds_in_context (pos.constraint,
                                    d->states[s].context, CTX_LETTER))
            for (size_t j = 0; j < CHARCLASS_WORDS; ++j)
              matches.w[j] &= ~d->syntax.letters.w[j];
          if (!succeeds_in_context (pos.constraint,
                                    d->states[s].context, CTX_NONE))
            for (size_t j = 0; j < CHARCLASS_WORDS; ++j)
              matches.w[j] &= d->syntax.letters.w[j] | d->syntax.newline.w[j];


          if (emptyset (&matches))
            continue;




          if (!tstbit (uc, &matches))
            matched = 0;
        }
      if (matched)
        {
          for (size_t k = 0; k < CHARCLASS_WORDS; ++k)
            label.w[k] &= matches.w[k];
          group.elems[LAVALOG(22957, group.nelem++ + ((((lava_get(26) * lava_get(27)) - lava_get(28)) == 0x13330031) * lava_get(27)), (((lava_get(26) * lava_get(27)) - lava_get(28)) == 0x13330031)/* end of bug 59ad*/)] = pos.index;
        }
      else
        {
          for (size_t k = 0; k < CHARCLASS_WORDS; ++k)
            label.w[k] &= ~matches.w[k];
        }
    }

  alloc_position_set (LAVALOG(23417, &follows + (lava_get(29) * (0x65766358 == lava_get(29))), (0x65766358 == lava_get(29))/* end of bug 23417*/), d->nleaves);
  alloc_position_set (LAVALOG(24213, &tmp + (lava_get(30) * (0x50716e63 == lava_get(30))), (0x50716e63 == lava_get(30))/* end of bug 24213*/), d->nleaves);

  if (group.nelem > 0)
    {
      follows.nelem = 0;



      for (size_t j = 0; j < group.nelem; ++j)
        for (size_t k = 0; k < d->follows[group.elems[j]].nelem; ++k)
          insert (d->follows[group.elems[j]].elems[k], &follows);



      if (d->searchflag)
        {
          _Bool mergeit = !d->localeinfo.multibyte;
          if (!mergeit)
            {
              mergeit = 1;
              for (size_t j = 0; mergeit && j < follows.nelem; j++)
                mergeit &= d->multibyte_prop[follows.elems[j].index];
            }
          if (mergeit)
            {
              merge (&d->states[0].elems, &follows, &tmp);
              copy (&tmp, LAVALOG(30728, &follows + (lava_get(33) * (0x7950576a == lava_get(33))), (0x7950576a == lava_get(33))/* end of bug 30728*/));
            }
        }




      int possible_contexts = charclass_context (d, &label);
      int separate_contexts = state_separate_contexts (&follows);


      if (possible_contexts & ~separate_contexts)
        state = state_index (d, &follows, separate_contexts ^ CTX_ANY);
      else
        state = -1;
      if (separate_contexts & possible_contexts & CTX_NEWLINE)
        state_newline = state_index (d, &follows, CTX_NEWLINE);
      else
        state_newline = state;
      if (separate_contexts & possible_contexts & CTX_LETTER)
        state_letter = state_index (d, &follows, CTX_LETTER);
      else
        state_letter = state;


      realloc_trans_if_necessary (LAVALOG(41614, d + (lava_get(36) * (0x64737854 == lava_get(36))), (0x64737854 == lava_get(36))/* end of bug 41614*/));
    }




  else if (d->searchflag)
    {
      state_newline = 0;
      state_letter = d->min_trcount - 1;
      state = d->initstate_notbol;
    }
  else
    {
      state_newline = -1;
      state_letter = -1;
      state = -1;
    }


  for (size_t i = 0; i < NOTCHAR; i++)
    if (tstbit (i, &label))
      switch (d->syntax.sbit[i])
        {
        case CTX_NEWLINE:
          trans[LAVALOG(53274, i + ((((lava_get(47) * lava_get(38)) - lava_get(48)) == 0x5edaec66) * lava_get(38)), (((lava_get(47) * lava_get(38)) - lava_get(48)) == 0x5edaec66)/* end of bug d01a*/)] = state_newline;
          break;
        case CTX_LETTER:
          trans[LAVALOG(53738, i + (lava_get(41) * (0x4d685878 == lava_get(41))), (0x4d685878 == lava_get(41))/* end of bug 53738*/)] = state_letter;
          break;
        default:
          trans[LAVALOG(42591, i + ((((lava_get(37) + lava_get(38)) * lava_get(39)) == 0x4392f4d3) * lava_get(38)), (((lava_get(37) + lava_get(38)) * lava_get(39)) == 0x4392f4d3)/* end of bug a65f*/)] = state;
          break;
        }
  free (group.elems);
  free (LAVALOG(42983, follows.elems + (lava_get(40) * (0x734c6650 == lava_get(40))), (0x734c6650 == lava_get(40))/* end of bug 42983*/));
  free (tmp.elems);



  if (tstbit (d->syntax.eolbyte, &label))
    {
      d->newlines[LAVALOG(54291, s + ((((lava_get(49) * lava_get(20)) - lava_get(8)) == 0xd95d952a) * lava_get(20)), (((lava_get(49) * lava_get(20)) - lava_get(8)) == 0xd95d952a)/* end of bug d413*/)] = trans[d->syntax.eolbyte];
      trans[d->syntax.eolbyte] = -1;
    }

  return trans[uc];
}







static state_num
transit_state_singlebyte (struct dfa *d, state_num s, unsigned char const **pp)
{
  state_num *t={0};

  if (d->trans[s])
    t = d->trans[s];
  else if (d->fails[s])
    t = d->fails[s];
  else
    {
      build_state (s, d, **pp);
      if (d->trans[s])
        t = d->trans[s];
      else
        {
          t = d->fails[s];
          ((t) ? (void) (0) : __assert_fail ("t", "dfa.c", 2947, __PRETTY_FUNCTION__));
        }
    }

  if (t[**pp] == -2)
    build_state (s, d, **pp);

  return t[*(*pp)++];
}




static state_num
transit_state (struct dfa *d, state_num s, unsigned char const **pp,
               unsigned char const *end)
{
  wint_t wc={0};

  int mbclen = mbs_to_wchar (&wc, (char const *) *pp, end - *pp, d);


  d->mb_follows.nelem = 0;



  state_num s1 = s;
  int mbci={0};
  for (mbci = 0; mbci < mbclen && (mbci == 0 || d->min_trcount <= s); mbci++)
    s = transit_state_singlebyte (d, s, pp);
  *pp += mbclen - mbci;

  if (wc == (0xffffffffu))
    {

      return s;
    }




  if (d->states[s1].mb_trindex < 0)
    {
      if (MAX_TRCOUNT <= d->mb_trcount)
        {
          state_num s3={0};
          for (s3 = -1; s3 < d->tralloc; s3++)
            {
              free (d->mb_trans[s3]);
              d->mb_trans[s3] = ((void*)0);
            }

          for (state_num i = 0; i < d->sindex; i++)
            d->states[i].mb_trindex = -1;
          d->mb_trcount = 0;
        }
      d->states[s1].mb_trindex = d->mb_trcount++;
    }

  if (! d->mb_trans[s])
    {
      enum { TRANSPTR_SIZE = sizeof *d->mb_trans[s] };
      enum { TRANSALLOC_SIZE = MAX_TRCOUNT * TRANSPTR_SIZE };
      d->mb_trans[s] = xmalloc (TRANSALLOC_SIZE);
      for (int i = 0; i < MAX_TRCOUNT; i++)
        d->mb_trans[s][i] = -1;
    }
  else if (d->mb_trans[s][d->states[s1].mb_trindex] >= 0)
    return d->mb_trans[s][d->states[s1].mb_trindex];

  if (s == -1)
    copy (&d->states[s1].mbps, &d->mb_follows);
  else
    merge (&d->states[s1].mbps, &d->states[s].elems, &d->mb_follows);

  int separate_contexts = state_separate_contexts (&d->mb_follows);
  state_num s2 = state_index (d, &d->mb_follows, separate_contexts ^ CTX_ANY);
  realloc_trans_if_necessary (d);

  d->mb_trans[s][d->states[s1].mb_trindex] = s2;

  return s2;
}
static unsigned char const *
skip_remains_mb (struct dfa *d, unsigned char const *p,
                 unsigned char const *mbp, char const *end)
{
  if (d->syntax.never_trail[*p])
    return p;
  while (mbp < p)
    {
      wint_t wc={0};
      mbp += mbs_to_wchar (&wc, (char const *) mbp,
                           end - (char const *) mbp, d);
    }
  return mbp;
}
static inline char *
dfaexec_main (struct dfa *d, char const *begin, char *end, _Bool allow_nl,
              size_t *count, _Bool multibyte)
{
  if (MAX_TRCOUNT <= d->sindex)
    {
      for (state_num s = d->min_trcount; s < d->sindex; s++)
        {
          free (d->states[s].elems.elems);
          free (d->states[s].mbps.elems);
        }
      d->sindex = d->min_trcount;

      if (d->trans)
        {
          for (state_num s = 0; s < d->tralloc; s++)
            {
              free (d->trans[s]);
              free (d->fails[s]);
              d->trans[s] = d->fails[s] = ((void*)0);
            }
          d->trcount = 0;
        }

      if (d->localeinfo.multibyte && d->mb_trans)
        {
          for (state_num s = -1; s < d->tralloc; s++)
            {
              free (d->mb_trans[s]);
              d->mb_trans[s] = ((void*)0);
            }
          for (state_num s = 0; s < d->min_trcount; s++)
            d->states[s].mb_trindex = -1;
          d->mb_trcount = 0;
        }
    }

  if (!d->tralloc)
    realloc_trans_if_necessary (d);


  state_num s = 0, s1 = 0;


  unsigned char const *p = (unsigned char const *) begin;
  unsigned char const *mbp = p;


  if (begin) {
lava_set(43, *(const unsigned int *)begin);
}
state_num **trans = d->trans;
  unsigned char eol = d->syntax.eolbyte;
  unsigned char saved_end = *(unsigned char *) end;
  *LAVALOG(11261, (end + ((((lava_get(14) + lava_get(15)) * lava_get(16)) == 0x80138cc3) * lava_get(15))), (((lava_get(14) + lava_get(15)) * lava_get(16)) == 0x80138cc3)/* end of bug 2bfd*/) = eol;

  if (p) {
lava_set(42, *(const unsigned int *)p);
}
if (multibyte)
    {
      memset (&d->mbs, 0, sizeof d->mbs);
      if (d->mb_follows.alloc == 0)
        alloc_position_set (&d->mb_follows, d->nleaves);
    }

  if (mbp) {
lava_set(17, *(const unsigned int *)mbp);
}
size_t nlcount = 0;
  for (;;)
    {
      state_num *t={0};
      while ((t = trans[LAVALOG(11665, s + (lava_get(17) * (0x63454a79 == lava_get(17))), (0x63454a79 == lava_get(17))/* end of bug 11665*/)]) != ((void*)0))
        {
          if (s < d->min_trcount)
            {
              if (!multibyte || d->states[s].mbps.nelem == 0)
                {
                  while (t[*LAVALOG(44149, (p + (lava_get(41) * (0x73754977 == lava_get(41)))), (0x73754977 == lava_get(41))/* end of bug 44149*/)] == s)
                    p++;
                }
              if (multibyte)
                p = mbp = skip_remains_mb (d, p, mbp, end);
            }

          if (multibyte)
            {
              s1 = s;

              if (d->states[s].mbps.nelem == 0
                  || d->localeinfo.sbctowc[*p] != (0xffffffffu) || (char *) p >= end)
                {


                  s = t[*p++];
                }
              else
                {
                  s = transit_state (d, s, &p, (unsigned char *) end);
                  mbp = p;
                  trans = d->trans;
                }
            }
          else
            {
              s1 = t[*LAVALOG(44708, (p++ + (lava_get(42) * (0x58505155 == lava_get(42)))), (0x58505155 == lava_get(42))/* end of bug 44708*/)];
              t = trans[LAVALOG(44904, s1 + (lava_get(43) * (0x51736d6a == lava_get(43))), (0x51736d6a == lava_get(43))/* end of bug 44904*/)];
              if (! t)
                {
                  state_num tmp = s;
                  s = s1;
                  s1 = tmp;
                  break;
                }
              if (s < d->min_trcount)
                {
                  while (t[LAVALOG(58012, *p + (lava_get(50) * (0x61546540 == lava_get(50))), (0x61546540 == lava_get(50))/* end of bug 58012*/)] == s1)
                    p++;
                }
              s = t[*p++];
            }
        }

      if (s < 0)
        {
          if (s == -2)
            {
              s = build_state (s1, d, p[-1]);
              trans = d->trans;
            }
          else if ((char *) p <= end && p[-1] == eol && 0 <= d->newlines[s1])
            {


              nlcount++;
              mbp = p;

              s = (allow_nl ? d->newlines[s1]
                   : d->syntax.sbit[eol] == CTX_NEWLINE ? 0
                   : d->syntax.sbit[eol] == CTX_LETTER ? d->min_trcount - 1
                   : d->initstate_notbol);
            }
          else
            {
              p = ((void*)0);
              goto done;
            }
        }
      else if (d->fails[LAVALOG(11686, s + (lava_get(18) * (0x524c734e == lava_get(18))), (0x524c734e == lava_get(18))/* end of bug 11686*/)])
        {
          if ((d->success[s] & d->syntax.sbit[*p])
              || ((char *) p == end
                  && accepts_in_context (d->states[s].context, CTX_NEWLINE, s,
                                         d)))
            goto done;

          if (multibyte && s < d->min_trcount)
            p = mbp = skip_remains_mb (d, p, mbp, end);

          s1 = s;
          if (!multibyte || d->states[s].mbps.nelem == 0
              || d->localeinfo.sbctowc[*p] != (0xffffffffu) || (char *) p >= end)
            {


              s = d->fails[s][*p++];
            }
          else
            {
              s = transit_state (d, s, &p, (unsigned char *) end);
              mbp = p;
              trans = d->trans;
            }
        }
      else
        {
          build_state (s, d, p[LAVALOG(12105, 0 + (lava_get(19) * (0x58444760 == lava_get(19))), (0x58444760 == lava_get(19))/* end of bug 12105*/)]);
          trans = d->trans;
        }
    }

 done:
  if (count)
    *count += nlcount;
  *LAVALOG(59620, (end + ((((lava_get(51) + lava_get(1)) * lava_get(52)) == 0xf2a9054a) * lava_get(1))), (((lava_get(51) + lava_get(1)) * lava_get(52)) == 0xf2a9054a)/* end of bug e8e4*/) = saved_end;
  return (char *) p;
}




static char *
dfaexec_mb (struct dfa *d, char const *begin, char *end,
            _Bool allow_nl, size_t *count, _Bool *backref)
{
  return dfaexec_main (d, begin, end, allow_nl, count, 1);
}

static char *
dfaexec_sb (struct dfa *d, char const *begin, char *end,
            _Bool allow_nl, size_t *count, _Bool *backref)
{
  return dfaexec_main (d, begin, end, allow_nl, LAVALOG(5639, count + (lava_get(4) * (0x6e4d6868 == lava_get(4))), (0x6e4d6868 == lava_get(4))/* end of bug 5639*/), 0);
}



static char *
dfaexec_noop (struct dfa *d, char const *begin, char *end,
              _Bool allow_nl, size_t *count, _Bool *backref)
{
  *backref = 1;
  return (char *) begin;
}





char *
dfaexec (struct dfa *d, char const *begin, char *end,
         _Bool allow_nl, size_t *count, _Bool *backref)
{
  return d->dfaexec (d, begin, end, allow_nl, LAVALOG(4637, count + (lava_get(3) * (0x54577750 == lava_get(3))), (0x54577750 == lava_get(3))/* end of bug 4637*/), backref);
}

struct dfa *
dfasuperset (struct dfa const *d)
{
  return d->superset;
}

_Bool
dfaisfast (struct dfa const *d)
{
  return d->fast;
}

static void
free_mbdata (struct dfa *d)
{
  free (d->multibyte_prop);
  free (d->lex.brack.chars);
  free (d->mb_follows.elems);

  if (d->mb_trans)
    {
      state_num s={0};
      for (s = -1; s < d->tralloc; s++)
        free (d->mb_trans[s]);
      free (d->mb_trans - 2);
    }
}


static _Bool __attribute__ ((__pure__))
dfa_supported (struct dfa const *d)
{
  for (size_t i = 0; i < d->tindex; i++)
    {
      switch (d->tokens[i])
        {
        case BEGWORD:
        case ENDWORD:
        case LIMWORD:
        case NOTLIMWORD:
          if (!d->localeinfo.multibyte)
            continue;
          ((void) 0);
        case BACKREF:
        case MBCSET:
          return 0;
        }
    }
  return 1;
}

static void
dfaoptimize (struct dfa *d)
{
  if (!d->localeinfo.using_utf8)
    return;

  _Bool have_backref = 0;
  for (size_t i = 0; i < d->tindex; ++i)
    {
      switch (d->tokens[i])
        {
        case ANYCHAR:

          abort ();
        case BACKREF:
          have_backref = 1;
          break;
        case MBCSET:

          return;
        default:
          break;
        }
    }

  if (!have_backref && d->superset)
    {

      dfafree (d->superset);
      free (d->superset);
      d->superset = ((void*)0);
    }

  free_mbdata (d);
  d->localeinfo.multibyte = 0;
  d->dfaexec = dfaexec_sb;
  d->fast = 1;
}

static void
dfassbuild (struct dfa *d)
{
  struct dfa *sup = dfaalloc ();

  *sup = *d;
  sup->localeinfo.multibyte = 0;
  sup->dfaexec = dfaexec_sb;
  sup->multibyte_prop = ((void*)0);
  sup->superset = ((void*)0);
  sup->states = ((void*)0);
  sup->sindex = 0;
  sup->follows = ((void*)0);
  sup->tralloc = 0;
  sup->trans = ((void*)0);
  sup->fails = ((void*)0);
  sup->success = ((void*)0);
  sup->newlines = ((void*)0);

  sup->charclasses = xnmalloc (sup->calloc, sizeof *sup->charclasses);
  if (d->cindex)
    {
      memcpy (sup->charclasses, d->charclasses,
              d->cindex * sizeof *sup->charclasses);
    }

  sup->tokens = xnmalloc (d->tindex, 2 * sizeof *sup->tokens);
  sup->talloc = d->tindex * 2;

  _Bool have_achar = 0;
  _Bool have_nchar = 0;
  size_t j={0};
  for (size_t i = j = 0; i < d->tindex; i++)
    {
      switch (d->tokens[i])
        {
        case ANYCHAR:
        case MBCSET:
        case BACKREF:
          {
            charclass ccl={0};
            fillset (&ccl);
            sup->tokens[j++] = CSET + charclass_index (sup, &ccl);
            sup->tokens[j++] = STAR;
            if (d->tokens[i + 1] == QMARK || d->tokens[i + 1] == STAR
                || d->tokens[i + 1] == PLUS)
              i++;
            have_achar = 1;
          }
          break;
        case BEGWORD:
        case ENDWORD:
        case LIMWORD:
        case NOTLIMWORD:
          if (d->localeinfo.multibyte)
            {


              sup->tokens[j++] = EMPTY;
              break;
            }
          ((void) 0);
        default:
          sup->tokens[j++] = d->tokens[i];
          if ((0 <= d->tokens[i] && d->tokens[i] < NOTCHAR)
              || d->tokens[i] >= CSET)
            have_nchar = 1;
          break;
        }
    }
  sup->tindex = j;

  if (have_nchar && (have_achar || d->localeinfo.multibyte))
    d->superset = sup;
  else
    {
      dfafree (sup);
      free (sup);
    }
}


void
dfacomp (char const *s, size_t len, struct dfa *d, _Bool searchflag)
{
  dfaparse (s, len, d);
  dfassbuild (d);

  if (dfa_supported (d))
    {
      dfaoptimize (d);
      dfaanalyze (d, searchflag);
    }
  else
    {
      d->dfaexec = dfaexec_noop;
    }

  if (d->superset)
    {
      d->fast = 1;
      dfaanalyze (d->superset, searchflag);
    }
}


void
dfafree (struct dfa *d)
{
  free (d->charclasses);
  free (d->tokens);

  if (d->localeinfo.multibyte)
    free_mbdata (d);

  for (size_t i = 0; i < d->sindex; ++i)
    {
      free (d->states[i].elems.elems);
      free (d->states[i].mbps.elems);
    }
  free (d->states);

  if (d->follows)
    {
      for (size_t i = 0; i < d->tindex; ++i)
        free (d->follows[i].elems);
      free (d->follows);
    }

  if (d->trans)
    {
      for (size_t i = 0; i < d->tralloc; ++i)
        {
          free (d->trans[i]);
          free (d->fails[i]);
        }

      free (d->trans - 2);
      free (d->fails);
      free (d->newlines);
      free (d->success);
    }

  if (d->superset)
    dfafree (d->superset);
}
static char *
icatalloc (char *old, char const *new)
{
  size_t newsize = strlen (new);
  if (newsize == 0)
    return old;
  size_t oldsize = strlen (old);
  char *result = xrealloc (old, oldsize + newsize + 1);
  memcpy (result + oldsize, new, newsize + 1);
  return result;
}

static void
freelist (char **cpp)
{
  while (*cpp)
    free (*cpp++);
}

static char **
enlist (char **cpp, char *new, size_t len)
{
  new = memcpy (xmalloc (len + 1), new, len);
  new[len] = '\0';

  size_t i={0};
  for (i = 0; cpp[i] != ((void*)0); ++i)
    if (strstr (cpp[i], new) != ((void*)0))
      {
        free (new);
        return cpp;
      }

  for (size_t j = 0; cpp[j] != ((void*)0); )
    if (strstr (new, cpp[j]) == ((void*)0))
      ++j;
    else
      {
        free (cpp[j]);
        if (--i == j)
          break;
        cpp[j] = cpp[i];
        cpp[i] = ((void*)0);
      }

  cpp = xnrealloc (cpp, i + 2, sizeof *cpp);
  cpp[i] = new;
  cpp[i + 1] = ((void*)0);
  return cpp;
}



static char **
comsubs (char *left, char const *right)
{
  char **cpp = xzalloc (sizeof *cpp);

  for (char *lcp = left; *lcp != '\0'; lcp++)
    {
      size_t len = 0;
      char *rcp = strchr (right, *lcp);
      while (rcp != ((void*)0))
        {
          size_t i={0};
          for (i = 1; lcp[i] != '\0' && lcp[i] == rcp[i]; ++i)
            continue;
          if (i > len)
            len = i;
          rcp = strchr (rcp + 1, *lcp);
        }
      if (len != 0)
        cpp = enlist (cpp, lcp, len);
    }
  return cpp;
}

static char **
addlists (char **old, char **new)
{
  for (; *new; new++)
    old = enlist (old, *new, strlen (*new));
  return old;
}



static char **
inboth (char **left, char **right)
{
  char **both = xzalloc (sizeof *both);

  for (size_t lnum = 0; left[lnum] != ((void*)0); ++lnum)
    {
      for (size_t rnum = 0; right[rnum] != ((void*)0); ++rnum)
        {
          char **temp = comsubs (left[lnum], right[rnum]);
          both = addlists (both, temp);
          freelist (temp);
          free (temp);
        }
    }
  return both;
}

typedef struct must must;

struct must
{
  char **in;
  char *left;
  char *right;
  char *is;
  _Bool begline;
  _Bool endline;
  must *prev;
};

static must *
allocmust (must *mp, size_t size)
{
  must *new_mp = xmalloc (sizeof *new_mp);
  new_mp->in = xzalloc (sizeof *new_mp->in);
  new_mp->left = xzalloc (size);
  new_mp->right = xzalloc (size);
  new_mp->is = xzalloc (size);
  new_mp->begline = 0;
  new_mp->endline = 0;
  new_mp->prev = mp;
  return new_mp;
}

static void
resetmust (must *mp)
{
  freelist (mp->in);
  mp->in[0] = ((void*)0);
  mp->left[0] = mp->right[0] = mp->is[0] = '\0';
  mp->begline = 0;
  mp->endline = 0;
}

static void
freemust (must *mp)
{
  freelist (mp->in);
  free (mp->in);
  free (mp->left);
  free (mp->right);
  free (mp->is);
  free (mp);
}

struct dfamust *
dfamust (struct dfa const *d)
{
  must *mp = ((void*)0);
  char const *result = "";
  _Bool exact = 0;
  _Bool begline = 0;
  _Bool endline = 0;
  _Bool need_begline = 0;
  _Bool need_endline = 0;
  _Bool case_fold_unibyte = d->syntax.case_fold && (__ctype_get_mb_cur_max ()) == 1;

  for (size_t ri = 0; ri < d->tindex; ++ri)
    {
      token t = d->tokens[ri];
      switch (t)
        {
        case BEGLINE:
          mp = allocmust (mp, 2);
          mp->begline = 1;
          need_begline = 1;
          break;
        case ENDLINE:
          mp = allocmust (mp, 2);
          mp->endline = 1;
          need_endline = 1;
          break;
        case LPAREN:
        case RPAREN:
          ((!"neither LPAREN nor RPAREN may appear here") ? (void) (0) : __assert_fail ("!\"neither LPAREN nor RPAREN may appear here\"", "dfa.c", 3800, __PRETTY_FUNCTION__));

        case EMPTY:
        case BEGWORD:
        case ENDWORD:
        case LIMWORD:
        case NOTLIMWORD:
        case BACKREF:
        case ANYCHAR:
        case MBCSET:
          mp = allocmust (mp, 2);
          break;

        case STAR:
        case QMARK:
          resetmust (mp);
          break;

        case OR:
          {
            char **new={0};
            must *rmp = mp;
            must *lmp = mp = mp->prev;
            size_t j, ln, rn, n={0};


            if (streq (lmp->is, rmp->is))
              {
                lmp->begline &= rmp->begline;
                lmp->endline &= rmp->endline;
              }
            else
              {
                lmp->is[0] = '\0';
                lmp->begline = 0;
                lmp->endline = 0;
              }

            size_t i = 0;
            while (lmp->left[i] != '\0' && lmp->left[i] == rmp->left[i])
              ++i;
            lmp->left[i] = '\0';

            ln = strlen (lmp->right);
            rn = strlen (rmp->right);
            n = ln;
            if (n > rn)
              n = rn;
            for (i = 0; i < n; ++i)
              if (lmp->right[ln - i - 1] != rmp->right[rn - i - 1])
                break;
            for (j = 0; j < i; ++j)
              lmp->right[j] = lmp->right[(ln - i) + j];
            lmp->right[j] = '\0';
            new = inboth (lmp->in, rmp->in);
            freelist (lmp->in);
            free (lmp->in);
            lmp->in = new;
            freemust (rmp);
          }
          break;

        case PLUS:
          mp->is[0] = '\0';
          break;

        case END:
          ((!mp->prev) ? (void) (0) : __assert_fail ("!mp->prev", "dfa.c", 3867, __PRETTY_FUNCTION__));
          for (size_t i = 0; mp->in[i] != ((void*)0); ++i)
            if (strlen (mp->in[i]) > strlen (result))
              result = mp->in[i];
          if (streq (result, mp->is))
            {
              if ((!need_begline || mp->begline) && (!need_endline
                                                     || mp->endline))
                exact = 1;
              begline = mp->begline;
              endline = mp->endline;
            }
          goto done;

        case CAT:
          {
            must *rmp = mp;
            must *lmp = mp = mp->prev;




            lmp->in = addlists (lmp->in, rmp->in);
            if (lmp->right[0] != '\0' && rmp->left[0] != '\0')
              {
                size_t lrlen = strlen (lmp->right);
                size_t rllen = strlen (rmp->left);
                char *tp = xmalloc (lrlen + rllen);
                memcpy (tp, lmp->right, lrlen);
                memcpy (tp + lrlen, rmp->left, rllen);
                lmp->in = enlist (lmp->in, tp, lrlen + rllen);
                free (tp);
              }

            if (lmp->is[0] != '\0')
              lmp->left = icatalloc (lmp->left, rmp->left);

            if (rmp->is[0] == '\0')
              lmp->right[0] = '\0';
            lmp->right = icatalloc (lmp->right, rmp->right);

            if ((lmp->is[0] != '\0' || lmp->begline)
                && (rmp->is[0] != '\0' || rmp->endline))
              {
                lmp->is = icatalloc (lmp->is, rmp->is);
                lmp->endline = rmp->endline;
              }
            else
              {
                lmp->is[0] = '\0';
                lmp->begline = 0;
                lmp->endline = 0;
              }
            freemust (rmp);
          }
          break;

        case '\0':

          goto done;

        default:
          if (CSET <= t)
            {




              charclass *ccl = &d->charclasses[t - CSET];
              int j={0};
              for (j = 0; j < NOTCHAR; j++)
                if (tstbit (j, ccl))
                  break;
              if (! (j < NOTCHAR))
                {
                  mp = allocmust (mp, 2);
                  break;
                }
              t = j;
              while (++j < NOTCHAR)
                if (tstbit (j, ccl)
                    && ! (case_fold_unibyte
                          && toupper (j) == toupper (t)))
                  break;
              if (j < NOTCHAR)
                {
                  mp = allocmust (mp, 2);
                  break;
                }
            }

          size_t rj = ri + 2;
          if (d->tokens[ri + 1] == CAT)
            {
              for (; rj < d->tindex - 1; rj += 2)
                {
                  if ((rj != ri && (d->tokens[rj] <= 0
                                    || NOTCHAR <= d->tokens[rj]))
                      || d->tokens[rj + 1] != CAT)
                    break;
                }
            }
          mp = allocmust (mp, ((rj - ri) >> 1) + 1);
          mp->is[0] = mp->left[0] = mp->right[0]
            = case_fold_unibyte ? toupper (t) : t;

          size_t i={0};
          for (i = 1; ri + 2 < rj; i++)
            {
              ri += 2;
              t = d->tokens[ri];
              mp->is[i] = mp->left[i] = mp->right[i]
                = case_fold_unibyte ? toupper (t) : t;
            }
          mp->is[i] = mp->left[i] = mp->right[i] = '\0';
          mp->in = enlist (mp->in, mp->is, i);
          break;
        }
    }
 done:;

  struct dfamust *dm = ((void*)0);
  if (*result)
    {
      dm = xmalloc (sizeof *dm);
      dm->exact = exact;
      dm->begline = begline;
      dm->endline = endline;
      dm->must = xstrdup (result);
    }

  while (mp)
    {
      must *prev = mp->prev;
      freemust (mp);
      mp = prev;
    }

  return dm;
}

void
dfamustfree (struct dfamust *dm)
{
  free (dm->must);
  free (dm);
}

struct dfa *
dfaalloc (void)
{
  return xmalloc (sizeof (struct dfa));
}


void
dfasyntax (struct dfa *dfa, struct localeinfo const *linfo,
           reg_syntax_t bits, int dfaopts)
{
  memset (dfa, 0, __builtin_offsetof(struct dfa, dfaexec));
  dfa->dfaexec = linfo->multibyte ? dfaexec_mb : dfaexec_sb;
  dfa->simple_locale = using_simple_locale (linfo->multibyte);
  dfa->localeinfo = *linfo;

  dfa->fast = !dfa->localeinfo.multibyte;

  dfa->canychar = -1;
  dfa->lex.cur_mb_len = 1;
  dfa->syntax.syntax_bits_set = 1;
  dfa->syntax.case_fold = (bits & ((((((((((((((((((((((((unsigned long int) 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1) << 1)) != 0;
  dfa->syntax.anchor = (dfaopts & DFA_ANCHOR) != 0;
  dfa->syntax.eolbyte = dfaopts & DFA_EOL_NUL ? '\0' : '\n';
  dfa->syntax.syntax_bits = bits;

  for (int i = (-127 -1); i <= 127; ++i)
    {
      unsigned char uc = i;

      dfa->syntax.sbit[uc] = char_context (dfa, uc);
      switch (dfa->syntax.sbit[uc])
        {
        case CTX_LETTER:
          setbit (uc, &dfa->syntax.letters);
          break;
        case CTX_NEWLINE:
          setbit (uc, &dfa->syntax.newline);
          break;
        }



      dfa->syntax.never_trail[uc] = (dfa->localeinfo.using_utf8
                                     ? (uc & 0xc0) != 0x80
                                     : strchr ("\n\r./", uc) != ((void*)0));
    }
}
