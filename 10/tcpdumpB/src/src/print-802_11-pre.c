











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










extern int *__errno_location (void) ;








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
typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
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










typedef __gid_t gid_t;




typedef __uid_t uid_t;
typedef __useconds_t useconds_t;




typedef __pid_t pid_t;






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
typedef unsigned int uintptr_t;
__extension__
typedef long long int intmax_t;
__extension__
typedef unsigned long long int uintmax_t;








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
typedef __mode_t mode_t;




typedef __nlink_t nlink_t;
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







struct iovec
  {
    void *iov_base;
    size_t iov_len;
  };
extern ssize_t readv (int __fd, const struct iovec *__iovec, int __count)
  ;
extern ssize_t writev (int __fd, const struct iovec *__iovec, int __count)
  ;
extern ssize_t preadv (int __fd, const struct iovec *__iovec, int __count,
         __off_t __offset) ;
extern ssize_t pwritev (int __fd, const struct iovec *__iovec, int __count,
   __off_t __offset) ;


enum __socket_type
{
  SOCK_STREAM = 1,


  SOCK_DGRAM = 2,


  SOCK_RAW = 3,

  SOCK_RDM = 4,

  SOCK_SEQPACKET = 5,


  SOCK_DCCP = 6,

  SOCK_PACKET = 10,







  SOCK_CLOEXEC = 02000000,


  SOCK_NONBLOCK = 00004000


};
typedef unsigned short int sa_family_t;


struct sockaddr
  {
    sa_family_t sa_family;
    char sa_data[14];
  };
struct sockaddr_storage
  {
    sa_family_t ss_family;
    char __ss_padding[(128 - (sizeof (unsigned short int)) - sizeof (unsigned long int))];
    unsigned long int __ss_align;
  };



enum
  {
    MSG_OOB = 0x01,

    MSG_PEEK = 0x02,

    MSG_DONTROUTE = 0x04,






    MSG_CTRUNC = 0x08,

    MSG_PROXY = 0x10,

    MSG_TRUNC = 0x20,

    MSG_DONTWAIT = 0x40,

    MSG_EOR = 0x80,

    MSG_WAITALL = 0x100,

    MSG_FIN = 0x200,

    MSG_SYN = 0x400,

    MSG_CONFIRM = 0x800,

    MSG_RST = 0x1000,

    MSG_ERRQUEUE = 0x2000,

    MSG_NOSIGNAL = 0x4000,

    MSG_MORE = 0x8000,

    MSG_WAITFORONE = 0x10000,

    MSG_BATCH = 0x40000,

    MSG_FASTOPEN = 0x20000000,


    MSG_CMSG_CLOEXEC = 0x40000000



  };




struct msghdr
  {
    void *msg_name;
    socklen_t msg_namelen;

    struct iovec *msg_iov;
    size_t msg_iovlen;

    void *msg_control;
    size_t msg_controllen;




    int msg_flags;
  };


struct cmsghdr
  {
    size_t cmsg_len;




    int cmsg_level;
    int cmsg_type;

    __extension__ unsigned char __cmsg_data [];

  };
extern struct cmsghdr *__cmsg_nxthdr (struct msghdr *__mhdr,
          struct cmsghdr *__cmsg) ;
enum
  {
    SCM_RIGHTS = 0x01





  };



struct linger
  {
    int l_onoff;
    int l_linger;
  };




struct osockaddr
  {
    unsigned short int sa_family;
    unsigned char sa_data[14];
  };




enum
{
  SHUT_RD = 0,

  SHUT_WR,

  SHUT_RDWR

};
extern int socket (int __domain, int __type, int __protocol) ;





extern int socketpair (int __domain, int __type, int __protocol,
         int __fds[2]) ;


extern int bind (int __fd, const struct sockaddr * __addr, socklen_t __len)
     ;


extern int getsockname (int __fd, struct sockaddr *__restrict __addr,
   socklen_t *__restrict __len) ;
extern int connect (int __fd, const struct sockaddr * __addr, socklen_t __len);



extern int getpeername (int __fd, struct sockaddr *__restrict __addr,
   socklen_t *__restrict __len) ;






extern ssize_t send (int __fd, const void *__buf, size_t __n, int __flags);






extern ssize_t recv (int __fd, void *__buf, size_t __n, int __flags);






extern ssize_t sendto (int __fd, const void *__buf, size_t __n,
         int __flags, const struct sockaddr * __addr,
         socklen_t __addr_len);
extern ssize_t recvfrom (int __fd, void *__restrict __buf, size_t __n,
    int __flags, struct sockaddr *__restrict __addr,
    socklen_t *__restrict __addr_len);







extern ssize_t sendmsg (int __fd, const struct msghdr *__message,
   int __flags);
extern ssize_t recvmsg (int __fd, struct msghdr *__message, int __flags);
extern int getsockopt (int __fd, int __level, int __optname,
         void *__restrict __optval,
         socklen_t *__restrict __optlen) ;




extern int setsockopt (int __fd, int __level, int __optname,
         const void *__optval, socklen_t __optlen) ;





extern int listen (int __fd, int __n) ;
extern int accept (int __fd, struct sockaddr *__restrict __addr,
     socklen_t *__restrict __addr_len);
extern int shutdown (int __fd, int __how) ;




extern int sockatmark (int __fd) ;







extern int isfdtype (int __fd, int __fdtype) ;







typedef uint32_t in_addr_t;
struct in_addr
  {
    in_addr_t s_addr;
  };


struct ip_opts
  {
    struct in_addr ip_dst;
    char ip_opts[40];
  };


struct ip_mreqn
  {
    struct in_addr imr_multiaddr;
    struct in_addr imr_address;
    int imr_ifindex;
  };


struct in_pktinfo
  {
    int ipi_ifindex;
    struct in_addr ipi_spec_dst;
    struct in_addr ipi_addr;
  };


enum
  {
    IPPROTO_IP = 0,

    IPPROTO_ICMP = 1,

    IPPROTO_IGMP = 2,

    IPPROTO_IPIP = 4,

    IPPROTO_TCP = 6,

    IPPROTO_EGP = 8,

    IPPROTO_PUP = 12,

    IPPROTO_UDP = 17,

    IPPROTO_IDP = 22,

    IPPROTO_TP = 29,

    IPPROTO_DCCP = 33,

    IPPROTO_IPV6 = 41,

    IPPROTO_RSVP = 46,

    IPPROTO_GRE = 47,

    IPPROTO_ESP = 50,

    IPPROTO_AH = 51,

    IPPROTO_MTP = 92,

    IPPROTO_BEETPH = 94,

    IPPROTO_ENCAP = 98,

    IPPROTO_PIM = 103,

    IPPROTO_COMP = 108,

    IPPROTO_SCTP = 132,

    IPPROTO_UDPLITE = 136,

    IPPROTO_MPLS = 137,

    IPPROTO_RAW = 255,

    IPPROTO_MAX
  };





enum
  {
    IPPROTO_HOPOPTS = 0,

    IPPROTO_ROUTING = 43,

    IPPROTO_FRAGMENT = 44,

    IPPROTO_ICMPV6 = 58,

    IPPROTO_NONE = 59,

    IPPROTO_DSTOPTS = 60,

    IPPROTO_MH = 135

  };



typedef uint16_t in_port_t;


enum
  {
    IPPORT_ECHO = 7,
    IPPORT_DISCARD = 9,
    IPPORT_SYSTAT = 11,
    IPPORT_DAYTIME = 13,
    IPPORT_NETSTAT = 15,
    IPPORT_FTP = 21,
    IPPORT_TELNET = 23,
    IPPORT_SMTP = 25,
    IPPORT_TIMESERVER = 37,
    IPPORT_NAMESERVER = 42,
    IPPORT_WHOIS = 43,
    IPPORT_MTP = 57,

    IPPORT_TFTP = 69,
    IPPORT_RJE = 77,
    IPPORT_FINGER = 79,
    IPPORT_TTYLINK = 87,
    IPPORT_SUPDUP = 95,


    IPPORT_EXECSERVER = 512,
    IPPORT_LOGINSERVER = 513,
    IPPORT_CMDSERVER = 514,
    IPPORT_EFSSERVER = 520,


    IPPORT_BIFFUDP = 512,
    IPPORT_WHOSERVER = 513,
    IPPORT_ROUTESERVER = 520,


    IPPORT_RESERVED = 1024,


    IPPORT_USERRESERVED = 5000
  };
struct in6_addr
  {
    union
      {
 uint8_t __u6_addr8[16];

 uint16_t __u6_addr16[8];
 uint32_t __u6_addr32[4];

      } __in6_u;





  };


extern const struct in6_addr in6addr_any;
extern const struct in6_addr in6addr_loopback;
struct sockaddr_in
  {
    sa_family_t sin_family;
    in_port_t sin_port;
    struct in_addr sin_addr;


    unsigned char sin_zero[sizeof (struct sockaddr) -
      (sizeof (unsigned short int)) -
      sizeof (in_port_t) -
      sizeof (struct in_addr)];
  };



struct sockaddr_in6
  {
    sa_family_t sin6_family;
    in_port_t sin6_port;
    uint32_t sin6_flowinfo;
    struct in6_addr sin6_addr;
    uint32_t sin6_scope_id;
  };




struct ip_mreq
  {

    struct in_addr imr_multiaddr;


    struct in_addr imr_interface;
  };

struct ip_mreq_source
  {

    struct in_addr imr_multiaddr;


    struct in_addr imr_interface;


    struct in_addr imr_sourceaddr;
  };




struct ipv6_mreq
  {

    struct in6_addr ipv6mr_multiaddr;


    unsigned int ipv6mr_interface;
  };




struct group_req
  {

    uint32_t gr_interface;


    struct sockaddr_storage gr_group;
  };

struct group_source_req
  {

    uint32_t gsr_interface;


    struct sockaddr_storage gsr_group;


    struct sockaddr_storage gsr_source;
  };



struct ip_msfilter
  {

    struct in_addr imsf_multiaddr;


    struct in_addr imsf_interface;


    uint32_t imsf_fmode;


    uint32_t imsf_numsrc;

    struct in_addr imsf_slist[1];
  };





struct group_filter
  {

    uint32_t gf_interface;


    struct sockaddr_storage gf_group;


    uint32_t gf_fmode;


    uint32_t gf_numsrc;

    struct sockaddr_storage gf_slist[1];
};
extern uint32_t ntohl (uint32_t __netlong) ;
extern uint16_t ntohs (uint16_t __netshort)
     ;
extern uint32_t htonl (uint32_t __hostlong)
     ;
extern uint16_t htons (uint16_t __hostshort)
     ;




extern int bindresvport (int __sockfd, struct sockaddr_in *__sock_in) ;


extern int bindresvport6 (int __sockfd, struct sockaddr_in6 *__sock_in)
     ;








struct rpcent
{
  char *r_name;
  char **r_aliases;
  int r_number;
};

extern void setrpcent (int __stayopen) ;
extern void endrpcent (void) ;
extern struct rpcent *getrpcbyname (const char *__name) ;
extern struct rpcent *getrpcbynumber (int __number) ;
extern struct rpcent *getrpcent (void) ;


extern int getrpcbyname_r (const char *__name, struct rpcent *__result_buf,
      char *__buffer, size_t __buflen,
      struct rpcent **__result) ;

extern int getrpcbynumber_r (int __number, struct rpcent *__result_buf,
        char *__buffer, size_t __buflen,
        struct rpcent **__result) ;

extern int getrpcent_r (struct rpcent *__result_buf, char *__buffer,
   size_t __buflen, struct rpcent **__result) ;



struct netent
{
  char *n_name;
  char **n_aliases;
  int n_addrtype;
  uint32_t n_net;
};








extern int *__h_errno_location (void) ;
extern void herror (const char *__str) ;


extern const char *hstrerror (int __err_num) ;




struct hostent
{
  char *h_name;
  char **h_aliases;
  int h_addrtype;
  int h_length;
  char **h_addr_list;



};






extern void sethostent (int __stay_open);





extern void endhostent (void);






extern struct hostent *gethostent (void);






extern struct hostent *gethostbyaddr (const void *__addr, __socklen_t __len,
          int __type);





extern struct hostent *gethostbyname (const char *__name);
extern struct hostent *gethostbyname2 (const char *__name, int __af);
extern int gethostent_r (struct hostent *__restrict __result_buf,
    char *__restrict __buf, size_t __buflen,
    struct hostent **__restrict __result,
    int *__restrict __h_errnop);

extern int gethostbyaddr_r (const void *__restrict __addr, __socklen_t __len,
       int __type,
       struct hostent *__restrict __result_buf,
       char *__restrict __buf, size_t __buflen,
       struct hostent **__restrict __result,
       int *__restrict __h_errnop);

extern int gethostbyname_r (const char *__restrict __name,
       struct hostent *__restrict __result_buf,
       char *__restrict __buf, size_t __buflen,
       struct hostent **__restrict __result,
       int *__restrict __h_errnop);

extern int gethostbyname2_r (const char *__restrict __name, int __af,
        struct hostent *__restrict __result_buf,
        char *__restrict __buf, size_t __buflen,
        struct hostent **__restrict __result,
        int *__restrict __h_errnop);
extern void setnetent (int __stay_open);





extern void endnetent (void);






extern struct netent *getnetent (void);






extern struct netent *getnetbyaddr (uint32_t __net, int __type);





extern struct netent *getnetbyname (const char *__name);
extern int getnetent_r (struct netent *__restrict __result_buf,
   char *__restrict __buf, size_t __buflen,
   struct netent **__restrict __result,
   int *__restrict __h_errnop);

extern int getnetbyaddr_r (uint32_t __net, int __type,
      struct netent *__restrict __result_buf,
      char *__restrict __buf, size_t __buflen,
      struct netent **__restrict __result,
      int *__restrict __h_errnop);

extern int getnetbyname_r (const char *__restrict __name,
      struct netent *__restrict __result_buf,
      char *__restrict __buf, size_t __buflen,
      struct netent **__restrict __result,
      int *__restrict __h_errnop);




struct servent
{
  char *s_name;
  char **s_aliases;
  int s_port;
  char *s_proto;
};






extern void setservent (int __stay_open);





extern void endservent (void);






extern struct servent *getservent (void);






extern struct servent *getservbyname (const char *__name, const char *__proto);






extern struct servent *getservbyport (int __port, const char *__proto);
extern int getservent_r (struct servent *__restrict __result_buf,
    char *__restrict __buf, size_t __buflen,
    struct servent **__restrict __result);

extern int getservbyname_r (const char *__restrict __name,
       const char *__restrict __proto,
       struct servent *__restrict __result_buf,
       char *__restrict __buf, size_t __buflen,
       struct servent **__restrict __result);

extern int getservbyport_r (int __port, const char *__restrict __proto,
       struct servent *__restrict __result_buf,
       char *__restrict __buf, size_t __buflen,
       struct servent **__restrict __result);




struct protoent
{
  char *p_name;
  char **p_aliases;
  int p_proto;
};






extern void setprotoent (int __stay_open);





extern void endprotoent (void);






extern struct protoent *getprotoent (void);





extern struct protoent *getprotobyname (const char *__name);





extern struct protoent *getprotobynumber (int __proto);
extern int getprotoent_r (struct protoent *__restrict __result_buf,
     char *__restrict __buf, size_t __buflen,
     struct protoent **__restrict __result);

extern int getprotobyname_r (const char *__restrict __name,
        struct protoent *__restrict __result_buf,
        char *__restrict __buf, size_t __buflen,
        struct protoent **__restrict __result);

extern int getprotobynumber_r (int __proto,
          struct protoent *__restrict __result_buf,
          char *__restrict __buf, size_t __buflen,
          struct protoent **__restrict __result);
extern int setnetgrent (const char *__netgroup);







extern void endnetgrent (void);
extern int getnetgrent (char **__restrict __hostp,
   char **__restrict __userp,
   char **__restrict __domainp);
extern int innetgr (const char *__netgroup, const char *__host,
      const char *__user, const char *__domain);







extern int getnetgrent_r (char **__restrict __hostp,
     char **__restrict __userp,
     char **__restrict __domainp,
     char *__restrict __buffer, size_t __buflen);
extern int rcmd (char **__restrict __ahost, unsigned short int __rport,
   const char *__restrict __locuser,
   const char *__restrict __remuser,
   const char *__restrict __cmd, int *__restrict __fd2p);
extern int rcmd_af (char **__restrict __ahost, unsigned short int __rport,
      const char *__restrict __locuser,
      const char *__restrict __remuser,
      const char *__restrict __cmd, int *__restrict __fd2p,
      sa_family_t __af);
extern int rexec (char **__restrict __ahost, int __rport,
    const char *__restrict __name,
    const char *__restrict __pass,
    const char *__restrict __cmd, int *__restrict __fd2p);
extern int rexec_af (char **__restrict __ahost, int __rport,
       const char *__restrict __name,
       const char *__restrict __pass,
       const char *__restrict __cmd, int *__restrict __fd2p,
       sa_family_t __af);
extern int ruserok (const char *__rhost, int __suser,
      const char *__remuser, const char *__locuser);
