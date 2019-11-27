











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
extern const struct tok ethertype_values[];
extern const struct tok gmpls_link_prot_values[];
extern const struct tok gmpls_switch_cap_values[];
extern const struct tok gmpls_switch_cap_tsc_indication_values[];
extern const struct tok gmpls_encoding_values[];
extern const struct tok gmpls_payload_values[];
extern const struct tok diffserv_te_bc_values[];
extern const struct tok lmp_sd_service_config_cpsa_link_type_values[];
extern const struct tok lmp_sd_service_config_cpsa_signal_type_sdh_values[];
extern const struct tok lmp_sd_service_config_cpsa_signal_type_sonet_values[];
extern const struct tok af_values[];
extern const struct tok bsd_af_values[];
extern const struct tok signature_check_values[];
extern int signature_verify(netdissect_options *, const u_char *, u_int,
                            const u_char *, void (*)(void *), const void *);

static const char tstr[] = " [|rsvp]";
struct rsvp_common_header {
    uint8_t version_flags;
    uint8_t msg_type;
    uint8_t checksum[2];
    uint8_t ttl;
    uint8_t reserved;
    uint8_t length[2];
};
struct rsvp_object_header {
    uint8_t length[2];
    uint8_t class_num;
    uint8_t ctype;
};
static const struct tok rsvp_msg_type_values[] = {
    { 1, "Path" },
    { 2, "Resv" },
    { 3, "PathErr" },
    { 4, "ResvErr" },
    { 5, "PathTear" },
    { 6, "ResvTear" },
    { 7, "ResvConf" },
    { 12, "Bundle" },
    { 13, "Acknowledgement" },
    { 14, "Hello (Old)" },
    { 15, "Refresh" },
    { 20, "Hello" },
    { 0, 
        ((void *)0)
            }
};

static const struct tok rsvp_header_flag_values[] = {
    { 0x01, "Refresh reduction capable" },
    { 0, 
        ((void *)0)
            }
};
static const struct tok rsvp_obj_values[] = {
    { 1, "Session" },
    { 3, "RSVP Hop" },
    { 4, "Integrity" },
    { 5, "Time Values" },
    { 6, "Error Spec" },
    { 7, "Scope" },
    { 8, "Style" },
    { 9, "Flowspec" },
    { 10, "FilterSpec" },
    { 11, "Sender Template" },
    { 12, "Sender TSpec" },
    { 13, "Adspec" },
    { 14, "Policy Data" },
    { 15, "Confirm" },
    { 16, "Label" },
    { 19, "Label Request" },
    { 20, "ERO" },
    { 21, "RRO" },
    { 22, "Hello" },
    { 23, "Message ID" },
    { 24, "Message ID Ack" },
    { 25, "Message ID List" },
    { 34, "Recovery Label" },
    { 35, "Upstream Label" },
    { 36, "Label Set" },
    { 130, "Acceptable Label Set" },
    { 63, "Detour" },
    { 66, "Class Type" },
    { 125, "Class Type (old)" },
    { 129, "Suggested Label" },
    { 204, "Properties" },
    { 205, "Fast Re-Route" },
    { 207, "Session Attribute" },
    { 229, "Generalized UNI" },
    { 230, "Call-ID" },
    { 236, "Call Capability" },
    { 131, "Restart Capability" },
    { 195, "Notify Request" },
    { 37, "Protection" },
    { 196, "Administrative Status" },
    { 50, "Sub-LSP to LSP" },
    { 0, 
        ((void *)0)
            }
};
static const struct tok rsvp_ctype_values[] = {
    { 256*3 +1, "IPv4" },
    { 256*3 +2, "IPv6" },
    { 256*3 +3, "IPv4 plus opt. TLVs" },
    { 256*3 +4, "IPv6 plus opt. TLVs" },
    { 256*195 +1, "IPv4" },
    { 256*195 +2, "IPv6" },
    { 256*15 +1, "IPv4" },
    { 256*15 +2, "IPv6" },
    { 256*5 +1, "1" },
    { 256*9 +1, "obsolete" },
    { 256*9 +2, "IntServ" },
    { 256*12 +2, "IntServ" },
    { 256*13 +2, "IntServ" },
    { 256*10 +1, "IPv4" },
    { 256*10 +2, "IPv6" },
    { 256*10 +3, "IPv6 Flow-label" },
    { 256*10 +7, "Tunnel IPv4" },
    { 256*10 +12, "IPv4 P2MP LSP Tunnel" },
    { 256*10 +13, "IPv6 P2MP LSP Tunnel" },
    { 256*1 +1, "IPv4" },
    { 256*1 +2, "IPv6" },
    { 256*1 +7, "Tunnel IPv4" },
    { 256*1 +11, "UNI IPv4" },
    { 256*1 +13, "IPv4 P2MP LSP Tunnel" },
    { 256*1 +14, "IPv6 P2MP LSP Tunnel" },
    { 256*11 +1, "IPv4" },
    { 256*11 +2, "IPv6" },
    { 256*11 +7, "Tunnel IPv4" },
    { 256*11 +12, "IPv4 P2MP LSP Tunnel" },
    { 256*11 +13, "IPv6 P2MP LSP Tunnel" },
    { 256*23 +1, "1" },
    { 256*24 +1, "Message id ack" },
    { 256*24 +2, "Message id nack" },
    { 256*25 +1, "1" },
    { 256*8 +1, "1" },
    { 256*22 +1, "Hello Request" },
    { 256*22 +2, "Hello Ack" },
    { 256*19 +1, "without label range" },
    { 256*19 +2, "with ATM label range" },
    { 256*19 +3, "with FR label range" },
    { 256*19 +4, "Generalized Label" },
    { 256*16 +1, "Label" },
    { 256*16 +2, "Generalized Label" },
    { 256*16 +3, "Waveband Switching" },
    { 256*129 +1, "Label" },
    { 256*129 +2, "Generalized Label" },
    { 256*129 +3, "Waveband Switching" },
    { 256*35 +1, "Label" },
    { 256*35 +2, "Generalized Label" },
    { 256*35 +3, "Waveband Switching" },
    { 256*34 +1, "Label" },
    { 256*34 +2, "Generalized Label" },
    { 256*34 +3, "Waveband Switching" },
    { 256*20 +1, "IPv4" },
    { 256*21 +1, "IPv4" },
    { 256*6 +1, "IPv4" },
    { 256*6 +2, "IPv6" },
    { 256*6 +3, "IPv4 plus opt. TLVs" },
    { 256*6 +4, "IPv6 plus opt. TLVs" },
    { 256*131 +1, "IPv4" },
    { 256*207 +7, "Tunnel IPv4" },
    { 256*205 +7, "Tunnel IPv4" },
    { 256*205 +1, "1" },
    { 256*63 +7, "Tunnel IPv4" },
    { 256*204 +1, "1" },
    { 256*196 +1, "1" },
    { 256*66 +1, "1" },
    { 256*125 +1, "1" },
    { 256*36 +1, "1" },
    { 256*229 +1, "1" },
    { 256*50 +1, "IPv4 sub-LSP" },
    { 256*50 +2, "IPv6 sub-LSP" },
    { 0, 
        ((void *)0)
            }
};

struct rsvp_obj_integrity_t {
    uint8_t flags;
    uint8_t res;
    uint8_t key_id[6];
    uint8_t sequence[8];
    uint8_t digest[16];
};

static const struct tok rsvp_obj_integrity_flag_values[] = {
    { 0x80, "Handshake" },
    { 0, 
        ((void *)0)
            }
};

struct rsvp_obj_frr_t {
    uint8_t setup_prio;
    uint8_t hold_prio;
    uint8_t hop_limit;
    uint8_t flags;
    uint8_t bandwidth[4];
    uint8_t include_any[4];
    uint8_t exclude_any[4];
    uint8_t include_all[4];
};
static const struct tok rsvp_obj_xro_values[] = {
    { 0, "Reserved" },
    { 1, "IPv4 prefix" },
    { 2, "IPv6 prefix" },
    { 3, "Label" },
    { 32, "Autonomous system number" },
    { 64, "MPLS label switched path termination" },
    { 0, 
        ((void *)0)
            }
};


static const struct tok rsvp_obj_rro_flag_values[] = {
    { 0x01, "Local protection available" },
    { 0x02, "Local protection in use" },
    { 0x04, "Bandwidth protection" },
    { 0x08, "Node protection" },
    { 0, 
        ((void *)0)
            }
};


