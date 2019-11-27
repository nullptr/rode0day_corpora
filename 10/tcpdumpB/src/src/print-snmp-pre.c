











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



static const char tstr[] = "[|snmp]";





static const char *Universal[] = {
 "U-0",
 "Boolean",
 "Integer",

 "Bitstring",
 "String",

 "Null",

 "ObjID",

 "ObjectDes",
 "U-8","U-9","U-10","U-11",
 "U-12","U-13","U-14","U-15",
 "Sequence",

 "Set"
};




static const char *Application[] = {
 "IpAddress",

 "Counter",

 "Gauge",

 "TimeTicks",

 "Opaque",

 "C-5",
 "Counter64"

};




static const char *Context[] = {
 "GetRequest",

 "GetNextRequest",

 "GetResponse",

 "SetRequest",

 "Trap",

 "GetBulk",

 "Inform",

 "V2Trap",

 "Report"

};
static const char *Exceptions[] = {
 "noSuchObject",

 "noSuchInstance",

 "endOfMibView",

};





static const char *Private[] = {
 "P-0"
};




static const char *ErrorStatus[] = {
 "noError",
 "tooBig",
 "noSuchName",
 "badValue",
 "readOnly",
 "genErr",
 "noAccess",
 "wrongType",
 "wrongLength",
 "wrongEncoding",
 "wrongValue",
 "noCreation",
 "inconsistentValue",
 "resourceUnavailable",
 "commitFailed",
 "undoFailed",
 "authorizationError",
 "notWritable",
 "inconsistentName"
};
static const char *GenericTrap[] = {
 "coldStart",
 "warmStart",
 "linkDown",
 "linkUp",
 "authenticationFailure",
 "egpNeighborLoss",
 "enterpriseSpecific"

};
static const struct {
 const char *name;
 const char **Id;
     int numIDs;
    } Class[] = {
 { "x", Universal, sizeof(Universal)/sizeof(Universal[0]) },

 { "x", Application, sizeof(Application)/sizeof(Application[0]) },

 { "x", Context, sizeof(Context)/sizeof(Context[0]) },

 { "x", Private, sizeof(Private)/sizeof(Private[0]) },

 { "x", Exceptions, sizeof(Exceptions)/sizeof(Exceptions[0]) },

};




static const char *Form[] = {
 "Primitive",

 "Constructed",

};





static struct obj {
 const char *desc;
 u_char oid;
 u_char type;
 struct obj *child, *next;
} *objp = 
         ((void *)0)
             ;