extern int ruserok_af (const char *__rhost, int __suser,
         const char *__remuser, const char *__locuser,
         sa_family_t __af);
extern int iruserok (uint32_t __raddr, int __suser,
       const char *__remuser, const char *__locuser);
extern int iruserok_af (const void *__raddr, int __suser,
   const char *__remuser, const char *__locuser,
   sa_family_t __af);
extern int rresvport (int *__alport);
extern int rresvport_af (int *__alport, sa_family_t __af);






struct addrinfo
{
  int ai_flags;
  int ai_family;
  int ai_socktype;
  int ai_protocol;
  socklen_t ai_addrlen;
  struct sockaddr *ai_addr;
  char *ai_canonname;
  struct addrinfo *ai_next;
};
extern int getaddrinfo (const char *__restrict __name,
   const char *__restrict __service,
   const struct addrinfo *__restrict __req,
   struct addrinfo **__restrict __pai);


extern void freeaddrinfo (struct addrinfo *__ai) ;


extern const char *gai_strerror (int __ecode) ;





extern int getnameinfo (const struct sockaddr *__restrict __sa,
   socklen_t __salen, char *__restrict __host,
   socklen_t __hostlen, char *__restrict __serv,
   socklen_t __servlen, int __flags);


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







extern in_addr_t inet_addr (const char *__cp) ;


extern in_addr_t inet_lnaof (struct in_addr __in) ;



extern struct in_addr inet_makeaddr (in_addr_t __net, in_addr_t __host)
     ;


extern in_addr_t inet_netof (struct in_addr __in) ;



extern in_addr_t inet_network (const char *__cp) ;



extern char *inet_ntoa (struct in_addr __in) ;




extern int inet_pton (int __af, const char *__restrict __cp,
        void *__restrict __buf) ;




extern const char *inet_ntop (int __af, const void *__restrict __cp,
         char *__restrict __buf, socklen_t __len)
     ;






extern int inet_aton (const char *__cp, struct in_addr *__inp) ;



extern char *inet_neta (in_addr_t __net, char *__buf, size_t __len) ;




extern char *inet_net_ntop (int __af, const void *__cp, int __bits,
       char *__buf, size_t __len) ;




extern int inet_net_pton (int __af, const char *__cp,
     void *__buf, size_t __len) ;




extern unsigned int inet_nsap_addr (const char *__cp,
        unsigned char *__buf, int __len) ;



extern char *inet_nsap_ntoa (int __len, const unsigned char *__cp,
        char *__buf) ;



  
 static __inline__ unsigned long __ntohl (unsigned long x);
  static __inline__ unsigned short __ntohs (unsigned short x);






  static __inline__ unsigned long __ntohl (unsigned long x)
  {
    __asm__ ("xchgb %b0, %h0\n\t"
             "rorl  $16, %0\n\t"
             "xchgb %b0, %h0"
            : "=q" (x) : "0" (x));
    return (x);
  }

  static __inline__ unsigned short __ntohs (unsigned short x)
  {
    __asm__ ("xchgb %b0, %h0"
            : "=q" (x) : "0" (x));
    return (x);
  }
















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



typedef unsigned char nd_uint16_t[2];
typedef unsigned char nd_uint24_t[3];
typedef unsigned char nd_uint32_t[4];
typedef unsigned char nd_uint40_t[5];
typedef unsigned char nd_uint48_t[6];
typedef unsigned char nd_uint56_t[7];
typedef unsigned char nd_uint64_t[8];
typedef struct {
 unsigned char bytes[4];
} nd_ipv4;





typedef unsigned char nd_uint8_t;
typedef signed char nd_int8_t;




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

struct ip {
 nd_uint8_t ip_vhl;


 nd_uint8_t ip_tos;
 nd_uint16_t ip_len;
 nd_uint16_t ip_id;
 nd_uint16_t ip_off;



 nd_uint8_t ip_ttl;
 nd_uint8_t ip_p;
 nd_uint16_t ip_sum;
 nd_ipv4 ip_src,ip_dst;
};
struct ip_timestamp {
 nd_uint8_t ipt_code;
 nd_uint8_t ipt_len;
 nd_uint8_t ipt_ptr;
 nd_uint8_t ipt_oflwflg;


 union ipt_timestamp {
  nd_uint32_t ipt_time[1];
  struct ipt_ta {
   nd_ipv4 ipt_addr;
   nd_uint32_t ipt_time;
  } ipt_ta[1];
 } ipt_timestamp;
};
struct ip6_hdr {
 union {
  struct ip6_hdrctl {
   uint32_t ip6_un1_flow;
   uint16_t ip6_un1_plen;
   uint8_t ip6_un1_nxt;
   uint8_t ip6_un1_hlim;
  } ip6_un1;
  uint8_t ip6_un2_vfc;
 } ip6_ctlun;
 struct in6_addr ip6_src;
 struct in6_addr ip6_dst;
} ;
struct ip6_ext {
 uint8_t ip6e_nxt;
 uint8_t ip6e_len;
} ;


struct ip6_hbh {
 uint8_t ip6h_nxt;
 uint8_t ip6h_len;

} ;


struct ip6_dest {
 uint8_t ip6d_nxt;
 uint8_t ip6d_len;

} ;
struct ip6_rthdr {
 uint8_t ip6r_nxt;
 uint8_t ip6r_len;
 uint8_t ip6r_type;
 uint8_t ip6r_segleft;

} ;






struct ip6_rthdr0 {
 nd_uint8_t ip6r0_nxt;
 nd_uint8_t ip6r0_len;
 nd_uint8_t ip6r0_type;
 nd_uint8_t ip6r0_segleft;
 nd_uint32_t ip6r0_reserved;
 struct in6_addr ip6r0_addr[1];
};


struct ip6_frag {
 uint8_t ip6f_nxt;
 uint8_t ip6f_reserved;
 uint16_t ip6f_offlg;
 uint32_t ip6f_ident;
} ;

extern int32_t thiszone;

extern const char istr[];
extern size_t strlcat (char *, const char *, size_t);


extern size_t strlcpy (char *, const char *, size_t);
struct tok {
 u_int v;
 const char *s;
};

extern const char *tok2strbuf(const struct tok *, const char *, u_int,
         char *buf, size_t bufsize);


extern const char *tok2str(const struct tok *, const char *, u_int);
extern char *bittok2str(const struct tok *, const char *, u_int);
extern char *bittok2str_nosep(const struct tok *, const char *, u_int);


extern int nd_init(char *, size_t);

extern void nd_cleanup(void);


extern int nd_have_smi_support(void);

extern int nd_load_smi_module(const char *, char *, size_t);

extern int nd_smi_module_loaded;

extern const char *nd_smi_version_string(void);

typedef struct netdissect_options netdissect_options;



typedef u_int (*if_printer) (netdissect_options *, const struct pcap_pkthdr *, const u_char *);

struct netdissect_options {
  int ndo_bflag;
  int ndo_eflag;
  int ndo_fflag;
  int ndo_Kflag;
  int ndo_nflag;
  int ndo_Nflag;
  int ndo_qflag;
  int ndo_Sflag;
  int ndo_tflag;
  int ndo_uflag;
  int ndo_vflag;
  int ndo_xflag;
  int ndo_Xflag;
  int ndo_Aflag;


  int ndo_Hflag;
  int ndo_packet_number;
  int ndo_suppress_default_print;
  int ndo_tstamp_precision;
  const char *program_name;

  char *ndo_espsecret;
  struct sa_list *ndo_sa_list_head;
  struct sa_list *ndo_sa_default;

  char *ndo_sigsecret;

  int ndo_packettype;

  int ndo_snaplen;


  const u_char *ndo_packetp;
  const u_char *ndo_snapend;


  if_printer ndo_if_printer;


  void (*ndo_default_print)(netdissect_options *,
       const u_char *bp, u_int length);


  int (*ndo_printf)(netdissect_options *,
       const char *fmt, ...)

      

       ;

  void (*ndo_error)(netdissect_options *,
      const char *fmt, ...)

      


      

       ;

  void (*ndo_warning)(netdissect_options *,
        const char *fmt, ...)

      

       ;
};
extern void ts_print(netdissect_options *, const struct timeval *);
extern void signed_relts_print(netdissect_options *, int32_t);
extern void unsigned_relts_print(netdissect_options *, uint32_t);

extern void fn_print_char(netdissect_options *, u_char);
extern int fn_print(netdissect_options *, const u_char *, const u_char *);
extern u_int fn_printztn(netdissect_options *ndo, const u_char *, u_int, const u_char *);
extern int fn_printn(netdissect_options *, const u_char *, u_int, const u_char *);
extern int fn_printzp(netdissect_options *, const u_char *, u_int, const u_char *);






extern void txtproto_print(netdissect_options *, const u_char *, u_int,
    const char *, const char **, u_int);
extern void safeputchar(netdissect_options *, const u_char);
extern void safeputs(netdissect_options *, const u_char *, const u_int);
extern const char *tok2strary_internal(const char **, int, const char *, int);


extern if_printer lookup_printer(int);



extern u_int ap1394_if_print (netdissect_options *, const struct pcap_pkthdr *, const u_char *);
extern u_int arcnet_if_print (netdissect_options *, const struct pcap_pkthdr *, const u_char *);
extern u_int arcnet_linux_if_print (netdissect_options *, const struct pcap_pkthdr *, const u_char *);
extern u_int atm_if_print (netdissect_options *, const struct pcap_pkthdr *, const u_char *);
extern u_int bt_if_print (netdissect_options *, const struct pcap_pkthdr *, const u_char *);
extern u_int chdlc_if_print (netdissect_options *, const struct pcap_pkthdr *, const u_char *);
extern u_int cip_if_print (netdissect_options *, const struct pcap_pkthdr *, const u_char *);
extern u_int enc_if_print (netdissect_options *, const struct pcap_pkthdr *, const u_char *);
extern u_int ether_if_print (netdissect_options *, const struct pcap_pkthdr *, const u_char *);
extern u_int fddi_if_print (netdissect_options *, const struct pcap_pkthdr *, const u_char *);
extern u_int fr_if_print (netdissect_options *, const struct pcap_pkthdr *, const u_char *);
extern u_int ieee802_11_if_print (netdissect_options *, const struct pcap_pkthdr *, const u_char *);
extern u_int ieee802_11_radio_avs_if_print (netdissect_options *, const struct pcap_pkthdr *, const u_char *);
extern u_int ieee802_11_radio_if_print (netdissect_options *, const struct pcap_pkthdr *, const u_char *);
extern u_int ieee802_15_4_if_print (netdissect_options *, const struct pcap_pkthdr *, const u_char *);
extern u_int ipfc_if_print (netdissect_options *, const struct pcap_pkthdr *, const u_char *);
extern u_int ipnet_if_print (netdissect_options *, const struct pcap_pkthdr *, const u_char *);
extern u_int juniper_atm1_print (netdissect_options *, const struct pcap_pkthdr *, const u_char *);
extern u_int juniper_atm2_print (netdissect_options *, const struct pcap_pkthdr *, const u_char *);
extern u_int juniper_chdlc_print (netdissect_options *, const struct pcap_pkthdr *, const u_char *);
extern u_int juniper_es_print (netdissect_options *, const struct pcap_pkthdr *, const u_char *);
extern u_int juniper_ether_print (netdissect_options *, const struct pcap_pkthdr *, const u_char *);
extern u_int juniper_frelay_print (netdissect_options *, const struct pcap_pkthdr *, const u_char *);
extern u_int juniper_ggsn_print (netdissect_options *, const struct pcap_pkthdr *, const u_char *);
extern u_int juniper_mfr_print (netdissect_options *, const struct pcap_pkthdr *, const u_char *);
extern u_int juniper_mlfr_print (netdissect_options *, const struct pcap_pkthdr *, const u_char *);
extern u_int juniper_mlppp_print (netdissect_options *, const struct pcap_pkthdr *, const u_char *);
extern u_int juniper_monitor_print (netdissect_options *, const struct pcap_pkthdr *, const u_char *);
extern u_int juniper_ppp_print (netdissect_options *, const struct pcap_pkthdr *, const u_char *);
extern u_int juniper_pppoe_atm_print (netdissect_options *, const struct pcap_pkthdr *, const u_char *);
extern u_int juniper_pppoe_print (netdissect_options *, const struct pcap_pkthdr *, const u_char *);
extern u_int juniper_services_print (netdissect_options *, const struct pcap_pkthdr *, const u_char *);
extern u_int lane_if_print (netdissect_options *, const struct pcap_pkthdr *, const u_char *);
extern u_int ltalk_if_print (netdissect_options *, const struct pcap_pkthdr *, const u_char *);
extern u_int mfr_if_print (netdissect_options *, const struct pcap_pkthdr *, const u_char *);
extern u_int netanalyzer_if_print (netdissect_options *, const struct pcap_pkthdr *, const u_char *);
extern u_int netanalyzer_transparent_if_print (netdissect_options *, const struct pcap_pkthdr *, const u_char *);
extern u_int nflog_if_print (netdissect_options *, const struct pcap_pkthdr *, const u_char *);
extern u_int null_if_print (netdissect_options *, const struct pcap_pkthdr *, const u_char *);
extern u_int pflog_if_print (netdissect_options *, const struct pcap_pkthdr *, const u_char *);
extern u_int pktap_if_print (netdissect_options *, const struct pcap_pkthdr *, const u_char *);
extern u_int ppi_if_print (netdissect_options *, const struct pcap_pkthdr *, const u_char *);
extern u_int ppp_bsdos_if_print (netdissect_options *, const struct pcap_pkthdr *, const u_char *);
extern u_int ppp_hdlc_if_print (netdissect_options *, const struct pcap_pkthdr *, const u_char *);
extern u_int ppp_if_print (netdissect_options *, const struct pcap_pkthdr *, const u_char *);
extern u_int pppoe_if_print (netdissect_options *, const struct pcap_pkthdr *, const u_char *);
extern u_int prism_if_print (netdissect_options *, const struct pcap_pkthdr *, const u_char *);
extern u_int raw_if_print (netdissect_options *, const struct pcap_pkthdr *, const u_char *);
extern u_int sl_bsdos_if_print (netdissect_options *, const struct pcap_pkthdr *, const u_char *);
extern u_int sl_if_print (netdissect_options *, const struct pcap_pkthdr *, const u_char *);
extern u_int sll_if_print (netdissect_options *, const struct pcap_pkthdr *, const u_char *);
extern u_int sunatm_if_print (netdissect_options *, const struct pcap_pkthdr *, const u_char *);
extern u_int symantec_if_print (netdissect_options *, const struct pcap_pkthdr *, const u_char *);
extern u_int token_if_print (netdissect_options *, const struct pcap_pkthdr *, const u_char *);
extern u_int usb_linux_48_byte_print (netdissect_options *, const struct pcap_pkthdr *, const u_char *);
extern u_int usb_linux_64_byte_print (netdissect_options *, const struct pcap_pkthdr *, const u_char *);
struct lladdr_info {
 const char *(*addr_string)(netdissect_options *, const u_char *);
 const u_char *addr;
};



