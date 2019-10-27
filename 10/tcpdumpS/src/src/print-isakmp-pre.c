











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
             "rorq  $16, %0\n\t"
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



extern const struct tok ipproto_values[];
extern const char *netdb_protoname (const nd_uint8_t);



typedef u_char cookie_t[8];
typedef u_char msgid_t[4];
struct isakmp {
 cookie_t i_ck;
 cookie_t r_ck;
 uint8_t np;
 uint8_t vers;




 uint8_t etype;
 uint8_t flags;
 msgid_t msgid;
 uint32_t len;
};
struct isakmp_gen {
 uint8_t np;
 uint8_t critical;
 uint16_t len;
};
struct isakmp_data {
 uint16_t type;
 uint16_t lorv;


};
struct ikev1_pl_sa {
 struct isakmp_gen h;
 uint32_t doi;
 uint32_t sit;
};
struct ikev1_pl_p {
 struct isakmp_gen h;
 uint8_t p_no;
 uint8_t prot_id;
 uint8_t spi_size;
 uint8_t num_t;

};
struct ikev1_pl_t {
 struct isakmp_gen h;
 uint8_t t_no;
 uint8_t t_id;
 uint16_t reserved;

};


struct ikev1_pl_ke {
 struct isakmp_gen h;

};



struct ikev1_pl_id {
 struct isakmp_gen h;
 union {
  uint8_t id_type;
  uint32_t doi_data;
 } d;

};


struct ikev1_pl_cert {
 struct isakmp_gen h;
 uint8_t encode;
 char cert;





};


struct ikev1_pl_cr {
 struct isakmp_gen h;
 uint8_t num_cert;
};



struct ikev1_pl_hash {
 struct isakmp_gen h;

};



struct ikev1_pl_sig {
 struct isakmp_gen h;

};



struct ikev1_pl_nonce {
 struct isakmp_gen h;

};


struct ikev1_pl_n {
 struct isakmp_gen h;
 uint32_t doi;
 uint8_t prot_id;
 uint8_t spi_size;
 uint16_t type;


};
struct ikev1_pl_d {
 struct isakmp_gen h;
 uint32_t doi;
 uint8_t prot_id;
 uint8_t spi_size;
 uint16_t num_spi;

};

struct ikev1_ph1tab {
 struct ikev1_ph1 *head;
 struct ikev1_ph1 *tail;
 int len;
};

struct isakmp_ph2tab {
 struct ikev1_ph2 *head;
 struct ikev1_ph2 *tail;
 int len;
};





struct ikev2_p {
 struct isakmp_gen h;
 uint8_t p_no;
 uint8_t prot_id;
 uint8_t spi_size;
 uint8_t num_t;
};


struct ikev2_t {
 struct isakmp_gen h;
 uint8_t t_type;
 uint8_t res2;
 uint16_t t_id;
};

enum ikev2_t_type {
 IV2_T_ENCR = 1,
 IV2_T_PRF = 2,
 IV2_T_INTEG= 3,
 IV2_T_DH = 4,
 IV2_T_ESN = 5
};


struct ikev2_ke {
 struct isakmp_gen h;
 uint16_t ke_group;
 uint16_t ke_res1;

};



enum ikev2_id_type {
 ID_IPV4_ADDR=1,
 ID_FQDN=2,
 ID_RFC822_ADDR=3,
 ID_IPV6_ADDR=5,
 ID_DER_ASN1_DN=9,
 ID_DER_ASN1_GN=10,
 ID_KEY_ID=11
};
struct ikev2_id {
 struct isakmp_gen h;
 uint8_t type;
 uint8_t res1;
 uint16_t res2;


};


struct ikev2_n {
 struct isakmp_gen h;
 uint8_t prot_id;
 uint8_t spi_size;
 uint16_t type;
};

enum ikev2_n_type {
 IV2_NOTIFY_UNSUPPORTED_CRITICAL_PAYLOAD = 1,
 IV2_NOTIFY_INVALID_IKE_SPI = 4,
 IV2_NOTIFY_INVALID_MAJOR_VERSION = 5,
 IV2_NOTIFY_INVALID_SYNTAX = 7,
 IV2_NOTIFY_INVALID_MESSAGE_ID = 9,
 IV2_NOTIFY_INVALID_SPI =11,
 IV2_NOTIFY_NO_PROPOSAL_CHOSEN =14,
 IV2_NOTIFY_INVALID_KE_PAYLOAD =17,
 IV2_NOTIFY_AUTHENTICATION_FAILED =24,
 IV2_NOTIFY_SINGLE_PAIR_REQUIRED =34,
 IV2_NOTIFY_NO_ADDITIONAL_SAS =35,
 IV2_NOTIFY_INTERNAL_ADDRESS_FAILURE =36,
 IV2_NOTIFY_FAILED_CP_REQUIRED =37,
 IV2_NOTIFY_INVALID_SELECTORS =39,
 IV2_NOTIFY_INITIAL_CONTACT =16384,
 IV2_NOTIFY_SET_WINDOW_SIZE =16385,
 IV2_NOTIFY_ADDITIONAL_TS_POSSIBLE =16386,
 IV2_NOTIFY_IPCOMP_SUPPORTED =16387,
 IV2_NOTIFY_NAT_DETECTION_SOURCE_IP =16388,
 IV2_NOTIFY_NAT_DETECTION_DESTINATION_IP =16389,
 IV2_NOTIFY_COOKIE =16390,
 IV2_NOTIFY_USE_TRANSPORT_MODE =16391,
 IV2_NOTIFY_HTTP_CERT_LOOKUP_SUPPORTED =16392,
 IV2_NOTIFY_REKEY_SA =16393,
 IV2_NOTIFY_ESP_TFC_PADDING_NOT_SUPPORTED =16394,
 IV2_NOTIFY_NON_FIRST_FRAGMENTS_ALSO =16395
};

struct notify_messages {
 uint16_t type;
 char *msg;
};


struct ikev2_auth {
 struct isakmp_gen h;
 uint8_t auth_method;
 uint8_t reserved[3];

};

enum ikev2_auth_type {
 IV2_RSA_SIG = 1,
 IV2_SHARED = 2,
 IV2_DSS_SIG = 3
};
struct ipsecdoi_sa {
 struct isakmp_gen h;
 uint32_t doi;
 uint32_t sit;
};

struct ipsecdoi_secrecy_h {
 uint16_t len;
 uint16_t reserved;
};


struct ipsecdoi_id {
 struct isakmp_gen h;
 uint8_t type;
 uint8_t proto_id;
 uint16_t port;

};
static const u_char *ikev1_sa_print( netdissect_options *ndo, u_char tpay, const struct isakmp_gen *ext, u_int item_len, const u_char *end_pointer, uint32_t phase, uint32_t doi0, uint32_t proto0, int depth);
static const u_char *ikev1_p_print( netdissect_options *ndo, u_char tpay, const struct isakmp_gen *ext, u_int item_len, const u_char *end_pointer, uint32_t phase, uint32_t doi0, uint32_t proto0, int depth);
static const u_char *ikev1_t_print( netdissect_options *ndo, u_char tpay, const struct isakmp_gen *ext, u_int item_len, const u_char *end_pointer, uint32_t phase, uint32_t doi0, uint32_t proto0, int depth);
static const u_char *ikev1_ke_print( netdissect_options *ndo, u_char tpay, const struct isakmp_gen *ext, u_int item_len, const u_char *end_pointer, uint32_t phase, uint32_t doi0, uint32_t proto0, int depth);
static const u_char *ikev1_id_print( netdissect_options *ndo, u_char tpay, const struct isakmp_gen *ext, u_int item_len, const u_char *end_pointer, uint32_t phase, uint32_t doi0, uint32_t proto0, int depth);
static const u_char *ikev1_cert_print( netdissect_options *ndo, u_char tpay, const struct isakmp_gen *ext, u_int item_len, const u_char *end_pointer, uint32_t phase, uint32_t doi0, uint32_t proto0, int depth);
static const u_char *ikev1_cr_print( netdissect_options *ndo, u_char tpay, const struct isakmp_gen *ext, u_int item_len, const u_char *end_pointer, uint32_t phase, uint32_t doi0, uint32_t proto0, int depth);
static const u_char *ikev1_sig_print( netdissect_options *ndo, u_char tpay, const struct isakmp_gen *ext, u_int item_len, const u_char *end_pointer, uint32_t phase, uint32_t doi0, uint32_t proto0, int depth);
static const u_char *ikev1_hash_print( netdissect_options *ndo, u_char tpay, const struct isakmp_gen *ext, u_int item_len, const u_char *end_pointer, uint32_t phase, uint32_t doi0, uint32_t proto0, int depth);
static const u_char *ikev1_nonce_print( netdissect_options *ndo, u_char tpay, const struct isakmp_gen *ext, u_int item_len, const u_char *end_pointer, uint32_t phase, uint32_t doi0, uint32_t proto0, int depth);
static const u_char *ikev1_n_print( netdissect_options *ndo, u_char tpay, const struct isakmp_gen *ext, u_int item_len, const u_char *end_pointer, uint32_t phase, uint32_t doi0, uint32_t proto0, int depth);
static const u_char *ikev1_d_print( netdissect_options *ndo, u_char tpay, const struct isakmp_gen *ext, u_int item_len, const u_char *end_pointer, uint32_t phase, uint32_t doi0, uint32_t proto0, int depth);
static const u_char *ikev1_vid_print( netdissect_options *ndo, u_char tpay, const struct isakmp_gen *ext, u_int item_len, const u_char *end_pointer, uint32_t phase, uint32_t doi0, uint32_t proto0, int depth);

static const u_char *ikev2_sa_print( netdissect_options *ndo, u_char tpay, const struct isakmp_gen *ext, u_int item_len, const u_char *end_pointer, uint32_t phase, uint32_t doi0, uint32_t proto0, int depth);
static const u_char *ikev2_ke_print( netdissect_options *ndo, u_char tpay, const struct isakmp_gen *ext, u_int item_len, const u_char *end_pointer, uint32_t phase, uint32_t doi0, uint32_t proto0, int depth);
static const u_char *ikev2_ID_print( netdissect_options *ndo, u_char tpay, const struct isakmp_gen *ext, u_int item_len, const u_char *end_pointer, uint32_t phase, uint32_t doi0, uint32_t proto0, int depth);
static const u_char *ikev2_cert_print( netdissect_options *ndo, u_char tpay, const struct isakmp_gen *ext, u_int item_len, const u_char *end_pointer, uint32_t phase, uint32_t doi0, uint32_t proto0, int depth);
static const u_char *ikev2_cr_print( netdissect_options *ndo, u_char tpay, const struct isakmp_gen *ext, u_int item_len, const u_char *end_pointer, uint32_t phase, uint32_t doi0, uint32_t proto0, int depth);
static const u_char *ikev2_auth_print( netdissect_options *ndo, u_char tpay, const struct isakmp_gen *ext, u_int item_len, const u_char *end_pointer, uint32_t phase, uint32_t doi0, uint32_t proto0, int depth);
static const u_char *ikev2_nonce_print( netdissect_options *ndo, u_char tpay, const struct isakmp_gen *ext, u_int item_len, const u_char *end_pointer, uint32_t phase, uint32_t doi0, uint32_t proto0, int depth);
static const u_char *ikev2_n_print( netdissect_options *ndo, u_char tpay, const struct isakmp_gen *ext, u_int item_len, const u_char *end_pointer, uint32_t phase, uint32_t doi0, uint32_t proto0, int depth);
static const u_char *ikev2_d_print( netdissect_options *ndo, u_char tpay, const struct isakmp_gen *ext, u_int item_len, const u_char *end_pointer, uint32_t phase, uint32_t doi0, uint32_t proto0, int depth);
static const u_char *ikev2_vid_print( netdissect_options *ndo, u_char tpay, const struct isakmp_gen *ext, u_int item_len, const u_char *end_pointer, uint32_t phase, uint32_t doi0, uint32_t proto0, int depth);
static const u_char *ikev2_TS_print( netdissect_options *ndo, u_char tpay, const struct isakmp_gen *ext, u_int item_len, const u_char *end_pointer, uint32_t phase, uint32_t doi0, uint32_t proto0, int depth);
static const u_char *ikev2_cp_print( netdissect_options *ndo, u_char tpay, const struct isakmp_gen *ext, u_int item_len, const u_char *end_pointer, uint32_t phase, uint32_t doi0, uint32_t proto0, int depth);
static const u_char *ikev2_eap_print( netdissect_options *ndo, u_char tpay, const struct isakmp_gen *ext, u_int item_len, const u_char *end_pointer, uint32_t phase, uint32_t doi0, uint32_t proto0, int depth);

static const u_char *ikev2_e_print(netdissect_options *ndo,
       struct isakmp *base,
       u_char tpay,
       const struct isakmp_gen *ext,
       u_int item_len,
       const u_char *end_pointer,
       uint32_t phase,
       uint32_t doi0,
       uint32_t proto0, int depth);


static const u_char *ike_sub0_print(netdissect_options *ndo,u_char, const struct isakmp_gen *,
 const u_char *, uint32_t, uint32_t, uint32_t, int);
static const u_char *ikev1_sub_print(netdissect_options *ndo,u_char, const struct isakmp_gen *,
 const u_char *, uint32_t, uint32_t, uint32_t, int);

static const u_char *ikev2_sub_print(netdissect_options *ndo,
         struct isakmp *base,
         u_char np, const struct isakmp_gen *ext,
         const u_char *ep, uint32_t phase,
         uint32_t doi, uint32_t proto,
         int depth);


static char *numstr(int);

static void
ikev1_print(netdissect_options *ndo,
     const u_char *bp, u_int length,
     const u_char *bp2, struct isakmp *base);


static int ninitiator = 0;
union inaddr_u {
 struct in_addr in4;
 struct in6_addr in6;
};
static struct {
 cookie_t initiator;
 u_int version;
 union inaddr_u iaddr;
 union inaddr_u raddr;
} cookiecache[20];


static const char *protoidstr[] = {
 
((void *)0)
    , "isakmp", "ipsec-ah", "ipsec-esp", "ipcomp",
};