static struct obj
_proteon_obj = {
 "proteon", 1, 0,
 
((void *)0)
    , 
      ((void *)0)

},
_ibm_obj = {
 "ibm", 2, 0,
 
((void *)0)
    , &_proteon_obj
},
_cmu_obj = {
 "cmu", 3, 0,
 
((void *)0)
    , &_ibm_obj
},
_unix_obj = {
 "unix", 4, 0,
 
((void *)0)
    , &_cmu_obj
},
_acc_obj = {
 "acc", 5, 0,
 
((void *)0)
    , &_unix_obj
},
_twg_obj = {
 "twg", 6, 0,
 
((void *)0)
    , &_acc_obj
},
_cayman_obj = {
 "cayman", 7, 0,
 
((void *)0)
    , &_twg_obj
},
_nysernet_obj = {
 "nysernet", 8, 0,
 
((void *)0)
    , &_cayman_obj
},
_cisco_obj = {
 "cisco", 9, 0,
 
((void *)0)
    , &_nysernet_obj
},
_nsc_obj = {
 "nsc", 10, 0,
 
((void *)0)
    , &_cisco_obj
},
_hp_obj = {
 "hp", 11, 0,
 
((void *)0)
    , &_nsc_obj
},
_epilogue_obj = {
 "epilogue", 12, 0,
 
((void *)0)
    , &_hp_obj
},
_utennessee_obj = {
 "utennessee", 13, 0,
 
((void *)0)
    , &_epilogue_obj
},
_bbn_obj = {
 "bbn", 14, 0,
 
((void *)0)
    , &_utennessee_obj
},
_xylogics_obj = {
 "xylogics", 15, 0,
 
((void *)0)
    , &_bbn_obj
},
_unisys_obj = {
 "unisys", 16, 0,
 
((void *)0)
    , &_xylogics_obj
},
_canstar_obj = {
 "canstar", 17, 0,
 
((void *)0)
    , &_unisys_obj
},
_wellfleet_obj = {
 "wellfleet", 18, 0,
 
((void *)0)
    , &_canstar_obj
},
_trw_obj = {
 "trw", 19, 0,
 
((void *)0)
    , &_wellfleet_obj
},
_mit_obj = {
 "mit", 20, 0,
 
((void *)0)
    , &_trw_obj
},
_eon_obj = {
 "eon", 21, 0,
 
((void *)0)
    , &_mit_obj
},
_spartacus_obj = {
 "spartacus", 22, 0,
 
((void *)0)
    , &_eon_obj
},
_excelan_obj = {
 "excelan", 23, 0,
 
((void *)0)
    , &_spartacus_obj
},
_spider_obj = {
 "spider", 24, 0,
 
((void *)0)
    , &_excelan_obj
},
_nsfnet_obj = {
 "nsfnet", 25, 0,
 
((void *)0)
    , &_spider_obj
},
_sytek_obj = {
 "sytek", 26, 0,
 
((void *)0)
    , &_nsfnet_obj
},
_intergraph_obj = {
 "intergraph", 27, 0,
 
((void *)0)
    , &_sytek_obj
},
_interlan_obj = {
 "interlan", 28, 0,
 
((void *)0)
    , &_intergraph_obj
},
_vitalink_obj = {
 "vitalink", 29, 0,
 
((void *)0)
    , &_interlan_obj
},
_ulana_obj = {
 "ulana", 30, 0,
 
((void *)0)
    , &_vitalink_obj
},
_nswc_obj = {
 "nswc", 31, 0,
 
((void *)0)
    , &_ulana_obj
},
_santacruzoperation_obj = {
 "santacruzoperation", 32, 0,
 
((void *)0)
    , &_nswc_obj
},
_xyplex_obj = {
 "xyplex", 33, 0,
 
((void *)0)
    , &_santacruzoperation_obj
},
_cray_obj = {
 "cray", 34, 0,
 
((void *)0)
    , &_xyplex_obj
},
_bellnorthernresearch_obj = {
 "bellnorthernresearch", 35, 0,
 
((void *)0)
    , &_cray_obj
},
_dec_obj = {
 "dec", 36, 0,
 
((void *)0)
    , &_bellnorthernresearch_obj
},
_touch_obj = {
 "touch", 37, 0,
 
((void *)0)
    , &_dec_obj
},
_networkresearchcorp_obj = {
 "networkresearchcorp", 38, 0,
 
((void *)0)
    , &_touch_obj
},
_baylor_obj = {
 "baylor", 39, 0,
 
((void *)0)
    , &_networkresearchcorp_obj
},
_nmfeccllnl_obj = {
 "nmfeccllnl", 40, 0,
 
((void *)0)
    , &_baylor_obj
},
_sri_obj = {
 "sri", 41, 0,
 
((void *)0)
    , &_nmfeccllnl_obj
},
_sun_obj = {
 "sun", 42, 0,
 
((void *)0)
    , &_sri_obj
},
_3com_obj = {
 "3com", 43, 0,
 
((void *)0)
    , &_sun_obj
},
_cmc_obj = {
 "cmc", 44, 0,
 
((void *)0)
    , &_3com_obj
},
_synoptics_obj = {
 "synoptics", 45, 0,
 
((void *)0)
    , &_cmc_obj
},
_cheyenne_obj = {
 "cheyenne", 46, 0,
 
((void *)0)
    , &_synoptics_obj
},
_prime_obj = {
 "prime", 47, 0,
 
((void *)0)
    , &_cheyenne_obj
},
_mcnc_obj = {
 "mcnc", 48, 0,
 
((void *)0)
    , &_prime_obj
},
_chipcom_obj = {
 "chipcom", 49, 0,
 
((void *)0)
    , &_mcnc_obj
},
_opticaldatasystems_obj = {
 "opticaldatasystems", 50, 0,
 
((void *)0)
    , &_chipcom_obj
},
_gated_obj = {
 "gated", 51, 0,
 
((void *)0)
    , &_opticaldatasystems_obj
},
_cabletron_obj = {
 "cabletron", 52, 0,
 
((void *)0)
    , &_gated_obj
},
_apollo_obj = {
 "apollo", 53, 0,
 
((void *)0)
    , &_cabletron_obj
},
_desktalksystems_obj = {
 "desktalksystems", 54, 0,
 
((void *)0)
    , &_apollo_obj
},
_ssds_obj = {
 "ssds", 55, 0,
 
((void *)0)
    , &_desktalksystems_obj
},
_castlerock_obj = {
 "castlerock", 56, 0,
 
((void *)0)
    , &_ssds_obj
},
_mips_obj = {
 "mips", 57, 0,
 
((void *)0)
    , &_castlerock_obj
},
_tgv_obj = {
 "tgv", 58, 0,
 
((void *)0)
    , &_mips_obj
},
_silicongraphics_obj = {
 "silicongraphics", 59, 0,
 
((void *)0)
    , &_tgv_obj
},
_ubc_obj = {
 "ubc", 60, 0,
 
((void *)0)
    , &_silicongraphics_obj
},
_merit_obj = {
 "merit", 61, 0,
 
((void *)0)
    , &_ubc_obj
},
_fibercom_obj = {
 "fibercom", 62, 0,
 
((void *)0)
    , &_merit_obj
},
_apple_obj = {
 "apple", 63, 0,
 
((void *)0)
    , &_fibercom_obj
},
_gandalf_obj = {
 "gandalf", 64, 0,
 
((void *)0)
    , &_apple_obj
},
_dartmouth_obj = {
 "dartmouth", 65, 0,
 
((void *)0)
    , &_gandalf_obj
},
_davidsystems_obj = {
 "davidsystems", 66, 0,
 
((void *)0)
    , &_dartmouth_obj
},
_reuter_obj = {
 "reuter", 67, 0,
 
((void *)0)
    , &_davidsystems_obj
},
_cornell_obj = {
 "cornell", 68, 0,
 
((void *)0)
    , &_reuter_obj
},
_tmac_obj = {
 "tmac", 69, 0,
 
((void *)0)
    , &_cornell_obj
},
_locus_obj = {
 "locus", 70, 0,
 
((void *)0)
    , &_tmac_obj
},
_nasa_obj = {
 "nasa", 71, 0,
 
((void *)0)
    , &_locus_obj
},
_retix_obj = {
 "retix", 72, 0,
 
((void *)0)
    , &_nasa_obj
},
_boeing_obj = {
 "boeing", 73, 0,
 
((void *)0)
    , &_retix_obj
},
_att_obj = {
 "att", 74, 0,
 
((void *)0)
    , &_boeing_obj
},
_ungermannbass_obj = {
 "ungermannbass", 75, 0,
 
((void *)0)
    , &_att_obj
},
_digitalanalysis_obj = {
 "digitalanalysis", 76, 0,
 
((void *)0)
    , &_ungermannbass_obj
},
_hplanman_obj = {
 "hplanman", 77, 0,
 
((void *)0)
    , &_digitalanalysis_obj
},
_netlabs_obj = {
 "netlabs", 78, 0,
 
((void *)0)
    , &_hplanman_obj
},
_icl_obj = {
 "icl", 79, 0,
 
((void *)0)
    , &_netlabs_obj
},
_auspex_obj = {
 "auspex", 80, 0,
 
((void *)0)
    , &_icl_obj
},
_lannet_obj = {
 "lannet", 81, 0,
 
((void *)0)
    , &_auspex_obj
},
_ncd_obj = {
 "ncd", 82, 0,
 
((void *)0)
    , &_lannet_obj
},
_raycom_obj = {
 "raycom", 83, 0,
 
((void *)0)
    , &_ncd_obj
},
_pirellifocom_obj = {
 "pirellifocom", 84, 0,
 
((void *)0)
    , &_raycom_obj
},
_datability_obj = {
 "datability", 85, 0,
 
((void *)0)
    , &_pirellifocom_obj
},
_networkappltech_obj = {
 "networkappltech", 86, 0,
 
((void *)0)
    , &_datability_obj
},
_link_obj = {
 "link", 87, 0,
 
((void *)0)
    , &_networkappltech_obj
},
_nyu_obj = {
 "nyu", 88, 0,
 
((void *)0)
    , &_link_obj
},
_rnd_obj = {
 "rnd", 89, 0,
 
((void *)0)
    , &_nyu_obj
},
_intercon_obj = {
 "intercon", 90, 0,
 
((void *)0)
    , &_rnd_obj
},
_learningtree_obj = {
 "learningtree", 91, 0,
 
((void *)0)
    , &_intercon_obj
},
_webstercomputer_obj = {
 "webstercomputer", 92, 0,
 
((void *)0)
    , &_learningtree_obj
},
_frontier_obj = {
 "frontier", 93, 0,
 
((void *)0)
    , &_webstercomputer_obj
},
_nokia_obj = {
 "nokia", 94, 0,
 
((void *)0)
    , &_frontier_obj
},
_allenbradley_obj = {
 "allenbradley", 95, 0,
 
((void *)0)
    , &_nokia_obj
},
_cern_obj = {
 "cern", 96, 0,
 
((void *)0)
    , &_allenbradley_obj
},
_sigma_obj = {
 "sigma", 97, 0,
 
((void *)0)
    , &_cern_obj
},
_emergingtech_obj = {
 "emergingtech", 98, 0,
 
((void *)0)
    , &_sigma_obj
},
_snmpresearch_obj = {
 "snmpresearch", 99, 0,
 
((void *)0)
    , &_emergingtech_obj
},
_ohiostate_obj = {
 "ohiostate", 100, 0,
 
((void *)0)
    , &_snmpresearch_obj
},
_ultra_obj = {
 "ultra", 101, 0,
 
((void *)0)
    , &_ohiostate_obj
},
_ccur_obj = {
 "ccur", 136, 0,
 
((void *)0)
    , &_ultra_obj
},
_enterprises_obj = {
 "enterprises", 1, 0,
 &_ccur_obj, 
            ((void *)0)

},
_snmpInPkts_obj = {
 "snmpInPkts", 1, 0,
 
((void *)0)
    , 
      ((void *)0)

},
_snmpOutPkts_obj = {
 "snmpOutPkts", 2, 0,
 
((void *)0)
    , &_snmpInPkts_obj
},
_snmpInBadVersions_obj = {
 "snmpInBadVersions", 3, 0,
 
((void *)0)
    , &_snmpOutPkts_obj
},
_snmpInBadCommunityNames_obj = {
 "snmpInBadCommunityNames", 4, 0,
 
((void *)0)
    , &_snmpInBadVersions_obj
},
_snmpInBadCommunityUses_obj = {
 "snmpInBadCommunityUses", 5, 0,
 
((void *)0)
    , &_snmpInBadCommunityNames_obj
},
_snmpInASNParseErrs_obj = {
 "snmpInASNParseErrs", 6, 0,
 
((void *)0)
    , &_snmpInBadCommunityUses_obj
},
_snmpInBadTypes_obj = {
 "snmpInBadTypes", 7, 0,
 
((void *)0)
    , &_snmpInASNParseErrs_obj
},
_snmpInTooBigs_obj = {
 "snmpInTooBigs", 8, 0,
 
((void *)0)
    , &_snmpInBadTypes_obj
},
_snmpInNoSuchNames_obj = {
 "snmpInNoSuchNames", 9, 0,
 
((void *)0)
    , &_snmpInTooBigs_obj
},
_snmpInBadValues_obj = {
 "snmpInBadValues", 10, 0,
 
((void *)0)
    , &_snmpInNoSuchNames_obj
},
_snmpInReadOnlys_obj = {
 "snmpInReadOnlys", 11, 0,
 
((void *)0)
    , &_snmpInBadValues_obj
},
_snmpInGenErrs_obj = {
 "snmpInGenErrs", 12, 0,
 
((void *)0)
    , &_snmpInReadOnlys_obj
},
_snmpInTotalReqVars_obj = {
 "snmpInTotalReqVars", 13, 0,
 
((void *)0)
    , &_snmpInGenErrs_obj
},
_snmpInTotalSetVars_obj = {
 "snmpInTotalSetVars", 14, 0,
 
((void *)0)
    , &_snmpInTotalReqVars_obj
},
_snmpInGetRequests_obj = {
 "snmpInGetRequests", 15, 0,
 
((void *)0)
    , &_snmpInTotalSetVars_obj
},
_snmpInGetNexts_obj = {
 "snmpInGetNexts", 16, 0,
 
((void *)0)
    , &_snmpInGetRequests_obj
},
_snmpInSetRequests_obj = {
 "snmpInSetRequests", 17, 0,
 
((void *)0)
    , &_snmpInGetNexts_obj
},
_snmpInGetResponses_obj = {
 "snmpInGetResponses", 18, 0,
 
((void *)0)
    , &_snmpInSetRequests_obj
},
_snmpInTraps_obj = {
 "snmpInTraps", 19, 0,
 
((void *)0)
    , &_snmpInGetResponses_obj
},
_snmpOutTooBigs_obj = {
 "snmpOutTooBigs", 20, 0,
 
((void *)0)
    , &_snmpInTraps_obj
},
_snmpOutNoSuchNames_obj = {
 "snmpOutNoSuchNames", 21, 0,
 
((void *)0)
    , &_snmpOutTooBigs_obj
},
_snmpOutBadValues_obj = {
 "snmpOutBadValues", 22, 0,
 
((void *)0)
    , &_snmpOutNoSuchNames_obj
},
_snmpOutReadOnlys_obj = {
 "snmpOutReadOnlys", 23, 0,
 
((void *)0)
    , &_snmpOutBadValues_obj
},
_snmpOutGenErrs_obj = {
 "snmpOutGenErrs", 24, 0,
 
((void *)0)
    , &_snmpOutReadOnlys_obj
},
_snmpOutGetRequests_obj = {
 "snmpOutGetRequests", 25, 0,
 
((void *)0)
    , &_snmpOutGenErrs_obj
},
_snmpOutGetNexts_obj = {
 "snmpOutGetNexts", 26, 0,
 
((void *)0)
    , &_snmpOutGetRequests_obj
},
_snmpOutSetRequests_obj = {
 "snmpOutSetRequests", 27, 0,
 
((void *)0)
    , &_snmpOutGetNexts_obj
},
_snmpOutGetResponses_obj = {
 "snmpOutGetResponses", 28, 0,
 
((void *)0)
    , &_snmpOutSetRequests_obj
},
_snmpOutTraps_obj = {
 "snmpOutTraps", 29, 0,
 
((void *)0)
    , &_snmpOutGetResponses_obj
},
_snmpEnableAuthTraps_obj = {
 "snmpEnableAuthTraps", 30, 0,
 
((void *)0)
    , &_snmpOutTraps_obj
},
_egpNeighState_obj = {
 "egpNeighState", 1, 0,
 
((void *)0)
    , 
      ((void *)0)

},
_egpNeighAddr_obj = {
 "egpNeighAddr", 2, 0,
 
((void *)0)
    , &_egpNeighState_obj
},
_egpNeighAs_obj = {
 "egpNeighAs", 3, 0,
 
((void *)0)
    , &_egpNeighAddr_obj
},
_egpNeighInMsgs_obj = {
 "egpNeighInMsgs", 4, 0,
 
((void *)0)
    , &_egpNeighAs_obj
},
_egpNeighInErrs_obj = {
 "egpNeighInErrs", 5, 0,
 
((void *)0)
    , &_egpNeighInMsgs_obj
},
_egpNeighOutMsgs_obj = {
 "egpNeighOutMsgs", 6, 0,
 
((void *)0)
    , &_egpNeighInErrs_obj
},
_egpNeighOutErrs_obj = {
 "egpNeighOutErrs", 7, 0,
 
((void *)0)
    , &_egpNeighOutMsgs_obj
},
_egpNeighInErrMsgs_obj = {
 "egpNeighInErrMsgs", 8, 0,
 
((void *)0)
    , &_egpNeighOutErrs_obj
},
_egpNeighOutErrMsgs_obj = {
 "egpNeighOutErrMsgs", 9, 0,
 
((void *)0)
    , &_egpNeighInErrMsgs_obj
},
_egpNeighStateUps_obj = {
 "egpNeighStateUps", 10, 0,
 
((void *)0)
    , &_egpNeighOutErrMsgs_obj
},
_egpNeighStateDowns_obj = {
 "egpNeighStateDowns", 11, 0,
 
((void *)0)
    , &_egpNeighStateUps_obj
},
_egpNeighIntervalHello_obj = {
 "egpNeighIntervalHello", 12, 0,
 
((void *)0)
    , &_egpNeighStateDowns_obj
},
_egpNeighIntervalPoll_obj = {
 "egpNeighIntervalPoll", 13, 0,
 
((void *)0)
    , &_egpNeighIntervalHello_obj
},
_egpNeighMode_obj = {
 "egpNeighMode", 14, 0,
 
((void *)0)
    , &_egpNeighIntervalPoll_obj
},
_egpNeighEventTrigger_obj = {
 "egpNeighEventTrigger", 15, 0,
 
((void *)0)
    , &_egpNeighMode_obj
},
_egpNeighEntry_obj = {
 "egpNeighEntry", 1, 0,
 &_egpNeighEventTrigger_obj, 
                            ((void *)0)

},
_egpInMsgs_obj = {
 "egpInMsgs", 1, 0,
 
((void *)0)
    , 
      ((void *)0)

},
_egpInErrors_obj = {
 "egpInErrors", 2, 0,
 
((void *)0)
    , &_egpInMsgs_obj
},
_egpOutMsgs_obj = {
 "egpOutMsgs", 3, 0,
 
((void *)0)
    , &_egpInErrors_obj
},
_egpOutErrors_obj = {
 "egpOutErrors", 4, 0,
 
((void *)0)
    , &_egpOutMsgs_obj
},
_egpNeighTable_obj = {
 "egpNeighTable", 5, 0,
 &_egpNeighEntry_obj, &_egpOutErrors_obj
},
_egpAs_obj = {
 "egpAs", 6, 0,
 
((void *)0)
    , &_egpNeighTable_obj
},
_udpLocalAddress_obj = {
 "udpLocalAddress", 1, 0,
 
((void *)0)
    , 
      ((void *)0)

},
_udpLocalPort_obj = {
 "udpLocalPort", 2, 0,
 
((void *)0)
    , &_udpLocalAddress_obj
},
_udpEntry_obj = {
 "udpEntry", 1, 0,
 &_udpLocalPort_obj, 
                    ((void *)0)

},
_udpInDatagrams_obj = {
 "udpInDatagrams", 1, 0,
 
((void *)0)
    , 
      ((void *)0)

},
_udpNoPorts_obj = {
 "udpNoPorts", 2, 0,
 
((void *)0)
    , &_udpInDatagrams_obj
},
_udpInErrors_obj = {
 "udpInErrors", 3, 0,
 
((void *)0)
    , &_udpNoPorts_obj
},
_udpOutDatagrams_obj = {
 "udpOutDatagrams", 4, 0,
 
((void *)0)
    , &_udpInErrors_obj
},
_udpTable_obj = {
 "udpTable", 5, 0,
 &_udpEntry_obj, &_udpOutDatagrams_obj
},
_tcpConnState_obj = {
 "tcpConnState", 1, 0,
 
((void *)0)
    , 
      ((void *)0)

},
_tcpConnLocalAddress_obj = {
 "tcpConnLocalAddress", 2, 0,
 
((void *)0)
    , &_tcpConnState_obj
},
_tcpConnLocalPort_obj = {
 "tcpConnLocalPort", 3, 0,
 
((void *)0)
    , &_tcpConnLocalAddress_obj
},
_tcpConnRemAddress_obj = {
 "tcpConnRemAddress", 4, 0,
 
((void *)0)
    , &_tcpConnLocalPort_obj
},
_tcpConnRemPort_obj = {
 "tcpConnRemPort", 5, 0,
 
((void *)0)
    , &_tcpConnRemAddress_obj
},
_tcpConnEntry_obj = {
 "tcpConnEntry", 1, 0,
 &_tcpConnRemPort_obj, 
                      ((void *)0)

},
_tcpRtoAlgorithm_obj = {
 "tcpRtoAlgorithm", 1, 0,
 
((void *)0)
    , 
      ((void *)0)

},
_tcpRtoMin_obj = {
 "tcpRtoMin", 2, 0,
 
((void *)0)
    , &_tcpRtoAlgorithm_obj
},
_tcpRtoMax_obj = {
 "tcpRtoMax", 3, 0,
 
((void *)0)
    , &_tcpRtoMin_obj
},
_tcpMaxConn_obj = {
 "tcpMaxConn", 4, 0,
 
((void *)0)
    , &_tcpRtoMax_obj
},
_tcpActiveOpens_obj = {
 "tcpActiveOpens", 5, 0,
 
((void *)0)
    , &_tcpMaxConn_obj
},
_tcpPassiveOpens_obj = {
 "tcpPassiveOpens", 6, 0,
 
((void *)0)
    , &_tcpActiveOpens_obj
},
_tcpAttemptFails_obj = {
 "tcpAttemptFails", 7, 0,
 
((void *)0)
    , &_tcpPassiveOpens_obj
},
_tcpEstabResets_obj = {
 "tcpEstabResets", 8, 0,
 
((void *)0)
    , &_tcpAttemptFails_obj
},
_tcpCurrEstab_obj = {
 "tcpCurrEstab", 9, 0,
 
((void *)0)
    , &_tcpEstabResets_obj
},
_tcpInSegs_obj = {
 "tcpInSegs", 10, 0,
 
((void *)0)
    , &_tcpCurrEstab_obj
},
_tcpOutSegs_obj = {
 "tcpOutSegs", 11, 0,
 
((void *)0)
    , &_tcpInSegs_obj
},
_tcpRetransSegs_obj = {
 "tcpRetransSegs", 12, 0,
 
((void *)0)
    , &_tcpOutSegs_obj
},
_tcpConnTable_obj = {
 "tcpConnTable", 13, 0,
 &_tcpConnEntry_obj, &_tcpRetransSegs_obj
},
_tcpInErrs_obj = {
 "tcpInErrs", 14, 0,
 
((void *)0)
    , &_tcpConnTable_obj
},
_tcpOutRsts_obj = {
 "tcpOutRsts", 15, 0,
 
((void *)0)
    , &_tcpInErrs_obj
},
_icmpInMsgs_obj = {
 "icmpInMsgs", 1, 0,
 
((void *)0)
    , 
      ((void *)0)

},
_icmpInErrors_obj = {
 "icmpInErrors", 2, 0,
 
((void *)0)
    , &_icmpInMsgs_obj
},
_icmpInDestUnreachs_obj = {
 "icmpInDestUnreachs", 3, 0,
 
((void *)0)
    , &_icmpInErrors_obj
},
_icmpInTimeExcds_obj = {
 "icmpInTimeExcds", 4, 0,
 
((void *)0)
    , &_icmpInDestUnreachs_obj
},
_icmpInParmProbs_obj = {
 "icmpInParmProbs", 5, 0,
 
((void *)0)
    , &_icmpInTimeExcds_obj
},
_icmpInSrcQuenchs_obj = {
 "icmpInSrcQuenchs", 6, 0,
 
((void *)0)
    , &_icmpInParmProbs_obj
},
_icmpInRedirects_obj = {
 "icmpInRedirects", 7, 0,
 
((void *)0)
    , &_icmpInSrcQuenchs_obj
},
_icmpInEchos_obj = {
 "icmpInEchos", 8, 0,
 
((void *)0)
    , &_icmpInRedirects_obj
},
_icmpInEchoReps_obj = {
 "icmpInEchoReps", 9, 0,
 
((void *)0)
    , &_icmpInEchos_obj
},
_icmpInTimestamps_obj = {
 "icmpInTimestamps", 10, 0,
 
((void *)0)
    , &_icmpInEchoReps_obj
},
_icmpInTimestampReps_obj = {
 "icmpInTimestampReps", 11, 0,
 
((void *)0)
    , &_icmpInTimestamps_obj
},
_icmpInAddrMasks_obj = {
 "icmpInAddrMasks", 12, 0,
 
((void *)0)
    , &_icmpInTimestampReps_obj
},
_icmpInAddrMaskReps_obj = {
 "icmpInAddrMaskReps", 13, 0,
 
((void *)0)
    , &_icmpInAddrMasks_obj
},
_icmpOutMsgs_obj = {
 "icmpOutMsgs", 14, 0,
 
((void *)0)
    , &_icmpInAddrMaskReps_obj
},
_icmpOutErrors_obj = {
 "icmpOutErrors", 15, 0,
 
((void *)0)
    , &_icmpOutMsgs_obj
},
_icmpOutDestUnreachs_obj = {
 "icmpOutDestUnreachs", 16, 0,
 
((void *)0)
    , &_icmpOutErrors_obj
},
_icmpOutTimeExcds_obj = {
 "icmpOutTimeExcds", 17, 0,
 
((void *)0)
    , &_icmpOutDestUnreachs_obj
},
_icmpOutParmProbs_obj = {
 "icmpOutParmProbs", 18, 0,
 
((void *)0)
    , &_icmpOutTimeExcds_obj
},
_icmpOutSrcQuenchs_obj = {
 "icmpOutSrcQuenchs", 19, 0,
 
((void *)0)
    , &_icmpOutParmProbs_obj
},
_icmpOutRedirects_obj = {
 "icmpOutRedirects", 20, 0,
 
((void *)0)
    , &_icmpOutSrcQuenchs_obj
},
_icmpOutEchos_obj = {
 "icmpOutEchos", 21, 0,
 
((void *)0)
    , &_icmpOutRedirects_obj
},
_icmpOutEchoReps_obj = {
 "icmpOutEchoReps", 22, 0,
 
((void *)0)
    , &_icmpOutEchos_obj
},
_icmpOutTimestamps_obj = {
 "icmpOutTimestamps", 23, 0,
 
((void *)0)
    , &_icmpOutEchoReps_obj
},
_icmpOutTimestampReps_obj = {
 "icmpOutTimestampReps", 24, 0,
 
((void *)0)
    , &_icmpOutTimestamps_obj
},
_icmpOutAddrMasks_obj = {
 "icmpOutAddrMasks", 25, 0,
 
((void *)0)
    , &_icmpOutTimestampReps_obj
},
_icmpOutAddrMaskReps_obj = {
 "icmpOutAddrMaskReps", 26, 0,
 
((void *)0)
    , &_icmpOutAddrMasks_obj
},
_ipNetToMediaIfIndex_obj = {
 "ipNetToMediaIfIndex", 1, 0,
 
((void *)0)
    , 
      ((void *)0)

},
_ipNetToMediaPhysAddress_obj = {
 "ipNetToMediaPhysAddress", 2, 0,
 
((void *)0)
    , &_ipNetToMediaIfIndex_obj
},
_ipNetToMediaNetAddress_obj = {
 "ipNetToMediaNetAddress", 3, 0,
 
((void *)0)
    , &_ipNetToMediaPhysAddress_obj
},
_ipNetToMediaType_obj = {
 "ipNetToMediaType", 4, 0,
 
((void *)0)
    , &_ipNetToMediaNetAddress_obj
},
_ipNetToMediaEntry_obj = {
 "ipNetToMediaEntry", 1, 0,
 &_ipNetToMediaType_obj, 
                        ((void *)0)

},
_ipRouteDest_obj = {
 "ipRouteDest", 1, 0,
 
((void *)0)
    , 
      ((void *)0)

},
_ipRouteIfIndex_obj = {
 "ipRouteIfIndex", 2, 0,
 
((void *)0)
    , &_ipRouteDest_obj
},
_ipRouteMetric1_obj = {
 "ipRouteMetric1", 3, 0,
 
((void *)0)
    , &_ipRouteIfIndex_obj
},
_ipRouteMetric2_obj = {
 "ipRouteMetric2", 4, 0,
 
((void *)0)
    , &_ipRouteMetric1_obj
},
_ipRouteMetric3_obj = {
 "ipRouteMetric3", 5, 0,
 
((void *)0)
    , &_ipRouteMetric2_obj
},
_ipRouteMetric4_obj = {
 "ipRouteMetric4", 6, 0,
 
((void *)0)
    , &_ipRouteMetric3_obj
},
_ipRouteNextHop_obj = {
 "ipRouteNextHop", 7, 0,
 
((void *)0)
    , &_ipRouteMetric4_obj
},
_ipRouteType_obj = {
 "ipRouteType", 8, 0,
 
((void *)0)
    , &_ipRouteNextHop_obj
},
_ipRouteProto_obj = {
 "ipRouteProto", 9, 0,
 
((void *)0)
    , &_ipRouteType_obj
},
_ipRouteAge_obj = {
 "ipRouteAge", 10, 0,
 
((void *)0)
    , &_ipRouteProto_obj
},
_ipRouteMask_obj = {
 "ipRouteMask", 11, 0,
 
((void *)0)
    , &_ipRouteAge_obj
},
_ipRouteEntry_obj = {
 "ipRouteEntry", 1, 0,
 &_ipRouteMask_obj, 
                   ((void *)0)

},
_ipAdEntAddr_obj = {
 "ipAdEntAddr", 1, 0,
 
((void *)0)
    , 
      ((void *)0)

},
_ipAdEntIfIndex_obj = {
 "ipAdEntIfIndex", 2, 0,
 
((void *)0)
    , &_ipAdEntAddr_obj
},
_ipAdEntNetMask_obj = {
 "ipAdEntNetMask", 3, 0,
 
((void *)0)
    , &_ipAdEntIfIndex_obj
},
_ipAdEntBcastAddr_obj = {
 "ipAdEntBcastAddr", 4, 0,
 
((void *)0)
    , &_ipAdEntNetMask_obj
},
_ipAdEntReasmMaxSize_obj = {
 "ipAdEntReasmMaxSize", 5, 0,
 
((void *)0)
    , &_ipAdEntBcastAddr_obj
},
_ipAddrEntry_obj = {
 "ipAddrEntry", 1, 0,
 &_ipAdEntReasmMaxSize_obj, 
                           ((void *)0)

},
_ipForwarding_obj = {
 "ipForwarding", 1, 0,
 
((void *)0)
    , 
      ((void *)0)

},
_ipDefaultTTL_obj = {
 "ipDefaultTTL", 2, 0,
 
((void *)0)
    , &_ipForwarding_obj
},
_ipInReceives_obj = {
 "ipInReceives", 3, 0,
 
((void *)0)
    , &_ipDefaultTTL_obj
},
_ipInHdrErrors_obj = {
 "ipInHdrErrors", 4, 0,
 
((void *)0)
    , &_ipInReceives_obj
},
_ipInAddrErrors_obj = {
 "ipInAddrErrors", 5, 0,
 
((void *)0)
    , &_ipInHdrErrors_obj
},
_ipForwDatagrams_obj = {
 "ipForwDatagrams", 6, 0,
 
((void *)0)
    , &_ipInAddrErrors_obj
},
_ipInUnknownProtos_obj = {
 "ipInUnknownProtos", 7, 0,
 
((void *)0)
    , &_ipForwDatagrams_obj
},
_ipInDiscards_obj = {
 "ipInDiscards", 8, 0,
 
((void *)0)
    , &_ipInUnknownProtos_obj
},
_ipInDelivers_obj = {
 "ipInDelivers", 9, 0,
 
((void *)0)
    , &_ipInDiscards_obj
},
_ipOutRequests_obj = {
 "ipOutRequests", 10, 0,
 
((void *)0)
    , &_ipInDelivers_obj
},
_ipOutDiscards_obj = {
 "ipOutDiscards", 11, 0,
 
((void *)0)
    , &_ipOutRequests_obj
},
_ipOutNoRoutes_obj = {
 "ipOutNoRoutes", 12, 0,
 
((void *)0)
    , &_ipOutDiscards_obj
},
_ipReasmTimeout_obj = {
 "ipReasmTimeout", 13, 0,
 
((void *)0)
    , &_ipOutNoRoutes_obj
},
_ipReasmReqds_obj = {
 "ipReasmReqds", 14, 0,
 
((void *)0)
    , &_ipReasmTimeout_obj
},
_ipReasmOKs_obj = {
 "ipReasmOKs", 15, 0,
 
((void *)0)
    , &_ipReasmReqds_obj
},
_ipReasmFails_obj = {
 "ipReasmFails", 16, 0,
 
((void *)0)
    , &_ipReasmOKs_obj
},
_ipFragOKs_obj = {
 "ipFragOKs", 17, 0,
 
((void *)0)
    , &_ipReasmFails_obj
},
_ipFragFails_obj = {
 "ipFragFails", 18, 0,
 
((void *)0)
    , &_ipFragOKs_obj
},
_ipFragCreates_obj = {
 "ipFragCreates", 19, 0,
 
((void *)0)
    , &_ipFragFails_obj
},
_ipAddrTable_obj = {
 "ipAddrTable", 20, 0,
 &_ipAddrEntry_obj, &_ipFragCreates_obj
},
_ipRoutingTable_obj = {
 "ipRoutingTable", 21, 0,
 &_ipRouteEntry_obj, &_ipAddrTable_obj
},
_ipNetToMediaTable_obj = {
 "ipNetToMediaTable", 22, 0,
 &_ipNetToMediaEntry_obj, &_ipRoutingTable_obj
},
_atIfIndex_obj = {
 "atIfIndex", 1, 0,
 
((void *)0)
    , 
      ((void *)0)

},
_atPhysAddress_obj = {
 "atPhysAddress", 2, 0,
 
((void *)0)
    , &_atIfIndex_obj
},
_atNetAddress_obj = {
 "atNetAddress", 3, 0,
 
((void *)0)
    , &_atPhysAddress_obj
},
_atEntry_obj = {
 "atEntry", 1, 0,
 &_atNetAddress_obj, 
                    ((void *)0)

},
_atTable_obj = {
 "atTable", 1, 0,
 &_atEntry_obj, 
               ((void *)0)

},
_ifIndex_obj = {
 "ifIndex", 1, 0,
 
((void *)0)
    , 
      ((void *)0)

},
_ifDescr_obj = {
 "ifDescr", 2, 0,
 
((void *)0)
    , &_ifIndex_obj
},
_ifType_obj = {
 "ifType", 3, 0,
 
((void *)0)
    , &_ifDescr_obj
},
_ifMtu_obj = {
 "ifMtu", 4, 0,
 
((void *)0)
    , &_ifType_obj
},
_ifSpeed_obj = {
 "ifSpeed", 5, 0,
 
((void *)0)
    , &_ifMtu_obj
},
_ifPhysAddress_obj = {
 "ifPhysAddress", 6, 0,
 
((void *)0)
    , &_ifSpeed_obj
},
_ifAdminStatus_obj = {
 "ifAdminStatus", 7, 0,
 
((void *)0)
    , &_ifPhysAddress_obj
},
_ifOperStatus_obj = {
 "ifOperStatus", 8, 0,
 
((void *)0)
    , &_ifAdminStatus_obj
},
_ifLastChange_obj = {
 "ifLastChange", 9, 0,
 
((void *)0)
    , &_ifOperStatus_obj
},
_ifInOctets_obj = {
 "ifInOctets", 10, 0,
 
((void *)0)
    , &_ifLastChange_obj
},
_ifInUcastPkts_obj = {
 "ifInUcastPkts", 11, 0,
 
((void *)0)
    , &_ifInOctets_obj
},
_ifInNUcastPkts_obj = {
 "ifInNUcastPkts", 12, 0,
 
((void *)0)
    , &_ifInUcastPkts_obj
},
_ifInDiscards_obj = {
 "ifInDiscards", 13, 0,
 
((void *)0)
    , &_ifInNUcastPkts_obj
},
_ifInErrors_obj = {
 "ifInErrors", 14, 0,
 
((void *)0)
    , &_ifInDiscards_obj
},
_ifInUnknownProtos_obj = {
 "ifInUnknownProtos", 15, 0,
 
((void *)0)
    , &_ifInErrors_obj
},
_ifOutOctets_obj = {
 "ifOutOctets", 16, 0,
 
((void *)0)
    , &_ifInUnknownProtos_obj
},
_ifOutUcastPkts_obj = {
 "ifOutUcastPkts", 17, 0,
 
((void *)0)
    , &_ifOutOctets_obj
},
_ifOutNUcastPkts_obj = {
 "ifOutNUcastPkts", 18, 0,
 
((void *)0)
    , &_ifOutUcastPkts_obj
},
_ifOutDiscards_obj = {
 "ifOutDiscards", 19, 0,
 
((void *)0)
    , &_ifOutNUcastPkts_obj
},
_ifOutErrors_obj = {
 "ifOutErrors", 20, 0,
 
((void *)0)
    , &_ifOutDiscards_obj
},
_ifOutQLen_obj = {
 "ifOutQLen", 21, 0,
 
((void *)0)
    , &_ifOutErrors_obj
},
_ifSpecific_obj = {
 "ifSpecific", 22, 0,
 
((void *)0)
    , &_ifOutQLen_obj
},
_ifEntry_obj = {
 "ifEntry", 1, 0,
 &_ifSpecific_obj, 
                  ((void *)0)

},
_ifNumber_obj = {
 "ifNumber", 1, 0,
 
((void *)0)
    , 
      ((void *)0)

},
_ifTable_obj = {
 "ifTable", 2, 0,
 &_ifEntry_obj, &_ifNumber_obj
},
_sysDescr_obj = {
 "sysDescr", 1, 0,
 
((void *)0)
    , 
      ((void *)0)

},
_sysObjectID_obj = {
 "sysObjectID", 2, 0,
 
((void *)0)
    , &_sysDescr_obj
},
_sysUpTime_obj = {
 "sysUpTime", 3, 0,
 
((void *)0)
    , &_sysObjectID_obj
},
_sysContact_obj = {
 "sysContact", 4, 0,
 
((void *)0)
    , &_sysUpTime_obj
},
_sysName_obj = {
 "sysName", 5, 0,
 
((void *)0)
    , &_sysContact_obj
},
_sysLocation_obj = {
 "sysLocation", 6, 0,
 
((void *)0)
    , &_sysName_obj
},
_sysServices_obj = {
 "sysServices", 7, 0,
 
((void *)0)
    , &_sysLocation_obj
},
_system_obj = {
 "system", 1, 0,
 &_sysServices_obj, 
                   ((void *)0)

},
_interfaces_obj = {
 "interfaces", 2, 0,
 &_ifTable_obj, &_system_obj
},
_at_obj = {
 "at", 3, 0,
 &_atTable_obj, &_interfaces_obj
},
_ip_obj = {
 "ip", 4, 0,
 &_ipNetToMediaTable_obj, &_at_obj
},
_icmp_obj = {
 "icmp", 5, 0,
 &_icmpOutAddrMaskReps_obj, &_ip_obj
},
_tcp_obj = {
 "tcp", 6, 0,
 &_tcpOutRsts_obj, &_icmp_obj
},
_udp_obj = {
 "udp", 7, 0,
 &_udpTable_obj, &_tcp_obj
},
_egp_obj = {
 "egp", 8, 0,
 &_egpAs_obj, &_udp_obj
},
_transmission_obj = {
 "transmission", 10, 0,
 
((void *)0)
    , &_egp_obj
},
_snmp_obj = {
 "snmp", 11, 0,
 &_snmpEnableAuthTraps_obj, &_transmission_obj
},
_usmMIBCompliances_obj = {
 "usmMIBCompliances", 1, 0,
 
((void *)0)
    , 
      ((void *)0)

},
_usmMIBGroups_obj = {
 "usmMIBGroups", 2, 0,
 
((void *)0)
    , &_usmMIBCompliances_obj
},
_usmUserEngineID_obj = {
 "usmUserEngineID", 1, 0,
 
((void *)0)
    , 
      ((void *)0)

},
_usmUserName_obj = {
 "usmUserName", 2, 0,
 
((void *)0)
    , &_usmUserEngineID_obj
},
_usmUserSecurityName_obj = {
 "usmUserSecurityName", 3, 0,
 
((void *)0)
    , &_usmUserName_obj
},
_usmUserCloneFrom_obj = {
 "usmUserCloneFrom", 4, 0,
 
((void *)0)
    , &_usmUserSecurityName_obj
},
_usmUserAuthProtocol_obj = {
 "usmUserAuthProtocol", 5, 0,
 
((void *)0)
    , &_usmUserCloneFrom_obj
},
_usmUserAuthKeyChange_obj = {
 "usmUserAuthKeyChange", 6, 0,
 
((void *)0)
    , &_usmUserAuthProtocol_obj
},
_usmUserOwnAuthKeyChange_obj = {
 "usmUserOwnAuthKeyChange", 7, 0,
 
((void *)0)
    , &_usmUserAuthKeyChange_obj
},
_usmUserPrivProtocol_obj = {
 "usmUserPrivProtocol", 8, 0,
 
((void *)0)
    , &_usmUserOwnAuthKeyChange_obj
},
_usmUserPrivKeyChange_obj = {
 "usmUserPrivKeyChange", 9, 0,
 
((void *)0)
    , &_usmUserPrivProtocol_obj
},
_usmUserOwnPrivKeyChange_obj = {
 "usmUserOwnPrivKeyChange", 10, 0,
 
((void *)0)
    , &_usmUserPrivKeyChange_obj
},
_usmUserPublic_obj = {
 "usmUserPublic", 11, 0,
 
((void *)0)
    , &_usmUserOwnPrivKeyChange_obj
},
_usmUserStorageType_obj = {
 "usmUserStorageType", 12, 0,
 
((void *)0)
    , &_usmUserPublic_obj
},
_usmUserStatus_obj = {
 "usmUserStatus", 13, 0,
 
((void *)0)
    , &_usmUserStorageType_obj
},
_usmUserEntry_obj = {
 "usmUserEntry", 1, 0,
 &_usmUserStatus_obj, 
                     ((void *)0)

},
_usmUserSpinLock_obj = {
 "usmUserSpinLock", 1, 0,
 
((void *)0)
    , 
      ((void *)0)

},
_usmUserTable_obj = {
 "usmUserTable", 2, 0,
 &_usmUserEntry_obj, &_usmUserSpinLock_obj
},
_usmStatsUnsupportedSecLevels_obj = {
 "usmStatsUnsupportedSecLevels", 1, 0,
 
((void *)0)
    , 
      ((void *)0)

},
_usmStatsNotInTimeWindows_obj = {
 "usmStatsNotInTimeWindows", 2, 0,
 
((void *)0)
    , &_usmStatsUnsupportedSecLevels_obj
},
_usmStatsUnknownUserNames_obj = {
 "usmStatsUnknownUserNames", 3, 0,
 
((void *)0)
    , &_usmStatsNotInTimeWindows_obj
},
_usmStatsUnknownEngineIDs_obj = {
 "usmStatsUnknownEngineIDs", 4, 0,
 
((void *)0)
    , &_usmStatsUnknownUserNames_obj
},
_usmStatsWrongDigests_obj = {
 "usmStatsWrongDigests", 5, 0,
 
((void *)0)
    , &_usmStatsUnknownEngineIDs_obj
},
_usmStatsDecryptionErrors_obj = {
 "usmStatsDecryptionErrors", 6, 0,
 
((void *)0)
    , &_usmStatsWrongDigests_obj
},
_usmStats_obj = {
 "usmStats", 1, 0,
 &_usmStatsDecryptionErrors_obj, 
                                ((void *)0)

},
_usmUser_obj = {
 "usmUser", 2, 0,
 &_usmUserTable_obj, &_usmStats_obj
},
_usmMIBObjects_obj = {
 "usmMIBObjects", 1, 0,
 &_usmUser_obj, 
               ((void *)0)

},
_usmMIBConformance_obj = {
 "usmMIBConformance", 2, 0,
 &_usmMIBGroups_obj, &_usmMIBObjects_obj
},
_snmpMPDMIBCompliances_obj = {
 "snmpMPDMIBCompliances", 1, 0,
 
((void *)0)
    , 
      ((void *)0)

},
_snmpMPDMIBGroups_obj = {
 "snmpMPDMIBGroups", 2, 0,
 
((void *)0)
    , &_snmpMPDMIBCompliances_obj
},
_snmpUnknownSecurityModels_obj = {
 "snmpUnknownSecurityModels", 1, 0,
 
((void *)0)
    , 
      ((void *)0)

},
_snmpInvalidMsgs_obj = {
 "snmpInvalidMsgs", 2, 0,
 
((void *)0)
    , &_snmpUnknownSecurityModels_obj
},
_snmpUnknownPDUHandlers_obj = {
 "snmpUnknownPDUHandlers", 3, 0,
 
((void *)0)
    , &_snmpInvalidMsgs_obj
},
_snmpMPDStats_obj = {
 "snmpMPDStats", 1, 0,
 &_snmpUnknownPDUHandlers_obj, 
                              ((void *)0)

},
_snmpMPDAdmin_obj = {
 "snmpMPDAdmin", 1, 0,
 
((void *)0)
    , 
      ((void *)0)

},
_snmpMPDMIBObjects_obj = {
 "snmpMPDMIBObjects", 2, 0,
 &_snmpMPDStats_obj, &_snmpMPDAdmin_obj
},
_snmpMPDMIBConformance_obj = {
 "snmpMPDMIBConformance", 3, 0,
 &_snmpMPDMIBGroups_obj, &_snmpMPDMIBObjects_obj
},
_snmpEngineID_obj = {
 "snmpEngineID", 1, 0,
 
((void *)0)
    , 
      ((void *)0)

},
_snmpEngineBoots_obj = {
 "snmpEngineBoots", 2, 0,
 
((void *)0)
    , &_snmpEngineID_obj
},
_snmpEngineTime_obj = {
 "snmpEngineTime", 3, 0,
 
((void *)0)
    , &_snmpEngineBoots_obj
},
_snmpEngineMaxMessageSize_obj = {
 "snmpEngineMaxMessageSize", 4, 0,
 
((void *)0)
    , &_snmpEngineTime_obj
},
_snmpEngine_obj = {
 "snmpEngine", 1, 0,
 &_snmpEngineMaxMessageSize_obj, 
                                ((void *)0)

},
_snmpFrameworkAdmin_obj = {
 "snmpFrameworkAdmin", 1, 0,
 
((void *)0)
    , 
      ((void *)0)

},
_snmpFrameworkMIBObjects_obj = {
 "snmpFrameworkMIBObjects", 2, 0,
 &_snmpEngine_obj, &_snmpFrameworkAdmin_obj
},
_snmpFrameworkMIBConformance_obj = {
 "snmpFrameworkMIBConformance", 3, 0,
 
((void *)0)
    , &_snmpFrameworkMIBObjects_obj
},
_snmpFrameworkMIB_obj = {
 "snmpFrameworkMIB", 10, 0,
 &_snmpFrameworkMIBConformance_obj, 
                                   ((void *)0)

},
_snmpMPDMIB_obj = {
 "snmpMPDMIB", 11, 0,
 &_snmpMPDMIBConformance_obj, &_snmpFrameworkMIB_obj
},
_snmpUsmMIB_obj = {
 "snmpUsmMIB", 15, 0,
 &_usmMIBConformance_obj, &_snmpMPDMIB_obj
},
_snmpModules_obj = {
 "snmpModules", 3, 0,
 &_snmpUsmMIB_obj, 
                  ((void *)0)

},
_mib_obj = {
 "mib", 1, 0,
 &_snmp_obj, 
            ((void *)0)

},
_directory_obj = {
 "directory", 1, 0,
 
((void *)0)
    , 
      ((void *)0)

},
_mgmt_obj = {
 "mgmt", 2, 0,
 &_mib_obj, &_directory_obj
},
_experimental_obj = {
 "experimental", 3, 0,
 
((void *)0)
    , &_mgmt_obj
},
_private_obj = {
 "private", 4, 0,
 &_enterprises_obj, &_experimental_obj
},
_security_obj = {
 "security", 5, 0,
 
((void *)0)
    , &_private_obj
},
_snmpV2_obj = {
 "snmpV2", 6, 0,
 &_snmpModules_obj, &_security_obj
},
_internet_obj = {
 "internet", 1, 0,
 &_snmpV2_obj, 
              ((void *)0)

},
_dod_obj = {
 "dod", 6, 0,
 &_internet_obj, 
                ((void *)0)

},
_org_obj = {
 "org", 3, 0,
 &_dod_obj, 
           ((void *)0)

},
_iso_obj = {
 "iso", 1, 0,
 &_org_obj, 
           ((void *)0)

},
*mibroot = &_iso_obj;
static const uint8_t mib_oid[] = { (((1)*40) + (3)), 6, 1, 2, 1 };


