











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
struct ether_header {
 uint8_t ether_dhost[6];
 uint8_t ether_shost[6];
 uint16_t ether_length_type;
};
extern const struct tok nlpid_values[];
static inline uint16_t
EXTRACT_16BITS(const void *p)
{
 return ((uint16_t)ntohs(*(const uint16_t *)(p)));
}

static inline uint32_t
EXTRACT_32BITS(const void *p)
{
 return ((uint32_t)ntohl(*(const uint32_t *)(p)));
}

static inline uint64_t
EXTRACT_64BITS(const void *p)
{
 return ((uint64_t)(((uint64_t)ntohl(*((const uint32_t *)(p) + 0))) << 32 |
  ((uint64_t)ntohl(*((const uint32_t *)(p) + 1))) << 0));

}
extern const struct tok gmpls_link_prot_values[];
extern const struct tok gmpls_switch_cap_values[];
extern const struct tok gmpls_switch_cap_tsc_indication_values[];
extern const struct tok gmpls_encoding_values[];
extern const struct tok gmpls_payload_values[];
extern const struct tok diffserv_te_bc_values[];
extern const struct tok lmp_sd_service_config_cpsa_link_type_values[];
extern const struct tok lmp_sd_service_config_cpsa_signal_type_sdh_values[];
extern const struct tok lmp_sd_service_config_cpsa_signal_type_sonet_values[];
extern const struct tok oui_values[];
extern const struct tok smi_values[];
extern const struct tok signature_check_values[];
extern int signature_verify(netdissect_options *, const u_char *, u_int,
                            const u_char *, void (*)(void *), const void *);

static const char tstr[] = " [|isis]";
static const struct tok isis_pdu_values[] = {
    { 15, "L1 Lan IIH"},
    { 16, "L2 Lan IIH"},
    { 17, "p2p IIH"},
    { 18, "L1 LSP"},
    { 20, "L2 LSP"},
    { 24, "L1 CSNP"},
    { 25, "L2 CSNP"},
    { 26, "L1 PSNP"},
    { 27, "L2 PSNP"},
    { 0, 
        ((void *)0)
            }
};
static const struct tok isis_tlv_values[] = {
    { 1, "Area address(es)"},
    { 2, "IS Reachability"},
    { 3, "ES Neighbor(s)"},
    { 4, "Partition DIS"},
    { 5, "Prefix Neighbors"},
    { 6, "IS Neighbor(s)"},
    { 7, "IS Neighbor(s) (variable length)"},
    { 8, "Padding"},
    { 9, "LSP entries"},
    { 10, "Authentication"},
    { 12, "Checksum"},
    { 13, "Purge Originator Identifier"},
    { 14, "LSP Buffersize"},
    { 22, "Extended IS Reachability"},
    { 24, "IS Alias ID"},
    { 42, "DECnet Phase IV"},
    { 66, "Lucent Proprietary"},
    { 128, "IPv4 Internal Reachability"},
    { 129, "Protocols supported"},
    { 130, "IPv4 External Reachability"},
    { 131, "Inter-Domain Information Type"},
    { 132, "IPv4 Interface address(es)"},
    { 133, "IPv4 authentication (deprecated)"},
    { 134, "Traffic Engineering Router ID"},
    { 135, "Extended IPv4 Reachability"},
    { 138, "Shared Risk Link Group"},
    { 143, "Multi-Topology-Aware Port Capability"},
    { 144, "Multi-Topology Capability"},
    { 176, "Nortel Proprietary"},
    { 177, "Nortel Proprietary"},
    { 137, "Hostname"},
    { 211, "Restart Signaling"},
    { 222, "Multi Topology IS Reachability"},
    { 229, "Multi Topology"},
    { 232, "IPv6 Interface address(es)"},
    { 235, "Multi-Topology IPv4 Reachability"},
    { 236, "IPv6 reachability"},
    { 237, "Multi-Topology IP6 Reachability"},
    { 240, "Point-to-point Adjacency State"},
    { 241, "Hello PDU Sequence Number"},
    { 250, "Vendor Private"},
    { 0, 
        ((void *)0) 
             }
};
static const struct tok esis_option_values[] = {
    { 129, "Protocols supported"},
    { 195, "QoS Maintenance" },
    { 197, "Security" },
    { 198, "ES Configuration Time" },
    { 205, "Priority" },
    { 225, "Addressk Mask" },
    { 226, "SNPA Mask" },
    { 0, 
        ((void *)0) 
             }
};
static const struct tok clnp_option_values[] = {
    { 193, "Discard Reason"},
    { 205, "Priority"},
    { 195, "QoS Maintenance"},
    { 197, "Security"},
    { 200, "Source Routing"},
    { 203, "Route Recording"},
    { 204, "Padding"},
    { 0, 
        ((void *)0) 
             }
};

static const struct tok clnp_option_rfd_class_values[] = {
    { 0x0, "General"},
    { 0x8, "Address"},
    { 0x9, "Source Routeing"},
    { 0xa, "Lifetime"},
    { 0xb, "PDU Discarded"},
    { 0xc, "Reassembly"},
    { 0, 
        ((void *)0) 
             }
};

static const struct tok clnp_option_rfd_general_values[] = {
    { 0x0, "Reason not specified"},
    { 0x1, "Protocol procedure error"},
    { 0x2, "Incorrect checksum"},
    { 0x3, "PDU discarded due to congestion"},
    { 0x4, "Header syntax error (cannot be parsed)"},
    { 0x5, "Segmentation needed but not permitted"},
    { 0x6, "Incomplete PDU received"},
    { 0x7, "Duplicate option"},
    { 0, 
        ((void *)0) 
             }
};

static const struct tok clnp_option_rfd_address_values[] = {
    { 0x0, "Destination address unreachable"},
    { 0x1, "Destination address unknown"},
    { 0, 
        ((void *)0) 
             }
};

static const struct tok clnp_option_rfd_source_routeing_values[] = {
    { 0x0, "Unspecified source routeing error"},
    { 0x1, "Syntax error in source routeing field"},
    { 0x2, "Unknown address in source routeing field"},
    { 0x3, "Path not acceptable"},
    { 0, 
        ((void *)0) 
             }
};

static const struct tok clnp_option_rfd_lifetime_values[] = {
    { 0x0, "Lifetime expired while data unit in transit"},
    { 0x1, "Lifetime expired during reassembly"},
    { 0, 
        ((void *)0) 
             }
};

static const struct tok clnp_option_rfd_pdu_discard_values[] = {
    { 0x0, "Unsupported option not specified"},
    { 0x1, "Unsupported protocol version"},
    { 0x2, "Unsupported security option"},
    { 0x3, "Unsupported source routeing option"},
    { 0x4, "Unsupported recording of route option"},
    { 0, 
        ((void *)0) 
             }
};

static const struct tok clnp_option_rfd_reassembly_values[] = {
    { 0x0, "Reassembly interference"},
    { 0, 
        ((void *)0) 
             }
};


static const struct tok *clnp_option_rfd_error_class[] = {
    clnp_option_rfd_general_values,
    
   ((void *)0)
       ,
    
   ((void *)0)
       ,
    
   ((void *)0)
       ,
    
   ((void *)0)
       ,
    
   ((void *)0)
       ,
    
   ((void *)0)
       ,
    
   ((void *)0)
       ,
    clnp_option_rfd_address_values,
    clnp_option_rfd_source_routeing_values,
    clnp_option_rfd_lifetime_values,
    clnp_option_rfd_pdu_discard_values,
    clnp_option_rfd_reassembly_values,
    
   ((void *)0)
       ,
    
   ((void *)0)
       ,
    
   ((void *)0)

};







static const struct tok clnp_option_scope_values[] = {
    { 0x40, "Source Address Specific"},
    { 0x80, "Destination Address Specific"},
    { 0xc0, "Globally unique"},
    { 0, 
        ((void *)0) 
             }
};

static const struct tok clnp_option_sr_rr_values[] = {
    { 0x0, "partial"},
    { 0x1, "complete"},
    { 0, 
        ((void *)0) 
             }
};

static const struct tok clnp_option_sr_rr_string_values[] = {
    { 200, "source routing"},
    { 203, "recording of route in progress"},
    { 0, 
        ((void *)0) 
             }
};

static const struct tok clnp_option_qos_global_values[] = {
    { 0x20, "reserved"},
    { 0x10, "sequencing vs. delay"},
    { 0x08, "congested"},
    { 0x04, "delay vs. cost"},
    { 0x02, "error vs. delay"},
    { 0x01, "error vs. cost"},
    { 0, 
        ((void *)0) 
             }
};
static const struct tok isis_ext_is_reach_subtlv_values[] = {
    { 3, "Administrative groups" },
    { 4, "Link Local/Remote Identifier" },
    { 5, "Link Remote Identifier" },
    { 6, "IPv4 interface address" },
    { 8, "IPv4 neighbor address" },
    { 9, "Maximum link bandwidth" },
    { 10, "Reservable link bandwidth" },
    { 11, "Unreserved bandwidth" },
    { 18, "Traffic Engineering Metric" },
    { 19, "Link Attribute" },
    { 20, "Link Protection Type" },
    { 21, "Interface Switching Capability" },
    { 12, "Bandwidth Constraints (old)" },
    { 22, "Bandwidth Constraints" },
    { 29, "SPB Metric" },
    { 250, "Reserved for cisco specific extensions" },
    { 251, "Reserved for cisco specific extensions" },
    { 252, "Reserved for cisco specific extensions" },
    { 253, "Reserved for cisco specific extensions" },
    { 254, "Reserved for cisco specific extensions" },
    { 255, "Reserved for future expansion" },
    { 0, 
        ((void *)0) 
             }
};





static const struct tok isis_ext_ip_reach_subtlv_values[] = {
    { 1, "32-Bit Administrative tag" },
    { 2, "64-Bit Administrative tag" },
    { 117, "Management Prefix Color" },
    { 0, 
        ((void *)0) 
             }
};

static const struct tok isis_subtlv_link_attribute_values[] = {
    { 0x01, "Local Protection Available" },
    { 0x02, "Link excluded from local protection path" },
    { 0x04, "Local maintenance required"},
    { 0, 
        ((void *)0) 
             }
};







static const struct tok isis_subtlv_auth_values[] = {
    { 1, "simple text password"},
    { 3, "Generic Crypto key-id"},
    { 54, "HMAC-MD5 password"},
    { 255, "Routing Domain private password"},
    { 0, 
        ((void *)0) 
             }
};





static const struct tok isis_subtlv_idrp_values[] = {
    { 0, "Reserved"},
    { 1, "Routing-Domain Specific"},
    { 2, "AS Number Tag"},
    { 0, 
        ((void *)0)
            }
};
static const struct tok isis_mt_port_cap_subtlv_values[] = {
    { 4, "SPB MCID" },
    { 5, "SPB Digest" },
    { 6, "SPB BVID" },
    { 0, 
        ((void *)0) 
             }
};

static const struct tok isis_mt_capability_subtlv_values[] = {
    { 1, "SPB Instance" },
    { 3, "SPBM Service Identifier and Unicast Address" },
    { 0, 
        ((void *)0) 
             }
};

struct isis_spb_mcid {
  uint8_t format_id;
  uint8_t name[32];
  uint8_t revision_lvl[2];
  uint8_t digest[16];
};

struct isis_subtlv_spb_mcid {
  struct isis_spb_mcid mcid;
  struct isis_spb_mcid aux_mcid;
};

struct isis_subtlv_spb_instance {
  uint8_t cist_root_id[8];
  uint8_t cist_external_root_path_cost[4];
  uint8_t bridge_priority[2];
  uint8_t spsourceid[4];
  uint8_t no_of_trees;
};





static const struct tok clnp_flag_values[] = {
    { 0x80, "Segmentation permitted"},
    { 0x40, "more Segments"},
    { 0x20, "request Error Report"},
    { 0, 
        ((void *)0)
            }
};
static const struct tok isis_mt_flag_values[] = {
    { 0x4000, "ATT bit set"},
    { 0x8000, "Overload bit set"},
    { 0, 
        ((void *)0)
            }
};
static const struct tok isis_mt_values[] = {
    { 0, "IPv4 unicast"},
    { 1, "In-Band Management"},
    { 2, "IPv6 unicast"},
    { 3, "Multicast"},
    { 4095, "Development, Experimental or Proprietary"},
    { 0, 
        ((void *)0) 
             }
};

static const struct tok isis_iih_circuit_type_values[] = {
    { 1, "Level 1 only"},
    { 2, "Level 2 only"},
    { 3, "Level 1, Level 2"},
    { 0, 
        ((void *)0)
            }
};






static const struct tok isis_lsp_istype_values[] = {
    { 0, "Unused 0x0 (invalid)"},
    { 1, "L1 IS"},
    { 2, "Unused 0x2 (invalid)"},
    { 3, "L2 IS"},
    { 0, 
        ((void *)0) 
             }
};
static const struct tok isis_ptp_adjancey_values[] = {
    { 0, "Up" },
    { 1, "Initializing" },
    { 2, "Down" },
    { 0, 
        ((void *)0)
            }
};

struct isis_tlv_ptp_adj {
    uint8_t adjacency_state;
    uint8_t extd_local_circuit_id[4];
    uint8_t neighbor_sysid[6];
    uint8_t neighbor_extd_local_circuit_id[4];
};

static void osi_print_cksum(netdissect_options *, const uint8_t *pptr,
       uint16_t checksum, int checksum_offset, u_int length);
static int clnp_print(netdissect_options *, const uint8_t *, u_int);
static void esis_print(netdissect_options *, const uint8_t *, u_int);
static int isis_print(netdissect_options *, const uint8_t *, u_int);

struct isis_metric_block {
    uint8_t metric_default;
    uint8_t metric_delay;
    uint8_t metric_expense;
    uint8_t metric_error;
};

struct isis_tlv_is_reach {
    struct isis_metric_block isis_metric_block;
    uint8_t neighbor_nodeid[6 +1];
};

struct isis_tlv_es_reach {
    struct isis_metric_block isis_metric_block;
    uint8_t neighbor_sysid[6];
};

struct isis_tlv_ip_reach {
    struct isis_metric_block isis_metric_block;
    uint8_t prefix[4];
    uint8_t mask[4];
};

static const struct tok isis_is_reach_virtual_values[] = {
    { 0, "IsNotVirtual"},
    { 1, "IsVirtual"},
    { 0, 
        ((void *)0) 
             }
};

static const struct tok isis_restart_flag_values[] = {
    { 0x1, "Restart Request"},
    { 0x2, "Restart Acknowledgement"},
    { 0x4, "Suppress adjacency advertisement"},
    { 0, 
        ((void *)0) 
             }
};

struct isis_common_header {
    uint8_t nlpid;
    uint8_t fixed_len;
    uint8_t version;
    uint8_t id_length;
    uint8_t pdu_type;
    uint8_t pdu_version;
    uint8_t reserved;
    uint8_t max_area;
};

struct isis_iih_lan_header {
    uint8_t circuit_type;
    uint8_t source_id[6];
    uint8_t holding_time[2];
    uint8_t pdu_len[2];
    uint8_t priority;
    uint8_t lan_id[6 +1];
};