static const char *npstr[] = {
 "none", "sa", "p", "t", "ke", "id", "cert", "cr", "hash",
 "sig", "nonce", "n", "d", "vid",
 "pay14", "pay15", "pay16", "pay17", "pay18",
 "pay19", "pay20", "pay21", "pay22", "pay23",
 "pay24", "pay25", "pay26", "pay27", "pay28",
 "pay29", "pay30", "pay31", "pay32",
 "v2sa", "v2ke", "v2IDi", "v2IDr", "v2cert",
 "v2cr", "v2auth","v2nonce", "v2n", "v2d",
 "v2vid", "v2TSi", "v2TSr", "v2e", "v2cp",
 "v2eap",

};


static const u_char *(*npfunc[])(netdissect_options *ndo, u_char tpay,
     const struct isakmp_gen *ext,
     u_int item_len,
     const u_char *end_pointer,
     uint32_t phase,
     uint32_t doi0,
     uint32_t proto0, int depth) = {
 
((void *)0)
    ,
 ikev1_sa_print,
 ikev1_p_print,
 ikev1_t_print,
 ikev1_ke_print,
 ikev1_id_print,
 ikev1_cert_print,
 ikev1_cr_print,
 ikev1_hash_print,
 ikev1_sig_print,
 ikev1_nonce_print,
 ikev1_n_print,
 ikev1_d_print,
 ikev1_vid_print,
 
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
 ikev2_sa_print,
 ikev2_ke_print,
 ikev2_ID_print,
 ikev2_ID_print,
 ikev2_cert_print,
 ikev2_cr_print,
 ikev2_auth_print,
 ikev2_nonce_print,
 ikev2_n_print,
 ikev2_d_print,
 ikev2_vid_print,
 ikev2_TS_print,
 ikev2_TS_print,
 
((void *)0)
    ,
 ikev2_cp_print,
 ikev2_eap_print,
};


static const char *etypestr[] = {

 "none", "base", "ident", "auth", "agg", "inf", 
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
 "oakley-quick", "oakley-newgroup",

 "ikev2_init", "ikev2_auth", "child_sa", "inf2"
};
static int
iszero(const u_char *p, size_t l)
{
 while (l--) {
  if (*p++)
   return 0;
 }
 return 1;
}


static int
cookie_find(cookie_t *in)
{
 int i={0};

 for (i = 0; i < 20; i++) {
  if (memcmp(in, &cookiecache[i].initiator, sizeof(*in)) == 0)
   return i;
 }

 return -1;
}


static void
cookie_record(cookie_t *in, const u_char *bp2)
{
 int i={0};
 const struct ip *ip={0};
 const struct ip6_hdr *ip6={0};

 i = cookie_find(in);
 if (0 <= i) {
  ninitiator = (i + 1) % 20;
  return;
 }

 ip = (const struct ip *)bp2;
 switch ((((ip)->ip_vhl & 0xf0) >> 4)) {
 case 4:
  cookiecache[ninitiator].version = 4;
  memcpy((&cookiecache[ninitiator].iaddr.in4), (&ip->ip_src), (sizeof(struct in_addr)));
  memcpy((&cookiecache[ninitiator].raddr.in4), (&ip->ip_dst), (sizeof(struct in_addr)));
  break;
 case 6:
  ip6 = (const struct ip6_hdr *)bp2;
  cookiecache[ninitiator].version = 6;
  memcpy((&cookiecache[ninitiator].iaddr.in6), (&ip6->ip6_src), (sizeof(struct in6_addr)));
  memcpy((&cookiecache[ninitiator].raddr.in6), (&ip6->ip6_dst), (sizeof(struct in6_addr)));
  break;
 default:
  return;
 }
 memcpy((&cookiecache[ninitiator].initiator), (in), (sizeof(*in)));
 ninitiator = (ninitiator + 1) % 20;
}



static int
cookie_sidecheck(int i, const u_char *bp2, int initiator)
{
 const struct ip *ip={0};
 const struct ip6_hdr *ip6={0};

 ip = (const struct ip *)bp2;
 switch ((((ip)->ip_vhl & 0xf0) >> 4)) {
 case 4:
  if (cookiecache[i].version != 4)
   return 0;
  if (initiator) {
   if (memcmp((&ip->ip_src), (&cookiecache[i].iaddr.in4), (sizeof(struct in_addr))) == 0)
    return 1;
  } else {
   if (memcmp((&ip->ip_src), (&cookiecache[i].raddr.in4), (sizeof(struct in_addr))) == 0)
    return 1;
  }
  break;
 case 6:
  if (cookiecache[i].version != 6)
   return 0;
  ip6 = (const struct ip6_hdr *)bp2;
  if (initiator) {
   if (memcmp((&ip6->ip6_src), (&cookiecache[i].iaddr.in6), (sizeof(struct in6_addr))) == 0)
    return 1;
  } else {
   if (memcmp((&ip6->ip6_src), (&cookiecache[i].raddr.in6), (sizeof(struct in6_addr))) == 0)
    return 1;
  }
  break;
 default:
  break;
 }

 return 0;
}

static void
hexprint(netdissect_options *ndo, const uint8_t *loc, size_t len)
{
 const uint8_t *p={0};
 size_t i={0};

 p = loc;
 for (i = 0; i < len; i++)
  (*ndo->ndo_printf)(ndo,"%02x", p[i] & 0xff);
}

static int
rawprint(netdissect_options *ndo, const uint8_t *loc, size_t len)
{
 if (!((((len) > 0) || ((len) == 0)) && ((uintptr_t)ndo->ndo_snapend - (len) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*loc) <= (uintptr_t)ndo->ndo_snapend - (len)))) goto trunc;

 hexprint(ndo, loc, len);
 return 1;
trunc:
 return 0;
}





static int ike_show_somedata(netdissect_options *ndo,
        const u_char *cp, const u_char *ep)
{

 const u_char *end = ep - 20;
 int elen = 20;
 int len = ep - cp;
 if(len > 10) {
  len = 10;
 }


 if(end < cp + len) {
  end = cp+len;
  elen = ep - end;
 }

 (*ndo->ndo_printf)(ndo," data=(");
 if(!rawprint(ndo, (const uint8_t *)(cp), len)) goto trunc;
 (*ndo->ndo_printf)(ndo, "...");
 if(elen) {
  if(!rawprint(ndo, (const uint8_t *)(end), elen)) goto trunc;
 }
 (*ndo->ndo_printf)(ndo,")");
 return 1;

trunc:
 return 0;
}

struct attrmap {
 const char *type;
 u_int nvalue;
 const char *value[30];
};

static const u_char *
ikev1_attrmap_print(netdissect_options *ndo,
      const u_char *p, const u_char *ep2,
      const struct attrmap *map, size_t nmap)
{
 int totlen={0};
 uint32_t t, v={0};

 if (!((((sizeof(p[0])) > 0) || ((sizeof(p[0])) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(p[0])) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(p[0]) <= (uintptr_t)ndo->ndo_snapend - (sizeof(p[0]))))) goto trunc;
 if (p[0] & 0x80)
  totlen = 4;
 else {
  if (!((((2) > 0) || ((2) == 0)) && ((uintptr_t)ndo->ndo_snapend - (2) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*(&p[2])) <= (uintptr_t)ndo->ndo_snapend - (2)))) goto trunc;
  totlen = 4 + EXTRACT_16BITS(&p[2]);
 }
 if (ep2 < p + totlen) {
  (*ndo->ndo_printf)(ndo,"[|attr]");
  return ep2 + 1;
 }

 if (!((((2) > 0) || ((2) == 0)) && ((uintptr_t)ndo->ndo_snapend - (2) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*(&p[0])) <= (uintptr_t)ndo->ndo_snapend - (2)))) goto trunc;
 (*ndo->ndo_printf)(ndo,"(");
 t = EXTRACT_16BITS(&p[0]) & 0x7fff;
 if (map && t < nmap && map[t].type)
  (*ndo->ndo_printf)(ndo,"type=%s ", map[t].type);
 else
  (*ndo->ndo_printf)(ndo,"type=#%d ", t);
 if (p[0] & 0x80) {
  (*ndo->ndo_printf)(ndo,"value=");
  if (!((((2) > 0) || ((2) == 0)) && ((uintptr_t)ndo->ndo_snapend - (2) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*(&p[2])) <= (uintptr_t)ndo->ndo_snapend - (2)))) goto trunc;
  v = EXTRACT_16BITS(&p[2]);
  if (map && t < nmap && v < map[t].nvalue && map[t].value[v])
   (*ndo->ndo_printf)(ndo,"%s", map[t].value[v]);
  else {
   if (!rawprint(ndo, (const uint8_t *)&p[2], 2)) {
    (*ndo->ndo_printf)(ndo,")");
    goto trunc;
   }
  }
 } else {
  (*ndo->ndo_printf)(ndo,"len=%d value=", totlen - 4);
  if (!rawprint(ndo, (const uint8_t *)&p[4], totlen - 4)) {
   (*ndo->ndo_printf)(ndo,")");
   goto trunc;
  }
 }
 (*ndo->ndo_printf)(ndo,")");
 return p + totlen;

trunc:
 return 
       ((void *)0)
           ;
}

static const u_char *
ikev1_attr_print(netdissect_options *ndo, const u_char *p, const u_char *ep2)
{
 int totlen={0};
 uint32_t t={0};

 if (!((((sizeof(p[0])) > 0) || ((sizeof(p[0])) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(p[0])) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(p[0]) <= (uintptr_t)ndo->ndo_snapend - (sizeof(p[0]))))) goto trunc;
 if (p[0] & 0x80)
  totlen = 4;
 else {
  if (!((((2) > 0) || ((2) == 0)) && ((uintptr_t)ndo->ndo_snapend - (2) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*(&p[2])) <= (uintptr_t)ndo->ndo_snapend - (2)))) goto trunc;
  totlen = 4 + EXTRACT_16BITS(&p[2]);
 }
 if (ep2 < p + totlen) {
  (*ndo->ndo_printf)(ndo,"[|attr]");
  return ep2 + 1;
 }

 if (!((((2) > 0) || ((2) == 0)) && ((uintptr_t)ndo->ndo_snapend - (2) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*(&p[0])) <= (uintptr_t)ndo->ndo_snapend - (2)))) goto trunc;
 (*ndo->ndo_printf)(ndo,"(");
 t = EXTRACT_16BITS(&p[0]) & 0x7fff;
 (*ndo->ndo_printf)(ndo,"type=#%d ", t);
 if (p[0] & 0x80) {
  (*ndo->ndo_printf)(ndo,"value=");
  t = p[2];
  if (!rawprint(ndo, (const uint8_t *)&p[2], 2)) {
   (*ndo->ndo_printf)(ndo,")");
   goto trunc;
  }
 } else {
  (*ndo->ndo_printf)(ndo,"len=%d value=", totlen - 4);
  if (!rawprint(ndo, (const uint8_t *)&p[4], totlen - 4)) {
   (*ndo->ndo_printf)(ndo,")");
   goto trunc;
  }
 }
 (*ndo->ndo_printf)(ndo,")");
 return p + totlen;

trunc:
 return 
       ((void *)0)
           ;
}

static const u_char *
ikev1_sa_print(netdissect_options *ndo, u_char tpay ,
        const struct isakmp_gen *ext,
  u_int item_len ,
  const u_char *ep, uint32_t phase, uint32_t doi0 ,
  uint32_t proto0, int depth)
{
 const struct ikev1_pl_sa *p={0};
 struct ikev1_pl_sa sa={0};
 uint32_t doi, sit, ident={0};
 const u_char *cp, *np={0};
 int t={0};

 (*ndo->ndo_printf)(ndo,"%s:", (((1) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(1)]) ? npstr[(1)] : numstr(1)));

 p = (const struct ikev1_pl_sa *)ext;
 if (!((((sizeof(*p)) > 0) || ((sizeof(*p)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*p)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*p) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*p))))) goto trunc;
 memcpy((&sa), (ext), (sizeof(sa)));
 doi = __ntohl(sa.doi);
 sit = __ntohl(sa.sit);
 if (doi != 1) {
  (*ndo->ndo_printf)(ndo," doi=%d", doi);
  (*ndo->ndo_printf)(ndo," situation=%u", (uint32_t)__ntohl(sa.sit));
  return (const u_char *)(p + 1);
 }

 (*ndo->ndo_printf)(ndo," doi=ipsec");
 (*ndo->ndo_printf)(ndo," situation=");
 t = 0;
 if (sit & 0x01) {
  (*ndo->ndo_printf)(ndo,"identity");
  t++;
 }
 if (sit & 0x02) {
  (*ndo->ndo_printf)(ndo,"%ssecrecy", t ? "+" : "");
  t++;
 }
 if (sit & 0x04)
  (*ndo->ndo_printf)(ndo,"%sintegrity", t ? "+" : "");

 np = (const u_char *)ext + sizeof(sa);
 if (sit != 0x01) {
  if (!((((sizeof(ident)) > 0) || ((sizeof(ident)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(ident)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*(ext + 1)) <= (uintptr_t)ndo->ndo_snapend - (sizeof(ident))))) goto trunc;
  memcpy((&ident), (ext + 1), (sizeof(ident)));
  (*ndo->ndo_printf)(ndo," ident=%u", (uint32_t)__ntohl(ident));
  np += sizeof(ident);
 }

 ext = (const struct isakmp_gen *)np;
 if (!((((sizeof(*ext)) > 0) || ((sizeof(*ext)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*ext)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*ext) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*ext))))) goto trunc;

 cp = ikev1_sub_print(ndo, 2, ext, ep, phase, doi, proto0,
  depth);

 return cp;
trunc:
 (*ndo->ndo_printf)(ndo," [|%s]", (((1) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(1)]) ? npstr[(1)] : numstr(1)));
 return 
       ((void *)0)
           ;
}