static const uint8_t enterprises_oid[] = { (((1)*40) + (3)), 6, 1, 4, 1 };


static const uint8_t experimental_oid[] = { (((1)*40) + (3)), 6, 1, 3 };


static const uint8_t snmpModules_oid[] = { (((1)*40) + (3)), 6, 1, 6, 3 };




static const struct obj_abrev {
 const char *prefix;
 struct obj *node;
 const uint8_t *oid;
 size_t oid_len;
} obj_abrev_list[] = {


 { "", &_mib_obj, mib_oid, sizeof (mib_oid) },



 { "E:", &_enterprises_obj, enterprises_oid, sizeof (enterprises_oid) },



 { "X:", &_experimental_obj, experimental_oid, sizeof (experimental_oid) },



 { "S:", &_snmpModules_obj, snmpModules_oid, sizeof (snmpModules_oid) },

 { 0,0,0,0 }
};
struct be {
 uint32_t asnlen;
 union {
  const uint8_t *raw;
  int32_t integer;
  uint32_t uns;
  const u_char *str;
  uint64_t uns64;
 } data;
 u_short id;
 u_char form, class;
 u_char type;
};




static const char *SnmpVersion[] = {
 "SNMPv1",

 "SNMPv2c",

 "SNMPv2u",

 "SNMPv3"

};
static int
asn1_parse(netdissect_options *ndo,
           const u_char *p, u_int len, struct be *elem)
{
 u_char form, class, id={0};
 int i, hdr={0};

 elem->asnlen = 0;
 elem->type = 255;
 if (len < 1) {
  (*ndo->ndo_printf)(ndo, "[nothing to parse]");
  return -1;
 }
 if (!((((sizeof(*p)) > 0) || ((sizeof(*p)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*p)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*p) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*p))))) goto trunc;
 id = *p & 0x1f;





 form = (u_char)(*p & 0x20) >> 5;
 class = (u_char)(*p & 0xc0) >> 6;

 elem->form = form;
 elem->class = class;
 elem->id = id;
 p++; len--; hdr = 1;

 if (id == 0x1f) {
  id = 0;
  if (!((((sizeof(*p)) > 0) || ((sizeof(*p)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*p)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*p) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*p))))) goto trunc;
  while (*p & 0x80) {
   if (len < 1) {
    (*ndo->ndo_printf)(ndo, "[Xtagfield?]");
    return -1;
   }
   id = (id << 7) | (*p & ~0x80);
   len--;
   hdr++;
   p++;
   if (!((((sizeof(*p)) > 0) || ((sizeof(*p)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*p)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*p) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*p))))) goto trunc;
  }
  if (len < 1) {
   (*ndo->ndo_printf)(ndo, "[Xtagfield?]");
   return -1;
  }
  if (!((((sizeof(*p)) > 0) || ((sizeof(*p)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*p)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*p) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*p))))) goto trunc;
  elem->id = id = (id << 7) | *p;
  --len;
  ++hdr;
  ++p;
 }
 if (len < 1) {
  (*ndo->ndo_printf)(ndo, "[no asnlen]");
  return -1;
 }
 if (!((((sizeof(*p)) > 0) || ((sizeof(*p)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*p)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*p) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*p))))) goto trunc;
 elem->asnlen = *p;
 p++; len--; hdr++;
 if (elem->asnlen & 0x80) {
  uint32_t noct = elem->asnlen % 0x80;
  elem->asnlen = 0;
  if (len < noct) {
   (*ndo->ndo_printf)(ndo, "[asnlen? %d<%d]", len, noct);
   return -1;
  }
  if (!((((noct) > 0) || ((noct) == 0)) && ((uintptr_t)ndo->ndo_snapend - (noct) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*p) <= (uintptr_t)ndo->ndo_snapend - (noct)))) goto trunc;
  for (; noct-- > 0; len--, hdr++)
   elem->asnlen = (elem->asnlen << 8) | *p++;
 }
 if (len < elem->asnlen) {
  (*ndo->ndo_printf)(ndo, "[len%d<asnlen%u]", len, elem->asnlen);
  return -1;
 }
 if (form >= sizeof(Form)/sizeof(Form[0])) {
  (*ndo->ndo_printf)(ndo, "[form?%d]", form);
  return -1;
 }
 if (class >= sizeof(Class)/sizeof(Class[0])) {
  (*ndo->ndo_printf)(ndo, "[class?%c/%d]", *Form[form], class);
  return -1;
 }
 if ((int)id >= Class[class].numIDs) {
  (*ndo->ndo_printf)(ndo, "[id?%c/%s/%d]", *Form[form], Class[class].name, id);
  return -1;
 }
 if (!((((elem->asnlen) > 0) || ((elem->asnlen) == 0)) && ((uintptr_t)ndo->ndo_snapend - (elem->asnlen) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*p) <= (uintptr_t)ndo->ndo_snapend - (elem->asnlen)))) goto trunc;

 switch (form) {
 case 0:
  switch (class) {
  case 0:
   switch (id) {
   case 4:
    elem->type = 6;
    elem->data.str = p;
    break;

   case 2: {
    int32_t data={0};
    elem->type = 4;
    data = 0;

    if (elem->asnlen == 0) {
     (*ndo->ndo_printf)(ndo, "[asnlen=0]");
     return -1;
    }
    if (*p & 0x80)
     data = -1;
    for (i = elem->asnlen; i-- > 0; p++)
     data = (data << 8) | *p;
    elem->data.integer = data;
    break;
   }

   case 6:
    elem->type = 3;
    elem->data.raw = (const uint8_t *)p;
    break;

   case 5:
    elem->type = 1;
    elem->data.raw = 
                    ((void *)0)
                        ;
    break;

   default:
    elem->type = 2;
    elem->data.raw = (const uint8_t *)p;
    (*ndo->ndo_printf)(ndo, "[P/U/%s]", Class[class].Id[id]);
    break;
   }
   break;

  case 1:
   switch (id) {
   case 0:
    elem->type = 8;
    elem->data.raw = (const uint8_t *)p;
    break;

   case 1:
   case 2:
   case 3: {
    uint32_t data={0};
    elem->type = 5;
    data = 0;
    for (i = elem->asnlen; i-- > 0; p++)
     data = (data << 8) + *p;
    elem->data.uns = data;
    break;
   }

   case 6: {
    uint64_t data64={0};
           elem->type = 10;
    data64 = 0;
    for (i = elem->asnlen; i-- > 0; p++)
     data64 = (data64 << 8) + *p;
    elem->data.uns64 = data64;
    break;
   }

   default:
    elem->type = 2;
    elem->data.raw = (const uint8_t *)p;
    (*ndo->ndo_printf)(ndo, "[P/A/%s]", Class[class].Id[id])
                          ;
    break;
   }
   break;

  case 2:
   switch (id) {
   case 0:
    elem->type = 128;
    elem->data.raw = 
                    ((void *)0)
                        ;
    break;

   case 1:
    elem->type = 129;
    elem->data.raw = 
                    ((void *)0)
                        ;
    break;

   case 2:
    elem->type = 130;
    elem->data.raw = 
                    ((void *)0)
                        ;
    break;
   }
   break;

  default:
   (*ndo->ndo_printf)(ndo, "[P/%s/%s]", Class[class].name, Class[class].Id[id]);
   elem->type = 2;
   elem->data.raw = (const uint8_t *)p;
   break;
  }
  break;

 case 1:
  switch (class) {
  case 0:
   switch (id) {
   case 16:
    elem->type = 7;
    elem->data.raw = (const uint8_t *)p;
    break;

   default:
    elem->type = 2;
    elem->data.raw = (const uint8_t *)p;
    (*ndo->ndo_printf)(ndo, "C/U/%s", Class[class].Id[id]);
    break;
   }
   break;

  case 2:
   elem->type = 9;
   elem->data.raw = (const uint8_t *)p;
   break;

  default:
   elem->type = 2;
   elem->data.raw = (const uint8_t *)p;
   (*ndo->ndo_printf)(ndo, "C/%s/%s", Class[class].name, Class[class].Id[id]);
   break;
  }
  break;
 }
 p += elem->asnlen;
 len -= elem->asnlen;
 return elem->asnlen + hdr;