struct isis_iih_ptp_header {
    uint8_t circuit_type;
    uint8_t source_id[6];
    uint8_t holding_time[2];
    uint8_t pdu_len[2];
    uint8_t circuit_id;
};

struct isis_lsp_header {
    uint8_t pdu_len[2];
    uint8_t remaining_lifetime[2];
    uint8_t lsp_id[6 +2];
    uint8_t sequence_number[4];
    uint8_t checksum[2];
    uint8_t typeblock;
};

struct isis_csnp_header {
    uint8_t pdu_len[2];
    uint8_t source_id[6 +1];
    uint8_t start_lsp_id[6 +2];
    uint8_t end_lsp_id[6 +2];
};

struct isis_psnp_header {
    uint8_t pdu_len[2];
    uint8_t source_id[6 +1];
};

struct isis_tlv_lsp {
    uint8_t remaining_lifetime[2];
    uint8_t lsp_id[6 +2];
    uint8_t sequence_number[4];
    uint8_t checksum[2];
};
void
isoclns_print(netdissect_options *ndo, const uint8_t *p, u_int length)
{
 if (!((((sizeof(*p)) > 0) || ((sizeof(*p)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*p)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*p) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*p))))) {
  (*ndo->ndo_printf)(ndo, "|OSI");
  return;
 }

 if (ndo->ndo_eflag)
  (*ndo->ndo_printf)(ndo, "OSI NLPID %s (0x%02x): ", tok2str(nlpid_values, "Unknown", *p), *p);

 switch (*p) {

 case 0x81:
  if (!clnp_print(ndo, p, length))
   print_unknown_data(ndo, p, "\n\t", length);
  break;

 case 0x82:
  esis_print(ndo, p, length);
  return;

 case 0x83:
  if (!isis_print(ndo, p, length))
   print_unknown_data(ndo, p, "\n\t", length);
  break;

 case 0x00:
  (*ndo->ndo_printf)(ndo, "%slength: %u", ndo->ndo_eflag ? "" : ", ", length);
  break;

 case 0x08:
  q933_print(ndo, p + 1, length - 1);
  break;

 case 0xcc:
  ip_print(ndo, p + 1, length - 1);
  break;

 case 0x8e:
  ip6_print(ndo, p + 1, length - 1);
  break;

 case 0xcf:
  ppp_print(ndo, p + 1, length - 1);
  break;

 default:
  if (!ndo->ndo_eflag)
   (*ndo->ndo_printf)(ndo, "OSI NLPID 0x%02x unknown", *p);
  (*ndo->ndo_printf)(ndo, "%slength: %u", ndo->ndo_eflag ? "" : ", ", length);
  if (length > 1)
   print_unknown_data(ndo, p, "\n\t", length);
  break;
 }
}







static const struct tok clnp_pdu_values[] = {
    { 1, "Error Report"},
    { 29, "MD"},
    { 28, "Data"},
    { 30, "Echo Request"},
    { 31, "Echo Response"},
    { 0, 
        ((void *)0) 
             }
};

struct clnp_header_t {
    uint8_t nlpid;
    uint8_t length_indicator;
    uint8_t version;
    uint8_t lifetime;
    uint8_t type;
    uint8_t segment_length[2];
    uint8_t cksum[2];
};

struct clnp_segment_header_t {
    uint8_t data_unit_id[2];
    uint8_t segment_offset[2];
    uint8_t total_length[2];
};






static int
clnp_print(netdissect_options *ndo,
           const uint8_t *pptr, u_int length)
{
 const uint8_t *optr,*source_address,*dest_address={0};
        u_int li,tlen,nsap_offset,source_address_length,dest_address_length, clnp_pdu_type, clnp_flags={0};
 const struct clnp_header_t *clnp_header={0};
 const struct clnp_segment_header_t *clnp_segment_header={0};
        uint8_t rfd_error_major,rfd_error_minor={0};

 clnp_header = (const struct clnp_header_t *) pptr;
        if (!((((sizeof(*clnp_header)) > 0) || ((sizeof(*clnp_header)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*clnp_header)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*clnp_header) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*clnp_header))))) goto trunc;

        li = clnp_header->length_indicator;
        optr = pptr;

        if (!ndo->ndo_eflag)
            (*ndo->ndo_printf)(ndo, "CLNP");





        if (clnp_header->version != 1) {
            (*ndo->ndo_printf)(ndo, "version %d packet not supported", clnp_header->version);
            return (0);
        }

 if (li > length) {
            (*ndo->ndo_printf)(ndo, " length indicator(%u) > PDU size (%u)!", li, length);
            return (0);
 }

        if (li < sizeof(struct clnp_header_t)) {
            (*ndo->ndo_printf)(ndo, " length indicator %u < min PDU size:", li);
            while (pptr < ndo->ndo_snapend)
                (*ndo->ndo_printf)(ndo, "%02X", *pptr++);
            return (0);
        }



        clnp_pdu_type = clnp_header->type & 0x1F;
        clnp_flags = clnp_header->type & 0xE0;

        pptr += sizeof(struct clnp_header_t);
        li -= sizeof(struct clnp_header_t);

        if (li < 1) {
            (*ndo->ndo_printf)(ndo, "li < size of fixed part of CLNP header and addresses");
            return (0);
        }
 if (!((((sizeof(*pptr)) > 0) || ((sizeof(*pptr)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*pptr)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*pptr) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*pptr))))) goto trunc;
        dest_address_length = *pptr;
        pptr += 1;
        li -= 1;
        if (li < dest_address_length) {
            (*ndo->ndo_printf)(ndo, "li < size of fixed part of CLNP header and addresses");
            return (0);
        }
        if (!((((dest_address_length) > 0) || ((dest_address_length) == 0)) && ((uintptr_t)ndo->ndo_snapend - (dest_address_length) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*pptr) <= (uintptr_t)ndo->ndo_snapend - (dest_address_length)))) goto trunc;
        dest_address = pptr;
        pptr += dest_address_length;
        li -= dest_address_length;

        if (li < 1) {
            (*ndo->ndo_printf)(ndo, "li < size of fixed part of CLNP header and addresses");
            return (0);
        }
 if (!((((sizeof(*pptr)) > 0) || ((sizeof(*pptr)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*pptr)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*pptr) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*pptr))))) goto trunc;
        source_address_length = *pptr;
        pptr += 1;
        li -= 1;
        if (li < source_address_length) {
            (*ndo->ndo_printf)(ndo, "li < size of fixed part of CLNP header and addresses");
            return (0);
        }
        if (!((((source_address_length) > 0) || ((source_address_length) == 0)) && ((uintptr_t)ndo->ndo_snapend - (source_address_length) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*pptr) <= (uintptr_t)ndo->ndo_snapend - (source_address_length)))) goto trunc;
        source_address = pptr;
        pptr += source_address_length;
        li -= source_address_length;

        if (ndo->ndo_vflag < 1) {
            (*ndo->ndo_printf)(ndo, "%s%s > %s, %s, length %u", ndo->ndo_eflag ? "" : ", ", isonsap_string(ndo, source_address, source_address_length), isonsap_string(ndo, dest_address, dest_address_length), tok2str(clnp_pdu_values,"unknown (%u)",clnp_pdu_type), length)




                           ;
            return (1);
        }
        (*ndo->ndo_printf)(ndo, "%slength %u", ndo->ndo_eflag ? "" : ", ", length);

        (*ndo->ndo_printf)(ndo, "\n\t%s PDU, hlen: %u, v: %u, lifetime: %u.%us, Segment PDU length: %u, checksum: 0x%04x", tok2str(clnp_pdu_values, "unknown (%u)",clnp_pdu_type), clnp_header->length_indicator, clnp_header->version, clnp_header->lifetime/2, (clnp_header->lifetime%2)*5, EXTRACT_16BITS(clnp_header->segment_length), EXTRACT_16BITS(clnp_header->cksum))






                                                   ;

        osi_print_cksum(ndo, optr, EXTRACT_16BITS(clnp_header->cksum), 7,
                        clnp_header->length_indicator);

        (*ndo->ndo_printf)(ndo, "\n\tFlags [%s]", bittok2str(clnp_flag_values, "none", clnp_flags))
                                                                 ;

        (*ndo->ndo_printf)(ndo, "\n\tsource address (length %u): %s\n\tdest   address (length %u): %s", source_address_length, isonsap_string(ndo, source_address, source_address_length), dest_address_length, isonsap_string(ndo, dest_address, dest_address_length))



                                                                       ;

        if (clnp_flags & 0x80) {
                if (li < sizeof(const struct clnp_segment_header_t)) {
                    (*ndo->ndo_printf)(ndo, "li < size of fixed part of CLNP header, addresses, and segment part");
                    return (0);
                }
             clnp_segment_header = (const struct clnp_segment_header_t *) pptr;
                if (!((((sizeof(*clnp_segment_header)) > 0) || ((sizeof(*clnp_segment_header)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*clnp_segment_header)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*clnp_segment_header) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*clnp_segment_header))))) goto trunc;
                (*ndo->ndo_printf)(ndo, "\n\tData Unit ID: 0x%04x, Segment Offset: %u, Total PDU Length: %u", EXTRACT_16BITS(clnp_segment_header->data_unit_id), EXTRACT_16BITS(clnp_segment_header->segment_offset), EXTRACT_16BITS(clnp_segment_header->total_length))


                                                                          ;
                pptr+=sizeof(const struct clnp_segment_header_t);
                li-=sizeof(const struct clnp_segment_header_t);
        }


        while (li >= 2) {
            u_int op, opli={0};
            const uint8_t *tptr={0};

            if (li < 2) {
                (*ndo->ndo_printf)(ndo, ", bad opts/li");
                return (0);
            }
            if (!((((2) > 0) || ((2) == 0)) && ((uintptr_t)ndo->ndo_snapend - (2) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*pptr) <= (uintptr_t)ndo->ndo_snapend - (2)))) goto trunc;
            op = *pptr++;
            opli = *pptr++;
            li -= 2;
            if (opli > li) {
                (*ndo->ndo_printf)(ndo, ", opt (%d) too long", op);
                return (0);
            }
            if (!((((opli) > 0) || ((opli) == 0)) && ((uintptr_t)ndo->ndo_snapend - (opli) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*pptr) <= (uintptr_t)ndo->ndo_snapend - (opli)))) goto trunc;
            li -= opli;
            tptr = pptr;
            tlen = opli;

            (*ndo->ndo_printf)(ndo, "\n\t  %s Option #%u, length %u, value: ", tok2str(clnp_option_values,"Unknown",op), op, opli)


                         ;
            switch (op) {


            case 203:
            case 200:
                    if (tlen < 2) {
                            (*ndo->ndo_printf)(ndo, ", bad opt len");
                            return (0);
                    }
                    (*ndo->ndo_printf)(ndo, "%s %s", tok2str(clnp_option_sr_rr_values,"Unknown",*tptr), tok2str(clnp_option_sr_rr_string_values, "Unknown Option %u", op))

                                                                                              ;
                    nsap_offset=*(tptr+1);
                    if (nsap_offset == 0) {
                            (*ndo->ndo_printf)(ndo, " Bad NSAP offset (0)");
                            break;
                    }
                    nsap_offset-=1;
                    if (nsap_offset > tlen) {
                            (*ndo->ndo_printf)(ndo, " Bad NSAP offset (past end of option)");
                            break;
                    }
                    tptr+=nsap_offset;
                    tlen-=nsap_offset;
                    while (tlen > 0) {
                            source_address_length=*tptr;
                            if (tlen < source_address_length+1) {
                                    (*ndo->ndo_printf)(ndo, "\n\t    NSAP address goes past end of option");
                                    break;
                            }
                            if (source_address_length > 0) {
                                    source_address=(tptr+1);
                                    if (!((((source_address_length) > 0) || ((source_address_length) == 0)) && ((uintptr_t)ndo->ndo_snapend - (source_address_length) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*source_address) <= (uintptr_t)ndo->ndo_snapend - (source_address_length)))) goto trunc;
                                    (*ndo->ndo_printf)(ndo, "\n\t    NSAP address (length %u): %s", source_address_length, isonsap_string(ndo, source_address, source_address_length))

                                                                                                       ;
                            }
                            tlen-=source_address_length+1;
                    }
                    break;

            case 205:
                    if (tlen < 1) {
                            (*ndo->ndo_printf)(ndo, ", bad opt len");
                            return (0);
                    }
                    (*ndo->ndo_printf)(ndo, "0x%1x", *tptr&0x0f);
                    break;

            case 195:
                    if (tlen < 1) {
                            (*ndo->ndo_printf)(ndo, ", bad opt len");
                            return (0);
                    }
                    (*ndo->ndo_printf)(ndo, "\n\t    Format Code: %s", tok2str(clnp_option_scope_values, "Reserved", *tptr&0xc0))
                                                                                                        ;

                    if ((*tptr&0xc0) == 0xc0)
                            (*ndo->ndo_printf)(ndo, "\n\t    QoS Flags [%s]", bittok2str(clnp_option_qos_global_values, "none", *tptr&0x3f))


                                                                                  ;
                    break;

            case 197:
                    if (tlen < 2) {
                            (*ndo->ndo_printf)(ndo, ", bad opt len");
                            return (0);
                    }
                    (*ndo->ndo_printf)(ndo, "\n\t    Format Code: %s, Security-Level %u", tok2str(clnp_option_scope_values,"Reserved",*tptr&0xc0), *(tptr+1))

                                      ;
                    break;

            case 193:
                if (tlen < 1) {
                        (*ndo->ndo_printf)(ndo, ", bad opt len");
                        return (0);
                }
                rfd_error_major = (*tptr&0xf0) >> 4;
                rfd_error_minor = *tptr&0x0f;
                (*ndo->ndo_printf)(ndo, "\n\t    Class: %s Error (0x%01x), %s (0x%01x)", tok2str(clnp_option_rfd_class_values,"Unknown",rfd_error_major), rfd_error_major, tok2str(clnp_option_rfd_error_class[rfd_error_major],"Unknown",rfd_error_minor), rfd_error_minor)



                                        ;
                break;

            case 204:
                    (*ndo->ndo_printf)(ndo, "padding data");
                break;






            default:
                print_unknown_data(ndo, tptr, "\n\t  ", opli);
                break;
            }
            if (ndo->ndo_vflag > 1)
                print_unknown_data(ndo, pptr, "\n\t  ", opli);
            pptr += opli;
        }

        switch (clnp_pdu_type) {

        case 1:
        case 31:
            if (!((((sizeof(*pptr)) > 0) || ((sizeof(*pptr)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*pptr)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*pptr) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*pptr))))) goto trunc;
            if (*(pptr) == 0x81) {
                (*ndo->ndo_printf)(ndo, "\n\t-----original packet-----\n\t");

                clnp_print(ndo, pptr, length - clnp_header->length_indicator);
                break;
            }

        case 28:
        case 29:
        case 30:

        default:

            if (length-(pptr-optr) > 0) {
                (*ndo->ndo_printf)(ndo, "\n\t  undecoded non-header data, length %u", length-clnp_header->length_indicator);
                print_unknown_data(ndo, pptr, "\n\t  ", length - (pptr - optr));
            }
        }

        return (1);

 trunc:
    (*ndo->ndo_printf)(ndo, "[|clnp]");
    return (1);

}