static const u_char *
ikev1_p_print(netdissect_options *ndo, u_char tpay ,
       const struct isakmp_gen *ext, u_int item_len ,
        const u_char *ep, uint32_t phase, uint32_t doi0,
        uint32_t proto0 , int depth)
{
 const struct ikev1_pl_p *p={0};
 struct ikev1_pl_p prop={0};
 const u_char *cp={0};

 (*ndo->ndo_printf)(ndo,"%s:", (((2) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(2)]) ? npstr[(2)] : numstr(2)));

 p = (const struct ikev1_pl_p *)ext;
 if (!((((sizeof(*p)) > 0) || ((sizeof(*p)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*p)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*p) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*p))))) goto trunc;
 memcpy((&prop), (ext), (sizeof(prop)));
 (*ndo->ndo_printf)(ndo," #%d protoid=%s transform=%d", prop.p_no, (((prop.prot_id) < sizeof(protoidstr)/sizeof(protoidstr[0]) && protoidstr[(prop.prot_id)]) ? protoidstr[(prop.prot_id)] : numstr(prop.prot_id)), prop.num_t)
                                                     ;
 if (prop.spi_size) {
  (*ndo->ndo_printf)(ndo," spi=");
  if (!rawprint(ndo, (const uint8_t *)(p + 1), prop.spi_size))
   goto trunc;
 }

 ext = (const struct isakmp_gen *)((const u_char *)(p + 1) + prop.spi_size);
 if (!((((sizeof(*ext)) > 0) || ((sizeof(*ext)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*ext)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*ext) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*ext))))) goto trunc;

 cp = ikev1_sub_print(ndo, 3, ext, ep, phase, doi0,
        prop.prot_id, depth);

 return cp;
trunc:
 (*ndo->ndo_printf)(ndo," [|%s]", (((2) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(2)]) ? npstr[(2)] : numstr(2)));
 return 
       ((void *)0)
           ;
}

static const char *ikev1_p_map[] = {
 
((void *)0)
    , "ike",
};

static const char *ikev2_t_type_map[]={
 
((void *)0)
    , "encr", "prf", "integ", "dh", "esn"
};

static const char *ah_p_map[] = {
 
((void *)0)
    , "(reserved)", "md5", "sha", "1des",
 "sha2-256", "sha2-384", "sha2-512",
};

static const char *prf_p_map[] = {
 
((void *)0)
    , "hmac-md5", "hmac-sha", "hmac-tiger",
 "aes128_xcbc"
};

static const char *integ_p_map[] = {
 
((void *)0)
    , "hmac-md5", "hmac-sha", "dec-mac",
 "kpdk-md5", "aes-xcbc"
};

static const char *esn_p_map[] = {
 "no-esn", "esn"
};

static const char *dh_p_map[] = {
 
((void *)0)
    , "modp768",
 "modp1024",
 "EC2N 2^155",
 "EC2N 2^185",
 "modp1536",
 "iana-grp06", "iana-grp07",
 "iana-grp08", "iana-grp09",
 "iana-grp10", "iana-grp11",
 "iana-grp12", "iana-grp13",
 "modp2048",
 "modp3072",
 "modp4096",
 "modp6144",
 "modp8192",
};

static const char *esp_p_map[] = {
 
((void *)0)
    , "1des-iv64", "1des", "3des", "rc5", "idea", "cast",
 "blowfish", "3idea", "1des-iv32", "rc4", "null", "aes"
};

static const char *ipcomp_p_map[] = {
 
((void *)0)
    , "oui", "deflate", "lzs",
};

static const struct attrmap ipsec_t_map[] = {
 { 
  ((void *)0)
      , 0, { 
             ((void *)0) 
                  } },
 { "lifetype", 3, { 
                   ((void *)0)
                       , "sec", "kb", }, },
 { "life", 0, { 
               ((void *)0) 
                    } },
 { "group desc", 18, { 
                      ((void *)0)
                          , "modp768",
      "modp1024",
      "EC2N 2^155",
      "EC2N 2^185",
      "modp1536",
      "iana-grp06", "iana-grp07",
      "iana-grp08", "iana-grp09",
      "iana-grp10", "iana-grp11",
      "iana-grp12", "iana-grp13",
      "modp2048",
      "modp3072",
      "modp4096",
      "modp6144",
      "modp8192",
  }, },
 { "enc mode", 3, { 
                   ((void *)0)
                       , "tunnel", "transport", }, },
 { "auth", 5, { 
               ((void *)0)
                   , "hmac-md5", "hmac-sha1", "1des-mac", "keyed", }, },
 { "keylen", 0, { 
                 ((void *)0) 
                      } },
 { "rounds", 0, { 
                 ((void *)0) 
                      } },
 { "dictsize", 0, { 
                   ((void *)0) 
                        } },
 { "privalg", 0, { 
                  ((void *)0) 
                       } },
};

static const struct attrmap encr_t_map[] = {
 { 
  ((void *)0)
      , 0, { 
             ((void *)0) 
                  } }, { 
                          ((void *)0)
                              , 0, { 
                                     ((void *)0) 
                                          } },
 { 
  ((void *)0)
      , 0, { 
             ((void *)0) 
                  } }, { 
                         ((void *)0)
                             , 0, { 
                                    ((void *)0) 
                                         } },
 { 
  ((void *)0)
      , 0, { 
             ((void *)0) 
                  } }, { 
                         ((void *)0)
                             , 0, { 
                                    ((void *)0) 
                                         } },
 { 
  ((void *)0)
      , 0, { 
             ((void *)0) 
                  } }, { 
                         ((void *)0)
                             , 0, { 
                                    ((void *)0) 
                                         } },
 { 
  ((void *)0)
      , 0, { 
             ((void *)0) 
                  } }, { 
                         ((void *)0)
                             , 0, { 
                                    ((void *)0) 
                                         } },
 { 
  ((void *)0)
      , 0, { 
             ((void *)0) 
                  } }, { 
                         ((void *)0)
                             , 0, { 
                                    ((void *)0) 
                                         } },
 { 
  ((void *)0)
      , 0, { 
             ((void *)0) 
                  } }, { 
                         ((void *)0)
                             , 0, { 
                                    ((void *)0) 
                                         } },
 { "keylen", 14, { 
                  ((void *)0) 
                       }},
};

static const struct attrmap oakley_t_map[] = {
 { 
  ((void *)0)
      , 0, { 
             ((void *)0) 
                  } },
 { "enc", 8, { 
              ((void *)0)
                  , "1des", "idea", "blowfish", "rc5",
      "3des", "cast", "aes", }, },
 { "hash", 7, { 
               ((void *)0)
                   , "md5", "sha1", "tiger",
     "sha2-256", "sha2-384", "sha2-512", }, },
 { "auth", 6, { 
               ((void *)0)
                   , "preshared", "dss", "rsa sig", "rsa enc",
     "rsa enc revised", }, },
 { "group desc", 18, { 
                      ((void *)0)
                          , "modp768",
      "modp1024",
      "EC2N 2^155",
      "EC2N 2^185",
      "modp1536",
      "iana-grp06", "iana-grp07",
      "iana-grp08", "iana-grp09",
      "iana-grp10", "iana-grp11",
      "iana-grp12", "iana-grp13",
      "modp2048",
      "modp3072",
      "modp4096",
      "modp6144",
      "modp8192",
  }, },
 { "group type", 4, { 
                     ((void *)0)
                         , "MODP", "ECP", "EC2N", }, },
 { "group prime", 0, { 
                      ((void *)0) 
                           } },
 { "group gen1", 0, { 
                     ((void *)0) 
                          } },
 { "group gen2", 0, { 
                     ((void *)0) 
                          } },
 { "group curve A", 0, { 
                        ((void *)0) 
                             } },
 { "group curve B", 0, { 
                        ((void *)0) 
                             } },
 { "lifetype", 3, { 
                   ((void *)0)
                       , "sec", "kb", }, },
 { "lifeduration", 0, { 
                       ((void *)0) 
                            } },
 { "prf", 0, { 
              ((void *)0) 
                   } },
 { "keylen", 0, { 
                 ((void *)0) 
                      } },
 { "field", 0, { 
                ((void *)0) 
                     } },
 { "order", 0, { 
                ((void *)0) 
                     } },
};

static const u_char *
ikev1_t_print(netdissect_options *ndo, u_char tpay ,
       const struct isakmp_gen *ext, u_int item_len,
       const u_char *ep, uint32_t phase , uint32_t doi ,
       uint32_t proto, int depth )
{
 const struct ikev1_pl_t *p={0};
 struct ikev1_pl_t t={0};
 const u_char *cp={0};
 const char *idstr={0};
 const struct attrmap *map={0};
 size_t nmap={0};
 const u_char *ep2={0};

 (*ndo->ndo_printf)(ndo,"%s:", (((3) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(3)]) ? npstr[(3)] : numstr(3)));

 p = (const struct ikev1_pl_t *)ext;
 if (!((((sizeof(*p)) > 0) || ((sizeof(*p)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*p)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*p) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*p))))) goto trunc;
 memcpy((&t), (ext), (sizeof(t)));

 switch (proto) {
 case 1:
  idstr = (((t.t_id) < sizeof(ikev1_p_map)/sizeof(ikev1_p_map[0]) && ikev1_p_map[(t.t_id)]) ? ikev1_p_map[(t.t_id)] : numstr(t.t_id));
  map = oakley_t_map;
  nmap = sizeof(oakley_t_map)/sizeof(oakley_t_map[0]);
  break;
 case 2:
  idstr = (((t.t_id) < sizeof(ah_p_map)/sizeof(ah_p_map[0]) && ah_p_map[(t.t_id)]) ? ah_p_map[(t.t_id)] : numstr(t.t_id));
  map = ipsec_t_map;
  nmap = sizeof(ipsec_t_map)/sizeof(ipsec_t_map[0]);
  break;
 case 3:
  idstr = (((t.t_id) < sizeof(esp_p_map)/sizeof(esp_p_map[0]) && esp_p_map[(t.t_id)]) ? esp_p_map[(t.t_id)] : numstr(t.t_id));
  map = ipsec_t_map;
  nmap = sizeof(ipsec_t_map)/sizeof(ipsec_t_map[0]);
  break;
 case 4:
  idstr = (((t.t_id) < sizeof(ipcomp_p_map)/sizeof(ipcomp_p_map[0]) && ipcomp_p_map[(t.t_id)]) ? ipcomp_p_map[(t.t_id)] : numstr(t.t_id));
  map = ipsec_t_map;
  nmap = sizeof(ipsec_t_map)/sizeof(ipsec_t_map[0]);
  break;
 default:
  idstr = 
         ((void *)0)
             ;
  map = 
       ((void *)0)
           ;
  nmap = 0;
  break;
 }

 if (idstr)
  (*ndo->ndo_printf)(ndo," #%d id=%s ", t.t_no, idstr);
 else
  (*ndo->ndo_printf)(ndo," #%d id=%d ", t.t_no, t.t_id);
 cp = (const u_char *)(p + 1);
 ep2 = (const u_char *)p + item_len;
 while (cp < ep && cp < ep2) {
  if (map && nmap)
   cp = ikev1_attrmap_print(ndo, cp, ep2, map, nmap);
  else
   cp = ikev1_attr_print(ndo, cp, ep2);
  if (cp == 
           ((void *)0)
               )
   goto trunc;
 }
 if (ep < ep2)
  (*ndo->ndo_printf)(ndo,"...");
 return cp;
trunc:
 (*ndo->ndo_printf)(ndo," [|%s]", (((3) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(3)]) ? npstr[(3)] : numstr(3)));
 return 
       ((void *)0)
           ;
}

static const u_char *
ikev1_ke_print(netdissect_options *ndo, u_char tpay ,
        const struct isakmp_gen *ext, u_int item_len ,
        const u_char *ep , uint32_t phase , uint32_t doi ,
        uint32_t proto , int depth )
{
 struct isakmp_gen e={0};

 (*ndo->ndo_printf)(ndo,"%s:", (((4) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(4)]) ? npstr[(4)] : numstr(4)));

 if (!((((sizeof(*ext)) > 0) || ((sizeof(*ext)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*ext)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*ext) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*ext))))) goto trunc;
 memcpy((&e), (ext), (sizeof(e)));
 (*ndo->ndo_printf)(ndo," key len=%d", __ntohs(e.len) - 4);
 if (2 < ndo->ndo_vflag && 4 < __ntohs(e.len)) {

  (*ndo->ndo_printf)(ndo," ");
  if (!rawprint(ndo, (const uint8_t *)(ext + 1), __ntohs(e.len) - 4))
   goto trunc;
 }
 return (const u_char *)ext + __ntohs(e.len);
trunc:
 (*ndo->ndo_printf)(ndo," [|%s]", (((4) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(4)]) ? npstr[(4)] : numstr(4)));
 return 
       ((void *)0)
           ;
}