trunc:
 (*ndo->ndo_printf)(ndo, "%s", tstr);
 return -1;
}

static int
asn1_print_octets(netdissect_options *ndo, struct be *elem)
{
 const u_char *p = (const u_char *)elem->data.raw;
 uint32_t asnlen = elem->asnlen;
 uint32_t i={0};

 if (!((((asnlen) > 0) || ((asnlen) == 0)) && ((uintptr_t)ndo->ndo_snapend - (asnlen) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*p) <= (uintptr_t)ndo->ndo_snapend - (asnlen)))) goto trunc;
 for (i = asnlen; i-- > 0; p++)
  (*ndo->ndo_printf)(ndo, "_%.2x", *p);
 return 0;

trunc:
 (*ndo->ndo_printf)(ndo, "%s", tstr);
 return -1;
}

static int
asn1_print_string(netdissect_options *ndo, struct be *elem)
{
 int printable = 1, first = 1;
 const u_char *p={0};
 uint32_t asnlen = elem->asnlen;
 uint32_t i={0};

 p = elem->data.str;
 if (!((((asnlen) > 0) || ((asnlen) == 0)) && ((uintptr_t)ndo->ndo_snapend - (asnlen) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*p) <= (uintptr_t)ndo->ndo_snapend - (asnlen)))) goto trunc;
 for (i = asnlen; printable && i-- > 0; p++)
  printable = ((*p) >= 0x20 && (*p) <= 0x7E);
 p = elem->data.str;
 if (printable) {
  (*ndo->ndo_printf)(ndo, "\"");
  if (fn_printn(ndo, p, asnlen, ndo->ndo_snapend)) {
   (*ndo->ndo_printf)(ndo, "\"");
   goto trunc;
  }
  (*ndo->ndo_printf)(ndo, "\"");
 } else {
  for (i = asnlen; i-- > 0; p++) {
   (*ndo->ndo_printf)(ndo, first ? "%.2x" : "_%.2x", *p);
   first = 0;
  }
 }
 return 0;