static const struct tok rsvp_obj_rro_label_flag_values[] = {
    { 0x01, "Global" },
    { 0, 
        ((void *)0)
            }
};

static const struct tok rsvp_resstyle_values[] = {
    { 17, "Wildcard Filter" },
    { 10, "Fixed Filter" },
    { 18, "Shared Explicit" },
    { 0, 
        ((void *)0)
            }
};




static const struct tok rsvp_intserv_service_type_values[] = {
    { 1, "Default/Global Information" },
    { 2, "Guaranteed Service" },
    { 5, "Controlled Load" },
    { 0, 
        ((void *)0)
            }
};

static const struct tok rsvp_intserv_parameter_id_values[] = {
    { 4, "IS hop cnt" },
    { 6, "Path b/w estimate" },
    { 8, "Minimum path latency" },
    { 10, "Composed MTU" },
    { 127, "Token Bucket TSpec" },
    { 130, "Guaranteed Service RSpec" },
    { 133, "End-to-end composed value for C" },
    { 134, "End-to-end composed value for D" },
    { 135, "Since-last-reshaping point composed C" },
    { 136, "Since-last-reshaping point composed D" },
    { 0, 
        ((void *)0)
            }
};

static const struct tok rsvp_session_attribute_flag_values[] = {
    { 0x01, "Local Protection" },
    { 0x02, "Label Recording" },
    { 0x04, "SE Style" },
    { 0x08, "Bandwidth protection" },
    { 0x10, "Node protection" },
    { 0, 
        ((void *)0)
            }
};

static const struct tok rsvp_obj_prop_tlv_values[] = {
    { 0x01, "Cos" },
    { 0x02, "Metric 1" },
    { 0x04, "Metric 2" },
    { 0x08, "CCC Status" },
    { 0x10, "Path Type" },
    { 0, 
        ((void *)0)
            }
};






static const struct tok rsvp_obj_error_code_values[] = {
    { 24, "Routing Problem" },
    { 25, "Notify Error" },
    { 28, "Diffserv TE Error" },
    { 125, "Diffserv TE Error (Old)" },
    { 0, 
        ((void *)0)
            }
};

static const struct tok rsvp_obj_error_code_routing_values[] = {
    { 1, "Bad EXPLICIT_ROUTE object" },
    { 2, "Bad strict node" },
    { 3, "Bad loose node" },
    { 4, "Bad initial subobject" },
    { 5, "No route available toward destination" },
    { 6, "Unacceptable label value" },
    { 7, "RRO indicated routing loops" },
    { 8, "non-RSVP-capable router in the path" },
    { 9, "MPLS label allocation failure" },
    { 10, "Unsupported L3PID" },
    { 0, 
        ((void *)0)
            }
};

static const struct tok rsvp_obj_error_code_diffserv_te_values[] = {
    { 1, "Unexpected CT object" },
    { 2, "Unsupported CT" },
    { 3, "Invalid CT value" },
    { 4, "CT/setup priority do not form a configured TE-Class" },
    { 5, "CT/holding priority do not form a configured TE-Class" },
    { 6, "CT/setup priority and CT/holding priority do not form a configured TE-Class" },
    { 7, "Inconsistency between signaled PSC and signaled CT" },
    { 8, "Inconsistency between signaled PHBs and signaled CT" },
   { 0, 
       ((void *)0)
           }
};


static const struct tok rsvp_obj_admin_status_flag_values[] = {
    { 0x80000000, "Reflect" },
    { 0x00000004, "Testing" },
    { 0x00000002, "Admin-down" },
    { 0x00000001, "Delete-in-progress" },
    { 0, 
        ((void *)0)
            }
};







static const struct tok rsvp_obj_label_set_action_values[] = {
    { 0, "Inclusive list" },
    { 1, "Exclusive list" },
    { 2, "Inclusive range" },
    { 3, "Exclusive range" },
    { 0, 
        ((void *)0)
            }
};
static const struct tok rsvp_obj_generalized_uni_values[] = {
    { 1, "Source TNA address" },
    { 2, "Destination TNA address" },
    { 3, "Diversity" },
    { 4, "Egress label" },
    { 5, "Service level" },
    { 0, 
        ((void *)0)
            }
};







static int
rsvp_intserv_print(netdissect_options *ndo,
                   const u_char *tptr, u_short obj_tlen)
{
    int parameter_id,parameter_length={0};
    union {
 float f;
 uint32_t i;
    } bw={0};

    if (obj_tlen < 4)
        return 0;
    parameter_id = *(tptr);
    if (!((((2) > 0) || ((2) == 0)) && ((uintptr_t)ndo->ndo_snapend - (2) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*(tptr + 2)) <= (uintptr_t)ndo->ndo_snapend - (2)))) goto trunc;
    parameter_length = EXTRACT_16BITS(tptr+2)<<2;

    (*ndo->ndo_printf)(ndo, "\n\t      Parameter ID: %s (%u), length: %u, Flags: [0x%02x]", tok2str(rsvp_intserv_parameter_id_values,"unknown",parameter_id), parameter_id, parameter_length, *(tptr + 1))



                        ;

    if (obj_tlen < parameter_length+4)
        return 0;
    switch(parameter_id) {

    case 4:







        if (parameter_length == 4) {
     if (!((((4) > 0) || ((4) == 0)) && ((uintptr_t)ndo->ndo_snapend - (4) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*(tptr + 4)) <= (uintptr_t)ndo->ndo_snapend - (4)))) goto trunc;
            (*ndo->ndo_printf)(ndo, "\n\t\tIS hop count: %u", EXTRACT_32BITS(tptr + 4));
        }
        break;

    case 6:







        if (parameter_length == 4) {
     if (!((((4) > 0) || ((4) == 0)) && ((uintptr_t)ndo->ndo_snapend - (4) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*(tptr + 4)) <= (uintptr_t)ndo->ndo_snapend - (4)))) goto trunc;
            bw.i = EXTRACT_32BITS(tptr+4);
            (*ndo->ndo_printf)(ndo, "\n\t\tPath b/w estimate: %.10g Mbps", bw.f / 125000);
        }
        break;

    case 8:







        if (parameter_length == 4) {
     if (!((((4) > 0) || ((4) == 0)) && ((uintptr_t)ndo->ndo_snapend - (4) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*(tptr + 4)) <= (uintptr_t)ndo->ndo_snapend - (4)))) goto trunc;
            (*ndo->ndo_printf)(ndo, "\n\t\tMinimum path latency: ");
            if (EXTRACT_32BITS(tptr+4) == 0xffffffff)
                (*ndo->ndo_printf)(ndo, "don't care");
            else
                (*ndo->ndo_printf)(ndo, "%u", EXTRACT_32BITS(tptr + 4));
        }
        break;

    case 10:
        if (parameter_length == 4) {
     if (!((((4) > 0) || ((4) == 0)) && ((uintptr_t)ndo->ndo_snapend - (4) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*(tptr + 4)) <= (uintptr_t)ndo->ndo_snapend - (4)))) goto trunc;
            (*ndo->ndo_printf)(ndo, "\n\t\tComposed MTU: %u bytes", EXTRACT_32BITS(tptr + 4));
        }
        break;
    case 127:
        if (parameter_length == 20) {
     if (!((((20) > 0) || ((20) == 0)) && ((uintptr_t)ndo->ndo_snapend - (20) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*(tptr + 4)) <= (uintptr_t)ndo->ndo_snapend - (20)))) goto trunc;
            bw.i = EXTRACT_32BITS(tptr+4);
            (*ndo->ndo_printf)(ndo, "\n\t\tToken Bucket Rate: %.10g Mbps", bw.f / 125000);
            bw.i = EXTRACT_32BITS(tptr+8);
            (*ndo->ndo_printf)(ndo, "\n\t\tToken Bucket Size: %.10g bytes", bw.f);
            bw.i = EXTRACT_32BITS(tptr+12);
            (*ndo->ndo_printf)(ndo, "\n\t\tPeak Data Rate: %.10g Mbps", bw.f / 125000);
            (*ndo->ndo_printf)(ndo, "\n\t\tMinimum Policed Unit: %u bytes", EXTRACT_32BITS(tptr + 16));
            (*ndo->ndo_printf)(ndo, "\n\t\tMaximum Packet Size: %u bytes", EXTRACT_32BITS(tptr + 20));
        }
        break;

    case 130:
        if (parameter_length == 8) {
     if (!((((8) > 0) || ((8) == 0)) && ((uintptr_t)ndo->ndo_snapend - (8) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*(tptr + 4)) <= (uintptr_t)ndo->ndo_snapend - (8)))) goto trunc;
            bw.i = EXTRACT_32BITS(tptr+4);
            (*ndo->ndo_printf)(ndo, "\n\t\tRate: %.10g Mbps", bw.f / 125000);
            (*ndo->ndo_printf)(ndo, "\n\t\tSlack Term: %u", EXTRACT_32BITS(tptr + 8));
        }
        break;

    case 133:
    case 134:
    case 135:
    case 136:
        if (parameter_length == 4) {
     if (!((((4) > 0) || ((4) == 0)) && ((uintptr_t)ndo->ndo_snapend - (4) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*(tptr + 4)) <= (uintptr_t)ndo->ndo_snapend - (4)))) goto trunc;
            (*ndo->ndo_printf)(ndo, "\n\t\tValue: %u", EXTRACT_32BITS(tptr + 4));
        }
        break;

    default:
        if (ndo->ndo_vflag <= 1)
            print_unknown_data(ndo, tptr + 4, "\n\t\t", parameter_length);
    }
    return (parameter_length+4);