static const u_char *
ikev1_id_print(netdissect_options *ndo, u_char tpay ,
        const struct isakmp_gen *ext, u_int item_len,
        const u_char *ep , uint32_t phase, uint32_t doi ,
        uint32_t proto , int depth )
{

 const struct ikev1_pl_id *p={0};
 struct ikev1_pl_id id={0};
 static const char *idtypestr[] = {
  "IPv4", "IPv4net", "IPv6", "IPv6net",
 };
 static const char *ipsecidtypestr[] = {
  
 ((void *)0)
     , "IPv4", "FQDN", "user FQDN", "IPv4net", "IPv6",
  "IPv6net", "IPv4range", "IPv6range", "ASN1 DN", "ASN1 GN",
  "keyid",
 };
 int len={0};
 const u_char *data={0};

 (*ndo->ndo_printf)(ndo,"%s:", (((5) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(5)]) ? npstr[(5)] : numstr(5)));

 p = (const struct ikev1_pl_id *)ext;
 if (!((((sizeof(*p)) > 0) || ((sizeof(*p)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*p)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*p) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*p))))) goto trunc;
 memcpy((&id), (ext), (sizeof(id)));
 if (sizeof(*p) < item_len) {
  data = (const u_char *)(p + 1);
  len = item_len - sizeof(*p);
 } else {
  data = 
        ((void *)0)
            ;
  len = 0;
 }




 switch (phase) {



 default:
  (*ndo->ndo_printf)(ndo," idtype=%s", (((id.d.id_type) < sizeof(idtypestr)/sizeof(idtypestr[0]) && idtypestr[(id.d.id_type)]) ? idtypestr[(id.d.id_type)] : numstr(id.d.id_type)));
  (*ndo->ndo_printf)(ndo," doi_data=%u", (uint32_t)(__ntohl(id.d.doi_data) & 0xffffff))
                                                  ;
  break;


 case 1:

 case 2:
     {
  const struct ipsecdoi_id *doi_p={0};
  struct ipsecdoi_id doi_id={0};
  const char *p_name={0};

  doi_p = (const struct ipsecdoi_id *)ext;
  if (!((((sizeof(*doi_p)) > 0) || ((sizeof(*doi_p)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*doi_p)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*doi_p) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*doi_p))))) goto trunc;
  memcpy((&doi_id), (ext), (sizeof(doi_id)));
  (*ndo->ndo_printf)(ndo," idtype=%s", (((doi_id.type) < sizeof(ipsecidtypestr)/sizeof(ipsecidtypestr[0]) && ipsecidtypestr[(doi_id.type)]) ? ipsecidtypestr[(doi_id.type)] : numstr(doi_id.type)));

  if (!ndo->ndo_nflag && doi_id.proto_id && (p_name = netdb_protoname(doi_id.proto_id)) != 
                                                                                          ((void *)0)
                                                                                              )
   (*ndo->ndo_printf)(ndo," protoid=%s", p_name);
  else
   (*ndo->ndo_printf)(ndo," protoid=%u", doi_id.proto_id);
  (*ndo->ndo_printf)(ndo," port=%d", __ntohs(doi_id.port));
  if (!len)
   break;
  if (data == 
             ((void *)0)
                 )
   goto trunc;
  if (!((((len) > 0) || ((len) == 0)) && ((uintptr_t)ndo->ndo_snapend - (len) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*data) <= (uintptr_t)ndo->ndo_snapend - (len)))) goto trunc;
  switch (doi_id.type) {
  case 1:
   if (len < 4)
    (*ndo->ndo_printf)(ndo," len=%d [bad: < 4]", len);
   else
    (*ndo->ndo_printf)(ndo," len=%d %s", len, getname(ndo, (const u_char *)(data)));
   len = 0;
   break;
  case 2:
  case 3:
      {
   int i={0};
   (*ndo->ndo_printf)(ndo," len=%d ", len);
   for (i = 0; i < len; i++)
    safeputchar(ndo, data[i]);
   len = 0;
   break;
      }
  case 4:
      {
   const u_char *mask={0};
   if (len < 8)
    (*ndo->ndo_printf)(ndo," len=%d [bad: < 8]", len);
   else {
    mask = data + sizeof(struct in_addr);
    (*ndo->ndo_printf)(ndo," len=%d %s/%u.%u.%u.%u", len, getname(ndo, (const u_char *)(data)), mask[0], mask[1], mask[2], mask[3])

                                           ;
   }
   len = 0;
   break;
      }
  case 5:
   if (len < 16)
    (*ndo->ndo_printf)(ndo," len=%d [bad: < 16]", len);
   else
    (*ndo->ndo_printf)(ndo," len=%d %s", len, getname6(ndo, (const u_char *)(data)));
   len = 0;
   break;
  case 6:
      {
   const u_char *mask={0};
   if (len < 32)
    (*ndo->ndo_printf)(ndo," len=%d [bad: < 32]", len);
   else {
    mask = (const u_char *)(data + sizeof(struct in6_addr));

    (*ndo->ndo_printf)(ndo," len=%d %s/0x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x", len, getname6(ndo, (const u_char *)(data)), mask[0], mask[1], mask[2], mask[3], mask[4], mask[5], mask[6], mask[7], mask[8], mask[9], mask[10], mask[11], mask[12], mask[13], mask[14], mask[15])




                                               ;
   }
   len = 0;
   break;
      }
  case 7:
   if (len < 8)
    (*ndo->ndo_printf)(ndo," len=%d [bad: < 8]", len);
   else {
    (*ndo->ndo_printf)(ndo," len=%d %s-%s", len, getname(ndo, (const u_char *)(data)), getname(ndo, (const u_char *)(data + sizeof(struct in_addr))))

                                                          ;
   }
   len = 0;
   break;
  case 8:
   if (len < 32)
    (*ndo->ndo_printf)(ndo," len=%d [bad: < 32]", len);
   else {
    (*ndo->ndo_printf)(ndo," len=%d %s-%s", len, getname6(ndo, (const u_char *)(data)), getname6(ndo, (const u_char *)(data + sizeof(struct in6_addr))))

                                                            ;
   }
   len = 0;
   break;
  case 9:
  case 10:
  case 11:
   break;
  }
  break;
     }
 }
 if (data && len) {
  (*ndo->ndo_printf)(ndo," len=%d", len);
  if (2 < ndo->ndo_vflag) {
   (*ndo->ndo_printf)(ndo," ");
   if (!rawprint(ndo, (const uint8_t *)data, len))
    goto trunc;
  }
 }
 return (const u_char *)ext + item_len;
trunc:
 (*ndo->ndo_printf)(ndo," [|%s]", (((5) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(5)]) ? npstr[(5)] : numstr(5)));
 return 
       ((void *)0)
           ;
}

static const u_char *
ikev1_cert_print(netdissect_options *ndo, u_char tpay ,
   const struct isakmp_gen *ext, u_int item_len,
   const u_char *ep , uint32_t phase ,
   uint32_t doi0 ,
   uint32_t proto0 , int depth )
{
 const struct ikev1_pl_cert *p={0};
 struct ikev1_pl_cert cert={0};
 static const char *certstr[] = {
  "none", "pkcs7", "pgp", "dns",
  "x509sign", "x509ke", "kerberos", "crl",
  "arl", "spki", "x509attr",
 };

 (*ndo->ndo_printf)(ndo,"%s:", (((6) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(6)]) ? npstr[(6)] : numstr(6)));

 p = (const struct ikev1_pl_cert *)ext;
 if (!((((sizeof(*p)) > 0) || ((sizeof(*p)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*p)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*p) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*p))))) goto trunc;
 memcpy((&cert), (ext), (sizeof(cert)));
 (*ndo->ndo_printf)(ndo," len=%d", item_len - 4);
 (*ndo->ndo_printf)(ndo," type=%s", ((((cert.encode)) < sizeof(certstr)/sizeof(certstr[0]) && certstr[((cert.encode))]) ? certstr[((cert.encode))] : numstr((cert.encode))));
 if (2 < ndo->ndo_vflag && 4 < item_len) {

  (*ndo->ndo_printf)(ndo," ");
  if (!rawprint(ndo, (const uint8_t *)(ext + 1), item_len - 4))
   goto trunc;
 }
 return (const u_char *)ext + item_len;
trunc:
 (*ndo->ndo_printf)(ndo," [|%s]", (((6) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(6)]) ? npstr[(6)] : numstr(6)));
 return 
       ((void *)0)
           ;
}

static const u_char *
ikev1_cr_print(netdissect_options *ndo, u_char tpay ,
        const struct isakmp_gen *ext, u_int item_len,
        const u_char *ep , uint32_t phase , uint32_t doi0 ,
        uint32_t proto0 , int depth )
{
 const struct ikev1_pl_cert *p={0};
 struct ikev1_pl_cert cert={0};
 static const char *certstr[] = {
  "none", "pkcs7", "pgp", "dns",
  "x509sign", "x509ke", "kerberos", "crl",
  "arl", "spki", "x509attr",
 };

 (*ndo->ndo_printf)(ndo,"%s:", (((7) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(7)]) ? npstr[(7)] : numstr(7)));

 p = (const struct ikev1_pl_cert *)ext;
 if (!((((sizeof(*p)) > 0) || ((sizeof(*p)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*p)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*p) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*p))))) goto trunc;
 memcpy((&cert), (ext), (sizeof(cert)));
 (*ndo->ndo_printf)(ndo," len=%d", item_len - 4);
 (*ndo->ndo_printf)(ndo," type=%s", ((((cert.encode)) < sizeof(certstr)/sizeof(certstr[0]) && certstr[((cert.encode))]) ? certstr[((cert.encode))] : numstr((cert.encode))));
 if (2 < ndo->ndo_vflag && 4 < item_len) {

  (*ndo->ndo_printf)(ndo," ");
  if (!rawprint(ndo, (const uint8_t *)(ext + 1), item_len - 4))
   goto trunc;
 }
 return (const u_char *)ext + item_len;
trunc:
 (*ndo->ndo_printf)(ndo," [|%s]", (((7) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(7)]) ? npstr[(7)] : numstr(7)));
 return 
       ((void *)0)
           ;
}

static const u_char *
ikev1_hash_print(netdissect_options *ndo, u_char tpay ,
   const struct isakmp_gen *ext, u_int item_len ,
   const u_char *ep , uint32_t phase , uint32_t doi ,
   uint32_t proto , int depth )
{
 struct isakmp_gen e={0};

 (*ndo->ndo_printf)(ndo,"%s:", (((8) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(8)]) ? npstr[(8)] : numstr(8)));

 if (!((((sizeof(*ext)) > 0) || ((sizeof(*ext)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*ext)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*ext) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*ext))))) goto trunc;
 memcpy((&e), (ext), (sizeof(e)));
 (*ndo->ndo_printf)(ndo," len=%d", __ntohs(e.len) - 4);
 if (2 < ndo->ndo_vflag && 4 < __ntohs(e.len)) {

  (*ndo->ndo_printf)(ndo," ");
  if (!rawprint(ndo, (const uint8_t *)(ext + 1), __ntohs(e.len) - 4))
   goto trunc;
 }
 return (const u_char *)ext + __ntohs(e.len);
trunc:
 (*ndo->ndo_printf)(ndo," [|%s]", (((8) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(8)]) ? npstr[(8)] : numstr(8)));
 return 
       ((void *)0)
           ;
}

static const u_char *
ikev1_sig_print(netdissect_options *ndo, u_char tpay ,
  const struct isakmp_gen *ext, u_int item_len ,
  const u_char *ep , uint32_t phase , uint32_t doi ,
  uint32_t proto , int depth )
{
 struct isakmp_gen e={0};

 (*ndo->ndo_printf)(ndo,"%s:", (((9) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(9)]) ? npstr[(9)] : numstr(9)));

 if (!((((sizeof(*ext)) > 0) || ((sizeof(*ext)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*ext)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*ext) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*ext))))) goto trunc;
 memcpy((&e), (ext), (sizeof(e)));
 (*ndo->ndo_printf)(ndo," len=%d", __ntohs(e.len) - 4);
 if (2 < ndo->ndo_vflag && 4 < __ntohs(e.len)) {

  (*ndo->ndo_printf)(ndo," ");
  if (!rawprint(ndo, (const uint8_t *)(ext + 1), __ntohs(e.len) - 4))
   goto trunc;
 }
 return (const u_char *)ext + __ntohs(e.len);
trunc:
 (*ndo->ndo_printf)(ndo," [|%s]", (((9) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(9)]) ? npstr[(9)] : numstr(9)));
 return 
       ((void *)0)
           ;
}

static const u_char *
ikev1_nonce_print(netdissect_options *ndo, u_char tpay ,
    const struct isakmp_gen *ext,
    u_int item_len ,
    const u_char *ep,
    uint32_t phase , uint32_t doi ,
    uint32_t proto , int depth )
{
 struct isakmp_gen e={0};

 (*ndo->ndo_printf)(ndo,"%s:", (((10) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(10)]) ? npstr[(10)] : numstr(10)));

 if (!((((sizeof(*ext)) > 0) || ((sizeof(*ext)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*ext)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*ext) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*ext))))) goto trunc;
 memcpy((&e), (ext), (sizeof(e)));



 (*ndo->ndo_printf)(ndo," n len=%u", __ntohs(e.len) - 4);
 if (__ntohs(e.len) > 4) {
  if (ndo->ndo_vflag > 2) {
   (*ndo->ndo_printf)(ndo, " ");
   if (!rawprint(ndo, (const uint8_t *)(ext + 1), __ntohs(e.len) - 4))
    goto trunc;
  } else if (ndo->ndo_vflag > 1) {
   (*ndo->ndo_printf)(ndo, " ");
   if (!ike_show_somedata(ndo, (const u_char *)(ext + 1), ep))
    goto trunc;
  }
 }
 return (const u_char *)ext + __ntohs(e.len);
trunc:
 (*ndo->ndo_printf)(ndo," [|%s]", (((10) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(10)]) ? npstr[(10)] : numstr(10)));
 return 
       ((void *)0)
           ;
}