trunc:
 (*ndo->ndo_printf)(ndo, "%s", tstr);
 return -1;
}






static int
asn1_print(netdissect_options *ndo,
           struct be *elem)
{
 const u_char *p={0};
 uint32_t asnlen = elem->asnlen;
 uint32_t i={0};

 switch (elem->type) {

 case 2:
  if (asn1_print_octets(ndo, elem) == -1)
   return -1;
  break;

 case 1:
  break;

 case 3: {
  int o = 0, first = -1;

  p = (const u_char *)elem->data.raw;
  i = asnlen;
  if (!ndo->ndo_nflag && asnlen > 2) {
   const struct obj_abrev *a = &obj_abrev_list[0];
   for (; a->node; a++) {
    if (i < a->oid_len)
     continue;
    if (!((((a->oid_len) > 0) || ((a->oid_len) == 0)) && ((uintptr_t)ndo->ndo_snapend - (a->oid_len) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*p) <= (uintptr_t)ndo->ndo_snapend - (a->oid_len))))
     continue;
    if (memcmp(a->oid, p, a->oid_len) == 0) {
     objp = a->node->child;
     i -= a->oid_len;
     p += a->oid_len;
     (*ndo->ndo_printf)(ndo, "%s", a->prefix);
     first = 1;
     break;
    }
   }
  }

  for (; i-- > 0; p++) {
   if (!((((sizeof(*p)) > 0) || ((sizeof(*p)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*p)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*p) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*p))))) goto trunc;
   o = (o << 7) + (*p & ~0x80);
   if (*p & 0x80)
           continue;