extern void aarp_print(netdissect_options *, const u_char *, u_int);
extern int ah_print(netdissect_options *, const u_char *);
extern void ahcp_print(netdissect_options *, const u_char *, const u_int);
extern void aodv_print(netdissect_options *, const u_char *, u_int, int);
extern void aoe_print(netdissect_options *, const u_char *, const u_int);
extern void arp_print(netdissect_options *, const u_char *, u_int, u_int);
extern void ascii_print(netdissect_options *, const u_char *, u_int);
extern void atalk_print(netdissect_options *, const u_char *, u_int);
extern void atm_print(netdissect_options *, u_int, u_int, u_int, const u_char *, u_int, u_int);
extern void babel_print(netdissect_options *, const u_char *, u_int);
extern void beep_print(netdissect_options *, const u_char *, u_int);
extern void bfd_print(netdissect_options *, const u_char *, u_int, u_int);
extern void bgp_print(netdissect_options *, const u_char *, int);
extern char *bgp_vpn_rd_print (netdissect_options *, const u_char *);
extern void bootp_print(netdissect_options *, const u_char *, u_int);
extern void calm_fast_print(netdissect_options *, const u_char *, u_int, const struct lladdr_info *);
extern void carp_print(netdissect_options *, const u_char *, u_int, int);
extern void cdp_print(netdissect_options *, const u_char *, u_int, u_int);
extern void cfm_print(netdissect_options *, const u_char *, u_int);
extern u_int chdlc_print(netdissect_options *, const u_char *, u_int);
extern void cisco_autorp_print(netdissect_options *, const u_char *, u_int);
extern void cnfp_print(netdissect_options *, const u_char *);
extern void dccp_print(netdissect_options *, const u_char *, const u_char *, u_int);
extern void decnet_print(netdissect_options *, const u_char *, u_int, u_int);
extern void dhcp6_print(netdissect_options *, const u_char *, u_int);
extern int dstopt_print(netdissect_options *, const u_char *);
extern void dtp_print(netdissect_options *, const u_char *, u_int);
extern void dvmrp_print(netdissect_options *, const u_char *, u_int);
extern void eap_print(netdissect_options *, const u_char *, u_int);
extern void egp_print(netdissect_options *, const u_char *, u_int);
extern void eigrp_print(netdissect_options *, const u_char *, u_int);
extern int esp_print(netdissect_options *, const u_char *, const int, const u_char *, int *, int *);
extern u_int ether_print(netdissect_options *, const u_char *, u_int, u_int, void (*)(netdissect_options *, const u_char *), const u_char *);
extern int ethertype_print(netdissect_options *, u_short, const u_char *, u_int, u_int, const struct lladdr_info *, const struct lladdr_info *);
extern u_int fddi_print(netdissect_options *, const u_char *, u_int, u_int);
extern void forces_print(netdissect_options *, const u_char *, u_int);
extern u_int fr_print(netdissect_options *, const u_char *, u_int);
extern int frag6_print(netdissect_options *, const u_char *, const u_char *);
extern void ftp_print(netdissect_options *, const u_char *, u_int);
extern void geneve_print(netdissect_options *, const u_char *, u_int);
extern void geonet_print(netdissect_options *, const u_char *, u_int, const struct lladdr_info *);
extern void gre_print(netdissect_options *, const u_char *, u_int);
extern int hbhopt_print(netdissect_options *, const u_char *);
extern void hex_and_ascii_print(netdissect_options *, const char *, const u_char *, u_int);
extern void hex_and_ascii_print_with_offset(netdissect_options *, const char *, const u_char *, u_int, u_int);
extern void hex_print(netdissect_options *, const char *ident, const u_char *cp, u_int);
extern void hex_print_with_offset(netdissect_options *, const char *ident, const u_char *cp, u_int, u_int);
extern void hncp_print(netdissect_options *, const u_char *, u_int);
extern void hsrp_print(netdissect_options *, const u_char *, u_int);
extern void http_print(netdissect_options *, const u_char *, u_int);
extern void icmp6_print(netdissect_options *, const u_char *, u_int, const u_char *, int);
extern void icmp_print(netdissect_options *, const u_char *, u_int, const u_char *, int);
extern void igmp_print(netdissect_options *, const u_char *, u_int);
extern void igrp_print(netdissect_options *, const u_char *, u_int);
extern void ip6_print(netdissect_options *, const u_char *, u_int);
extern void ipN_print(netdissect_options *, const u_char *, u_int);
extern void ip_print(netdissect_options *, const u_char *, u_int);
extern void ip_print_inner(netdissect_options *, const u_char *, u_int, u_int nh, const u_char *);
extern void ipcomp_print(netdissect_options *, const u_char *);
extern void ipx_netbios_print(netdissect_options *, const u_char *, u_int);
extern void ipx_print(netdissect_options *, const u_char *, u_int);
extern void isakmp_print(netdissect_options *, const u_char *, u_int, const u_char *);
extern void isakmp_rfc3948_print(netdissect_options *, const u_char *, u_int, const u_char *);
extern void isoclns_print(netdissect_options *, const u_char *, u_int);
extern void krb_print(netdissect_options *, const u_char *);
extern void l2tp_print(netdissect_options *, const u_char *, u_int);
extern void lane_print(netdissect_options *, const u_char *, u_int, u_int);
extern void ldp_print(netdissect_options *, const u_char *, u_int);
extern void lisp_print(netdissect_options *, const u_char *, u_int);
extern u_int llap_print(netdissect_options *, const u_char *, u_int);
extern int llc_print(netdissect_options *, const u_char *, u_int, u_int, const struct lladdr_info *, const struct lladdr_info *);
extern void lldp_print(netdissect_options *, const u_char *, u_int);
extern void lmp_print(netdissect_options *, const u_char *, u_int);
extern void loopback_print(netdissect_options *, const u_char *, const u_int);
extern void lspping_print(netdissect_options *, const u_char *, u_int);
extern void lwapp_control_print(netdissect_options *, const u_char *, u_int, int);
extern void lwapp_data_print(netdissect_options *, const u_char *, u_int);
extern void lwres_print(netdissect_options *, const u_char *, u_int);
extern void m3ua_print(netdissect_options *, const u_char *, const u_int);
extern void medsa_print(netdissect_options *, const u_char *, u_int, u_int, const struct lladdr_info *, const struct lladdr_info *);
extern u_int mfr_print(netdissect_options *, const u_char *, u_int);
extern void mobile_print(netdissect_options *, const u_char *, u_int);
extern int mobility_print(netdissect_options *, const u_char *, const u_char *);
extern void mpcp_print(netdissect_options *, const u_char *, u_int);
extern void mpls_print(netdissect_options *, const u_char *, u_int);
extern int mptcp_print(netdissect_options *, const u_char *, u_int, u_char);
extern void msdp_print(netdissect_options *, const u_char *, u_int);
extern void msnlb_print(netdissect_options *, const u_char *);
extern void nbt_tcp_print(netdissect_options *, const u_char *, int);
extern void nbt_udp137_print(netdissect_options *, const u_char *, int);
extern void nbt_udp138_print(netdissect_options *, const u_char *, int);
extern void netbeui_print(netdissect_options *, u_short, const u_char *, int);
extern void nfsreply_print(netdissect_options *, const u_char *, u_int, const u_char *);
extern void nfsreply_print_noaddr(netdissect_options *, const u_char *, u_int, const u_char *);
extern void nfsreq_print_noaddr(netdissect_options *, const u_char *, u_int, const u_char *);
extern const u_char * ns_nprint (netdissect_options *, const u_char *, const u_char *);
extern void ns_print(netdissect_options *, const u_char *, u_int, int);
extern void nsh_print(netdissect_options *ndo, const u_char *bp, u_int len);
extern void ntp_print(netdissect_options *, const u_char *, u_int);
extern void oam_print(netdissect_options *, const u_char *, u_int, u_int);
extern void olsr_print(netdissect_options *, const u_char *, u_int, int);
extern void openflow_print(netdissect_options *, const u_char *, const u_int);
extern void ospf6_print(netdissect_options *, const u_char *, u_int);
extern void ospf_print(netdissect_options *, const u_char *, u_int, const u_char *);
extern int ospf_print_grace_lsa(netdissect_options *, const uint8_t *, u_int);
extern int ospf_print_te_lsa(netdissect_options *, const uint8_t *, u_int);
extern void otv_print(netdissect_options *, const u_char *, u_int);
extern void pgm_print(netdissect_options *, const u_char *, u_int, const u_char *);
extern void pim_print(netdissect_options *, const u_char *, u_int, const u_char *);
extern void pimv1_print(netdissect_options *, const u_char *, u_int);
extern u_int ppp_print(netdissect_options *, const u_char *, u_int);
extern u_int pppoe_print(netdissect_options *, const u_char *, u_int);
extern void pptp_print(netdissect_options *, const u_char *);
extern int print_unknown_data(netdissect_options *, const u_char *, const char *, int);
extern char *q922_string(netdissect_options *, const u_char *, u_int);
extern void q933_print(netdissect_options *, const u_char *, u_int);
extern void radius_print(netdissect_options *, const u_char *, u_int);
extern void resp_print(netdissect_options *, const u_char *, u_int);
extern void rip_print(netdissect_options *, const u_char *, u_int);
extern void ripng_print(netdissect_options *, const u_char *, unsigned int);
extern void rpki_rtr_print(netdissect_options *, const u_char *, u_int);
extern void rrcp_print(netdissect_options *, const u_char *, u_int, const struct lladdr_info *, const struct lladdr_info *);
extern void rsvp_print(netdissect_options *, const u_char *, u_int);
extern int rt6_print(netdissect_options *, const u_char *, const u_char *);
extern void rtsp_print(netdissect_options *, const u_char *, u_int);
extern void rx_print(netdissect_options *, const u_char *, int, int, int, const u_char *);
extern void sctp_print(netdissect_options *, const u_char *, const u_char *, u_int);
extern void sflow_print(netdissect_options *, const u_char *, u_int);
extern void sip_print(netdissect_options *, const u_char *, u_int);
extern void slow_print(netdissect_options *, const u_char *, u_int);
extern void smb_print_data(netdissect_options *, const unsigned char *, int);
extern void smb_tcp_print(netdissect_options *, const u_char *, int);
extern void smtp_print(netdissect_options *, const u_char *, u_int);
extern int snap_print(netdissect_options *, const u_char *, u_int, u_int, const struct lladdr_info *, const struct lladdr_info *, u_int);
extern void snmp_print(netdissect_options *, const u_char *, u_int);
extern void stp_print(netdissect_options *, const u_char *, u_int);
extern void sunrpcrequest_print(netdissect_options *, const u_char *, u_int, const u_char *);
extern void syslog_print(netdissect_options *, const u_char *, u_int);
extern void tcp_print(netdissect_options *, const u_char *, u_int, const u_char *, int);
extern void telnet_print(netdissect_options *, const u_char *, u_int);
extern void tftp_print(netdissect_options *, const u_char *, u_int);
extern void timed_print(netdissect_options *, const u_char *);
extern void tipc_print(netdissect_options *, const u_char *, u_int, u_int);
extern u_int token_print(netdissect_options *, const u_char *, u_int, u_int);
extern void udld_print(netdissect_options *, const u_char *, u_int);
extern void udp_print(netdissect_options *, const u_char *, u_int, const u_char *, int);
extern int vjc_print(netdissect_options *, const char *, u_short);
extern void vqp_print(netdissect_options *, const u_char *, u_int);
extern void vrrp_print(netdissect_options *, const u_char *, u_int, const u_char *, int);
extern void vtp_print(netdissect_options *, const u_char *, u_int);
extern void vxlan_gpe_print(netdissect_options *ndo, const u_char *bp, u_int len);
extern void vxlan_print(netdissect_options *, const u_char *, u_int);
extern void wb_print(netdissect_options *, const void *, u_int);
extern void zephyr_print(netdissect_options *, const u_char *, int);
extern void zmtp1_print(netdissect_options *, const u_char *, u_int);
extern void zmtp1_print_datagram(netdissect_options *, const u_char *, const u_int);


extern void init_checksum(void);
extern uint16_t verify_crc10_cksum(uint16_t, const u_char *, int);
extern uint16_t create_osi_cksum(const uint8_t *, int, int);

struct cksum_vec {
 const uint8_t *ptr;
 int len;
};
extern uint16_t in_cksum(const struct cksum_vec *, int);
extern uint16_t in_cksum_shouldbe(uint16_t, uint16_t);

extern int nextproto4_cksum(netdissect_options *, const struct ip *, const uint8_t *, u_int, u_int, u_int);


extern int nextproto6_cksum(netdissect_options *, const struct ip6_hdr *, const uint8_t *, u_int, u_int, u_int);


extern int mask2plen(uint32_t);
extern int mask62plen(const u_char *);

extern const char *dnname_string(netdissect_options *, u_short);
extern const char *dnnum_string(netdissect_options *, u_short);

extern char *smb_errstr(int, int);
extern const char *nt_errstr(uint32_t);

extern int decode_prefix4(netdissect_options *, const u_char *, u_int, char *, u_int);
extern int decode_prefix6(netdissect_options *, const u_char *, u_int, char *, u_int);

extern void esp_print_decodesecret(netdissect_options *);
extern int esp_print_decrypt_buffer_by_ikev2(netdissect_options *, int,
          u_char spii[8], u_char spir[8],
          const u_char *, const u_char *);
enum {
    LINKADDR_ETHER,
    LINKADDR_FRELAY,
    LINKADDR_IEEE1394,
    LINKADDR_ATM,
    LINKADDR_OTHER
};



extern const char *linkaddr_string(netdissect_options *, const u_char *, const unsigned int, const unsigned int);
extern const char *etheraddr_string(netdissect_options *, const u_char *);
extern const char *le64addr_string(netdissect_options *, const u_char *);
extern const char *etherproto_string(netdissect_options *, u_short);
extern const char *tcpport_string(netdissect_options *, u_short);
extern const char *udpport_string(netdissect_options *, u_short);
extern const char *isonsap_string(netdissect_options *, const u_char *, u_int);
extern const char *dnaddr_string(netdissect_options *, u_short);
extern const char *protoid_string(netdissect_options *, const u_char *);
extern const char *ipxsap_string(netdissect_options *, u_short);
extern const char *getname(netdissect_options *, const u_char *);
extern const char *getname6(netdissect_options *, const u_char *);
extern const char *intoa(uint32_t);

extern void init_addrtoname(netdissect_options *, uint32_t, uint32_t);
extern struct hnamemem *newhnamemem(netdissect_options *);
extern struct h6namemem *newh6namemem(netdissect_options *);
extern const char * ieee8021q_tci_string(const uint16_t);

static inline uint16_t
EXTRACT_16BITS(const void *p)
{
 return ((uint16_t)__ntohs(*(const uint16_t *)(p)));
}

static inline uint32_t
EXTRACT_32BITS(const void *p)
{
 return ((uint32_t)__ntohl(*(const uint32_t *)(p)));
}

static inline uint64_t
EXTRACT_64BITS(const void *p)
{
 return ((uint64_t)(((uint64_t)__ntohl(*((const uint32_t *)(p) + 0))) << 32 |
  ((uint64_t)__ntohl(*((const uint32_t *)(p) + 1))) << 0));

}

struct cpack_state {
 const uint8_t *c_buf;
 const uint8_t *c_next;
 size_t c_len;
};

int cpack_init(struct cpack_state *, const uint8_t *, size_t);

int cpack_uint8(struct cpack_state *, uint8_t *);
int cpack_uint16(struct cpack_state *, uint16_t *);
int cpack_uint32(struct cpack_state *, uint32_t *);
int cpack_uint64(struct cpack_state *, uint64_t *);

const uint8_t *cpack_next_boundary(const uint8_t *buf, const uint8_t *p, size_t alignment);
const uint8_t *cpack_align_and_reserve(struct cpack_state *cs, size_t wordsize);






extern int cpack_advance(struct cpack_state *, const size_t);
static const struct tok st_str[] = {
 { 0x0, "Assoc Request" },
 { 0x1, "Assoc Response" },
 { 0x2, "ReAssoc Request" },
 { 0x3, "ReAssoc Response" },
 { 0x4, "Probe Request" },
 { 0x5, "Probe Response" },
 { 0x8, "Beacon" },
 { 0x9, "ATIM" },
 { 0xA, "Disassociation" },
 { 0xB, "Authentication" },
 { 0xC, "DeAuthentication" },
 { 0xD, "Action" },
 { 0, 
     ((void *)0) 
          }
};
static const struct tok ctrl_str[] = {
 { 0x7, "Control Wrapper" },
 { 0x8, "BAR" },
 { 0x9, "BA" },
 { 0xA, "Power Save-Poll" },
 { 0xB, "Request-To-Send" },
 { 0xC, "Clear-To-Send" },
 { 0xD, "Acknowledgment" },
 { 0xE, "CF-End" },
 { 0xF, "CF-End+CF-Ack" },
 { 0, 
     ((void *)0) 
          }
};
struct mgmt_header_t {
 uint16_t fc;
 uint16_t duration;
 uint8_t da[6];
 uint8_t sa[6];
 uint8_t bssid[6];
 uint16_t seq_ctrl;
};
struct ssid_t {
 uint8_t element_id;
 uint8_t length;
 u_char ssid[33];
};

struct rates_t {
 uint8_t element_id;
 uint8_t length;
 uint8_t rate[16];
};

struct challenge_t {
 uint8_t element_id;
 uint8_t length;
 uint8_t text[254];
};

struct fh_t {
 uint8_t element_id;
 uint8_t length;
 uint16_t dwell_time;
 uint8_t hop_set;
 uint8_t hop_pattern;
 uint8_t hop_index;
};

struct ds_t {
 uint8_t element_id;
 uint8_t length;
 uint8_t channel;
};

struct cf_t {
 uint8_t element_id;
 uint8_t length;
 uint8_t count;
 uint8_t period;
 uint16_t max_duration;
 uint16_t dur_remaing;
};

struct tim_t {
 uint8_t element_id;
 uint8_t length;
 uint8_t count;
 uint8_t period;
 uint8_t bitmap_control;
 uint8_t bitmap[251];
};
struct mgmt_body_t {
 uint8_t timestamp[8];
 uint16_t beacon_interval;
 uint16_t listen_interval;
 uint16_t status_code;
 uint16_t aid;
 u_char ap[6];
 uint16_t reason_code;
 uint16_t auth_alg;
 uint16_t auth_trans_seq_num;
 int challenge_present;
 struct challenge_t challenge;
 uint16_t capability_info;
 int ssid_present;
 struct ssid_t ssid;
 int rates_present;
 struct rates_t rates;
 int ds_present;
 struct ds_t ds;
 int cf_present;
 struct cf_t cf;
 int fh_present;
 struct fh_t fh;
 int tim_present;
 struct tim_t tim;
};

struct ctrl_control_wrapper_hdr_t {
 uint16_t fc;
 uint16_t duration;
 uint8_t addr1[6];
 uint16_t carried_fc[2];
 uint16_t ht_control[4];
};






struct ctrl_rts_hdr_t {
 uint16_t fc;
 uint16_t duration;
 uint8_t ra[6];
 uint8_t ta[6];
};