trunc:
    (*ndo->ndo_printf)(ndo, "%s", tstr);
    return 0;
}




static void
rsvp_clear_checksum(void *header)
{
    struct rsvp_common_header *rsvp_com_header = (struct rsvp_common_header *) header;

    rsvp_com_header->checksum[0] = 0;
    rsvp_com_header->checksum[1] = 0;
}

static int
rsvp_obj_print(netdissect_options *ndo,
               const u_char *pptr, u_int plen, const u_char *tptr,
               const char *ident, u_int tlen,
               const struct rsvp_common_header *rsvp_com_header)
{
    const struct rsvp_object_header *rsvp_obj_header={0};
    const u_char *obj_tptr={0};
    union {
        const struct rsvp_obj_integrity_t *rsvp_obj_integrity;
        const struct rsvp_obj_frr_t *rsvp_obj_frr;
    } obj_ptr={0};

    u_short rsvp_obj_len,rsvp_obj_ctype,obj_tlen,intserv_serv_tlen={0};
    int hexdump,processed,padbytes,error_code,error_value,i,sigcheck={0};
    union {
 float f;
 uint32_t i;
    } bw={0};
    uint8_t namelen={0};

    u_int action, subchannel={0};

    while(tlen>=sizeof(struct rsvp_object_header)) {

        if (!((((sizeof(struct rsvp_object_header)) > 0) || ((sizeof(struct rsvp_object_header)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(struct rsvp_object_header)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*tptr) <= (uintptr_t)ndo->ndo_snapend - (sizeof(struct rsvp_object_header))))) goto trunc;

        rsvp_obj_header = (const struct rsvp_object_header *)tptr;
        rsvp_obj_len=EXTRACT_16BITS(rsvp_obj_header->length);
        rsvp_obj_ctype=rsvp_obj_header->ctype;

        if(rsvp_obj_len % 4) {
            (*ndo->ndo_printf)(ndo, "%sERROR: object header size %u not a multiple of 4", ident, rsvp_obj_len);
            return -1;
        }
        if(rsvp_obj_len < sizeof(struct rsvp_object_header)) {
            (*ndo->ndo_printf)(ndo, "%sERROR: object header too short %u < %lu", ident, rsvp_obj_len, (unsigned long)sizeof(const struct rsvp_object_header))
                                                                           ;
            return -1;
        }

        (*ndo->ndo_printf)(ndo, "%s%s Object (%u) Flags: [%s", ident, tok2str(rsvp_obj_values, "Unknown", rsvp_obj_header->class_num), rsvp_obj_header->class_num, ((rsvp_obj_header->class_num) & 0x80) ? "ignore" : "reject")





                                                                            ;

        if (rsvp_obj_header->class_num > 128)
            (*ndo->ndo_printf)(ndo, " %s", ((rsvp_obj_header->class_num) & 0x40) ? "and forward" : "silently")
                                                                                       ;

        (*ndo->ndo_printf)(ndo, " if unknown], Class-Type: %s (%u), length: %u", tok2str(rsvp_ctype_values, "Unknown", ((rsvp_obj_header->class_num)<<8)+rsvp_obj_ctype), rsvp_obj_ctype, rsvp_obj_len)




                             ;

        if(tlen < rsvp_obj_len) {
            (*ndo->ndo_printf)(ndo, "%sERROR: object goes past end of objects TLV", ident);
            return -1;
        }

        obj_tptr=tptr+sizeof(struct rsvp_object_header);
        obj_tlen=rsvp_obj_len-sizeof(struct rsvp_object_header);


        if (!((((rsvp_obj_len) > 0) || ((rsvp_obj_len) == 0)) && ((uintptr_t)ndo->ndo_snapend - (rsvp_obj_len) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*tptr) <= (uintptr_t)ndo->ndo_snapend - (rsvp_obj_len))))
            return -1;
        hexdump=0;

        switch(rsvp_obj_header->class_num) {
        case 1:
            switch(rsvp_obj_ctype) {
            case 1:
                if (obj_tlen < 8)
                    return -1;
                (*ndo->ndo_printf)(ndo, "%s  IPv4 DestAddress: %s, Protocol ID: 0x%02x", ident, getname(ndo, (const u_char *)(obj_tptr)), *(obj_tptr + sizeof(struct in_addr)))


                                                             ;
                (*ndo->ndo_printf)(ndo, "%s  Flags: [0x%02x], DestPort %u", ident, *(obj_tptr+5), EXTRACT_16BITS(obj_tptr + 6))


                                                     ;
                obj_tlen-=8;
                obj_tptr+=8;
                break;
            case 2:
                if (obj_tlen < 20)
                    return -1;
                (*ndo->ndo_printf)(ndo, "%s  IPv6 DestAddress: %s, Protocol ID: 0x%02x", ident, getname6(ndo, (const u_char *)(obj_tptr)), *(obj_tptr + sizeof(struct in6_addr)))


                                                              ;
                (*ndo->ndo_printf)(ndo, "%s  Flags: [0x%02x], DestPort %u", ident, *(obj_tptr+sizeof(struct in6_addr)+1), EXTRACT_16BITS(obj_tptr + sizeof(struct in6_addr) + 2))


                                                                               ;
                obj_tlen-=20;
                obj_tptr+=20;
                break;

            case 8:
                if (obj_tlen < 36)
                    return -1;
                (*ndo->ndo_printf)(ndo, "%s  IPv6 Tunnel EndPoint: %s, Tunnel ID: 0x%04x, Extended Tunnel ID: %s", ident, getname6(ndo, (const u_char *)(obj_tptr)), EXTRACT_16BITS(obj_tptr+18), getname6(ndo, (const u_char *)(obj_tptr + 20)))



                                                           ;
                obj_tlen-=36;
                obj_tptr+=36;
                break;

            case 14:
                if (obj_tlen < 26)
                    return -1;
                (*ndo->ndo_printf)(ndo, "%s  IPv6 P2MP LSP ID: 0x%08x, Tunnel ID: 0x%04x, Extended Tunnel ID: %s", ident, EXTRACT_32BITS(obj_tptr), EXTRACT_16BITS(obj_tptr+6), getname6(ndo, (const u_char *)(obj_tptr + 8)))



                                                          ;
                obj_tlen-=26;
                obj_tptr+=26;
                break;
            case 13:
                if (obj_tlen < 12)
                    return -1;
                (*ndo->ndo_printf)(ndo, "%s  IPv4 P2MP LSP ID: %s, Tunnel ID: 0x%04x, Extended Tunnel ID: %s", ident, getname(ndo, (const u_char *)(obj_tptr)), EXTRACT_16BITS(obj_tptr+6), getname(ndo, (const u_char *)(obj_tptr + 8)))



                                                         ;
                obj_tlen-=12;
                obj_tptr+=12;
                break;
            case 7:
            case 11:
                if (obj_tlen < 12)
                    return -1;
                (*ndo->ndo_printf)(ndo, "%s  IPv4 Tunnel EndPoint: %s, Tunnel ID: 0x%04x, Extended Tunnel ID: %s", ident, getname(ndo, (const u_char *)(obj_tptr)), EXTRACT_16BITS(obj_tptr+6), getname(ndo, (const u_char *)(obj_tptr + 8)))



                                                         ;
                obj_tlen-=12;
                obj_tptr+=12;
                break;
            default:
                hexdump=1;
            }
            break;

        case 15:
            switch(rsvp_obj_ctype) {
            case 1:
                if (obj_tlen < sizeof(struct in_addr))
                    return -1;
                (*ndo->ndo_printf)(ndo, "%s  IPv4 Receiver Address: %s", ident, getname(ndo, (const u_char *)(obj_tptr)))

                                                     ;
                obj_tlen-=sizeof(struct in_addr);
                obj_tptr+=sizeof(struct in_addr);
                break;
            case 2:
                if (obj_tlen < sizeof(struct in6_addr))
                    return -1;
                (*ndo->ndo_printf)(ndo, "%s  IPv6 Receiver Address: %s", ident, getname6(ndo, (const u_char *)(obj_tptr)))

                                                      ;
                obj_tlen-=sizeof(struct in6_addr);
                obj_tptr+=sizeof(struct in6_addr);
                break;
            default:
                hexdump=1;
            }
            break;

        case 195:
            switch(rsvp_obj_ctype) {
            case 1:
                if (obj_tlen < sizeof(struct in_addr))
                    return -1;
                (*ndo->ndo_printf)(ndo, "%s  IPv4 Notify Node Address: %s", ident, getname(ndo, (const u_char *)(obj_tptr)))

                                                     ;
                obj_tlen-=sizeof(struct in_addr);
                obj_tptr+=sizeof(struct in_addr);
                break;
            case 2:
                if (obj_tlen < sizeof(struct in6_addr))
                    return-1;
                (*ndo->ndo_printf)(ndo, "%s  IPv6 Notify Node Address: %s", ident, getname6(ndo, (const u_char *)(obj_tptr)))

                                                      ;
                obj_tlen-=sizeof(struct in6_addr);
                obj_tptr+=sizeof(struct in6_addr);
                break;
            default:
                hexdump=1;
            }
            break;

        case 129:
        case 35:
        case 34:
        case 16:
            switch(rsvp_obj_ctype) {
            case 1:
                while(obj_tlen >= 4 ) {
                    (*ndo->ndo_printf)(ndo, "%s  Label: %u", ident, EXTRACT_32BITS(obj_tptr));
                    obj_tlen-=4;
                    obj_tptr+=4;
                }
                break;
            case 2:
                if (obj_tlen < 4)
                    return-1;
                (*ndo->ndo_printf)(ndo, "%s  Generalized Label: %u", ident, EXTRACT_32BITS(obj_tptr))

                                                 ;
                obj_tlen-=4;
                obj_tptr+=4;
                break;
            case 3:
                if (obj_tlen < 12)
                    return-1;
                (*ndo->ndo_printf)(ndo, "%s  Waveband ID: %u%s  Start Label: %u, Stop Label: %u", ident, EXTRACT_32BITS(obj_tptr), ident, EXTRACT_32BITS(obj_tptr+4), EXTRACT_32BITS(obj_tptr + 8))




                                                     ;
                obj_tlen-=12;
                obj_tptr+=12;
                break;
            default:
                hexdump=1;
            }
            break;

        case 8:
            switch(rsvp_obj_ctype) {
            case 1:
                if (obj_tlen < 4)
                    return-1;
                (*ndo->ndo_printf)(ndo, "%s  Reservation Style: %s, Flags: [0x%02x]", ident, tok2str(rsvp_resstyle_values, "Unknown", ((uint32_t)(((uint32_t)(*((const uint8_t *)(obj_tptr+1) + 0)) << 16) | ((uint32_t)(*((const uint8_t *)(obj_tptr+1) + 1)) << 8) | ((uint32_t)(*((const uint8_t *)(obj_tptr+1) + 2)) << 0)))), *(obj_tptr))




                                    ;
                obj_tlen-=4;
                obj_tptr+=4;
                break;
            default:
                hexdump=1;
            }
            break;

        case 11:
            switch(rsvp_obj_ctype) {
            case 1:
                if (obj_tlen < 8)
                    return-1;
                (*ndo->ndo_printf)(ndo, "%s  Source Address: %s, Source Port: %u", ident, getname(ndo, (const u_char *)(obj_tptr)), EXTRACT_16BITS(obj_tptr + 6))


                                                     ;
                obj_tlen-=8;
                obj_tptr+=8;
                break;
            case 2:
                if (obj_tlen < 20)
                    return-1;
                (*ndo->ndo_printf)(ndo, "%s  Source Address: %s, Source Port: %u", ident, getname6(ndo, (const u_char *)(obj_tptr)), EXTRACT_16BITS(obj_tptr + 18))


                                                      ;
                obj_tlen-=20;
                obj_tptr+=20;
                break;
            case 13:
                if (obj_tlen < 40)
                    return-1;
                (*ndo->ndo_printf)(ndo, "%s  IPv6 Tunnel Sender Address: %s, LSP ID: 0x%04x" "%s  Sub-Group Originator ID: %s, Sub-Group ID: 0x%04x", ident, getname6(ndo, (const u_char *)(obj_tptr)), EXTRACT_16BITS(obj_tptr+18), ident, getname6(ndo, (const u_char *)(obj_tptr+20)), EXTRACT_16BITS(obj_tptr + 38))






                                                      ;
                obj_tlen-=40;
                obj_tptr+=40;
                break;
            case 7:
                if (obj_tlen < 8)
                    return-1;
                (*ndo->ndo_printf)(ndo, "%s  IPv4 Tunnel Sender Address: %s, LSP-ID: 0x%04x", ident, getname(ndo, (const u_char *)(obj_tptr)), EXTRACT_16BITS(obj_tptr + 6))


                                                     ;
                obj_tlen-=8;
                obj_tptr+=8;
                break;
            case 12:
                if (obj_tlen < 16)
                    return-1;
                (*ndo->ndo_printf)(ndo, "%s  IPv4 Tunnel Sender Address: %s, LSP ID: 0x%04x" "%s  Sub-Group Originator ID: %s, Sub-Group ID: 0x%04x", ident, getname(ndo, (const u_char *)(obj_tptr)), EXTRACT_16BITS(obj_tptr+6), ident, getname(ndo, (const u_char *)(obj_tptr+8)), EXTRACT_16BITS(obj_tptr + 12))






                                                      ;
                obj_tlen-=16;
                obj_tptr+=16;
                break;
            default:
                hexdump=1;
            }
            break;

        case 19:
            switch(rsvp_obj_ctype) {
            case 1:
                while(obj_tlen >= 4 ) {
                    (*ndo->ndo_printf)(ndo, "%s  L3 Protocol ID: %s", ident, tok2str(ethertype_values, "Unknown Protocol (0x%04x)", EXTRACT_16BITS(obj_tptr + 2)))



                                                                  ;
                    obj_tlen-=4;
                    obj_tptr+=4;
                }
                break;
            case 2:
                if (obj_tlen < 12)
                    return-1;
                (*ndo->ndo_printf)(ndo, "%s  L3 Protocol ID: %s", ident, tok2str(ethertype_values, "Unknown Protocol (0x%04x)", EXTRACT_16BITS(obj_tptr + 2)))



                                                              ;
                (*ndo->ndo_printf)(ndo, ",%s merge capability",((*(obj_tptr + 4)) & 0x80) ? "no" : "" );
                (*ndo->ndo_printf)(ndo, "%s  Minimum VPI/VCI: %u/%u", ident, (EXTRACT_16BITS(obj_tptr+4))&0xfff, (EXTRACT_16BITS(obj_tptr + 6)) & 0xfff)


                                                               ;
                (*ndo->ndo_printf)(ndo, "%s  Maximum VPI/VCI: %u/%u", ident, (EXTRACT_16BITS(obj_tptr+8))&0xfff, (EXTRACT_16BITS(obj_tptr + 10)) & 0xfff)


                                                                ;
                obj_tlen-=12;
                obj_tptr+=12;
                break;
            case 3:
                if (obj_tlen < 12)
                    return-1;
                (*ndo->ndo_printf)(ndo, "%s  L3 Protocol ID: %s", ident, tok2str(ethertype_values, "Unknown Protocol (0x%04x)", EXTRACT_16BITS(obj_tptr + 2)))



                                                              ;
                (*ndo->ndo_printf)(ndo, "%s  Minimum/Maximum DLCI: %u/%u, %s%s bit DLCI", ident, (EXTRACT_32BITS(obj_tptr+4))&0x7fffff, (EXTRACT_32BITS(obj_tptr+8))&0x7fffff, (((EXTRACT_16BITS(obj_tptr+4)>>7)&3) == 0 ) ? "10" : "", (((EXTRACT_16BITS(obj_tptr + 4) >> 7) & 3) == 2 ) ? "23" : "")




                                                                                      ;
                obj_tlen-=12;
                obj_tptr+=12;
                break;
            case 4:
                if (obj_tlen < 4)
                    return-1;
                (*ndo->ndo_printf)(ndo, "%s  LSP Encoding Type: %s (%u)", ident, tok2str(gmpls_encoding_values, "Unknown", *obj_tptr), *obj_tptr)




                    ;
                (*ndo->ndo_printf)(ndo, "%s  Switching Type: %s (%u), Payload ID: %s (0x%04x)", ident, tok2str(gmpls_switch_cap_values, "Unknown", *(obj_tptr+1)), *(obj_tptr+1), tok2str(gmpls_payload_values, "Unknown", EXTRACT_16BITS(obj_tptr+2)), EXTRACT_16BITS(obj_tptr + 2))
                                       ;
                obj_tlen-=4;
                obj_tptr+=4;
                break;
            default:
                hexdump=1;
            }
            break;

        case 21:
        case 20:
            switch(rsvp_obj_ctype) {
            case 1:
                while(obj_tlen >= 4 ) {
      u_char length={0};

      if (!((((4) > 0) || ((4) == 0)) && ((uintptr_t)ndo->ndo_snapend - (4) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*obj_tptr) <= (uintptr_t)ndo->ndo_snapend - (4)))) goto trunc;
      length = *(obj_tptr + 1);
                    (*ndo->ndo_printf)(ndo, "%s  Subobject Type: %s, length %u", ident, tok2str(rsvp_obj_xro_values, "Unknown %u", ((*obj_tptr)&0x7f)), length)




                                   ;

                    if (length == 0) {
                        (*ndo->ndo_printf)(ndo, "%s  ERROR: zero length ERO subtype", ident);
                        break;
                    }

                    switch(((*obj_tptr)&0x7f)) {
      u_char prefix_length={0};

                    case 1:
   if (length != 8) {
    (*ndo->ndo_printf)(ndo, " ERROR: length != 8");
    goto invalid;
   }
   if (!((((8) > 0) || ((8) == 0)) && ((uintptr_t)ndo->ndo_snapend - (8) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*obj_tptr) <= (uintptr_t)ndo->ndo_snapend - (8)))) goto trunc;
   prefix_length = *(obj_tptr+6);
   if (prefix_length != 32) {
    (*ndo->ndo_printf)(ndo, " ERROR: Prefix length %u != 32", prefix_length)
                      ;
    goto invalid;
   }
                        (*ndo->ndo_printf)(ndo, ", %s, %s/%u, Flags: [%s]", ((*obj_tptr)&0x80) ? "Loose" : "Strict", getname(ndo, (const u_char *)(obj_tptr+2)), *(obj_tptr+6), bittok2str(rsvp_obj_rro_flag_values, "none", *(obj_tptr + 7)))





                                                     ;
                    break;
                    case 3:
   if (length != 8) {
    (*ndo->ndo_printf)(ndo, " ERROR: length != 8");
    goto invalid;
   }
   if (!((((8) > 0) || ((8) == 0)) && ((uintptr_t)ndo->ndo_snapend - (8) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*obj_tptr) <= (uintptr_t)ndo->ndo_snapend - (8)))) goto trunc;
                        (*ndo->ndo_printf)(ndo, ", Flags: [%s] (%#x), Class-Type: %s (%u), %u", bittok2str(rsvp_obj_rro_label_flag_values, "none", *(obj_tptr+2)), *(obj_tptr+2), tok2str(rsvp_ctype_values, "Unknown", *(obj_tptr+3) + 256*21), *(obj_tptr+3), EXTRACT_32BITS(obj_tptr + 4))
                                                             ;
                    }
                    obj_tlen-=*(obj_tptr+1);
                    obj_tptr+=*(obj_tptr+1);
                }
                break;
            default:
                hexdump=1;
            }
            break;

        case 22:
            switch(rsvp_obj_ctype) {
            case 1:
            case 2:
                if (obj_tlen < 8)
                    return-1;
                (*ndo->ndo_printf)(ndo, "%s  Source Instance: 0x%08x, Destination Instance: 0x%08x", ident, EXTRACT_32BITS(obj_tptr), EXTRACT_32BITS(obj_tptr + 4))


                                                     ;
                obj_tlen-=8;
                obj_tptr+=8;
                break;
            default:
                hexdump=1;
            }
            break;

        case 131:
            switch(rsvp_obj_ctype) {
            case 1:
                if (obj_tlen < 8)
                    return-1;
                (*ndo->ndo_printf)(ndo, "%s  Restart  Time: %ums, Recovery Time: %ums", ident, EXTRACT_32BITS(obj_tptr), EXTRACT_32BITS(obj_tptr + 4))


                                                     ;
                obj_tlen-=8;
                obj_tptr+=8;
                break;
            default:
                hexdump=1;
            }
            break;

        case 207:
            switch(rsvp_obj_ctype) {
            case 7:
                if (obj_tlen < 4)
                    return-1;
                namelen = *(obj_tptr+3);
                if (obj_tlen < 4+namelen)
                    return-1;
                (*ndo->ndo_printf)(ndo, "%s  Session Name: ", ident);
                for (i = 0; i < namelen; i++)
                    safeputchar(ndo, *(obj_tptr + 4 + i));
                (*ndo->ndo_printf)(ndo, "%s  Setup Priority: %u, Holding Priority: %u, Flags: [%s] (%#x)", ident, (int)*obj_tptr, (int)*(obj_tptr+1), bittok2str(rsvp_session_attribute_flag_values, "none", *(obj_tptr+2)), *(obj_tptr + 2))






                                        ;
                obj_tlen-=4+*(obj_tptr+3);
                obj_tptr+=4+*(obj_tptr+3);
                break;
            default:
                hexdump=1;
            }
            break;

 case 229:
            switch(rsvp_obj_ctype) {
  int subobj_type,af,subobj_len,total_subobj_len={0};

            case 1:

                if (obj_tlen < 4)
                    return-1;


  total_subobj_len = obj_tlen;
                while(total_subobj_len > 0) {
                    if (total_subobj_len < 4)
                        goto invalid;
                    subobj_len = EXTRACT_16BITS(obj_tptr);
                    subobj_type = (EXTRACT_16BITS(obj_tptr+2))>>8;
                    af = (EXTRACT_16BITS(obj_tptr+2))&0x00FF;

                    (*ndo->ndo_printf)(ndo, "%s  Subobject Type: %s (%u), AF: %s (%u), length: %u", ident, tok2str(rsvp_obj_generalized_uni_values, "Unknown", subobj_type), subobj_type, tok2str(af_values, "Unknown", af), af, subobj_len)




                                       ;







                    if(subobj_len < 4 || subobj_len > total_subobj_len)
                        goto invalid;

                    switch(subobj_type) {
                    case 1:
                    case 2:

                        switch(af) {
                        case 1:
                            if (subobj_len < 8)
                                return -1;
                            (*ndo->ndo_printf)(ndo, "%s    UNI IPv4 TNA address: %s", ident, getname(ndo, (const u_char *)(obj_tptr + 4)))
                                                                            ;
                            break;
                        case 2:
                            if (subobj_len < 20)
                                return -1;
                            (*ndo->ndo_printf)(ndo, "%s    UNI IPv6 TNA address: %s", ident, getname6(ndo, (const u_char *)(obj_tptr + 4)))
                                                                             ;
                            break;
                        case 3:
                            if (subobj_len) {

                                hexdump=1;
                            }
                            break;
                        }
                        break;

                    case 3:
                        if (subobj_len) {

                            hexdump=1;
                        }
                        break;

                    case 4:
                        if (subobj_len < 16) {
                            return -1;
                        }

                        (*ndo->ndo_printf)(ndo, "%s    U-bit: %x, Label type: %u, Logical port id: %u, Label: %u", ident, ((EXTRACT_32BITS(obj_tptr+4))>>31), ((EXTRACT_32BITS(obj_tptr+4))&0xFF), EXTRACT_32BITS(obj_tptr+8), EXTRACT_32BITS(obj_tptr + 12))




                                                              ;
                        break;

                    case 5:
                        if (subobj_len < 8) {
                            return -1;
                        }

                        (*ndo->ndo_printf)(ndo, "%s    Service level: %u", ident, (EXTRACT_32BITS(obj_tptr + 4)) >> 24)
                                                                            ;
                        break;

                    default:
                        hexdump=1;
                        break;
                    }
                    total_subobj_len-=subobj_len;
                    obj_tptr+=subobj_len;
                    obj_tlen+=subobj_len;
  }

                if (total_subobj_len) {

                    hexdump=1;
                }
                break;

            default:
                hexdump=1;
            }
            break;

        case 3:
            switch(rsvp_obj_ctype) {
            case 3:
            case 1:
                if (obj_tlen < 8)
                    return-1;
                (*ndo->ndo_printf)(ndo, "%s  Previous/Next Interface: %s, Logical Interface Handle: 0x%08x", ident, getname(ndo, (const u_char *)(obj_tptr)), EXTRACT_32BITS(obj_tptr + 4))


                                                     ;
                obj_tlen-=8;
                obj_tptr+=8;
                if (obj_tlen)
                    hexdump=1;
                break;
            case 4:
            case 2:
                if (obj_tlen < 20)
                    return-1;
                (*ndo->ndo_printf)(ndo, "%s  Previous/Next Interface: %s, Logical Interface Handle: 0x%08x", ident, getname6(ndo, (const u_char *)(obj_tptr)), EXTRACT_32BITS(obj_tptr + 16))


                                                      ;
                obj_tlen-=20;
                obj_tptr+=20;
                hexdump=1;
                break;
            default:
                hexdump=1;
            }
            break;

        case 5:
            switch(rsvp_obj_ctype) {
            case 1:
                if (obj_tlen < 4)
                    return-1;
                (*ndo->ndo_printf)(ndo, "%s  Refresh Period: %ums", ident, EXTRACT_32BITS(obj_tptr))

                                                 ;
                obj_tlen-=4;
                obj_tptr+=4;
                break;
            default:
                hexdump=1;
            }
            break;


        case 12:
        case 13:
        case 9:
            switch(rsvp_obj_ctype) {
            case 2:
                if (obj_tlen < 4)
                    return-1;
                (*ndo->ndo_printf)(ndo, "%s  Msg-Version: %u, length: %u", ident, (*obj_tptr & 0xf0) >> 4, EXTRACT_16BITS(obj_tptr + 2) << 2)


                                                          ;
                obj_tptr+=4;
                obj_tlen-=4;

                while (obj_tlen >= 4) {
                    intserv_serv_tlen=EXTRACT_16BITS(obj_tptr+2)<<2;
                    (*ndo->ndo_printf)(ndo, "%s  Service Type: %s (%u), break bit %s set, Service length: %u", ident, tok2str(rsvp_intserv_service_type_values,"unknown",*(obj_tptr)), *(obj_tptr), (*(obj_tptr+1)&0x80) ? "" : "not", intserv_serv_tlen)




                                              ;

                    obj_tptr+=4;
                    obj_tlen-=4;

                    while (intserv_serv_tlen>=4) {
                        processed = rsvp_intserv_print(ndo, obj_tptr, obj_tlen);
                        if (processed == 0)
                            break;
                        obj_tlen-=processed;
                        intserv_serv_tlen-=processed;
                        obj_tptr+=processed;
                    }
                }
                break;
            default:
                hexdump=1;
            }
            break;

        case 10:
            switch(rsvp_obj_ctype) {
            case 1:
                if (obj_tlen < 8)
                    return-1;
                (*ndo->ndo_printf)(ndo, "%s  Source Address: %s, Source Port: %u", ident, getname(ndo, (const u_char *)(obj_tptr)), EXTRACT_16BITS(obj_tptr + 6))


                                                     ;
                obj_tlen-=8;
                obj_tptr+=8;
                break;
            case 2:
                if (obj_tlen < 20)
                    return-1;
                (*ndo->ndo_printf)(ndo, "%s  Source Address: %s, Source Port: %u", ident, getname6(ndo, (const u_char *)(obj_tptr)), EXTRACT_16BITS(obj_tptr + 18))


                                                      ;
                obj_tlen-=20;
                obj_tptr+=20;
                break;
            case 3:
                if (obj_tlen < 20)
                    return-1;
                (*ndo->ndo_printf)(ndo, "%s  Source Address: %s, Flow Label: %u", ident, getname6(ndo, (const u_char *)(obj_tptr)), ((uint32_t)(((uint32_t)(*((const uint8_t *)(obj_tptr + 17) + 0)) << 16) | ((uint32_t)(*((const uint8_t *)(obj_tptr + 17) + 1)) << 8) | ((uint32_t)(*((const uint8_t *)(obj_tptr + 17) + 2)) << 0))))


                                                      ;
                obj_tlen-=20;
                obj_tptr+=20;
                break;
            case 8:
                if (obj_tlen < 20)
                    return-1;
                (*ndo->ndo_printf)(ndo, "%s  Source Address: %s, LSP-ID: 0x%04x", ident, getname(ndo, (const u_char *)(obj_tptr)), EXTRACT_16BITS(obj_tptr + 18))


                                                      ;
                obj_tlen-=20;
                obj_tptr+=20;
                break;
            case 13:
                if (obj_tlen < 40)
                    return-1;
                (*ndo->ndo_printf)(ndo, "%s  IPv6 Tunnel Sender Address: %s, LSP ID: 0x%04x" "%s  Sub-Group Originator ID: %s, Sub-Group ID: 0x%04x", ident, getname6(ndo, (const u_char *)(obj_tptr)), EXTRACT_16BITS(obj_tptr+18), ident, getname6(ndo, (const u_char *)(obj_tptr+20)), EXTRACT_16BITS(obj_tptr + 38))






                                                      ;
                obj_tlen-=40;
                obj_tptr+=40;
                break;
            case 7:
                if (obj_tlen < 8)
                    return-1;
                (*ndo->ndo_printf)(ndo, "%s  Source Address: %s, LSP-ID: 0x%04x", ident, getname(ndo, (const u_char *)(obj_tptr)), EXTRACT_16BITS(obj_tptr + 6))


                                                     ;
                obj_tlen-=8;
                obj_tptr+=8;
                break;
            case 12:
                if (obj_tlen < 16)
                    return-1;
                (*ndo->ndo_printf)(ndo, "%s  IPv4 Tunnel Sender Address: %s, LSP ID: 0x%04x" "%s  Sub-Group Originator ID: %s, Sub-Group ID: 0x%04x", ident, getname(ndo, (const u_char *)(obj_tptr)), EXTRACT_16BITS(obj_tptr+6), ident, getname(ndo, (const u_char *)(obj_tptr+8)), EXTRACT_16BITS(obj_tptr + 12))






                                                      ;
                obj_tlen-=16;
                obj_tptr+=16;
                break;
            default:
                hexdump=1;
            }
            break;

        case 205:

            obj_ptr.rsvp_obj_frr = (const struct rsvp_obj_frr_t *)obj_tptr;

            switch(rsvp_obj_ctype) {
            case 1:
                if (obj_tlen < sizeof(struct rsvp_obj_frr_t))
                    return-1;
                bw.i = EXTRACT_32BITS(obj_ptr.rsvp_obj_frr->bandwidth);
                (*ndo->ndo_printf)(ndo, "%s  Setup Priority: %u, Holding Priority: %u, Hop-limit: %u, Bandwidth: %.10g Mbps", ident, (int)obj_ptr.rsvp_obj_frr->setup_prio, (int)obj_ptr.rsvp_obj_frr->hold_prio, (int)obj_ptr.rsvp_obj_frr->hop_limit, bw.f * 8 / 1000000)




                                            ;
                (*ndo->ndo_printf)(ndo, "%s  Include-any: 0x%08x, Exclude-any: 0x%08x, Include-all: 0x%08x", ident, EXTRACT_32BITS(obj_ptr.rsvp_obj_frr->include_any), EXTRACT_32BITS(obj_ptr.rsvp_obj_frr->exclude_any), EXTRACT_32BITS(obj_ptr.rsvp_obj_frr->include_all))



                                                                          ;
                obj_tlen-=sizeof(struct rsvp_obj_frr_t);
                obj_tptr+=sizeof(struct rsvp_obj_frr_t);
                break;

            case 7:
                if (obj_tlen < 16)
                    return-1;
                bw.i = EXTRACT_32BITS(obj_ptr.rsvp_obj_frr->bandwidth);
                (*ndo->ndo_printf)(ndo, "%s  Setup Priority: %u, Holding Priority: %u, Hop-limit: %u, Bandwidth: %.10g Mbps", ident, (int)obj_ptr.rsvp_obj_frr->setup_prio, (int)obj_ptr.rsvp_obj_frr->hold_prio, (int)obj_ptr.rsvp_obj_frr->hop_limit, bw.f * 8 / 1000000)




                                            ;
                (*ndo->ndo_printf)(ndo, "%s  Include Colors: 0x%08x, Exclude Colors: 0x%08x", ident, EXTRACT_32BITS(obj_ptr.rsvp_obj_frr->include_any), EXTRACT_32BITS(obj_ptr.rsvp_obj_frr->exclude_any))


                                                                          ;
                obj_tlen-=16;
                obj_tptr+=16;
                break;

            default:
                hexdump=1;
            }
            break;

        case 63:
            switch(rsvp_obj_ctype) {
            case 7:
                while(obj_tlen >= 8) {
                    (*ndo->ndo_printf)(ndo, "%s  PLR-ID: %s, Avoid-Node-ID: %s", ident, getname(ndo, (const u_char *)(obj_tptr)), getname(ndo, (const u_char *)(obj_tptr + 4)))


                                                             ;
                    obj_tlen-=8;
                    obj_tptr+=8;
                }
                break;
            default:
                hexdump=1;
            }
            break;

        case 66:
        case 125:
            switch(rsvp_obj_ctype) {
            case 1:
                (*ndo->ndo_printf)(ndo, "%s  CT: %u", ident, EXTRACT_32BITS(obj_tptr) & 0x7)

                                                       ;
                obj_tlen-=4;
                obj_tptr+=4;
                break;
            default:
                hexdump=1;
            }
            break;

        case 6:
            switch(rsvp_obj_ctype) {
            case 3:
            case 1:
                if (obj_tlen < 8)
                    return-1;
                error_code=*(obj_tptr+5);
                error_value=EXTRACT_16BITS(obj_tptr+6);
                (*ndo->ndo_printf)(ndo, "%s  Error Node Address: %s, Flags: [0x%02x]%s  Error Code: %s (%u)", ident, getname(ndo, (const u_char *)(obj_tptr)), *(obj_tptr+4), ident, tok2str(rsvp_obj_error_code_values,"unknown",error_code), error_code)





                                   ;
                switch (error_code) {
                case 24:
                    (*ndo->ndo_printf)(ndo, ", Error Value: %s (%u)", tok2str(rsvp_obj_error_code_routing_values,"unknown",error_value), error_value)

                                        ;
                    break;
                case 28:
                case 125:
                    (*ndo->ndo_printf)(ndo, ", Error Value: %s (%u)", tok2str(rsvp_obj_error_code_diffserv_te_values,"unknown",error_value), error_value)

                                        ;
                    break;
                default:
                    (*ndo->ndo_printf)(ndo, ", Unknown Error Value (%u)", error_value);
                    break;
                }
                obj_tlen-=8;
                obj_tptr+=8;
                break;
            case 4:
            case 2:
                if (obj_tlen < 20)
                    return-1;
                error_code=*(obj_tptr+17);
                error_value=EXTRACT_16BITS(obj_tptr+18);
                (*ndo->ndo_printf)(ndo, "%s  Error Node Address: %s, Flags: [0x%02x]%s  Error Code: %s (%u)", ident, getname6(ndo, (const u_char *)(obj_tptr)), *(obj_tptr+16), ident, tok2str(rsvp_obj_error_code_values,"unknown",error_code), error_code)





                                   ;

                switch (error_code) {
                case 24:
                    (*ndo->ndo_printf)(ndo, ", Error Value: %s (%u)", tok2str(rsvp_obj_error_code_routing_values,"unknown",error_value), error_value)

                   ;
                    break;
                default:
                    break;
                }
                obj_tlen-=20;
                obj_tptr+=20;
                break;
            default:
                hexdump=1;
            }
            break;

        case 204:
            switch(rsvp_obj_ctype) {
            case 1:
                if (obj_tlen < 4)
                    return-1;
                padbytes = EXTRACT_16BITS(obj_tptr+2);
                (*ndo->ndo_printf)(ndo, "%s  TLV count: %u, padding bytes: %u", ident, EXTRACT_16BITS(obj_tptr), padbytes)


                                 ;
                obj_tlen-=4;
                obj_tptr+=4;

                while(obj_tlen >= 2 + padbytes) {
                    (*ndo->ndo_printf)(ndo, "%s    %s TLV (0x%02x), length: %u", ident, tok2str(rsvp_obj_prop_tlv_values,"unknown",*obj_tptr), *obj_tptr, *(obj_tptr + 1))



                                            ;
                    if (obj_tlen < *(obj_tptr+1))
                        return-1;
                    if (*(obj_tptr+1) < 2)
                        return -1;
                    print_unknown_data(ndo, obj_tptr + 2, "\n\t\t", *(obj_tptr + 1) - 2);
                    obj_tlen-=*(obj_tptr+1);
                    obj_tptr+=*(obj_tptr+1);
                }
                break;
            default:
                hexdump=1;
            }
            break;

        case 23:
        case 24:
        case 25:
            switch(rsvp_obj_ctype) {
            case 1:
            case 2:
                if (obj_tlen < 8)
                    return-1;
                (*ndo->ndo_printf)(ndo, "%s  Flags [0x%02x], epoch: %u", ident, *obj_tptr, ((uint32_t)(((uint32_t)(*((const uint8_t *)(obj_tptr + 1) + 0)) << 16) | ((uint32_t)(*((const uint8_t *)(obj_tptr + 1) + 1)) << 8) | ((uint32_t)(*((const uint8_t *)(obj_tptr + 1) + 2)) << 0))))


                                                     ;
                obj_tlen-=4;
                obj_tptr+=4;

                while(obj_tlen >= 4) {
                    (*ndo->ndo_printf)(ndo, "%s    Message-ID 0x%08x (%u)", ident, EXTRACT_32BITS(obj_tptr), EXTRACT_32BITS(obj_tptr))


                                                     ;
                    obj_tlen-=4;
                    obj_tptr+=4;
                }
                break;
            default:
                hexdump=1;
            }
            break;

        case 4:
            switch(rsvp_obj_ctype) {
            case 1:
                if (obj_tlen < sizeof(struct rsvp_obj_integrity_t))
                    return-1;
                obj_ptr.rsvp_obj_integrity = (const struct rsvp_obj_integrity_t *)obj_tptr;
                (*ndo->ndo_printf)(ndo, "%s  Key-ID 0x%04x%08x, Sequence 0x%08x%08x, Flags [%s]", ident, EXTRACT_16BITS(obj_ptr.rsvp_obj_integrity->key_id), EXTRACT_32BITS(obj_ptr.rsvp_obj_integrity->key_id+2), EXTRACT_32BITS(obj_ptr.rsvp_obj_integrity->sequence), EXTRACT_32BITS(obj_ptr.rsvp_obj_integrity->sequence+4), bittok2str(rsvp_obj_integrity_flag_values, "none", obj_ptr.rsvp_obj_integrity->flags))







                                                                      ;
                (*ndo->ndo_printf)(ndo, "%s  MD5-sum 0x%08x%08x%08x%08x ", ident, EXTRACT_32BITS(obj_ptr.rsvp_obj_integrity->digest), EXTRACT_32BITS(obj_ptr.rsvp_obj_integrity->digest+4), EXTRACT_32BITS(obj_ptr.rsvp_obj_integrity->digest+8), EXTRACT_32BITS(obj_ptr.rsvp_obj_integrity->digest + 12))




                                                                                ;

                sigcheck = signature_verify(ndo, pptr, plen,
                                            obj_ptr.rsvp_obj_integrity->digest,
                                            rsvp_clear_checksum,
                                            rsvp_com_header);
                (*ndo->ndo_printf)(ndo, " (%s)", tok2str(signature_check_values, "Unknown", sigcheck));

                obj_tlen+=sizeof(struct rsvp_obj_integrity_t);
                obj_tptr+=sizeof(struct rsvp_obj_integrity_t);
                break;
            default:
                hexdump=1;
            }
            break;

        case 196:
            switch(rsvp_obj_ctype) {
            case 1:
                if (obj_tlen < 4)
                    return-1;
                (*ndo->ndo_printf)(ndo, "%s  Flags [%s]", ident, bittok2str(rsvp_obj_admin_status_flag_values, "none", EXTRACT_32BITS(obj_tptr)))

                                                             ;
                obj_tlen-=4;
                obj_tptr+=4;
                break;
            default:
                hexdump=1;
            }
            break;

        case 36:
            switch(rsvp_obj_ctype) {
            case 1:
                if (obj_tlen < 4)
                    return-1;
                action = (EXTRACT_16BITS(obj_tptr)>>8);

                (*ndo->ndo_printf)(ndo, "%s  Action: %s (%u), Label type: %u", ident, tok2str(rsvp_obj_label_set_action_values, "Unknown", action), action, ((EXTRACT_32BITS(obj_tptr) & 0x7F)))

                                                                    ;

                switch (action) {
                case 2:
                case 3:


      if (obj_tlen < 12)
   return -1;
      (*ndo->ndo_printf)(ndo, "%s  Start range: %u, End range: %u", ident, EXTRACT_32BITS(obj_tptr+4), EXTRACT_32BITS(obj_tptr + 8))

                                                         ;
      obj_tlen-=12;
      obj_tptr+=12;
                    break;

                default:
                    obj_tlen-=4;
                    obj_tptr+=4;
                    subchannel = 1;
                    while(obj_tlen >= 4 ) {
                        (*ndo->ndo_printf)(ndo, "%s  Subchannel #%u: %u", ident, subchannel, EXTRACT_32BITS(obj_tptr))
                                                         ;
                        obj_tptr+=4;
                        obj_tlen-=4;
                        subchannel++;
                    }
                    break;
                }
                break;
            default:
                hexdump=1;
            }

        case 50:
            switch (rsvp_obj_ctype) {
            case 1:
                if (obj_tlen < 4)
                    return-1;
                (*ndo->ndo_printf)(ndo, "%s  Sub-LSP destination address: %s", ident, getname(ndo, (const u_char *)(obj_tptr)))
                                                            ;

                obj_tlen-=4;
                obj_tptr+=4;
                break;
            case 2:
                if (obj_tlen < 16)
                    return-1;
                (*ndo->ndo_printf)(ndo, "%s  Sub-LSP destination address: %s", ident, getname6(ndo, (const u_char *)(obj_tptr)))
                                                             ;

                obj_tlen-=16;
                obj_tptr+=16;
                break;
            default:
                hexdump=1;
            }






        case 7:
        case 14:
        case 130:
        case 37:
        default:
            if (ndo->ndo_vflag <= 1)
                print_unknown_data(ndo, obj_tptr, "\n\t    ", obj_tlen);
            break;
        }

        if (ndo->ndo_vflag > 1 || hexdump == 1)
            print_unknown_data(ndo, tptr + sizeof(struct rsvp_object_header), "\n\t    ",
                               rsvp_obj_len - sizeof(struct rsvp_object_header));

        tptr+=rsvp_obj_len;
        tlen-=rsvp_obj_len;
    }
    return 0;