   if (first < 0) {
           int s={0};
    if (!ndo->ndo_nflag)
     objp = mibroot;
    first = 0;
    s = o / 40;
    if (s > 2) s = 2;
    { if (objp) { do { if ((s) == objp->oid) break; } while ((objp = objp->next) != 
   ((void *)0)
   ); } if (objp) { (*ndo->ndo_printf)(ndo, first?"%s":".%s", objp->desc); objp = objp->child; } else (*ndo->ndo_printf)(ndo, first?"%u":".%u", (s)); };
    o -= s * 40;
   }
   { if (objp) { do { if ((o) == objp->oid) break; } while ((objp = objp->next) != 
  ((void *)0)
  ); } if (objp) { (*ndo->ndo_printf)(ndo, first?"%s":".%s", objp->desc); objp = objp->child; } else (*ndo->ndo_printf)(ndo, first?"%u":".%u", (o)); };
   if (--first < 0)
    first = 0;
   o = 0;
  }
  break;
 }

 case 4:
  (*ndo->ndo_printf)(ndo, "%d", elem->data.integer);
  break;

 case 5:
  (*ndo->ndo_printf)(ndo, "%u", elem->data.uns);
  break;

 case 10:
  (*ndo->ndo_printf)(ndo, "%" 
 "ll" "u"
 , elem->data.uns64);
  break;

 case 6:
  if (asn1_print_string(ndo, elem) == -1)
   return -1;
  break;

 case 7:
  (*ndo->ndo_printf)(ndo, "Seq(%u)", elem->asnlen);
  break;

 case 8:
  if (asnlen != 4)
   (*ndo->ndo_printf)(ndo, "[inetaddr len!=%d]", 4);
  p = (const u_char *)elem->data.raw;
  if (!((((asnlen) > 0) || ((asnlen) == 0)) && ((uintptr_t)ndo->ndo_snapend - (asnlen) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*p) <= (uintptr_t)ndo->ndo_snapend - (asnlen)))) goto trunc;
  for (i = asnlen; i-- != 0; p++) {
   (*ndo->ndo_printf)(ndo, (i == asnlen-1) ? "%u" : ".%u", *p);
  }
  break;

 case 128:
 case 129:
 case 130:
  (*ndo->ndo_printf)(ndo, "[%s]", Class[4].Id[elem->id]);
  break;

 case 9:
  (*ndo->ndo_printf)(ndo, "%s(%u)", Class[2].Id[elem->id], elem->asnlen);
  break;

 case 255:
  (*ndo->ndo_printf)(ndo, "[BE_ANY!?]");
  break;

 default:
  (*ndo->ndo_printf)(ndo, "[be!?]");
  break;
 }
 return 0;