struct ctrl_cts_hdr_t {
 uint16_t fc;
 uint16_t duration;
 uint8_t ra[6];
};



struct ctrl_ack_hdr_t {
 uint16_t fc;
 uint16_t duration;
 uint8_t ra[6];
};



struct ctrl_ps_poll_hdr_t {
 uint16_t fc;
 uint16_t aid;
 uint8_t bssid[6];
 uint8_t ta[6];
};




struct ctrl_end_hdr_t {
 uint16_t fc;
 uint16_t duration;
 uint8_t ra[6];
 uint8_t bssid[6];
};




struct ctrl_end_ack_hdr_t {
 uint16_t fc;
 uint16_t duration;
 uint8_t ra[6];
 uint8_t bssid[6];
};




struct ctrl_ba_hdr_t {
 uint16_t fc;
 uint16_t duration;
 uint8_t ra[6];
};



struct ctrl_bar_hdr_t {
 uint16_t fc;
 uint16_t dur;
 uint8_t ra[6];
 uint8_t ta[6];
 uint16_t ctl;
 uint16_t seq;
};





struct meshcntl_t {
 uint8_t flags;
 uint8_t ttl;
 uint8_t seq[4];
 uint8_t addr4[6];
 uint8_t addr5[6];
 uint8_t addr6[6];
};
static const float ieee80211_float_htrates[76 +1][2][2] = {

 { { 6.5, 7.2, },
               { 13.5, 15.0, },
 },


 { { 13.0, 14.4, },
               { 27.0, 30.0, },
 },


 { { 19.5, 21.7, },
               { 40.5, 45.0, },
 },


 { { 26.0, 28.9, },
               { 54.0, 60.0, },
 },


 { { 39.0, 43.3, },
               { 81.0, 90.0, },
 },


 { { 52.0, 57.8, },
               { 108.0, 120.0, },
 },


 { { 58.5, 65.0, },
               { 121.5, 135.0, },
 },


 { { 65.0, 72.2, },
               { 135.0, 150.0, },
 },


 { { 13.0, 14.4, },
               { 27.0, 30.0, },
 },


 { { 26.0, 28.9, },
               { 54.0, 60.0, },
 },


 { { 39.0, 43.3, },
               { 81.0, 90.0, },
 },


 { { 52.0, 57.8, },
               { 108.0, 120.0, },
 },


 { { 78.0, 86.7, },
               { 162.0, 180.0, },
 },


 { { 104.0, 115.6, },
               { 216.0, 240.0, },
 },


 { { 117.0, 130.0, },
               { 243.0, 270.0, },
 },


 { { 130.0, 144.4, },
               { 270.0, 300.0, },
 },


 { { 19.5, 21.7, },
               { 40.5, 45.0, },
 },


 { { 39.0, 43.3, },
               { 81.0, 90.0, },
 },


 { { 58.5, 65.0, },
               { 121.5, 135.0, },
 },


 { { 78.0, 86.7, },
               { 162.0, 180.0, },
 },


 { { 117.0, 130.0, },
               { 243.0, 270.0, },
 },


 { { 156.0, 173.3, },
               { 324.0, 360.0, },
 },


 { { 175.5, 195.0, },
               { 364.5, 405.0, },
 },


 { { 195.0, 216.7, },
               { 405.0, 450.0, },
 },


 { { 26.0, 28.9, },
               { 54.0, 60.0, },
 },


 { { 52.0, 57.8, },
               { 108.0, 120.0, },
 },


 { { 78.0, 86.7, },
               { 162.0, 180.0, },
 },


 { { 104.0, 115.6, },
               { 216.0, 240.0, },
 },


 { { 156.0, 173.3, },
               { 324.0, 360.0, },
 },


 { { 208.0, 231.1, },
               { 432.0, 480.0, },
 },


 { { 234.0, 260.0, },
               { 486.0, 540.0, },
 },


 { { 260.0, 288.9, },
               { 540.0, 600.0, },
 },


 { { 0.0, 0.0, },
               { 6.0, 6.7, },
 },


 { { 39.0, 43.3, },
               { 81.0, 90.0, },
 },


 { { 52.0, 57.8, },
               { 108.0, 120.0, },
 },


 { { 65.0, 72.2, },
               { 135.0, 150.0, },
 },


 { { 58.5, 65.0, },
               { 121.5, 135.0, },
 },


 { { 78.0, 86.7, },
               { 162.0, 180.0, },
 },


 { { 97.5, 108.3, },
               { 202.5, 225.0, },
 },


 { { 52.0, 57.8, },
               { 108.0, 120.0, },
 },


 { { 65.0, 72.2, },
               { 135.0, 150.0, },
 },


 { { 65.0, 72.2, },
               { 135.0, 150.0, },
 },


 { { 78.0, 86.7, },
               { 162.0, 180.0, },
 },


 { { 91.0, 101.1, },
               { 189.0, 210.0, },
 },


 { { 91.0, 101.1, },
               { 189.0, 210.0, },
 },


 { { 104.0, 115.6, },
               { 216.0, 240.0, },
 },


 { { 78.0, 86.7, },
               { 162.0, 180.0, },
 },


 { { 97.5, 108.3, },
               { 202.5, 225.0, },
 },


 { { 97.5, 108.3, },
               { 202.5, 225.0, },
 },


 { { 117.0, 130.0, },
               { 243.0, 270.0, },
 },


 { { 136.5, 151.7, },
               { 283.5, 315.0, },
 },


 { { 136.5, 151.7, },
               { 283.5, 315.0, },
 },


 { { 156.0, 173.3, },
               { 324.0, 360.0, },
 },


 { { 65.0, 72.2, },
               { 135.0, 150.0, },
 },


 { { 78.0, 86.7, },
               { 162.0, 180.0, },
 },


 { { 91.0, 101.1, },
               { 189.0, 210.0, },
 },


 { { 78.0, 86.7, },
               { 162.0, 180.0, },
 },


 { { 91.0, 101.1, },
               { 189.0, 210.0, },
 },


 { { 104.0, 115.6, },
               { 216.0, 240.0, },
 },


 { { 117.0, 130.0, },
               { 243.0, 270.0, },
 },


 { { 104.0, 115.6, },
               { 216.0, 240.0, },
 },


 { { 117.0, 130.0, },
               { 243.0, 270.0, },
 },


 { { 130.0, 144.4, },
               { 270.0, 300.0, },
 },


 { { 130.0, 144.4, },
               { 270.0, 300.0, },
 },


 { { 143.0, 158.9, },
               { 297.0, 330.0, },
 },


 { { 97.5, 108.3, },
               { 202.5, 225.0, },
 },


 { { 117.0, 130.0, },
               { 243.0, 270.0, },
 },


 { { 136.5, 151.7, },
               { 283.5, 315.0, },
 },


 { { 117.0, 130.0, },
               { 243.0, 270.0, },
 },


 { { 136.5, 151.7, },
               { 283.5, 315.0, },
 },


 { { 156.0, 173.3, },
               { 324.0, 360.0, },
 },


 { { 175.5, 195.0, },
               { 364.5, 405.0, },
 },


 { { 156.0, 173.3, },
               { 324.0, 360.0, },
 },


 { { 175.5, 195.0, },
               { 364.5, 405.0, },
 },


 { { 195.0, 216.7, },
               { 405.0, 450.0, },
 },


 { { 195.0, 216.7, },
               { 405.0, 450.0, },
 },


 { { 214.5, 238.3, },
               { 445.5, 495.0, },
 },
};

static const char *auth_alg_text[]={"Open System","Shared Key","EAP"};


static const char *status_text[] = {
 "Successful",
 "Unspecified failure",
 "Reserved",
 "Reserved",
 "Reserved",
 "Reserved",
 "Reserved",
 "Reserved",
 "Reserved",
 "Reserved",
 "Cannot Support all requested capabilities in the Capability "
   "Information field",
 "Reassociation denied due to inability to confirm that association "
   "exists",
 "Association denied due to reason outside the scope of the "
   "standard",
 "Responding station does not support the specified authentication "
   "algorithm ",
 "Received an Authentication frame with authentication transaction "
   "sequence number out of expected sequence",
 "Authentication rejected because of challenge failure",
 "Authentication rejected due to timeout waiting for next frame in "
   "sequence",
 "Association denied because AP is unable to handle additional"
   "associated stations",
 "Association denied due to requesting station not supporting all of "
   "the data rates in BSSBasicRateSet parameter",
 "Association denied due to requesting station not supporting "
   "short preamble operation",
 "Association denied due to requesting station not supporting "
   "PBCC encoding",
 "Association denied due to requesting station not supporting "
   "channel agility",
 "Association request rejected because Spectrum Management "
   "capability is required",
 "Association request rejected because the information in the "
   "Power Capability element is unacceptable",
 "Association request rejected because the information in the "
   "Supported Channels element is unacceptable",
 "Association denied due to requesting station not supporting "
   "short slot operation",
 "Association denied due to requesting station not supporting "
   "DSSS-OFDM operation",
 "Association denied because the requested STA does not support HT "
   "features",
 "Reserved",
 "Association denied because the requested STA does not support "
   "the PCO transition time required by the AP",
 "Reserved",
 "Reserved",
 "Unspecified, QoS-related failure",
 "Association denied due to QAP having insufficient bandwidth "
   "to handle another QSTA",
 "Association denied due to excessive frame loss rates and/or "
   "poor conditions on current operating channel",
 "Association (with QBSS) denied due to requesting station not "
   "supporting the QoS facility",
 "Association denied due to requesting station not supporting "
   "Block Ack",
 "The request has been declined",
 "The request has not been successful as one or more parameters "
   "have invalid values",
 "The TS has not been created because the request cannot be honored. "
   "Try again with the suggested changes to the TSPEC",
 "Invalid Information Element",
 "Group Cipher is not valid",
 "Pairwise Cipher is not valid",
 "AKMP is not valid",
 "Unsupported RSN IE version",
 "Invalid RSN IE Capabilities",
 "Cipher suite is rejected per security policy",
 "The TS has not been created. However, the HC may be capable of "
   "creating a TS, in response to a request, after the time indicated "
   "in the TS Delay element",
 "Direct Link is not allowed in the BSS by policy",
 "Destination STA is not present within this QBSS.",
 "The Destination STA is not a QSTA.",

};


static const char *reason_text[] = {
 "Reserved",
 "Unspecified reason",
 "Previous authentication no longer valid",
 "Deauthenticated because sending station is leaving (or has left) "
   "IBSS or ESS",
 "Disassociated due to inactivity",
 "Disassociated because AP is unable to handle all currently "
   " associated stations",
 "Class 2 frame received from nonauthenticated station",
 "Class 3 frame received from nonassociated station",
 "Disassociated because sending station is leaving "
   "(or has left) BSS",
 "Station requesting (re)association is not authenticated with "
   "responding station",
 "Disassociated because the information in the Power Capability "
   "element is unacceptable",
 "Disassociated because the information in the SupportedChannels "
   "element is unacceptable",
 "Invalid Information Element",
 "Reserved",
 "Michael MIC failure",
 "4-Way Handshake timeout",
 "Group key update timeout",
 "Information element in 4-Way Handshake different from (Re)Association"
   "Request/Probe Response/Beacon",
 "Group Cipher is not valid",
 "AKMP is not valid",
 "Unsupported RSN IE version",
 "Invalid RSN IE Capabilities",
 "IEEE 802.1X Authentication failed",
 "Cipher suite is rejected per security policy",
 "Reserved",
 "Reserved",
 "Reserved",
 "Reserved",
 "Reserved",
 "Reserved",
 "TS deleted because QoS AP lacks sufficient bandwidth for this "
   "QoS STA due to a change in BSS service characteristics or "
   "operational mode (e.g. an HT BSS change from 40 MHz channel "
   "to 20 MHz channel)",
 "Disassociated for unspecified, QoS-related reason",
 "Disassociated because QoS AP lacks sufficient bandwidth for this "
   "QoS STA",
 "Disassociated because of excessive number of frames that need to be "
          "acknowledged, but are not acknowledged for AP transmissions "
   "and/or poor channel conditions",
 "Disassociated because STA is transmitting outside the limits "
   "of its TXOPs",
 "Requested from peer STA as the STA is leaving the BSS "
   "(or resetting)",
 "Requested from peer STA as it does not want to use the "
   "mechanism",
 "Requested from peer STA as the STA received frames using the "
   "mechanism for which a set up is required",
 "Requested from peer STA due to time out",
 "Reserved",
 "Reserved",
 "Reserved",
 "Reserved",
 "Reserved",
 "Peer STA does not support the requested cipher suite",
 "Association denied due to requesting STA not supporting HT "
   "features",
};


static int
wep_print(netdissect_options *ndo,
          const u_char *p)
{
 uint32_t iv={0};

 if (!((((3 + 1) > 0) || ((3 + 1) == 0)) && ((uintptr_t)ndo->ndo_snapend - (3 + 1) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*p) <= (uintptr_t)ndo->ndo_snapend - (3 + 1))))
  return 0;
 iv = ((uint32_t)(((uint32_t)(*((const uint8_t *)(p) + 3)) << 24) | ((uint32_t)(*((const uint8_t *)(p) + 2)) << 16) | ((uint32_t)(*((const uint8_t *)(p) + 1)) << 8) | ((uint32_t)(*((const uint8_t *)(p) + 0)) << 0)));

 (*ndo->ndo_printf)(ndo, " IV:%3x Pad %x KeyID %x", ((iv) & 0xFFFFFF), (((iv) >> 24) & 0x3F), (((iv) >> 30) & 0x03))
                   ;

 return 1;
}

static int
parse_elements(netdissect_options *ndo,
               struct mgmt_body_t *pbody, const u_char *p, int offset,
               u_int length)
{
 u_int elementlen={0};
 struct ssid_t ssid={0};
 struct challenge_t challenge={0};
 struct rates_t rates={0};
 struct ds_t ds={0};
 struct cf_t cf={0};
 struct tim_t tim={0};




 pbody->challenge_present = 0;
 pbody->ssid_present = 0;
 pbody->rates_present = 0;
 pbody->ds_present = 0;
 pbody->cf_present = 0;
 pbody->tim_present = 0;

 while (length != 0) {

  if (!((((2) > 0) || ((2) == 0)) && ((uintptr_t)ndo->ndo_snapend - (2) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*(p + offset)) <= (uintptr_t)ndo->ndo_snapend - (2))))
   return 0;
  if (length < 2)
   return 0;
  elementlen = *(p + offset + 1);


  if (!((((elementlen) > 0) || ((elementlen) == 0)) && ((uintptr_t)ndo->ndo_snapend - (elementlen) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*(p + offset + 2)) <= (uintptr_t)ndo->ndo_snapend - (elementlen))))
   return 0;
  if (length < elementlen + 2)
   return 0;

  switch (*(p + offset)) {
  case 0:
   memcpy(&ssid, p + offset, 2);
   offset += 2;
   length -= 2;
   if (ssid.length != 0) {
    if (ssid.length > sizeof(ssid.ssid) - 1)
     return 0;
    memcpy(&ssid.ssid, p + offset, ssid.length);
    offset += ssid.length;
    length -= ssid.length;
   }
   ssid.ssid[ssid.length] = '\0';







   if (!pbody->ssid_present) {
    pbody->ssid = ssid;
    pbody->ssid_present = 1;
   }
   break;
  case 16:
   memcpy(&challenge, p + offset, 2);
   offset += 2;
   length -= 2;
   if (challenge.length != 0) {
    if (challenge.length >
        sizeof(challenge.text) - 1)
     return 0;
    memcpy(&challenge.text, p + offset,
        challenge.length);
    offset += challenge.length;
    length -= challenge.length;
   }
   challenge.text[challenge.length] = '\0';







   if (!pbody->challenge_present) {
    pbody->challenge = challenge;
    pbody->challenge_present = 1;
   }
   break;
  case 1:
   memcpy(&rates, p + offset, 2);
   offset += 2;
   length -= 2;
   if (rates.length != 0) {
    if (rates.length > sizeof rates.rate)
     return 0;
    memcpy(&rates.rate, p + offset, rates.length);
    offset += rates.length;
    length -= rates.length;
   }
   if (!pbody->rates_present && rates.length != 0) {
    pbody->rates = rates;
    pbody->rates_present = 1;
   }
   break;
  case 3:
   memcpy(&ds, p + offset, 2);
   offset += 2;
   length -= 2;
   if (ds.length != 1) {
    offset += ds.length;
    length -= ds.length;
    break;
   }
   ds.channel = *(p + offset);
   offset += 1;
   length -= 1;







   if (!pbody->ds_present) {
    pbody->ds = ds;
    pbody->ds_present = 1;
   }
   break;
  case 4:
   memcpy(&cf, p + offset, 2);
   offset += 2;
   length -= 2;
   if (cf.length != 6) {
    offset += cf.length;
    length -= cf.length;
    break;
   }
   memcpy(&cf.count, p + offset, 6);
   offset += 6;
   length -= 6;







   if (!pbody->cf_present) {
    pbody->cf = cf;
    pbody->cf_present = 1;
   }
   break;
  case 5:
   memcpy(&tim, p + offset, 2);
   offset += 2;
   length -= 2;
   if (tim.length <= 3) {
    offset += tim.length;
    length -= tim.length;
    break;
   }
   if (tim.length - 3 > (int)sizeof tim.bitmap)
    return 0;
   memcpy(&tim.count, p + offset, 3);
   offset += 3;
   length -= 3;

   memcpy(tim.bitmap, p + offset, tim.length - 3);
   offset += tim.length - 3;
   length -= tim.length - 3;







   if (!pbody->tim_present) {
    pbody->tim = tim;
    pbody->tim_present = 1;
   }
   break;
  default:




   offset += 2 + elementlen;
   length -= 2 + elementlen;
   break;
  }
 }


 return 1;
}