static const struct tok esis_pdu_values[] = {
    { 6, "redirect"},
    { 2, "ESH"},
    { 4, "ISH"},
    { 0, 
        ((void *)0) 
             }
};

struct esis_header_t {
 uint8_t nlpid;
 uint8_t length_indicator;
 uint8_t version;
 uint8_t reserved;
 uint8_t type;
 uint8_t holdtime[2];
 uint8_t cksum[2];
};

static void
esis_print(netdissect_options *ndo,
           const uint8_t *pptr, u_int length)
{
 const uint8_t *optr={0};
 u_int li,esis_pdu_type,source_address_length, source_address_number={0};
 const struct esis_header_t *esis_header={0};

 if (!ndo->ndo_eflag)
  (*ndo->ndo_printf)(ndo, "ES-IS");

 if (length <= 2) {
  (*ndo->ndo_printf)(ndo, ndo->ndo_qflag ? "bad pkt!" : "no header at all!");
  return;
 }

 esis_header = (const struct esis_header_t *) pptr;
        if (!((((sizeof(*esis_header)) > 0) || ((sizeof(*esis_header)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*esis_header)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*esis_header) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*esis_header))))) goto trunc;
        li = esis_header->length_indicator;
        optr = pptr;





        if (esis_header->nlpid != 0x82) {
            (*ndo->ndo_printf)(ndo, " nlpid 0x%02x packet not supported", esis_header->nlpid);
            return;
        }

        if (esis_header->version != 1) {
            (*ndo->ndo_printf)(ndo, " version %d packet not supported", esis_header->version);
            return;
        }

 if (li > length) {
            (*ndo->ndo_printf)(ndo, " length indicator(%u) > PDU size (%u)!", li, length);
            return;
 }

 if (li < sizeof(struct esis_header_t) + 2) {
            (*ndo->ndo_printf)(ndo, " length indicator %u < min PDU size:", li);
            while (pptr < ndo->ndo_snapend)
                (*ndo->ndo_printf)(ndo, "%02X", *pptr++);
            return;
 }

        esis_pdu_type = esis_header->type & 0x1F;

        if (ndo->ndo_vflag < 1) {
            (*ndo->ndo_printf)(ndo, "%s%s, length %u", ndo->ndo_eflag ? "" : ", ", tok2str(esis_pdu_values,"unknown type (%u)",esis_pdu_type), length)


                           ;
            return;
        } else
            (*ndo->ndo_printf)(ndo, "%slength %u\n\t%s (%u)", ndo->ndo_eflag ? "" : ", ", length, tok2str(esis_pdu_values,"unknown type: %u", esis_pdu_type), esis_pdu_type)



                                  ;

        (*ndo->ndo_printf)(ndo, ", v: %u%s", esis_header->version, esis_header->version == 1 ? "" : "unsupported" );
        (*ndo->ndo_printf)(ndo, ", checksum: 0x%04x", EXTRACT_16BITS(esis_header->cksum));

        osi_print_cksum(ndo, pptr, EXTRACT_16BITS(esis_header->cksum), 7, li);

        (*ndo->ndo_printf)(ndo, ", holding time: %us, length indicator: %u", EXTRACT_16BITS(esis_header->holdtime), li)
                                                             ;

        if (ndo->ndo_vflag > 1)
            print_unknown_data(ndo, optr, "\n\t", sizeof(struct esis_header_t));

 pptr += sizeof(struct esis_header_t);
 li -= sizeof(struct esis_header_t);

 switch (esis_pdu_type) {
 case 6: {
  const uint8_t *dst, *snpa, *neta={0};
  u_int dstl, snpal, netal={0};

  if (!((((sizeof(*pptr)) > 0) || ((sizeof(*pptr)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*pptr)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*pptr) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*pptr))))) goto trunc;
  if (li < 1) {
   (*ndo->ndo_printf)(ndo, ", bad redirect/li");
   return;
  }
  dstl = *pptr;
  pptr++;
  li--;
  if (!((((dstl) > 0) || ((dstl) == 0)) && ((uintptr_t)ndo->ndo_snapend - (dstl) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*pptr) <= (uintptr_t)ndo->ndo_snapend - (dstl)))) goto trunc;
  if (li < dstl) {
   (*ndo->ndo_printf)(ndo, ", bad redirect/li");
   return;
  }
  dst = pptr;
  pptr += dstl;
                li -= dstl;
  (*ndo->ndo_printf)(ndo, "\n\t  %s", isonsap_string(ndo, dst, dstl));

  if (!((((sizeof(*pptr)) > 0) || ((sizeof(*pptr)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*pptr)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*pptr) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*pptr))))) goto trunc;
  if (li < 1) {
   (*ndo->ndo_printf)(ndo, ", bad redirect/li");
   return;
  }
  snpal = *pptr;
  pptr++;
  li--;
  if (!((((snpal) > 0) || ((snpal) == 0)) && ((uintptr_t)ndo->ndo_snapend - (snpal) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*pptr) <= (uintptr_t)ndo->ndo_snapend - (snpal)))) goto trunc;
  if (li < snpal) {
   (*ndo->ndo_printf)(ndo, ", bad redirect/li");
   return;
  }
  snpa = pptr;
  pptr += snpal;
                li -= snpal;
  if (!((((sizeof(*pptr)) > 0) || ((sizeof(*pptr)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*pptr)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*pptr) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*pptr))))) goto trunc;
  if (li < 1) {
   (*ndo->ndo_printf)(ndo, ", bad redirect/li");
   return;
  }
  netal = *pptr;
  pptr++;
  if (!((((netal) > 0) || ((netal) == 0)) && ((uintptr_t)ndo->ndo_snapend - (netal) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*pptr) <= (uintptr_t)ndo->ndo_snapend - (netal)))) goto trunc;
  if (li < netal) {
   (*ndo->ndo_printf)(ndo, ", bad redirect/li");
   return;
  }
  neta = pptr;
  pptr += netal;
                li -= netal;

  if (snpal == 6)
   (*ndo->ndo_printf)(ndo, "\n\t  SNPA (length: %u): %s", snpal, etheraddr_string(ndo, snpa))

                                       ;
  else
   (*ndo->ndo_printf)(ndo, "\n\t  SNPA (length: %u): %s", snpal, linkaddr_string(ndo, snpa, LINKADDR_OTHER, snpal))

                                                             ;
  if (netal != 0)
   (*ndo->ndo_printf)(ndo, "\n\t  NET (length: %u) %s", netal, isonsap_string(ndo, neta, netal))

                                            ;
  break;
 }

 case 2:
            if (!((((sizeof(*pptr)) > 0) || ((sizeof(*pptr)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*pptr)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*pptr) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*pptr))))) goto trunc;
            if (li < 1) {
                (*ndo->ndo_printf)(ndo, ", bad esh/li");
                return;
            }
            source_address_number = *pptr;
            pptr++;
            li--;

            (*ndo->ndo_printf)(ndo, "\n\t  Number of Source Addresses: %u", source_address_number);

            while (source_address_number > 0) {
                if (!((((sizeof(*pptr)) > 0) || ((sizeof(*pptr)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*pptr)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*pptr) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*pptr))))) goto trunc;
             if (li < 1) {
                    (*ndo->ndo_printf)(ndo, ", bad esh/li");
                 return;
             }
                source_address_length = *pptr;
                pptr++;
             li--;

                if (!((((source_address_length) > 0) || ((source_address_length) == 0)) && ((uintptr_t)ndo->ndo_snapend - (source_address_length) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*pptr) <= (uintptr_t)ndo->ndo_snapend - (source_address_length)))) goto trunc;
             if (li < source_address_length) {
                    (*ndo->ndo_printf)(ndo, ", bad esh/li");
                 return;
             }
                (*ndo->ndo_printf)(ndo, "\n\t  NET (length: %u): %s", source_address_length, isonsap_string(ndo, pptr, source_address_length))

                                                                         ;
                pptr += source_address_length;
                li -= source_address_length;
                source_address_number--;
            }

            break;

 case 4: {
            if (!((((sizeof(*pptr)) > 0) || ((sizeof(*pptr)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*pptr)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*pptr) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*pptr))))) goto trunc;
            if (li < 1) {
                (*ndo->ndo_printf)(ndo, ", bad ish/li");
                return;
            }
            source_address_length = *pptr;
            pptr++;
            li--;
            if (!((((source_address_length) > 0) || ((source_address_length) == 0)) && ((uintptr_t)ndo->ndo_snapend - (source_address_length) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*pptr) <= (uintptr_t)ndo->ndo_snapend - (source_address_length)))) goto trunc;
            if (li < source_address_length) {
                (*ndo->ndo_printf)(ndo, ", bad ish/li");
                return;
            }
            (*ndo->ndo_printf)(ndo, "\n\t  NET (length: %u): %s", source_address_length, isonsap_string(ndo, pptr, source_address_length));
            pptr += source_address_length;
            li -= source_address_length;
            break;
 }

 default:
  if (ndo->ndo_vflag <= 1) {
   if (pptr < ndo->ndo_snapend)
    print_unknown_data(ndo, pptr, "\n\t  ", ndo->ndo_snapend - pptr);
  }
  return;
 }


        while (li != 0) {
            u_int op, opli={0};
            const uint8_t *tptr={0};

            if (li < 2) {
                (*ndo->ndo_printf)(ndo, ", bad opts/li");
                return;
            }
            if (!((((2) > 0) || ((2) == 0)) && ((uintptr_t)ndo->ndo_snapend - (2) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*pptr) <= (uintptr_t)ndo->ndo_snapend - (2)))) goto trunc;
            op = *pptr++;
            opli = *pptr++;
            li -= 2;
            if (opli > li) {
                (*ndo->ndo_printf)(ndo, ", opt (%d) too long", op);
                return;
            }
            li -= opli;
            tptr = pptr;

            (*ndo->ndo_printf)(ndo, "\n\t  %s Option #%u, length %u, value: ", tok2str(esis_option_values,"Unknown",op), op, opli)


                         ;

            switch (op) {

            case 198:
                if (opli == 2) {
                    if (!((((2) > 0) || ((2) == 0)) && ((uintptr_t)ndo->ndo_snapend - (2) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*pptr) <= (uintptr_t)ndo->ndo_snapend - (2)))) goto trunc;
                    (*ndo->ndo_printf)(ndo, "%us", EXTRACT_16BITS(tptr));
                } else
                    (*ndo->ndo_printf)(ndo, "(bad length)");
                break;

            case 129:
                while (opli>0) {
                    if (!((((sizeof(*tptr)) > 0) || ((sizeof(*tptr)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*tptr)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*tptr) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*tptr))))) goto trunc;
                    (*ndo->ndo_printf)(ndo, "%s (0x%02x)", tok2str(nlpid_values, "unknown", *tptr), *tptr)



                                  ;
                    if (opli>1)
                        (*ndo->ndo_printf)(ndo, ", ");
                    tptr++;
                    opli--;
                }
                break;






            case 195:
            case 197:
            case 205:
            case 225:
            case 226:

            default:
                print_unknown_data(ndo, tptr, "\n\t  ", opli);
                break;
            }
            if (ndo->ndo_vflag > 1)
                print_unknown_data(ndo, pptr, "\n\t  ", opli);
            pptr += opli;
        }
trunc:
        (*ndo->ndo_printf)(ndo, "[|esis]");
}

static void
isis_print_mcid(netdissect_options *ndo,
                const struct isis_spb_mcid *mcid)
{
  int i={0};

  if (!((((sizeof(*mcid)) > 0) || ((sizeof(*mcid)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*mcid)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*mcid) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*mcid))))) goto trunc;
  (*ndo->ndo_printf)(ndo, "ID: %d, Name: ", mcid->format_id);

  if (fn_printzp(ndo, mcid->name, 32, ndo->ndo_snapend))
    goto trunc;

  (*ndo->ndo_printf)(ndo, "\n\t              Lvl: %d", EXTRACT_16BITS(mcid->revision_lvl));

  (*ndo->ndo_printf)(ndo, ", Digest: ");

  for(i=0;i<16;i++)
    (*ndo->ndo_printf)(ndo, "%.2x ", mcid->digest[i]);

trunc:
  (*ndo->ndo_printf)(ndo, "%s", tstr);
}

static int
isis_print_mt_port_cap_subtlv(netdissect_options *ndo,
                              const uint8_t *tptr, int len)
{
  int stlv_type, stlv_len={0};
  const struct isis_subtlv_spb_mcid *subtlv_spb_mcid={0};
  int i={0};

  while (len > 2)
  {
    if (!((((2) > 0) || ((2) == 0)) && ((uintptr_t)ndo->ndo_snapend - (2) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*tptr) <= (uintptr_t)ndo->ndo_snapend - (2)))) goto trunc;
    stlv_type = *(tptr++);
    stlv_len = *(tptr++);


    (*ndo->ndo_printf)(ndo, "\n\t       %s subTLV #%u, length: %u", tok2str(isis_mt_port_cap_subtlv_values, "unknown", stlv_type), stlv_type, stlv_len)


                         ;


    len = len -2;


    if (len < stlv_len)
      goto trunc;

    if (!((((stlv_len) > 0) || ((stlv_len) == 0)) && ((uintptr_t)ndo->ndo_snapend - (stlv_len) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*(tptr)) <= (uintptr_t)ndo->ndo_snapend - (stlv_len)))) goto trunc;

    switch (stlv_type)
    {
      case 4:
      {
       if (stlv_len < 102)
         goto trunc;

        subtlv_spb_mcid = (const struct isis_subtlv_spb_mcid *)tptr;

        (*ndo->ndo_printf)(ndo, "\n\t         MCID: ");
        isis_print_mcid(ndo, &(subtlv_spb_mcid->mcid));




        (*ndo->ndo_printf)(ndo, "\n\t         AUX-MCID: ");
        isis_print_mcid(ndo, &(subtlv_spb_mcid->aux_mcid));



        tptr = tptr + 102;
        len = len - 102;
        stlv_len = stlv_len - 102;

        break;
      }

      case 5:
      {
        if (stlv_len < 33)
          goto trunc;

        (*ndo->ndo_printf)(ndo, "\n\t        RES: %d V: %d A: %d D: %d", (*(tptr) >> 5), (((*tptr)>> 4) & 0x01), ((*(tptr) >> 2) & 0x03), ((*tptr) & 0x03))

                                                                   ;

        tptr++;

        (*ndo->ndo_printf)(ndo, "\n\t         Digest: ");

        for(i=1;i<=8; i++)
        {
            (*ndo->ndo_printf)(ndo, "%08x ", EXTRACT_32BITS(tptr));
            if (i%4 == 0 && i != 8)
              (*ndo->ndo_printf)(ndo, "\n\t                 ");
            tptr = tptr + 4;
        }

        len = len - 33;
        stlv_len = stlv_len - 33;

        break;
      }

      case 6:
      {
        while (stlv_len >= 6)
        {
          (*ndo->ndo_printf)(ndo, "\n\t           ECT: %08x", EXTRACT_32BITS(tptr))
                                            ;

          tptr = tptr+4;

          (*ndo->ndo_printf)(ndo, " BVID: %d, U:%01x M:%01x ", (EXTRACT_16BITS (tptr) >> 4) , (EXTRACT_16BITS (tptr) >> 3) & 0x01, (EXTRACT_16BITS (tptr) >> 2) & 0x01)


                                                          ;

          tptr = tptr + 2;
          len = len - 6;
          stlv_len = stlv_len - 6;
        }

        break;
      }

      default:
        break;
    }
    tptr += stlv_len;
    len -= stlv_len;
  }

  return 0;

  trunc:
    (*ndo->ndo_printf)(ndo, "\n\t\t");
    (*ndo->ndo_printf)(ndo, "%s", tstr);
    return(1);
}