trunc:
 (*ndo->ndo_printf)(ndo, "%s", tstr);
 return -1;
}
static void
varbind_print(netdissect_options *ndo,
              u_short pduid, const u_char *np, u_int length)
{
 struct be elem={0};
 int count = 0, ind={0};



 int status={0};


 if ((count = asn1_parse(ndo, np, length, &elem)) < 0)
  return;
 if (elem.type != 7) {
  (*ndo->ndo_printf)(ndo, "[!SEQ of varbind]");
  asn1_print(ndo, &elem);
  return;
 }
 if ((u_int)count < length)
  (*ndo->ndo_printf)(ndo, "[%d extra after SEQ of varbind]", length - count);

 length = elem.asnlen;
 np = (const u_char *)elem.data.raw;

 for (ind = 1; length > 0; ind++) {
  const u_char *vbend={0};
  u_int vblength={0};

  (*ndo->ndo_printf)(ndo, " ");


  if ((count = asn1_parse(ndo, np, length, &elem)) < 0)
   return;
  if (elem.type != 7) {
   (*ndo->ndo_printf)(ndo, "[!varbind]");
   asn1_print(ndo, &elem);
   return;
  }
  vbend = np + count;
  vblength = length - count;

  length = elem.asnlen;
  np = (const u_char *)elem.data.raw;


  if ((count = asn1_parse(ndo, np, length, &elem)) < 0)
   return;
  if (elem.type != 3) {
   (*ndo->ndo_printf)(ndo, "[objName!=OID]");
   asn1_print(ndo, &elem);
   return;
  }



  status = asn1_print(ndo, &elem);

  if (status < 0)
   return;
  length -= count;
  np += count;

  if (pduid != 0 && pduid != 1
      && pduid != 5)
   (*ndo->ndo_printf)(ndo, "=");


  if ((count = asn1_parse(ndo, np, length, &elem)) < 0)
   return;
  if (pduid == 0 || pduid == 1
      || pduid == 5) {
   if (elem.type != 1) {
    (*ndo->ndo_printf)(ndo, "[objVal!=NULL]");
    if (asn1_print(ndo, &elem) < 0)
     return;
   }
  } else {
          if (elem.type != 1) {



    status = asn1_print(ndo, &elem);

   }
   if (status < 0)
    return;
  }
  length = vblength;
  np = vbend;
 }
}





static void
snmppdu_print(netdissect_options *ndo,
              u_short pduid, const u_char *np, u_int length)
{
 struct be elem={0};
 int count = 0, error_status={0};


 if ((count = asn1_parse(ndo, np, length, &elem)) < 0)
  return;
 if (elem.type != 4) {
  (*ndo->ndo_printf)(ndo, "[reqId!=INT]");
  asn1_print(ndo, &elem);
  return;
 }
 if (ndo->ndo_vflag)
  (*ndo->ndo_printf)(ndo, "R=%d ", elem.data.integer);
 length -= count;
 np += count;


 if ((count = asn1_parse(ndo, np, length, &elem)) < 0)
  return;
 if (elem.type != 4) {
  (*ndo->ndo_printf)(ndo, "[errorStatus!=INT]");
  asn1_print(ndo, &elem);
  return;
 }
 error_status = 0;
 if ((pduid == 0 || pduid == 1 || pduid == 3
     || pduid == 6 || pduid == 7 || pduid == 8)
     && elem.data.integer != 0) {
  char errbuf[20]={0};
  (*ndo->ndo_printf)(ndo, "[errorStatus(%s)!=0]", ( elem.data.integer >= 0 && (size_t)elem.data.integer < sizeof(ErrorStatus)/sizeof(ErrorStatus[0]) ? ErrorStatus[elem.data.integer] : (snprintf(errbuf, sizeof(errbuf), "err=%u", elem.data.integer), errbuf)))
                                          ;
 } else if (pduid == 5) {
  (*ndo->ndo_printf)(ndo, " N=%d", elem.data.integer);
 } else if (elem.data.integer != 0) {
  char errbuf[20]={0};
  (*ndo->ndo_printf)(ndo, " %s", ( elem.data.integer >= 0 && (size_t)elem.data.integer < sizeof(ErrorStatus)/sizeof(ErrorStatus[0]) ? ErrorStatus[elem.data.integer] : (snprintf(errbuf, sizeof(errbuf), "err=%u", elem.data.integer), errbuf)));
  error_status = elem.data.integer;
 }
 length -= count;
 np += count;


 if ((count = asn1_parse(ndo, np, length, &elem)) < 0)
  return;
 if (elem.type != 4) {
  (*ndo->ndo_printf)(ndo, "[errorIndex!=INT]");
  asn1_print(ndo, &elem);
  return;
 }
 if ((pduid == 0 || pduid == 1 || pduid == 3
     || pduid == 6 || pduid == 7 || pduid == 8)
     && elem.data.integer != 0)
  (*ndo->ndo_printf)(ndo, "[errorIndex(%d)!=0]", elem.data.integer);
 else if (pduid == 5)
  (*ndo->ndo_printf)(ndo, " M=%d", elem.data.integer);
 else if (elem.data.integer != 0) {
  if (!error_status)
   (*ndo->ndo_printf)(ndo, "[errorIndex(%d) w/o errorStatus]", elem.data.integer);
  else
   (*ndo->ndo_printf)(ndo, "@%d", elem.data.integer);
 } else if (error_status) {
  (*ndo->ndo_printf)(ndo, "[errorIndex==0]");
 }
 length -= count;
 np += count;

 varbind_print(ndo, pduid, np, length);
 return;
}




static void
trappdu_print(netdissect_options *ndo,
              const u_char *np, u_int length)
{
 struct be elem={0};
 int count = 0, generic={0};

 (*ndo->ndo_printf)(ndo, " ");


 if ((count = asn1_parse(ndo, np, length, &elem)) < 0)
  return;
 if (elem.type != 3) {
  (*ndo->ndo_printf)(ndo, "[enterprise!=OID]");
  asn1_print(ndo, &elem);
  return;
 }
 if (asn1_print(ndo, &elem) < 0)
  return;
 length -= count;
 np += count;

 (*ndo->ndo_printf)(ndo, " ");


 if ((count = asn1_parse(ndo, np, length, &elem)) < 0)
  return;
 if (elem.type != 8) {
  (*ndo->ndo_printf)(ndo, "[agent-addr!=INETADDR]");
  asn1_print(ndo, &elem);
  return;
 }
 if (asn1_print(ndo, &elem) < 0)
  return;
 length -= count;
 np += count;


 if ((count = asn1_parse(ndo, np, length, &elem)) < 0)
  return;
 if (elem.type != 4) {
  (*ndo->ndo_printf)(ndo, "[generic-trap!=INT]");
  asn1_print(ndo, &elem);
  return;
 }
 generic = elem.data.integer;
 {
  char buf[20]={0};
  (*ndo->ndo_printf)(ndo, " %s", ( generic >= 0 && (size_t)generic < sizeof(GenericTrap)/sizeof(GenericTrap[0]) ? GenericTrap[generic] : (snprintf(buf, sizeof(buf), "gt=%d", generic), buf)));
 }
 length -= count;
 np += count;


 if ((count = asn1_parse(ndo, np, length, &elem)) < 0)
  return;
 if (elem.type != 4) {
  (*ndo->ndo_printf)(ndo, "[specific-trap!=INT]");
  asn1_print(ndo, &elem);
  return;
 }
 if (generic != 6) {
  if (elem.data.integer != 0)
   (*ndo->ndo_printf)(ndo, "[specific-trap(%d)!=0]", elem.data.integer);
 } else
  (*ndo->ndo_printf)(ndo, " s=%d", elem.data.integer);
 length -= count;
 np += count;

 (*ndo->ndo_printf)(ndo, " ");


 if ((count = asn1_parse(ndo, np, length, &elem)) < 0)
  return;
 if (elem.type != 5) {
  (*ndo->ndo_printf)(ndo, "[time-stamp!=TIMETICKS]");
  asn1_print(ndo, &elem);
  return;
 }
 if (asn1_print(ndo, &elem) < 0)
  return;
 length -= count;
 np += count;

 varbind_print(ndo, 4, np, length);
 return;
}




static void
pdu_print(netdissect_options *ndo,
          const u_char *np, u_int length, int version)
{
 struct be pdu={0};
 int count = 0;


 if ((count = asn1_parse(ndo, np, length, &pdu)) < 0)
  return;
 if (pdu.type != 9) {
  (*ndo->ndo_printf)(ndo, "[no PDU]");
  return;
 }
 if ((u_int)count < length)
  (*ndo->ndo_printf)(ndo, "[%d extra after PDU]", length - count);
 if (ndo->ndo_vflag) {
  (*ndo->ndo_printf)(ndo, "{ ");
 }
 if (asn1_print(ndo, &pdu) < 0)
  return;
 (*ndo->ndo_printf)(ndo, " ");

 length = pdu.asnlen;
 np = (const u_char *)pdu.data.raw;

 if (version == 0 &&
     (pdu.id == 5 || pdu.id == 6 ||
      pdu.id == 7 || pdu.id == 8)) {
         (*ndo->ndo_printf)(ndo, "[v2 PDU in v1 message]");
  return;
 }

 if (version == 1 && pdu.id == 4) {
  (*ndo->ndo_printf)(ndo, "[v1 PDU in v2 message]");
  return;
 }

 switch (pdu.id) {
 case 4:
  trappdu_print(ndo, np, length);
  break;
 case 0:
 case 1:
 case 2:
 case 3:
 case 5:
 case 6:
 case 7:
 case 8:
  snmppdu_print(ndo, pdu.id, np, length);
  break;
 }

 if (ndo->ndo_vflag) {
  (*ndo->ndo_printf)(ndo, " } ");
 }
}