static int
handle_beacon(netdissect_options *ndo,
              const u_char *p, u_int length)
{
 struct mgmt_body_t pbody={0};
 int offset = 0;
 int ret={0};

 memset(&pbody, 0, sizeof(pbody));

 if (!((((8 + 2 + 2) > 0) || ((8 + 2 + 2) == 0)) && ((uintptr_t)ndo->ndo_snapend - (8 + 2 + 2) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*p) <= (uintptr_t)ndo->ndo_snapend - (8 + 2 + 2)))
                            )
  return 0;
 if (length < 8 + 2 +
     2)
  return 0;
 memcpy(&pbody.timestamp, p, 8);
 offset += 8;
 length -= 8;
 pbody.beacon_interval = ((uint16_t)(((uint16_t)(*((const uint8_t *)(p+offset) + 1)) << 8) | ((uint16_t)(*((const uint8_t *)(p+offset) + 0)) << 0)));
 offset += 2;
 length -= 2;
 pbody.capability_info = ((uint16_t)(((uint16_t)(*((const uint8_t *)(p+offset) + 1)) << 8) | ((uint16_t)(*((const uint8_t *)(p+offset) + 0)) << 0)));
 offset += 2;
 length -= 2;

 ret = parse_elements(ndo, &pbody, p, offset, length);

 if (pbody.ssid_present) { (*ndo->ndo_printf)(ndo, " ("); fn_print(ndo, pbody.ssid.ssid, 
((void *)0)
); (*ndo->ndo_printf)(ndo, ")"); };
 if (pbody.rates_present) { int z={0}; const char *sep = " ["; for (z = 0; z < pbody.rates.length ; z++) { (*ndo->ndo_printf)(ndo, "%s%2.1f%s", sep, (.5 * ((pbody.rates.rate[z]) & 0x7f)), (pbody.rates.rate[z] & 0x80 ? "*" : "")); sep = " "; } if (pbody.rates.length != 0) (*ndo->ndo_printf)(ndo, " Mbit]"); };
 (*ndo->ndo_printf)(ndo, " %s", ((pbody.capability_info) & 0x0001) ? "ESS" : "IBSS")
                                                             ;
 if (pbody.ds_present) (*ndo->ndo_printf)(ndo, " CH: %u", pbody.ds.channel); (*ndo->ndo_printf)(ndo, "%s", ((pbody.capability_info) & 0x0010) ? ", PRIVACY" : "");;

 return ret;
}

static int
handle_assoc_request(netdissect_options *ndo,
                     const u_char *p, u_int length)
{
 struct mgmt_body_t pbody={0};
 int offset = 0;
 int ret={0};

 memset(&pbody, 0, sizeof(pbody));

 if (!((((2 + 2) > 0) || ((2 + 2) == 0)) && ((uintptr_t)ndo->ndo_snapend - (2 + 2) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*p) <= (uintptr_t)ndo->ndo_snapend - (2 + 2))))
  return 0;
 if (length < 2 + 2)
  return 0;
 pbody.capability_info = ((uint16_t)(((uint16_t)(*((const uint8_t *)(p) + 1)) << 8) | ((uint16_t)(*((const uint8_t *)(p) + 0)) << 0)));
 offset += 2;
 length -= 2;
 pbody.listen_interval = ((uint16_t)(((uint16_t)(*((const uint8_t *)(p+offset) + 1)) << 8) | ((uint16_t)(*((const uint8_t *)(p+offset) + 0)) << 0)));
 offset += 2;
 length -= 2;

 ret = parse_elements(ndo, &pbody, p, offset, length);

 if (pbody.ssid_present) { (*ndo->ndo_printf)(ndo, " ("); fn_print(ndo, pbody.ssid.ssid, 
((void *)0)
); (*ndo->ndo_printf)(ndo, ")"); };
 if (pbody.rates_present) { int z={0}; const char *sep = " ["; for (z = 0; z < pbody.rates.length ; z++) { (*ndo->ndo_printf)(ndo, "%s%2.1f%s", sep, (.5 * ((pbody.rates.rate[z]) & 0x7f)), (pbody.rates.rate[z] & 0x80 ? "*" : "")); sep = " "; } if (pbody.rates.length != 0) (*ndo->ndo_printf)(ndo, " Mbit]"); };
 return ret;
}

static int
handle_assoc_response(netdissect_options *ndo,
                      const u_char *p, u_int length)
{
 struct mgmt_body_t pbody={0};
 int offset = 0;
 int ret={0};

 memset(&pbody, 0, sizeof(pbody));

 if (!((((2 + 2 + 2) > 0) || ((2 + 2 + 2) == 0)) && ((uintptr_t)ndo->ndo_snapend - (2 + 2 + 2) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*p) <= (uintptr_t)ndo->ndo_snapend - (2 + 2 + 2)))
                        )
  return 0;
 if (length < 2 + 2 +
     2)
  return 0;
 pbody.capability_info = ((uint16_t)(((uint16_t)(*((const uint8_t *)(p) + 1)) << 8) | ((uint16_t)(*((const uint8_t *)(p) + 0)) << 0)));
 offset += 2;
 length -= 2;
 pbody.status_code = ((uint16_t)(((uint16_t)(*((const uint8_t *)(p+offset) + 1)) << 8) | ((uint16_t)(*((const uint8_t *)(p+offset) + 0)) << 0)));
 offset += 2;
 length -= 2;
 pbody.aid = ((uint16_t)(((uint16_t)(*((const uint8_t *)(p+offset) + 1)) << 8) | ((uint16_t)(*((const uint8_t *)(p+offset) + 0)) << 0)));
 offset += 2;
 length -= 2;

 ret = parse_elements(ndo, &pbody, p, offset, length);

 (*ndo->ndo_printf)(ndo, " AID(%x) :%s: %s", ((uint16_t)(pbody.aid << 2 )) >> 2 , ((pbody.capability_info) & 0x0010) ? " PRIVACY " : "", (pbody.status_code < (sizeof status_text / sizeof status_text[0]) ? status_text[pbody.status_code] : "n/a"))



            ;

 return ret;
}

static int
handle_reassoc_request(netdissect_options *ndo,
                       const u_char *p, u_int length)
{
 struct mgmt_body_t pbody={0};
 int offset = 0;
 int ret={0};

 memset(&pbody, 0, sizeof(pbody));

 if (!((((2 + 2 + 6) > 0) || ((2 + 2 + 6) == 0)) && ((uintptr_t)ndo->ndo_snapend - (2 + 2 + 6) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*p) <= (uintptr_t)ndo->ndo_snapend - (2 + 2 + 6)))
                       )
  return 0;
 if (length < 2 + 2 +
     6)
  return 0;
 pbody.capability_info = ((uint16_t)(((uint16_t)(*((const uint8_t *)(p) + 1)) << 8) | ((uint16_t)(*((const uint8_t *)(p) + 0)) << 0)));
 offset += 2;
 length -= 2;
 pbody.listen_interval = ((uint16_t)(((uint16_t)(*((const uint8_t *)(p+offset) + 1)) << 8) | ((uint16_t)(*((const uint8_t *)(p+offset) + 0)) << 0)));
 offset += 2;
 length -= 2;
 memcpy(&pbody.ap, p+offset, 6);
 offset += 6;
 length -= 6;

 ret = parse_elements(ndo, &pbody, p, offset, length);

 if (pbody.ssid_present) { (*ndo->ndo_printf)(ndo, " ("); fn_print(ndo, pbody.ssid.ssid, 
((void *)0)
); (*ndo->ndo_printf)(ndo, ")"); };
 (*ndo->ndo_printf)(ndo, " AP : %s", etheraddr_string(ndo, pbody.ap ));

 return ret;
}

static int
handle_reassoc_response(netdissect_options *ndo,
                        const u_char *p, u_int length)
{

 return handle_assoc_response(ndo, p, length);
}

static int
handle_probe_request(netdissect_options *ndo,
                     const u_char *p, u_int length)
{
 struct mgmt_body_t pbody={0};
 int offset = 0;
 int ret={0};

 memset(&pbody, 0, sizeof(pbody));

 ret = parse_elements(ndo, &pbody, p, offset, length);

 if (pbody.ssid_present) { (*ndo->ndo_printf)(ndo, " ("); fn_print(ndo, pbody.ssid.ssid, 
((void *)0)
); (*ndo->ndo_printf)(ndo, ")"); };
 if (pbody.rates_present) { int z={0}; const char *sep = " ["; for (z = 0; z < pbody.rates.length ; z++) { (*ndo->ndo_printf)(ndo, "%s%2.1f%s", sep, (.5 * ((pbody.rates.rate[z]) & 0x7f)), (pbody.rates.rate[z] & 0x80 ? "*" : "")); sep = " "; } if (pbody.rates.length != 0) (*ndo->ndo_printf)(ndo, " Mbit]"); };

 return ret;
}

static int
handle_probe_response(netdissect_options *ndo,
                      const u_char *p, u_int length)
{
 struct mgmt_body_t pbody={0};
 int offset = 0;
 int ret={0};

 memset(&pbody, 0, sizeof(pbody));

 if (!((((8 + 2 + 2) > 0) || ((8 + 2 + 2) == 0)) && ((uintptr_t)ndo->ndo_snapend - (8 + 2 + 2) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*p) <= (uintptr_t)ndo->ndo_snapend - (8 + 2 + 2)))
                            )
  return 0;
 if (length < 8 + 2 +
     2)
  return 0;
 memcpy(&pbody.timestamp, p, 8);
 offset += 8;
 length -= 8;
 pbody.beacon_interval = ((uint16_t)(((uint16_t)(*((const uint8_t *)(p+offset) + 1)) << 8) | ((uint16_t)(*((const uint8_t *)(p+offset) + 0)) << 0)));
 offset += 2;
 length -= 2;
 pbody.capability_info = ((uint16_t)(((uint16_t)(*((const uint8_t *)(p+offset) + 1)) << 8) | ((uint16_t)(*((const uint8_t *)(p+offset) + 0)) << 0)));
 offset += 2;
 length -= 2;

 ret = parse_elements(ndo, &pbody, p, offset, length);

 if (pbody.ssid_present) { (*ndo->ndo_printf)(ndo, " ("); fn_print(ndo, pbody.ssid.ssid, 
((void *)0)
); (*ndo->ndo_printf)(ndo, ")"); };
 if (pbody.rates_present) { int z={0}; const char *sep = " ["; for (z = 0; z < pbody.rates.length ; z++) { (*ndo->ndo_printf)(ndo, "%s%2.1f%s", sep, (.5 * ((pbody.rates.rate[z]) & 0x7f)), (pbody.rates.rate[z] & 0x80 ? "*" : "")); sep = " "; } if (pbody.rates.length != 0) (*ndo->ndo_printf)(ndo, " Mbit]"); };
 if (pbody.ds_present) (*ndo->ndo_printf)(ndo, " CH: %u", pbody.ds.channel); (*ndo->ndo_printf)(ndo, "%s", ((pbody.capability_info) & 0x0010) ? ", PRIVACY" : "");;

 return ret;
}

static int
handle_atim(void)
{

 return 1;
}

static int
handle_disassoc(netdissect_options *ndo,
                const u_char *p, u_int length)
{
 struct mgmt_body_t pbody={0};

 memset(&pbody, 0, sizeof(pbody));

 if (!((((2) > 0) || ((2) == 0)) && ((uintptr_t)ndo->ndo_snapend - (2) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*p) <= (uintptr_t)ndo->ndo_snapend - (2))))
  return 0;
 if (length < 2)
  return 0;
 pbody.reason_code = ((uint16_t)(((uint16_t)(*((const uint8_t *)(p) + 1)) << 8) | ((uint16_t)(*((const uint8_t *)(p) + 0)) << 0)));

 (*ndo->ndo_printf)(ndo, ": %s", (pbody.reason_code < (sizeof reason_text / sizeof reason_text[0])) ? reason_text[pbody.reason_code] : "Reserved")


                ;

 return 1;
}

static int
handle_auth(netdissect_options *ndo,
            const u_char *p, u_int length)
{
 struct mgmt_body_t pbody={0};
 int offset = 0;
 int ret={0};

 memset(&pbody, 0, sizeof(pbody));

 if (!((((6) > 0) || ((6) == 0)) && ((uintptr_t)ndo->ndo_snapend - (6) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*p) <= (uintptr_t)ndo->ndo_snapend - (6))))
  return 0;
 if (length < 6)
  return 0;
 pbody.auth_alg = ((uint16_t)(((uint16_t)(*((const uint8_t *)(p) + 1)) << 8) | ((uint16_t)(*((const uint8_t *)(p) + 0)) << 0)));
 offset += 2;
 length -= 2;
 pbody.auth_trans_seq_num = ((uint16_t)(((uint16_t)(*((const uint8_t *)(p + offset) + 1)) << 8) | ((uint16_t)(*((const uint8_t *)(p + offset) + 0)) << 0)));
 offset += 2;
 length -= 2;
 pbody.status_code = ((uint16_t)(((uint16_t)(*((const uint8_t *)(p + offset) + 1)) << 8) | ((uint16_t)(*((const uint8_t *)(p + offset) + 0)) << 0)));
 offset += 2;
 length -= 2;

 ret = parse_elements(ndo, &pbody, p, offset, length);

 if ((pbody.auth_alg == 1) &&
     ((pbody.auth_trans_seq_num == 2) ||
      (pbody.auth_trans_seq_num == 3))) {
  (*ndo->ndo_printf)(ndo, " (%s)-%x [Challenge Text] %s", (pbody.auth_alg < (sizeof auth_alg_text / sizeof auth_alg_text[0])) ? auth_alg_text[pbody.auth_alg] : "Reserved", pbody.auth_trans_seq_num, ((pbody.auth_trans_seq_num % 2) ? ((pbody.status_code < (sizeof status_text / sizeof status_text[0])) ? status_text[pbody.status_code] : "n/a") : ""))







                          ;
  return ret;
 }
 (*ndo->ndo_printf)(ndo, " (%s)-%x: %s", (pbody.auth_alg < (sizeof auth_alg_text / sizeof auth_alg_text[0])) ? auth_alg_text[pbody.auth_alg] : "Reserved", pbody.auth_trans_seq_num, (pbody.auth_trans_seq_num % 2) ? ((pbody.status_code < (sizeof status_text / sizeof status_text[0])) ? status_text[pbody.status_code] : "n/a") : "")
               ;

 return ret;
}