static int
isis_print_mt_capability_subtlv(netdissect_options *ndo,
                                const uint8_t *tptr, int len)
{
  int stlv_type, stlv_len, tmp={0};

  while (len > 2)
  {
    if (!((((2) > 0) || ((2) == 0)) && ((uintptr_t)ndo->ndo_snapend - (2) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*tptr) <= (uintptr_t)ndo->ndo_snapend - (2)))) goto trunc;
    stlv_type = *(tptr++);
    stlv_len = *(tptr++);


    (*ndo->ndo_printf)(ndo, "\n\t      %s subTLV #%u, length: %u", tok2str(isis_mt_capability_subtlv_values, "unknown", stlv_type), stlv_type, stlv_len)


                         ;

    len = len - 2;


    if (len < stlv_len)
      goto trunc;

    if (!((((stlv_len) > 0) || ((stlv_len) == 0)) && ((uintptr_t)ndo->ndo_snapend - (stlv_len) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*(tptr)) <= (uintptr_t)ndo->ndo_snapend - (stlv_len)))) goto trunc;

    switch (stlv_type)
    {
      case 1:
          if (stlv_len < 19)
            goto trunc;

          (*ndo->ndo_printf)(ndo, "\n\t        CIST Root-ID: %08x", EXTRACT_32BITS(tptr));
          tptr = tptr+4;
          (*ndo->ndo_printf)(ndo, " %08x", EXTRACT_32BITS(tptr));
          tptr = tptr+4;
          (*ndo->ndo_printf)(ndo, ", Path Cost: %08x", EXTRACT_32BITS(tptr));
          tptr = tptr+4;
          (*ndo->ndo_printf)(ndo, ", Prio: %d", EXTRACT_16BITS(tptr));
          tptr = tptr + 2;
          (*ndo->ndo_printf)(ndo, "\n\t        RES: %d", EXTRACT_16BITS(tptr) >> 5)
                                               ;
          (*ndo->ndo_printf)(ndo, ", V: %d", (EXTRACT_16BITS(tptr) >> 4) & 0x0001)
                                                          ;
          (*ndo->ndo_printf)(ndo, ", SPSource-ID: %d", (EXTRACT_32BITS(tptr) & 0x000fffff))
                                                         ;
          tptr = tptr+4;
          (*ndo->ndo_printf)(ndo, ", No of Trees: %x", *(tptr));

          tmp = *(tptr++);

          len = len - 19;
          stlv_len = stlv_len - 19;

          while (tmp)
          {
            if (stlv_len < 8)
              goto trunc;

            (*ndo->ndo_printf)(ndo, "\n\t         U:%d, M:%d, A:%d, RES:%d", *(tptr) >> 7, (*(tptr) >> 6) & 0x01, (*(tptr) >> 5) & 0x01, (*(tptr) & 0x1f))

                                                               ;

            tptr++;

            (*ndo->ndo_printf)(ndo, ", ECT: %08x", EXTRACT_32BITS(tptr));

            tptr = tptr + 4;

            (*ndo->ndo_printf)(ndo, ", BVID: %d, SPVID: %d", (((uint32_t)(((uint32_t)(*((const uint8_t *)(tptr) + 0)) << 16) | ((uint32_t)(*((const uint8_t *)(tptr) + 1)) << 8) | ((uint32_t)(*((const uint8_t *)(tptr) + 2)) << 0))) >> 12) & 0x000fff, ((uint32_t)(((uint32_t)(*((const uint8_t *)(tptr) + 0)) << 16) | ((uint32_t)(*((const uint8_t *)(tptr) + 1)) << 8) | ((uint32_t)(*((const uint8_t *)(tptr) + 2)) << 0))) & 0x000fff)

                                                       ;

            tptr = tptr + 3;
            len = len - 8;
            stlv_len = stlv_len - 8;
            tmp--;
          }

          break;

      case 3:
          if (stlv_len < 8)
            goto trunc;

          (*ndo->ndo_printf)(ndo, "\n\t        BMAC: %08x", EXTRACT_32BITS(tptr));
          tptr = tptr+4;
          (*ndo->ndo_printf)(ndo, "%04x", EXTRACT_16BITS(tptr));
          tptr = tptr+2;

          (*ndo->ndo_printf)(ndo, ", RES: %d, VID: %d", EXTRACT_16BITS(tptr) >> 12, (EXTRACT_16BITS(tptr)) & 0x0fff)
                                                     ;

          tptr = tptr+2;
          len = len - 8;
          stlv_len = stlv_len - 8;

          while (stlv_len >= 4) {
            if (!((((4) > 0) || ((4) == 0)) && ((uintptr_t)ndo->ndo_snapend - (4) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*tptr) <= (uintptr_t)ndo->ndo_snapend - (4)))) goto trunc;
            (*ndo->ndo_printf)(ndo, "\n\t        T: %d, R: %d, RES: %d, ISID: %d", (EXTRACT_32BITS(tptr) >> 31), (EXTRACT_32BITS(tptr) >> 30) & 0x01, (EXTRACT_32BITS(tptr) >> 24) & 0x03f, (EXTRACT_32BITS(tptr)) & 0x0ffffff)



                                                        ;

            tptr = tptr + 4;
            len = len - 4;
            stlv_len = stlv_len - 4;
          }

        break;

      default:
        break;
    }
    tptr += stlv_len;
    len -= stlv_len;
  }
  return 0;

  trunc:
    (*ndo->ndo_printf)(ndo, "\n\t\t");
    (*ndo->ndo_printf)(ndo, "%s", tstr);
    return(1);
}


static char *
isis_print_id(const uint8_t *cp, int id_len)
{
    int i={0};
    static char id[sizeof("xxxx.xxxx.xxxx.yy-zz")]={0};
    char *pos = id;
    int sysid_len={0};

    sysid_len = 6;
    if (sysid_len > id_len)
        sysid_len = id_len;
    for (i = 1; i <= sysid_len; i++) {
        snprintf(pos, sizeof(id) - (pos - id), "%02x", *cp++);
 pos += strlen(pos);
 if (i == 2 || i == 4)
     *pos++ = '.';
 }
    if (id_len >= 6 +1) {
        snprintf(pos, sizeof(id) - (pos - id), ".%02x", *cp++);
 pos += strlen(pos);
    }
    if (id_len == 6 +2)
        snprintf(pos, sizeof(id) - (pos - id), "-%02x", *cp);
    return (id);
}


static int
isis_print_metric_block(netdissect_options *ndo,
                        const struct isis_metric_block *isis_metric_block)
{
    (*ndo->ndo_printf)(ndo, ", Default Metric: %d, %s", ((isis_metric_block->metric_default)&0x3f), ((isis_metric_block->metric_default)&0x40) ? "External" : "Internal")

                                                                                                ;
    if (!((isis_metric_block->metric_delay)&0x80))
        (*ndo->ndo_printf)(ndo, "\n\t\t  Delay Metric: %d, %s", ((isis_metric_block->metric_delay)&0x3f), ((isis_metric_block->metric_delay)&0x40) ? "External" : "Internal")

                                                                                                  ;
    if (!((isis_metric_block->metric_expense)&0x80))
        (*ndo->ndo_printf)(ndo, "\n\t\t  Expense Metric: %d, %s", ((isis_metric_block->metric_expense)&0x3f), ((isis_metric_block->metric_expense)&0x40) ? "External" : "Internal")

                                                                                                    ;
    if (!((isis_metric_block->metric_error)&0x80))
        (*ndo->ndo_printf)(ndo, "\n\t\t  Error Metric: %d, %s", ((isis_metric_block->metric_error)&0x3f), ((isis_metric_block->metric_error)&0x40) ? "External" : "Internal")

                                                                                                  ;

    return(1);
}

static int
isis_print_tlv_ip_reach(netdissect_options *ndo,
                        const uint8_t *cp, const char *ident, int length)
{
 int prefix_len={0};
 const struct isis_tlv_ip_reach *tlv_ip_reach={0};

 tlv_ip_reach = (const struct isis_tlv_ip_reach *)cp;

 while (length > 0) {
  if ((size_t)length < sizeof(*tlv_ip_reach)) {
   (*ndo->ndo_printf)(ndo, "short IPv4 Reachability (%d vs %lu)", length, (unsigned long)sizeof(*tlv_ip_reach))

                                                                     ;
   return (0);
  }

  if (!((((sizeof(*tlv_ip_reach)) > 0) || ((sizeof(*tlv_ip_reach)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*tlv_ip_reach)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*tlv_ip_reach) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*tlv_ip_reach)))))
      return (0);

  prefix_len = mask2plen(EXTRACT_32BITS(tlv_ip_reach->mask));

  if (prefix_len == -1)
   (*ndo->ndo_printf)(ndo, "%sIPv4 prefix: %s mask %s", ident, getname(ndo, (const u_char *)((tlv_ip_reach->prefix))), getname(ndo, (const u_char *)((tlv_ip_reach->mask))))


                                                    ;
  else
   (*ndo->ndo_printf)(ndo, "%sIPv4 prefix: %15s/%u", ident, getname(ndo, (const u_char *)((tlv_ip_reach->prefix))), prefix_len)


                      ;

  (*ndo->ndo_printf)(ndo, ", Distribution: %s, Metric: %u, %s", ((tlv_ip_reach->isis_metric_block.metric_default)&0x80) ? "down" : "up", ((tlv_ip_reach->isis_metric_block.metric_default)&0x3f), ((tlv_ip_reach->isis_metric_block.metric_default)&0x40) ? "External" : "Internal")


                                                                                                                         ;

  if (!((tlv_ip_reach->isis_metric_block.metric_delay)&0x80))
                    (*ndo->ndo_printf)(ndo, "%s  Delay Metric: %u, %s", ident, ((tlv_ip_reach->isis_metric_block.metric_delay)&0x3f), ((tlv_ip_reach->isis_metric_block.metric_delay)&0x40) ? "External" : "Internal")


                                                                                                                           ;

  if (!((tlv_ip_reach->isis_metric_block.metric_expense)&0x80))
                    (*ndo->ndo_printf)(ndo, "%s  Expense Metric: %u, %s", ident, ((tlv_ip_reach->isis_metric_block.metric_expense)&0x3f), ((tlv_ip_reach->isis_metric_block.metric_expense)&0x40) ? "External" : "Internal")


                                                                                                                             ;

  if (!((tlv_ip_reach->isis_metric_block.metric_error)&0x80))
                    (*ndo->ndo_printf)(ndo, "%s  Error Metric: %u, %s", ident, ((tlv_ip_reach->isis_metric_block.metric_error)&0x3f), ((tlv_ip_reach->isis_metric_block.metric_error)&0x40) ? "External" : "Internal")


                                                                                                                           ;

  length -= sizeof(struct isis_tlv_ip_reach);
  tlv_ip_reach++;
 }
 return (1);
}






static int
isis_print_ip_reach_subtlv(netdissect_options *ndo,
                           const uint8_t *tptr, int subt, int subl,
                           const char *ident)
{

    (*ndo->ndo_printf)(ndo, "%s%s subTLV #%u, length: %u", ident, tok2str(isis_ext_ip_reach_subtlv_values, "unknown", subt), subt, subl)

                          ;

    if (!((((subl) > 0) || ((subl) == 0)) && ((uintptr_t)ndo->ndo_snapend - (subl) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*tptr) <= (uintptr_t)ndo->ndo_snapend - (subl)))) goto trunc;

    switch(subt) {
    case 117:
    case 1:
        while (subl >= 4) {
     (*ndo->ndo_printf)(ndo, ", 0x%08x (=%u)", EXTRACT_32BITS(tptr), EXTRACT_32BITS(tptr))

                           ;
     tptr+=4;
     subl-=4;
 }
 break;
    case 2:
        while (subl >= 8) {
     (*ndo->ndo_printf)(ndo, ", 0x%08x%08x", EXTRACT_32BITS(tptr), EXTRACT_32BITS(tptr+4))

                             ;
     tptr+=8;
     subl-=8;
 }
 break;
    default:
 if (!print_unknown_data(ndo, tptr, "\n\t\t    ", subl))
   return(0);
 break;
    }
    return(1);

trunc:
    (*ndo->ndo_printf)(ndo, "%s", ident);
    (*ndo->ndo_printf)(ndo, "%s", tstr);
    return(0);
}