static const u_char *
ikev1_n_print(netdissect_options *ndo, u_char tpay ,
       const struct isakmp_gen *ext, u_int item_len,
       const u_char *ep, uint32_t phase , uint32_t doi0 ,
       uint32_t proto0 , int depth )
{
 const struct ikev1_pl_n *p={0};
 struct ikev1_pl_n n={0};
 const u_char *cp={0};
 const u_char *ep2={0};
 uint32_t doi={0};
 uint32_t proto={0};
 static const char *notify_error_str[] = {
  
 ((void *)0)
     , "INVALID-PAYLOAD-TYPE",
  "DOI-NOT-SUPPORTED", "SITUATION-NOT-SUPPORTED",
  "INVALID-COOKIE", "INVALID-MAJOR-VERSION",
  "INVALID-MINOR-VERSION", "INVALID-EXCHANGE-TYPE",
  "INVALID-FLAGS", "INVALID-MESSAGE-ID",
  "INVALID-PROTOCOL-ID", "INVALID-SPI",
  "INVALID-TRANSFORM-ID", "ATTRIBUTES-NOT-SUPPORTED",
  "NO-PROPOSAL-CHOSEN", "BAD-PROPOSAL-SYNTAX",
  "PAYLOAD-MALFORMED", "INVALID-KEY-INFORMATION",
  "INVALID-ID-INFORMATION", "INVALID-CERT-ENCODING",
  "INVALID-CERTIFICATE", "CERT-TYPE-UNSUPPORTED",
  "INVALID-CERT-AUTHORITY", "INVALID-HASH-INFORMATION",
  "AUTHENTICATION-FAILED", "INVALID-SIGNATURE",
  "ADDRESS-NOTIFICATION", "NOTIFY-SA-LIFETIME",
  "CERTIFICATE-UNAVAILABLE", "UNSUPPORTED-EXCHANGE-TYPE",
  "UNEQUAL-PAYLOAD-LENGTHS",
 };
 static const char *ipsec_notify_error_str[] = {
  "RESERVED",
 };
 static const char *notify_status_str[] = {
  "CONNECTED",
 };
 static const char *ipsec_notify_status_str[] = {
  "RESPONDER-LIFETIME", "REPLAY-STATUS",
  "INITIAL-CONTACT",
 };
 (*ndo->ndo_printf)(ndo,"%s:", (((11) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(11)]) ? npstr[(11)] : numstr(11)));

 p = (const struct ikev1_pl_n *)ext;
 if (!((((sizeof(*p)) > 0) || ((sizeof(*p)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*p)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*p) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*p))))) goto trunc;
 memcpy((&n), (ext), (sizeof(n)));
 doi = __ntohl(n.doi);
 proto = n.prot_id;
 if (doi != 1) {
  (*ndo->ndo_printf)(ndo," doi=%d", doi);
  (*ndo->ndo_printf)(ndo," proto=%d", proto);
  if (__ntohs(n.type) < 8192)
   (*ndo->ndo_printf)(ndo," type=%s", ((((__ntohs(n.type))) < sizeof(notify_error_str)/sizeof(notify_error_str[0]) && notify_error_str[((__ntohs(n.type)))]) ? notify_error_str[((__ntohs(n.type)))] : numstr((__ntohs(n.type)))));
  else if (__ntohs(n.type) < 16384)
   (*ndo->ndo_printf)(ndo," type=%s", numstr(__ntohs(n.type)));
  else if (__ntohs(n.type) < 24576)
   (*ndo->ndo_printf)(ndo," type=%s", ((((u_int)((__ntohs(n.type)) - 16384)) < sizeof(notify_status_str)/sizeof(notify_status_str[0]) && notify_status_str[((u_int)((__ntohs(n.type)) - 16384))]) ? notify_status_str[((u_int)((__ntohs(n.type)) - 16384))] : numstr((u_int)((__ntohs(n.type)) - 16384))));
  else
   (*ndo->ndo_printf)(ndo," type=%s", numstr(__ntohs(n.type)));
  if (n.spi_size) {
   (*ndo->ndo_printf)(ndo," spi=");
   if (!rawprint(ndo, (const uint8_t *)(p + 1), n.spi_size))
    goto trunc;
  }
  return (const u_char *)(p + 1) + n.spi_size;
 }

 (*ndo->ndo_printf)(ndo," doi=ipsec");
 (*ndo->ndo_printf)(ndo," proto=%s", (((proto) < sizeof(protoidstr)/sizeof(protoidstr[0]) && protoidstr[(proto)]) ? protoidstr[(proto)] : numstr(proto)));
 if (__ntohs(n.type) < 8192)
  (*ndo->ndo_printf)(ndo," type=%s", ((((__ntohs(n.type))) < sizeof(notify_error_str)/sizeof(notify_error_str[0]) && notify_error_str[((__ntohs(n.type)))]) ? notify_error_str[((__ntohs(n.type)))] : numstr((__ntohs(n.type)))));
 else if (__ntohs(n.type) < 16384)
  (*ndo->ndo_printf)(ndo," type=%s", ((((u_int)((__ntohs(n.type)) - 8192)) < sizeof(ipsec_notify_error_str)/sizeof(ipsec_notify_error_str[0]) && ipsec_notify_error_str[((u_int)((__ntohs(n.type)) - 8192))]) ? ipsec_notify_error_str[((u_int)((__ntohs(n.type)) - 8192))] : numstr((u_int)((__ntohs(n.type)) - 8192))));
 else if (__ntohs(n.type) < 24576)
  (*ndo->ndo_printf)(ndo," type=%s", ((((u_int)((__ntohs(n.type)) - 16384)) < sizeof(notify_status_str)/sizeof(notify_status_str[0]) && notify_status_str[((u_int)((__ntohs(n.type)) - 16384))]) ? notify_status_str[((u_int)((__ntohs(n.type)) - 16384))] : numstr((u_int)((__ntohs(n.type)) - 16384))));
 else if (__ntohs(n.type) < 32768)
  (*ndo->ndo_printf)(ndo," type=%s", ((((u_int)((__ntohs(n.type)) - 24576)) < sizeof(ipsec_notify_status_str)/sizeof(ipsec_notify_status_str[0]) && ipsec_notify_status_str[((u_int)((__ntohs(n.type)) - 24576))]) ? ipsec_notify_status_str[((u_int)((__ntohs(n.type)) - 24576))] : numstr((u_int)((__ntohs(n.type)) - 24576))));
 else
  (*ndo->ndo_printf)(ndo," type=%s", numstr(__ntohs(n.type)));
 if (n.spi_size) {
  (*ndo->ndo_printf)(ndo," spi=");
  if (!rawprint(ndo, (const uint8_t *)(p + 1), n.spi_size))
   goto trunc;
 }

 cp = (const u_char *)(p + 1) + n.spi_size;
 ep2 = (const u_char *)p + item_len;

 if (cp < ep) {
  switch (__ntohs(n.type)) {
  case 24576:
      {
   const struct attrmap *map = oakley_t_map;
   size_t nmap = sizeof(oakley_t_map)/sizeof(oakley_t_map[0]);
   (*ndo->ndo_printf)(ndo," attrs=(");
   while (cp < ep && cp < ep2) {
    cp = ikev1_attrmap_print(ndo, cp, ep2, map, nmap);
    if (cp == 
             ((void *)0)
                 ) {
     (*ndo->ndo_printf)(ndo,")");
     goto trunc;
    }
   }
   (*ndo->ndo_printf)(ndo,")");
   break;
      }
  case 24577:
   (*ndo->ndo_printf)(ndo," status=(");
   (*ndo->ndo_printf)(ndo,"replay detection %sabled", EXTRACT_32BITS(cp) ? "en" : "dis")
                                         ;
   (*ndo->ndo_printf)(ndo,")");
   break;
  default:




   if (ndo->ndo_vflag > 3) {
    (*ndo->ndo_printf)(ndo," data=(");
    if (!rawprint(ndo, (const uint8_t *)(cp), ep - cp))
     goto trunc;
    (*ndo->ndo_printf)(ndo,")");
   } else {
    if (!ike_show_somedata(ndo, cp, ep))
     goto trunc;
   }
   break;
  }
 }
 return (const u_char *)ext + item_len;
trunc:
 (*ndo->ndo_printf)(ndo," [|%s]", (((11) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(11)]) ? npstr[(11)] : numstr(11)));
 return 
       ((void *)0)
           ;
}

static const u_char *
ikev1_d_print(netdissect_options *ndo, u_char tpay ,
       const struct isakmp_gen *ext, u_int item_len ,
       const u_char *ep , uint32_t phase , uint32_t doi0 ,
       uint32_t proto0 , int depth )
{
 const struct ikev1_pl_d *p={0};
 struct ikev1_pl_d d={0};
 const uint8_t *q={0};
 uint32_t doi={0};
 uint32_t proto={0};
 int i={0};

 (*ndo->ndo_printf)(ndo,"%s:", (((12) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(12)]) ? npstr[(12)] : numstr(12)));

 p = (const struct ikev1_pl_d *)ext;
 if (!((((sizeof(*p)) > 0) || ((sizeof(*p)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*p)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*p) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*p))))) goto trunc;
 memcpy((&d), (ext), (sizeof(d)));
 doi = __ntohl(d.doi);
 proto = d.prot_id;
 if (doi != 1) {
  (*ndo->ndo_printf)(ndo," doi=%u", doi);
  (*ndo->ndo_printf)(ndo," proto=%u", proto);
 } else {
  (*ndo->ndo_printf)(ndo," doi=ipsec");
  (*ndo->ndo_printf)(ndo," proto=%s", (((proto) < sizeof(protoidstr)/sizeof(protoidstr[0]) && protoidstr[(proto)]) ? protoidstr[(proto)] : numstr(proto)));
 }
 (*ndo->ndo_printf)(ndo," spilen=%u", d.spi_size);
 (*ndo->ndo_printf)(ndo," nspi=%u", __ntohs(d.num_spi));
 (*ndo->ndo_printf)(ndo," spi=");
 q = (const uint8_t *)(p + 1);
 for (i = 0; i < __ntohs(d.num_spi); i++) {
  if (i != 0)
   (*ndo->ndo_printf)(ndo,",");
  if (!rawprint(ndo, (const uint8_t *)q, d.spi_size))
   goto trunc;
  q += d.spi_size;
 }
 return q;
trunc:
 (*ndo->ndo_printf)(ndo," [|%s]", (((12) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(12)]) ? npstr[(12)] : numstr(12)));
 return 
       ((void *)0)
           ;
}

static const u_char *
ikev1_vid_print(netdissect_options *ndo, u_char tpay ,
  const struct isakmp_gen *ext,
  u_int item_len , const u_char *ep ,
  uint32_t phase , uint32_t doi ,
  uint32_t proto , int depth )
{
 struct isakmp_gen e={0};

 (*ndo->ndo_printf)(ndo,"%s:", (((13) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(13)]) ? npstr[(13)] : numstr(13)));

 if (!((((sizeof(*ext)) > 0) || ((sizeof(*ext)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*ext)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*ext) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*ext))))) goto trunc;
 memcpy((&e), (ext), (sizeof(e)));
 (*ndo->ndo_printf)(ndo," len=%d", __ntohs(e.len) - 4);
 if (2 < ndo->ndo_vflag && 4 < __ntohs(e.len)) {

  (*ndo->ndo_printf)(ndo," ");
  if (!rawprint(ndo, (const uint8_t *)(ext + 1), __ntohs(e.len) - 4))
   goto trunc;
 }
 return (const u_char *)ext + __ntohs(e.len);
trunc:
 (*ndo->ndo_printf)(ndo," [|%s]", (((13) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(13)]) ? npstr[(13)] : numstr(13)));
 return 
       ((void *)0)
           ;
}







static void
ikev2_pay_print(netdissect_options *ndo, const char *payname, int critical)
{
 (*ndo->ndo_printf)(ndo,"%s%s:", payname, critical&0x80 ? "[C]" : "");
}

static const u_char *
ikev2_gen_print(netdissect_options *ndo, u_char tpay,
  const struct isakmp_gen *ext)
{
 struct isakmp_gen e={0};

 if (!((((sizeof(*ext)) > 0) || ((sizeof(*ext)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*ext)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*ext) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*ext))))) goto trunc;
 memcpy((&e), (ext), (sizeof(e)));
 ikev2_pay_print(ndo, (((tpay) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(tpay)]) ? npstr[(tpay)] : numstr(tpay)), e.critical);

 (*ndo->ndo_printf)(ndo," len=%d", __ntohs(e.len) - 4);
 if (2 < ndo->ndo_vflag && 4 < __ntohs(e.len)) {

  (*ndo->ndo_printf)(ndo," ");
  if (!rawprint(ndo, (const uint8_t *)(ext + 1), __ntohs(e.len) - 4))
   goto trunc;
 }
 return (const u_char *)ext + __ntohs(e.len);
trunc:
 (*ndo->ndo_printf)(ndo," [|%s]", (((tpay) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(tpay)]) ? npstr[(tpay)] : numstr(tpay)));
 return 
       ((void *)0)
           ;
}

static const u_char *
ikev2_t_print(netdissect_options *ndo, int tcount,
       const struct isakmp_gen *ext, u_int item_len,
       const u_char *ep)
{
 const struct ikev2_t *p={0};
 struct ikev2_t t={0};
 uint16_t t_id={0};
 const u_char *cp={0};
 const char *idstr={0};
 const struct attrmap *map={0};
 size_t nmap={0};
 const u_char *ep2={0};

 p = (const struct ikev2_t *)ext;
 if (!((((sizeof(*p)) > 0) || ((sizeof(*p)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*p)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*p) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*p))))) goto trunc;
 memcpy((&t), (ext), (sizeof(t)));
 ikev2_pay_print(ndo, (((3) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(3)]) ? npstr[(3)] : numstr(3)), t.h.critical);

 t_id = __ntohs(t.t_id);

 map = 
      ((void *)0)
          ;
 nmap = 0;

 switch (t.t_type) {
 case IV2_T_ENCR:
  idstr = (((t_id) < sizeof(esp_p_map)/sizeof(esp_p_map[0]) && esp_p_map[(t_id)]) ? esp_p_map[(t_id)] : numstr(t_id));
  map = encr_t_map;
  nmap = sizeof(encr_t_map)/sizeof(encr_t_map[0]);
  break;

 case IV2_T_PRF:
  idstr = (((t_id) < sizeof(prf_p_map)/sizeof(prf_p_map[0]) && prf_p_map[(t_id)]) ? prf_p_map[(t_id)] : numstr(t_id));
  break;

 case IV2_T_INTEG:
  idstr = (((t_id) < sizeof(integ_p_map)/sizeof(integ_p_map[0]) && integ_p_map[(t_id)]) ? integ_p_map[(t_id)] : numstr(t_id));
  break;

 case IV2_T_DH:
  idstr = (((t_id) < sizeof(dh_p_map)/sizeof(dh_p_map[0]) && dh_p_map[(t_id)]) ? dh_p_map[(t_id)] : numstr(t_id));
  break;

 case IV2_T_ESN:
  idstr = (((t_id) < sizeof(esn_p_map)/sizeof(esn_p_map[0]) && esn_p_map[(t_id)]) ? esn_p_map[(t_id)] : numstr(t_id));
  break;

 default:
  idstr = 
         ((void *)0)
             ;
  break;
 }

 if (idstr)
  (*ndo->ndo_printf)(ndo," #%u type=%s id=%s ", tcount, (((t.t_type) < sizeof(ikev2_t_type_map)/sizeof(ikev2_t_type_map[0]) && ikev2_t_type_map[(t.t_type)]) ? ikev2_t_type_map[(t.t_type)] : numstr(t.t_type)), idstr)

            ;
 else
  (*ndo->ndo_printf)(ndo," #%u type=%s id=%u ", tcount, (((t.t_type) < sizeof(ikev2_t_type_map)/sizeof(ikev2_t_type_map[0]) && ikev2_t_type_map[(t.t_type)]) ? ikev2_t_type_map[(t.t_type)] : numstr(t.t_type)), t.t_id)

             ;
 cp = (const u_char *)(p + 1);
 ep2 = (const u_char *)p + item_len;
 while (cp < ep && cp < ep2) {
  if (map && nmap) {
   cp = ikev1_attrmap_print(ndo, cp, ep2, map, nmap);
  } else
   cp = ikev1_attr_print(ndo, cp, ep2);
  if (cp == 
           ((void *)0)
               )
   goto trunc;
 }
 if (ep < ep2)
  (*ndo->ndo_printf)(ndo,"...");
 return cp;