static int
handle_deauth(netdissect_options *ndo,
              const uint8_t *src, const u_char *p, u_int length)
{
 struct mgmt_body_t pbody={0};
 const char *reason = 
                     ((void *)0)
                         ;

 memset(&pbody, 0, sizeof(pbody));

 if (!((((2) > 0) || ((2) == 0)) && ((uintptr_t)ndo->ndo_snapend - (2) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*p) <= (uintptr_t)ndo->ndo_snapend - (2))))
  return 0;
 if (length < 2)
  return 0;
 pbody.reason_code = ((uint16_t)(((uint16_t)(*((const uint8_t *)(p) + 1)) << 8) | ((uint16_t)(*((const uint8_t *)(p) + 0)) << 0)));

 reason = (pbody.reason_code < (sizeof reason_text / sizeof reason_text[0]))
   ? reason_text[pbody.reason_code]
   : "Reserved";

 if (ndo->ndo_eflag) {
  (*ndo->ndo_printf)(ndo, ": %s", reason);
 } else {
  (*ndo->ndo_printf)(ndo, " (%s): %s", etheraddr_string(ndo, src), reason);
 }
 return 1;
}
static int
handle_action(netdissect_options *ndo,
              const uint8_t *src, const u_char *p, u_int length)
{
 if (!((((2) > 0) || ((2) == 0)) && ((uintptr_t)ndo->ndo_snapend - (2) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*p) <= (uintptr_t)ndo->ndo_snapend - (2))))
  return 0;
 if (length < 2)
  return 0;
 if (ndo->ndo_eflag) {
  (*ndo->ndo_printf)(ndo, ": ");
 } else {
  (*ndo->ndo_printf)(ndo, " (%s): ", etheraddr_string(ndo, src));
 }
 switch (p[0]) {
 case 0: (*ndo->ndo_printf)(ndo, "Spectrum Management Act#%d", p[1]); break;
 case 1: (*ndo->ndo_printf)(ndo, "QoS Act#%d", p[1]); break;
 case 2: (*ndo->ndo_printf)(ndo, "DLS Act#%d", p[1]); break;
 case 3: (*ndo->ndo_printf)(ndo, "BA "); ( (p[1]) == 0 ? (*ndo->ndo_printf)(ndo, "ADDBA Request") : (p[1]) == 1 ? (*ndo->ndo_printf)(ndo, "ADDBA Response") : (p[1]) == 2 ? (*ndo->ndo_printf)(ndo, "DELBA") : (*ndo->ndo_printf)(ndo, "Act#%d", (p[1])) ); break;
 case 7: (*ndo->ndo_printf)(ndo, "HT "); ( (p[1]) == 0 ? (*ndo->ndo_printf)(ndo, "TxChWidth") : (p[1]) == 1 ? (*ndo->ndo_printf)(ndo, "MIMOPwrSave") : (*ndo->ndo_printf)(ndo, "Act#%d", (p[1])) ); break;
 case 13: (*ndo->ndo_printf)(ndo, "MeshAction "); ( (p[1]) == 0 ? (*ndo->ndo_printf)(ndo, "MeshLink") : (p[1]) == 1 ? (*ndo->ndo_printf)(ndo, "HWMP") : (p[1]) == 2 ? (*ndo->ndo_printf)(ndo, "Gate Announcement") : (p[1]) == 3 ? (*ndo->ndo_printf)(ndo, "Congestion Control") : (p[1]) == 4 ? (*ndo->ndo_printf)(ndo, "MCCA Setup Request") : (p[1]) == 5 ? (*ndo->ndo_printf)(ndo, "MCCA Setup Reply") : (p[1]) == 6 ? (*ndo->ndo_printf)(ndo, "MCCA Advertisement Request") : (p[1]) == 7 ? (*ndo->ndo_printf)(ndo, "MCCA Advertisement") : (p[1]) == 8 ? (*ndo->ndo_printf)(ndo, "MCCA Teardown") : (p[1]) == 9 ? (*ndo->ndo_printf)(ndo, "TBTT Adjustment Request") : (p[1]) == 10 ? (*ndo->ndo_printf)(ndo, "TBTT Adjustment Response") : (*ndo->ndo_printf)(ndo, "Act#%d", (p[1])) ); break;
 case 14:
  (*ndo->ndo_printf)(ndo, "MultiohopAction ");
  ( (p[1]) == 0 ? (*ndo->ndo_printf)(ndo, "Proxy Update") : (p[1]) == 1 ? (*ndo->ndo_printf)(ndo, "Proxy Update Confirmation") : (*ndo->ndo_printf)(ndo, "Act#%d", (p[1])) ); break;
 case 15:
  (*ndo->ndo_printf)(ndo, "SelfprotectAction ");
  ( (p[1]) == 1 ? (*ndo->ndo_printf)(ndo, "Peering Open") : (p[1]) == 2 ? (*ndo->ndo_printf)(ndo, "Peering Confirm") : (p[1]) == 3 ? (*ndo->ndo_printf)(ndo, "Peering Close") : (p[1]) == 4 ? (*ndo->ndo_printf)(ndo, "Group Key Inform") : (p[1]) == 5 ? (*ndo->ndo_printf)(ndo, "Group Key Acknowledge") : (*ndo->ndo_printf)(ndo, "Act#%d", (p[1])) ); break;
 case 127: (*ndo->ndo_printf)(ndo, "Vendor Act#%d", p[1]); break;
 default:
  (*ndo->ndo_printf)(ndo, "Reserved(%d) Act#%d", p[0], p[1]);
  break;
 }
 return 1;
}







static int
mgmt_body_print(netdissect_options *ndo,
                uint16_t fc, const uint8_t *src, const u_char *p, u_int length)
{
 (*ndo->ndo_printf)(ndo, "%s", tok2str(st_str, "Unhandled Management subtype(%x)", (((fc) >> 4) & 0xF)));


 if (((fc) & 0x4000))
  return wep_print(ndo, p);
 switch ((((fc) >> 4) & 0xF)) {
 case 0x0:
  return handle_assoc_request(ndo, p, length);
 case 0x1:
  return handle_assoc_response(ndo, p, length);
 case 0x2:
  return handle_reassoc_request(ndo, p, length);
 case 0x3:
  return handle_reassoc_response(ndo, p, length);
 case 0x4:
  return handle_probe_request(ndo, p, length);
 case 0x5:
  return handle_probe_response(ndo, p, length);
 case 0x8:
  return handle_beacon(ndo, p, length);
 case 0x9:
  return handle_atim();
 case 0xA:
  return handle_disassoc(ndo, p, length);
 case 0xB:
  return handle_auth(ndo, p, length);
 case 0xC:
  return handle_deauth(ndo, src, p, length);
 case 0xD:
  return handle_action(ndo, src, p, length);
 default:
  return 1;
 }
}






static int
ctrl_body_print(netdissect_options *ndo,
                uint16_t fc, const u_char *p)
{
 (*ndo->ndo_printf)(ndo, "%s", tok2str(ctrl_str, "Unknown Ctrl Subtype", (((fc) >> 4) & 0xF)));
 switch ((((fc) >> 4) & 0xF)) {
 case 0x7:

  break;
 case 0x8:
  if (!(((((2 +2 + 6 +6 + 2 +2)) > 0) || (((2 +2 + 6 +6 + 2 +2)) == 0)) && ((uintptr_t)ndo->ndo_snapend - ((2 +2 + 6 +6 + 2 +2)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*p) <= (uintptr_t)ndo->ndo_snapend - ((2 +2 + 6 +6 + 2 +2)))))
   return 0;
  if (!ndo->ndo_eflag)
   (*ndo->ndo_printf)(ndo, " RA:%s TA:%s CTL(%x) SEQ(%u) ", etheraddr_string(ndo, ((const struct ctrl_bar_hdr_t *)p)->ra), etheraddr_string(ndo, ((const struct ctrl_bar_hdr_t *)p)->ta), ((uint16_t)(((uint16_t)(*((const uint8_t *)(&(((const struct ctrl_bar_hdr_t *)p)->ctl)) + 1)) << 8) | ((uint16_t)(*((const uint8_t *)(&(((const struct ctrl_bar_hdr_t *)p)->ctl)) + 0)) << 0))), ((uint16_t)(((uint16_t)(*((const uint8_t *)(&(((const struct ctrl_bar_hdr_t *)p)->seq)) + 1)) << 8) | ((uint16_t)(*((const uint8_t *)(&(((const struct ctrl_bar_hdr_t *)p)->seq)) + 0)) << 0))))



                                                                      ;
  break;
 case 0x9:
  if (!(((((2 +2 +6)) > 0) || (((2 +2 +6)) == 0)) && ((uintptr_t)ndo->ndo_snapend - ((2 +2 +6)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*p) <= (uintptr_t)ndo->ndo_snapend - ((2 +2 +6)))))
   return 0;
  if (!ndo->ndo_eflag)
   (*ndo->ndo_printf)(ndo, " RA:%s ", etheraddr_string(ndo, ((const struct ctrl_ba_hdr_t *)p)->ra))
                                                                     ;
  break;
 case 0xA:
  if (!(((((2 +2 + 6 +6)) > 0) || (((2 +2 + 6 +6)) == 0)) && ((uintptr_t)ndo->ndo_snapend - ((2 +2 + 6 +6)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*p) <= (uintptr_t)ndo->ndo_snapend - ((2 +2 + 6 +6)))))
   return 0;
  (*ndo->ndo_printf)(ndo, " AID(%x)", ((uint16_t)(((uint16_t)(*((const uint8_t *)(&(((const struct ctrl_ps_poll_hdr_t *)p)->aid)) + 1)) << 8) | ((uint16_t)(*((const uint8_t *)(&(((const struct ctrl_ps_poll_hdr_t *)p)->aid)) + 0)) << 0))))
                                                                         ;
  break;
 case 0xB:
  if (!(((((2 +2 + 6 +6)) > 0) || (((2 +2 + 6 +6)) == 0)) && ((uintptr_t)ndo->ndo_snapend - ((2 +2 + 6 +6)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*p) <= (uintptr_t)ndo->ndo_snapend - ((2 +2 + 6 +6)))))
   return 0;
  if (!ndo->ndo_eflag)
   (*ndo->ndo_printf)(ndo, " TA:%s ", etheraddr_string(ndo, ((const struct ctrl_rts_hdr_t *)p)->ta))
                                                                      ;
  break;
 case 0xC:
  if (!(((((2 +2 +6)) > 0) || (((2 +2 +6)) == 0)) && ((uintptr_t)ndo->ndo_snapend - ((2 +2 +6)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*p) <= (uintptr_t)ndo->ndo_snapend - ((2 +2 +6)))))
   return 0;
  if (!ndo->ndo_eflag)
   (*ndo->ndo_printf)(ndo, " RA:%s ", etheraddr_string(ndo, ((const struct ctrl_cts_hdr_t *)p)->ra))
                                                                      ;
  break;
 case 0xD:
  if (!(((((2 +2 +6)) > 0) || (((2 +2 +6)) == 0)) && ((uintptr_t)ndo->ndo_snapend - ((2 +2 +6)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*p) <= (uintptr_t)ndo->ndo_snapend - ((2 +2 +6)))))
   return 0;
  if (!ndo->ndo_eflag)
   (*ndo->ndo_printf)(ndo, " RA:%s ", etheraddr_string(ndo, ((const struct ctrl_ack_hdr_t *)p)->ra))
                                                                      ;
  break;
 case 0xE:
  if (!(((((2 +2 + 6 +6)) > 0) || (((2 +2 + 6 +6)) == 0)) && ((uintptr_t)ndo->ndo_snapend - ((2 +2 + 6 +6)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*p) <= (uintptr_t)ndo->ndo_snapend - ((2 +2 + 6 +6)))))
   return 0;
  if (!ndo->ndo_eflag)
   (*ndo->ndo_printf)(ndo, " RA:%s ", etheraddr_string(ndo, ((const struct ctrl_end_hdr_t *)p)->ra))
                                                                      ;
  break;
 case 0xF:
  if (!(((((2 +2 + 6 +6)) > 0) || (((2 +2 + 6 +6)) == 0)) && ((uintptr_t)ndo->ndo_snapend - ((2 +2 + 6 +6)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*p) <= (uintptr_t)ndo->ndo_snapend - ((2 +2 + 6 +6)))))
   return 0;
  if (!ndo->ndo_eflag)
   (*ndo->ndo_printf)(ndo, " RA:%s ", etheraddr_string(ndo, ((const struct ctrl_end_ack_hdr_t *)p)->ra))
                                                                          ;
  break;
 }
 return 1;
}
static void
get_data_src_dst_mac(uint16_t fc, const u_char *p, const uint8_t **srcp,
                     const uint8_t **dstp)
{





 if (!((fc) & 0x0100)) {
  if (!((fc) & 0x0200)) {

   *srcp = (p + 10);
   *dstp = (p + 4);
  } else {

   *srcp = (p + 16);
   *dstp = (p + 4);
  }
 } else {
  if (!((fc) & 0x0200)) {

   *srcp = (p + 10);
   *dstp = (p + 16);
  } else {

   *srcp = (p + 24);
   *dstp = (p + 16);
  }
 }





}

static void
get_mgmt_src_dst_mac(const u_char *p, const uint8_t **srcp, const uint8_t **dstp)
{
 const struct mgmt_header_t *hp = (const struct mgmt_header_t *) p;

 if (srcp != 
            ((void *)0)
                )
  *srcp = hp->sa;
 if (dstp != 
            ((void *)0)
                )
  *dstp = hp->da;
}





static void
data_header_print(netdissect_options *ndo, uint16_t fc, const u_char *p)
{
 u_int subtype = (((fc) >> 4) & 0xF);

 if (((subtype) & 0x01) || ((subtype) & 0x02) ||
     ((subtype) & 0x08)) {
  (*ndo->ndo_printf)(ndo, "CF ");
  if (((subtype) & 0x01)) {
   if (((subtype) & 0x02))
    (*ndo->ndo_printf)(ndo, "Ack/Poll");
   else
    (*ndo->ndo_printf)(ndo, "Ack");
  } else {
   if (((subtype) & 0x02))
    (*ndo->ndo_printf)(ndo, "Poll");
  }
  if (((subtype) & 0x08))
   (*ndo->ndo_printf)(ndo, "+QoS");
  (*ndo->ndo_printf)(ndo, " ");
 }






 if (!((fc) & 0x0100) && !((fc) & 0x0200)) {
  (*ndo->ndo_printf)(ndo, "DA:%s SA:%s BSSID:%s ", etheraddr_string(ndo, (p + 4)), etheraddr_string(ndo, (p + 10)), etheraddr_string(ndo, (p + 16)))

                                    ;
 } else if (!((fc) & 0x0100) && ((fc) & 0x0200)) {
  (*ndo->ndo_printf)(ndo, "DA:%s BSSID:%s SA:%s ", etheraddr_string(ndo, (p + 4)), etheraddr_string(ndo, (p + 10)), etheraddr_string(ndo, (p + 16)))

                                    ;
 } else if (((fc) & 0x0100) && !((fc) & 0x0200)) {
  (*ndo->ndo_printf)(ndo, "BSSID:%s SA:%s DA:%s ", etheraddr_string(ndo, (p + 4)), etheraddr_string(ndo, (p + 10)), etheraddr_string(ndo, (p + 16)))

                                    ;
 } else if (((fc) & 0x0100) && ((fc) & 0x0200)) {
  (*ndo->ndo_printf)(ndo, "RA:%s TA:%s DA:%s SA:%s ", etheraddr_string(ndo, (p + 4)), etheraddr_string(ndo, (p + 10)), etheraddr_string(ndo, (p + 16)), etheraddr_string(ndo, (p + 24)))

                                                                  ;
 }





}

static void
mgmt_header_print(netdissect_options *ndo, const u_char *p)
{
 const struct mgmt_header_t *hp = (const struct mgmt_header_t *) p;

 (*ndo->ndo_printf)(ndo, "BSSID:%s DA:%s SA:%s ", etheraddr_string(ndo, (hp)->bssid), etheraddr_string(ndo, (hp)->da), etheraddr_string(ndo, (hp)->sa))

                                      ;
}

static void
ctrl_header_print(netdissect_options *ndo, uint16_t fc, const u_char *p)
{
 switch ((((fc) >> 4) & 0xF)) {
 case 0x8:
  (*ndo->ndo_printf)(ndo, " RA:%s TA:%s CTL(%x) SEQ(%u) ", etheraddr_string(ndo, ((const struct ctrl_bar_hdr_t *)p)->ra), etheraddr_string(ndo, ((const struct ctrl_bar_hdr_t *)p)->ta), ((uint16_t)(((uint16_t)(*((const uint8_t *)(&(((const struct ctrl_bar_hdr_t *)p)->ctl)) + 1)) << 8) | ((uint16_t)(*((const uint8_t *)(&(((const struct ctrl_bar_hdr_t *)p)->ctl)) + 0)) << 0))), ((uint16_t)(((uint16_t)(*((const uint8_t *)(&(((const struct ctrl_bar_hdr_t *)p)->seq)) + 1)) << 8) | ((uint16_t)(*((const uint8_t *)(&(((const struct ctrl_bar_hdr_t *)p)->seq)) + 0)) << 0))))



                                                                     ;
  break;
 case 0x9:
  (*ndo->ndo_printf)(ndo, "RA:%s ", etheraddr_string(ndo, ((const struct ctrl_ba_hdr_t *)p)->ra))
                                                                    ;
  break;
 case 0xA:
  (*ndo->ndo_printf)(ndo, "BSSID:%s TA:%s ", etheraddr_string(ndo, ((const struct ctrl_ps_poll_hdr_t *)p)->bssid), etheraddr_string(ndo, ((const struct ctrl_ps_poll_hdr_t *)p)->ta))

                                                                         ;
  break;
 case 0xB:
  (*ndo->ndo_printf)(ndo, "RA:%s TA:%s ", etheraddr_string(ndo, ((const struct ctrl_rts_hdr_t *)p)->ra), etheraddr_string(ndo, ((const struct ctrl_rts_hdr_t *)p)->ta))

                                                                     ;
  break;
 case 0xC:
  (*ndo->ndo_printf)(ndo, "RA:%s ", etheraddr_string(ndo, ((const struct ctrl_cts_hdr_t *)p)->ra))
                                                                     ;
  break;
 case 0xD:
  (*ndo->ndo_printf)(ndo, "RA:%s ", etheraddr_string(ndo, ((const struct ctrl_ack_hdr_t *)p)->ra))
                                                                     ;
  break;
 case 0xE:
  (*ndo->ndo_printf)(ndo, "RA:%s BSSID:%s ", etheraddr_string(ndo, ((const struct ctrl_end_hdr_t *)p)->ra), etheraddr_string(ndo, ((const struct ctrl_end_hdr_t *)p)->bssid))

                                                                        ;
  break;
 case 0xF:
  (*ndo->ndo_printf)(ndo, "RA:%s BSSID:%s ", etheraddr_string(ndo, ((const struct ctrl_end_ack_hdr_t *)p)->ra), etheraddr_string(ndo, ((const struct ctrl_end_ack_hdr_t *)p)->bssid))

                                                                            ;
  break;
 default:

  break;
 }
}