static int
isis_print_is_reach_subtlv(netdissect_options *ndo,
                           const uint8_t *tptr, u_int subt, u_int subl,
                           const char *ident)
{
        u_int te_class,priority_level,gmpls_switch_cap={0};
        union {
            float f;
            uint32_t i;
        } bw={0};


 (*ndo->ndo_printf)(ndo, "%s%s subTLV #%u, length: %u", ident, tok2str(isis_ext_is_reach_subtlv_values, "unknown", subt), subt, subl)

                       ;

 if (!((((subl) > 0) || ((subl) == 0)) && ((uintptr_t)ndo->ndo_snapend - (subl) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*tptr) <= (uintptr_t)ndo->ndo_snapend - (subl)))) goto trunc;

        switch(subt) {
        case 3:
        case 4:
        case 5:
     if (subl >= 4) {
       (*ndo->ndo_printf)(ndo, ", 0x%08x", EXTRACT_32BITS(tptr));
       if (subl == 8)
         (*ndo->ndo_printf)(ndo, ", 0x%08x", EXTRACT_32BITS(tptr+4));
     }
     break;
        case 6:
        case 8:
            if (subl >= sizeof(struct in_addr))
              (*ndo->ndo_printf)(ndo, ", %s", getname(ndo, (const u_char *)(tptr)));
            break;
        case 9 :
 case 10:
            if (subl >= 4) {
              bw.i = EXTRACT_32BITS(tptr);
              (*ndo->ndo_printf)(ndo, ", %.3f Mbps", bw.f * 8 / 1000000);
            }
            break;
        case 11 :
            if (subl >= 32) {
              for (te_class = 0; te_class < 8; te_class++) {
                bw.i = EXTRACT_32BITS(tptr);
                (*ndo->ndo_printf)(ndo, "%s  TE-Class %u: %.3f Mbps", ident, te_class, bw.f * 8 / 1000000)


                                           ;
  tptr+=4;
       }
            }
            break;
        case 22:
        case 12:
            if (subl == 0)
                break;
            (*ndo->ndo_printf)(ndo, "%sBandwidth Constraints Model ID: %s (%u)", ident, tok2str(diffserv_te_bc_values, "unknown", *tptr), *tptr)


                          ;
            tptr++;

            for (te_class = 0; te_class < (subl-1)/4; te_class++) {
                bw.i = EXTRACT_32BITS(tptr);
                (*ndo->ndo_printf)(ndo, "%s  Bandwidth constraint CT%u: %.3f Mbps", ident, te_class, bw.f * 8 / 1000000)


                                           ;
  tptr+=4;
            }
            break;
        case 18:
            if (subl >= 3)
              (*ndo->ndo_printf)(ndo, ", %u", ((uint32_t)(((uint32_t)(*((const uint8_t *)(tptr) + 0)) << 16) | ((uint32_t)(*((const uint8_t *)(tptr) + 1)) << 8) | ((uint32_t)(*((const uint8_t *)(tptr) + 2)) << 0))));
            break;
        case 19:
            if (subl == 2) {
               (*ndo->ndo_printf)(ndo, ", [ %s ] (0x%04x)", bittok2str(isis_subtlv_link_attribute_values, "Unknown", EXTRACT_16BITS(tptr)), EXTRACT_16BITS(tptr))



                                            ;
            }
            break;
        case 20:
            if (subl >= 2) {
              (*ndo->ndo_printf)(ndo, ", %s, Priority %u", bittok2str(gmpls_link_prot_values, "none", *tptr), *(tptr+1))

                              ;
            }
            break;
        case 29:
            if (subl >= 6) {
              (*ndo->ndo_printf)(ndo, ", LM: %u", ((uint32_t)(((uint32_t)(*((const uint8_t *)(tptr) + 0)) << 16) | ((uint32_t)(*((const uint8_t *)(tptr) + 1)) << 8) | ((uint32_t)(*((const uint8_t *)(tptr) + 2)) << 0))));
              tptr=tptr+3;
              (*ndo->ndo_printf)(ndo, ", P: %u", *(tptr));
              tptr++;
              (*ndo->ndo_printf)(ndo, ", P-ID: %u", EXTRACT_16BITS(tptr));
            }
            break;
        case 21:
            if (subl >= 36) {
              gmpls_switch_cap = *tptr;
              (*ndo->ndo_printf)(ndo, "%s  Interface Switching Capability:%s", ident, tok2str(gmpls_switch_cap_values, "Unknown", gmpls_switch_cap))

                                                                                  ;
              (*ndo->ndo_printf)(ndo, ", LSP Encoding: %s", tok2str(gmpls_encoding_values, "Unknown", *(tptr + 1)))
                                                                           ;
       tptr+=4;
              (*ndo->ndo_printf)(ndo, "%s  Max LSP Bandwidth:", ident);
              for (priority_level = 0; priority_level < 8; priority_level++) {
                bw.i = EXTRACT_32BITS(tptr);
                (*ndo->ndo_printf)(ndo, "%s    priority level %d: %.3f Mbps", ident, priority_level, bw.f * 8 / 1000000)


                                           ;
  tptr+=4;
              }
              subl-=36;
              switch (gmpls_switch_cap) {
              case 1:
              case 2:
              case 3:
              case 4:
                if (subl < 6)
                    break;
                bw.i = EXTRACT_32BITS(tptr);
                (*ndo->ndo_printf)(ndo, "%s  Min LSP Bandwidth: %.3f Mbps", ident, bw.f * 8 / 1000000);
                (*ndo->ndo_printf)(ndo, "%s  Interface MTU: %u", ident, EXTRACT_16BITS(tptr + 4));
                break;
              case 100:
                if (subl < 8)
                    break;
                bw.i = EXTRACT_32BITS(tptr);
                (*ndo->ndo_printf)(ndo, "%s  Min LSP Bandwidth: %.3f Mbps", ident, bw.f * 8 / 1000000);
                (*ndo->ndo_printf)(ndo, "%s  Indication %s", ident, tok2str(gmpls_switch_cap_tsc_indication_values, "Unknown (%u)", *(tptr + 4)))
                                                                                                     ;
                break;
              default:


                if(subl>0){
                  if (!print_unknown_data(ndo, tptr, "\n\t\t    ", subl))
                    return(0);
                }
              }
            }
            break;
        default:
            if (!print_unknown_data(ndo, tptr, "\n\t\t    ", subl))
                return(0);
            break;
        }
        return(1);

trunc:
    return(0);
}






static int
isis_print_ext_is_reach(netdissect_options *ndo,
                        const uint8_t *tptr, const char *ident, int tlv_type)
{
    char ident_buffer[20]={0};
    int subtlv_type,subtlv_len,subtlv_sum_len={0};
    int proc_bytes = 0;

    if (!((((6 +1) > 0) || ((6 +1) == 0)) && ((uintptr_t)ndo->ndo_snapend - (6 +1) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*tptr) <= (uintptr_t)ndo->ndo_snapend - (6 +1))))
        return(0);

    (*ndo->ndo_printf)(ndo, "%sIS Neighbor: %s", ident, isis_print_id(tptr, 6 +1));
    tptr+=(6 +1);

    if (tlv_type != 24) {
        if (!((((3) > 0) || ((3) == 0)) && ((uintptr_t)ndo->ndo_snapend - (3) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*tptr) <= (uintptr_t)ndo->ndo_snapend - (3))))
     return(0);
 (*ndo->ndo_printf)(ndo, ", Metric: %d", ((uint32_t)(((uint32_t)(*((const uint8_t *)(tptr) + 0)) << 16) | ((uint32_t)(*((const uint8_t *)(tptr) + 1)) << 8) | ((uint32_t)(*((const uint8_t *)(tptr) + 2)) << 0))));
 tptr+=3;
    }

    if (!((((1) > 0) || ((1) == 0)) && ((uintptr_t)ndo->ndo_snapend - (1) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*tptr) <= (uintptr_t)ndo->ndo_snapend - (1))))
        return(0);
    subtlv_sum_len=*(tptr++);
    proc_bytes=6 +1 +3+1;
    (*ndo->ndo_printf)(ndo, ", %ssub-TLVs present",subtlv_sum_len ? "" : "no ");
    if (subtlv_sum_len) {
        (*ndo->ndo_printf)(ndo, " (%u)", subtlv_sum_len);
        while (subtlv_sum_len>0) {
            if (!((((2) > 0) || ((2) == 0)) && ((uintptr_t)ndo->ndo_snapend - (2) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*tptr) <= (uintptr_t)ndo->ndo_snapend - (2))))
                return(0);
            subtlv_type=*(tptr++);
            subtlv_len=*(tptr++);

            snprintf(ident_buffer, sizeof(ident_buffer), "%s  ",ident);
            if (!isis_print_is_reach_subtlv(ndo, tptr, subtlv_type, subtlv_len, ident_buffer))
                return(0);
            tptr+=subtlv_len;
            subtlv_sum_len-=(subtlv_len+2);
            proc_bytes+=(subtlv_len+2);
        }
    }
    return(proc_bytes);
}






static int
isis_print_mtid(netdissect_options *ndo,
                const uint8_t *tptr, const char *ident)
{
    if (!((((2) > 0) || ((2) == 0)) && ((uintptr_t)ndo->ndo_snapend - (2) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*tptr) <= (uintptr_t)ndo->ndo_snapend - (2))))
        return(0);

    (*ndo->ndo_printf)(ndo, "%s%s", ident, tok2str(isis_mt_values, "Reserved for IETF Consensus", ((EXTRACT_16BITS(tptr))&0x0fff)))



                                                          ;

    (*ndo->ndo_printf)(ndo, " Topology (0x%03x), Flags: [%s]", ((EXTRACT_16BITS(tptr))&0x0fff), bittok2str(isis_mt_flag_values, "none",((EXTRACT_16BITS(tptr))&0xf000)))

                                                                                            ;

    return(2);
}
static int
isis_print_extd_ip_reach(netdissect_options *ndo,
                         const uint8_t *tptr, const char *ident, uint16_t afi)
{
    char ident_buffer[20]={0};
    uint8_t prefix[sizeof(struct in6_addr)]={0};
    u_int metric, status_byte, bit_length, byte_length, sublen, processed, subtlvtype, subtlvlen={0};

    if (!((((4) > 0) || ((4) == 0)) && ((uintptr_t)ndo->ndo_snapend - (4) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*tptr) <= (uintptr_t)ndo->ndo_snapend - (4))))
        return (0);
    metric = EXTRACT_32BITS(tptr);
    processed=4;
    tptr+=4;

    if (afi == 
              2
                     ) {
        if (!((((1) > 0) || ((1) == 0)) && ((uintptr_t)ndo->ndo_snapend - (1) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*tptr) <= (uintptr_t)ndo->ndo_snapend - (1))))
            return (0);
        status_byte=*(tptr++);
        bit_length = status_byte&0x3f;
        if (bit_length > 32) {
            (*ndo->ndo_printf)(ndo, "%sIPv4 prefix: bad bit length %u", ident, bit_length)

                               ;
            return (0);
        }
        processed++;
    } else if (afi == 
                     10
                             ) {
        if (!((((2) > 0) || ((2) == 0)) && ((uintptr_t)ndo->ndo_snapend - (2) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*tptr) <= (uintptr_t)ndo->ndo_snapend - (2))))
            return (0);
        status_byte=*(tptr++);
        bit_length=*(tptr++);
        if (bit_length > 128) {
            (*ndo->ndo_printf)(ndo, "%sIPv6 prefix: bad bit length %u", ident, bit_length)

                               ;
            return (0);
        }
        processed+=2;
    } else
        return (0);

    byte_length = (bit_length + 7) / 8;

    if (!((((byte_length) > 0) || ((byte_length) == 0)) && ((uintptr_t)ndo->ndo_snapend - (byte_length) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*tptr) <= (uintptr_t)ndo->ndo_snapend - (byte_length))))
        return (0);
    memset(prefix, 0, sizeof prefix);
    memcpy(prefix,tptr,byte_length);
    tptr+=byte_length;
    processed+=byte_length;

    if (afi == 
              2
                     )
        (*ndo->ndo_printf)(ndo, "%sIPv4 prefix: %15s/%u", ident, getname(ndo, (const u_char *)(prefix)), bit_length)


                           ;
    else if (afi == 
                   10
                           )
        (*ndo->ndo_printf)(ndo, "%sIPv6 prefix: %s/%u", ident, getname6(ndo, (const u_char *)(prefix)), bit_length)


                           ;

    (*ndo->ndo_printf)(ndo, ", Distribution: %s, Metric: %u", ((status_byte)&0x80) ? "down" : "up", metric)

                   ;

    if (afi == 
              2 
                      && ((status_byte)&0x40))
        (*ndo->ndo_printf)(ndo, ", sub-TLVs present");
    else if (afi == 
                   10
                           )
        (*ndo->ndo_printf)(ndo, ", %s%s", ((status_byte)&0x40) ? "External" : "Internal", ((status_byte)&0x20) ? ", sub-TLVs present" : "")

                                                                                       ;

    if ((afi == 
               2 
                        && ((status_byte)&0x40))
     || (afi == 
               10 
                        && ((status_byte)&0x20))
 ) {




        if (!((((1) > 0) || ((1) == 0)) && ((uintptr_t)ndo->ndo_snapend - (1) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*tptr) <= (uintptr_t)ndo->ndo_snapend - (1))))
            return (0);
        sublen=*(tptr++);
        processed+=sublen+1;
        (*ndo->ndo_printf)(ndo, " (%u)", sublen);

        while (sublen>0) {
            if (!((((2) > 0) || ((2) == 0)) && ((uintptr_t)ndo->ndo_snapend - (2) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*tptr) <= (uintptr_t)ndo->ndo_snapend - (2))))
                return (0);
            subtlvtype=*(tptr++);
            subtlvlen=*(tptr++);

            snprintf(ident_buffer, sizeof(ident_buffer), "%s  ",ident);
            if (!isis_print_ip_reach_subtlv(ndo, tptr, subtlvtype, subtlvlen, ident_buffer))
                return(0);
            tptr+=subtlvlen;
            sublen-=(subtlvlen+2);
        }
    }
    return (processed);
}




static void
isis_clear_checksum_lifetime(void *header)
{
    struct isis_lsp_header *header_lsp = (struct isis_lsp_header *) header;

    header_lsp->checksum[0] = 0;
    header_lsp->checksum[1] = 0;
    header_lsp->remaining_lifetime[0] = 0;
    header_lsp->remaining_lifetime[1] = 0;
}