trunc:
 (*ndo->ndo_printf)(ndo," [|%s]", (((3) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(3)]) ? npstr[(3)] : numstr(3)));
 return 
       ((void *)0)
           ;
}

static const u_char *
ikev2_p_print(netdissect_options *ndo, u_char tpay , int pcount ,
       const struct isakmp_gen *ext, u_int oprop_length,
       const u_char *ep, int depth)
{
 const struct ikev2_p *p={0};
 struct ikev2_p prop={0};
 u_int prop_length={0};
 const u_char *cp={0};
 int i={0};
 int tcount={0};
 u_char np={0};
 struct isakmp_gen e={0};
 u_int item_len={0};

 p = (const struct ikev2_p *)ext;
 if (!((((sizeof(*p)) > 0) || ((sizeof(*p)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*p)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*p) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*p))))) goto trunc;
 memcpy((&prop), (ext), (sizeof(prop)));

 ikev2_pay_print(ndo, (((2) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(2)]) ? npstr[(2)] : numstr(2)), prop.h.critical);




 prop_length = oprop_length - 4;
 (*ndo->ndo_printf)(ndo," #%u protoid=%s transform=%d len=%u", prop.p_no, (((prop.prot_id) < sizeof(protoidstr)/sizeof(protoidstr[0]) && protoidstr[(prop.prot_id)]) ? protoidstr[(prop.prot_id)] : numstr(prop.prot_id)), prop.num_t, oprop_length)

                              ;
 cp = (const u_char *)(p + 1);

 if (prop.spi_size) {
  if (prop_length < prop.spi_size)
   goto toolong;
  (*ndo->ndo_printf)(ndo," spi=");
  if (!rawprint(ndo, (const uint8_t *)cp, prop.spi_size))
   goto trunc;
  cp += prop.spi_size;
  prop_length -= prop.spi_size;
 }




 tcount = 0;
 for (np = 3; np != 0; np = e.np) {
  tcount++;
  ext = (const struct isakmp_gen *)cp;
  if (prop_length < sizeof(*ext))
   goto toolong;
  if (!((((sizeof(*ext)) > 0) || ((sizeof(*ext)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*ext)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*ext) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*ext))))) goto trunc;
  memcpy((&e), (ext), (sizeof(e)));







  item_len = __ntohs(e.len);
  if (item_len <= 4)
   goto trunc;

  if (prop_length < item_len)
   goto toolong;
  if (!((((item_len) > 0) || ((item_len) == 0)) && ((uintptr_t)ndo->ndo_snapend - (item_len) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*cp) <= (uintptr_t)ndo->ndo_snapend - (item_len)))) goto trunc;

  depth++;
  (*ndo->ndo_printf)(ndo,"\n");
  for (i = 0; i < depth; i++)
   (*ndo->ndo_printf)(ndo,"    ");
  (*ndo->ndo_printf)(ndo,"(");
  if (np == 3) {
   cp = ikev2_t_print(ndo, tcount, ext, item_len, ep);
   if (cp == 
            ((void *)0)
                ) {

    return 
          ((void *)0)
              ;
   }
  } else {
   (*ndo->ndo_printf)(ndo, "%s", (((np) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(np)]) ? npstr[(np)] : numstr(np)));
   cp += item_len;
  }
  (*ndo->ndo_printf)(ndo,")");
  depth--;
  prop_length -= item_len;
 }
 return cp;
toolong:



 cp += prop_length;
 (*ndo->ndo_printf)(ndo," [|%s]", (((2) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(2)]) ? npstr[(2)] : numstr(2)));
 return cp;
trunc:
 (*ndo->ndo_printf)(ndo," [|%s]", (((2) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(2)]) ? npstr[(2)] : numstr(2)));
 return 
       ((void *)0)
           ;
}

static const u_char *
ikev2_sa_print(netdissect_options *ndo, u_char tpay,
  const struct isakmp_gen *ext1,
  u_int osa_length, const u_char *ep,
  uint32_t phase , uint32_t doi ,
  uint32_t proto , int depth)
{
 const struct isakmp_gen *ext={0};
 struct isakmp_gen e={0};
 u_int sa_length={0};
 const u_char *cp={0};
 int i={0};
 int pcount={0};
 u_char np={0};
 u_int item_len={0};

 if (!((((sizeof(*ext1)) > 0) || ((sizeof(*ext1)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*ext1)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*ext1) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*ext1))))) goto trunc;
 memcpy((&e), (ext1), (sizeof(e)));
 ikev2_pay_print(ndo, "sa", e.critical);




 osa_length= __ntohs(e.len);
 sa_length = osa_length - 4;
 (*ndo->ndo_printf)(ndo," len=%d", sa_length);




 cp = (const u_char *)(ext1 + 1);
 pcount = 0;
 for (np = 2; np != 0; np = e.np) {
  pcount++;
  ext = (const struct isakmp_gen *)cp;
  if (sa_length < sizeof(*ext))
   goto toolong;
  if (!((((sizeof(*ext)) > 0) || ((sizeof(*ext)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*ext)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*ext) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*ext))))) goto trunc;
  memcpy((&e), (ext), (sizeof(e)));







  item_len = __ntohs(e.len);
  if (item_len <= 4)
   goto trunc;

  if (sa_length < item_len)
   goto toolong;
  if (!((((item_len) > 0) || ((item_len) == 0)) && ((uintptr_t)ndo->ndo_snapend - (item_len) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*cp) <= (uintptr_t)ndo->ndo_snapend - (item_len)))) goto trunc;

  depth++;
  (*ndo->ndo_printf)(ndo,"\n");
  for (i = 0; i < depth; i++)
   (*ndo->ndo_printf)(ndo,"    ");
  (*ndo->ndo_printf)(ndo,"(");
  if (np == 2) {
   cp = ikev2_p_print(ndo, np, pcount, ext, item_len,
        ep, depth);
   if (cp == 
            ((void *)0)
                ) {

    return 
          ((void *)0)
              ;
   }
  } else {
   (*ndo->ndo_printf)(ndo, "%s", (((np) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(np)]) ? npstr[(np)] : numstr(np)));
   cp += item_len;
  }
  (*ndo->ndo_printf)(ndo,")");
  depth--;
  sa_length -= item_len;
 }
 return cp;
toolong:



 cp += sa_length;
 (*ndo->ndo_printf)(ndo," [|%s]", (((tpay) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(tpay)]) ? npstr[(tpay)] : numstr(tpay)));
 return cp;
trunc:
 (*ndo->ndo_printf)(ndo," [|%s]", (((tpay) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(tpay)]) ? npstr[(tpay)] : numstr(tpay)));
 return 
       ((void *)0)
           ;
}

static const u_char *
ikev2_ke_print(netdissect_options *ndo, u_char tpay,
  const struct isakmp_gen *ext,
  u_int item_len , const u_char *ep ,
  uint32_t phase , uint32_t doi ,
  uint32_t proto , int depth )
{
 struct ikev2_ke ke={0};
 const struct ikev2_ke *k={0};

 k = (const struct ikev2_ke *)ext;
 if (!((((sizeof(*k)) > 0) || ((sizeof(*k)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*k)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*k) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*k))))) goto trunc;
 memcpy((&ke), (ext), (sizeof(ke)));
 ikev2_pay_print(ndo, (((tpay) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(tpay)]) ? npstr[(tpay)] : numstr(tpay)), ke.h.critical);

 (*ndo->ndo_printf)(ndo," len=%u group=%s", __ntohs(ke.h.len) - 8, (((__ntohs(ke.ke_group)) < sizeof(dh_p_map)/sizeof(dh_p_map[0]) && dh_p_map[(__ntohs(ke.ke_group))]) ? dh_p_map[(__ntohs(ke.ke_group))] : numstr(__ntohs(ke.ke_group))))
                                             ;

 if (2 < ndo->ndo_vflag && 8 < __ntohs(ke.h.len)) {
  (*ndo->ndo_printf)(ndo," ");
  if (!rawprint(ndo, (const uint8_t *)(k + 1), __ntohs(ke.h.len) - 8))
   goto trunc;
 }
 return (const u_char *)ext + __ntohs(ke.h.len);
trunc:
 (*ndo->ndo_printf)(ndo," [|%s]", (((tpay) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(tpay)]) ? npstr[(tpay)] : numstr(tpay)));
 return 
       ((void *)0)
           ;
}

static const u_char *
ikev2_ID_print(netdissect_options *ndo, u_char tpay,
  const struct isakmp_gen *ext,
  u_int item_len , const u_char *ep ,
  uint32_t phase , uint32_t doi ,
  uint32_t proto , int depth )
{
 const struct ikev2_id *idp={0};
 struct ikev2_id id={0};
 int id_len, idtype_len, i={0};
 unsigned int dumpascii, dumphex={0};
 const unsigned char *typedata={0};

 idp = (const struct ikev2_id *)ext;
 if (!((((sizeof(*idp)) > 0) || ((sizeof(*idp)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*idp)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*idp) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*idp))))) goto trunc;
 memcpy((&id), (ext), (sizeof(id)));
 ikev2_pay_print(ndo, (((tpay) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(tpay)]) ? npstr[(tpay)] : numstr(tpay)), id.h.critical);

 id_len = __ntohs(id.h.len);

 (*ndo->ndo_printf)(ndo," len=%d", id_len - 4);
 if (2 < ndo->ndo_vflag && 4 < id_len) {

  (*ndo->ndo_printf)(ndo," ");
  if (!rawprint(ndo, (const uint8_t *)(ext + 1), id_len - 4))
   goto trunc;
 }

 idtype_len =id_len - sizeof(struct ikev2_id);
 dumpascii = 0;
 dumphex = 0;
 typedata = (const unsigned char *)(ext)+sizeof(struct ikev2_id);

 switch(id.type) {
 case ID_IPV4_ADDR:
  (*ndo->ndo_printf)(ndo, " ipv4:");
  dumphex=1;
  break;
 case ID_FQDN:
  (*ndo->ndo_printf)(ndo, " fqdn:");
  dumpascii=1;
  break;
 case ID_RFC822_ADDR:
  (*ndo->ndo_printf)(ndo, " rfc822:");
  dumpascii=1;
  break;
 case ID_IPV6_ADDR:
  (*ndo->ndo_printf)(ndo, " ipv6:");
  dumphex=1;
  break;
 case ID_DER_ASN1_DN:
  (*ndo->ndo_printf)(ndo, " dn:");
  dumphex=1;
  break;
 case ID_DER_ASN1_GN:
  (*ndo->ndo_printf)(ndo, " gn:");
  dumphex=1;
  break;
 case ID_KEY_ID:
  (*ndo->ndo_printf)(ndo, " keyid:");
  dumphex=1;
  break;
 }

 if(dumpascii) {
  if (!((((idtype_len) > 0) || ((idtype_len) == 0)) && ((uintptr_t)ndo->ndo_snapend - (idtype_len) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*typedata) <= (uintptr_t)ndo->ndo_snapend - (idtype_len)))) goto trunc;
  for(i=0; i<idtype_len; i++) {
   if(((typedata[i]) >= 0x20 && (typedata[i]) <= 0x7E)) {
    (*ndo->ndo_printf)(ndo, "%c", typedata[i]);
   } else {
    (*ndo->ndo_printf)(ndo, ".");
   }
  }
 }
 if(dumphex) {
  if (!rawprint(ndo, (const uint8_t *)typedata, idtype_len))
   goto trunc;
 }

 return (const u_char *)ext + id_len;
trunc:
 (*ndo->ndo_printf)(ndo," [|%s]", (((tpay) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(tpay)]) ? npstr[(tpay)] : numstr(tpay)));
 return 
       ((void *)0)
           ;
}

static const u_char *
ikev2_cert_print(netdissect_options *ndo, u_char tpay,
  const struct isakmp_gen *ext,
  u_int item_len , const u_char *ep ,
  uint32_t phase , uint32_t doi ,
  uint32_t proto , int depth )
{
 return ikev2_gen_print(ndo, tpay, ext);
}

static const u_char *
ikev2_cr_print(netdissect_options *ndo, u_char tpay,
  const struct isakmp_gen *ext,
  u_int item_len , const u_char *ep ,
  uint32_t phase , uint32_t doi ,
  uint32_t proto , int depth )
{
 return ikev2_gen_print(ndo, tpay, ext);
}