static int
extract_header_length(netdissect_options *ndo,
                      uint16_t fc)
{
 int len={0};

 switch ((((fc) >> 2) & 0x3)) {
 case 0x0:
  return (2 +2 + 6 +6 + 6 +2);
 case 0x1:
  switch ((((fc) >> 4) & 0xF)) {
  case 0x7:
   return (2 +2 + 6 + 2 + 4);
  case 0x8:
   return (2 +2 + 6 +6 + 2 +2);
  case 0x9:
   return (2 +2 +6);
  case 0xA:
   return (2 +2 + 6 +6);
  case 0xB:
   return (2 +2 + 6 +6);
  case 0xC:
   return (2 +2 +6);
  case 0xD:
   return (2 +2 +6);
  case 0xE:
   return (2 +2 + 6 +6);
  case 0xF:
   return (2 +2 + 6 +6);
  default:
   (*ndo->ndo_printf)(ndo, "unknown 802.11 ctrl frame subtype (%d)", (((fc) >> 4) & 0xF));
   return 0;
  }
 case 0x2:
  len = (((fc) & 0x0100) && ((fc) & 0x0200)) ? 30 : 24;
  if ((((((fc) >> 4) & 0xF)) & 0x08))
   len += 2;
  return len;
 default:
  (*ndo->ndo_printf)(ndo, "unknown 802.11 frame type (%d)", (((fc) >> 2) & 0x3));
  return 0;
 }
}

static int
extract_mesh_header_length(const u_char *p)
{
 return (p[0] &~ 3) ? 0 : 6*(1 + (p[0] & 3));
}




static void
ieee_802_11_hdr_print(netdissect_options *ndo,
                      uint16_t fc, const u_char *p, u_int hdrlen,
                      u_int meshdrlen)
{
 if (ndo->ndo_vflag) {
  if (((fc) & 0x2000))
   (*ndo->ndo_printf)(ndo, "More Data ");
  if (((fc) & 0x0400))
   (*ndo->ndo_printf)(ndo, "More Fragments ");
  if (((fc) & 0x1000))
   (*ndo->ndo_printf)(ndo, "Pwr Mgmt ");
  if (((fc) & 0x0800))
   (*ndo->ndo_printf)(ndo, "Retry ");
  if (((fc) & 0x8000))
   (*ndo->ndo_printf)(ndo, "Strictly Ordered ");
  if (((fc) & 0x4000))
   (*ndo->ndo_printf)(ndo, "Protected ");
  if ((((fc) >> 2) & 0x3) != 0x1 || (((fc) >> 4) & 0xF) != 0xA)
   (*ndo->ndo_printf)(ndo, "%dus ", ((uint16_t)(((uint16_t)(*((const uint8_t *)(&((const struct mgmt_header_t *)p)->duration) + 1)) << 8) | ((uint16_t)(*((const uint8_t *)(&((const struct mgmt_header_t *)p)->duration) + 0)) << 0))))

                                                          ;
 }
 if (meshdrlen != 0) {
  const struct meshcntl_t *mc =
      (const struct meshcntl_t *)&p[hdrlen - meshdrlen];
  int ae = mc->flags & 3;

  (*ndo->ndo_printf)(ndo, "MeshData (AE %d TTL %u seq %u", ae, mc->ttl, ((uint32_t)(((uint32_t)(*((const uint8_t *)(mc->seq) + 3)) << 24) | ((uint32_t)(*((const uint8_t *)(mc->seq) + 2)) << 16) | ((uint32_t)(*((const uint8_t *)(mc->seq) + 1)) << 8) | ((uint32_t)(*((const uint8_t *)(mc->seq) + 0)) << 0))))
                                  ;
  if (ae > 0)
   (*ndo->ndo_printf)(ndo, " A4:%s", etheraddr_string(ndo, mc->addr4));
  if (ae > 1)
   (*ndo->ndo_printf)(ndo, " A5:%s", etheraddr_string(ndo, mc->addr5));
  if (ae > 2)
   (*ndo->ndo_printf)(ndo, " A6:%s", etheraddr_string(ndo, mc->addr6));
  (*ndo->ndo_printf)(ndo, ") ");
 }

 switch ((((fc) >> 2) & 0x3)) {
 case 0x0:
  mgmt_header_print(ndo, p);
  break;
 case 0x1:
  ctrl_header_print(ndo, fc, p);
  break;
 case 0x2:
  data_header_print(ndo, fc, p);
  break;
 default:
  break;
 }
}





static const char tstr[] = "[|802.11]";

static u_int
ieee802_11_print(netdissect_options *ndo,
                 const u_char *p, u_int length, u_int orig_caplen, int pad,
                 u_int fcslen)
{
 uint16_t fc={0};
 u_int caplen, hdrlen, meshdrlen={0};
 struct lladdr_info src, dst={0};
 int llc_hdrlen={0};

 caplen = orig_caplen;

 if (length < fcslen) {
  (*ndo->ndo_printf)(ndo, "%s", tstr);
  return caplen;
 }
 length -= fcslen;
 if (caplen > length) {

  fcslen = caplen - length;
  caplen -= fcslen;
  ndo->ndo_snapend -= fcslen;
 }

 if (caplen < 2) {
  (*ndo->ndo_printf)(ndo, "%s", tstr);
  return orig_caplen;
 }

 fc = ((uint16_t)(((uint16_t)(*((const uint8_t *)(p) + 1)) << 8) | ((uint16_t)(*((const uint8_t *)(p) + 0)) << 0)));
 hdrlen = extract_header_length(ndo, fc);
 if (hdrlen == 0) {

  return (0);
 }
 if (pad)
  hdrlen = (((hdrlen)+((4)-1))&(~((4)-1)));
 if (ndo->ndo_Hflag && (((fc) >> 2) & 0x3) == 0x2 &&
     (((((fc) >> 4) & 0xF)) & 0x08)) {
  meshdrlen = extract_mesh_header_length(p+hdrlen);
  hdrlen += meshdrlen;
 } else
  meshdrlen = 0;

 if (caplen < hdrlen) {
  (*ndo->ndo_printf)(ndo, "%s", tstr);
  return hdrlen;
 }

 if (ndo->ndo_eflag)
  ieee_802_11_hdr_print(ndo, fc, p, hdrlen, meshdrlen);




 length -= hdrlen;
 caplen -= hdrlen;
 p += hdrlen;

 src.addr_string = etheraddr_string;
 dst.addr_string = etheraddr_string;
 switch ((((fc) >> 2) & 0x3)) {
 case 0x0:
  get_mgmt_src_dst_mac(p - hdrlen, &src.addr, &dst.addr);
  if (!mgmt_body_print(ndo, fc, src.addr, p, length)) {
   (*ndo->ndo_printf)(ndo, "%s", tstr);
   return hdrlen;
  }
  break;
 case 0x1:
  if (!ctrl_body_print(ndo, fc, p - hdrlen)) {
   (*ndo->ndo_printf)(ndo, "%s", tstr);
   return hdrlen;
  }
  break;
 case 0x2:
  if ((((((fc) >> 4) & 0xF)) & 0x04))
   return hdrlen;

  if (((fc) & 0x4000)) {
   (*ndo->ndo_printf)(ndo, "Data");
   if (!wep_print(ndo, p)) {
    (*ndo->ndo_printf)(ndo, "%s", tstr);
    return hdrlen;
   }
  } else {
   get_data_src_dst_mac(fc, p - hdrlen, &src.addr, &dst.addr);
   llc_hdrlen = llc_print(ndo, p, length, caplen, &src, &dst);
   if (llc_hdrlen < 0) {




    if (!ndo->ndo_suppress_default_print)
     (*ndo->ndo_default_print)(ndo, p, caplen);
    llc_hdrlen = -llc_hdrlen;
   }
   hdrlen += llc_hdrlen;
  }
  break;
 default:

  break;
 }

 return hdrlen;
}







u_int
ieee802_11_if_print(netdissect_options *ndo,
                    const struct pcap_pkthdr *h, const u_char *p)
{
 return ieee802_11_print(ndo, p, h->len, h->caplen, 0, 0);
}
struct ieee80211_radiotap_header {
 uint8_t it_version;




 uint8_t it_pad;
 uint16_t it_len;




 uint32_t it_present;






};
enum ieee80211_radiotap_type {
 IEEE80211_RADIOTAP_TSFT = 0,
 IEEE80211_RADIOTAP_FLAGS = 1,
 IEEE80211_RADIOTAP_RATE = 2,
 IEEE80211_RADIOTAP_CHANNEL = 3,
 IEEE80211_RADIOTAP_FHSS = 4,
 IEEE80211_RADIOTAP_DBM_ANTSIGNAL = 5,
 IEEE80211_RADIOTAP_DBM_ANTNOISE = 6,
 IEEE80211_RADIOTAP_LOCK_QUALITY = 7,
 IEEE80211_RADIOTAP_TX_ATTENUATION = 8,
 IEEE80211_RADIOTAP_DB_TX_ATTENUATION = 9,
 IEEE80211_RADIOTAP_DBM_TX_POWER = 10,
 IEEE80211_RADIOTAP_ANTENNA = 11,
 IEEE80211_RADIOTAP_DB_ANTSIGNAL = 12,
 IEEE80211_RADIOTAP_DB_ANTNOISE = 13,
 IEEE80211_RADIOTAP_RX_FLAGS = 14,

 IEEE80211_RADIOTAP_XCHANNEL = 18,
 IEEE80211_RADIOTAP_MCS = 19,
 IEEE80211_RADIOTAP_AMPDU_STATUS = 20,
 IEEE80211_RADIOTAP_VHT = 21,
 IEEE80211_RADIOTAP_NAMESPACE = 29,
 IEEE80211_RADIOTAP_VENDOR_NAMESPACE = 30,
 IEEE80211_RADIOTAP_EXT = 31
};
static void
print_chaninfo(netdissect_options *ndo,
               uint16_t freq, int flags, int presentflags)
{
 (*ndo->ndo_printf)(ndo, "%u MHz", freq);
 if (presentflags & (1 << IEEE80211_RADIOTAP_MCS)) {




  (*ndo->ndo_printf)(ndo, " 11n");
 } else {
  if (((flags & (0x00080 | 0x00800)) == (0x00080 | 0x00800)))
   (*ndo->ndo_printf)(ndo, " FHSS");
  if (((flags & (0x00100 | 0x00040)) == (0x00100 | 0x00040))) {
   if (flags & 0x04000)
    (*ndo->ndo_printf)(ndo, " 11a/10Mhz");
   else if (flags & 0x08000)
    (*ndo->ndo_printf)(ndo, " 11a/5Mhz");
   else
    (*ndo->ndo_printf)(ndo, " 11a");
  }
  if ((((flags & (0x00080 | 0x00040)) == (0x00080 | 0x00040)) || ((flags & (0x00080 | 0x00400)) == (0x00080 | 0x00400)))) {
   if (flags & 0x04000)
    (*ndo->ndo_printf)(ndo, " 11g/10Mhz");
   else if (flags & 0x08000)
    (*ndo->ndo_printf)(ndo, " 11g/5Mhz");
   else
    (*ndo->ndo_printf)(ndo, " 11g");
  } else if (((flags & (0x00080 | 0x00020)) == (0x00080 | 0x00020)))
   (*ndo->ndo_printf)(ndo, " 11b");
  if (flags & 0x00010)
   (*ndo->ndo_printf)(ndo, " Turbo");
 }



 if (flags & 0x10000)
  (*ndo->ndo_printf)(ndo, " ht/20");
 else if (flags & 0x40000)
  (*ndo->ndo_printf)(ndo, " ht/40-");
 else if (flags & 0x20000)
  (*ndo->ndo_printf)(ndo, " ht/40+");
 (*ndo->ndo_printf)(ndo, " ");
}