static void
scopedpdu_print(netdissect_options *ndo,
                const u_char *np, u_int length, int version)
{
 struct be elem={0};
 int count = 0;


 if ((count = asn1_parse(ndo, np, length, &elem)) < 0)
  return;
 if (elem.type != 7) {
  (*ndo->ndo_printf)(ndo, "[!scoped PDU]");
  asn1_print(ndo, &elem);
  return;
 }
 length = elem.asnlen;
 np = (const u_char *)elem.data.raw;


 if ((count = asn1_parse(ndo, np, length, &elem)) < 0)
  return;
 if (elem.type != 6) {
  (*ndo->ndo_printf)(ndo, "[contextEngineID!=STR]");
  asn1_print(ndo, &elem);
  return;
 }
 length -= count;
 np += count;

 (*ndo->ndo_printf)(ndo, "E=");
 if (asn1_print_octets(ndo, &elem) == -1)
  return;
 (*ndo->ndo_printf)(ndo, " ");


 if ((count = asn1_parse(ndo, np, length, &elem)) < 0)
  return;
 if (elem.type != 6) {
  (*ndo->ndo_printf)(ndo, "[contextName!=STR]");
  asn1_print(ndo, &elem);
  return;
 }
 length -= count;
 np += count;

 (*ndo->ndo_printf)(ndo, "C=");
 if (asn1_print_string(ndo, &elem) == -1)
  return;
 (*ndo->ndo_printf)(ndo, " ");

 pdu_print(ndo, np, length, version);
}




static void
community_print(netdissect_options *ndo,
                const u_char *np, u_int length, int version)
{
 struct be elem={0};
 int count = 0;


 if ((count = asn1_parse(ndo, np, length, &elem)) < 0)
  return;
 if (elem.type != 6) {
  (*ndo->ndo_printf)(ndo, "[comm!=STR]");
  asn1_print(ndo, &elem);
  return;
 }

 if (!(elem.asnlen == sizeof("public") - 1 &&
     strncmp((const char *)elem.data.str, "public",
             sizeof("public") - 1) == 0)) {

  (*ndo->ndo_printf)(ndo, "C=");
  if (asn1_print_string(ndo, &elem) == -1)
   return;
  (*ndo->ndo_printf)(ndo, " ");
 }
 length -= count;
 np += count;

 pdu_print(ndo, np, length, version);
}




static void
usm_print(netdissect_options *ndo,
          const u_char *np, u_int length)
{
        struct be elem={0};
 int count = 0;


 if ((count = asn1_parse(ndo, np, length, &elem)) < 0)
  return;
 if (elem.type != 7) {
  (*ndo->ndo_printf)(ndo, "[!usm]");
  asn1_print(ndo, &elem);
  return;
 }
 length = elem.asnlen;
 np = (const u_char *)elem.data.raw;


 if ((count = asn1_parse(ndo, np, length, &elem)) < 0)
  return;
 if (elem.type != 6) {
  (*ndo->ndo_printf)(ndo, "[msgAuthoritativeEngineID!=STR]");
  asn1_print(ndo, &elem);
  return;
 }
 length -= count;
 np += count;


 if ((count = asn1_parse(ndo, np, length, &elem)) < 0)
  return;
 if (elem.type != 4) {
  (*ndo->ndo_printf)(ndo, "[msgAuthoritativeEngineBoots!=INT]");
  asn1_print(ndo, &elem);
  return;
 }
 if (ndo->ndo_vflag)
  (*ndo->ndo_printf)(ndo, "B=%d ", elem.data.integer);
 length -= count;
 np += count;


 if ((count = asn1_parse(ndo, np, length, &elem)) < 0)
  return;
 if (elem.type != 4) {
  (*ndo->ndo_printf)(ndo, "[msgAuthoritativeEngineTime!=INT]");
  asn1_print(ndo, &elem);
  return;
 }
 if (ndo->ndo_vflag)
  (*ndo->ndo_printf)(ndo, "T=%d ", elem.data.integer);
 length -= count;
 np += count;


 if ((count = asn1_parse(ndo, np, length, &elem)) < 0)
  return;
 if (elem.type != 6) {
  (*ndo->ndo_printf)(ndo, "[msgUserName!=STR]");
  asn1_print(ndo, &elem);
  return;
 }
 length -= count;
        np += count;

 (*ndo->ndo_printf)(ndo, "U=");
 if (asn1_print_string(ndo, &elem) == -1)
  return;
 (*ndo->ndo_printf)(ndo, " ");


 if ((count = asn1_parse(ndo, np, length, &elem)) < 0)
  return;
 if (elem.type != 6) {
  (*ndo->ndo_printf)(ndo, "[msgAuthenticationParameters!=STR]");
  asn1_print(ndo, &elem);
  return;
 }
 length -= count;
        np += count;


 if ((count = asn1_parse(ndo, np, length, &elem)) < 0)
  return;
 if (elem.type != 6) {
  (*ndo->ndo_printf)(ndo, "[msgPrivacyParameters!=STR]");
  asn1_print(ndo, &elem);
  return;
 }
 length -= count;
        np += count;

 if ((u_int)count < length)
  (*ndo->ndo_printf)(ndo, "[%d extra after usm SEQ]", length - count);
}




static void
v3msg_print(netdissect_options *ndo,
            const u_char *np, u_int length)
{
 struct be elem={0};
 int count = 0;
 u_char flags={0};
 int model={0};
 const u_char *xnp = np;
 int xlength = length;


 if ((count = asn1_parse(ndo, np, length, &elem)) < 0)
  return;
 if (elem.type != 7) {
  (*ndo->ndo_printf)(ndo, "[!message]");
  asn1_print(ndo, &elem);
  return;
 }
 length = elem.asnlen;
 np = (const u_char *)elem.data.raw;

 if (ndo->ndo_vflag) {
  (*ndo->ndo_printf)(ndo, "{ ");
 }


 if ((count = asn1_parse(ndo, np, length, &elem)) < 0)
  return;
 if (elem.type != 4) {
  (*ndo->ndo_printf)(ndo, "[msgID!=INT]");
  asn1_print(ndo, &elem);
  return;
 }
 length -= count;
 np += count;


 if ((count = asn1_parse(ndo, np, length, &elem)) < 0)
  return;
 if (elem.type != 4) {
  (*ndo->ndo_printf)(ndo, "[msgMaxSize!=INT]");
  asn1_print(ndo, &elem);
  return;
 }
 length -= count;
 np += count;


 if ((count = asn1_parse(ndo, np, length, &elem)) < 0)
  return;
 if (elem.type != 6) {
  (*ndo->ndo_printf)(ndo, "[msgFlags!=STR]");
  asn1_print(ndo, &elem);
  return;
 }
 if (elem.asnlen != 1) {
  (*ndo->ndo_printf)(ndo, "[msgFlags size %d]", elem.asnlen);
  return;
 }
 flags = elem.data.str[0];
 if (flags != 0x00 && flags != 0x01 && flags != 0x03
     && flags != 0x04 && flags != 0x05 && flags != 0x07) {
  (*ndo->ndo_printf)(ndo, "[msgFlags=0x%02X]", flags);
  return;
 }
 length -= count;
 np += count;

 (*ndo->ndo_printf)(ndo, "F=%s%s%s ", flags & 0x01 ? "a" : "", flags & 0x02 ? "p" : "", flags & 0x04 ? "r" : "")


                                    ;


 if ((count = asn1_parse(ndo, np, length, &elem)) < 0)
  return;
 if (elem.type != 4) {
  (*ndo->ndo_printf)(ndo, "[msgSecurityModel!=INT]");
  asn1_print(ndo, &elem);
  return;
 }
 model = elem.data.integer;
 length -= count;
 np += count;

 if ((u_int)count < length)
  (*ndo->ndo_printf)(ndo, "[%d extra after message SEQ]", length - count);

 if (ndo->ndo_vflag) {
  (*ndo->ndo_printf)(ndo, "} ");
 }

 if (model == 3) {
     if (ndo->ndo_vflag) {
  (*ndo->ndo_printf)(ndo, "{ USM ");
     }
 } else {
     (*ndo->ndo_printf)(ndo, "[security model %d]", model);
            return;
 }

 np = xnp + (np - xnp);
 length = xlength - (np - xnp);


 if ((count = asn1_parse(ndo, np, length, &elem)) < 0)
  return;
 if (elem.type != 6) {
  (*ndo->ndo_printf)(ndo, "[msgSecurityParameters!=STR]");
  asn1_print(ndo, &elem);
  return;
 }
 length -= count;
 np += count;

 if (model == 3) {
     usm_print(ndo, elem.data.str, elem.asnlen);
     if (ndo->ndo_vflag) {
  (*ndo->ndo_printf)(ndo, "} ");
     }
 }

 if (ndo->ndo_vflag) {
     (*ndo->ndo_printf)(ndo, "{ ScopedPDU ");
 }

 scopedpdu_print(ndo, np, length, 3);

 if (ndo->ndo_vflag) {
  (*ndo->ndo_printf)(ndo, "} ");
 }
}




void
snmp_print(netdissect_options *ndo,
           const u_char *np, u_int length)
{
 struct be elem={0};
 int count = 0;
 int version = 0;

 (*ndo->ndo_printf)(ndo, " ");


 if ((count = asn1_parse(ndo, np, length, &elem)) < 0)
  return;
 if (elem.type != 7) {
  (*ndo->ndo_printf)(ndo, "[!init SEQ]");
  asn1_print(ndo, &elem);
  return;
 }
 if ((u_int)count < length)
  (*ndo->ndo_printf)(ndo, "[%d extra after iSEQ]", length - count);

 length = elem.asnlen;
 np = (const u_char *)elem.data.raw;


 if ((count = asn1_parse(ndo, np, length, &elem)) < 0)
  return;
 if (elem.type != 4) {
  (*ndo->ndo_printf)(ndo, "[version!=INT]");
  asn1_print(ndo, &elem);
  return;
 }

 switch (elem.data.integer) {
 case 0:
 case 1:
 case 3:
  if (ndo->ndo_vflag)
   (*ndo->ndo_printf)(ndo, "{ %s ", SnmpVersion[elem.data.integer]);
  break;
 default:
         (*ndo->ndo_printf)(ndo, "SNMP [version = %d]", elem.data.integer);
  return;
 }
 version = elem.data.integer;
 length -= count;
 np += count;

 switch (version) {
 case 0:
        case 1:
  community_print(ndo, np, length, version);
  break;
 case 3:
  v3msg_print(ndo, np, length);
  break;
 default:
  (*ndo->ndo_printf)(ndo, "[version = %d]", elem.data.integer);
  break;
 }

 if (ndo->ndo_vflag) {
  (*ndo->ndo_printf)(ndo, "} ");
 }
}