static const u_char *
ikev2_auth_print(netdissect_options *ndo, u_char tpay,
  const struct isakmp_gen *ext,
  u_int item_len , const u_char *ep,
  uint32_t phase , uint32_t doi ,
  uint32_t proto , int depth )
{
 struct ikev2_auth a={0};
 const char *v2_auth[]={ "invalid", "rsasig",
    "shared-secret", "dsssig" };
 const u_char *authdata = (const u_char*)ext + sizeof(a);
 unsigned int len={0};

 if (!((((sizeof(a)) > 0) || ((sizeof(a)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(a)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*ext) <= (uintptr_t)ndo->ndo_snapend - (sizeof(a))))) goto trunc;
 memcpy((&a), (ext), (sizeof(a)));
 ikev2_pay_print(ndo, (((tpay) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(tpay)]) ? npstr[(tpay)] : numstr(tpay)), a.h.critical);
 len = __ntohs(a.h.len);




 (*ndo->ndo_printf)(ndo," len=%u method=%s", len-4, (((a.auth_method) < sizeof(v2_auth)/sizeof(v2_auth[0]) && v2_auth[(a.auth_method)]) ? v2_auth[(a.auth_method)] : numstr(a.auth_method)))
                                       ;
 if (len > 4) {
  if (ndo->ndo_vflag > 1) {
   (*ndo->ndo_printf)(ndo, " authdata=(");
   if (!rawprint(ndo, (const uint8_t *)authdata, len - sizeof(a)))
    goto trunc;
   (*ndo->ndo_printf)(ndo, ") ");
  } else if (ndo->ndo_vflag) {
   if (!ike_show_somedata(ndo, authdata, ep))
    goto trunc;
  }
 }

 return (const u_char *)ext + len;
trunc:
 (*ndo->ndo_printf)(ndo," [|%s]", (((tpay) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(tpay)]) ? npstr[(tpay)] : numstr(tpay)));
 return 
       ((void *)0)
           ;
}

static const u_char *
ikev2_nonce_print(netdissect_options *ndo, u_char tpay,
  const struct isakmp_gen *ext,
  u_int item_len , const u_char *ep,
  uint32_t phase , uint32_t doi ,
  uint32_t proto , int depth )
{
 struct isakmp_gen e={0};

 if (!((((sizeof(*ext)) > 0) || ((sizeof(*ext)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*ext)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*ext) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*ext))))) goto trunc;
 memcpy((&e), (ext), (sizeof(e)));
 ikev2_pay_print(ndo, "nonce", e.critical);

 (*ndo->ndo_printf)(ndo," len=%d", __ntohs(e.len) - 4);
 if (1 < ndo->ndo_vflag && 4 < __ntohs(e.len)) {
  (*ndo->ndo_printf)(ndo," nonce=(");
  if (!rawprint(ndo, (const uint8_t *)(ext + 1), __ntohs(e.len) - 4))
   goto trunc;
  (*ndo->ndo_printf)(ndo,") ");
 } else if(ndo->ndo_vflag && 4 < __ntohs(e.len)) {
  if(!ike_show_somedata(ndo, (const u_char *)(ext+1), ep)) goto trunc;
 }

 return (const u_char *)ext + __ntohs(e.len);
trunc:
 (*ndo->ndo_printf)(ndo," [|%s]", (((tpay) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(tpay)]) ? npstr[(tpay)] : numstr(tpay)));
 return 
       ((void *)0)
           ;
}


static const u_char *
ikev2_n_print(netdissect_options *ndo, u_char tpay ,
  const struct isakmp_gen *ext,
  u_int item_len, const u_char *ep,
  uint32_t phase , uint32_t doi ,
  uint32_t proto , int depth )
{
 const struct ikev2_n *p={0};
 struct ikev2_n n={0};
 const u_char *cp={0};
 u_char showspi, showsomedata={0};
 const char *notify_name={0};
 uint32_t type={0};

 p = (const struct ikev2_n *)ext;
 if (!((((sizeof(*p)) > 0) || ((sizeof(*p)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*p)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*p) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*p))))) goto trunc;
 memcpy((&n), (ext), (sizeof(n)));
 ikev2_pay_print(ndo, (((11) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(11)]) ? npstr[(11)] : numstr(11)), n.h.critical);

 showspi = 1;
 showsomedata=0;
 notify_name=
            ((void *)0)
                ;

 (*ndo->ndo_printf)(ndo," prot_id=%s", (((n.prot_id) < sizeof(protoidstr)/sizeof(protoidstr[0]) && protoidstr[(n.prot_id)]) ? protoidstr[(n.prot_id)] : numstr(n.prot_id)));

 type = __ntohs(n.type);


 switch(type) {
 case IV2_NOTIFY_UNSUPPORTED_CRITICAL_PAYLOAD:
  notify_name = "unsupported_critical_payload";
  showspi = 0;
  break;

 case IV2_NOTIFY_INVALID_IKE_SPI:
  notify_name = "invalid_ike_spi";
  showspi = 1;
  break;

 case IV2_NOTIFY_INVALID_MAJOR_VERSION:
  notify_name = "invalid_major_version";
  showspi = 0;
  break;

 case IV2_NOTIFY_INVALID_SYNTAX:
  notify_name = "invalid_syntax";
  showspi = 1;
  break;

 case IV2_NOTIFY_INVALID_MESSAGE_ID:
  notify_name = "invalid_message_id";
  showspi = 1;
  break;

 case IV2_NOTIFY_INVALID_SPI:
  notify_name = "invalid_spi";
  showspi = 1;
  break;

 case IV2_NOTIFY_NO_PROPOSAL_CHOSEN:
  notify_name = "no_protocol_chosen";
  showspi = 1;
  break;

 case IV2_NOTIFY_INVALID_KE_PAYLOAD:
  notify_name = "invalid_ke_payload";
  showspi = 1;
  break;

 case IV2_NOTIFY_AUTHENTICATION_FAILED:
  notify_name = "authentication_failed";
  showspi = 1;
  break;

 case IV2_NOTIFY_SINGLE_PAIR_REQUIRED:
  notify_name = "single_pair_required";
  showspi = 1;
  break;

 case IV2_NOTIFY_NO_ADDITIONAL_SAS:
  notify_name = "no_additional_sas";
  showspi = 0;
  break;

 case IV2_NOTIFY_INTERNAL_ADDRESS_FAILURE:
  notify_name = "internal_address_failure";
  showspi = 0;
  break;

 case IV2_NOTIFY_FAILED_CP_REQUIRED:
  notify_name = "failed:cp_required";
  showspi = 0;
  break;

 case IV2_NOTIFY_INVALID_SELECTORS:
  notify_name = "invalid_selectors";
  showspi = 0;
  break;

 case IV2_NOTIFY_INITIAL_CONTACT:
  notify_name = "initial_contact";
  showspi = 0;
  break;

 case IV2_NOTIFY_SET_WINDOW_SIZE:
  notify_name = "set_window_size";
  showspi = 0;
  break;

 case IV2_NOTIFY_ADDITIONAL_TS_POSSIBLE:
  notify_name = "additional_ts_possible";
  showspi = 0;
  break;

 case IV2_NOTIFY_IPCOMP_SUPPORTED:
  notify_name = "ipcomp_supported";
  showspi = 0;
  break;

 case IV2_NOTIFY_NAT_DETECTION_SOURCE_IP:
  notify_name = "nat_detection_source_ip";
  showspi = 1;
  break;

 case IV2_NOTIFY_NAT_DETECTION_DESTINATION_IP:
  notify_name = "nat_detection_destination_ip";
  showspi = 1;
  break;

 case IV2_NOTIFY_COOKIE:
  notify_name = "cookie";
  showspi = 1;
  showsomedata= 1;
  break;

 case IV2_NOTIFY_USE_TRANSPORT_MODE:
  notify_name = "use_transport_mode";
  showspi = 0;
  break;

 case IV2_NOTIFY_HTTP_CERT_LOOKUP_SUPPORTED:
  notify_name = "http_cert_lookup_supported";
  showspi = 0;
  break;

 case IV2_NOTIFY_REKEY_SA:
  notify_name = "rekey_sa";
  showspi = 1;
  break;

 case IV2_NOTIFY_ESP_TFC_PADDING_NOT_SUPPORTED:
  notify_name = "tfc_padding_not_supported";
  showspi = 0;
  break;

 case IV2_NOTIFY_NON_FIRST_FRAGMENTS_ALSO:
  notify_name = "non_first_fragment_also";
  showspi = 0;
  break;

 default:
  if (type < 8192) {
   notify_name="error";
  } else if(type < 16384) {
   notify_name="private-error";
  } else if(type < 40960) {
   notify_name="status";
  } else {
   notify_name="private-status";
  }
 }

 if(notify_name) {
  (*ndo->ndo_printf)(ndo," type=%u(%s)", type, notify_name);
 }


 if (showspi && n.spi_size) {
  (*ndo->ndo_printf)(ndo," spi=");
  if (!rawprint(ndo, (const uint8_t *)(p + 1), n.spi_size))
   goto trunc;
 }

 cp = (const u_char *)(p + 1) + n.spi_size;

 if (cp < ep) {
  if (ndo->ndo_vflag > 3 || (showsomedata && ep-cp < 30)) {
   (*ndo->ndo_printf)(ndo," data=(");
   if (!rawprint(ndo, (const uint8_t *)(cp), ep - cp))
    goto trunc;

   (*ndo->ndo_printf)(ndo,")");
  } else if (showsomedata) {
   if (!ike_show_somedata(ndo, cp, ep))
    goto trunc;
  }
 }

 return (const u_char *)ext + item_len;
trunc:
 (*ndo->ndo_printf)(ndo," [|%s]", (((11) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(11)]) ? npstr[(11)] : numstr(11)));
 return 
       ((void *)0)
           ;
}

static const u_char *
ikev2_d_print(netdissect_options *ndo, u_char tpay,
  const struct isakmp_gen *ext,
  u_int item_len , const u_char *ep ,
  uint32_t phase , uint32_t doi ,
  uint32_t proto , int depth )
{
 return ikev2_gen_print(ndo, tpay, ext);
}

static const u_char *
ikev2_vid_print(netdissect_options *ndo, u_char tpay,
  const struct isakmp_gen *ext,
  u_int item_len , const u_char *ep ,
  uint32_t phase , uint32_t doi ,
  uint32_t proto , int depth )
{
 struct isakmp_gen e={0};
 const u_char *vid={0};
 int i, len={0};

 if (!((((sizeof(*ext)) > 0) || ((sizeof(*ext)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*ext)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*ext) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*ext))))) goto trunc;
 memcpy((&e), (ext), (sizeof(e)));
 ikev2_pay_print(ndo, (((tpay) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(tpay)]) ? npstr[(tpay)] : numstr(tpay)), e.critical);
 (*ndo->ndo_printf)(ndo," len=%d vid=", __ntohs(e.len) - 4);

 vid = (const u_char *)(ext+1);
 len = __ntohs(e.len) - 4;
 if (!((((len) > 0) || ((len) == 0)) && ((uintptr_t)ndo->ndo_snapend - (len) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*vid) <= (uintptr_t)ndo->ndo_snapend - (len)))) goto trunc;
 for(i=0; i<len; i++) {
  if(((vid[i]) >= 0x20 && (vid[i]) <= 0x7E)) (*ndo->ndo_printf)(ndo, "%c", vid[i]);
  else (*ndo->ndo_printf)(ndo, ".");
 }
 if (2 < ndo->ndo_vflag && 4 < len) {

  (*ndo->ndo_printf)(ndo," ");
  if (!rawprint(ndo, (const uint8_t *)(ext + 1), __ntohs(e.len) - 4))
   goto trunc;
 }
 return (const u_char *)ext + __ntohs(e.len);
trunc:
 (*ndo->ndo_printf)(ndo," [|%s]", (((tpay) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(tpay)]) ? npstr[(tpay)] : numstr(tpay)));
 return 
       ((void *)0)
           ;
}

static const u_char *
ikev2_TS_print(netdissect_options *ndo, u_char tpay,
  const struct isakmp_gen *ext,
  u_int item_len , const u_char *ep ,
  uint32_t phase , uint32_t doi ,
  uint32_t proto , int depth )
{
 return ikev2_gen_print(ndo, tpay, ext);
}

static const u_char *
ikev2_e_print(netdissect_options *ndo,

      

       struct isakmp *base,
       u_char tpay,
       const struct isakmp_gen *ext,
       u_int item_len , const u_char *ep ,

      

       uint32_t phase,

      

       uint32_t doi,

      

       uint32_t proto,

      

       int depth)
{
 struct isakmp_gen e={0};
 const u_char *dat={0};
 volatile int dlen={0};

 if (!((((sizeof(*ext)) > 0) || ((sizeof(*ext)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*ext)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*ext) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*ext))))) goto trunc;
 memcpy((&e), (ext), (sizeof(e)));
 ikev2_pay_print(ndo, (((tpay) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(tpay)]) ? npstr[(tpay)] : numstr(tpay)), e.critical);

 dlen = __ntohs(e.len)-4;

 (*ndo->ndo_printf)(ndo," len=%d", dlen);
 if (2 < ndo->ndo_vflag && 4 < dlen) {
  (*ndo->ndo_printf)(ndo," ");
  if (!rawprint(ndo, (const uint8_t *)(ext + 1), dlen))
   goto trunc;
 }

 dat = (const u_char *)(ext+1);
 if (!((((dlen) > 0) || ((dlen) == 0)) && ((uintptr_t)ndo->ndo_snapend - (dlen) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*dat) <= (uintptr_t)ndo->ndo_snapend - (dlen)))) goto trunc;
 return 
       ((void *)0)
           ;
trunc:
 (*ndo->ndo_printf)(ndo," [|%s]", (((tpay) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(tpay)]) ? npstr[(tpay)] : numstr(tpay)));
 return 
       ((void *)0)
           ;
}

static const u_char *
ikev2_cp_print(netdissect_options *ndo, u_char tpay,
  const struct isakmp_gen *ext,
  u_int item_len , const u_char *ep ,
  uint32_t phase , uint32_t doi ,
  uint32_t proto , int depth )
{
 return ikev2_gen_print(ndo, tpay, ext);
}

static const u_char *
ikev2_eap_print(netdissect_options *ndo, u_char tpay,
  const struct isakmp_gen *ext,
  u_int item_len , const u_char *ep ,
  uint32_t phase , uint32_t doi ,
  uint32_t proto , int depth )
{
 return ikev2_gen_print(ndo, tpay, ext);
}