static int
print_radiotap_field(netdissect_options *ndo,
                     struct cpack_state *s, uint32_t bit, uint8_t *flagsp,
                     uint32_t presentflags)
{
 u_int i={0};
 int rc={0};

 switch (bit) {

 case IEEE80211_RADIOTAP_TSFT: {
  uint64_t tsft={0};

  rc = cpack_uint64(s, &tsft);
  if (rc != 0)
   goto trunc;
  (*ndo->ndo_printf)(ndo, "%" 
 "ll" "u" 
 "us tsft ", tsft);
  break;
  }

 case IEEE80211_RADIOTAP_FLAGS: {
  uint8_t flagsval={0};

  rc = cpack_uint8(s, &flagsval);
  if (rc != 0)
   goto trunc;
  *flagsp = flagsval;
  if (flagsval & 0x01)
   (*ndo->ndo_printf)(ndo, "cfp ");
  if (flagsval & 0x02)
   (*ndo->ndo_printf)(ndo, "short preamble ");
  if (flagsval & 0x04)
   (*ndo->ndo_printf)(ndo, "wep ");
  if (flagsval & 0x08)
   (*ndo->ndo_printf)(ndo, "fragmented ");
  if (flagsval & 0x40)
   (*ndo->ndo_printf)(ndo, "bad-fcs ");
  break;
  }

 case IEEE80211_RADIOTAP_RATE: {
  uint8_t rate={0};

  rc = cpack_uint8(s, &rate);
  if (rc != 0)
   goto trunc;
  if (rate >= 0x80 && rate <= 0x8f) {
   (*ndo->ndo_printf)(ndo, "MCS %u ", rate & 0x7f);
  } else
   (*ndo->ndo_printf)(ndo, "%2.1f Mb/s ", .5 * rate);
  break;
  }

 case IEEE80211_RADIOTAP_CHANNEL: {
  uint16_t frequency={0};
  uint16_t flags={0};

  rc = cpack_uint16(s, &frequency);
  if (rc != 0)
   goto trunc;
  rc = cpack_uint16(s, &flags);
  if (rc != 0)
   goto trunc;




  if (presentflags & (1 << IEEE80211_RADIOTAP_XCHANNEL))
   break;
  print_chaninfo(ndo, frequency, flags, presentflags);
  break;
  }

 case IEEE80211_RADIOTAP_FHSS: {
  uint8_t hopset={0};
  uint8_t hoppat={0};

  rc = cpack_uint8(s, &hopset);
  if (rc != 0)
   goto trunc;
  rc = cpack_uint8(s, &hoppat);
  if (rc != 0)
   goto trunc;
  (*ndo->ndo_printf)(ndo, "fhset %d fhpat %d ", hopset, hoppat);
  break;
  }

 case IEEE80211_RADIOTAP_DBM_ANTSIGNAL: {
  int8_t dbm_antsignal={0};

  rc = cpack_uint8((s), (uint8_t*)(&dbm_antsignal));
  if (rc != 0)
   goto trunc;
  (*ndo->ndo_printf)(ndo, "%ddBm signal ", dbm_antsignal);
  break;
  }

 case IEEE80211_RADIOTAP_DBM_ANTNOISE: {
  int8_t dbm_antnoise={0};

  rc = cpack_uint8((s), (uint8_t*)(&dbm_antnoise));
  if (rc != 0)
   goto trunc;
  (*ndo->ndo_printf)(ndo, "%ddBm noise ", dbm_antnoise);
  break;
  }

 case IEEE80211_RADIOTAP_LOCK_QUALITY: {
  uint16_t lock_quality={0};

  rc = cpack_uint16(s, &lock_quality);
  if (rc != 0)
   goto trunc;
  (*ndo->ndo_printf)(ndo, "%u sq ", lock_quality);
  break;
  }

 case IEEE80211_RADIOTAP_TX_ATTENUATION: {
  uint16_t tx_attenuation={0};

  rc = cpack_uint16(s, &tx_attenuation);
  if (rc != 0)
   goto trunc;
  (*ndo->ndo_printf)(ndo, "%d tx power ", -(int)tx_attenuation);
  break;
  }

 case IEEE80211_RADIOTAP_DB_TX_ATTENUATION: {
  uint8_t db_tx_attenuation={0};

  rc = cpack_uint8(s, &db_tx_attenuation);
  if (rc != 0)
   goto trunc;
  (*ndo->ndo_printf)(ndo, "%ddB tx attenuation ", -(int)db_tx_attenuation);
  break;
  }

 case IEEE80211_RADIOTAP_DBM_TX_POWER: {
  int8_t dbm_tx_power={0};

  rc = cpack_uint8((s), (uint8_t*)(&dbm_tx_power));
  if (rc != 0)
   goto trunc;
  (*ndo->ndo_printf)(ndo, "%ddBm tx power ", dbm_tx_power);
  break;
  }

 case IEEE80211_RADIOTAP_ANTENNA: {
  uint8_t antenna={0};

  rc = cpack_uint8(s, &antenna);
  if (rc != 0)
   goto trunc;
  (*ndo->ndo_printf)(ndo, "antenna %u ", antenna);
  break;
  }

 case IEEE80211_RADIOTAP_DB_ANTSIGNAL: {
  uint8_t db_antsignal={0};

  rc = cpack_uint8(s, &db_antsignal);
  if (rc != 0)
   goto trunc;
  (*ndo->ndo_printf)(ndo, "%ddB signal ", db_antsignal);
  break;
  }

 case IEEE80211_RADIOTAP_DB_ANTNOISE: {
  uint8_t db_antnoise={0};

  rc = cpack_uint8(s, &db_antnoise);
  if (rc != 0)
   goto trunc;
  (*ndo->ndo_printf)(ndo, "%ddB noise ", db_antnoise);
  break;
  }

 case IEEE80211_RADIOTAP_RX_FLAGS: {
  uint16_t rx_flags={0};

  rc = cpack_uint16(s, &rx_flags);
  if (rc != 0)
   goto trunc;

  break;
  }

 case IEEE80211_RADIOTAP_XCHANNEL: {
  uint32_t flags={0};
  uint16_t frequency={0};
  uint8_t channel={0};
  uint8_t maxpower={0};

  rc = cpack_uint32(s, &flags);
  if (rc != 0)
   goto trunc;
  rc = cpack_uint16(s, &frequency);
  if (rc != 0)
   goto trunc;
  rc = cpack_uint8(s, &channel);
  if (rc != 0)
   goto trunc;
  rc = cpack_uint8(s, &maxpower);
  if (rc != 0)
   goto trunc;
  print_chaninfo(ndo, frequency, flags, presentflags);
  break;
  }

 case IEEE80211_RADIOTAP_MCS: {
  uint8_t known={0};
  uint8_t flags={0};
  uint8_t mcs_index={0};
  static const char *ht_bandwidth[4] = {
   "20 MHz",
   "40 MHz",
   "20 MHz (L)",
   "20 MHz (U)"
  };
  float htrate={0};

  rc = cpack_uint8(s, &known);
  if (rc != 0)
   goto trunc;
  rc = cpack_uint8(s, &flags);
  if (rc != 0)
   goto trunc;
  rc = cpack_uint8(s, &mcs_index);
  if (rc != 0)
   goto trunc;
  if (known & 0x02) {



   if (mcs_index <= 76) {



    if (known & (0x01|0x04)) {





     htrate =
      ieee80211_float_htrates
       [mcs_index]
       [((flags & 0x03) == 1 ? 1 : 0)]
       [((flags & 0x04) ? 1 : 0)];
    } else {





     htrate = 0.0;
    }
   } else {



    htrate = 0.0;
   }
   if (htrate != 0.0) {




    (*ndo->ndo_printf)(ndo, "%.1f Mb/s MCS %u ", htrate, mcs_index);
   } else {




    (*ndo->ndo_printf)(ndo, "MCS %u ", mcs_index);
   }
  }
  if (known & 0x01) {
   (*ndo->ndo_printf)(ndo, "%s ", ht_bandwidth[flags & 0x03])
                                                                 ;
  }
  if (known & 0x04) {
   (*ndo->ndo_printf)(ndo, "%s GI ", (flags & 0x04) ? "short" : "long")

                      ;
  }
  if (known & 0x08) {
   (*ndo->ndo_printf)(ndo, "%s ", (flags & 0x08) ? "greenfield" : "mixed")

                            ;
  }
  if (known & 0x10) {
   (*ndo->ndo_printf)(ndo, "%s FEC ", (flags & 0x10) ? "LDPC" : "BCC")

                    ;
  }
  if (known & 0x20) {
   (*ndo->ndo_printf)(ndo, "RX-STBC%u ", (flags & 0x60) >> 5)
                                                                                     ;
  }
  break;
  }

 case IEEE80211_RADIOTAP_AMPDU_STATUS: {
  uint32_t reference_num={0};
  uint16_t flags={0};
  uint8_t delim_crc={0};
  uint8_t reserved={0};

  rc = cpack_uint32(s, &reference_num);
  if (rc != 0)
   goto trunc;
  rc = cpack_uint16(s, &flags);
  if (rc != 0)
   goto trunc;
  rc = cpack_uint8(s, &delim_crc);
  if (rc != 0)
   goto trunc;
  rc = cpack_uint8(s, &reserved);
  if (rc != 0)
   goto trunc;

  break;
  }

 case IEEE80211_RADIOTAP_VHT: {
  uint16_t known={0};
  uint8_t flags={0};
  uint8_t bandwidth={0};
  uint8_t mcs_nss[4]={0};
  uint8_t coding={0};
  uint8_t group_id={0};
  uint16_t partial_aid={0};
  static const char *vht_bandwidth[32] = {
   "20 MHz",
   "40 MHz",
   "20 MHz (L)",
   "20 MHz (U)",
   "80 MHz",
   "80 MHz (L)",
   "80 MHz (U)",
   "80 MHz (LL)",
   "80 MHz (LU)",
   "80 MHz (UL)",
   "80 MHz (UU)",
   "160 MHz",
   "160 MHz (L)",
   "160 MHz (U)",
   "160 MHz (LL)",
   "160 MHz (LU)",
   "160 MHz (UL)",
   "160 MHz (UU)",
   "160 MHz (LLL)",
   "160 MHz (LLU)",
   "160 MHz (LUL)",
   "160 MHz (UUU)",
   "160 MHz (ULL)",
   "160 MHz (ULU)",
   "160 MHz (UUL)",
   "160 MHz (UUU)",
   "unknown (26)",
   "unknown (27)",
   "unknown (28)",
   "unknown (29)",
   "unknown (30)",
   "unknown (31)"
  };

  rc = cpack_uint16(s, &known);
  if (rc != 0)
   goto trunc;
  rc = cpack_uint8(s, &flags);
  if (rc != 0)
   goto trunc;
  rc = cpack_uint8(s, &bandwidth);
  if (rc != 0)
   goto trunc;
  for (i = 0; i < 4; i++) {
   rc = cpack_uint8(s, &mcs_nss[i]);
   if (rc != 0)
    goto trunc;
  }
  rc = cpack_uint8(s, &coding);
  if (rc != 0)
   goto trunc;
  rc = cpack_uint8(s, &group_id);
  if (rc != 0)
   goto trunc;
  rc = cpack_uint16(s, &partial_aid);
  if (rc != 0)
   goto trunc;
  for (i = 0; i < 4; i++) {
   u_int nss, mcs={0};
   nss = mcs_nss[i] & 0x0f;
   mcs = (mcs_nss[i] & 0xf0) >> 4;

   if (nss == 0)
    continue;

   (*ndo->ndo_printf)(ndo, "User %u MCS %u ", i, mcs);
   (*ndo->ndo_printf)(ndo, "%s FEC ", (coding & (0x01 << i)) ? "LDPC" : "BCC")

                    ;
  }
  if (known & 0x0040) {
   (*ndo->ndo_printf)(ndo, "%s ", vht_bandwidth[bandwidth & 0x1f])
                                                                      ;
  }
  if (known & 0x0004) {
   (*ndo->ndo_printf)(ndo, "%s GI ", (flags & 0x04) ? "short" : "long")

                      ;
  }
  break;
  }

 default:




  (*ndo->ndo_printf)(ndo, "[bit %u] ", bit);
  return -1;
 }

 return 0;

trunc:
 (*ndo->ndo_printf)(ndo, "%s", tstr);
 return rc;
}


static int
print_in_radiotap_namespace(netdissect_options *ndo,
                            struct cpack_state *s, uint8_t *flags,
                            uint32_t presentflags, int bit0)
{





 uint32_t present, next_present={0};
 int bitno={0};
 enum ieee80211_radiotap_type bit={0};
 int rc={0};

 for (present = presentflags; present; present = next_present) {



  next_present = present & (present - 1);






  bitno = (((present ^ next_present) >> 16) ? 16 + ((((present ^ next_present) >> 16) >> 8) ? 8 + (((((present ^ next_present) >> 16) >> 8) >> 4) ? 4 + ((((((present ^ next_present) >> 16) >> 8) >> 4) >> 2) ? 2 + (((((((present ^ next_present) >> 16) >> 8) >> 4) >> 2) & 2) ? 1 : 0) : (((((((present ^ next_present) >> 16) >> 8) >> 4)) & 2) ? 1 : 0)) : ((((((present ^ next_present) >> 16) >> 8)) >> 2) ? 2 + (((((((present ^ next_present) >> 16) >> 8)) >> 2) & 2) ? 1 : 0) : (((((((present ^ next_present) >> 16) >> 8))) & 2) ? 1 : 0))) : (((((present ^ next_present) >> 16)) >> 4) ? 4 + ((((((present ^ next_present) >> 16)) >> 4) >> 2) ? 2 + (((((((present ^ next_present) >> 16)) >> 4) >> 2) & 2) ? 1 : 0) : (((((((present ^ next_present) >> 16)) >> 4)) & 2) ? 1 : 0)) : ((((((present ^ next_present) >> 16))) >> 2) ? 2 + (((((((present ^ next_present) >> 16))) >> 2) & 2) ? 1 : 0) : (((((((present ^ next_present) >> 16)))) & 2) ? 1 : 0)))) : ((((present ^ next_present)) >> 8) ? 8 + (((((present ^ next_present)) >> 8) >> 4) ? 4 + ((((((present ^ next_present)) >> 8) >> 4) >> 2) ? 2 + (((((((present ^ next_present)) >> 8) >> 4) >> 2) & 2) ? 1 : 0) : (((((((present ^ next_present)) >> 8) >> 4)) & 2) ? 1 : 0)) : ((((((present ^ next_present)) >> 8)) >> 2) ? 2 + (((((((present ^ next_present)) >> 8)) >> 2) & 2) ? 1 : 0) : (((((((present ^ next_present)) >> 8))) & 2) ? 1 : 0))) : (((((present ^ next_present))) >> 4) ? 4 + ((((((present ^ next_present))) >> 4) >> 2) ? 2 + (((((((present ^ next_present))) >> 4) >> 2) & 2) ? 1 : 0) : (((((((present ^ next_present))) >> 4)) & 2) ? 1 : 0)) : ((((((present ^ next_present)))) >> 2) ? 2 + (((((((present ^ next_present)))) >> 2) & 2) ? 1 : 0) : (((((((present ^ next_present))))) & 2) ? 1 : 0)))));





  if (bitno >= IEEE80211_RADIOTAP_NAMESPACE)
   break;




  bit = (enum ieee80211_radiotap_type)(bit0 + bitno);

  rc = print_radiotap_field(ndo, s, bit, flags, presentflags);
  if (rc != 0)
   return rc;
 }

 return 0;
}

static u_int
ieee802_11_radio_print(netdissect_options *ndo,
                       const u_char *p, u_int length, u_int caplen)
{




 struct cpack_state cpacker={0};
 const struct ieee80211_radiotap_header *hdr={0};
 uint32_t presentflags={0};
 const uint32_t *presentp, *last_presentp={0};
 int vendor_namespace={0};
 uint8_t vendor_oui[3]={0};
 uint8_t vendor_subnamespace={0};
 uint16_t skip_length={0};
 int bit0={0};
 u_int len={0};
 uint8_t flags={0};
 int pad={0};
 u_int fcslen={0};

 if (caplen < sizeof(*hdr)) {
  (*ndo->ndo_printf)(ndo, "%s", tstr);
  return caplen;
 }

 hdr = (const struct ieee80211_radiotap_header *)p;

 len = ((uint16_t)(((uint16_t)(*((const uint8_t *)(&hdr->it_len) + 1)) << 8) | ((uint16_t)(*((const uint8_t *)(&hdr->it_len) + 0)) << 0)));




 if (caplen < len) {
  (*ndo->ndo_printf)(ndo, "%s", tstr);
  return caplen;
 }
 cpack_init(&cpacker, (const uint8_t *)hdr, len);
 cpack_advance(&cpacker, sizeof(*hdr));
 for (last_presentp = &hdr->it_present;
      (const u_char*)(last_presentp + 1) <= p + len &&
      (((uint32_t)(((uint32_t)(*((const uint8_t *)(last_presentp) + 3)) << 24) | ((uint32_t)(*((const uint8_t *)(last_presentp) + 2)) << 16) | ((uint32_t)(*((const uint8_t *)(last_presentp) + 1)) << 8) | ((uint32_t)(*((const uint8_t *)(last_presentp) + 0)) << 0))) & (1U << IEEE80211_RADIOTAP_EXT)) != 0;
      last_presentp++)
   cpack_advance(&cpacker, sizeof(hdr->it_present));


 if ((const u_char*)(last_presentp + 1) > p + len) {
  (*ndo->ndo_printf)(ndo, "%s", tstr);
  return caplen;
 }




 bit0 = 0;
 vendor_namespace = 0;
 memset(vendor_oui, 0, 3);
 vendor_subnamespace = 0;
 skip_length = 0;

 flags = 0;

 pad = 0;

 fcslen = 0;
 for (presentp = &hdr->it_present; presentp <= last_presentp;
     presentp++) {
  presentflags = ((uint32_t)(((uint32_t)(*((const uint8_t *)(presentp) + 3)) << 24) | ((uint32_t)(*((const uint8_t *)(presentp) + 2)) << 16) | ((uint32_t)(*((const uint8_t *)(presentp) + 1)) << 8) | ((uint32_t)(*((const uint8_t *)(presentp) + 0)) << 0)));




  if (vendor_namespace) {






   if (cpack_advance(&cpacker, skip_length) != 0) {



    break;
   }





   skip_length = 0;
  } else {
   if (print_in_radiotap_namespace(ndo, &cpacker,
       &flags, presentflags, bit0) != 0) {




    break;
   }
  }





  switch (presentflags &
      ((1U << IEEE80211_RADIOTAP_NAMESPACE)|(1U << IEEE80211_RADIOTAP_VENDOR_NAMESPACE))) {

  case 0:





   bit0 += 32;
   break;

  case (1U << IEEE80211_RADIOTAP_NAMESPACE):






   bit0 = 0;
   vendor_namespace = 0;
   memset(vendor_oui, 0, 3);
   vendor_subnamespace = 0;
   skip_length = 0;
   break;

  case (1U << IEEE80211_RADIOTAP_VENDOR_NAMESPACE):







   bit0 = 0;
   vendor_namespace = 1;
   if ((cpack_align_and_reserve(&cpacker, 2)) == 
                                                ((void *)0)
                                                    ) {
    (*ndo->ndo_printf)(ndo, "%s", tstr);
    break;
   }
   if (cpack_uint8(&cpacker, &vendor_oui[0]) != 0) {
    (*ndo->ndo_printf)(ndo, "%s", tstr);
    break;
   }
   if (cpack_uint8(&cpacker, &vendor_oui[1]) != 0) {
    (*ndo->ndo_printf)(ndo, "%s", tstr);
    break;
   }
   if (cpack_uint8(&cpacker, &vendor_oui[2]) != 0) {
    (*ndo->ndo_printf)(ndo, "%s", tstr);
    break;
   }
   if (cpack_uint8(&cpacker, &vendor_subnamespace) != 0) {
    (*ndo->ndo_printf)(ndo, "%s", tstr);
    break;
   }
   if (cpack_uint16(&cpacker, &skip_length) != 0) {
    (*ndo->ndo_printf)(ndo, "%s", tstr);
    break;
   }
   break;

  default:





   break;
  }
 }

 if (flags & 0x20)
  pad = 1;
 if (flags & 0x10)
  fcslen = 4;
 return len + ieee802_11_print(ndo, p + len, length - len, caplen - len, pad,
     fcslen);






}

static u_int
ieee802_11_avs_radio_print(netdissect_options *ndo,
                           const u_char *p, u_int length, u_int caplen)
{
 uint32_t caphdr_len={0};

 if (caplen < 8) {
  (*ndo->ndo_printf)(ndo, "%s", tstr);
  return caplen;
 }

 caphdr_len = EXTRACT_32BITS(p + 4);
 if (caphdr_len < 8) {





  (*ndo->ndo_printf)(ndo, "%s", tstr);
  return caplen;
 }

 if (caplen < caphdr_len) {
  (*ndo->ndo_printf)(ndo, "%s", tstr);
  return caplen;
 }

 return caphdr_len + ieee802_11_print(ndo, p + caphdr_len,
     length - caphdr_len, caplen - caphdr_len, 0, 0);
}
u_int
prism_if_print(netdissect_options *ndo,
               const struct pcap_pkthdr *h, const u_char *p)
{
 u_int caplen = h->caplen;
 u_int length = h->len;
 uint32_t msgcode={0};

 if (caplen < 4) {
  (*ndo->ndo_printf)(ndo, "%s", tstr);
  return caplen;
 }

 msgcode = EXTRACT_32BITS(p);
 if (msgcode == 0x80211001 ||
     msgcode == 0x80211002)
  return ieee802_11_avs_radio_print(ndo, p, length, caplen);

 if (caplen < 144) {
  (*ndo->ndo_printf)(ndo, "%s", tstr);
  return caplen;
 }

 return 144 + ieee802_11_print(ndo, p + 144,
     length - 144, caplen - 144, 0, 0);
}





u_int
ieee802_11_radio_if_print(netdissect_options *ndo,
                          const struct pcap_pkthdr *h, const u_char *p)
{
 return ieee802_11_radio_print(ndo, p, h->len, h->caplen);
}






u_int
ieee802_11_radio_avs_if_print(netdissect_options *ndo,
                              const struct pcap_pkthdr *h, const u_char *p)
{
 return ieee802_11_avs_radio_print(ndo, p, h->len, h->caplen);
}