static int
isis_print(netdissect_options *ndo,
           const uint8_t *p, u_int length)
{
    const struct isis_common_header *isis_header={0};

    const struct isis_iih_lan_header *header_iih_lan={0};
    const struct isis_iih_ptp_header *header_iih_ptp={0};
    const struct isis_lsp_header *header_lsp={0};
    const struct isis_csnp_header *header_csnp={0};
    const struct isis_psnp_header *header_psnp={0};

    const struct isis_tlv_lsp *tlv_lsp={0};
    const struct isis_tlv_ptp_adj *tlv_ptp_adj={0};
    const struct isis_tlv_is_reach *tlv_is_reach={0};
    const struct isis_tlv_es_reach *tlv_es_reach={0};

    uint8_t pdu_type, max_area, id_length, tlv_type, tlv_len, tmp, alen, lan_alen, prefix_len={0};
    uint8_t ext_is_len, ext_ip_len, mt_len={0};
    const uint8_t *optr, *pptr, *tptr={0};
    u_short packet_len,pdu_len, key_id={0};
    u_int i,vendor_id={0};
    int sigcheck={0};

    packet_len=length;
    optr = p;


    isis_header = (const struct isis_common_header *)p;
    if (!((((sizeof(*isis_header)) > 0) || ((sizeof(*isis_header)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*isis_header)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*isis_header) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*isis_header))))) goto trunc;
    if (length < (sizeof(struct isis_common_header)))
        goto trunc;
    pptr = p+((sizeof(struct isis_common_header)));
    header_iih_lan = (const struct isis_iih_lan_header *)pptr;
    header_iih_ptp = (const struct isis_iih_ptp_header *)pptr;
    header_lsp = (const struct isis_lsp_header *)pptr;
    header_csnp = (const struct isis_csnp_header *)pptr;
    header_psnp = (const struct isis_psnp_header *)pptr;

    if (!ndo->ndo_eflag)
        (*ndo->ndo_printf)(ndo, "IS-IS");





    if (isis_header->version != 1) {
 (*ndo->ndo_printf)(ndo, "version %d packet not supported", isis_header->version);
 return (0);
    }

    if ((isis_header->id_length != 6) && (isis_header->id_length != 0)) {
 (*ndo->ndo_printf)(ndo, "system ID length of %d is not supported", isis_header->id_length)
                                ;
 return (0);
    }

    if (isis_header->pdu_version != 1) {
 (*ndo->ndo_printf)(ndo, "version %d packet not supported", isis_header->pdu_version);
 return (0);
    }

    if (length < isis_header->fixed_len) {
 (*ndo->ndo_printf)(ndo, "fixed header length %u > packet length %u", isis_header->fixed_len, length);
 return (0);
    }

    if (isis_header->fixed_len < (sizeof(struct isis_common_header))) {
 (*ndo->ndo_printf)(ndo, "fixed header length %u < minimum header size %u", isis_header->fixed_len, (u_int)(sizeof(struct isis_common_header)));
 return (0);
    }

    max_area = isis_header->max_area;
    switch(max_area) {
    case 0:
 max_area = 3;
 break;
    case 255:
 (*ndo->ndo_printf)(ndo, "bad packet -- 255 areas");
 return (0);
    default:
 break;
    }

    id_length = isis_header->id_length;
    switch(id_length) {
    case 0:
        id_length = 6;
 break;
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
        break;
    case 255:
        id_length = 0;
 break;
    default:
        break;
    }


    if (id_length != 6 ) {
 (*ndo->ndo_printf)(ndo, "bad packet -- illegal sys-ID length (%u)", id_length);
 return (0);
    }

    pdu_type=isis_header->pdu_type;


    if (ndo->ndo_vflag == 0) {
        (*ndo->ndo_printf)(ndo, "%s%s", ndo->ndo_eflag ? "" : ", ", tok2str(isis_pdu_values, "unknown PDU-Type %u", pdu_type))

                                                                          ;
    } else {

        (*ndo->ndo_printf)(ndo, "%slength %u", ndo->ndo_eflag ? "" : ", ", length);

        (*ndo->ndo_printf)(ndo, "\n\t%s, hlen: %u, v: %u, pdu-v: %u, sys-id-len: %u (%u), max-area: %u (%u)", tok2str(isis_pdu_values, "unknown, type %u", pdu_type), isis_header->fixed_len, isis_header->version, isis_header->pdu_version, id_length, isis_header->id_length, max_area, isis_header->max_area)
                                      ;

        if (ndo->ndo_vflag > 1) {
            if (!print_unknown_data(ndo, optr, "\n\t", 8))
                return (0);
        }
    }

    switch (pdu_type) {

    case 15:
    case 16:
        if (isis_header->fixed_len != ((sizeof(struct isis_common_header))+(sizeof(struct isis_iih_lan_header)))) {
            (*ndo->ndo_printf)(ndo, ", bogus fixed header length %u should be %lu", isis_header->fixed_len, (unsigned long)((sizeof(struct isis_common_header))+(sizeof(struct isis_iih_lan_header))))
                                                                                                                ;
            return (0);
        }
        if (!((((sizeof(*header_iih_lan)) > 0) || ((sizeof(*header_iih_lan)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*header_iih_lan)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*header_iih_lan) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*header_iih_lan))))) goto trunc;
        if (length < (sizeof(struct isis_common_header))+(sizeof(struct isis_iih_lan_header)))
            goto trunc;
        if (ndo->ndo_vflag == 0) {
            (*ndo->ndo_printf)(ndo, ", src-id %s", isis_print_id(header_iih_lan->source_id, 6))
                                                                               ;
            (*ndo->ndo_printf)(ndo, ", lan-id %s, prio %u", isis_print_id(header_iih_lan->lan_id,6 +1), header_iih_lan->priority)

                                                ;
            (*ndo->ndo_printf)(ndo, ", length %u", length);
            return (1);
        }
        pdu_len=EXTRACT_16BITS(header_iih_lan->pdu_len);
        if (packet_len>pdu_len) {
           packet_len=pdu_len;
           length=pdu_len;
        }

        (*ndo->ndo_printf)(ndo, "\n\t  source-id: %s,  holding time: %us, Flags: [%s]", isis_print_id(header_iih_lan->source_id,6), EXTRACT_16BITS(header_iih_lan->holding_time), tok2str(isis_iih_circuit_type_values, "unknown circuit type 0x%02x", header_iih_lan->circuit_type))




                                                         ;

        (*ndo->ndo_printf)(ndo, "\n\t  lan-id:    %s, Priority: %u, PDU length: %u", isis_print_id(header_iih_lan->lan_id, 6 +1), (header_iih_lan->priority) & 0x7F, pdu_len)


                           ;

        if (ndo->ndo_vflag > 1) {
            if (!print_unknown_data(ndo, pptr, "\n\t  ", (sizeof(struct isis_iih_lan_header))))
                return (0);
        }

        packet_len -= ((sizeof(struct isis_common_header))+(sizeof(struct isis_iih_lan_header)));
        pptr = p + ((sizeof(struct isis_common_header))+(sizeof(struct isis_iih_lan_header)));
        break;

    case 17:
        if (isis_header->fixed_len != ((sizeof(struct isis_common_header))+(sizeof(struct isis_iih_ptp_header)))) {
            (*ndo->ndo_printf)(ndo, ", bogus fixed header length %u should be %lu", isis_header->fixed_len, (unsigned long)((sizeof(struct isis_common_header))+(sizeof(struct isis_iih_ptp_header))))
                                                                                                                 ;
            return (0);
        }
        if (!((((sizeof(*header_iih_ptp)) > 0) || ((sizeof(*header_iih_ptp)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*header_iih_ptp)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*header_iih_ptp) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*header_iih_ptp))))) goto trunc;
        if (length < (sizeof(struct isis_common_header))+(sizeof(struct isis_iih_ptp_header)))
            goto trunc;
        if (ndo->ndo_vflag == 0) {
            (*ndo->ndo_printf)(ndo, ", src-id %s", isis_print_id(header_iih_ptp->source_id, 6));
            (*ndo->ndo_printf)(ndo, ", length %u", length);
            return (1);
        }
        pdu_len=EXTRACT_16BITS(header_iih_ptp->pdu_len);
        if (packet_len>pdu_len) {
            packet_len=pdu_len;
            length=pdu_len;
        }

        (*ndo->ndo_printf)(ndo, "\n\t  source-id: %s, holding time: %us, Flags: [%s]", isis_print_id(header_iih_ptp->source_id,6), EXTRACT_16BITS(header_iih_ptp->holding_time), tok2str(isis_iih_circuit_type_values, "unknown circuit type 0x%02x", header_iih_ptp->circuit_type))




                                                         ;

        (*ndo->ndo_printf)(ndo, "\n\t  circuit-id: 0x%02x, PDU length: %u", header_iih_ptp->circuit_id, pdu_len)

                           ;

        if (ndo->ndo_vflag > 1) {
            if (!print_unknown_data(ndo, pptr, "\n\t  ", (sizeof(struct isis_iih_ptp_header))))
                return (0);
        }

        packet_len -= ((sizeof(struct isis_common_header))+(sizeof(struct isis_iih_ptp_header)));
        pptr = p + ((sizeof(struct isis_common_header))+(sizeof(struct isis_iih_ptp_header)));
        break;

    case 18:
    case 20:
        if (isis_header->fixed_len != ((sizeof(struct isis_common_header))+(sizeof(struct isis_lsp_header)))) {
            (*ndo->ndo_printf)(ndo, ", bogus fixed header length %u should be %lu", isis_header->fixed_len, (unsigned long)(sizeof(struct isis_lsp_header)))
                                                                                ;
            return (0);
        }
        if (!((((sizeof(*header_lsp)) > 0) || ((sizeof(*header_lsp)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*header_lsp)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*header_lsp) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*header_lsp))))) goto trunc;
        if (length < (sizeof(struct isis_common_header))+(sizeof(struct isis_lsp_header)))
            goto trunc;
        if (ndo->ndo_vflag == 0) {
            (*ndo->ndo_printf)(ndo, ", lsp-id %s, seq 0x%08x, lifetime %5us", isis_print_id(header_lsp->lsp_id, 6 +2), EXTRACT_32BITS(header_lsp->sequence_number), EXTRACT_16BITS(header_lsp->remaining_lifetime))


                                                                      ;
            (*ndo->ndo_printf)(ndo, ", length %u", length);
            return (1);
        }
        pdu_len=EXTRACT_16BITS(header_lsp->pdu_len);
        if (packet_len>pdu_len) {
            packet_len=pdu_len;
            length=pdu_len;
        }

        (*ndo->ndo_printf)(ndo, "\n\t  lsp-id: %s, seq: 0x%08x, lifetime: %5us\n\t  chksum: 0x%04x", isis_print_id(header_lsp->lsp_id, 6 +2), EXTRACT_32BITS(header_lsp->sequence_number), EXTRACT_16BITS(header_lsp->remaining_lifetime), EXTRACT_16BITS(header_lsp->checksum))



                                                     ;

        osi_print_cksum(ndo, (const uint8_t *)header_lsp->lsp_id,
                        EXTRACT_16BITS(header_lsp->checksum),
                        12, length-12);

        (*ndo->ndo_printf)(ndo, ", PDU length: %u, Flags: [ %s", pdu_len, ((header_lsp->typeblock)&0x4) ? "Overload bit set, " : "")

                                                                                        ;

        if (((header_lsp->typeblock)&0x78)) {
            (*ndo->ndo_printf)(ndo, "%s", ((header_lsp->typeblock)&0x8) ? "default " : "");
            (*ndo->ndo_printf)(ndo, "%s", ((header_lsp->typeblock)&0x10) ? "delay " : "");
            (*ndo->ndo_printf)(ndo, "%s", ((header_lsp->typeblock)&0x20) ? "expense " : "");
            (*ndo->ndo_printf)(ndo, "%s", ((header_lsp->typeblock)&0x40) ? "error " : "");
            (*ndo->ndo_printf)(ndo, "ATT bit set, ");
        }
        (*ndo->ndo_printf)(ndo, "%s", ((header_lsp->typeblock)&0x80) ? "P bit set, " : "");
        (*ndo->ndo_printf)(ndo, "%s ]", tok2str(isis_lsp_istype_values, "Unknown(0x%x)", ((header_lsp->typeblock)&0x3)))
                                                                     ;

        if (ndo->ndo_vflag > 1) {
            if (!print_unknown_data(ndo, pptr, "\n\t  ", (sizeof(struct isis_lsp_header))))
                return (0);
        }

        packet_len -= ((sizeof(struct isis_common_header))+(sizeof(struct isis_lsp_header)));
        pptr = p + ((sizeof(struct isis_common_header))+(sizeof(struct isis_lsp_header)));
        break;

    case 24:
    case 25:
        if (isis_header->fixed_len != ((sizeof(struct isis_common_header))+(sizeof(struct isis_csnp_header)))) {
            (*ndo->ndo_printf)(ndo, ", bogus fixed header length %u should be %lu", isis_header->fixed_len, (unsigned long)((sizeof(struct isis_common_header))+(sizeof(struct isis_csnp_header))))
                                                                                                              ;
            return (0);
        }
        if (!((((sizeof(*header_csnp)) > 0) || ((sizeof(*header_csnp)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*header_csnp)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*header_csnp) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*header_csnp))))) goto trunc;
        if (length < (sizeof(struct isis_common_header))+(sizeof(struct isis_csnp_header)))
            goto trunc;
        if (ndo->ndo_vflag == 0) {
            (*ndo->ndo_printf)(ndo, ", src-id %s", isis_print_id(header_csnp->source_id, 6 +1));
            (*ndo->ndo_printf)(ndo, ", length %u", length);
            return (1);
        }
        pdu_len=EXTRACT_16BITS(header_csnp->pdu_len);
        if (packet_len>pdu_len) {
            packet_len=pdu_len;
            length=pdu_len;
        }

        (*ndo->ndo_printf)(ndo, "\n\t  source-id:    %s, PDU length: %u", isis_print_id(header_csnp->source_id, 6 +1), pdu_len)

                        ;
        (*ndo->ndo_printf)(ndo, "\n\t  start lsp-id: %s", isis_print_id(header_csnp->start_lsp_id, 6 +2))
                                                                     ;
        (*ndo->ndo_printf)(ndo, "\n\t  end lsp-id:   %s", isis_print_id(header_csnp->end_lsp_id, 6 +2))
                                                                   ;

        if (ndo->ndo_vflag > 1) {
            if (!print_unknown_data(ndo, pptr, "\n\t  ", (sizeof(struct isis_csnp_header))))
                return (0);
        }

        packet_len -= ((sizeof(struct isis_common_header))+(sizeof(struct isis_csnp_header)));
        pptr = p + ((sizeof(struct isis_common_header))+(sizeof(struct isis_csnp_header)));
        break;

    case 26:
    case 27:
        if (isis_header->fixed_len != ((sizeof(struct isis_common_header))+(sizeof(struct isis_psnp_header)))) {
            (*ndo->ndo_printf)(ndo, "- bogus fixed header length %u should be %lu", isis_header->fixed_len, (unsigned long)((sizeof(struct isis_common_header))+(sizeof(struct isis_psnp_header))))
                                                                                                           ;
            return (0);
        }
        if (!((((sizeof(*header_psnp)) > 0) || ((sizeof(*header_psnp)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*header_psnp)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*header_psnp) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*header_psnp))))) goto trunc;
        if (length < (sizeof(struct isis_common_header))+(sizeof(struct isis_psnp_header)))
            goto trunc;
        if (ndo->ndo_vflag == 0) {
            (*ndo->ndo_printf)(ndo, ", src-id %s", isis_print_id(header_psnp->source_id, 6 +1));
            (*ndo->ndo_printf)(ndo, ", length %u", length);
            return (1);
        }
        pdu_len=EXTRACT_16BITS(header_psnp->pdu_len);
        if (packet_len>pdu_len) {
            packet_len=pdu_len;
            length=pdu_len;
        }

        (*ndo->ndo_printf)(ndo, "\n\t  source-id:    %s, PDU length: %u", isis_print_id(header_psnp->source_id, 6 +1), pdu_len)

                        ;

        if (ndo->ndo_vflag > 1) {
            if (!print_unknown_data(ndo, pptr, "\n\t  ", (sizeof(struct isis_psnp_header))))
                return (0);
        }

        packet_len -= ((sizeof(struct isis_common_header))+(sizeof(struct isis_psnp_header)));
        pptr = p + ((sizeof(struct isis_common_header))+(sizeof(struct isis_psnp_header)));
        break;

    default:
        if (ndo->ndo_vflag == 0) {
            (*ndo->ndo_printf)(ndo, ", length %u", length);
            return (1);
        }
 (void)print_unknown_data(ndo, pptr, "\n\t  ", length);
 return (0);
    }





    while (packet_len > 0) {
 if (!((((2) > 0) || ((2) == 0)) && ((uintptr_t)ndo->ndo_snapend - (2) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*pptr) <= (uintptr_t)ndo->ndo_snapend - (2)))) goto trunc;
 if (packet_len < 2)
     goto trunc;
 tlv_type = *pptr++;
 tlv_len = *pptr++;
        tmp =tlv_len;
        tptr = pptr;
 packet_len -= 2;


 (*ndo->ndo_printf)(ndo, "\n\t    %s TLV #%u, length: %u", tok2str(isis_tlv_values, "unknown", tlv_type), tlv_type, tlv_len)




                        ;

        if (tlv_len == 0)
     continue;

 if (packet_len < tlv_len)
     goto trunc;


 switch (tlv_type) {
 case 1:
     if (!((((1) > 0) || ((1) == 0)) && ((uintptr_t)ndo->ndo_snapend - (1) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*tptr) <= (uintptr_t)ndo->ndo_snapend - (1)))) goto trunc;
     alen = *tptr++;
     while (tmp && alen < tmp) {
         if (!((((alen) > 0) || ((alen) == 0)) && ((uintptr_t)ndo->ndo_snapend - (alen) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*tptr) <= (uintptr_t)ndo->ndo_snapend - (alen)))) goto trunc;
  (*ndo->ndo_printf)(ndo, "\n\t      Area address (length: %u): %s", alen, isonsap_string(ndo, tptr, alen))

                                                        ;
  tptr += alen;
  tmp -= alen + 1;
  if (tmp==0)
                    break;
  if (!((((1) > 0) || ((1) == 0)) && ((uintptr_t)ndo->ndo_snapend - (1) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*tptr) <= (uintptr_t)ndo->ndo_snapend - (1)))) goto trunc;
  alen = *tptr++;
     }
     break;
 case 6:
     while (tmp >= 6) {
                if (!((((6) > 0) || ((6) == 0)) && ((uintptr_t)ndo->ndo_snapend - (6) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*tptr) <= (uintptr_t)ndo->ndo_snapend - (6)))) goto trunc;
                (*ndo->ndo_printf)(ndo, "\n\t      SNPA: %s", isis_print_id(tptr, 6));
                tmp -= 6;
                tptr += 6;
     }
     break;

        case 7:
            if (!((((1) > 0) || ((1) == 0)) && ((uintptr_t)ndo->ndo_snapend - (1) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*tptr) <= (uintptr_t)ndo->ndo_snapend - (1))) || tmp < 3)
  goto trunctlv;
     lan_alen = *tptr++;
     if (lan_alen == 0) {
                (*ndo->ndo_printf)(ndo, "\n\t      LAN address length 0 bytes (invalid)");
                break;
            }
            tmp --;
            (*ndo->ndo_printf)(ndo, "\n\t      LAN address length %u bytes ", lan_alen);
     while (tmp >= lan_alen) {
                if (!((((lan_alen) > 0) || ((lan_alen) == 0)) && ((uintptr_t)ndo->ndo_snapend - (lan_alen) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*tptr) <= (uintptr_t)ndo->ndo_snapend - (lan_alen)))) goto trunc;
                (*ndo->ndo_printf)(ndo, "\n\t\tIS Neighbor: %s", isis_print_id(tptr, lan_alen));
                tmp -= lan_alen;
                tptr +=lan_alen;
            }
            break;

 case 8:
     break;

        case 222:
            mt_len = isis_print_mtid(ndo, tptr, "\n\t      ");
            if (mt_len == 0)
                goto trunctlv;
            tptr+=mt_len;
            tmp-=mt_len;
            while (tmp >= 2+6 +1 +3+1) {
                ext_is_len = isis_print_ext_is_reach(ndo, tptr, "\n\t      ", tlv_type);
                if (ext_is_len == 0)
                    goto trunctlv;

                tmp-=ext_is_len;
                tptr+=ext_is_len;
            }
            break;

        case 24:
     while (tmp >= 6 +1 +1) {
         ext_is_len = isis_print_ext_is_reach(ndo, tptr, "\n\t      ", tlv_type);
  if (ext_is_len == 0)
             goto trunctlv;
  tmp-=ext_is_len;
  tptr+=ext_is_len;
     }
     break;

        case 22:
            while (tmp >= 6 +1 +3+1) {
                ext_is_len = isis_print_ext_is_reach(ndo, tptr, "\n\t      ", tlv_type);
                if (ext_is_len == 0)
                    goto trunctlv;
                tmp-=ext_is_len;
                tptr+=ext_is_len;
            }
            break;
        case 2:
     if (!((((1) > 0) || ((1) == 0)) && ((uintptr_t)ndo->ndo_snapend - (1) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*tptr) <= (uintptr_t)ndo->ndo_snapend - (1)))) goto trunc;
            (*ndo->ndo_printf)(ndo, "\n\t      %s", tok2str(isis_is_reach_virtual_values, "bogus virtual flag 0x%02x", *tptr++))


                                     ;
     tlv_is_reach = (const struct isis_tlv_is_reach *)tptr;
            while (tmp >= sizeof(struct isis_tlv_is_reach)) {
  if (!((((sizeof(*tlv_is_reach)) > 0) || ((sizeof(*tlv_is_reach)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*tlv_is_reach)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*tlv_is_reach) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*tlv_is_reach))))) goto trunc;
  (*ndo->ndo_printf)(ndo, "\n\t      IS Neighbor: %s", isis_print_id(tlv_is_reach->neighbor_nodeid, 6 +1))
                                                                    ;
  isis_print_metric_block(ndo, &tlv_is_reach->isis_metric_block);
  tmp -= sizeof(struct isis_tlv_is_reach);
  tlv_is_reach++;
     }
            break;

        case 3:
     tlv_es_reach = (const struct isis_tlv_es_reach *)tptr;
            while (tmp >= sizeof(struct isis_tlv_es_reach)) {
  if (!((((sizeof(*tlv_es_reach)) > 0) || ((sizeof(*tlv_es_reach)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*tlv_es_reach)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*tlv_es_reach) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*tlv_es_reach))))) goto trunc;
  (*ndo->ndo_printf)(ndo, "\n\t      ES Neighbor: %s", isis_print_id(tlv_es_reach->neighbor_sysid, 6))
                                                                                   ;
  isis_print_metric_block(ndo, &tlv_es_reach->isis_metric_block);
  tmp -= sizeof(struct isis_tlv_es_reach);
  tlv_es_reach++;
     }
            break;


 case 128:
 case 130:
  if (!isis_print_tlv_ip_reach(ndo, pptr, "\n\t      ", tlv_len))
   return (1);
  break;

 case 135:
     while (tmp>0) {
                ext_ip_len = isis_print_extd_ip_reach(ndo, tptr, "\n\t      ", 
                                                                              2
                                                                                     );
                if (ext_ip_len == 0)
                    goto trunctlv;
                tptr+=ext_ip_len;
  tmp-=ext_ip_len;
     }
     break;

        case 235:
            mt_len = isis_print_mtid(ndo, tptr, "\n\t      ");
            if (mt_len == 0) {
                goto trunctlv;
            }
            tptr+=mt_len;
            tmp-=mt_len;

            while (tmp>0) {
                ext_ip_len = isis_print_extd_ip_reach(ndo, tptr, "\n\t      ", 
                                                                              2
                                                                                     );
                if (ext_ip_len == 0)
                    goto trunctlv;
                tptr+=ext_ip_len;
  tmp-=ext_ip_len;
     }
     break;

 case 236:
     while (tmp>0) {
                ext_ip_len = isis_print_extd_ip_reach(ndo, tptr, "\n\t      ", 
                                                                              10
                                                                                      );
                if (ext_ip_len == 0)
                    goto trunctlv;
                tptr+=ext_ip_len;
  tmp-=ext_ip_len;
     }
     break;

 case 237:
            mt_len = isis_print_mtid(ndo, tptr, "\n\t      ");
            if (mt_len == 0) {
                goto trunctlv;
            }
            tptr+=mt_len;
            tmp-=mt_len;

     while (tmp>0) {
                ext_ip_len = isis_print_extd_ip_reach(ndo, tptr, "\n\t      ", 
                                                                              10
                                                                                      );
                if (ext_ip_len == 0)
                    goto trunctlv;
                tptr+=ext_ip_len;
  tmp-=ext_ip_len;
     }
     break;

 case 232:
     while (tmp>=sizeof(struct in6_addr)) {
  if (!((((sizeof(struct in6_addr)) > 0) || ((sizeof(struct in6_addr)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(struct in6_addr)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*tptr) <= (uintptr_t)ndo->ndo_snapend - (sizeof(struct in6_addr))))) goto trunc;

                (*ndo->ndo_printf)(ndo, "\n\t      IPv6 interface address: %s", getname6(ndo, (const u_char *)(tptr)))
                                    ;

  tptr += sizeof(struct in6_addr);
  tmp -= sizeof(struct in6_addr);
     }
     break;
 case 10:
     if (!((((1) > 0) || ((1) == 0)) && ((uintptr_t)ndo->ndo_snapend - (1) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*tptr) <= (uintptr_t)ndo->ndo_snapend - (1)))) goto trunc;

            (*ndo->ndo_printf)(ndo, "\n\t      %s: ", tok2str(isis_subtlv_auth_values, "unknown Authentication type 0x%02x", *tptr))


                                   ;

     switch (*tptr) {
     case 1:
  if (fn_printzp(ndo, tptr + 1, tlv_len - 1, ndo->ndo_snapend))
      goto trunctlv;
  break;
     case 54:
  for(i=1;i<tlv_len;i++) {
      if (!((((1) > 0) || ((1) == 0)) && ((uintptr_t)ndo->ndo_snapend - (1) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*(tptr + i)) <= (uintptr_t)ndo->ndo_snapend - (1)))) goto trunc;
      (*ndo->ndo_printf)(ndo, "%02x", *(tptr + i));
  }
  if (tlv_len != 16 +1)
                    (*ndo->ndo_printf)(ndo, ", (invalid subTLV) ");

                sigcheck = signature_verify(ndo, optr, length, tptr + 1,
                                            isis_clear_checksum_lifetime,
                                            header_lsp);
                (*ndo->ndo_printf)(ndo, " (%s)", tok2str(signature_check_values, "Unknown", sigcheck));

  break;
            case 3:
  if (!((((2) > 0) || ((2) == 0)) && ((uintptr_t)ndo->ndo_snapend - (2) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*(tptr + 1)) <= (uintptr_t)ndo->ndo_snapend - (2)))) goto trunc;
                key_id = EXTRACT_16BITS((tptr+1));
                (*ndo->ndo_printf)(ndo, "%u, password: ", key_id);
                for(i=1 + sizeof(uint16_t);i<tlv_len;i++) {
                    if (!((((1) > 0) || ((1) == 0)) && ((uintptr_t)ndo->ndo_snapend - (1) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*(tptr + i)) <= (uintptr_t)ndo->ndo_snapend - (1)))) goto trunc;
                    (*ndo->ndo_printf)(ndo, "%02x", *(tptr + i));
                }
                break;
     case 255:
     default:
  if (!print_unknown_data(ndo, tptr + 1, "\n\t\t  ", tlv_len - 1))
      return(0);
  break;
     }
     break;

 case 240:
     tlv_ptp_adj = (const struct isis_tlv_ptp_adj *)tptr;
     if(tmp>=1) {
  if (!((((1) > 0) || ((1) == 0)) && ((uintptr_t)ndo->ndo_snapend - (1) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*tptr) <= (uintptr_t)ndo->ndo_snapend - (1)))) goto trunc;
  (*ndo->ndo_printf)(ndo, "\n\t      Adjacency State: %s (%u)", tok2str(isis_ptp_adjancey_values, "unknown", *tptr), *tptr)

                               ;
  tmp--;
     }
     if(tmp>sizeof(tlv_ptp_adj->extd_local_circuit_id)) {
  if (!((((sizeof(tlv_ptp_adj->extd_local_circuit_id)) > 0) || ((sizeof(tlv_ptp_adj->extd_local_circuit_id)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(tlv_ptp_adj->extd_local_circuit_id)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(tlv_ptp_adj->extd_local_circuit_id) <= (uintptr_t)ndo->ndo_snapend - (sizeof(tlv_ptp_adj->extd_local_circuit_id))))) goto trunc;
  (*ndo->ndo_printf)(ndo, "\n\t      Extended Local circuit-ID: 0x%08x", EXTRACT_32BITS(tlv_ptp_adj->extd_local_circuit_id))
                                                             ;
  tmp-=sizeof(tlv_ptp_adj->extd_local_circuit_id);
     }
     if(tmp>=6) {
  if (!((((6) > 0) || ((6) == 0)) && ((uintptr_t)ndo->ndo_snapend - (6) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(tlv_ptp_adj->neighbor_sysid) <= (uintptr_t)ndo->ndo_snapend - (6)))) goto trunc;
  (*ndo->ndo_printf)(ndo, "\n\t      Neighbor System-ID: %s", isis_print_id(tlv_ptp_adj->neighbor_sysid, 6))
                                                                    ;
  tmp-=6;
     }
     if(tmp>=sizeof(tlv_ptp_adj->neighbor_extd_local_circuit_id)) {
  if (!((((sizeof(tlv_ptp_adj->neighbor_extd_local_circuit_id)) > 0) || ((sizeof(tlv_ptp_adj->neighbor_extd_local_circuit_id)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(tlv_ptp_adj->neighbor_extd_local_circuit_id)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(tlv_ptp_adj->neighbor_extd_local_circuit_id) <= (uintptr_t)ndo->ndo_snapend - (sizeof(tlv_ptp_adj->neighbor_extd_local_circuit_id))))) goto trunc;
  (*ndo->ndo_printf)(ndo, "\n\t      Neighbor Extended Local circuit-ID: 0x%08x", EXTRACT_32BITS(tlv_ptp_adj->neighbor_extd_local_circuit_id))
                                                                      ;
     }
     break;

 case 129:
     (*ndo->ndo_printf)(ndo, "\n\t      NLPID(s): ");
     while (tmp>0) {
  if (!((((1) > 0) || ((1) == 0)) && ((uintptr_t)ndo->ndo_snapend - (1) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*(tptr)) <= (uintptr_t)ndo->ndo_snapend - (1)))) goto trunc;
  (*ndo->ndo_printf)(ndo, "%s (0x%02x)", tok2str(nlpid_values, "unknown", *tptr), *tptr)



                              ;
  if (tmp>1)
      (*ndo->ndo_printf)(ndo, ", ");
                tptr++;
                tmp--;
     }
     break;

    case 143:
    {
      if (!((((2) > 0) || ((2) == 0)) && ((uintptr_t)ndo->ndo_snapend - (2) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*(tptr)) <= (uintptr_t)ndo->ndo_snapend - (2)))) goto trunc;

      (*ndo->ndo_printf)(ndo, "\n\t       RES: %d, MTID(s): %d", (EXTRACT_16BITS (tptr) >> 12), (EXTRACT_16BITS (tptr) & 0x0fff))

                                                ;

      tmp = tmp-2;
      tptr = tptr+2;

      if (tmp)
        isis_print_mt_port_cap_subtlv(ndo, tptr, tmp);

      break;
    }

    case 144:

      if (!((((2) > 0) || ((2) == 0)) && ((uintptr_t)ndo->ndo_snapend - (2) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*(tptr)) <= (uintptr_t)ndo->ndo_snapend - (2)))) goto trunc;

      (*ndo->ndo_printf)(ndo, "\n\t      O: %d, RES: %d, MTID(s): %d", (EXTRACT_16BITS(tptr) >> 15) & 0x01, (EXTRACT_16BITS(tptr) >> 12) & 0x07, EXTRACT_16BITS(tptr) & 0x0fff)


                                               ;

      tmp = tmp-2;
      tptr = tptr+2;

      if (tmp)
        isis_print_mt_capability_subtlv(ndo, tptr, tmp);

      break;

 case 134:
     if (!((((sizeof(struct in_addr)) > 0) || ((sizeof(struct in_addr)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(struct in_addr)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*pptr) <= (uintptr_t)ndo->ndo_snapend - (sizeof(struct in_addr))))) goto trunc;
     (*ndo->ndo_printf)(ndo, "\n\t      Traffic Engineering Router ID: %s", getname(ndo, (const u_char *)(pptr)));
     break;

 case 132:
     while (tmp>=sizeof(struct in_addr)) {
  if (!((((sizeof(struct in_addr)) > 0) || ((sizeof(struct in_addr)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(struct in_addr)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*tptr) <= (uintptr_t)ndo->ndo_snapend - (sizeof(struct in_addr))))) goto trunc;
  (*ndo->ndo_printf)(ndo, "\n\t      IPv4 interface address: %s", getname(ndo, (const u_char *)(tptr)));
  tptr += sizeof(struct in_addr);
  tmp -= sizeof(struct in_addr);
     }
     break;

 case 137:
     (*ndo->ndo_printf)(ndo, "\n\t      Hostname: ");
     if (fn_printzp(ndo, tptr, tmp, ndo->ndo_snapend))
  goto trunctlv;
     break;

 case 138:
     if (tmp < 6 +1)
         break;
     if (!((((6 +1) > 0) || ((6 +1) == 0)) && ((uintptr_t)ndo->ndo_snapend - (6 +1) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*tptr) <= (uintptr_t)ndo->ndo_snapend - (6 +1)))) goto trunc;
     (*ndo->ndo_printf)(ndo, "\n\t      IS Neighbor: %s", isis_print_id(tptr, 6 +1));
     tptr+=(6 +1);
     tmp-=(6 +1);

     if (tmp < 1)
         break;
     if (!((((1) > 0) || ((1) == 0)) && ((uintptr_t)ndo->ndo_snapend - (1) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*tptr) <= (uintptr_t)ndo->ndo_snapend - (1)))) goto trunc;
     (*ndo->ndo_printf)(ndo, ", Flags: [%s]", ((*tptr++)&0x1) ? "numbered" : "unnumbered");
     tmp--;

     if (tmp < sizeof(struct in_addr))
         break;
     if (!((((sizeof(struct in_addr)) > 0) || ((sizeof(struct in_addr)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(struct in_addr)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*tptr) <= (uintptr_t)ndo->ndo_snapend - (sizeof(struct in_addr))))) goto trunc;
     (*ndo->ndo_printf)(ndo, "\n\t      IPv4 interface address: %s", getname(ndo, (const u_char *)(tptr)));
     tptr+=sizeof(struct in_addr);
     tmp-=sizeof(struct in_addr);

     if (tmp < sizeof(struct in_addr))
         break;
     if (!((((sizeof(struct in_addr)) > 0) || ((sizeof(struct in_addr)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(struct in_addr)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*tptr) <= (uintptr_t)ndo->ndo_snapend - (sizeof(struct in_addr))))) goto trunc;
     (*ndo->ndo_printf)(ndo, "\n\t      IPv4 neighbor address: %s", getname(ndo, (const u_char *)(tptr)));
     tptr+=sizeof(struct in_addr);
     tmp-=sizeof(struct in_addr);

     while (tmp>=4) {
                if (!((((4) > 0) || ((4) == 0)) && ((uintptr_t)ndo->ndo_snapend - (4) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*tptr) <= (uintptr_t)ndo->ndo_snapend - (4)))) goto trunc;
                (*ndo->ndo_printf)(ndo, "\n\t      Link-ID: 0x%08x", EXTRACT_32BITS(tptr));
                tptr+=4;
                tmp-=4;
     }
     break;

 case 9:
     tlv_lsp = (const struct isis_tlv_lsp *)tptr;
     while(tmp>=sizeof(struct isis_tlv_lsp)) {
  if (!((((sizeof((tlv_lsp->lsp_id)[6 +2 -1])) > 0) || ((sizeof((tlv_lsp->lsp_id)[6 +2 -1])) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof((tlv_lsp->lsp_id)[6 +2 -1])) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&((tlv_lsp->lsp_id)[6 +2 -1]) <= (uintptr_t)ndo->ndo_snapend - (sizeof((tlv_lsp->lsp_id)[6 +2 -1]))))) goto trunc;
  (*ndo->ndo_printf)(ndo, "\n\t      lsp-id: %s", isis_print_id(tlv_lsp->lsp_id, 6 +2))
                                                                   ;
  if (!((((4) > 0) || ((4) == 0)) && ((uintptr_t)ndo->ndo_snapend - (4) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(tlv_lsp->sequence_number) <= (uintptr_t)ndo->ndo_snapend - (4)))) goto trunc;
  (*ndo->ndo_printf)(ndo, ", seq: 0x%08x", EXTRACT_32BITS(tlv_lsp->sequence_number));
  if (!((((2) > 0) || ((2) == 0)) && ((uintptr_t)ndo->ndo_snapend - (2) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(tlv_lsp->remaining_lifetime) <= (uintptr_t)ndo->ndo_snapend - (2)))) goto trunc;
  (*ndo->ndo_printf)(ndo, ", lifetime: %5ds", EXTRACT_16BITS(tlv_lsp->remaining_lifetime));
  if (!((((2) > 0) || ((2) == 0)) && ((uintptr_t)ndo->ndo_snapend - (2) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(tlv_lsp->checksum) <= (uintptr_t)ndo->ndo_snapend - (2)))) goto trunc;
  (*ndo->ndo_printf)(ndo, ", chksum: 0x%04x", EXTRACT_16BITS(tlv_lsp->checksum));
  tmp-=sizeof(struct isis_tlv_lsp);
  tlv_lsp++;
     }
     break;

 case 12:
     if (tmp < 2)
         break;
     if (!((((2) > 0) || ((2) == 0)) && ((uintptr_t)ndo->ndo_snapend - (2) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*tptr) <= (uintptr_t)ndo->ndo_snapend - (2)))) goto trunc;
     (*ndo->ndo_printf)(ndo, "\n\t      checksum: 0x%04x ", EXTRACT_16BITS(tptr));





            osi_print_cksum(ndo, optr, EXTRACT_16BITS(tptr), tptr-optr,
                length);
     break;

 case 13:
     if (tlv_len >= 6 + 1) {
  if (!((((6 + 1) > 0) || ((6 + 1) == 0)) && ((uintptr_t)ndo->ndo_snapend - (6 + 1) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*tptr) <= (uintptr_t)ndo->ndo_snapend - (6 + 1)))) goto trunc;
  (*ndo->ndo_printf)(ndo, "\n\t      Purge Originator System-ID: %s", isis_print_id(tptr + 1, 6))
                                                 ;
     }

     if (tlv_len == 2 * 6 + 1) {
  if (!((((2 * 6 + 1) > 0) || ((2 * 6 + 1) == 0)) && ((uintptr_t)ndo->ndo_snapend - (2 * 6 + 1) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*tptr) <= (uintptr_t)ndo->ndo_snapend - (2 * 6 + 1)))) goto trunc;
  (*ndo->ndo_printf)(ndo, "\n\t      Received from System-ID: %s", isis_print_id(tptr + 6 + 1, 6))
                                                                 ;
     }
     break;

 case 229:
            if (tmp < 2)
                break;
     while (tmp>1) {


  if (tmp!=1) {
                    mt_len = isis_print_mtid(ndo, tptr, "\n\t      ");
                    if (mt_len == 0)
                        goto trunctlv;
                    tptr+=mt_len;
                    tmp-=mt_len;
  } else {
      (*ndo->ndo_printf)(ndo, "\n\t      invalid MT-ID");
      break;
  }
     }
     break;

 case 211:

            if (tmp < 1)
                break;
            if (!((((1) > 0) || ((1) == 0)) && ((uintptr_t)ndo->ndo_snapend - (1) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*tptr) <= (uintptr_t)ndo->ndo_snapend - (1)))) goto trunc;
            (*ndo->ndo_printf)(ndo, "\n\t      Flags [%s]", bittok2str(isis_restart_flag_values, "none", *tptr))
                                                                        ;
            tptr+=1;
            tmp-=1;


            if (tmp == 0)
                break;

            if (tmp < 2)
                break;
            if (!((((2) > 0) || ((2) == 0)) && ((uintptr_t)ndo->ndo_snapend - (2) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*tptr) <= (uintptr_t)ndo->ndo_snapend - (2)))) goto trunc;

            (*ndo->ndo_printf)(ndo, ", Remaining holding time %us", EXTRACT_16BITS(tptr));
            tptr+=2;
            tmp-=2;


            if (tmp == 6) {
                    if (!((((6) > 0) || ((6) == 0)) && ((uintptr_t)ndo->ndo_snapend - (6) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*tptr) <= (uintptr_t)ndo->ndo_snapend - (6)))) goto trunc;
                    (*ndo->ndo_printf)(ndo, ", for %s", isis_print_id(tptr,6));
            }
     break;

        case 131:
     if (tmp < 1)
         break;
            if (!((((1) > 0) || ((1) == 0)) && ((uintptr_t)ndo->ndo_snapend - (1) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*tptr) <= (uintptr_t)ndo->ndo_snapend - (1)))) goto trunc;
            (*ndo->ndo_printf)(ndo, "\n\t      Inter-Domain Information Type: %s", tok2str(isis_subtlv_idrp_values, "Unknown (0x%02x)", *tptr))


                                   ;
            switch (*tptr++) {
            case 2:
                if (!((((2) > 0) || ((2) == 0)) && ((uintptr_t)ndo->ndo_snapend - (2) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*tptr) <= (uintptr_t)ndo->ndo_snapend - (2)))) goto trunc;
                (*ndo->ndo_printf)(ndo, "AS Number: %u", EXTRACT_16BITS(tptr));
                break;
            case 1:
            case 0:
            default:
                if (!print_unknown_data(ndo, tptr, "\n\t      ", tlv_len - 1))
                    return(0);
                break;
            }
            break;

        case 14:
     if (tmp < 2)
         break;
            if (!((((2) > 0) || ((2) == 0)) && ((uintptr_t)ndo->ndo_snapend - (2) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*tptr) <= (uintptr_t)ndo->ndo_snapend - (2)))) goto trunc;
            (*ndo->ndo_printf)(ndo, "\n\t      LSP Buffersize: %u", EXTRACT_16BITS(tptr));
            break;

        case 4:
            while (tmp >= 6) {
                if (!((((6) > 0) || ((6) == 0)) && ((uintptr_t)ndo->ndo_snapend - (6) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*tptr) <= (uintptr_t)ndo->ndo_snapend - (6)))) goto trunc;
                (*ndo->ndo_printf)(ndo, "\n\t      %s", isis_print_id(tptr, 6));
                tptr+=6;
                tmp-=6;
            }
            break;

        case 5:
     if (tmp < sizeof(struct isis_metric_block))
         break;
            if (!((((sizeof(struct isis_metric_block)) > 0) || ((sizeof(struct isis_metric_block)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(struct isis_metric_block)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*tptr) <= (uintptr_t)ndo->ndo_snapend - (sizeof(struct isis_metric_block))))) goto trunc;
            (*ndo->ndo_printf)(ndo, "\n\t      Metric Block");
            isis_print_metric_block(ndo, (const struct isis_metric_block *)tptr);
            tptr+=sizeof(struct isis_metric_block);
            tmp-=sizeof(struct isis_metric_block);

            while(tmp>0) {
                if (!((((1) > 0) || ((1) == 0)) && ((uintptr_t)ndo->ndo_snapend - (1) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*tptr) <= (uintptr_t)ndo->ndo_snapend - (1)))) goto trunc;
                prefix_len=*tptr++;
                if (prefix_len < 2) {
                    (*ndo->ndo_printf)(ndo, "\n\t\tAddress: prefix length %u < 2", prefix_len);
                    break;
                }
                tmp--;
                if (tmp < prefix_len/2)
                    break;
                if (!((((prefix_len / 2) > 0) || ((prefix_len / 2) == 0)) && ((uintptr_t)ndo->ndo_snapend - (prefix_len / 2) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*tptr) <= (uintptr_t)ndo->ndo_snapend - (prefix_len / 2)))) goto trunc;
                (*ndo->ndo_printf)(ndo, "\n\t\tAddress: %s/%u", isonsap_string(ndo, tptr, prefix_len / 2), prefix_len * 4)
                                                                                  ;
                tptr+=prefix_len/2;
                tmp-=prefix_len/2;
            }
            break;

        case 241:
     if (tmp < 4)
         break;
            if (!((((4) > 0) || ((4) == 0)) && ((uintptr_t)ndo->ndo_snapend - (4) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*tptr) <= (uintptr_t)ndo->ndo_snapend - (4)))) goto trunc;
            (*ndo->ndo_printf)(ndo, "\n\t      Sequence number: %u", EXTRACT_32BITS(tptr));
            break;

        case 250:
     if (tmp < 3)
         break;
            if (!((((3) > 0) || ((3) == 0)) && ((uintptr_t)ndo->ndo_snapend - (3) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*tptr) <= (uintptr_t)ndo->ndo_snapend - (3)))) goto trunc;
            vendor_id = ((uint32_t)(((uint32_t)(*((const uint8_t *)(tptr) + 0)) << 16) | ((uint32_t)(*((const uint8_t *)(tptr) + 1)) << 8) | ((uint32_t)(*((const uint8_t *)(tptr) + 2)) << 0)));
            (*ndo->ndo_printf)(ndo, "\n\t      Vendor: %s (%u)", tok2str(oui_values, "Unknown", vendor_id), vendor_id)

                              ;
            tptr+=3;
            tmp-=3;
            if (tmp > 0)
                if (!print_unknown_data(ndo, tptr, "\n\t\t", tmp))
                    return(0);
            break;





        case 42:
        case 66:
        case 133:
        case 176:
        case 177:

 default:
  if (ndo->ndo_vflag <= 1) {
   if (!print_unknown_data(ndo, pptr, "\n\t\t", tlv_len))
    return(0);
  }
  break;
 }

 if (ndo->ndo_vflag> 1) {
  if (!print_unknown_data(ndo, pptr, "\n\t      ", tlv_len))
   return(0);
 }

 pptr += tlv_len;
 packet_len -= tlv_len;
    }

    if (packet_len != 0) {
 (*ndo->ndo_printf)(ndo, "\n\t      %u straggler bytes", packet_len);
    }
    return (1);

 trunc:
    (*ndo->ndo_printf)(ndo, "%s", tstr);
    return (1);

 trunctlv:
    (*ndo->ndo_printf)(ndo, "\n\t\t");
    (*ndo->ndo_printf)(ndo, "%s", tstr);
    return(1);
}

static void
osi_print_cksum(netdissect_options *ndo, const uint8_t *pptr,
         uint16_t checksum, int checksum_offset, u_int length)
{
        uint16_t calculated_checksum={0};





        if (!checksum
            || checksum_offset < 0
            || !((((2) > 0) || ((2) == 0)) && ((uintptr_t)ndo->ndo_snapend - (2) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*(pptr + checksum_offset)) <= (uintptr_t)ndo->ndo_snapend - (2)))
            || (u_int)checksum_offset > length
            || !((((length) > 0) || ((length) == 0)) && ((uintptr_t)ndo->ndo_snapend - (length) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*pptr) <= (uintptr_t)ndo->ndo_snapend - (length)))) {
                (*ndo->ndo_printf)(ndo, " (unverified)");
        } else {



                calculated_checksum = create_osi_cksum(pptr, checksum_offset, length);
                if (checksum == calculated_checksum) {
                        (*ndo->ndo_printf)(ndo, " (correct)");
                } else {
                        (*ndo->ndo_printf)(ndo, " (incorrect should be 0x%04x)", calculated_checksum);
                }
        }
}