static const u_char *
ike_sub0_print(netdissect_options *ndo,
   u_char np, const struct isakmp_gen *ext, const u_char *ep,

        uint32_t phase, uint32_t doi, uint32_t proto, int depth)
{
 const u_char *cp={0};
 struct isakmp_gen e={0};
 u_int item_len={0};

 cp = (const u_char *)ext;
 if (!((((sizeof(*ext)) > 0) || ((sizeof(*ext)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*ext)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*ext) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*ext))))) goto trunc;
 memcpy((&e), (ext), (sizeof(e)));







 item_len = __ntohs(e.len);
 if (item_len <= 4)
  return 
        ((void *)0)
            ;

 if ((((np) < sizeof(npfunc)/sizeof(npfunc[0]) && npfunc[(np)]) ? npfunc[(np)] : 
    ((void *)0)
    )) {




  cp = (*npfunc[np])(ndo, np, ext, item_len, ep, phase, doi, proto, depth);
 } else {
  (*ndo->ndo_printf)(ndo,"%s", (((np) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(np)]) ? npstr[(np)] : numstr(np)));
  cp += item_len;
 }

 return cp;
trunc:
 (*ndo->ndo_printf)(ndo," [|isakmp]");
 return 
       ((void *)0)
           ;
}

static const u_char *
ikev1_sub_print(netdissect_options *ndo,
  u_char np, const struct isakmp_gen *ext, const u_char *ep,
  uint32_t phase, uint32_t doi, uint32_t proto, int depth)
{
 const u_char *cp={0};
 int i={0};
 struct isakmp_gen e={0};

 cp = (const u_char *)ext;

 while (np) {
  if (!((((sizeof(*ext)) > 0) || ((sizeof(*ext)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*ext)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*ext) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*ext))))) goto trunc;
  memcpy((&e), (ext), (sizeof(e)));

  if (!((((__ntohs(e.len)) > 0) || ((__ntohs(e.len)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (__ntohs(e.len)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*ext) <= (uintptr_t)ndo->ndo_snapend - (__ntohs(e.len))))) goto trunc;

  depth++;
  (*ndo->ndo_printf)(ndo,"\n");
  for (i = 0; i < depth; i++)
   (*ndo->ndo_printf)(ndo,"    ");
  (*ndo->ndo_printf)(ndo,"(");
  cp = ike_sub0_print(ndo, np, ext, ep, phase, doi, proto, depth);
  (*ndo->ndo_printf)(ndo,")");
  depth--;

  if (cp == 
           ((void *)0)
               ) {

   return 
         ((void *)0)
             ;
  }

  np = e.np;
  ext = (const struct isakmp_gen *)cp;
 }
 return cp;
trunc:
 (*ndo->ndo_printf)(ndo," [|%s]", (((np) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(np)]) ? npstr[(np)] : numstr(np)));
 return 
       ((void *)0)
           ;
}

static char *
numstr(int x)
{
 static char buf[20]={0};
 snprintf(buf, sizeof(buf), "#%d", x);
 return buf;
}

static void
ikev1_print(netdissect_options *ndo,
     const u_char *bp, u_int length,
     const u_char *bp2, struct isakmp *base)
{
 const struct isakmp *p={0};
 const u_char *ep={0};
 u_char np={0};
 int i={0};
 int phase={0};

 p = (const struct isakmp *)bp;
 ep = ndo->ndo_snapend;

 phase = (EXTRACT_32BITS(base->msgid) == 0) ? 1 : 2;
 if (phase == 1)
  (*ndo->ndo_printf)(ndo," phase %d", phase);
 else
  (*ndo->ndo_printf)(ndo," phase %d/others", phase);

 i = cookie_find(&base->i_ck);
 if (i < 0) {
  if (iszero((const u_char *)&base->r_ck, sizeof(base->r_ck))) {

   (*ndo->ndo_printf)(ndo," I");
   if (bp2)
    cookie_record(&base->i_ck, bp2);
  } else
   (*ndo->ndo_printf)(ndo," ?");
 } else {
  if (bp2 && cookie_sidecheck((i), (bp2), 1))
   (*ndo->ndo_printf)(ndo," I");
  else if (bp2 && cookie_sidecheck((i), (bp2), 0))
   (*ndo->ndo_printf)(ndo," R");
  else
   (*ndo->ndo_printf)(ndo," ?");
 }

 (*ndo->ndo_printf)(ndo," %s", (((base->etype) < sizeof(etypestr)/sizeof(etypestr[0]) && etypestr[(base->etype)]) ? etypestr[(base->etype)] : numstr(base->etype)));
 if (base->flags) {
  (*ndo->ndo_printf)(ndo,"[%s%s]", base->flags & 0x01 ? "E" : "", base->flags & 0x02 ? "C" : "")
                                             ;
 }

 if (ndo->ndo_vflag) {
  const struct isakmp_gen *ext={0};

  (*ndo->ndo_printf)(ndo,":");


  if (base->flags & 0x01) {




   (*ndo->ndo_printf)(ndo," [encrypted %s]", (((base->np) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(base->np)]) ? npstr[(base->np)] : numstr(base->np)));
   goto done;
  }

  if (ep < (const u_char *)(p + 1)) { (*ndo->ndo_printf)(ndo," [|%s]", (((base->np) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(base->np)]) ? npstr[(base->np)] : numstr(base->np))); goto done; };
  np = base->np;
  ext = (const struct isakmp_gen *)(p + 1);
  ikev1_sub_print(ndo, np, ext, ep, phase, 0, 0, 0);
 }

done:
 if (ndo->ndo_vflag) {
  if (__ntohl(base->len) != length) {
   (*ndo->ndo_printf)(ndo," (len mismatch: isakmp %u/ip %u)", (uint32_t)__ntohl(base->len), length)
                                          ;
  }
 }
}

static const u_char *
ikev2_sub0_print(netdissect_options *ndo, struct isakmp *base,
   u_char np,
   const struct isakmp_gen *ext, const u_char *ep,
   uint32_t phase, uint32_t doi, uint32_t proto, int depth)
{
 const u_char *cp={0};
 struct isakmp_gen e={0};
 u_int item_len={0};

 cp = (const u_char *)ext;
 if (!((((sizeof(*ext)) > 0) || ((sizeof(*ext)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*ext)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*ext) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*ext))))) goto trunc;
 memcpy((&e), (ext), (sizeof(e)));







 item_len = __ntohs(e.len);
 if (item_len <= 4)
  return 
        ((void *)0)
            ;

 if (np == 46) {
  cp = ikev2_e_print(ndo, base, np, ext, item_len,
       ep, phase, doi, proto, depth);
 } else if ((((np) < sizeof(npfunc)/sizeof(npfunc[0]) && npfunc[(np)]) ? npfunc[(np)] : 
           ((void *)0)
           )) {




  cp = (*npfunc[np])(ndo, np, ext, item_len,
       ep, phase, doi, proto, depth);
 } else {
  (*ndo->ndo_printf)(ndo,"%s", (((np) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(np)]) ? npstr[(np)] : numstr(np)));
  cp += item_len;
 }

 return cp;
trunc:
 (*ndo->ndo_printf)(ndo," [|isakmp]");
 return 
       ((void *)0)
           ;
}

static const u_char *
ikev2_sub_print(netdissect_options *ndo,
  struct isakmp *base,
  u_char np, const struct isakmp_gen *ext, const u_char *ep,
  uint32_t phase, uint32_t doi, uint32_t proto, int depth)
{
 const u_char *cp={0};
 int i={0};
 struct isakmp_gen e={0};

 cp = (const u_char *)ext;
 while (np) {
  if (!((((sizeof(*ext)) > 0) || ((sizeof(*ext)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(*ext)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*ext) <= (uintptr_t)ndo->ndo_snapend - (sizeof(*ext))))) goto trunc;
  memcpy((&e), (ext), (sizeof(e)));

  if (!((((__ntohs(e.len)) > 0) || ((__ntohs(e.len)) == 0)) && ((uintptr_t)ndo->ndo_snapend - (__ntohs(e.len)) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(*ext) <= (uintptr_t)ndo->ndo_snapend - (__ntohs(e.len))))) goto trunc;

  depth++;
  (*ndo->ndo_printf)(ndo,"\n");
  for (i = 0; i < depth; i++)
   (*ndo->ndo_printf)(ndo,"    ");
  (*ndo->ndo_printf)(ndo,"(");
  cp = ikev2_sub0_print(ndo, base, np,
          ext, ep, phase, doi, proto, depth);
  (*ndo->ndo_printf)(ndo,")");
  depth--;

  if (cp == 
           ((void *)0)
               ) {

   return 
         ((void *)0)
             ;
  }

  np = e.np;
  ext = (const struct isakmp_gen *)cp;
 }
 return cp;
trunc:
 (*ndo->ndo_printf)(ndo," [|%s]", (((np) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(np)]) ? npstr[(np)] : numstr(np)));
 return 
       ((void *)0)
           ;
}

static void
ikev2_print(netdissect_options *ndo,
     const u_char *bp, u_int length,
     const u_char *bp2 , struct isakmp *base)
{
 const struct isakmp *p={0};
 const u_char *ep={0};
 u_char np={0};
 int phase={0};

 p = (const struct isakmp *)bp;
 ep = ndo->ndo_snapend;

 phase = (EXTRACT_32BITS(base->msgid) == 0) ? 1 : 2;
 if (phase == 1)
  (*ndo->ndo_printf)(ndo, " parent_sa");
 else
  (*ndo->ndo_printf)(ndo, " child_sa ");

 (*ndo->ndo_printf)(ndo, " %s", (((base->etype) < sizeof(etypestr)/sizeof(etypestr[0]) && etypestr[(base->etype)]) ? etypestr[(base->etype)] : numstr(base->etype)));
 if (base->flags) {
  (*ndo->ndo_printf)(ndo, "[%s%s%s]", base->flags & (1 << 3) ? "I" : "", base->flags & (1 << 4) ? "V" : "", base->flags & (1 << 5) ? "R" : "")


                                             ;
 }

 if (ndo->ndo_vflag) {
  const struct isakmp_gen *ext={0};

  (*ndo->ndo_printf)(ndo, ":");


  if (base->flags & 0x01) {




   (*ndo->ndo_printf)(ndo, " [encrypted %s]", (((base->np) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(base->np)]) ? npstr[(base->np)] : numstr(base->np)));
   goto done;
  }

  if (ep < (const u_char *)(p + 1)) { (*ndo->ndo_printf)(ndo," [|%s]", (((base->np) < sizeof(npstr)/sizeof(npstr[0]) && npstr[(base->np)]) ? npstr[(base->np)] : numstr(base->np))); goto done; }

  np = base->np;
  ext = (const struct isakmp_gen *)(p + 1);
  ikev2_sub_print(ndo, base, np, ext, ep, phase, 0, 0, 0);
 }

done:
 if (ndo->ndo_vflag) {
  if (__ntohl(base->len) != length) {
   (*ndo->ndo_printf)(ndo, " (len mismatch: isakmp %u/ip %u)", (uint32_t)__ntohl(base->len), length)
                                          ;
  }
 }
}

void
isakmp_print(netdissect_options *ndo,
      const u_char *bp, u_int length,
      const u_char *bp2)
{
 const struct isakmp *p={0};
 struct isakmp base={0};
 const u_char *ep={0};
 int major, minor={0};
 p = (const struct isakmp *)bp;
 ep = ndo->ndo_snapend;

 if ((const struct isakmp *)ep < p + 1) {
  (*ndo->ndo_printf)(ndo,"[|isakmp]");
  return;
 }

 memcpy((&base), (p), (sizeof(base)));

 (*ndo->ndo_printf)(ndo,"isakmp");
 major = (base.vers & 0xf0)
  >> 4;
 minor = (base.vers & 0x0f)
  >> 0;

 if (ndo->ndo_vflag) {
  (*ndo->ndo_printf)(ndo," %d.%d", major, minor);
 }

 if (ndo->ndo_vflag) {
  (*ndo->ndo_printf)(ndo," msgid ");
  hexprint(ndo, (const uint8_t *)&base.msgid, sizeof(base.msgid));
 }

 if (1 < ndo->ndo_vflag) {
  (*ndo->ndo_printf)(ndo," cookie ");
  hexprint(ndo, (const uint8_t *)&base.i_ck, sizeof(base.i_ck));
  (*ndo->ndo_printf)(ndo,"->");
  hexprint(ndo, (const uint8_t *)&base.r_ck, sizeof(base.r_ck));
 }
 (*ndo->ndo_printf)(ndo,":");

 switch(major) {
 case 1:
  ikev1_print(ndo, bp, length, bp2, &base);
  break;

 case 2:
  ikev2_print(ndo, bp, length, bp2, &base);
  break;
 }
}

void
isakmp_rfc3948_print(netdissect_options *ndo,
       const u_char *bp, u_int length,
       const u_char *bp2)
{
 if (!((((sizeof(bp[0])) > 0) || ((sizeof(bp[0])) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(bp[0])) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(bp[0]) <= (uintptr_t)ndo->ndo_snapend - (sizeof(bp[0]))))) goto trunc;
 if(length == 1 && bp[0]==0xff) {
  (*ndo->ndo_printf)(ndo, "isakmp-nat-keep-alive");
  return;
 }

 if(length < 4) {
  goto trunc;
 }
 if (!((((sizeof(bp[3])) > 0) || ((sizeof(bp[3])) == 0)) && ((uintptr_t)ndo->ndo_snapend - (sizeof(bp[3])) <= (uintptr_t)ndo->ndo_snapend && (uintptr_t)&(bp[3]) <= (uintptr_t)ndo->ndo_snapend - (sizeof(bp[3]))))) goto trunc;




 if(bp[0]==0 && bp[1]==0 && bp[2]==0 && bp[3]==0) {
  (*ndo->ndo_printf)(ndo, "NONESP-encap: ");
  isakmp_print(ndo, bp+4, length-4, bp2);
  return;
 }


 {
  int nh, enh, padlen={0};
  int advance={0};

  (*ndo->ndo_printf)(ndo, "UDP-encap: ");

  advance = esp_print(ndo, bp, length, bp2, &enh, &padlen);
  if(advance <= 0)
   return;

  bp += advance;
  length -= advance + padlen;
  nh = enh & 0xff;

  ip_print_inner(ndo, bp, length, nh, bp2);
  return;
 }

trunc:
 (*ndo->ndo_printf)(ndo,"[|isakmp]");
 return;
}