invalid:
    (*ndo->ndo_printf)(ndo, "%s", istr);
    return -1;
trunc:
    (*ndo->ndo_printf)(ndo, "\n\t\t");
    (*ndo->ndo_printf)(ndo, "%s", tstr);
    return -1;
}

void
rsvp_print(netdissect_options *ndo,
           const u_char *pptr, u_int len)
{
    const struct rsvp_common_header *rsvp_com_header={0};
    const u_char *tptr={0};
    u_short plen, tlen={0};

    tptr=pptr;

    rsvp_com_header = (const struct rsvp_common_header *)pptr;
    if (!((((sizeof(*rsvp_com_header)) > 0) || ((sizeof(*rsvp_com_header)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*rsvp_com_header)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*rsvp_com_header) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*rsvp_com_header))))) goto trunc;




    if ((((rsvp_com_header->version_flags)&0xf0)>>4) != 1) {
 (*ndo->ndo_printf)(ndo, "ERROR: RSVP version %u packet not supported", (((rsvp_com_header->version_flags)&0xf0)>>4))
                                                                     ;
 return;
    }


    if (ndo->ndo_vflag < 1) {
        (*ndo->ndo_printf)(ndo, "RSVPv%u %s Message, length: %u", (((rsvp_com_header->version_flags)&0xf0)>>4), tok2str(rsvp_msg_type_values, "unknown (%u)",rsvp_com_header->msg_type), len)


                    ;
        return;
    }



    plen = tlen = EXTRACT_16BITS(rsvp_com_header->length);

    (*ndo->ndo_printf)(ndo, "\n\tRSVPv%u %s Message (%u), Flags: [%s], length: %u, ttl: %u, checksum: 0x%04x", (((rsvp_com_header->version_flags)&0xf0)>>4), tok2str(rsvp_msg_type_values, "unknown, type: %u",rsvp_com_header->msg_type), rsvp_com_header->msg_type, bittok2str(rsvp_header_flag_values,"none",((rsvp_com_header->version_flags)&0x0f)), tlen, rsvp_com_header->ttl, EXTRACT_16BITS(rsvp_com_header->checksum))






                                                      ;

    if (tlen < sizeof(const struct rsvp_common_header)) {
        (*ndo->ndo_printf)(ndo, "ERROR: common header too short %u < %lu", tlen, (unsigned long)sizeof(const struct rsvp_common_header))
                                                                       ;
        return;
    }

    tptr+=sizeof(const struct rsvp_common_header);
    tlen-=sizeof(const struct rsvp_common_header);

    switch(rsvp_com_header->msg_type) {

    case 12:





        while(tlen > 0) {
            const u_char *subpptr=tptr, *subtptr={0};
            u_short subplen, subtlen={0};

            subtptr=subpptr;

            rsvp_com_header = (const struct rsvp_common_header *)subpptr;
            if (!((((sizeof(*rsvp_com_header)) > 0) || ((sizeof(*rsvp_com_header)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*rsvp_com_header)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*rsvp_com_header) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*rsvp_com_header))))) goto trunc;




            if ((((rsvp_com_header->version_flags)&0xf0)>>4) != 1) {
                (*ndo->ndo_printf)(ndo, "ERROR: RSVP version %u packet not supported", (((rsvp_com_header->version_flags)&0xf0)>>4))
                                                                             ;
                return;
            }

            subplen = subtlen = EXTRACT_16BITS(rsvp_com_header->length);

            (*ndo->ndo_printf)(ndo, "\n\t  RSVPv%u %s Message (%u), Flags: [%s], length: %u, ttl: %u, checksum: 0x%04x", (((rsvp_com_header->version_flags)&0xf0)>>4), tok2str(rsvp_msg_type_values, "unknown, type: %u",rsvp_com_header->msg_type), rsvp_com_header->msg_type, bittok2str(rsvp_header_flag_values,"none",((rsvp_com_header->version_flags)&0x0f)), subtlen, rsvp_com_header->ttl, EXTRACT_16BITS(rsvp_com_header->checksum))






                                                              ;

            if (subtlen < sizeof(const struct rsvp_common_header)) {
                (*ndo->ndo_printf)(ndo, "ERROR: common header too short %u < %lu", subtlen, (unsigned long)sizeof(const struct rsvp_common_header))
                                                                               ;
                return;
            }

            if (tlen < subtlen) {
                (*ndo->ndo_printf)(ndo, "ERROR: common header too large %u > %u", subtlen, tlen)
                             ;
                return;
            }

            subtptr+=sizeof(const struct rsvp_common_header);
            subtlen-=sizeof(const struct rsvp_common_header);




            if (rsvp_obj_print(ndo, subpptr, subplen, subtptr, "\n\t    ", subtlen, rsvp_com_header) == -1)
                return;

            tptr+=subtlen+sizeof(const struct rsvp_common_header);
            tlen-=subtlen+sizeof(const struct rsvp_common_header);
        }

        break;

    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 14:
    case 20:
    case 13:
    case 15:



        if (rsvp_obj_print(ndo, pptr, plen, tptr, "\n\t  ", tlen, rsvp_com_header) == -1)
            return;
        break;

    default:
        print_unknown_data(ndo, tptr, "\n\t    ", tlen);
        break;
    }

    return;
trunc:
    (*ndo->ndo_printf)(ndo, "\n\t\t");
    (*ndo->ndo_printf)(ndo, "%s", tstr);
}
