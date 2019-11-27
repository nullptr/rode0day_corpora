











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
typedef int int8_t ;
typedef int int16_t ;
typedef int int32_t ;
typedef int int64_t ;


typedef unsigned int u_int8_t ;
typedef unsigned int u_int16_t ;
typedef unsigned int u_int32_t ;
typedef unsigned int u_int64_t ;

typedef int register_t ;






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







typedef __socklen_t socklen_t;




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





typedef long int wchar_t;








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
     ;

extern int atoi (const char *__nptr)
     ;

extern long int atol (const char *__nptr)
     ;





__extension__ extern long long int atoll (const char *__nptr)
     ;





extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     ;





extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) ;

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     ;





extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     ;

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     ;




__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     ;

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     ;





__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     ;

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     ;

extern char *l64a (long int __n) ;


extern long int a64l (const char *__s)
     ;
extern long int random (void) ;


extern void srandom (unsigned int __seed) ;





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) ;



extern char *setstate (char *__statebuf) ;







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
       int32_t *__restrict __result) ;

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     ;

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     ;

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     ;






extern int rand (void) ;

extern void srand (unsigned int __seed) ;




extern int rand_r (unsigned int *__seed) ;







extern double drand48 (void) ;
extern double erand48 (unsigned short int __xsubi[3]) ;


extern long int lrand48 (void) ;
extern long int nrand48 (unsigned short int __xsubi[3])
     ;


extern long int mrand48 (void) ;
extern long int jrand48 (unsigned short int __xsubi[3])
     ;


extern void srand48 (long int __seedval) ;
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     ;
extern void lcong48 (unsigned short int __param[7]) ;





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) ;
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) ;


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     ;
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     ;


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     ;
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     ;


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     ;

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) ;

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     ;









extern void *malloc (size_t __size) ;

extern void *calloc (size_t __nmemb, size_t __size)
     ;










extern void *realloc (void *__ptr, size_t __size)
     ;

extern void free (void *__ptr) ;




extern void cfree (void *__ptr) ;










extern void *alloca (size_t __size) ;











extern void *valloc (size_t __size) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     ;




extern void *aligned_alloc (size_t __alignment, size_t __size)
     ;




extern void abort (void) ;



extern int atexit (void (*__func) (void)) ;







extern int at_quick_exit (void (*__func) (void)) ;







extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     ;






extern void exit (int __status) ;





extern void quick_exit (int __status) ;







extern void _Exit (int __status) ;






extern char *getenv (const char *__name) ;

extern int putenv (char *__string) ;





extern int setenv (const char *__name, const char *__value, int __replace)
     ;


extern int unsetenv (const char *__name) ;






extern int clearenv (void) ;
extern char *mktemp (char *__template) ;
extern int mkstemp (char *__template) ;
extern int mkstemps (char *__template, int __suffixlen) ;
extern char *mkdtemp (char *__template) ;





extern int system (const char *__command) ;

extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) ;






typedef int (*__compar_fn_t) (const void *, const void *);



extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     ;







extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) ;
extern int abs (int __x) ;
extern long int labs (long int __x) ;



__extension__ extern long long int llabs (long long int __x)
     ;







extern div_t div (int __numer, int __denom)
     ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     ;

extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) ;
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) ;

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     ;
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     ;






extern int mblen (const char *__s, size_t __n) ;


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) ;


extern int wctomb (char *__s, wchar_t __wchar) ;



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) ;

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     ;








extern int rpmatch (const char *__response) ;
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     ;
extern int getloadavg (double __loadavg[], int __nelem)
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






typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;


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



typedef int __jmp_buf[6];



struct __jmp_buf_tag
  {




    __jmp_buf __jmpbuf;
    int __mask_was_saved;
    __sigset_t __saved_mask;
  };




typedef struct __jmp_buf_tag jmp_buf[1];



extern int setjmp (jmp_buf __env) ;






extern int __sigsetjmp (struct __jmp_buf_tag __env[1], int __savemask) ;



extern int _setjmp (struct __jmp_buf_tag __env[1]) ;










extern void longjmp (struct __jmp_buf_tag __env[1], int __val)
     ;







extern void _longjmp (struct __jmp_buf_tag __env[1], int __val)
     ;







typedef struct __jmp_buf_tag sigjmp_buf[1];
extern void siglongjmp (sigjmp_buf __env, int __val)
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






void pcap_fmt_errmsg_for_errno(char *, size_t, int,
    const char *, ...) ;
struct pcap_opt {
 char *device;
 int timeout;
 u_int buffer_size;
 int promisc;
 int rfmon;
 int immediate;
 int nonblock;
 int tstamp_type;
 int tstamp_precision;





 int protocol;




};

typedef int (*activate_op_t)(pcap_t *);
typedef int (*can_set_rfmon_op_t)(pcap_t *);
typedef int (*read_op_t)(pcap_t *, int cnt, pcap_handler, u_char *);
typedef int (*next_packet_op_t)(pcap_t *, struct pcap_pkthdr *, u_char **);
typedef int (*inject_op_t)(pcap_t *, const void *, size_t);
typedef void (*save_current_filter_op_t)(pcap_t *, const char *);
typedef int (*setfilter_op_t)(pcap_t *, struct bpf_program *);
typedef int (*setdirection_op_t)(pcap_t *, pcap_direction_t);
typedef int (*set_datalink_op_t)(pcap_t *, int);
typedef int (*getnonblock_op_t)(pcap_t *);
typedef int (*setnonblock_op_t)(pcap_t *, int);
typedef int (*stats_op_t)(pcap_t *, struct pcap_stat *);
typedef void (*cleanup_op_t)(pcap_t *);





struct pcap {



 read_op_t read_op;




 next_packet_op_t next_packet_op;




 int fd;





 u_int bufsize;
 void *buffer;
 u_char *bp;
 int cc;

 sig_atomic_t break_loop;

 void *priv;





 int swapped;
 FILE *rfile;
 u_int fddipad;
 struct pcap *next;







 int version_major;
 int version_minor;

 int snapshot;
 int linktype;
 int linktype_ext;
 int tzoff;
 int offset;
 int activated;
 int oldstyle;

 struct pcap_opt opt;




 u_char *pkt;






 pcap_direction_t direction;




 int bpf_codegen_flags;


 int selectable_fd;
 struct timeval *required_select_timeout;





 struct bpf_program fcode;

 char errbuf[256 + 1];
 int dlt_count;
 u_int *dlt_list;
 int tstamp_type_count;
 u_int *tstamp_type_list;
 int tstamp_precision_count;
 u_int *tstamp_precision_list;

 struct pcap_pkthdr pcap_header;




 activate_op_t activate_op;
 can_set_rfmon_op_t can_set_rfmon_op;
 inject_op_t inject_op;
 save_current_filter_op_t save_current_filter_op;
 setfilter_op_t setfilter_op;
 setdirection_op_t setdirection_op;
 set_datalink_op_t set_datalink_op;
 getnonblock_op_t getnonblock_op;
 setnonblock_op_t setnonblock_op;
 stats_op_t stats_op;




 pcap_handler oneshot_callback;
 cleanup_op_t cleanup_op;
};
struct pcap_timeval {
    bpf_int32 tv_sec;
    bpf_int32 tv_usec;
};
struct pcap_sf_pkthdr {
    struct pcap_timeval ts;
    bpf_u_int32 caplen;
    bpf_u_int32 len;
};
struct pcap_sf_patched_pkthdr {
    struct pcap_timeval ts;
    bpf_u_int32 caplen;
    bpf_u_int32 len;
    int index;
    unsigned short protocol;
    unsigned char pkt_type;
};





struct oneshot_userdata {
 struct pcap_pkthdr *hdr;
 const u_char **pkt;
 pcap_t *pd;
};





int pcap_offline_read(pcap_t *, int, pcap_handler, u_char *);



int pcap_getnonblock_fd(pcap_t *);
int pcap_setnonblock_fd(pcap_t *p, int);
pcap_t *pcap_create_interface(const char *, char *);
pcap_t *pcap_create_common(char *, size_t);
int pcap_do_addexit(pcap_t *);
void pcap_add_to_pcaps_to_close(pcap_t *);
void pcap_remove_from_pcaps_to_close(pcap_t *);
void pcap_cleanup_live_common(pcap_t *);
int pcap_check_activated(pcap_t *);
struct pcap_if_list;
typedef struct pcap_if_list pcap_if_list_t;
typedef int (*get_if_flags_func)(const char *, bpf_u_int32 *, char *);
int pcap_platform_finddevs(pcap_if_list_t *, char *);

int pcap_findalldevs_interfaces(pcap_if_list_t *, char *,
     int (*)(const char *), get_if_flags_func);

pcap_if_t *find_or_add_dev(pcap_if_list_t *, const char *, bpf_u_int32,
     get_if_flags_func, const char *, char *);
pcap_if_t *find_dev(pcap_if_list_t *, const char *);
pcap_if_t *add_dev(pcap_if_list_t *, const char *, bpf_u_int32, const char *,
     char *);
int add_addr_to_dev(pcap_if_t *, struct sockaddr *, size_t,
     struct sockaddr *, size_t, struct sockaddr *, size_t,
     struct sockaddr *dstaddr, size_t, char *errbuf);

pcap_if_t *find_or_add_if(pcap_if_list_t *, const char *, bpf_u_int32,
     get_if_flags_func, char *);
int add_addr_to_if(pcap_if_list_t *, const char *, bpf_u_int32,
     get_if_flags_func,
     struct sockaddr *, size_t, struct sockaddr *, size_t,
     struct sockaddr *, size_t, struct sockaddr *, size_t, char *);
pcap_t *pcap_open_offline_common(char *ebuf, size_t size);
void sf_cleanup(pcap_t *p);
void pcap_oneshot(u_char *, const struct pcap_pkthdr *, const u_char *);





int install_bpf_program(pcap_t *, struct bpf_program *);

int pcap_strcasecmp(const char *, const char *);

struct slist;

struct stmt {
 int code;
 struct slist *jt;
 struct slist *jf;
 bpf_int32 k;
};

struct slist {
 struct stmt s;
 struct slist *next;
};





typedef bpf_u_int32 atomset;






typedef bpf_u_int32 *uset;







struct edge {
 int id;
 int code;
 uset edom;
 struct block *succ;
 struct block *pred;
 struct edge *next;
};

struct block {
 int id;
 struct slist *stmts;
 struct stmt s;
 int mark;
 u_int longjt;
 u_int longjf;
 int level;
 int offset;
 int sense;
 struct edge et;
 struct edge ef;
 struct block *head;
 struct block *link;
 uset dom;
 uset closure;
 struct edge *in_edges;
 atomset def, kill;
 atomset in_use;
 atomset out_use;
 int oval;
 int val[(16 +2)];
};






struct arth {
 struct block *b;
 struct slist *s;
 int regno;
};

struct qual {
 unsigned char addr;
 unsigned char proto;
 unsigned char dir;
 unsigned char pad;
};

struct _compiler_state;

typedef struct _compiler_state compiler_state_t;

struct arth *gen_loadi(compiler_state_t *, int);
struct arth *gen_load(compiler_state_t *, int, struct arth *, int);
struct arth *gen_loadlen(compiler_state_t *);
struct arth *gen_neg(compiler_state_t *, struct arth *);
struct arth *gen_arth(compiler_state_t *, int, struct arth *, struct arth *);

void gen_and(struct block *, struct block *);
void gen_or(struct block *, struct block *);
void gen_not(struct block *);

struct block *gen_scode(compiler_state_t *, const char *, struct qual);
struct block *gen_ecode(compiler_state_t *, const u_char *, struct qual);
struct block *gen_acode(compiler_state_t *, const u_char *, struct qual);
struct block *gen_mcode(compiler_state_t *, const char *, const char *,
    unsigned int, struct qual);

struct block *gen_mcode6(compiler_state_t *, const char *, const char *,
    unsigned int, struct qual);

struct block *gen_ncode(compiler_state_t *, const char *, bpf_u_int32,
    struct qual);
struct block *gen_proto_abbrev(compiler_state_t *, int);
struct block *gen_relation(compiler_state_t *, int, struct arth *,
    struct arth *, int);
struct block *gen_less(compiler_state_t *, int);
struct block *gen_greater(compiler_state_t *, int);
struct block *gen_byteop(compiler_state_t *, int, int, int);
struct block *gen_broadcast(compiler_state_t *, int);
struct block *gen_multicast(compiler_state_t *, int);
struct block *gen_inbound(compiler_state_t *, int);

struct block *gen_llc(compiler_state_t *);
struct block *gen_llc_i(compiler_state_t *);
struct block *gen_llc_s(compiler_state_t *);
struct block *gen_llc_u(compiler_state_t *);
struct block *gen_llc_s_subtype(compiler_state_t *, bpf_u_int32);
struct block *gen_llc_u_subtype(compiler_state_t *, bpf_u_int32);

struct block *gen_vlan(compiler_state_t *, int);
struct block *gen_mpls(compiler_state_t *, int);

struct block *gen_pppoed(compiler_state_t *);
struct block *gen_pppoes(compiler_state_t *, int);

struct block *gen_geneve(compiler_state_t *, int);

struct block *gen_atmfield_code(compiler_state_t *, int, bpf_int32,
    bpf_u_int32, int);
struct block *gen_atmtype_abbrev(compiler_state_t *, int type);
struct block *gen_atmmulti_abbrev(compiler_state_t *, int type);

struct block *gen_mtp2type_abbrev(compiler_state_t *, int type);
struct block *gen_mtp3field_code(compiler_state_t *, int, bpf_u_int32,
    bpf_u_int32, int);


__attribute((noreturn))

struct block *gen_pf_ifname(compiler_state_t *, const char *);

__attribute((noreturn))

struct block *gen_pf_rnr(compiler_state_t *, int);

__attribute((noreturn))

struct block *gen_pf_srnr(compiler_state_t *, int);

__attribute((noreturn))

struct block *gen_pf_ruleset(compiler_state_t *, char *);

__attribute((noreturn))

struct block *gen_pf_reason(compiler_state_t *, int);

__attribute((noreturn))

struct block *gen_pf_action(compiler_state_t *, int);

struct block *gen_p80211_type(compiler_state_t *, int, int);
struct block *gen_p80211_fcdir(compiler_state_t *, int);
struct icode {
 struct block *root;
 int cur_mark;
};

void bpf_optimize(compiler_state_t *, struct icode *ic);
void __attribute((noreturn)) bpf_syntax_error(compiler_state_t *, const char *);
void __attribute((noreturn)) bpf_error(compiler_state_t *, const char *, ...)
    ;

void finish_parse(compiler_state_t *, struct block *);
char *sdup(compiler_state_t *, const char *);

struct bpf_insn *icode_to_fcode(compiler_state_t *, struct icode *,
    struct block *, u_int *);
void sappend(struct slist *, struct slist *);





int pcap_parse(void *, compiler_state_t *);
struct sll_header {
 uint16_t sll_pkttype;
 uint16_t sll_hatype;
 uint16_t sll_halen;
 uint8_t sll_addr[8];
 uint16_t sll_protocol;
};

  enum yytokentype
  {
    DST = 258,
    SRC = 259,
    HOST = 260,
    GATEWAY = 261,
    NET = 262,
    NETMASK = 263,
    PORT = 264,
    PORTRANGE = 265,
    LESS = 266,
    GREATER = 267,
    PROTO = 268,
    PROTOCHAIN = 269,
    CBYTE = 270,
    ARP = 271,
    RARP = 272,
    IP = 273,
    SCTP = 274,
    TCP = 275,
    UDP = 276,
    ICMP = 277,
    IGMP = 278,
    IGRP = 279,
    PIM = 280,
    VRRP = 281,
    CARP = 282,
    ATALK = 283,
    AARP = 284,
    DECNET = 285,
    LAT = 286,
    SCA = 287,
    MOPRC = 288,
    MOPDL = 289,
    TK_BROADCAST = 290,
    TK_MULTICAST = 291,
    NUM = 292,
    INBOUND = 293,
    OUTBOUND = 294,
    PF_IFNAME = 295,
    PF_RSET = 296,
    PF_RNR = 297,
    PF_SRNR = 298,
    PF_REASON = 299,
    PF_ACTION = 300,
    TYPE = 301,
    SUBTYPE = 302,
    DIR = 303,
    ADDR1 = 304,
    ADDR2 = 305,
    ADDR3 = 306,
    ADDR4 = 307,
    RA = 308,
    TA = 309,
    LINK = 310,
    GEQ = 311,
    LEQ = 312,
    NEQ = 313,
    ID = 314,
    EID = 315,
    HID = 316,
    HID6 = 317,
    AID = 318,
    LSH = 319,
    RSH = 320,
    LEN = 321,
    IPV6 = 322,
    ICMPV6 = 323,
    AH = 324,
    ESP = 325,
    VLAN = 326,
    MPLS = 327,
    PPPOED = 328,
    PPPOES = 329,
    GENEVE = 330,
    ISO = 331,
    ESIS = 332,
    CLNP = 333,
    ISIS = 334,
    L1 = 335,
    L2 = 336,
    IIH = 337,
    LSP = 338,
    SNP = 339,
    CSNP = 340,
    PSNP = 341,
    STP = 342,
    IPX = 343,
    NETBEUI = 344,
    LANE = 345,
    LLC = 346,
    METAC = 347,
    BCC = 348,
    SC = 349,
    ILMIC = 350,
    OAMF4EC = 351,
    OAMF4SC = 352,
    OAM = 353,
    OAMF4 = 354,
    CONNECTMSG = 355,
    METACONNECT = 356,
    VPI = 357,
    VCI = 358,
    RADIO = 359,
    FISU = 360,
    LSSU = 361,
    MSU = 362,
    HFISU = 363,
    HLSSU = 364,
    HMSU = 365,
    SIO = 366,
    OPC = 367,
    DPC = 368,
    SLS = 369,
    HSIO = 370,
    HOPC = 371,
    HDPC = 372,
    HSLS = 373,
    OR = 374,
    AND = 375,
    UMINUS = 376
  };
union YYSTYPE
{

 int i;
 bpf_u_int32 h;
 u_char *e;
 char *s;
 struct stmt *stmt;
 struct arth *a;
 struct {
  struct qual q;
  int atmfieldtype;
  int mtp3fieldtype;
  struct block *b;
 } blk;
 struct block *rblk;
};

typedef union YYSTYPE YYSTYPE;






int pcap_parse (void *yyscanner, compiler_state_t *cstate);










extern int *__errno_location (void) ;


typedef int8_t flex_int8_t;
typedef uint8_t flex_uint8_t;
typedef int16_t flex_int16_t;
typedef uint16_t flex_uint16_t;
typedef int32_t flex_int32_t;
typedef uint32_t flex_uint32_t;
typedef void* yyscan_t;
typedef struct yy_buffer_state *YY_BUFFER_STATE;




typedef size_t yy_size_t;




struct yy_buffer_state
 {
 FILE *yy_input_file;

 char *yy_ch_buf;
 char *yy_buf_pos;




 int yy_buf_size;




 int yy_n_chars;





 int yy_is_our_buffer;






 int yy_is_interactive;





 int yy_at_bol;

    int yy_bs_lineno;
    int yy_bs_column;




 int yy_fill_buffer;

 int yy_buffer_status;

 };


void pcap_restart (FILE *input_file ,yyscan_t yyscanner );
void pcap__switch_to_buffer (YY_BUFFER_STATE new_buffer ,yyscan_t yyscanner );
YY_BUFFER_STATE pcap__create_buffer (FILE *file,int size ,yyscan_t yyscanner );
void pcap__delete_buffer (YY_BUFFER_STATE b ,yyscan_t yyscanner );
void pcap__flush_buffer (YY_BUFFER_STATE b ,yyscan_t yyscanner );
void pcap_push_buffer_state (YY_BUFFER_STATE new_buffer ,yyscan_t yyscanner );
void pcap_pop_buffer_state (yyscan_t yyscanner );

YY_BUFFER_STATE pcap__scan_buffer (char *base,yy_size_t size ,yyscan_t yyscanner );
YY_BUFFER_STATE pcap__scan_string (const char *yy_str ,yyscan_t yyscanner );
YY_BUFFER_STATE pcap__scan_bytes (const char *bytes,int len ,yyscan_t yyscanner );

void *pcap_alloc (yy_size_t ,yyscan_t yyscanner );
void *pcap_realloc (void *,yy_size_t ,yyscan_t yyscanner );
void pcap_free (void * ,yyscan_t yyscanner );





typedef __useconds_t useconds_t;
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






int pcap_lex_init (yyscan_t* scanner);

int pcap_lex_init_extra (compiler_state_t * user_defined,yyscan_t* scanner);




int pcap_lex_destroy (yyscan_t yyscanner );

int pcap_get_debug (yyscan_t yyscanner );

void pcap_set_debug (int debug_flag ,yyscan_t yyscanner );

compiler_state_t * pcap_get_extra (yyscan_t yyscanner );

void pcap_set_extra (compiler_state_t * user_defined ,yyscan_t yyscanner );

FILE *pcap_get_in (yyscan_t yyscanner );

void pcap_set_in (FILE * _in_str ,yyscan_t yyscanner );

FILE *pcap_get_out (yyscan_t yyscanner );

void pcap_set_out (FILE * _out_str ,yyscan_t yyscanner );

   int pcap_get_leng (yyscan_t yyscanner );

char *pcap_get_text (yyscan_t yyscanner );

int pcap_get_lineno (yyscan_t yyscanner );

void pcap_set_lineno (int _line_number ,yyscan_t yyscanner );

int pcap_get_column (yyscan_t yyscanner );

void pcap_set_column (int _column_no ,yyscan_t yyscanner );

YYSTYPE * pcap_get_lval (yyscan_t yyscanner );

void pcap_set_lval (YYSTYPE * yylval_param ,yyscan_t yyscanner );
extern int pcap_lex
               (YYSTYPE * yylval_param ,yyscan_t yyscanner);





















typedef __signed__ char __s8;
typedef unsigned char __u8;

typedef __signed__ short __s16;
typedef unsigned short __u16;

typedef __signed__ int __s32;
typedef unsigned int __u32;


__extension__ typedef __signed__ long long __s64;
__extension__ typedef unsigned long long __u64;






typedef struct {
 unsigned long fds_bits[1024 / (8 * sizeof(long))];
} __kernel_fd_set;


typedef void (*__kernel_sighandler_t)(int);


typedef int __kernel_key_t;
typedef int __kernel_mqd_t;


typedef unsigned short __kernel_mode_t;


typedef unsigned short __kernel_ipc_pid_t;


typedef unsigned short __kernel_uid_t;
typedef unsigned short __kernel_gid_t;


typedef unsigned short __kernel_old_dev_t;


typedef long __kernel_long_t;
typedef unsigned long __kernel_ulong_t;



typedef __kernel_ulong_t __kernel_ino_t;







typedef int __kernel_pid_t;
typedef __kernel_long_t __kernel_suseconds_t;



typedef int __kernel_daddr_t;



typedef unsigned int __kernel_uid32_t;
typedef unsigned int __kernel_gid32_t;



typedef __kernel_uid_t __kernel_old_uid_t;
typedef __kernel_gid_t __kernel_old_gid_t;
typedef unsigned int __kernel_size_t;
typedef int __kernel_ssize_t;
typedef int __kernel_ptrdiff_t;
typedef struct {
 int val[2];
} __kernel_fsid_t;





typedef __kernel_long_t __kernel_off_t;
typedef long long __kernel_loff_t;
typedef __kernel_long_t __kernel_time_t;
typedef __kernel_long_t __kernel_clock_t;
typedef int __kernel_timer_t;
typedef int __kernel_clockid_t;
typedef char * __kernel_caddr_t;
typedef unsigned short __kernel_uid16_t;
typedef unsigned short __kernel_gid16_t;
typedef __u16 __le16;
typedef __u16 __be16;
typedef __u32 __le32;
typedef __u32 __be32;
typedef __u64 __le64;
typedef __u64 __be64;

typedef __u16 __sum16;
typedef __u32 __wsum;





struct sockaddr_pkt {
 unsigned short spkt_family;
 unsigned char spkt_device[14];
 __be16 spkt_protocol;
};

struct sockaddr_ll {
 unsigned short sll_family;
 __be16 sll_protocol;
 int sll_ifindex;
 unsigned short sll_hatype;
 unsigned char sll_pkttype;
 unsigned char sll_halen;
 unsigned char sll_addr[8];
};
struct tpacket_stats {
 unsigned int tp_packets;
 unsigned int tp_drops;
};

struct tpacket_stats_v3 {
 unsigned int tp_packets;
 unsigned int tp_drops;
 unsigned int tp_freeze_q_cnt;
};

struct tpacket_rollover_stats {
 __u64 tp_all;
 __u64 tp_huge;
 __u64 tp_failed;
};

union tpacket_stats_u {
 struct tpacket_stats stats1;
 struct tpacket_stats_v3 stats3;
};

struct tpacket_auxdata {
 __u32 tp_status;
 __u32 tp_len;
 __u32 tp_snaplen;
 __u16 tp_mac;
 __u16 tp_net;
 __u16 tp_vlan_tci;
 __u16 tp_vlan_tpid;
};
struct tpacket_hdr {
 unsigned long tp_status;
 unsigned int tp_len;
 unsigned int tp_snaplen;
 unsigned short tp_mac;
 unsigned short tp_net;
 unsigned int tp_sec;
 unsigned int tp_usec;
};





struct tpacket2_hdr {
 __u32 tp_status;
 __u32 tp_len;
 __u32 tp_snaplen;
 __u16 tp_mac;
 __u16 tp_net;
 __u32 tp_sec;
 __u32 tp_nsec;
 __u16 tp_vlan_tci;
 __u16 tp_vlan_tpid;
 __u8 tp_padding[4];
};

struct tpacket_hdr_variant1 {
 __u32 tp_rxhash;
 __u32 tp_vlan_tci;
 __u16 tp_vlan_tpid;
 __u16 tp_padding;
};

struct tpacket3_hdr {
 __u32 tp_next_offset;
 __u32 tp_sec;
 __u32 tp_nsec;
 __u32 tp_snaplen;
 __u32 tp_len;
 __u32 tp_status;
 __u16 tp_mac;
 __u16 tp_net;

 union {
  struct tpacket_hdr_variant1 hv1;
 };
 __u8 tp_padding[8];
};

struct tpacket_bd_ts {
 unsigned int ts_sec;
 union {
  unsigned int ts_usec;
  unsigned int ts_nsec;
 };
};

struct tpacket_hdr_v1 {
 __u32 block_status;
 __u32 num_pkts;
 __u32 offset_to_first_pkt;




 __u32 blk_len;
 __u64 seq_num;
 struct tpacket_bd_ts ts_first_pkt, ts_last_pkt;
};

union tpacket_bd_header_u {
 struct tpacket_hdr_v1 bh1;
};

struct tpacket_block_desc {
 __u32 version;
 __u32 offset_to_priv;
 union tpacket_bd_header_u hdr;
};




enum tpacket_versions {
 TPACKET_V1,
 TPACKET_V2,
 TPACKET_V3
};
struct tpacket_req {
 unsigned int tp_block_size;
 unsigned int tp_block_nr;
 unsigned int tp_frame_size;
 unsigned int tp_frame_nr;
};

struct tpacket_req3 {
 unsigned int tp_block_size;
 unsigned int tp_block_nr;
 unsigned int tp_frame_size;
 unsigned int tp_frame_nr;
 unsigned int tp_retire_blk_tov;
 unsigned int tp_sizeof_priv;
 unsigned int tp_feature_req_word;
};

union tpacket_req_u {
 struct tpacket_req req;
 struct tpacket_req3 req3;
};

struct packet_mreq {
 int mr_ifindex;
 unsigned short mr_type;
 unsigned short mr_alen;
 unsigned char mr_address[8];
};
struct sock_filter {
 __u16 code;
 __u8 jt;
 __u8 jf;
 __u32 k;
};

struct sock_fprog {
 unsigned short len;
 struct sock_filter *filter;
};



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



struct pcap_etherent {
 u_char addr[6];
 char name[122];
};



 extern struct pcap_etherent *pcap_next_etherent(FILE *);
 extern u_char *pcap_ether_hostton(const char*);
 extern u_char *pcap_ether_aton(const char *);

 extern bpf_u_int32 **pcap_nametoaddr(const char *);
 extern struct addrinfo *pcap_nametoaddrinfo(const char *);
 extern bpf_u_int32 pcap_nametonetaddr(const char *);

 extern int pcap_nametoport(const char *, int *, int *);
 extern int pcap_nametoportrange(const char *, int *, int *, int *);
 extern int pcap_nametoproto(const char *);
 extern int pcap_nametoeproto(const char *);
 extern int pcap_nametollc(const char *);

int __pcap_atodn(const char *, bpf_u_int32 *);
int __pcap_atoin(const char *, bpf_u_int32 *);
int __pcap_nametodnaddr(const char *, u_short *);
typedef struct {
 int is_variable;
 u_int constant_part;
 int reg;
} bpf_abs_offset;





enum e_offrel {
 OR_PACKET,
 OR_LINKHDR,
 OR_PREVLINKHDR,
 OR_LLC,
 OR_PREVMPLSHDR,
 OR_LINKTYPE,
 OR_LINKPL,
 OR_LINKPL_NOSNAP,
 OR_TRAN_IPV4,
 OR_TRAN_IPV6
};
struct chunk {
 size_t n_left;
 void *m;
};



struct _compiler_state {
 jmp_buf top_ctx;
 pcap_t *bpf_pcap;

 struct icode ic;

 int snaplen;

 int linktype;
 int prevlinktype;
 int outermostlinktype;

 bpf_u_int32 netmask;
 int no_optimize;


 u_int label_stack_depth;
 u_int vlan_stack_depth;


 u_int pcap_fddipad;
 struct addrinfo *ai;
 bpf_abs_offset off_linkhdr;







 bpf_abs_offset off_prevlinkhdr;





 bpf_abs_offset off_outermostlinkhdr;




 bpf_abs_offset off_linkpl;
 bpf_abs_offset off_linktype;




 int is_atm;






 int is_geneve;




 int is_vlan_vloffset;




 u_int off_vpi;
 u_int off_vci;
 u_int off_proto;




 u_int off_li;
 u_int off_li_hsl;




 u_int off_sio;
 u_int off_opc;
 u_int off_dpc;
 u_int off_sls;





 u_int off_payload;
 u_int off_nl;
 u_int off_nl_nosnap;





 int regused[
            16
                        ];
 int curreg;




 struct chunk chunks[16];
 int cur_chunk;
};

void __attribute((noreturn))
bpf_syntax_error(compiler_state_t *cstate, const char *msg)
{
 bpf_error(cstate, "syntax error in filter expression: %s", msg);

}


void __attribute((noreturn))
bpf_error(compiler_state_t *cstate, const char *fmt, ...)
{
 va_list ap={0};

 
__builtin_va_start(
ap
,
fmt
)
                 ;
 if (cstate->bpf_pcap != 
                        ((void *)0)
                            )
  (void)vsnprintf(pcap_geterr(cstate->bpf_pcap),
      256, fmt, ap);
 
__builtin_va_end(
ap
)
          ;
 longjmp(cstate->top_ctx, 1);

}

static void init_linktype(compiler_state_t *, pcap_t *);

static void init_regs(compiler_state_t *);
static int alloc_reg(compiler_state_t *);
static void free_reg(compiler_state_t *, int);

static void initchunks(compiler_state_t *cstate);
static void *newchunk(compiler_state_t *cstate, size_t);
static void freechunks(compiler_state_t *cstate);
static inline struct block *new_block(compiler_state_t *cstate, int);
static inline struct slist *new_stmt(compiler_state_t *cstate, int);
static struct block *gen_retblk(compiler_state_t *cstate, int);
static inline void syntax(compiler_state_t *cstate);

static void backpatch(struct block *, struct block *);
static void merge(struct block *, struct block *);
static struct block *gen_cmp(compiler_state_t *, enum e_offrel, u_int,
    u_int, bpf_int32);
static struct block *gen_cmp_gt(compiler_state_t *, enum e_offrel, u_int,
    u_int, bpf_int32);
static struct block *gen_cmp_ge(compiler_state_t *, enum e_offrel, u_int,
    u_int, bpf_int32);
static struct block *gen_cmp_lt(compiler_state_t *, enum e_offrel, u_int,
    u_int, bpf_int32);
static struct block *gen_cmp_le(compiler_state_t *, enum e_offrel, u_int,
    u_int, bpf_int32);
static struct block *gen_mcmp(compiler_state_t *, enum e_offrel, u_int,
    u_int, bpf_int32, bpf_u_int32);
static struct block *gen_bcmp(compiler_state_t *, enum e_offrel, u_int,
    u_int, const u_char *);
static struct block *gen_ncmp(compiler_state_t *, enum e_offrel, bpf_u_int32,
    bpf_u_int32, bpf_u_int32, bpf_u_int32, int, bpf_int32);
static struct slist *gen_load_absoffsetrel(compiler_state_t *, bpf_abs_offset *,
    u_int, u_int);
static struct slist *gen_load_a(compiler_state_t *, enum e_offrel, u_int,
    u_int);
static struct slist *gen_loadx_iphdrlen(compiler_state_t *);
static struct block *gen_uncond(compiler_state_t *, int);
static inline struct block *gen_true(compiler_state_t *);
static inline struct block *gen_false(compiler_state_t *);
static struct block *gen_ether_linktype(compiler_state_t *, int);
static struct block *gen_ipnet_linktype(compiler_state_t *, int);
static struct block *gen_linux_sll_linktype(compiler_state_t *, int);
static struct slist *gen_load_prism_llprefixlen(compiler_state_t *);
static struct slist *gen_load_avs_llprefixlen(compiler_state_t *);
static struct slist *gen_load_radiotap_llprefixlen(compiler_state_t *);
static struct slist *gen_load_ppi_llprefixlen(compiler_state_t *);
static void insert_compute_vloffsets(compiler_state_t *, struct block *);
static struct slist *gen_abs_offset_varpart(compiler_state_t *,
    bpf_abs_offset *);
static int ethertype_to_ppptype(int);
static struct block *gen_linktype(compiler_state_t *, int);
static struct block *gen_snap(compiler_state_t *, bpf_u_int32, bpf_u_int32);
static struct block *gen_llc_linktype(compiler_state_t *, int);
static struct block *gen_hostop(compiler_state_t *, bpf_u_int32, bpf_u_int32,
    int, int, u_int, u_int);

static struct block *gen_hostop6(compiler_state_t *, struct in6_addr *,
    struct in6_addr *, int, int, u_int, u_int);

static struct block *gen_ahostop(compiler_state_t *, const u_char *, int);
static struct block *gen_ehostop(compiler_state_t *, const u_char *, int);
static struct block *gen_fhostop(compiler_state_t *, const u_char *, int);
static struct block *gen_thostop(compiler_state_t *, const u_char *, int);
static struct block *gen_wlanhostop(compiler_state_t *, const u_char *, int);
static struct block *gen_ipfchostop(compiler_state_t *, const u_char *, int);
static struct block *gen_dnhostop(compiler_state_t *, bpf_u_int32, int);
static struct block *gen_mpls_linktype(compiler_state_t *, int);
static struct block *gen_host(compiler_state_t *, bpf_u_int32, bpf_u_int32,
    int, int, int);

static struct block *gen_host6(compiler_state_t *, struct in6_addr *,
    struct in6_addr *, int, int, int);





static struct block *gen_ipfrag(compiler_state_t *);
static struct block *gen_portatom(compiler_state_t *, int, bpf_int32);
static struct block *gen_portrangeatom(compiler_state_t *, int, bpf_int32,
    bpf_int32);
static struct block *gen_portatom6(compiler_state_t *, int, bpf_int32);
static struct block *gen_portrangeatom6(compiler_state_t *, int, bpf_int32,
    bpf_int32);
struct block *gen_portop(compiler_state_t *, int, int, int);
static struct block *gen_port(compiler_state_t *, int, int, int);
struct block *gen_portrangeop(compiler_state_t *, int, int, int, int);
static struct block *gen_portrange(compiler_state_t *, int, int, int, int);
struct block *gen_portop6(compiler_state_t *, int, int, int);
static struct block *gen_port6(compiler_state_t *, int, int, int);
struct block *gen_portrangeop6(compiler_state_t *, int, int, int, int);
static struct block *gen_portrange6(compiler_state_t *, int, int, int, int);
static int lookup_proto(compiler_state_t *, const char *, int);
static struct block *gen_protochain(compiler_state_t *, int, int, int);
static struct block *gen_proto(compiler_state_t *, int, int, int);
static struct slist *xfer_to_x(compiler_state_t *, struct arth *);
static struct slist *xfer_to_a(compiler_state_t *, struct arth *);
static struct block *gen_mac_multicast(compiler_state_t *, int);
static struct block *gen_len(compiler_state_t *, int, int);
static struct block *gen_check_802_11_data_frame(compiler_state_t *);
static struct block *gen_geneve_ll_check(compiler_state_t *cstate);

static struct block *gen_ppi_dlt_check(compiler_state_t *);
static struct block *gen_msg_abbrev(compiler_state_t *, int type);

static void
initchunks(compiler_state_t *cstate)
{
 int i={0};

 for (i = 0; i < 16; i++) {
  cstate->chunks[i].n_left = 0;
  cstate->chunks[i].m = 
                       ((void *)0)
                           ;
 }
 cstate->cur_chunk = 0;
}

static void *
newchunk(compiler_state_t *cstate, size_t n)
{
 struct chunk *cp={0};
 int k={0};
 size_t size={0};



 n = (n + sizeof(long) - 1) & ~(sizeof(long) - 1);





 cp = &cstate->chunks[cstate->cur_chunk];
 if (n > cp->n_left) {
  ++cp;
  k = ++cstate->cur_chunk;
  if (k >= 16)
   bpf_error(cstate, "out of memory");
  size = 1024 << k;
  cp->m = (void *)malloc(size);
  if (cp->m == 
              ((void *)0)
                  )
   bpf_error(cstate, "out of memory");
  memset((char *)cp->m, 0, size);
  cp->n_left = size;
  if (n > size)
   bpf_error(cstate, "out of memory");
 }
 cp->n_left -= n;
 return (void *)((char *)cp->m + cp->n_left);
}

static void
freechunks(compiler_state_t *cstate)
{
 int i={0};

 for (i = 0; i < 16; ++i)
  if (cstate->chunks[i].m != 
                            ((void *)0)
                                )
   free(cstate->chunks[i].m);
}




char *
sdup(compiler_state_t *cstate, const char *s)
{
 size_t n = strlen(s) + 1;
 char *cp = newchunk(cstate, n);

 (strncpy((cp), (s), (n)), ((n) <= 0 ? 0 : ((cp)[(n) - 1] = '\0')), (void) strlen((s)));
 return (cp);
}

static inline struct block *
new_block(compiler_state_t *cstate, int code)
{
 struct block *p={0};

 p = (struct block *)newchunk(cstate, sizeof(*p));
 p->s.code = code;
 p->head = p;

 return p;
}

static inline struct slist *
new_stmt(compiler_state_t *cstate, int code)
{
 struct slist *p={0};

 p = (struct slist *)newchunk(cstate, sizeof(*p));
 p->s.code = code;

 return p;
}

static struct block *
gen_retblk(compiler_state_t *cstate, int v)
{
 struct block *b = new_block(cstate, 
                                    0x06
                                           |
                                            0x00
                                                 );

 b->s.k = v;
 return b;
}

static inline __attribute((noreturn)) void
syntax(compiler_state_t *cstate)
{
 bpf_error(cstate, "syntax error in filter expression");
}

int
pcap_compile(pcap_t *p, struct bpf_program *program,
      const char *buf, int optimize, bpf_u_int32 mask)
{



 compiler_state_t cstate={0};
 const char * volatile xbuf = buf;
 yyscan_t scanner = 
                   ((void *)0)
                       ;
 YY_BUFFER_STATE in_buffer = 
                            ((void *)0)
                                ;
 u_int len={0};
 int rc={0};





 if (!p->activated) {
  snprintf(p->errbuf, 256,
      "not-yet-activated pcap_t passed to pcap_compile");
  return (-1);
 }
 initchunks(&cstate);
 cstate.no_optimize = 0;

 cstate.ai = 
            ((void *)0)
                ;

 cstate.ic.root = 
                 ((void *)0)
                     ;
 cstate.ic.cur_mark = 0;
 cstate.bpf_pcap = p;
 init_regs(&cstate);

 if (
    _setjmp (
    cstate.top_ctx
    )
                          ) {

  if (cstate.ai != 
                  ((void *)0)
                      )
   freeaddrinfo(cstate.ai);

  rc = -1;
  goto quit;
 }

 cstate.netmask = mask;

 cstate.snaplen = pcap_snapshot(p);
 if (cstate.snaplen == 0) {
  snprintf(p->errbuf, 256,
    "snaplen of 0 rejects all packets");
  rc = -1;
  goto quit;
 }

 if (pcap_lex_init(&scanner) != 0)
  pcap_fmt_errmsg_for_errno(p->errbuf, 256,
      
     (*__errno_location ())
          , "can't initialize scanner");
 in_buffer = pcap__scan_string(xbuf ? xbuf : "", scanner);





 pcap_set_extra(&cstate, scanner);

 init_linktype(&cstate, p);
 (void)pcap_parse(scanner, &cstate);

 if (cstate.ic.root == 
                      ((void *)0)
                          )
  cstate.ic.root = gen_retblk(&cstate, cstate.snaplen);

 if (optimize && !cstate.no_optimize) {
  bpf_optimize(&cstate, &cstate.ic);
  if (cstate.ic.root == 
                       ((void *)0) 
                            ||
      (cstate.ic.root->s.code == (
                                 0x06
                                        |
                                         0x00
                                              ) && cstate.ic.root->s.k == 0))
   bpf_error(&cstate, "expression rejects all packets");
 }
 program->bf_insns = icode_to_fcode(&cstate, &cstate.ic, cstate.ic.root, &len);
 program->bf_len = len;

 rc = 0;

quit:



 if (in_buffer != 
                 ((void *)0)
                     )
  pcap__delete_buffer(in_buffer, scanner);
 if (scanner != 
               ((void *)0)
                   )
  pcap_lex_destroy(scanner);




 freechunks(&cstate);

 return (rc);
}





int
pcap_compile_nopcap(int snaplen_arg, int linktype_arg,
      struct bpf_program *program,
      const char *buf, int optimize, bpf_u_int32 mask)
{
 pcap_t *p={0};
 int ret={0};

 p = pcap_open_dead(linktype_arg, snaplen_arg);
 if (p == 
         ((void *)0)
             )
  return (-1);
 ret = pcap_compile(p, program, buf, optimize, mask);
 pcap_close(p);
 return (ret);
}





void
pcap_freecode(struct bpf_program *program)
{
 program->bf_len = 0;
 if (program->bf_insns != 
                         ((void *)0)
                             ) {
  free((char *)program->bf_insns);
  program->bf_insns = 
                     ((void *)0)
                         ;
 }
}







static void
backpatch(struct block *list, struct block *target)
{
 struct block *next={0};

 while (list) {
  if (!list->sense) {
   next = ((list)->et.succ);
   ((list)->et.succ) = target;
  } else {
   next = ((list)->ef.succ);
   ((list)->ef.succ) = target;
  }
  list = next;
 }
}





static void
merge(struct block *b0, struct block *b1)
{
 register struct block **p = &b0;


 while (*p)
  p = !((*p)->sense) ? &((*p)->et.succ) : &((*p)->ef.succ);


 *p = b1;
}

void
finish_parse(compiler_state_t *cstate, struct block *p)
{
 struct block *ppi_dlt_check={0};
 insert_compute_vloffsets(cstate, p->head);
 ppi_dlt_check = gen_ppi_dlt_check(cstate);
 if (ppi_dlt_check != 
                     ((void *)0)
                         )
  gen_and(ppi_dlt_check, p);

 backpatch(p, gen_retblk(cstate, cstate->snaplen));
 p->sense = !p->sense;
 backpatch(p, gen_retblk(cstate, 0));
 cstate->ic.root = p->head;
}

void
gen_and(struct block *b0, struct block *b1)
{
 backpatch(b0, b1->head);
 b0->sense = !b0->sense;
 b1->sense = !b1->sense;
 merge(b1, b0);
 b1->sense = !b1->sense;
 b1->head = b0->head;
}

void
gen_or(struct block *b0, struct block *b1)
{
 b0->sense = !b0->sense;
 backpatch(b0, b1->head);
 b0->sense = !b0->sense;
 merge(b1, b0);
 b1->head = b0->head;
}

void
gen_not(struct block *b)
{
 b->sense = !b->sense;
}

static struct block *
gen_cmp(compiler_state_t *cstate, enum e_offrel offrel, u_int offset,
    u_int size, bpf_int32 v)
{
 return gen_ncmp(cstate, offrel, offset, size, 0xffffffff, 
                                                          0x10
                                                                 , 0, v);
}

static struct block *
gen_cmp_gt(compiler_state_t *cstate, enum e_offrel offrel, u_int offset,
    u_int size, bpf_int32 v)
{
 return gen_ncmp(cstate, offrel, offset, size, 0xffffffff, 
                                                          0x20
                                                                 , 0, v);
}

static struct block *
gen_cmp_ge(compiler_state_t *cstate, enum e_offrel offrel, u_int offset,
    u_int size, bpf_int32 v)
{
 return gen_ncmp(cstate, offrel, offset, size, 0xffffffff, 
                                                          0x30
                                                                 , 0, v);
}

static struct block *
gen_cmp_lt(compiler_state_t *cstate, enum e_offrel offrel, u_int offset,
    u_int size, bpf_int32 v)
{
 return gen_ncmp(cstate, offrel, offset, size, 0xffffffff, 
                                                          0x30
                                                                 , 1, v);
}

static struct block *
gen_cmp_le(compiler_state_t *cstate, enum e_offrel offrel, u_int offset,
    u_int size, bpf_int32 v)
{
 return gen_ncmp(cstate, offrel, offset, size, 0xffffffff, 
                                                          0x20
                                                                 , 1, v);
}

static struct block *
gen_mcmp(compiler_state_t *cstate, enum e_offrel offrel, u_int offset,
    u_int size, bpf_int32 v, bpf_u_int32 mask)
{
 return gen_ncmp(cstate, offrel, offset, size, mask, 
                                                    0x10
                                                           , 0, v);
}

static struct block *
gen_bcmp(compiler_state_t *cstate, enum e_offrel offrel, u_int offset,
    u_int size, const u_char *v)
{
 register struct block *b, *tmp={0};

 b = 
    ((void *)0)
        ;
 while (size >= 4) {
  register const u_char *p = &v[size - 4];
  bpf_int32 w = ((bpf_int32)p[0] << 24) |
      ((bpf_int32)p[1] << 16) | ((bpf_int32)p[2] << 8) | p[3];

  tmp = gen_cmp(cstate, offrel, offset + size - 4, 
                                                  0x00
                                                       , w);
  if (b != 
          ((void *)0)
              )
   gen_and(b, tmp);
  b = tmp;
  size -= 4;
 }
 while (size >= 2) {
  register const u_char *p = &v[size - 2];
  bpf_int32 w = ((bpf_int32)p[0] << 8) | p[1];

  tmp = gen_cmp(cstate, offrel, offset + size - 2, 
                                                  0x08
                                                       , w);
  if (b != 
          ((void *)0)
              )
   gen_and(b, tmp);
  b = tmp;
  size -= 2;
 }
 if (size > 0) {
  tmp = gen_cmp(cstate, offrel, offset, 
                                       0x10
                                            , (bpf_int32)v[0]);
  if (b != 
          ((void *)0)
              )
   gen_and(b, tmp);
  b = tmp;
 }
 return b;
}







static struct block *
gen_ncmp(compiler_state_t *cstate, enum e_offrel offrel, bpf_u_int32 offset,
    bpf_u_int32 size, bpf_u_int32 mask, bpf_u_int32 jtype, int reverse,
    bpf_int32 v)
{
 struct slist *s, *s2={0};
 struct block *b={0};

 s = gen_load_a(cstate, offrel, offset, size);

 if (mask != 0xffffffff) {
  s2 = new_stmt(cstate, 
                       0x04
                              |
                               0x50
                                      |
                                       0x00
                                            );
  s2->s.k = mask;
  sappend(s, s2);
 }

 b = new_block(cstate, ((jtype)|
                      0x05
                      |
                      0x00
                      ));
 b->stmts = s;
 b->s.k = v;
 if (reverse && (jtype == 
                         0x20 
                                 || jtype == 
                                             0x30
                                                    ))
  gen_not(b);
 return b;
}

static void
init_linktype(compiler_state_t *cstate, pcap_t *p)
{
 cstate->pcap_fddipad = p->fddipad;




 cstate->outermostlinktype = pcap_datalink(p);
 cstate->off_outermostlinkhdr.constant_part = 0;
 cstate->off_outermostlinkhdr.is_variable = 0;
 cstate->off_outermostlinkhdr.reg = -1;

 cstate->prevlinktype = cstate->outermostlinktype;
 cstate->off_prevlinkhdr.constant_part = 0;
 cstate->off_prevlinkhdr.is_variable = 0;
 cstate->off_prevlinkhdr.reg = -1;

 cstate->linktype = cstate->outermostlinktype;
 cstate->off_linkhdr.constant_part = 0;
 cstate->off_linkhdr.is_variable = 0;
 cstate->off_linkhdr.reg = -1;




 cstate->off_linkpl.constant_part = 0;
 cstate->off_linkpl.is_variable = 0;
 cstate->off_linkpl.reg = -1;

 cstate->off_linktype.constant_part = 0;
 cstate->off_linktype.is_variable = 0;
 cstate->off_linktype.reg = -1;




 cstate->is_atm = 0;
 cstate->off_vpi = 0xffffffffU;
 cstate->off_vci = 0xffffffffU;
 cstate->off_proto = 0xffffffffU;
 cstate->off_payload = 0xffffffffU;




 cstate->is_geneve = 0;




 cstate->is_vlan_vloffset = 0;




 cstate->off_li = 0xffffffffU;
 cstate->off_li_hsl = 0xffffffffU;
 cstate->off_sio = 0xffffffffU;
 cstate->off_opc = 0xffffffffU;
 cstate->off_dpc = 0xffffffffU;
 cstate->off_sls = 0xffffffffU;

 cstate->label_stack_depth = 0;
 cstate->vlan_stack_depth = 0;

 switch (cstate->linktype) {

 case 7:
  cstate->off_linktype.constant_part = 2;
  cstate->off_linkpl.constant_part = 6;
  cstate->off_nl = 0;
  cstate->off_nl_nosnap = 0;
  break;

 case 129:
  cstate->off_linktype.constant_part = 4;
  cstate->off_linkpl.constant_part = 8;
  cstate->off_nl = 0;
  cstate->off_nl_nosnap = 0;
  break;

 case 1:
  cstate->off_linktype.constant_part = 12;
  cstate->off_linkpl.constant_part = 14;
  cstate->off_nl = 0;
  cstate->off_nl_nosnap = 3;
  break;

 case 8:




  cstate->off_linktype.constant_part = 0xffffffffU;
  cstate->off_linkpl.constant_part = 16;
  cstate->off_nl = 0;
  cstate->off_nl_nosnap = 0;
  break;

 case 15:

  cstate->off_linktype.constant_part = 0xffffffffU;

  cstate->off_linkpl.constant_part = 24;
  cstate->off_nl = 0;
  cstate->off_nl_nosnap = 0;
  break;

 case 0:
 case 108:
  cstate->off_linktype.constant_part = 0;
  cstate->off_linkpl.constant_part = 4;
  cstate->off_nl = 0;
  cstate->off_nl_nosnap = 0;
  break;

 case 109:
  cstate->off_linktype.constant_part = 0;
  cstate->off_linkpl.constant_part = 12;
  cstate->off_nl = 0;
  cstate->off_nl_nosnap = 0;
  break;

 case 9:
 case 166:
 case 104:
 case 50:
  cstate->off_linktype.constant_part = 2;
  cstate->off_linkpl.constant_part = 4;
  cstate->off_nl = 0;
  cstate->off_nl_nosnap = 0;
  break;

 case 51:




  cstate->off_linktype.constant_part = 6;
  cstate->off_linkpl.constant_part = 8;
  cstate->off_nl = 0;
  cstate->off_nl_nosnap = 0;
  break;

 case 16:
  cstate->off_linktype.constant_part = 5;
  cstate->off_linkpl.constant_part = 24;
  cstate->off_nl = 0;
  cstate->off_nl_nosnap = 0;
  break;

 case 10:
  cstate->off_linktype.constant_part = 13;
  cstate->off_linktype.constant_part += cstate->pcap_fddipad;
  cstate->off_linkpl.constant_part = 13;
  cstate->off_linkpl.constant_part += cstate->pcap_fddipad;
  cstate->off_nl = 8;
  cstate->off_nl_nosnap = 3;
  break;

 case 6:
  cstate->off_linktype.constant_part = 14;
  cstate->off_linkpl.constant_part = 14;
  cstate->off_nl = 8;
  cstate->off_nl_nosnap = 3;
  break;

 case 119:
 case 163:
 case 127:
  cstate->off_linkhdr.is_variable = 1;



 case 105:
  cstate->off_linktype.constant_part = 24;
  cstate->off_linkpl.constant_part = 0;
  cstate->off_linkpl.is_variable = 1;
  cstate->off_nl = 8;
  cstate->off_nl_nosnap = 3;
  break;

 case 192:
  cstate->off_linktype.constant_part = 24;
  cstate->off_linkpl.constant_part = 0;
  cstate->off_linkpl.is_variable = 1;
  cstate->off_linkhdr.is_variable = 1;
  cstate->off_nl = 8;
  cstate->off_nl_nosnap = 3;
  break;

 case 11:
 case 19:
  cstate->off_linktype.constant_part = 0;
  cstate->off_linkpl.constant_part = 0;
  cstate->off_nl = 8;
  cstate->off_nl_nosnap = 3;
  break;

 case 123:




  cstate->is_atm = 1;
  cstate->off_vpi = 1;
  cstate->off_vci = 2;
  cstate->off_proto = 0;
  cstate->off_payload = 4;
  cstate->off_linktype.constant_part = cstate->off_payload;
  cstate->off_linkpl.constant_part = cstate->off_payload;
  cstate->off_nl = 8;
  cstate->off_nl_nosnap = 3;
  break;

 case 12:
 case 228:
 case 229:
  cstate->off_linktype.constant_part = 0xffffffffU;
  cstate->off_linkpl.constant_part = 0;
  cstate->off_nl = 0;
  cstate->off_nl_nosnap = 0;
  break;

 case 113:
  cstate->off_linktype.constant_part = 14;
  cstate->off_linkpl.constant_part = 16;
  cstate->off_nl = 0;
  cstate->off_nl_nosnap = 0;
  break;

 case 114:





  cstate->off_linktype.constant_part = 0xffffffffU;
  cstate->off_linkpl.constant_part = 0;
  cstate->off_nl = 0;
  cstate->off_nl_nosnap = 0;
  break;

 case 122:
  cstate->off_linktype.constant_part = 16;
  cstate->off_linkpl.constant_part = 16;
  cstate->off_nl = 8;
  cstate->off_nl_nosnap = 3;
  break;

 case 107:




  cstate->off_linktype.constant_part = 0xffffffffU;
  cstate->off_linkpl.constant_part = 0;
  cstate->off_nl = 0;
  cstate->off_nl_nosnap = 0;
  break;






 case 182:
  cstate->off_linktype.constant_part = 0xffffffffU;
  cstate->off_linkpl.constant_part = 0;
  cstate->off_nl = 4;
  cstate->off_nl_nosnap = 0;
  break;

 case 138:
  cstate->off_linktype.constant_part = 16;
  cstate->off_linkpl.constant_part = 18;
  cstate->off_nl = 0;
  cstate->off_nl_nosnap = 0;
  break;

 case 99:
  cstate->off_linktype.constant_part = 6;
  cstate->off_linkpl.constant_part = 44;
  cstate->off_nl = 0;
  cstate->off_nl_nosnap = 0;
  break;
        case 134:
        case 131:
        case 130:
        case 179:
        case 181:
        case 180:
  cstate->off_linktype.constant_part = 4;
  cstate->off_linkpl.constant_part = 4;
  cstate->off_nl = 0;
  cstate->off_nl_nosnap = 0xffffffffU;
                break;

 case 137:
  cstate->off_linktype.constant_part = 4;
  cstate->off_linkpl.constant_part = 4;
  cstate->off_nl = 0;
  cstate->off_nl_nosnap = 10;
  break;

 case 135:
  cstate->off_linktype.constant_part = 8;
  cstate->off_linkpl.constant_part = 8;
  cstate->off_nl = 0;
  cstate->off_nl_nosnap = 10;
  break;



 case 167:
        case 178:
  cstate->off_linkpl.constant_part = 14;
  cstate->off_linktype.constant_part = 16;
  cstate->off_nl = 18;
  cstate->off_nl_nosnap = 21;
  break;

 case 168:
  cstate->off_linktype.constant_part = 4;
  cstate->off_linkpl.constant_part = 6;
  cstate->off_nl = 0;
  cstate->off_nl_nosnap = 0xffffffffU;
  break;

 case 133:
  cstate->off_linktype.constant_part = 6;
  cstate->off_linkpl.constant_part = 12;
  cstate->off_nl = 0;
  cstate->off_nl_nosnap = 0xffffffffU;
  break;

 case 132:
  cstate->off_linktype.constant_part = 6;
  cstate->off_linkpl.constant_part = 0xffffffffU;
  cstate->off_nl = 0xffffffffU;
  cstate->off_nl_nosnap = 0xffffffffU;
  break;

 case 164:
  cstate->off_linktype.constant_part = 12;
  cstate->off_linkpl.constant_part = 12;
  cstate->off_nl = 0;
  cstate->off_nl_nosnap = 0xffffffffU;
  break;

 case 165:
  cstate->off_linktype.constant_part = 0xffffffffU;
  cstate->off_linkpl.constant_part = 0xffffffffU;
  cstate->off_nl = 0xffffffffU;
  cstate->off_nl_nosnap = 0xffffffffU;
  break;

 case 136:
  cstate->off_linktype.constant_part = 12;
  cstate->off_linkpl.constant_part = 0xffffffffU;
  cstate->off_nl = 0xffffffffU;
  cstate->off_nl_nosnap = 0xffffffffU;
  break;

 case 183:
  cstate->off_linktype.constant_part = 18;
  cstate->off_linkpl.constant_part = 0xffffffffU;
  cstate->off_nl = 0xffffffffU;
  cstate->off_nl_nosnap = 0xffffffffU;
  break;

 case 200:
  cstate->off_linktype.constant_part = 18;
  cstate->off_linkpl.constant_part = 0xffffffffU;
  cstate->off_nl = 0xffffffffU;
  cstate->off_nl_nosnap = 0xffffffffU;
  break;

 case 194:
  cstate->off_linktype.constant_part = 8;
  cstate->off_linkpl.constant_part = 0xffffffffU;
  cstate->off_nl = 0xffffffffU;
  cstate->off_nl_nosnap = 0xffffffffU;
  break;

 case 232:
 case 233:
 case 234:
 case 238:
  cstate->off_linktype.constant_part = 8;
  cstate->off_linkpl.constant_part = 0xffffffffU;
  cstate->off_nl = 0xffffffffU;
  cstate->off_nl_nosnap = 0xffffffffU;
  break;

 case 140:
  cstate->off_li = 2;
  cstate->off_li_hsl = 4;
  cstate->off_sio = 3;
  cstate->off_opc = 4;
  cstate->off_dpc = 4;
  cstate->off_sls = 7;
  cstate->off_linktype.constant_part = 0xffffffffU;
  cstate->off_linkpl.constant_part = 0xffffffffU;
  cstate->off_nl = 0xffffffffU;
  cstate->off_nl_nosnap = 0xffffffffU;
  break;

 case 139:
  cstate->off_li = 6;
  cstate->off_li_hsl = 8;
  cstate->off_sio = 7;
  cstate->off_opc = 8;
  cstate->off_dpc = 8;
  cstate->off_sls = 11;
  cstate->off_linktype.constant_part = 0xffffffffU;
  cstate->off_linkpl.constant_part = 0xffffffffU;
  cstate->off_nl = 0xffffffffU;
  cstate->off_nl_nosnap = 0xffffffffU;
  break;

 case 197:
  cstate->off_li = 22;
  cstate->off_li_hsl = 24;
  cstate->off_sio = 23;
  cstate->off_opc = 24;
  cstate->off_dpc = 24;
  cstate->off_sls = 27;
  cstate->off_linktype.constant_part = 0xffffffffU;
  cstate->off_linkpl.constant_part = 0xffffffffU;
  cstate->off_nl = 0xffffffffU;
  cstate->off_nl_nosnap = 0xffffffffU;
  break;

 case 246:
  cstate->off_linktype.constant_part = 0xffffffffU;
  cstate->off_linkpl.constant_part = 4;
  cstate->off_nl = 0;
  cstate->off_nl_nosnap = 0;
  break;

 case 202:



  cstate->off_linktype.constant_part = 0xffffffffU;
  cstate->off_linkpl.constant_part = 0xffffffffU;
  cstate->off_nl = 0xffffffffU;
  cstate->off_nl_nosnap = 0xffffffffU;
  break;

 case 226:
  cstate->off_linktype.constant_part = 1;
  cstate->off_linkpl.constant_part = 24;
  cstate->off_nl = 0;
  cstate->off_nl_nosnap = 0xffffffffU;
  break;

 case 240:
  cstate->off_linkhdr.constant_part = 4;
  cstate->off_linktype.constant_part = cstate->off_linkhdr.constant_part + 12;
  cstate->off_linkpl.constant_part = cstate->off_linkhdr.constant_part + 14;
  cstate->off_nl = 0;
  cstate->off_nl_nosnap = 3;
  break;

 case 241:
  cstate->off_linkhdr.constant_part = 12;
  cstate->off_linktype.constant_part = cstate->off_linkhdr.constant_part + 12;
  cstate->off_linkpl.constant_part = cstate->off_linkhdr.constant_part + 14;
  cstate->off_nl = 0;
  cstate->off_nl_nosnap = 3;
  break;

 default:




  if (cstate->linktype >= 104 &&
      cstate->linktype <= 275) {
   cstate->off_linktype.constant_part = 0xffffffffU;
   cstate->off_linkpl.constant_part = 0xffffffffU;
   cstate->off_nl = 0xffffffffU;
   cstate->off_nl_nosnap = 0xffffffffU;
  } else {
   bpf_error(cstate, "unknown data link type %d", cstate->linktype);
  }
  break;
 }

 cstate->off_outermostlinkhdr = cstate->off_prevlinkhdr = cstate->off_linkhdr;
}




static struct slist *
gen_load_absoffsetrel(compiler_state_t *cstate, bpf_abs_offset *abs_offset,
    u_int offset, u_int size)
{
 struct slist *s, *s2={0};

 s = gen_abs_offset_varpart(cstate, abs_offset);
 if (s != 
         ((void *)0)
             ) {





  s2 = new_stmt(cstate, 
                       0x00
                             |
                              0x40
                                     |size);
  s2->s.k = abs_offset->constant_part + offset;
  sappend(s, s2);
 } else {




  s = new_stmt(cstate, 
                      0x00
                            |
                             0x20
                                    |size);
  s->s.k = abs_offset->constant_part + offset;
 }
 return s;
}




static struct slist *
gen_load_a(compiler_state_t *cstate, enum e_offrel offrel, u_int offset,
    u_int size)
{
 struct slist *s, *s2={0};

 switch (offrel) {

 case OR_PACKET:
                s = new_stmt(cstate, 
                                    0x00
                                          |
                                           0x20
                                                  |size);
                s->s.k = offset;
  break;

 case OR_LINKHDR:
  s = gen_load_absoffsetrel(cstate, &cstate->off_linkhdr, offset, size);
  break;

 case OR_PREVLINKHDR:
  s = gen_load_absoffsetrel(cstate, &cstate->off_prevlinkhdr, offset, size);
  break;

 case OR_LLC:
  s = gen_load_absoffsetrel(cstate, &cstate->off_linkpl, offset, size);
  break;

 case OR_PREVMPLSHDR:
  s = gen_load_absoffsetrel(cstate, &cstate->off_linkpl, cstate->off_nl - 4 + offset, size);
  break;

 case OR_LINKPL:
  s = gen_load_absoffsetrel(cstate, &cstate->off_linkpl, cstate->off_nl + offset, size);
  break;

 case OR_LINKPL_NOSNAP:
  s = gen_load_absoffsetrel(cstate, &cstate->off_linkpl, cstate->off_nl_nosnap + offset, size);
  break;

 case OR_LINKTYPE:
  s = gen_load_absoffsetrel(cstate, &cstate->off_linktype, offset, size);
  break;

 case OR_TRAN_IPV4:






  s = gen_loadx_iphdrlen(cstate);
  s2 = new_stmt(cstate, 
                       0x00
                             |
                              0x40
                                     |size);
  s2->s.k = cstate->off_linkpl.constant_part + cstate->off_nl + offset;
  sappend(s, s2);
  break;

 case OR_TRAN_IPV6:
  s = gen_load_absoffsetrel(cstate, &cstate->off_linkpl, cstate->off_nl + 40 + offset, size);
  break;

 default:
  abort();

 }
 return s;
}






static struct slist *
gen_loadx_iphdrlen(compiler_state_t *cstate)
{
 struct slist *s, *s2={0};

 s = gen_abs_offset_varpart(cstate, &cstate->off_linkpl);
 if (s != 
         ((void *)0)
             ) {
  s2 = new_stmt(cstate, 
                       0x00
                             |
                              0x40
                                     |
                                      0x10
                                           );
  s2->s.k = cstate->off_linkpl.constant_part + cstate->off_nl;
  sappend(s, s2);
  s2 = new_stmt(cstate, 
                       0x04
                              |
                               0x50
                                      |
                                       0x00
                                            );
  s2->s.k = 0xf;
  sappend(s, s2);
  s2 = new_stmt(cstate, 
                       0x04
                              |
                               0x60
                                      |
                                       0x00
                                            );
  s2->s.k = 2;
  sappend(s, s2);







  sappend(s, new_stmt(cstate, 
                             0x04
                                    |
                                     0x00
                                            |
                                             0x08
                                                  ));
  sappend(s, new_stmt(cstate, 
                             0x07
                                     |
                                      0x00
                                             ));
 } else {
  s = new_stmt(cstate, 
                      0x01
                             |
                              0xa0
                                     |
                                      0x10
                                           );
  s->s.k = cstate->off_linkpl.constant_part + cstate->off_nl;
 }
 return s;
}


static struct block *
gen_uncond(compiler_state_t *cstate, int rsense)
{
 struct block *b={0};
 struct slist *s={0};

 s = new_stmt(cstate, 
                     0x00
                           |
                            0x00
                                   );
 s->s.k = !rsense;
 b = new_block(cstate, ((
                      0x10
                      )|
                      0x05
                      |
                      0x00
                      ));
 b->stmts = s;

 return b;
}

static inline struct block *
gen_true(compiler_state_t *cstate)
{
 return gen_uncond(cstate, 1);
}

static inline struct block *
gen_false(compiler_state_t *cstate)
{
 return gen_uncond(cstate, 0);
}
static struct block *
gen_ether_linktype(compiler_state_t *cstate, int proto)
{
 struct block *b0, *b1={0};

 switch (proto) {

 case 0xfe:
 case 0x06:
 case 0xf0:
  b0 = gen_cmp_gt(cstate, OR_LINKTYPE, 0, 
                                         0x08
                                              , 1500);
  gen_not(b0);
  b1 = gen_cmp(cstate, OR_LLC, 0, 
                                 0x08
                                      , (bpf_int32)
        ((proto << 8) | proto));
  gen_and(b0, b1);
  return b1;

 case 0xe0:
  b0 = gen_cmp(cstate, OR_LLC, 0, 
                                 0x10
                                      , (bpf_int32)0xe0);
  b1 = gen_cmp(cstate, OR_LLC, 0, 
                                 0x08
                                      , (bpf_int32)0xFFFF);
  gen_or(b0, b1);





  b0 = gen_snap(cstate, 0x000000, 0x8137);
  gen_or(b0, b1);





  b0 = gen_cmp_gt(cstate, OR_LINKTYPE, 0, 
                                         0x08
                                              , 1500);
  gen_not(b0);







  gen_and(b0, b1);






  b0 = gen_cmp(cstate, OR_LINKTYPE, 0, 
                                      0x08
                                           , (bpf_int32)0x8137);
  gen_or(b0, b1);
  return b1;

 case 0x809b:
 case 0x80f3:
  b0 = gen_cmp_gt(cstate, OR_LINKTYPE, 0, 
                                         0x08
                                              , 1500);
  gen_not(b0);
  if (proto == 0x809b)
   b1 = gen_snap(cstate, 0x080007, 0x809b);
  else
   b1 = gen_snap(cstate, 0x000000, 0x80f3);
  gen_and(b0, b1);






  b0 = gen_cmp(cstate, OR_LINKTYPE, 0, 
                                      0x08
                                           , (bpf_int32)proto);

  gen_or(b0, b1);
  return b1;

 default:
  if (proto <= 1500) {
   b0 = gen_cmp_gt(cstate, OR_LINKTYPE, 0, 
                                          0x08
                                               , 1500);
   gen_not(b0);
   b1 = gen_cmp(cstate, OR_LINKTYPE, 2, 
                                       0x10
                                            , (bpf_int32)proto);
   gen_and(b0, b1);
   return b1;
  } else {
   return gen_cmp(cstate, OR_LINKTYPE, 0, 
                                         0x08
                                              ,
       (bpf_int32)proto);
  }
 }
}

static struct block *
gen_loopback_linktype(compiler_state_t *cstate, int proto)
{
 if (cstate->linktype == 0 || cstate->linktype == 109) {
  if (cstate->bpf_pcap->rfile != 
                                ((void *)0) 
                                     && cstate->bpf_pcap->swapped)
   proto = ((((proto)&0xff)<<24) | (((proto)&0xff00)<<8) | (((proto)&0xff0000)>>8) | (((proto)>>24)&0xff));
  proto = htonl(proto);
 }
 return (gen_cmp(cstate, OR_LINKHDR, 0, 
                                       0x00
                                            , (bpf_int32)proto));
}





static struct block *
gen_ipnet_linktype(compiler_state_t *cstate, int proto)
{
 switch (proto) {

 case 0x0800:
  return gen_cmp(cstate, OR_LINKTYPE, 0, 
                                        0x10
                                             , (bpf_int32)2);


 case 0x86dd:
  return gen_cmp(cstate, OR_LINKTYPE, 0, 
                                        0x10
                                             ,
      (bpf_int32)26);


 default:
  break;
 }

 return gen_false(cstate);
}
static struct block *
gen_linux_sll_linktype(compiler_state_t *cstate, int proto)
{
 struct block *b0, *b1={0};

 switch (proto) {

 case 0xfe:
 case 0x06:
 case 0xf0:
  b0 = gen_cmp(cstate, OR_LINKTYPE, 0, 
                                      0x08
                                           , 0x0004);
  b1 = gen_cmp(cstate, OR_LLC, 0, 
                                 0x08
                                      , (bpf_int32)
        ((proto << 8) | proto));
  gen_and(b0, b1);
  return b1;

 case 0xe0:
  b0 = gen_cmp(cstate, OR_LLC, 0, 
                                 0x10
                                      , (bpf_int32)0xe0);
  b1 = gen_snap(cstate, 0x000000, 0x8137);
  gen_or(b0, b1);
  b0 = gen_cmp(cstate, OR_LINKTYPE, 0, 
                                      0x08
                                           , 0x0004);
  gen_and(b0, b1);





  b0 = gen_cmp(cstate, OR_LINKTYPE, 0, 
                                      0x08
                                           , 0x0001);
  gen_or(b0, b1);






  b0 = gen_cmp(cstate, OR_LINKTYPE, 0, 
                                      0x08
                                           , (bpf_int32)0x8137);
  gen_or(b0, b1);
  return b1;

 case 0x809b:
 case 0x80f3:
  b0 = gen_cmp(cstate, OR_LINKTYPE, 0, 
                                      0x08
                                           , 0x0004);
  if (proto == 0x809b)
   b1 = gen_snap(cstate, 0x080007, 0x809b);
  else
   b1 = gen_snap(cstate, 0x000000, 0x80f3);
  gen_and(b0, b1);






  b0 = gen_cmp(cstate, OR_LINKTYPE, 0, 
                                      0x08
                                           , (bpf_int32)proto);

  gen_or(b0, b1);
  return b1;

 default:
  if (proto <= 1500) {







   b0 = gen_cmp(cstate, OR_LINKTYPE, 0, 
                                       0x08
                                            , 0x0004);
   b1 = gen_cmp(cstate, OR_LINKHDR, cstate->off_linkpl.constant_part, 
                                                                     0x10
                                                                          ,
        (bpf_int32)proto);
   gen_and(b0, b1);
   return b1;
  } else {
   return gen_cmp(cstate, OR_LINKTYPE, 0, 
                                         0x08
                                              , (bpf_int32)proto);
  }
 }
}

static struct slist *
gen_load_prism_llprefixlen(compiler_state_t *cstate)
{
 struct slist *s1, *s2={0};
 struct slist *sjeq_avs_cookie={0};
 struct slist *sjcommon={0};






 cstate->no_optimize = 1;
 if (cstate->off_linkhdr.reg != -1) {



  s1 = new_stmt(cstate, 
                       0x00
                             |
                              0x00
                                   |
                                    0x20
                                           );
  s1->s.k = 0;




  s2 = new_stmt(cstate, 
                       0x04
                              |
                               0x50
                                      |
                                       0x00
                                            );
  s2->s.k = 0xFFFFF000;
  sappend(s1, s2);




  sjeq_avs_cookie = new_stmt(cstate, ((
                                    0x10
                                    )|
                                    0x05
                                    |
                                    0x00
                                    ));
  sjeq_avs_cookie->s.k = 0x80211000;
  sappend(s1, sjeq_avs_cookie);
  s2 = new_stmt(cstate, 
                       0x00
                             |
                              0x00
                                   |
                                    0x20
                                           );
  s2->s.k = 4;
  sappend(s1, s2);
  sjeq_avs_cookie->s.jt = s2;
  sjcommon = new_stmt(cstate, ((
                             0x00
                             )|
                             0x05
                             |
                             0x00
                             ));
  sjcommon->s.k = 1;
  sappend(s1, sjcommon);







  s2 = new_stmt(cstate, 
                       0x00
                             |
                              0x00
                                   |
                                    0x00
                                           );
  s2->s.k = 144;
  sappend(s1, s2);
  sjeq_avs_cookie->s.jf = s2;






  s2 = new_stmt(cstate, 
                       0x02
                             );
  s2->s.k = cstate->off_linkhdr.reg;
  sappend(s1, s2);
  sjcommon->s.jf = s2;




  s2 = new_stmt(cstate, 
                       0x07
                               |
                                0x00
                                       );
  sappend(s1, s2);

  return (s1);
 } else
  return (
         ((void *)0)
             );
}

static struct slist *
gen_load_avs_llprefixlen(compiler_state_t *cstate)
{
 struct slist *s1, *s2={0};
 if (cstate->off_linkhdr.reg != -1) {





  s1 = new_stmt(cstate, 
                       0x00
                             |
                              0x00
                                   |
                                    0x20
                                           );
  s1->s.k = 4;





  s2 = new_stmt(cstate, 
                       0x02
                             );
  s2->s.k = cstate->off_linkhdr.reg;
  sappend(s1, s2);




  s2 = new_stmt(cstate, 
                       0x07
                               |
                                0x00
                                       );
  sappend(s1, s2);

  return (s1);
 } else
  return (
         ((void *)0)
             );
}

static struct slist *
gen_load_radiotap_llprefixlen(compiler_state_t *cstate)
{
 struct slist *s1, *s2={0};
 if (cstate->off_linkhdr.reg != -1) {
  s1 = new_stmt(cstate, 
                       0x00
                             |
                              0x10
                                   |
                                    0x20
                                           );
  s1->s.k = 3;
  s2 = new_stmt(cstate, 
                       0x04
                              |
                               0x60
                                      |
                                       0x00
                                            );
  sappend(s1, s2);
  s2->s.k = 8;
  s2 = new_stmt(cstate, 
                       0x07
                               |
                                0x00
                                       );
  sappend(s1, s2);





  s2 = new_stmt(cstate, 
                       0x00
                             |
                              0x10
                                   |
                                    0x20
                                           );
  sappend(s1, s2);
  s2->s.k = 2;
  s2 = new_stmt(cstate, 
                       0x04
                              |
                               0x40
                                     |
                                      0x08
                                           );
  sappend(s1, s2);





  s2 = new_stmt(cstate, 
                       0x02
                             );
  s2->s.k = cstate->off_linkhdr.reg;
  sappend(s1, s2);




  s2 = new_stmt(cstate, 
                       0x07
                               |
                                0x00
                                       );
  sappend(s1, s2);

  return (s1);
 } else
  return (
         ((void *)0)
             );
}
static struct slist *
gen_load_ppi_llprefixlen(compiler_state_t *cstate)
{
 struct slist *s1, *s2={0};






 if (cstate->off_linkhdr.reg != -1) {
  s1 = new_stmt(cstate, 
                       0x00
                             |
                              0x10
                                   |
                                    0x20
                                           );
  s1->s.k = 3;
  s2 = new_stmt(cstate, 
                       0x04
                              |
                               0x60
                                      |
                                       0x00
                                            );
  sappend(s1, s2);
  s2->s.k = 8;
  s2 = new_stmt(cstate, 
                       0x07
                               |
                                0x00
                                       );
  sappend(s1, s2);





  s2 = new_stmt(cstate, 
                       0x00
                             |
                              0x10
                                   |
                                    0x20
                                           );
  sappend(s1, s2);
  s2->s.k = 2;
  s2 = new_stmt(cstate, 
                       0x04
                              |
                               0x40
                                     |
                                      0x08
                                           );
  sappend(s1, s2);





  s2 = new_stmt(cstate, 
                       0x02
                             );
  s2->s.k = cstate->off_linkhdr.reg;
  sappend(s1, s2);




  s2 = new_stmt(cstate, 
                       0x07
                               |
                                0x00
                                       );
  sappend(s1, s2);

  return (s1);
 } else
  return (
         ((void *)0)
             );
}
static struct slist *
gen_load_802_11_header_len(compiler_state_t *cstate, struct slist *s, struct slist *snext)
{
 struct slist *s2={0};
 struct slist *sjset_data_frame_1={0};
 struct slist *sjset_data_frame_2={0};
 struct slist *sjset_qos={0};
 struct slist *sjset_radiotap_flags_present={0};
 struct slist *sjset_radiotap_ext_present={0};
 struct slist *sjset_radiotap_tsft_present={0};
 struct slist *sjset_tsft_datapad, *sjset_notsft_datapad={0};
 struct slist *s_roundup={0};

 if (cstate->off_linkpl.reg == -1) {






  return (s);
 }






 cstate->no_optimize = 1;
 if (s == 
         ((void *)0)
             ) {
  s = new_stmt(cstate, 
                      0x01
                             |
                              0x00
                                     );
  s->s.k = cstate->off_outermostlinkhdr.constant_part;
 }
 s2 = new_stmt(cstate, 
                      0x07
                              |
                               0x80
                                      );
 sappend(s, s2);
 s2 = new_stmt(cstate, 
                      0x04
                             |
                              0x00
                                     |
                                      0x00
                                           );
 s2->s.k = 24;
 sappend(s, s2);
 s2 = new_stmt(cstate, 
                      0x02
                            );
 s2->s.k = cstate->off_linkpl.reg;
 sappend(s, s2);

 s2 = new_stmt(cstate, 
                      0x00
                            |
                             0x40
                                    |
                                     0x10
                                          );
 s2->s.k = 0;
 sappend(s, s2);






 sjset_data_frame_1 = new_stmt(cstate, ((
                                      0x40
                                      )|
                                      0x05
                                      |
                                      0x00
                                      ));
 sjset_data_frame_1->s.k = 0x08;
 sappend(s, sjset_data_frame_1);





 sjset_data_frame_1->s.jt = sjset_data_frame_2 = new_stmt(cstate, ((
                                                                 0x40
                                                                 )|
                                                                 0x05
                                                                 |
                                                                 0x00
                                                                 ));
 sjset_data_frame_2->s.k = 0x04;
 sappend(s, sjset_data_frame_2);
 sjset_data_frame_1->s.jf = snext;






 sjset_data_frame_2->s.jt = snext;
 sjset_data_frame_2->s.jf = sjset_qos = new_stmt(cstate, ((
                                                        0x40
                                                        )|
                                                        0x05
                                                        |
                                                        0x00
                                                        ));
 sjset_qos->s.k = 0x80;
 sappend(s, sjset_qos);







 sjset_qos->s.jt = s2 = new_stmt(cstate, 
                                        0x00
                                              |
                                               0x60
                                                      );
 s2->s.k = cstate->off_linkpl.reg;
 sappend(s, s2);
 s2 = new_stmt(cstate, 
                      0x04
                             |
                              0x00
                                     |
                                      0x00
                                             );
 s2->s.k = 2;
 sappend(s, s2);
 s2 = new_stmt(cstate, 
                      0x02
                            );
 s2->s.k = cstate->off_linkpl.reg;
 sappend(s, s2);
 if (cstate->linktype == 127) {




  sjset_qos->s.jf = s2 = new_stmt(cstate, 
                                         0x00
                                               |
                                                0x20
                                                       |
                                                        0x00
                                                             );
  s2->s.k = 4;
  sappend(s, s2);

  sjset_radiotap_flags_present = new_stmt(cstate, ((
                                                 0x40
                                                 )|
                                                 0x05
                                                 |
                                                 0x00
                                                 ));
  sjset_radiotap_flags_present->s.k = ((((0x00000002)&0xff)<<24) | (((0x00000002)&0xff00)<<8) | (((0x00000002)&0xff0000)>>8) | (((0x00000002)>>24)&0xff));
  sappend(s, sjset_radiotap_flags_present);




  sjset_radiotap_flags_present->s.jf = snext;




  sjset_radiotap_ext_present = new_stmt(cstate, ((
                                               0x40
                                               )|
                                               0x05
                                               |
                                               0x00
                                               ));
  sjset_radiotap_ext_present->s.k = ((((0x80000000)&0xff)<<24) | (((0x80000000)&0xff00)<<8) | (((0x80000000)&0xff0000)>>8) | (((0x80000000)>>24)&0xff));
  sappend(s, sjset_radiotap_ext_present);
  sjset_radiotap_flags_present->s.jt = sjset_radiotap_ext_present;




  sjset_radiotap_ext_present->s.jt = snext;




  sjset_radiotap_tsft_present = new_stmt(cstate, ((
                                                0x40
                                                )|
                                                0x05
                                                |
                                                0x00
                                                ));
  sjset_radiotap_tsft_present->s.k = ((((0x00000001)&0xff)<<24) | (((0x00000001)&0xff00)<<8) | (((0x00000001)&0xff0000)>>8) | (((0x00000001)>>24)&0xff));
  sappend(s, sjset_radiotap_tsft_present);
  sjset_radiotap_ext_present->s.jf = sjset_radiotap_tsft_present;
  s2 = new_stmt(cstate, 
                       0x00
                             |
                              0x20
                                     |
                                      0x10
                                           );
  s2->s.k = 16;
  sappend(s, s2);
  sjset_radiotap_tsft_present->s.jt = s2;

  sjset_tsft_datapad = new_stmt(cstate, ((
                                       0x40
                                       )|
                                       0x05
                                       |
                                       0x00
                                       ));
  sjset_tsft_datapad->s.k = 0x20;
  sappend(s, sjset_tsft_datapad);
  s2 = new_stmt(cstate, 
                       0x00
                             |
                              0x20
                                     |
                                      0x10
                                           );
  s2->s.k = 8;
  sappend(s, s2);
  sjset_radiotap_tsft_present->s.jf = s2;

  sjset_notsft_datapad = new_stmt(cstate, ((
                                         0x40
                                         )|
                                         0x05
                                         |
                                         0x00
                                         ));
  sjset_notsft_datapad->s.k = 0x20;
  sappend(s, sjset_notsft_datapad);
  s_roundup = new_stmt(cstate, 
                              0x00
                                    |
                                     0x60
                                            );
  s_roundup->s.k = cstate->off_linkpl.reg;
  sappend(s, s_roundup);
  s2 = new_stmt(cstate, 
                       0x04
                              |
                               0x00
                                      |
                                       0x00
                                              );
  s2->s.k = 3;
  sappend(s, s2);
  s2 = new_stmt(cstate, 
                       0x04
                              |
                               0x50
                                      |
                                       0x00
                                              );
  s2->s.k = ~3;
  sappend(s, s2);
  s2 = new_stmt(cstate, 
                       0x02
                             );
  s2->s.k = cstate->off_linkpl.reg;
  sappend(s, s2);

  sjset_tsft_datapad->s.jt = s_roundup;
  sjset_tsft_datapad->s.jf = snext;
  sjset_notsft_datapad->s.jt = s_roundup;
  sjset_notsft_datapad->s.jf = snext;
 } else
  sjset_qos->s.jf = snext;

 return s;
}

static void
insert_compute_vloffsets(compiler_state_t *cstate, struct block *b)
{
 struct slist *s={0};






 if (cstate->off_linkpl.reg != -1 && cstate->off_linkhdr.is_variable &&
     cstate->off_linkhdr.reg == -1)
  cstate->off_linkhdr.reg = alloc_reg(cstate);
 switch (cstate->outermostlinktype) {

 case 119:
  s = gen_load_prism_llprefixlen(cstate);
  break;

 case 163:
  s = gen_load_avs_llprefixlen(cstate);
  break;

 case 127:
  s = gen_load_radiotap_llprefixlen(cstate);
  break;

 case 192:
  s = gen_load_ppi_llprefixlen(cstate);
  break;

 default:
  s = 
     ((void *)0)
         ;
  break;
 }






 switch (cstate->outermostlinktype) {

 case 105:
 case 119:
 case 163:
 case 127:
 case 192:
  s = gen_load_802_11_header_len(cstate, s, b->stmts);
  break;
 }





 if (s == 
         ((void *)0) 
              && cstate->is_vlan_vloffset) {
  struct slist *s2={0};

  if (cstate->off_linkpl.reg == -1)
   cstate->off_linkpl.reg = alloc_reg(cstate);
  if (cstate->off_linktype.reg == -1)
   cstate->off_linktype.reg = alloc_reg(cstate);

  s = new_stmt(cstate, 
                      0x00
                            |
                             0x00
                                  |
                                   0x00
                                          );
  s->s.k = 0;
  s2 = new_stmt(cstate, 
                       0x02
                             );
  s2->s.k = cstate->off_linkpl.reg;
  sappend(s, s2);
  s2 = new_stmt(cstate, 
                       0x02
                             );
  s2->s.k = cstate->off_linktype.reg;
  sappend(s, s2);
 }







 if (s != 
         ((void *)0)
             ) {
  sappend(s, b->stmts);
  b->stmts = s;
 }
}

static struct block *
gen_ppi_dlt_check(compiler_state_t *cstate)
{
 struct slist *s_load_dlt={0};
 struct block *b={0};

 if (cstate->linktype == 192)
 {


  s_load_dlt = new_stmt(cstate, 
                               0x00
                                     |
                                      0x00
                                           |
                                            0x20
                                                   );
  s_load_dlt->s.k = 4;

  b = new_block(cstate, ((
                       0x10
                       )|
                       0x05
                       |
                       0x00
                       ));

  b->stmts = s_load_dlt;
  b->s.k = ((((105)&0xff)<<24) | (((105)&0xff00)<<8) | (((105)&0xff0000)>>8) | (((105)>>24)&0xff));
 }
 else
 {
  b = 
     ((void *)0)
         ;
 }

 return b;
}
static struct slist *
gen_abs_offset_varpart(compiler_state_t *cstate, bpf_abs_offset *off)
{
 struct slist *s={0};

 if (off->is_variable) {
  if (off->reg == -1) {





   off->reg = alloc_reg(cstate);
  }





  s = new_stmt(cstate, 
                      0x01
                             |
                              0x60
                                     );
  s->s.k = off->reg;
  return s;
 } else {




  return 
        ((void *)0)
            ;
 }
}




static int
ethertype_to_ppptype(int proto)
{
 switch (proto) {

 case 0x0800:
  proto = 0x0021;
  break;

 case 0x86dd:
  proto = 0x0057;
  break;

 case 0x6003:
  proto = 0x0027;
  break;

 case 0x809b:
  proto = 0x0029;
  break;

 case 0x0600:
  proto = 0x0025;
  break;

 case 0xfe:
  proto = 0x0023;
  break;

 case 0x42:





  proto = 0x0031;
  break;

 case 0xe0:
  proto = 0x002b;
  break;
 }
 return (proto);
}







static struct block *
gen_prevlinkhdr_check(compiler_state_t *cstate)
{
 struct block *b0={0};

 if (cstate->is_geneve)
  return gen_geneve_ll_check(cstate);

 switch (cstate->prevlinktype) {

 case 123:







  b0 = gen_cmp(cstate, OR_PREVLINKHDR, 4, 
                                                            0x08
                                                                 , 0xFF00);
  gen_not(b0);
  return b0;

 default:



  return 
        ((void *)0)
            ;
 }

}
static struct block *
gen_linktype(compiler_state_t *cstate, int proto)
{
 struct block *b0, *b1, *b2={0};
 const char *description={0};


 if (cstate->label_stack_depth > 0) {
  switch (proto) {
  case 0x0800:
  case 0x0021:

   return gen_mpls_linktype(cstate, 2);

  case 0x86dd:
  case 0x0057:

   return gen_mpls_linktype(cstate, 17);

  default:
   bpf_error(cstate, "unsupported protocol over mpls");

  }
 }

 switch (cstate->linktype) {

 case 1:
 case 240:
 case 241:


  if (!cstate->is_geneve)
   b0 = gen_prevlinkhdr_check(cstate);
  else
   b0 = 
       ((void *)0)
           ;

  b1 = gen_ether_linktype(cstate, proto);
  if (b0 != 
           ((void *)0)
               )
   gen_and(b0, b1);
  return b1;

  break;

 case 104:
  switch (proto) {

  case 0xfe:
   proto = (proto << 8 | 0xfe);


  default:
   return gen_cmp(cstate, OR_LINKTYPE, 0, 
                                         0x08
                                              , (bpf_int32)proto);

   break;
  }
  break;

 case 105:
 case 119:
 case 163:
 case 127:
 case 192:



  b0 = gen_check_802_11_data_frame(cstate);




  b1 = gen_llc_linktype(cstate, proto);
  gen_and(b0, b1);
  return b1;

  break;

 case 10:



  return gen_llc_linktype(cstate, proto);

  break;

 case 6:



  return gen_llc_linktype(cstate, proto);

  break;

 case 11:
 case 19:
 case 122:
  return gen_llc_linktype(cstate, proto);

  break;

 case 123:







  b0 = gen_atmfield_code(cstate, 53, 0x02, 
                                                     0x10
                                                            , 0);
  b1 = gen_llc_linktype(cstate, proto);
  gen_and(b0, b1);
  return b1;

  break;

 case 113:
  return gen_linux_sll_linktype(cstate, proto);

  break;

 case 8:
 case 15:
 case 12:







  switch (proto) {

  case 0x0800:

   return gen_mcmp(cstate, OR_LINKHDR, 0, 
                                         0x10
                                              , 0x40, 0xF0);

  case 0x86dd:

   return gen_mcmp(cstate, OR_LINKHDR, 0, 
                                         0x10
                                              , 0x60, 0xF0);

  default:
   return gen_false(cstate);
  }

  break;

 case 228:



  if (proto == 0x0800)
   return gen_true(cstate);


  return gen_false(cstate);

  break;

 case 229:



  if (proto == 0x86dd)
   return gen_true(cstate);


  return gen_false(cstate);

  break;

 case 9:
 case 166:
 case 50:
 case 51:




  proto = ethertype_to_ppptype(proto);
  return gen_cmp(cstate, OR_LINKTYPE, 0, 
                                        0x08
                                             , (bpf_int32)proto);

  break;

 case 16:




  switch (proto) {

  case 0x0800:




   b0 = gen_cmp(cstate, OR_LINKTYPE, 0, 
                                       0x08
                                            , 0x0021);
   b1 = gen_cmp(cstate, OR_LINKTYPE, 0, 
                                       0x08
                                            , 0x002d);
   gen_or(b0, b1);
   b0 = gen_cmp(cstate, OR_LINKTYPE, 0, 
                                       0x08
                                            , 0x002f);
   gen_or(b1, b0);
   return b0;

  default:
   proto = ethertype_to_ppptype(proto);
   return gen_cmp(cstate, OR_LINKTYPE, 0, 
                                         0x08
                                              ,
    (bpf_int32)proto);
  }

  break;

 case 0:
 case 108:
 case 109:
  switch (proto) {

  case 0x0800:
   return (gen_loopback_linktype(cstate, 
                                        2
                                               ));

  case 0x86dd:
   if (cstate->bpf_pcap->rfile != 
                                 ((void *)0)
                                     ) {




    b0 = gen_loopback_linktype(cstate, 24);
    b1 = gen_loopback_linktype(cstate, 28);
    gen_or(b0, b1);
    b0 = gen_loopback_linktype(cstate, 30);
    gen_or(b0, b1);
    return (b1);
   } else {
    return (gen_loopback_linktype(cstate, 
                                         10
                                                 ));
   }

  default:





   return gen_false(cstate);
  }
 case 7:
 case 129:




  switch (proto) {

  default:
   return gen_false(cstate);

  case 0x86dd:
   return (gen_cmp(cstate, OR_LINKTYPE, 0, 
                                          0x10
                                               ,
    (bpf_int32)0xc4));

  case 0x0800:
   b0 = gen_cmp(cstate, OR_LINKTYPE, 0, 
                                       0x10
                                            ,
         (bpf_int32)212);
   b1 = gen_cmp(cstate, OR_LINKTYPE, 0, 
                                       0x10
                                            ,
         (bpf_int32)240);
   gen_or(b0, b1);
   return (b1);

  case 0x0806:
   b0 = gen_cmp(cstate, OR_LINKTYPE, 0, 
                                       0x10
                                            ,
         (bpf_int32)213);
   b1 = gen_cmp(cstate, OR_LINKTYPE, 0, 
                                       0x10
                                            ,
         (bpf_int32)241);
   gen_or(b0, b1);
   return (b1);

  case 0x8035:
   return (gen_cmp(cstate, OR_LINKTYPE, 0, 
                                          0x10
                                               ,
     (bpf_int32)214));

  case 0x809b:
   return (gen_cmp(cstate, OR_LINKTYPE, 0, 
                                          0x10
                                               ,
     (bpf_int32)221));
  }

  break;

 case 114:
  switch (proto) {
  case 0x809b:
   return gen_true(cstate);
  default:
   return gen_false(cstate);
  }

  break;

 case 107:




  switch (proto) {

  case 0x0800:



   return gen_cmp(cstate, OR_LINKHDR, 2, 
                                        0x08
                                             , (0x03<<8) | 0xcc);

  case 0x86dd:



   return gen_cmp(cstate, OR_LINKHDR, 2, 
                                        0x08
                                             , (0x03<<8) | 0x8e);

  case 0xfe:
   b0 = gen_cmp(cstate, OR_LINKHDR, 2, 
                                      0x08
                                           , (0x03<<8) | 0x81);
   b1 = gen_cmp(cstate, OR_LINKHDR, 2, 
                                      0x08
                                           , (0x03<<8) | 0x82);
   b2 = gen_cmp(cstate, OR_LINKHDR, 2, 
                                      0x08
                                           , (0x03<<8) | 0x83);
   gen_or(b1, b2);
   gen_or(b0, b2);
   return b2;

  default:
   return gen_false(cstate);
  }

  break;

 case 182:
  bpf_error(cstate, "Multi-link Frame Relay link-layer type filtering not implemented");

        case 134:
        case 131:
        case 130:
 case 137:
 case 135:
 case 167:
 case 168:
        case 133:
        case 132:
        case 164:
        case 136:
        case 178:
        case 179:
        case 180:
        case 181:
        case 183:
        case 200:
        case 194:
        case 232:
        case 233:
        case 234:
 case 238:
  return gen_mcmp(cstate, OR_LINKHDR, 0, 
                                        0x00
                                             , 0x4d474300, 0xffffff00);

 case 165:
  return gen_mcmp(cstate, OR_LINKHDR, 0, 
                                        0x00
                                             , 0x55FF0000, 0xffff0000);

 case 226:
  return gen_ipnet_linktype(cstate, proto);

 case 144:
  bpf_error(cstate, "IrDA link-layer type filtering not implemented");

 case 143:
  bpf_error(cstate, "DOCSIS link-layer type filtering not implemented");

 case 140:
 case 139:
  bpf_error(cstate, "MTP2 link-layer type filtering not implemented");

 case 197:
  bpf_error(cstate, "ERF link-layer type filtering not implemented");

 case 246:
  bpf_error(cstate, "PFSYNC link-layer type filtering not implemented");

 case 177:
  bpf_error(cstate, "LAPD link-layer type filtering not implemented");

 case 186:
 case 189:
 case 220:
 case 249:
  bpf_error(cstate, "USB link-layer type filtering not implemented");

 case 187:
 case 201:
  bpf_error(cstate, "Bluetooth link-layer type filtering not implemented");

 case 190:
 case 227:
  bpf_error(cstate, "CAN link-layer type filtering not implemented");

 case 195:
 case 191:
 case 215:
 case 230:
  bpf_error(cstate, "IEEE 802.15.4 link-layer type filtering not implemented");

 case 193:
  bpf_error(cstate, "IEEE 802.16 link-layer type filtering not implemented");

 case 196:
  bpf_error(cstate, "SITA link-layer type filtering not implemented");

 case 198:
  bpf_error(cstate, "RAIF1 link-layer type filtering not implemented");

 case 199:
  bpf_error(cstate, "IPMB link-layer type filtering not implemented");

 case 202:
  bpf_error(cstate, "AX.25 link-layer type filtering not implemented");

 case 239:




  bpf_error(cstate, "NFLOG link-layer type filtering not implemented");

 default:






  if (cstate->off_linktype.constant_part != 0xffffffffU) {





   return gen_cmp(cstate, OR_LINKTYPE, 0, 
                                         0x08
                                              , (bpf_int32)proto);
  } else {



   description = pcap_datalink_val_to_description(cstate->linktype);
   if (description != 
                     ((void *)0)
                         ) {
    bpf_error(cstate, "%s link-layer type filtering not implemented",
        description);
   } else {
    bpf_error(cstate, "DLT %u link-layer type filtering not implemented",
        cstate->linktype);
   }
  }
  break;
 }
}
static struct block *
gen_snap(compiler_state_t *cstate, bpf_u_int32 orgcode, bpf_u_int32 ptype)
{
 u_char snapblock[8]={0};

 snapblock[0] = 0xaa;
 snapblock[1] = 0xaa;
 snapblock[2] = 0x03;
 snapblock[3] = (u_char)(orgcode >> 16);
 snapblock[4] = (u_char)(orgcode >> 8);
 snapblock[5] = (u_char)(orgcode >> 0);
 snapblock[6] = (u_char)(ptype >> 8);
 snapblock[7] = (u_char)(ptype >> 0);
 return gen_bcmp(cstate, OR_LLC, 0, 8, snapblock);
}




struct block *
gen_llc(compiler_state_t *cstate)
{
 struct block *b0, *b1={0};

 switch (cstate->linktype) {

 case 1:




  b0 = gen_cmp_gt(cstate, OR_LINKTYPE, 0, 
                                         0x08
                                              , 1500);
  gen_not(b0);





  b1 = gen_cmp(cstate, OR_LLC, 0, 
                                 0x08
                                      , (bpf_int32)0xFFFF);
  gen_not(b1);
  gen_and(b0, b1);
  return b1;

 case 123:



  b0 = gen_atmtype_abbrev(cstate, 31);
  return b0;

 case 6:



  return gen_true(cstate);

 case 10:



  return gen_true(cstate);

 case 11:
  return gen_true(cstate);

 case 105:
 case 119:
 case 127:
 case 163:
 case 192:



  b0 = gen_check_802_11_data_frame(cstate);
  return b0;

 default:
  bpf_error(cstate, "'llc' not supported for linktype %d", cstate->linktype);

 }
}

struct block *
gen_llc_i(compiler_state_t *cstate)
{
 struct block *b0, *b1={0};
 struct slist *s={0};




 b0 = gen_llc(cstate);





 s = gen_load_a(cstate, OR_LLC, 2, 
                                  0x10
                                       );
 b1 = new_block(cstate, ((
                       0x40
                       )|
                       0x05
                       |
                       0x00
                       ));
 b1->s.k = 0x01;
 b1->stmts = s;
 gen_not(b1);
 gen_and(b0, b1);
 return b1;
}

struct block *
gen_llc_s(compiler_state_t *cstate)
{
 struct block *b0, *b1={0};




 b0 = gen_llc(cstate);





 b1 = gen_mcmp(cstate, OR_LLC, 2, 
                                 0x10
                                      , 1, 0x03);
 gen_and(b0, b1);
 return b1;
}

struct block *
gen_llc_u(compiler_state_t *cstate)
{
 struct block *b0, *b1={0};




 b0 = gen_llc(cstate);





 b1 = gen_mcmp(cstate, OR_LLC, 2, 
                                 0x10
                                      , 3, 0x03);
 gen_and(b0, b1);
 return b1;
}

struct block *
gen_llc_s_subtype(compiler_state_t *cstate, bpf_u_int32 subtype)
{
 struct block *b0, *b1={0};




 b0 = gen_llc(cstate);




 b1 = gen_mcmp(cstate, OR_LLC, 2, 
                                 0x10
                                      , subtype, 0x0f);
 gen_and(b0, b1);
 return b1;
}

struct block *
gen_llc_u_subtype(compiler_state_t *cstate, bpf_u_int32 subtype)
{
 struct block *b0, *b1={0};




 b0 = gen_llc(cstate);




 b1 = gen_mcmp(cstate, OR_LLC, 2, 
                                 0x10
                                      , subtype, 0xef);
 gen_and(b0, b1);
 return b1;
}
static struct block *
gen_llc_linktype(compiler_state_t *cstate, int proto)
{



 switch (proto) {

 case 0x06:
 case 0xfe:
 case 0xf0:





  return gen_cmp(cstate, OR_LLC, 0, 
                                   0x08
                                        , (bpf_u_int32)
        ((proto << 8) | proto));

 case 0xe0:




  return gen_cmp(cstate, OR_LLC, 0, 
                                   0x10
                                        ,
      (bpf_int32)0xe0);

 case 0x809b:
  return gen_snap(cstate, 0x080007, 0x809b);

 default:




  if (proto <= 1500) {




   return gen_cmp(cstate, OR_LLC, 0, 
                                    0x10
                                         , (bpf_int32)proto);
  } else {
   return gen_cmp(cstate, OR_LLC, 6, 
                                    0x08
                                         , (bpf_int32)proto);
  }
 }
}

static struct block *
gen_hostop(compiler_state_t *cstate, bpf_u_int32 addr, bpf_u_int32 mask,
    int dir, int proto, u_int src_off, u_int dst_off)
{
 struct block *b0, *b1={0};
 u_int offset={0};

 switch (dir) {

 case 1:
  offset = src_off;
  break;

 case 2:
  offset = dst_off;
  break;

 case 4:
  b0 = gen_hostop(cstate, addr, mask, 1, proto, src_off, dst_off);
  b1 = gen_hostop(cstate, addr, mask, 2, proto, src_off, dst_off);
  gen_and(b0, b1);
  return b1;

 case 3:
 case 0:
  b0 = gen_hostop(cstate, addr, mask, 1, proto, src_off, dst_off);
  b1 = gen_hostop(cstate, addr, mask, 2, proto, src_off, dst_off);
  gen_or(b0, b1);
  return b1;

 case 5:
  bpf_error(cstate, "'addr1' and 'address1' are not valid qualifiers for addresses other than 802.11 MAC addresses");
  break;

 case 6:
  bpf_error(cstate, "'addr2' and 'address2' are not valid qualifiers for addresses other than 802.11 MAC addresses");
  break;

 case 7:
  bpf_error(cstate, "'addr3' and 'address3' are not valid qualifiers for addresses other than 802.11 MAC addresses");
  break;

 case 8:
  bpf_error(cstate, "'addr4' and 'address4' are not valid qualifiers for addresses other than 802.11 MAC addresses");
  break;

 case 9:
  bpf_error(cstate, "'ra' is not a valid qualifier for addresses other than 802.11 MAC addresses");
  break;

 case 10:
  bpf_error(cstate, "'ta' is not a valid qualifier for addresses other than 802.11 MAC addresses");
  break;

 default:
  abort();
 }
 b0 = gen_linktype(cstate, proto);
 b1 = gen_mcmp(cstate, OR_LINKPL, offset, 
                                         0x00
                                              , (bpf_int32)addr, mask);
 gen_and(b0, b1);
 return b1;
}


static struct block *
gen_hostop6(compiler_state_t *cstate, struct in6_addr *addr,
    struct in6_addr *mask, int dir, int proto, u_int src_off, u_int dst_off)
{
 struct block *b0, *b1={0};
 u_int offset={0};
 uint32_t *a, *m={0};

 switch (dir) {

 case 1:
  offset = src_off;
  break;

 case 2:
  offset = dst_off;
  break;

 case 4:
  b0 = gen_hostop6(cstate, addr, mask, 1, proto, src_off, dst_off);
  b1 = gen_hostop6(cstate, addr, mask, 2, proto, src_off, dst_off);
  gen_and(b0, b1);
  return b1;

 case 3:
 case 0:
  b0 = gen_hostop6(cstate, addr, mask, 1, proto, src_off, dst_off);
  b1 = gen_hostop6(cstate, addr, mask, 2, proto, src_off, dst_off);
  gen_or(b0, b1);
  return b1;

 case 5:
  bpf_error(cstate, "'addr1' and 'address1' are not valid qualifiers for addresses other than 802.11 MAC addresses");
  break;

 case 6:
  bpf_error(cstate, "'addr2' and 'address2' are not valid qualifiers for addresses other than 802.11 MAC addresses");
  break;

 case 7:
  bpf_error(cstate, "'addr3' and 'address3' are not valid qualifiers for addresses other than 802.11 MAC addresses");
  break;

 case 8:
  bpf_error(cstate, "'addr4' and 'address4' are not valid qualifiers for addresses other than 802.11 MAC addresses");
  break;

 case 9:
  bpf_error(cstate, "'ra' is not a valid qualifier for addresses other than 802.11 MAC addresses");
  break;

 case 10:
  bpf_error(cstate, "'ta' is not a valid qualifier for addresses other than 802.11 MAC addresses");
  break;

 default:
  abort();
 }

 a = (uint32_t *)addr;
 m = (uint32_t *)mask;
 b1 = gen_mcmp(cstate, OR_LINKPL, offset + 12, 
                                              0x00
                                                   , ntohl(a[3]), ntohl(m[3]));
 b0 = gen_mcmp(cstate, OR_LINKPL, offset + 8, 
                                             0x00
                                                  , ntohl(a[2]), ntohl(m[2]));
 gen_and(b0, b1);
 b0 = gen_mcmp(cstate, OR_LINKPL, offset + 4, 
                                             0x00
                                                  , ntohl(a[1]), ntohl(m[1]));
 gen_and(b0, b1);
 b0 = gen_mcmp(cstate, OR_LINKPL, offset + 0, 
                                             0x00
                                                  , ntohl(a[0]), ntohl(m[0]));
 gen_and(b0, b1);
 b0 = gen_linktype(cstate, proto);
 gen_and(b0, b1);
 return b1;
}


static struct block *
gen_ehostop(compiler_state_t *cstate, const u_char *eaddr, int dir)
{
 register struct block *b0, *b1={0};

 switch (dir) {
 case 1:
  return gen_bcmp(cstate, OR_LINKHDR, 6, 6, eaddr);

 case 2:
  return gen_bcmp(cstate, OR_LINKHDR, 0, 6, eaddr);

 case 4:
  b0 = gen_ehostop(cstate, eaddr, 1);
  b1 = gen_ehostop(cstate, eaddr, 2);
  gen_and(b0, b1);
  return b1;

 case 0:
 case 3:
  b0 = gen_ehostop(cstate, eaddr, 1);
  b1 = gen_ehostop(cstate, eaddr, 2);
  gen_or(b0, b1);
  return b1;

 case 5:
  bpf_error(cstate, "'addr1' and 'address1' are only supported on 802.11 with 802.11 headers");
  break;

 case 6:
  bpf_error(cstate, "'addr2' and 'address2' are only supported on 802.11 with 802.11 headers");
  break;

 case 7:
  bpf_error(cstate, "'addr3' and 'address3' are only supported on 802.11 with 802.11 headers");
  break;

 case 8:
  bpf_error(cstate, "'addr4' and 'address4' are only supported on 802.11 with 802.11 headers");
  break;

 case 9:
  bpf_error(cstate, "'ra' is only supported on 802.11 with 802.11 headers");
  break;

 case 10:
  bpf_error(cstate, "'ta' is only supported on 802.11 with 802.11 headers");
  break;
 }
 abort();

}




static struct block *
gen_fhostop(compiler_state_t *cstate, const u_char *eaddr, int dir)
{
 struct block *b0, *b1={0};

 switch (dir) {
 case 1:
  return gen_bcmp(cstate, OR_LINKHDR, 6 + 1 + cstate->pcap_fddipad, 6, eaddr);

 case 2:
  return gen_bcmp(cstate, OR_LINKHDR, 0 + 1 + cstate->pcap_fddipad, 6, eaddr);

 case 4:
  b0 = gen_fhostop(cstate, eaddr, 1);
  b1 = gen_fhostop(cstate, eaddr, 2);
  gen_and(b0, b1);
  return b1;

 case 0:
 case 3:
  b0 = gen_fhostop(cstate, eaddr, 1);
  b1 = gen_fhostop(cstate, eaddr, 2);
  gen_or(b0, b1);
  return b1;

 case 5:
  bpf_error(cstate, "'addr1' and 'address1' are only supported on 802.11");
  break;

 case 6:
  bpf_error(cstate, "'addr2' and 'address2' are only supported on 802.11");
  break;

 case 7:
  bpf_error(cstate, "'addr3' and 'address3' are only supported on 802.11");
  break;

 case 8:
  bpf_error(cstate, "'addr4' and 'address4' are only supported on 802.11");
  break;

 case 9:
  bpf_error(cstate, "'ra' is only supported on 802.11");
  break;

 case 10:
  bpf_error(cstate, "'ta' is only supported on 802.11");
  break;
 }
 abort();

}




static struct block *
gen_thostop(compiler_state_t *cstate, const u_char *eaddr, int dir)
{
 register struct block *b0, *b1={0};

 switch (dir) {
 case 1:
  return gen_bcmp(cstate, OR_LINKHDR, 8, 6, eaddr);

 case 2:
  return gen_bcmp(cstate, OR_LINKHDR, 2, 6, eaddr);

 case 4:
  b0 = gen_thostop(cstate, eaddr, 1);
  b1 = gen_thostop(cstate, eaddr, 2);
  gen_and(b0, b1);
  return b1;

 case 0:
 case 3:
  b0 = gen_thostop(cstate, eaddr, 1);
  b1 = gen_thostop(cstate, eaddr, 2);
  gen_or(b0, b1);
  return b1;

 case 5:
  bpf_error(cstate, "'addr1' and 'address1' are only supported on 802.11");
  break;

 case 6:
  bpf_error(cstate, "'addr2' and 'address2' are only supported on 802.11");
  break;

 case 7:
  bpf_error(cstate, "'addr3' and 'address3' are only supported on 802.11");
  break;

 case 8:
  bpf_error(cstate, "'addr4' and 'address4' are only supported on 802.11");
  break;

 case 9:
  bpf_error(cstate, "'ra' is only supported on 802.11");
  break;

 case 10:
  bpf_error(cstate, "'ta' is only supported on 802.11");
  break;
 }
 abort();

}





static struct block *
gen_wlanhostop(compiler_state_t *cstate, const u_char *eaddr, int dir)
{
 register struct block *b0, *b1, *b2={0};
 register struct slist *s={0};
 switch (dir) {
 case 1:
  s = gen_load_a(cstate, OR_LINKHDR, 1, 
                                       0x10
                                            );
  b1 = new_block(cstate, ((
                        0x40
                        )|
                        0x05
                        |
                        0x00
                        ));
  b1->s.k = 0x01;
  b1->stmts = s;




  b0 = gen_bcmp(cstate, OR_LINKHDR, 24, 6, eaddr);
  gen_and(b1, b0);





  s = gen_load_a(cstate, OR_LINKHDR, 1, 
                                       0x10
                                            );
  b2 = new_block(cstate, ((
                        0x40
                        )|
                        0x05
                        |
                        0x00
                        ));
  b2->s.k = 0x01;
  b2->stmts = s;
  gen_not(b2);




  b1 = gen_bcmp(cstate, OR_LINKHDR, 16, 6, eaddr);
  gen_and(b2, b1);






  gen_or(b1, b0);





  s = gen_load_a(cstate, OR_LINKHDR, 1, 
                                       0x10
                                            );
  b1 = new_block(cstate, ((
                        0x40
                        )|
                        0x05
                        |
                        0x00
                        ));
  b1->s.k = 0x02;
  b1->stmts = s;
  gen_and(b1, b0);




  s = gen_load_a(cstate, OR_LINKHDR, 1, 
                                       0x10
                                            );
  b2 = new_block(cstate, ((
                        0x40
                        )|
                        0x05
                        |
                        0x00
                        ));
  b2->s.k = 0x02;
  b2->stmts = s;
  gen_not(b2);




  b1 = gen_bcmp(cstate, OR_LINKHDR, 10, 6, eaddr);
  gen_and(b2, b1);






  gen_or(b1, b0);





  s = gen_load_a(cstate, OR_LINKHDR, 0, 
                                       0x10
                                            );
  b1 = new_block(cstate, ((
                        0x40
                        )|
                        0x05
                        |
                        0x00
                        ));
  b1->s.k = 0x08;
  b1->stmts = s;




  gen_and(b1, b0);






  s = gen_load_a(cstate, OR_LINKHDR, 0, 
                                       0x10
                                            );
  b2 = new_block(cstate, ((
                        0x40
                        )|
                        0x05
                        |
                        0x00
                        ));
  b2->s.k = 0x08;
  b2->stmts = s;
  gen_not(b2);




  b1 = gen_bcmp(cstate, OR_LINKHDR, 10, 6, eaddr);
  gen_and(b2, b1);






  gen_or(b1, b0);
  s = gen_load_a(cstate, OR_LINKHDR, 0, 
                                       0x10
                                            );
  b1 = new_block(cstate, ((
                        0x40
                        )|
                        0x05
                        |
                        0x00
                        ));
  b1->s.k = 0x04;
  b1->stmts = s;
  gen_not(b1);





  gen_and(b1, b0);
  return b0;

 case 2:
  s = gen_load_a(cstate, OR_LINKHDR, 1, 
                                       0x10
                                            );
  b1 = new_block(cstate, ((
                        0x40
                        )|
                        0x05
                        |
                        0x00
                        ));
  b1->s.k = 0x01;
  b1->stmts = s;




  b0 = gen_bcmp(cstate, OR_LINKHDR, 16, 6, eaddr);
  gen_and(b1, b0);





  s = gen_load_a(cstate, OR_LINKHDR, 1, 
                                       0x10
                                            );
  b2 = new_block(cstate, ((
                        0x40
                        )|
                        0x05
                        |
                        0x00
                        ));
  b2->s.k = 0x01;
  b2->stmts = s;
  gen_not(b2);




  b1 = gen_bcmp(cstate, OR_LINKHDR, 4, 6, eaddr);
  gen_and(b2, b1);





  gen_or(b1, b0);





  s = gen_load_a(cstate, OR_LINKHDR, 0, 
                                       0x10
                                            );
  b1 = new_block(cstate, ((
                        0x40
                        )|
                        0x05
                        |
                        0x00
                        ));
  b1->s.k = 0x08;
  b1->stmts = s;




  gen_and(b1, b0);






  s = gen_load_a(cstate, OR_LINKHDR, 0, 
                                       0x10
                                            );
  b2 = new_block(cstate, ((
                        0x40
                        )|
                        0x05
                        |
                        0x00
                        ));
  b2->s.k = 0x08;
  b2->stmts = s;
  gen_not(b2);




  b1 = gen_bcmp(cstate, OR_LINKHDR, 4, 6, eaddr);
  gen_and(b2, b1);






  gen_or(b1, b0);
  s = gen_load_a(cstate, OR_LINKHDR, 0, 
                                       0x10
                                            );
  b1 = new_block(cstate, ((
                        0x40
                        )|
                        0x05
                        |
                        0x00
                        ));
  b1->s.k = 0x04;
  b1->stmts = s;
  gen_not(b1);





  gen_and(b1, b0);
  return b0;

 case 9:
  s = gen_load_a(cstate, OR_LINKHDR, 0, 
                                       0x10
                                            );
  b1 = new_block(cstate, ((
                        0x40
                        )|
                        0x05
                        |
                        0x00
                        ));
  b1->s.k = 0x08;
  b1->stmts = s;




  b0 = gen_bcmp(cstate, OR_LINKHDR, 4, 6, eaddr);




  gen_and(b1, b0);
  return (b0);

 case 10:
  b0 = gen_mcmp(cstate, OR_LINKHDR, 0, 
                                      0x10
                                           , 0x04,
   0x0c);
  gen_not(b0);
  b1 = gen_mcmp(cstate, OR_LINKHDR, 0, 
                                      0x10
                                           , 0xc0,
   0xf0);
  gen_not(b1);
  b2 = gen_mcmp(cstate, OR_LINKHDR, 0, 
                                      0x10
                                           , 0xd0,
   0xf0);
  gen_not(b2);
  gen_and(b1, b2);
  gen_or(b0, b2);






  s = gen_load_a(cstate, OR_LINKHDR, 0, 
                                       0x10
                                            );
  b1 = new_block(cstate, ((
                        0x40
                        )|
                        0x05
                        |
                        0x00
                        ));
  b1->s.k = 0x08;
  b1->stmts = s;





  gen_and(b1, b2);




  b1 = gen_bcmp(cstate, OR_LINKHDR, 10, 6, eaddr);
  gen_and(b2, b1);
  return b1;




 case 5:
  return (gen_bcmp(cstate, OR_LINKHDR, 4, 6, eaddr));

 case 6:



  b0 = gen_mcmp(cstate, OR_LINKHDR, 0, 
                                      0x10
                                           , 0x04,
   0x0c);
  gen_not(b0);
  b1 = gen_mcmp(cstate, OR_LINKHDR, 0, 
                                      0x10
                                           , 0xc0,
   0xf0);
  gen_not(b1);
  b2 = gen_mcmp(cstate, OR_LINKHDR, 0, 
                                      0x10
                                           , 0xd0,
   0xf0);
  gen_not(b2);
  gen_and(b1, b2);
  gen_or(b0, b2);
  b1 = gen_bcmp(cstate, OR_LINKHDR, 10, 6, eaddr);
  gen_and(b2, b1);
  return b1;

 case 7:



  b0 = gen_mcmp(cstate, OR_LINKHDR, 0, 
                                      0x10
                                           , 0x04,
   0x0c);
  gen_not(b0);
  b1 = gen_bcmp(cstate, OR_LINKHDR, 16, 6, eaddr);
  gen_and(b0, b1);
  return b1;

 case 8:






  b0 = gen_mcmp(cstate, OR_LINKHDR, 1, 
                                      0x10
                                           ,
   0x03, 0x03);
  b1 = gen_bcmp(cstate, OR_LINKHDR, 24, 6, eaddr);
  gen_and(b0, b1);
  return b1;

 case 4:
  b0 = gen_wlanhostop(cstate, eaddr, 1);
  b1 = gen_wlanhostop(cstate, eaddr, 2);
  gen_and(b0, b1);
  return b1;

 case 0:
 case 3:
  b0 = gen_wlanhostop(cstate, eaddr, 1);
  b1 = gen_wlanhostop(cstate, eaddr, 2);
  gen_or(b0, b1);
  return b1;
 }
 abort();

}






static struct block *
gen_ipfchostop(compiler_state_t *cstate, const u_char *eaddr, int dir)
{
 register struct block *b0, *b1={0};

 switch (dir) {
 case 1:
  return gen_bcmp(cstate, OR_LINKHDR, 10, 6, eaddr);

 case 2:
  return gen_bcmp(cstate, OR_LINKHDR, 2, 6, eaddr);

 case 4:
  b0 = gen_ipfchostop(cstate, eaddr, 1);
  b1 = gen_ipfchostop(cstate, eaddr, 2);
  gen_and(b0, b1);
  return b1;

 case 0:
 case 3:
  b0 = gen_ipfchostop(cstate, eaddr, 1);
  b1 = gen_ipfchostop(cstate, eaddr, 2);
  gen_or(b0, b1);
  return b1;

 case 5:
  bpf_error(cstate, "'addr1' and 'address1' are only supported on 802.11");
  break;

 case 6:
  bpf_error(cstate, "'addr2' and 'address2' are only supported on 802.11");
  break;

 case 7:
  bpf_error(cstate, "'addr3' and 'address3' are only supported on 802.11");
  break;

 case 8:
  bpf_error(cstate, "'addr4' and 'address4' are only supported on 802.11");
  break;

 case 9:
  bpf_error(cstate, "'ra' is only supported on 802.11");
  break;

 case 10:
  bpf_error(cstate, "'ta' is only supported on 802.11");
  break;
 }
 abort();

}
static struct block *
gen_dnhostop(compiler_state_t *cstate, bpf_u_int32 addr, int dir)
{
 struct block *b0, *b1, *b2, *tmp={0};
 u_int offset_lh={0};
 u_int offset_sh={0};

 switch (dir) {

 case 2:
  offset_sh = 1;
  offset_lh = 7;
  break;

 case 1:
  offset_sh = 3;
  offset_lh = 15;
  break;

 case 4:

  b0 = gen_dnhostop(cstate, addr, 1);
  b1 = gen_dnhostop(cstate, addr, 2);
  gen_and(b0, b1);
  return b1;

 case 3:
 case 0:

  b0 = gen_dnhostop(cstate, addr, 1);
  b1 = gen_dnhostop(cstate, addr, 2);
  gen_or(b0, b1);
  return b1;

 case 24:
  bpf_error(cstate, "ISO host filtering not implemented");

 default:
  abort();
 }
 b0 = gen_linktype(cstate, 0x6003);

 tmp = gen_mcmp(cstate, OR_LINKPL, 2, 
                                     0x08
                                          ,
     (bpf_int32)ntohs(0x0681), (bpf_int32)ntohs(0x07FF));
 b1 = gen_cmp(cstate, OR_LINKPL, 2 + 1 + offset_lh,
     
    0x08
         , (bpf_int32)ntohs((u_short)addr));
 gen_and(tmp, b1);

 tmp = gen_mcmp(cstate, OR_LINKPL, 2, 
                                     0x10
                                          , (bpf_int32)0x06, (bpf_int32)0x7);
 b2 = gen_cmp(cstate, OR_LINKPL, 2 + offset_lh, 
                                               0x08
                                                    , (bpf_int32)ntohs((u_short)addr));
 gen_and(tmp, b2);
 gen_or(b2, b1);

 tmp = gen_mcmp(cstate, OR_LINKPL, 2, 
                                     0x08
                                          ,
     (bpf_int32)ntohs(0x0281), (bpf_int32)ntohs(0x07FF));
 b2 = gen_cmp(cstate, OR_LINKPL, 2 + 1 + offset_sh, 
                                                   0x08
                                                        , (bpf_int32)ntohs((u_short)addr));
 gen_and(tmp, b2);
 gen_or(b2, b1);

 tmp = gen_mcmp(cstate, OR_LINKPL, 2, 
                                     0x10
                                          , (bpf_int32)0x02, (bpf_int32)0x7);
 b2 = gen_cmp(cstate, OR_LINKPL, 2 + offset_sh, 
                                               0x08
                                                    , (bpf_int32)ntohs((u_short)addr));
 gen_and(tmp, b2);
 gen_or(b2, b1);


 gen_and(b0, b1);
 return b1;
}






static struct block *
gen_mpls_linktype(compiler_state_t *cstate, int proto)
{
 struct block *b0, *b1={0};

        switch (proto) {

        case 2:

                b0 = gen_mcmp(cstate, OR_LINKPL, (u_int)-2, 
                                                           0x10
                                                                , 0x01, 0x01);

                b1 = gen_mcmp(cstate, OR_LINKPL, 0, 
                                                   0x10
                                                        , 0x40, 0xf0);
                gen_and(b0, b1);
                return b1;

       case 17:

                b0 = gen_mcmp(cstate, OR_LINKPL, (u_int)-2, 
                                                           0x10
                                                                , 0x01, 0x01);

                b1 = gen_mcmp(cstate, OR_LINKPL, 0, 
                                                   0x10
                                                        , 0x60, 0xf0);
                gen_and(b0, b1);
                return b1;

       default:
                abort();
        }
}

static struct block *
gen_host(compiler_state_t *cstate, bpf_u_int32 addr, bpf_u_int32 mask,
    int proto, int dir, int type)
{
 struct block *b0, *b1={0};
 const char *typestr={0};

 if (type == 2)
  typestr = "net";
 else
  typestr = "host";

 switch (proto) {

 case 0:
  b0 = gen_host(cstate, addr, mask, 2, dir, type);




  if (cstate->label_stack_depth == 0) {
   b1 = gen_host(cstate, addr, mask, 3, dir, type);
   gen_or(b0, b1);
   b0 = gen_host(cstate, addr, mask, 4, dir, type);
   gen_or(b1, b0);
  }
  return b0;

 case 2:
  return gen_hostop(cstate, addr, mask, dir, 0x0800, 12, 16);

 case 4:
  return gen_hostop(cstate, addr, mask, dir, 0x8035, 14, 24);

 case 3:
  return gen_hostop(cstate, addr, mask, dir, 0x0806, 14, 24);

 case 6:
  bpf_error(cstate, "'tcp' modifier applied to %s", typestr);

 case 5:
  bpf_error(cstate, "'sctp' modifier applied to %s", typestr);

 case 7:
  bpf_error(cstate, "'udp' modifier applied to %s", typestr);

 case 8:
  bpf_error(cstate, "'icmp' modifier applied to %s", typestr);

 case 9:
  bpf_error(cstate, "'igmp' modifier applied to %s", typestr);

 case 10:
  bpf_error(cstate, "'igrp' modifier applied to %s", typestr);

 case 21:
  bpf_error(cstate, "'pim' modifier applied to %s", typestr);

 case 22:
  bpf_error(cstate, "'vrrp' modifier applied to %s", typestr);

 case 41:
  bpf_error(cstate, "'carp' modifier applied to %s", typestr);

 case 11:
  bpf_error(cstate, "ATALK host filtering not implemented");

 case 23:
  bpf_error(cstate, "AARP host filtering not implemented");

 case 12:
  return gen_dnhostop(cstate, addr, dir);

 case 14:
  bpf_error(cstate, "SCA host filtering not implemented");

 case 13:
  bpf_error(cstate, "LAT host filtering not implemented");

 case 16:
  bpf_error(cstate, "MOPDL host filtering not implemented");

 case 15:
  bpf_error(cstate, "MOPRC host filtering not implemented");

 case 17:
  bpf_error(cstate, "'ip6' modifier applied to ip host");

 case 18:
  bpf_error(cstate, "'icmp6' modifier applied to %s", typestr);

 case 19:
  bpf_error(cstate, "'ah' modifier applied to %s", typestr);

 case 20:
  bpf_error(cstate, "'esp' modifier applied to %s", typestr);

 case 24:
  bpf_error(cstate, "ISO host filtering not implemented");

 case 25:
  bpf_error(cstate, "'esis' modifier applied to %s", typestr);

 case 26:
  bpf_error(cstate, "'isis' modifier applied to %s", typestr);

 case 27:
  bpf_error(cstate, "'clnp' modifier applied to %s", typestr);

 case 28:
  bpf_error(cstate, "'stp' modifier applied to %s", typestr);

 case 29:
  bpf_error(cstate, "IPX host filtering not implemented");

 case 30:
  bpf_error(cstate, "'netbeui' modifier applied to %s", typestr);

 case 40:
  bpf_error(cstate, "'radio' modifier applied to %s", typestr);

 default:
  abort();
 }

}


static struct block *
gen_host6(compiler_state_t *cstate, struct in6_addr *addr,
    struct in6_addr *mask, int proto, int dir, int type)
{
 const char *typestr={0};

 if (type == 2)
  typestr = "net";
 else
  typestr = "host";

 switch (proto) {

 case 0:
  return gen_host6(cstate, addr, mask, 17, dir, type);

 case 1:
  bpf_error(cstate, "link-layer modifier applied to ip6 %s", typestr);

 case 2:
  bpf_error(cstate, "'ip' modifier applied to ip6 %s", typestr);

 case 4:
  bpf_error(cstate, "'rarp' modifier applied to ip6 %s", typestr);

 case 3:
  bpf_error(cstate, "'arp' modifier applied to ip6 %s", typestr);

 case 5:
  bpf_error(cstate, "'sctp' modifier applied to %s", typestr);

 case 6:
  bpf_error(cstate, "'tcp' modifier applied to %s", typestr);

 case 7:
  bpf_error(cstate, "'udp' modifier applied to %s", typestr);

 case 8:
  bpf_error(cstate, "'icmp' modifier applied to %s", typestr);

 case 9:
  bpf_error(cstate, "'igmp' modifier applied to %s", typestr);

 case 10:
  bpf_error(cstate, "'igrp' modifier applied to %s", typestr);

 case 21:
  bpf_error(cstate, "'pim' modifier applied to %s", typestr);

 case 22:
  bpf_error(cstate, "'vrrp' modifier applied to %s", typestr);

 case 41:
  bpf_error(cstate, "'carp' modifier applied to %s", typestr);

 case 11:
  bpf_error(cstate, "ATALK host filtering not implemented");

 case 23:
  bpf_error(cstate, "AARP host filtering not implemented");

 case 12:
  bpf_error(cstate, "'decnet' modifier applied to ip6 %s", typestr);

 case 14:
  bpf_error(cstate, "SCA host filtering not implemented");

 case 13:
  bpf_error(cstate, "LAT host filtering not implemented");

 case 16:
  bpf_error(cstate, "MOPDL host filtering not implemented");

 case 15:
  bpf_error(cstate, "MOPRC host filtering not implemented");

 case 17:
  return gen_hostop6(cstate, addr, mask, dir, 0x86dd, 8, 24);

 case 18:
  bpf_error(cstate, "'icmp6' modifier applied to %s", typestr);

 case 19:
  bpf_error(cstate, "'ah' modifier applied to %s", typestr);

 case 20:
  bpf_error(cstate, "'esp' modifier applied to %s", typestr);

 case 24:
  bpf_error(cstate, "ISO host filtering not implemented");

 case 25:
  bpf_error(cstate, "'esis' modifier applied to %s", typestr);

 case 26:
  bpf_error(cstate, "'isis' modifier applied to %s", typestr);

 case 27:
  bpf_error(cstate, "'clnp' modifier applied to %s", typestr);

 case 28:
  bpf_error(cstate, "'stp' modifier applied to %s", typestr);

 case 29:
  bpf_error(cstate, "IPX host filtering not implemented");

 case 30:
  bpf_error(cstate, "'netbeui' modifier applied to %s", typestr);

 case 40:
  bpf_error(cstate, "'radio' modifier applied to %s", typestr);

 default:
  abort();
 }

}
struct block *
gen_proto_abbrev(compiler_state_t *cstate, int proto)
{
 struct block *b0={0};
 struct block *b1={0};

 switch (proto) {

 case 5:
  b1 = gen_proto(cstate, 
                        IPPROTO_SCTP
                                    , 2, 0);
  b0 = gen_proto(cstate, 
                        IPPROTO_SCTP
                                    , 17, 0);
  gen_or(b0, b1);
  break;

 case 6:
  b1 = gen_proto(cstate, 
                        IPPROTO_TCP
                                   , 2, 0);
  b0 = gen_proto(cstate, 
                        IPPROTO_TCP
                                   , 17, 0);
  gen_or(b0, b1);
  break;

 case 7:
  b1 = gen_proto(cstate, 
                        IPPROTO_UDP
                                   , 2, 0);
  b0 = gen_proto(cstate, 
                        IPPROTO_UDP
                                   , 17, 0);
  gen_or(b0, b1);
  break;

 case 8:
  b1 = gen_proto(cstate, 
                        IPPROTO_ICMP
                                    , 2, 0);
  break;





 case 9:
  b1 = gen_proto(cstate, 
                        IPPROTO_IGMP
                                    , 2, 0);
  break;




 case 10:
  b1 = gen_proto(cstate, 9, 2, 0);
  break;





 case 21:
  b1 = gen_proto(cstate, 
                        IPPROTO_PIM
                                   , 2, 0);
  b0 = gen_proto(cstate, 
                        IPPROTO_PIM
                                   , 17, 0);
  gen_or(b0, b1);
  break;





 case 22:
  b1 = gen_proto(cstate, 112, 2, 0);
  break;





 case 41:
  b1 = gen_proto(cstate, 112, 2, 0);
  break;

 case 2:
  b1 = gen_linktype(cstate, 0x0800);
  break;

 case 3:
  b1 = gen_linktype(cstate, 0x0806);
  break;

 case 4:
  b1 = gen_linktype(cstate, 0x8035);
  break;

 case 1:
  bpf_error(cstate, "link layer applied in wrong context");

 case 11:
  b1 = gen_linktype(cstate, 0x809b);
  break;

 case 23:
  b1 = gen_linktype(cstate, 0x80f3);
  break;

 case 12:
  b1 = gen_linktype(cstate, 0x6003);
  break;

 case 14:
  b1 = gen_linktype(cstate, 0x6007);
  break;

 case 13:
  b1 = gen_linktype(cstate, 0x6004);
  break;

 case 16:
  b1 = gen_linktype(cstate, 0x6001);
  break;

 case 15:
  b1 = gen_linktype(cstate, 0x6002);
  break;

 case 17:
  b1 = gen_linktype(cstate, 0x86dd);
  break;




 case 18:
  b1 = gen_proto(cstate, 
                        IPPROTO_ICMPV6
                                      , 17, 0);
  break;




 case 19:
  b1 = gen_proto(cstate, 
                        IPPROTO_AH
                                  , 2, 0);
  b0 = gen_proto(cstate, 
                        IPPROTO_AH
                                  , 17, 0);
  gen_or(b0, b1);
  break;




 case 20:
  b1 = gen_proto(cstate, 
                        IPPROTO_ESP
                                   , 2, 0);
  b0 = gen_proto(cstate, 
                        IPPROTO_ESP
                                   , 17, 0);
  gen_or(b0, b1);
  break;

 case 24:
  b1 = gen_linktype(cstate, 0xfe);
  break;

 case 25:
  b1 = gen_proto(cstate, 0x82, 24, 0);
  break;

 case 26:
  b1 = gen_proto(cstate, 0x83, 24, 0);
  break;

 case 31:
  b0 = gen_proto(cstate, 15, 26, 0);
  b1 = gen_proto(cstate, 17, 26, 0);
  gen_or(b0, b1);
  b0 = gen_proto(cstate, 18, 26, 0);
  gen_or(b0, b1);
  b0 = gen_proto(cstate, 24, 26, 0);
  gen_or(b0, b1);
  b0 = gen_proto(cstate, 26, 26, 0);
  gen_or(b0, b1);
  break;

 case 32:
  b0 = gen_proto(cstate, 16, 26, 0);
  b1 = gen_proto(cstate, 17, 26, 0);
  gen_or(b0, b1);
  b0 = gen_proto(cstate, 20, 26, 0);
  gen_or(b0, b1);
  b0 = gen_proto(cstate, 25, 26, 0);
  gen_or(b0, b1);
  b0 = gen_proto(cstate, 27, 26, 0);
  gen_or(b0, b1);
  break;

 case 33:
  b0 = gen_proto(cstate, 15, 26, 0);
  b1 = gen_proto(cstate, 16, 26, 0);
  gen_or(b0, b1);
  b0 = gen_proto(cstate, 17, 26, 0);
  gen_or(b0, b1);
  break;

 case 39:
  b0 = gen_proto(cstate, 18, 26, 0);
  b1 = gen_proto(cstate, 20, 26, 0);
  gen_or(b0, b1);
  break;

 case 36:
  b0 = gen_proto(cstate, 24, 26, 0);
  b1 = gen_proto(cstate, 25, 26, 0);
  gen_or(b0, b1);
  b0 = gen_proto(cstate, 26, 26, 0);
  gen_or(b0, b1);
  b0 = gen_proto(cstate, 27, 26, 0);
  gen_or(b0, b1);
  break;

 case 37:
  b0 = gen_proto(cstate, 24, 26, 0);
  b1 = gen_proto(cstate, 25, 26, 0);
  gen_or(b0, b1);
  break;

 case 38:
  b0 = gen_proto(cstate, 26, 26, 0);
  b1 = gen_proto(cstate, 27, 26, 0);
  gen_or(b0, b1);
  break;

 case 27:
  b1 = gen_proto(cstate, 0x81, 24, 0);
  break;

 case 28:
  b1 = gen_linktype(cstate, 0x42);
  break;

 case 29:
  b1 = gen_linktype(cstate, 0xe0);
  break;

 case 30:
  b1 = gen_linktype(cstate, 0xf0);
  break;

 case 40:
  bpf_error(cstate, "'radio' is not a valid protocol type");

 default:
  abort();
 }
 return b1;
}

static struct block *
gen_ipfrag(compiler_state_t *cstate)
{
 struct slist *s={0};
 struct block *b={0};


 s = gen_load_a(cstate, OR_LINKPL, 6, 
                                     0x08
                                          );
 b = new_block(cstate, ((
                      0x40
                      )|
                      0x05
                      |
                      0x00
                      ));
 b->s.k = 0x1fff;
 b->stmts = s;
 gen_not(b);

 return b;
}
static struct block *
gen_portatom(compiler_state_t *cstate, int off, bpf_int32 v)
{
 return gen_cmp(cstate, OR_TRAN_IPV4, off, 
                                          0x08
                                               , v);
}

static struct block *
gen_portatom6(compiler_state_t *cstate, int off, bpf_int32 v)
{
 return gen_cmp(cstate, OR_TRAN_IPV6, off, 
                                          0x08
                                               , v);
}

struct block *
gen_portop(compiler_state_t *cstate, int port, int proto, int dir)
{
 struct block *b0, *b1, *tmp={0};


 tmp = gen_cmp(cstate, OR_LINKPL, 9, 
                                    0x10
                                         , (bpf_int32)proto);
 b0 = gen_ipfrag(cstate);
 gen_and(tmp, b0);

 switch (dir) {
 case 1:
  b1 = gen_portatom(cstate, 0, (bpf_int32)port);
  break;

 case 2:
  b1 = gen_portatom(cstate, 2, (bpf_int32)port);
  break;

 case 3:
 case 0:
  tmp = gen_portatom(cstate, 0, (bpf_int32)port);
  b1 = gen_portatom(cstate, 2, (bpf_int32)port);
  gen_or(tmp, b1);
  break;

 case 4:
  tmp = gen_portatom(cstate, 0, (bpf_int32)port);
  b1 = gen_portatom(cstate, 2, (bpf_int32)port);
  gen_and(tmp, b1);
  break;

 default:
  abort();
 }
 gen_and(b0, b1);

 return b1;
}

static struct block *
gen_port(compiler_state_t *cstate, int port, int ip_proto, int dir)
{
 struct block *b0, *b1, *tmp={0};
 b0 = gen_linktype(cstate, 0x0800);

 switch (ip_proto) {
 case 
     IPPROTO_UDP
                :
 case 
     IPPROTO_TCP
                :
 case 
     IPPROTO_SCTP
                 :
  b1 = gen_portop(cstate, port, ip_proto, dir);
  break;

 case -1:
  tmp = gen_portop(cstate, port, 
                                IPPROTO_TCP
                                           , dir);
  b1 = gen_portop(cstate, port, 
                               IPPROTO_UDP
                                          , dir);
  gen_or(tmp, b1);
  tmp = gen_portop(cstate, port, 
                                IPPROTO_SCTP
                                            , dir);
  gen_or(tmp, b1);
  break;

 default:
  abort();
 }
 gen_and(b0, b1);
 return b1;
}

struct block *
gen_portop6(compiler_state_t *cstate, int port, int proto, int dir)
{
 struct block *b0, *b1, *tmp={0};



 b0 = gen_cmp(cstate, OR_LINKPL, 6, 
                                   0x10
                                        , (bpf_int32)proto);

 switch (dir) {
 case 1:
  b1 = gen_portatom6(cstate, 0, (bpf_int32)port);
  break;

 case 2:
  b1 = gen_portatom6(cstate, 2, (bpf_int32)port);
  break;

 case 3:
 case 0:
  tmp = gen_portatom6(cstate, 0, (bpf_int32)port);
  b1 = gen_portatom6(cstate, 2, (bpf_int32)port);
  gen_or(tmp, b1);
  break;

 case 4:
  tmp = gen_portatom6(cstate, 0, (bpf_int32)port);
  b1 = gen_portatom6(cstate, 2, (bpf_int32)port);
  gen_and(tmp, b1);
  break;

 default:
  abort();
 }
 gen_and(b0, b1);

 return b1;
}

static struct block *
gen_port6(compiler_state_t *cstate, int port, int ip_proto, int dir)
{
 struct block *b0, *b1, *tmp={0};


 b0 = gen_linktype(cstate, 0x86dd);

 switch (ip_proto) {
 case 
     IPPROTO_UDP
                :
 case 
     IPPROTO_TCP
                :
 case 
     IPPROTO_SCTP
                 :
  b1 = gen_portop6(cstate, port, ip_proto, dir);
  break;

 case -1:
  tmp = gen_portop6(cstate, port, 
                                 IPPROTO_TCP
                                            , dir);
  b1 = gen_portop6(cstate, port, 
                                IPPROTO_UDP
                                           , dir);
  gen_or(tmp, b1);
  tmp = gen_portop6(cstate, port, 
                                 IPPROTO_SCTP
                                             , dir);
  gen_or(tmp, b1);
  break;

 default:
  abort();
 }
 gen_and(b0, b1);
 return b1;
}


static struct block *
gen_portrangeatom(compiler_state_t *cstate, int off, bpf_int32 v1,
    bpf_int32 v2)
{
 struct block *b1, *b2={0};

 if (v1 > v2) {



  bpf_int32 vtemp={0};

  vtemp = v1;
  v1 = v2;
  v2 = vtemp;
 }

 b1 = gen_cmp_ge(cstate, OR_TRAN_IPV4, off, 
                                           0x08
                                                , v1);
 b2 = gen_cmp_le(cstate, OR_TRAN_IPV4, off, 
                                           0x08
                                                , v2);

 gen_and(b1, b2);

 return b2;
}

struct block *
gen_portrangeop(compiler_state_t *cstate, int port1, int port2, int proto,
    int dir)
{
 struct block *b0, *b1, *tmp={0};


 tmp = gen_cmp(cstate, OR_LINKPL, 9, 
                                    0x10
                                         , (bpf_int32)proto);
 b0 = gen_ipfrag(cstate);
 gen_and(tmp, b0);

 switch (dir) {
 case 1:
  b1 = gen_portrangeatom(cstate, 0, (bpf_int32)port1, (bpf_int32)port2);
  break;

 case 2:
  b1 = gen_portrangeatom(cstate, 2, (bpf_int32)port1, (bpf_int32)port2);
  break;

 case 3:
 case 0:
  tmp = gen_portrangeatom(cstate, 0, (bpf_int32)port1, (bpf_int32)port2);
  b1 = gen_portrangeatom(cstate, 2, (bpf_int32)port1, (bpf_int32)port2);
  gen_or(tmp, b1);
  break;

 case 4:
  tmp = gen_portrangeatom(cstate, 0, (bpf_int32)port1, (bpf_int32)port2);
  b1 = gen_portrangeatom(cstate, 2, (bpf_int32)port1, (bpf_int32)port2);
  gen_and(tmp, b1);
  break;

 default:
  abort();
 }
 gen_and(b0, b1);

 return b1;
}

static struct block *
gen_portrange(compiler_state_t *cstate, int port1, int port2, int ip_proto,
    int dir)
{
 struct block *b0, *b1, *tmp={0};


 b0 = gen_linktype(cstate, 0x0800);

 switch (ip_proto) {
 case 
     IPPROTO_UDP
                :
 case 
     IPPROTO_TCP
                :
 case 
     IPPROTO_SCTP
                 :
  b1 = gen_portrangeop(cstate, port1, port2, ip_proto, dir);
  break;

 case -1:
  tmp = gen_portrangeop(cstate, port1, port2, 
                                             IPPROTO_TCP
                                                        , dir);
  b1 = gen_portrangeop(cstate, port1, port2, 
                                            IPPROTO_UDP
                                                       , dir);
  gen_or(tmp, b1);
  tmp = gen_portrangeop(cstate, port1, port2, 
                                             IPPROTO_SCTP
                                                         , dir);
  gen_or(tmp, b1);
  break;

 default:
  abort();
 }
 gen_and(b0, b1);
 return b1;
}

static struct block *
gen_portrangeatom6(compiler_state_t *cstate, int off, bpf_int32 v1,
    bpf_int32 v2)
{
 struct block *b1, *b2={0};

 if (v1 > v2) {



  bpf_int32 vtemp={0};

  vtemp = v1;
  v1 = v2;
  v2 = vtemp;
 }

 b1 = gen_cmp_ge(cstate, OR_TRAN_IPV6, off, 
                                           0x08
                                                , v1);
 b2 = gen_cmp_le(cstate, OR_TRAN_IPV6, off, 
                                           0x08
                                                , v2);

 gen_and(b1, b2);

 return b2;
}

struct block *
gen_portrangeop6(compiler_state_t *cstate, int port1, int port2, int proto,
    int dir)
{
 struct block *b0, *b1, *tmp={0};



 b0 = gen_cmp(cstate, OR_LINKPL, 6, 
                                   0x10
                                        , (bpf_int32)proto);

 switch (dir) {
 case 1:
  b1 = gen_portrangeatom6(cstate, 0, (bpf_int32)port1, (bpf_int32)port2);
  break;

 case 2:
  b1 = gen_portrangeatom6(cstate, 2, (bpf_int32)port1, (bpf_int32)port2);
  break;

 case 3:
 case 0:
  tmp = gen_portrangeatom6(cstate, 0, (bpf_int32)port1, (bpf_int32)port2);
  b1 = gen_portrangeatom6(cstate, 2, (bpf_int32)port1, (bpf_int32)port2);
  gen_or(tmp, b1);
  break;

 case 4:
  tmp = gen_portrangeatom6(cstate, 0, (bpf_int32)port1, (bpf_int32)port2);
  b1 = gen_portrangeatom6(cstate, 2, (bpf_int32)port1, (bpf_int32)port2);
  gen_and(tmp, b1);
  break;

 default:
  abort();
 }
 gen_and(b0, b1);

 return b1;
}

static struct block *
gen_portrange6(compiler_state_t *cstate, int port1, int port2, int ip_proto,
    int dir)
{
 struct block *b0, *b1, *tmp={0};


 b0 = gen_linktype(cstate, 0x86dd);

 switch (ip_proto) {
 case 
     IPPROTO_UDP
                :
 case 
     IPPROTO_TCP
                :
 case 
     IPPROTO_SCTP
                 :
  b1 = gen_portrangeop6(cstate, port1, port2, ip_proto, dir);
  break;

 case -1:
  tmp = gen_portrangeop6(cstate, port1, port2, 
                                              IPPROTO_TCP
                                                         , dir);
  b1 = gen_portrangeop6(cstate, port1, port2, 
                                             IPPROTO_UDP
                                                        , dir);
  gen_or(tmp, b1);
  tmp = gen_portrangeop6(cstate, port1, port2, 
                                              IPPROTO_SCTP
                                                          , dir);
  gen_or(tmp, b1);
  break;

 default:
  abort();
 }
 gen_and(b0, b1);
 return b1;
}

static int
lookup_proto(compiler_state_t *cstate, const char *name, int proto)
{
 register int v={0};

 switch (proto) {

 case 0:
 case 2:
 case 17:
  v = pcap_nametoproto(name);
  if (v == -1)
   bpf_error(cstate, "unknown ip proto '%s'", name);
  break;

 case 1:

  v = pcap_nametoeproto(name);
  if (v == -1) {
   v = pcap_nametollc(name);
   if (v == -1)
    bpf_error(cstate, "unknown ether proto '%s'", name);
  }
  break;

 case 24:
  if (strcmp(name, "esis") == 0)
   v = 0x82;
  else if (strcmp(name, "isis") == 0)
   v = 0x83;
  else if (strcmp(name, "clnp") == 0)
   v = 0x81;
  else
   bpf_error(cstate, "unknown osi proto '%s'", name);
  break;

 default:
  v = -1;
  break;
 }
 return v;
}
static struct block *
gen_protochain(compiler_state_t *cstate, int v, int proto, int dir)
{



 struct block *b0, *b={0};
 struct slist *s[100]={0};
 int fix2, fix3, fix4, fix5={0};
 int ahcheck, again, end={0};
 int i, max={0};
 int reg2 = alloc_reg(cstate);

 memset(s, 0, sizeof(s));
 fix3 = fix4 = fix5 = 0;

 switch (proto) {
 case 2:
 case 17:
  break;
 case 0:
  b0 = gen_protochain(cstate, v, 2, dir);
  b = gen_protochain(cstate, v, 17, dir);
  gen_or(b0, b);
  return b;
 default:
  bpf_error(cstate, "bad protocol applied for 'protochain'");

 }
 if (cstate->off_linkpl.is_variable)
  bpf_error(cstate, "'protochain' not supported with variable length headers");

 cstate->no_optimize = 1;






 i = 0;
 s[i] = new_stmt(cstate, 0);
 i++;

 switch (proto) {
 case 2:
  b0 = gen_linktype(cstate, 0x0800);


  s[i] = new_stmt(cstate, 
                         0x00
                               |
                                0x20
                                       |
                                        0x10
                                             );
  s[i]->s.k = cstate->off_linkpl.constant_part + cstate->off_nl + 9;
  i++;

  s[i] = new_stmt(cstate, 
                         0x01
                                |
                                 0xa0
                                        |
                                         0x10
                                              );
  s[i]->s.k = cstate->off_linkpl.constant_part + cstate->off_nl;
  i++;
  break;

 case 17:
  b0 = gen_linktype(cstate, 0x86dd);


  s[i] = new_stmt(cstate, 
                         0x00
                               |
                                0x20
                                       |
                                        0x10
                                             );
  s[i]->s.k = cstate->off_linkpl.constant_part + cstate->off_nl + 6;
  i++;

  s[i] = new_stmt(cstate, 
                         0x01
                                |
                                 0x00
                                        );
  s[i]->s.k = 40;
  i++;
  break;

 default:
  bpf_error(cstate, "unsupported proto to gen_protochain");

 }


 again = i;
 s[i] = new_stmt(cstate, 
                        0x05
                               |
                                0x10
                                       |
                                        0x00
                                             );
 s[i]->s.k = v;
 s[i]->s.jt = 
             ((void *)0)
                 ;
 s[i]->s.jf = 
             ((void *)0)
                 ;
 fix5 = i;
 i++;





 s[i] = new_stmt(cstate, 
                        0x05
                               |
                                0x10
                                       |
                                        0x00
                                             );
 s[i]->s.jt = 
             ((void *)0)
                 ;
 s[i]->s.jf = 
             ((void *)0)
                 ;
 s[i]->s.k = 
            IPPROTO_NONE
                        ;
 s[fix5]->s.jf = s[i];
 fix2 = i;
 i++;

 if (proto == 17) {
  int v6start, v6end, v6advance, j={0};

  v6start = i;

  s[i] = new_stmt(cstate, 
                         0x05
                                |
                                 0x10
                                        |
                                         0x00
                                              );
  s[i]->s.jt = 
              ((void *)0)
                  ;
  s[i]->s.jf = 
              ((void *)0)
                  ;
  s[i]->s.k = 
             IPPROTO_HOPOPTS
                            ;
  s[fix2]->s.jf = s[i];
  i++;

  s[i - 1]->s.jf = s[i] = new_stmt(cstate, 
                                          0x05
                                                 |
                                                  0x10
                                                         |
                                                          0x00
                                                               );
  s[i]->s.jt = 
              ((void *)0)
                  ;
  s[i]->s.jf = 
              ((void *)0)
                  ;
  s[i]->s.k = 
             IPPROTO_DSTOPTS
                            ;
  i++;

  s[i - 1]->s.jf = s[i] = new_stmt(cstate, 
                                          0x05
                                                 |
                                                  0x10
                                                         |
                                                          0x00
                                                               );
  s[i]->s.jt = 
              ((void *)0)
                  ;
  s[i]->s.jf = 
              ((void *)0)
                  ;
  s[i]->s.k = 
             IPPROTO_ROUTING
                            ;
  i++;

  s[i - 1]->s.jf = s[i] = new_stmt(cstate, 
                                          0x05
                                                 |
                                                  0x10
                                                         |
                                                          0x00
                                                               );
  s[i]->s.jt = 
              ((void *)0)
                  ;
  s[i]->s.jf = 
              ((void *)0)
                  ;
  s[i]->s.k = 
             IPPROTO_FRAGMENT
                             ;
  fix3 = i;
  v6end = i;
  i++;


  v6advance = i;







  s[i] = new_stmt(cstate, 
                         0x00
                               |
                                0x40
                                       |
                                        0x10
                                             );
  s[i]->s.k = cstate->off_linkpl.constant_part + cstate->off_nl;
  i++;

  s[i] = new_stmt(cstate, 
                         0x02
                               );
  s[i]->s.k = reg2;
  i++;

  s[i] = new_stmt(cstate, 
                         0x00
                               |
                                0x40
                                       |
                                        0x10
                                             );
  s[i]->s.k = cstate->off_linkpl.constant_part + cstate->off_nl + 1;
  i++;

  s[i] = new_stmt(cstate, 
                         0x04
                                |
                                 0x00
                                        |
                                         0x00
                                              );
  s[i]->s.k = 1;
  i++;

  s[i] = new_stmt(cstate, 
                         0x04
                                |
                                 0x20
                                        |
                                         0x00
                                              );
  s[i]->s.k = 8;
  i++;

  s[i] = new_stmt(cstate, 
                         0x04
                                |
                                 0x00
                                        |
                                         0x08
                                              );
  s[i]->s.k = 0;
  i++;

  s[i] = new_stmt(cstate, 
                         0x07
                                 |
                                  0x00
                                         );
  i++;

  s[i] = new_stmt(cstate, 
                         0x00
                               |
                                0x60
                                       );
  s[i]->s.k = reg2;
  i++;


  s[i] = new_stmt(cstate, 
                         0x05
                                |
                                 0x00
                                       );
  s[i]->s.k = again - i - 1;
  s[i - 1]->s.jf = s[i];
  i++;


  for (j = v6start; j <= v6end; j++)
   s[j]->s.jt = s[v6advance];
 } else {

  s[i] = new_stmt(cstate, 
                         0x04
                                |
                                 0x00
                                        |
                                         0x00
                                              );
  s[i]->s.k = 0;
  s[fix2]->s.jf = s[i];
  i++;
 }


 ahcheck = i;

 s[i] = new_stmt(cstate, 
                        0x05
                               |
                                0x10
                                       |
                                        0x00
                                             );
 s[i]->s.jt = 
             ((void *)0)
                 ;
 s[i]->s.jf = 
             ((void *)0)
                 ;
 s[i]->s.k = 
            IPPROTO_AH
                      ;
 if (fix3)
  s[fix3]->s.jf = s[ahcheck];
 fix4 = i;
 i++;







 s[i - 1]->s.jt = s[i] = new_stmt(cstate, 
                                         0x07
                                                 |
                                                  0x80
                                                         );
 i++;

 s[i] = new_stmt(cstate, 
                        0x00
                              |
                               0x40
                                      |
                                       0x10
                                            );
 s[i]->s.k = cstate->off_linkpl.constant_part + cstate->off_nl;
 i++;

 s[i] = new_stmt(cstate, 
                        0x02
                              );
 s[i]->s.k = reg2;
 i++;

 s[i - 1]->s.jt = s[i] = new_stmt(cstate, 
                                         0x07
                                                 |
                                                  0x80
                                                         );
 i++;

 s[i] = new_stmt(cstate, 
                        0x04
                               |
                                0x00
                                       |
                                        0x00
                                             );
 s[i]->s.k = 1;
 i++;

 s[i] = new_stmt(cstate, 
                        0x07
                                |
                                 0x00
                                        );
 i++;

 s[i] = new_stmt(cstate, 
                        0x00
                              |
                               0x40
                                      |
                                       0x10
                                            );
 s[i]->s.k = cstate->off_linkpl.constant_part + cstate->off_nl;
 i++;

 s[i] = new_stmt(cstate, 
                        0x04
                               |
                                0x00
                                       |
                                        0x00
                                             );
 s[i]->s.k = 2;
 i++;

 s[i] = new_stmt(cstate, 
                        0x04
                               |
                                0x20
                                       |
                                        0x00
                                             );
 s[i]->s.k = 4;
 i++;

 s[i] = new_stmt(cstate, 
                        0x07
                                |
                                 0x00
                                        );
 i++;

 s[i] = new_stmt(cstate, 
                        0x00
                              |
                               0x60
                                      );
 s[i]->s.k = reg2;
 i++;


 s[i] = new_stmt(cstate, 
                        0x05
                               |
                                0x00
                                      );
 s[i]->s.k = again - i - 1;
 i++;


 end = i;
 s[i] = new_stmt(cstate, 
                        0x04
                               |
                                0x00
                                       |
                                        0x00
                                             );
 s[i]->s.k = 0;
 s[fix2]->s.jt = s[end];
 s[fix4]->s.jf = s[end];
 s[fix5]->s.jt = s[end];
 i++;




 max = i;
 for (i = 0; i < max - 1; i++)
  s[i]->next = s[i + 1];
 s[max - 1]->next = 
                   ((void *)0)
                       ;




 b = new_block(cstate, ((
                      0x10
                      )|
                      0x05
                      |
                      0x00
                      ));
 b->stmts = s[1];
 b->s.k = v;

 free_reg(cstate, reg2);

 gen_and(b0, b);
 return b;

}

static struct block *
gen_check_802_11_data_frame(compiler_state_t *cstate)
{
 struct slist *s={0};
 struct block *b0, *b1={0};





 s = gen_load_a(cstate, OR_LINKHDR, 0, 
                                      0x10
                                           );
 b0 = new_block(cstate, ((
                       0x40
                       )|
                       0x05
                       |
                       0x00
                       ));
 b0->s.k = 0x08;
 b0->stmts = s;

 s = gen_load_a(cstate, OR_LINKHDR, 0, 
                                      0x10
                                           );
 b1 = new_block(cstate, ((
                       0x40
                       )|
                       0x05
                       |
                       0x00
                       ));
 b1->s.k = 0x04;
 b1->stmts = s;
 gen_not(b1);

 gen_and(b1, b0);

 return b0;
}
static struct block *
gen_proto(compiler_state_t *cstate, int v, int proto, int dir)
{
 struct block *b0, *b1={0};

 struct block *b2={0};


 if (dir != 0)
  bpf_error(cstate, "direction applied to 'proto'");

 switch (proto) {
 case 0:
  b0 = gen_proto(cstate, v, 2, dir);
  b1 = gen_proto(cstate, v, 17, dir);
  gen_or(b0, b1);
  return b1;

 case 2:
  b0 = gen_linktype(cstate, 0x0800);

  b1 = gen_cmp(cstate, OR_LINKPL, 9, 
                                    0x10
                                         , (bpf_int32)v);



  gen_and(b0, b1);
  return b1;

 case 24:
  switch (cstate->linktype) {

  case 107:
   return gen_cmp(cstate, OR_LINKHDR, 2, 
                                        0x08
                                             , (0x03<<8) | v);

   break;

  case 104:




   b0 = gen_linktype(cstate, 0xfe<<8 | 0xfe);

   b1 = gen_cmp(cstate, OR_LINKPL_NOSNAP, 1, 
                                            0x10
                                                 , (long)v);
   gen_and(b0, b1);
   return b1;

  default:
   b0 = gen_linktype(cstate, 0xfe);
   b1 = gen_cmp(cstate, OR_LINKPL_NOSNAP, 0, 
                                            0x10
                                                 , (long)v);
   gen_and(b0, b1);
   return b1;
  }

 case 26:
  b0 = gen_proto(cstate, 0x83, 24, 0);




  b1 = gen_cmp(cstate, OR_LINKPL_NOSNAP, 4, 
                                           0x10
                                                , (long)v);
  gen_and(b0, b1);
  return b1;

 case 3:
  bpf_error(cstate, "arp does not encapsulate another protocol");


 case 4:
  bpf_error(cstate, "rarp does not encapsulate another protocol");


 case 11:
  bpf_error(cstate, "atalk encapsulation is not specifiable");


 case 12:
  bpf_error(cstate, "decnet encapsulation is not specifiable");


 case 14:
  bpf_error(cstate, "sca does not encapsulate another protocol");


 case 13:
  bpf_error(cstate, "lat does not encapsulate another protocol");


 case 15:
  bpf_error(cstate, "moprc does not encapsulate another protocol");


 case 16:
  bpf_error(cstate, "mopdl does not encapsulate another protocol");


 case 1:
  return gen_linktype(cstate, v);

 case 7:
  bpf_error(cstate, "'udp proto' is bogus");


 case 6:
  bpf_error(cstate, "'tcp proto' is bogus");


 case 5:
  bpf_error(cstate, "'sctp proto' is bogus");


 case 8:
  bpf_error(cstate, "'icmp proto' is bogus");


 case 9:
  bpf_error(cstate, "'igmp proto' is bogus");


 case 10:
  bpf_error(cstate, "'igrp proto' is bogus");


 case 21:
  bpf_error(cstate, "'pim proto' is bogus");


 case 22:
  bpf_error(cstate, "'vrrp proto' is bogus");


 case 41:
  bpf_error(cstate, "'carp proto' is bogus");


 case 17:
  b0 = gen_linktype(cstate, 0x86dd);





  b2 = gen_cmp(cstate, OR_LINKPL, 6, 
                                    0x10
                                         , 
                                           IPPROTO_FRAGMENT
                                                           );
  b1 = gen_cmp(cstate, OR_LINKPL, 40, 
                                     0x10
                                          , (bpf_int32)v);
  gen_and(b2, b1);
  b2 = gen_cmp(cstate, OR_LINKPL, 6, 
                                    0x10
                                         , (bpf_int32)v);
  gen_or(b2, b1);



  gen_and(b0, b1);
  return b1;

 case 18:
  bpf_error(cstate, "'icmp6 proto' is bogus");

 case 19:
  bpf_error(cstate, "'ah proto' is bogus");

 case 20:
  bpf_error(cstate, "'ah proto' is bogus");

 case 28:
  bpf_error(cstate, "'stp proto' is bogus");

 case 29:
  bpf_error(cstate, "'ipx proto' is bogus");

 case 30:
  bpf_error(cstate, "'netbeui proto' is bogus");

 case 40:
  bpf_error(cstate, "'radio proto' is bogus");

 default:
  abort();

 }

}

struct block *
gen_scode(compiler_state_t *cstate, const char *name, struct qual q)
{
 int proto = q.proto;
 int dir = q.dir;
 int tproto={0};
 u_char *eaddr={0};
 bpf_u_int32 mask, addr={0};
 struct addrinfo *res, *res0={0};
 struct sockaddr_in *sin4={0};

 int tproto6={0};
 struct sockaddr_in6 *sin6={0};
 struct in6_addr mask128={0};

 struct block *b, *tmp={0};
 int port, real_proto={0};
 int port1, port2={0};

 switch (q.addr) {

 case 2:
  addr = pcap_nametonetaddr(name);
  if (addr == 0)
   bpf_error(cstate, "unknown network '%s'", name);

  mask = 0xffffffff;
  while (addr && (addr & 0xff000000) == 0) {
   addr <<= 8;
   mask <<= 8;
  }
  return gen_host(cstate, addr, mask, proto, dir, q.addr);

 case 0:
 case 1:
  if (proto == 1) {
   switch (cstate->linktype) {

   case 1:
   case 240:
   case 241:
    eaddr = pcap_ether_hostton(name);
    if (eaddr == 
                ((void *)0)
                    )
     bpf_error(cstate,
         "unknown ether host '%s'", name);
    tmp = gen_prevlinkhdr_check(cstate);
    b = gen_ehostop(cstate, eaddr, dir);
    if (tmp != 
              ((void *)0)
                  )
     gen_and(tmp, b);
    free(eaddr);
    return b;

   case 10:
    eaddr = pcap_ether_hostton(name);
    if (eaddr == 
                ((void *)0)
                    )
     bpf_error(cstate,
         "unknown FDDI host '%s'", name);
    b = gen_fhostop(cstate, eaddr, dir);
    free(eaddr);
    return b;

   case 6:
    eaddr = pcap_ether_hostton(name);
    if (eaddr == 
                ((void *)0)
                    )
     bpf_error(cstate,
         "unknown token ring host '%s'", name);
    b = gen_thostop(cstate, eaddr, dir);
    free(eaddr);
    return b;

   case 105:
   case 119:
   case 163:
   case 127:
   case 192:
    eaddr = pcap_ether_hostton(name);
    if (eaddr == 
                ((void *)0)
                    )
     bpf_error(cstate,
         "unknown 802.11 host '%s'", name);
    b = gen_wlanhostop(cstate, eaddr, dir);
    free(eaddr);
    return b;

   case 122:
    eaddr = pcap_ether_hostton(name);
    if (eaddr == 
                ((void *)0)
                    )
     bpf_error(cstate,
         "unknown Fibre Channel host '%s'", name);
    b = gen_ipfchostop(cstate, eaddr, dir);
    free(eaddr);
    return b;
   }

   bpf_error(cstate, "only ethernet/FDDI/token ring/802.11/ATM LANE/Fibre Channel supports link-level host name");
  } else if (proto == 12) {
   unsigned short dn_addr={0};

   if (!__pcap_nametodnaddr(name, &dn_addr)) {



    bpf_error(cstate, "decnet name support not included, '%s' cannot be translated\n",
     name);

   }




   return (gen_host(cstate, dn_addr, 0, proto, dir, q.addr));
  } else {

   memset(&mask128, 0xff, sizeof(mask128));

   res0 = res = pcap_nametoaddrinfo(name);
   if (res == 
             ((void *)0)
                 )
    bpf_error(cstate, "unknown host '%s'", name);
   cstate->ai = res;
   b = tmp = 
            ((void *)0)
                ;
   tproto = proto;

   tproto6 = proto;

   if (cstate->off_linktype.constant_part == 0xffffffffU &&
       tproto == 0) {
    tproto = 2;

    tproto6 = 17;

   }
   for (res = res0; res; res = res->ai_next) {
    switch (res->ai_family) {
    case 
        2
               :

     if (tproto == 17)
      continue;


     sin4 = (struct sockaddr_in *)
      res->ai_addr;
     tmp = gen_host(cstate, ntohl(sin4->sin_addr.s_addr),
      0xffffffff, tproto, dir, q.addr);
     break;

    case 
        10
                :
     if (tproto6 == 2)
      continue;

     sin6 = (struct sockaddr_in6 *)
      res->ai_addr;
     tmp = gen_host6(cstate, &sin6->sin6_addr,
      &mask128, tproto6, dir, q.addr);
     break;

    default:
     continue;
    }
    if (b)
     gen_or(b, tmp);
    b = tmp;
   }
   cstate->ai = 
               ((void *)0)
                   ;
   freeaddrinfo(res0);
   if (b == 
           ((void *)0)
               ) {
    bpf_error(cstate, "unknown host '%s'%s", name,
        (proto == 0)
     ? ""
     : " for specified address family");
   }
   return b;
  }

 case 3:
  if (proto != 0 &&
      proto != 7 && proto != 6 && proto != 5)
   bpf_error(cstate, "illegal qualifier of 'port'");
  if (pcap_nametoport(name, &port, &real_proto) == 0)
   bpf_error(cstate, "unknown port '%s'", name);
  if (proto == 7) {
   if (real_proto == 
                    IPPROTO_TCP
                               )
    bpf_error(cstate, "port '%s' is tcp", name);
   else if (real_proto == 
                         IPPROTO_SCTP
                                     )
    bpf_error(cstate, "port '%s' is sctp", name);
   else

    real_proto = 
                IPPROTO_UDP
                           ;
  }
  if (proto == 6) {
   if (real_proto == 
                    IPPROTO_UDP
                               )
    bpf_error(cstate, "port '%s' is udp", name);

   else if (real_proto == 
                         IPPROTO_SCTP
                                     )
    bpf_error(cstate, "port '%s' is sctp", name);
   else

    real_proto = 
                IPPROTO_TCP
                           ;
  }
  if (proto == 5) {
   if (real_proto == 
                    IPPROTO_UDP
                               )
    bpf_error(cstate, "port '%s' is udp", name);

   else if (real_proto == 
                         IPPROTO_TCP
                                    )
    bpf_error(cstate, "port '%s' is tcp", name);
   else

    real_proto = 
                IPPROTO_SCTP
                            ;
  }
  if (port < 0)
   bpf_error(cstate, "illegal port number %d < 0", port);
  if (port > 65535)
   bpf_error(cstate, "illegal port number %d > 65535", port);
  b = gen_port(cstate, port, real_proto, dir);
  gen_or(gen_port6(cstate, port, real_proto, dir), b);
  return b;

 case 7:
  if (proto != 0 &&
      proto != 7 && proto != 6 && proto != 5)
   bpf_error(cstate, "illegal qualifier of 'portrange'");
  if (pcap_nametoportrange(name, &port1, &port2, &real_proto) == 0)
   bpf_error(cstate, "unknown port in range '%s'", name);
  if (proto == 7) {
   if (real_proto == 
                    IPPROTO_TCP
                               )
    bpf_error(cstate, "port in range '%s' is tcp", name);
   else if (real_proto == 
                         IPPROTO_SCTP
                                     )
    bpf_error(cstate, "port in range '%s' is sctp", name);
   else

    real_proto = 
                IPPROTO_UDP
                           ;
  }
  if (proto == 6) {
   if (real_proto == 
                    IPPROTO_UDP
                               )
    bpf_error(cstate, "port in range '%s' is udp", name);
   else if (real_proto == 
                         IPPROTO_SCTP
                                     )
    bpf_error(cstate, "port in range '%s' is sctp", name);
   else

    real_proto = 
                IPPROTO_TCP
                           ;
  }
  if (proto == 5) {
   if (real_proto == 
                    IPPROTO_UDP
                               )
    bpf_error(cstate, "port in range '%s' is udp", name);
   else if (real_proto == 
                         IPPROTO_TCP
                                    )
    bpf_error(cstate, "port in range '%s' is tcp", name);
   else

    real_proto = 
                IPPROTO_SCTP
                            ;
  }
  if (port1 < 0)
   bpf_error(cstate, "illegal port number %d < 0", port1);
  if (port1 > 65535)
   bpf_error(cstate, "illegal port number %d > 65535", port1);
  if (port2 < 0)
   bpf_error(cstate, "illegal port number %d < 0", port2);
  if (port2 > 65535)
   bpf_error(cstate, "illegal port number %d > 65535", port2);

  b = gen_portrange(cstate, port1, port2, real_proto, dir);
  gen_or(gen_portrange6(cstate, port1, port2, real_proto, dir), b);
  return b;

 case 4:
  bpf_error(cstate, "'gateway' not supported in this configuration");


 case 5:
  real_proto = lookup_proto(cstate, name, proto);
  if (real_proto >= 0)
   return gen_proto(cstate, real_proto, proto, dir);
  else
   bpf_error(cstate, "unknown protocol: %s", name);

 case 6:
  real_proto = lookup_proto(cstate, name, proto);
  if (real_proto >= 0)
   return gen_protochain(cstate, real_proto, proto, dir);
  else
   bpf_error(cstate, "unknown protocol: %s", name);

 case 255:
  syntax(cstate);

 }
 abort();

}

struct block *
gen_mcode(compiler_state_t *cstate, const char *s1, const char *s2,
    unsigned int masklen, struct qual q)
{
 register int nlen, mlen={0};
 bpf_u_int32 n, m={0};

 nlen = __pcap_atoin(s1, &n);

 n <<= 32 - nlen;

 if (s2 != 
          ((void *)0)
              ) {
  mlen = __pcap_atoin(s2, &m);

  m <<= 32 - mlen;
  if ((n & ~m) != 0)
   bpf_error(cstate, "non-network bits set in \"%s mask %s\"",
       s1, s2);
 } else {

  if (masklen > 32)
   bpf_error(cstate, "mask length must be <= 32");
  if (masklen == 0) {




   m = 0;
  } else
   m = 0xffffffff << (32 - masklen);
  if ((n & ~m) != 0)
   bpf_error(cstate, "non-network bits set in \"%s/%d\"",
       s1, masklen);
 }

 switch (q.addr) {

 case 2:
  return gen_host(cstate, n, m, q.proto, q.dir, q.addr);

 default:
  bpf_error(cstate, "Mask syntax for networks only");

 }

}

struct block *
gen_ncode(compiler_state_t *cstate, const char *s, bpf_u_int32 v, struct qual q)
{
 bpf_u_int32 mask={0};
 int proto = q.proto;
 int dir = q.dir;
 register int vlen={0};

 if (s == 
         ((void *)0)
             )
  vlen = 32;
 else if (q.proto == 12) {
  vlen = __pcap_atodn(s, &v);
  if (vlen == 0)
   bpf_error(cstate, "malformed decnet address '%s'", s);
 } else
  vlen = __pcap_atoin(s, &v);

 switch (q.addr) {

 case 0:
 case 1:
 case 2:
  if (proto == 12)
   return gen_host(cstate, v, 0, proto, dir, q.addr);
  else if (proto == 1) {
   bpf_error(cstate, "illegal link layer address");
  } else {
   mask = 0xffffffff;
   if (s == 
           ((void *)0) 
                && q.addr == 2) {

    while (v && (v & 0xff000000) == 0) {
     v <<= 8;
     mask <<= 8;
    }
   } else {

    v <<= 32 - vlen;
    mask <<= 32 - vlen ;
   }
   return gen_host(cstate, v, mask, proto, dir, q.addr);
  }

 case 3:
  if (proto == 7)
   proto = 
          IPPROTO_UDP
                     ;
  else if (proto == 6)
   proto = 
          IPPROTO_TCP
                     ;
  else if (proto == 5)
   proto = 
          IPPROTO_SCTP
                      ;
  else if (proto == 0)
   proto = -1;
  else
   bpf_error(cstate, "illegal qualifier of 'port'");

  if (v > 65535)
   bpf_error(cstate, "illegal port number %u > 65535", v);

     {
  struct block *b={0};
  b = gen_port(cstate, (int)v, proto, dir);
  gen_or(gen_port6(cstate, (int)v, proto, dir), b);
  return b;
     }

 case 7:
  if (proto == 7)
   proto = 
          IPPROTO_UDP
                     ;
  else if (proto == 6)
   proto = 
          IPPROTO_TCP
                     ;
  else if (proto == 5)
   proto = 
          IPPROTO_SCTP
                      ;
  else if (proto == 0)
   proto = -1;
  else
   bpf_error(cstate, "illegal qualifier of 'portrange'");

  if (v > 65535)
   bpf_error(cstate, "illegal port number %u > 65535", v);

     {
  struct block *b={0};
  b = gen_portrange(cstate, (int)v, (int)v, proto, dir);
  gen_or(gen_portrange6(cstate, (int)v, (int)v, proto, dir), b);
  return b;
     }

 case 4:
  bpf_error(cstate, "'gateway' requires a name");


 case 5:
  return gen_proto(cstate, (int)v, proto, dir);

 case 6:
  return gen_protochain(cstate, (int)v, proto, dir);

 case 255:
  syntax(cstate);


 default:
  abort();

 }

}


struct block *
gen_mcode6(compiler_state_t *cstate, const char *s1, const char *s2,
    unsigned int masklen, struct qual q)
{
 struct addrinfo *res={0};
 struct in6_addr *addr={0};
 struct in6_addr mask={0};
 struct block *b={0};
 uint32_t *a, *m={0};

 if (s2)
  bpf_error(cstate, "no mask %s supported", s2);

 res = pcap_nametoaddrinfo(s1);
 if (!res)
  bpf_error(cstate, "invalid ip6 address %s", s1);
 cstate->ai = res;
 if (res->ai_next)
  bpf_error(cstate, "%s resolved to multiple address", s1);
 addr = &((struct sockaddr_in6 *)res->ai_addr)->sin6_addr;

 if (sizeof(mask) * 8 < masklen)
  bpf_error(cstate, "mask length must be <= %u", (unsigned int)(sizeof(mask) * 8));
 memset(&mask, 0, sizeof(mask));
 memset(&mask, 0xff, masklen / 8);
 if (masklen % 8) {
  mask.
      __in6_u.__u6_addr8
             [masklen / 8] =
   (0xff << (8 - masklen % 8)) & 0xff;
 }

 a = (uint32_t *)addr;
 m = (uint32_t *)&mask;
 if ((a[0] & ~m[0]) || (a[1] & ~m[1])
  || (a[2] & ~m[2]) || (a[3] & ~m[3])) {
  bpf_error(cstate, "non-network bits set in \"%s/%d\"", s1, masklen);
 }

 switch (q.addr) {

 case 0:
 case 1:
  if (masklen != 128)
   bpf_error(cstate, "Mask syntax for networks only");


 case 2:
  b = gen_host6(cstate, addr, &mask, q.proto, q.dir, q.addr);
  cstate->ai = 
              ((void *)0)
                  ;
  freeaddrinfo(res);
  return b;

 default:
  bpf_error(cstate, "invalid qualifier against IPv6 address");

 }
}


struct block *
gen_ecode(compiler_state_t *cstate, const u_char *eaddr, struct qual q)
{
 struct block *b, *tmp={0};

 if ((q.addr == 1 || q.addr == 0) && q.proto == 1) {
  switch (cstate->linktype) {
  case 1:
  case 240:
  case 241:
   tmp = gen_prevlinkhdr_check(cstate);
   b = gen_ehostop(cstate, eaddr, (int)q.dir);
   if (tmp != 
             ((void *)0)
                 )
    gen_and(tmp, b);
   return b;
  case 10:
   return gen_fhostop(cstate, eaddr, (int)q.dir);
  case 6:
   return gen_thostop(cstate, eaddr, (int)q.dir);
  case 105:
  case 119:
  case 163:
  case 127:
  case 192:
   return gen_wlanhostop(cstate, eaddr, (int)q.dir);
  case 122:
   return gen_ipfchostop(cstate, eaddr, (int)q.dir);
  default:
   bpf_error(cstate, "ethernet addresses supported only on ethernet/FDDI/token ring/802.11/ATM LANE/Fibre Channel");
   break;
  }
 }
 bpf_error(cstate, "ethernet address used in non-ether expression");

}

void
sappend(struct slist *s0, struct slist *s1)
{




 while (s0->next)
  s0 = s0->next;
 s0->next = s1;
}

static struct slist *
xfer_to_x(compiler_state_t *cstate, struct arth *a)
{
 struct slist *s={0};

 s = new_stmt(cstate, 
                     0x01
                            |
                             0x60
                                    );
 s->s.k = a->regno;
 return s;
}

static struct slist *
xfer_to_a(compiler_state_t *cstate, struct arth *a)
{
 struct slist *s={0};

 s = new_stmt(cstate, 
                     0x00
                           |
                            0x60
                                   );
 s->s.k = a->regno;
 return s;
}
struct arth *
gen_load(compiler_state_t *cstate, int proto, struct arth *inst, int size)
{
 struct slist *s, *tmp={0};
 struct block *b={0};
 int regno = alloc_reg(cstate);

 free_reg(cstate, inst->regno);
 switch (size) {

 default:
  bpf_error(cstate, "data size must be 1, 2, or 4");

 case 1:
  size = 
        0x10
             ;
  break;

 case 2:
  size = 
        0x08
             ;
  break;

 case 4:
  size = 
        0x00
             ;
  break;
 }
 switch (proto) {
 default:
  bpf_error(cstate, "unsupported index operation");

 case 40:





  if (cstate->linktype != 163 &&
      cstate->linktype != 127 &&
      cstate->linktype != 119)
   bpf_error(cstate, "radio information not present in capture");





  s = xfer_to_x(cstate, inst);




  tmp = new_stmt(cstate, 
                        0x00
                              |
                               0x40
                                      |size);
  sappend(s, tmp);
  sappend(inst->s, s);
  break;

 case 1:
  s = gen_abs_offset_varpart(cstate, &cstate->off_linkhdr);
  if (s != 
          ((void *)0)
              ) {
   sappend(s, xfer_to_a(cstate, inst));
   sappend(s, new_stmt(cstate, 
                              0x04
                                     |
                                      0x00
                                             |
                                              0x08
                                                   ));
   sappend(s, new_stmt(cstate, 
                              0x07
                                      |
                                       0x00
                                              ));
  } else
   s = xfer_to_x(cstate, inst);
  tmp = new_stmt(cstate, 
                        0x00
                              |
                               0x40
                                      |size);
  tmp->s.k = cstate->off_linkhdr.constant_part;
  sappend(s, tmp);
  sappend(inst->s, s);
  break;

 case 2:
 case 3:
 case 4:
 case 11:
 case 12:
 case 14:
 case 13:
 case 15:
 case 16:
 case 17:






  s = gen_abs_offset_varpart(cstate, &cstate->off_linkpl);
  if (s != 
          ((void *)0)
              ) {
   sappend(s, xfer_to_a(cstate, inst));
   sappend(s, new_stmt(cstate, 
                              0x04
                                     |
                                      0x00
                                             |
                                              0x08
                                                   ));
   sappend(s, new_stmt(cstate, 
                              0x07
                                      |
                                       0x00
                                              ));
  } else
   s = xfer_to_x(cstate, inst);
  tmp = new_stmt(cstate, 
                        0x00
                              |
                               0x40
                                      |size);
  tmp->s.k = cstate->off_linkpl.constant_part + cstate->off_nl;
  sappend(s, tmp);
  sappend(inst->s, s);





  b = gen_proto_abbrev(cstate, proto);
  if (inst->b)
   gen_and(inst->b, b);
  inst->b = b;
  break;

 case 5:
 case 6:
 case 7:
 case 8:
 case 9:
 case 10:
 case 21:
 case 22:
 case 41:
  s = gen_loadx_iphdrlen(cstate);
  sappend(s, xfer_to_a(cstate, inst));
  sappend(s, new_stmt(cstate, 
                             0x04
                                    |
                                     0x00
                                            |
                                             0x08
                                                  ));
  sappend(s, new_stmt(cstate, 
                             0x07
                                     |
                                      0x00
                                             ));
  sappend(s, tmp = new_stmt(cstate, 
                                   0x00
                                         |
                                          0x40
                                                 |size));
  tmp->s.k = cstate->off_linkpl.constant_part + cstate->off_nl;
  sappend(inst->s, s);







  gen_and(gen_proto_abbrev(cstate, proto), b = gen_ipfrag(cstate));
  if (inst->b)
   gen_and(inst->b, b);
  gen_and(gen_proto_abbrev(cstate, 2), b);
  inst->b = b;
  break;
 case 18:




        b = gen_proto_abbrev(cstate, 17);
        if (inst->b) {
            gen_and(inst->b, b);
        }
        inst->b = b;




        b = gen_cmp(cstate, OR_LINKPL, 6, 
                                         0x10
                                              , 58);
        if (inst->b) {
            gen_and(inst->b, b);
        }
        inst->b = b;


        s = gen_abs_offset_varpart(cstate, &cstate->off_linkpl);
        if (s != 
                ((void *)0)
                    ) {
            sappend(s, xfer_to_a(cstate, inst));
            sappend(s, new_stmt(cstate, 
                                       0x04
                                              |
                                               0x00
                                                      |
                                                       0x08
                                                            ));
            sappend(s, new_stmt(cstate, 
                                       0x07
                                               |
                                                0x00
                                                       ));
        } else {
            s = xfer_to_x(cstate, inst);
        }
        tmp = new_stmt(cstate, 
                              0x00
                                    |
                                     0x40
                                            |size);
        tmp->s.k = cstate->off_linkpl.constant_part + cstate->off_nl + 40;

        sappend(s, tmp);
        sappend(inst->s, s);

        break;
 }
 inst->regno = regno;
 s = new_stmt(cstate, 
                     0x02
                           );
 s->s.k = regno;
 sappend(inst->s, s);

 return inst;
}

struct block *
gen_relation(compiler_state_t *cstate, int code, struct arth *a0,
    struct arth *a1, int reversed)
{
 struct slist *s0, *s1, *s2={0};
 struct block *b, *tmp={0};

 s0 = xfer_to_x(cstate, a1);
 s1 = xfer_to_a(cstate, a0);
 if (code == 
            0x10
                   ) {
  s2 = new_stmt(cstate, 
                       0x04
                              |
                               0x10
                                      |
                                       0x08
                                            );
  b = new_block(cstate, ((code)|
                       0x05
                       |
                       0x00
                       ));
  sappend(s1, s2);
 }
 else
  b = new_block(cstate, 
                       0x05
                              |code|
                                    0x08
                                         );
 if (reversed)
  gen_not(b);

 sappend(s0, s1);
 sappend(a1->s, s0);
 sappend(a0->s, a1->s);

 b->stmts = a0->s;

 free_reg(cstate, a0->regno);
 free_reg(cstate, a1->regno);


 if (a0->b) {
  if (a1->b) {
   gen_and(a0->b, tmp = a1->b);
  }
  else
   tmp = a0->b;
 } else
  tmp = a1->b;

 if (tmp)
  gen_and(tmp, b);

 return b;
}

struct arth *
gen_loadlen(compiler_state_t *cstate)
{
 int regno = alloc_reg(cstate);
 struct arth *a = (struct arth *)newchunk(cstate, sizeof(*a));
 struct slist *s={0};

 s = new_stmt(cstate, 
                     0x00
                           |
                            0x80
                                   );
 s->next = new_stmt(cstate, 
                           0x02
                                 );
 s->next->s.k = regno;
 a->s = s;
 a->regno = regno;

 return a;
}

struct arth *
gen_loadi(compiler_state_t *cstate, int val)
{
 struct arth *a={0};
 struct slist *s={0};
 int reg={0};

 a = (struct arth *)newchunk(cstate, sizeof(*a));

 reg = alloc_reg(cstate);

 s = new_stmt(cstate, 
                     0x00
                           |
                            0x00
                                   );
 s->s.k = val;
 s->next = new_stmt(cstate, 
                           0x02
                                 );
 s->next->s.k = reg;
 a->s = s;
 a->regno = reg;

 return a;
}

struct arth *
gen_neg(compiler_state_t *cstate, struct arth *a)
{
 struct slist *s={0};

 s = xfer_to_a(cstate, a);
 sappend(a->s, s);
 s = new_stmt(cstate, 
                     0x04
                            |
                             0x80
                                    );
 s->s.k = 0;
 sappend(a->s, s);
 s = new_stmt(cstate, 
                     0x02
                           );
 s->s.k = a->regno;
 sappend(a->s, s);

 return a;
}

struct arth *
gen_arth(compiler_state_t *cstate, int code, struct arth *a0,
    struct arth *a1)
{
 struct slist *s0, *s1, *s2={0};





 if (code == 
            0x30
                   ) {
  if (a1->s->s.code == (
                       0x00
                             |
                              0x00
                                     ) && a1->s->s.k == 0)
   bpf_error(cstate, "division by zero");
 } else if (code == 
                   0x90
                          ) {
  if (a1->s->s.code == (
                       0x00
                             |
                              0x00
                                     ) && a1->s->s.k == 0)
   bpf_error(cstate, "modulus by zero");
 }
 s0 = xfer_to_x(cstate, a1);
 s1 = xfer_to_a(cstate, a0);
 s2 = new_stmt(cstate, 
                      0x04
                             |
                              0x08
                                   |code);

 sappend(s1, s2);
 sappend(s0, s1);
 sappend(a1->s, s0);
 sappend(a0->s, a1->s);

 free_reg(cstate, a0->regno);
 free_reg(cstate, a1->regno);

 s0 = new_stmt(cstate, 
                      0x02
                            );
 a0->regno = s0->s.k = alloc_reg(cstate);
 sappend(a0->s, s0);

 return a0;
}




static void
init_regs(compiler_state_t *cstate)
{
 cstate->curreg = 0;
 memset(cstate->regused, 0, sizeof cstate->regused);
}




static int
alloc_reg(compiler_state_t *cstate)
{
 int n = 
        16
                    ;

 while (--n >= 0) {
  if (cstate->regused[cstate->curreg])
   cstate->curreg = (cstate->curreg + 1) % 
                                          16
                                                      ;
  else {
   cstate->regused[cstate->curreg] = 1;
   return cstate->curreg;
  }
 }
 bpf_error(cstate, "too many registers needed to evaluate expression");

}





static void
free_reg(compiler_state_t *cstate, int n)
{
 cstate->regused[n] = 0;
}

static struct block *
gen_len(compiler_state_t *cstate, int jmp, int n)
{
 struct slist *s={0};
 struct block *b={0};

 s = new_stmt(cstate, 
                     0x00
                           |
                            0x80
                                   );
 b = new_block(cstate, ((jmp)|
                      0x05
                      |
                      0x00
                      ));
 b->stmts = s;
 b->s.k = n;

 return b;
}

struct block *
gen_greater(compiler_state_t *cstate, int n)
{
 return gen_len(cstate, 
                       0x30
                              , n);
}




struct block *
gen_less(compiler_state_t *cstate, int n)
{
 struct block *b={0};

 b = gen_len(cstate, 
                    0x20
                           , n);
 gen_not(b);

 return b;
}
struct block *
gen_byteop(compiler_state_t *cstate, int op, int idx, int val)
{
 struct block *b={0};
 struct slist *s={0};

 switch (op) {
 default:
  abort();

 case '=':
  return gen_cmp(cstate, OR_LINKHDR, (u_int)idx, 
                                                0x10
                                                     , (bpf_int32)val);

 case '<':
  b = gen_cmp_lt(cstate, OR_LINKHDR, (u_int)idx, 
                                                0x10
                                                     , (bpf_int32)val);
  return b;

 case '>':
  b = gen_cmp_gt(cstate, OR_LINKHDR, (u_int)idx, 
                                                0x10
                                                     , (bpf_int32)val);
  return b;

 case '|':
  s = new_stmt(cstate, 
                      0x04
                             |
                              0x40
                                    |
                                     0x00
                                          );
  break;

 case '&':
  s = new_stmt(cstate, 
                      0x04
                             |
                              0x50
                                     |
                                      0x00
                                           );
  break;
 }
 s->s.k = val;
 b = new_block(cstate, ((
                      0x10
                      )|
                      0x05
                      |
                      0x00
                      ));
 b->stmts = s;
 gen_not(b);

 return b;
}

static const u_char abroadcast[] = { 0x0 };

struct block *
gen_broadcast(compiler_state_t *cstate, int proto)
{
 bpf_u_int32 hostmask={0};
 struct block *b0, *b1, *b2={0};
 static const u_char ebroadcast[] = { 0xff, 0xff, 0xff, 0xff, 0xff, 0xff };

 switch (proto) {

 case 0:
 case 1:
  switch (cstate->linktype) {
  case 7:
  case 129:
   return gen_ahostop(cstate, abroadcast, 2);
  case 1:
  case 240:
  case 241:
   b1 = gen_prevlinkhdr_check(cstate);
   b0 = gen_ehostop(cstate, ebroadcast, 2);
   if (b1 != 
            ((void *)0)
                )
    gen_and(b1, b0);
   return b0;
  case 10:
   return gen_fhostop(cstate, ebroadcast, 2);
  case 6:
   return gen_thostop(cstate, ebroadcast, 2);
  case 105:
  case 119:
  case 163:
  case 127:
  case 192:
   return gen_wlanhostop(cstate, ebroadcast, 2);
  case 122:
   return gen_ipfchostop(cstate, ebroadcast, 2);
  default:
   bpf_error(cstate, "not a broadcast link");
  }
  break;

 case 2:





  if (cstate->netmask == 0xffffffff)
   bpf_error(cstate, "netmask not known, so 'ip broadcast' not supported");
  b0 = gen_linktype(cstate, 0x0800);
  hostmask = ~cstate->netmask;
  b1 = gen_mcmp(cstate, OR_LINKPL, 16, 
                                      0x00
                                           , (bpf_int32)0, hostmask);
  b2 = gen_mcmp(cstate, OR_LINKPL, 16, 
                                      0x00
                                           ,
         (bpf_int32)(~0 & hostmask), hostmask);
  gen_or(b1, b2);
  gen_and(b0, b2);
  return b2;
 }
 bpf_error(cstate, "only link-layer/IP broadcast filters supported");

}





static struct block *
gen_mac_multicast(compiler_state_t *cstate, int offset)
{
 register struct block *b0={0};
 register struct slist *s={0};


 s = gen_load_a(cstate, OR_LINKHDR, offset, 
                                           0x10
                                                );
 b0 = new_block(cstate, ((
                       0x40
                       )|
                       0x05
                       |
                       0x00
                       ));
 b0->s.k = 1;
 b0->stmts = s;
 return b0;
}

struct block *
gen_multicast(compiler_state_t *cstate, int proto)
{
 register struct block *b0, *b1, *b2={0};
 register struct slist *s={0};

 switch (proto) {

 case 0:
 case 1:
  switch (cstate->linktype) {
  case 7:
  case 129:

   return gen_ahostop(cstate, abroadcast, 2);
  case 1:
  case 240:
  case 241:
   b1 = gen_prevlinkhdr_check(cstate);

   b0 = gen_mac_multicast(cstate, 0);
   if (b1 != 
            ((void *)0)
                )
    gen_and(b1, b0);
   return b0;
  case 10:






   return gen_mac_multicast(cstate, 1);
  case 6:

   return gen_mac_multicast(cstate, 2);
  case 105:
  case 119:
  case 163:
  case 127:
  case 192:
   s = gen_load_a(cstate, OR_LINKHDR, 1, 
                                        0x10
                                             );
   b1 = new_block(cstate, ((
                         0x40
                         )|
                         0x05
                         |
                         0x00
                         ));
   b1->s.k = 0x01;
   b1->stmts = s;




   b0 = gen_mac_multicast(cstate, 16);
   gen_and(b1, b0);





   s = gen_load_a(cstate, OR_LINKHDR, 1, 
                                        0x10
                                             );
   b2 = new_block(cstate, ((
                         0x40
                         )|
                         0x05
                         |
                         0x00
                         ));
   b2->s.k = 0x01;
   b2->stmts = s;
   gen_not(b2);




   b1 = gen_mac_multicast(cstate, 4);
   gen_and(b2, b1);





   gen_or(b1, b0);





   s = gen_load_a(cstate, OR_LINKHDR, 0, 
                                        0x10
                                             );
   b1 = new_block(cstate, ((
                         0x40
                         )|
                         0x05
                         |
                         0x00
                         ));
   b1->s.k = 0x08;
   b1->stmts = s;




   gen_and(b1, b0);






   s = gen_load_a(cstate, OR_LINKHDR, 0, 
                                        0x10
                                             );
   b2 = new_block(cstate, ((
                         0x40
                         )|
                         0x05
                         |
                         0x00
                         ));
   b2->s.k = 0x08;
   b2->stmts = s;
   gen_not(b2);




   b1 = gen_mac_multicast(cstate, 4);
   gen_and(b2, b1);






   gen_or(b1, b0);
   s = gen_load_a(cstate, OR_LINKHDR, 0, 
                                        0x10
                                             );
   b1 = new_block(cstate, ((
                         0x40
                         )|
                         0x05
                         |
                         0x00
                         ));
   b1->s.k = 0x04;
   b1->stmts = s;
   gen_not(b1);





   gen_and(b1, b0);
   return b0;
  case 122:
   b0 = gen_mac_multicast(cstate, 2);
   return b0;
  default:
   break;
  }

  break;

 case 2:
  b0 = gen_linktype(cstate, 0x0800);
  b1 = gen_cmp_ge(cstate, OR_LINKPL, 16, 
                                        0x10
                                             , (bpf_int32)224);
  gen_and(b0, b1);
  return b1;

 case 17:
  b0 = gen_linktype(cstate, 0x86dd);
  b1 = gen_cmp(cstate, OR_LINKPL, 24, 
                                     0x10
                                          , (bpf_int32)255);
  gen_and(b0, b1);
  return b1;
 }
 bpf_error(cstate, "link-layer multicast filters supported only on ethernet/FDDI/token ring/ARCNET/802.11/ATM LANE/Fibre Channel");

}
struct block *
gen_inbound(compiler_state_t *cstate, int dir)
{
 register struct block *b0={0};




 switch (cstate->linktype) {
 case 8:
  b0 = gen_relation(cstate, 
                           0x10
                                  ,
     gen_load(cstate, 1, gen_loadi(cstate, 0), 1),
     gen_loadi(cstate, 0),
     dir);
  break;

 case 226:
  if (dir) {

   b0 = gen_cmp(cstate, OR_LINKHDR, 2, 
                                      0x08
                                           , 1);
  } else {

   b0 = gen_cmp(cstate, OR_LINKHDR, 2, 
                                      0x08
                                           , 2);
  }
  break;

 case 113:

  b0 = gen_cmp(cstate, OR_LINKHDR, 0, 
                                     0x08
                                          , 4);
  if (!dir) {

   gen_not(b0);
  }
  break;
 case 166:
  if (dir) {

   b0 = gen_cmp(cstate, OR_LINKHDR, 0, 
                                      0x10
                                           , 0x01);
  } else {

   b0 = gen_cmp(cstate, OR_LINKHDR, 0, 
                                      0x10
                                           , 0x00);
  }
  break;

        case 134:
        case 131:
        case 130:
 case 137:
 case 135:
 case 167:
 case 168:
        case 133:
        case 132:
        case 164:
        case 136:
        case 178:
        case 179:
        case 180:
        case 181:
        case 183:
        case 200:
        case 194:
        case 232:
        case 233:
        case 234:
 case 238:



  if (dir) {

   b0 = gen_mcmp(cstate, OR_LINKHDR, 3, 
                                       0x10
                                            , 0, 0x01);
  } else {

   b0 = gen_mcmp(cstate, OR_LINKHDR, 3, 
                                       0x10
                                            , 1, 0x01);
  }
  break;

 default:
  if (cstate->bpf_pcap->rfile != 
                                ((void *)0)
                                    ) {

   bpf_error(cstate, "inbound/outbound not supported on linktype %d when reading savefiles",
       cstate->linktype);
   b0 = 
       ((void *)0)
           ;

  }

  b0 = gen_cmp(cstate, OR_LINKHDR, 
                                  (-0x1000) 
                                             + 
                                               4
                                                             , 
                                                               0x08
                                                                    ,
               
              4
                             );
  if (!dir) {

   gen_not(b0);
  }





 }
 return (b0);
}
struct block *
gen_pf_ifname(compiler_state_t *cstate, const char *ifname )
{
 bpf_error(cstate, "libpcap was compiled without pf support");

}

struct block *
gen_pf_ruleset(compiler_state_t *cstate, char *ruleset )
{
 bpf_error(cstate, "libpcap was compiled on a machine without pf support");

}

struct block *
gen_pf_rnr(compiler_state_t *cstate, int rnr )
{
 bpf_error(cstate, "libpcap was compiled on a machine without pf support");

}

struct block *
gen_pf_srnr(compiler_state_t *cstate, int srnr )
{
 bpf_error(cstate, "libpcap was compiled on a machine without pf support");

}

struct block *
gen_pf_reason(compiler_state_t *cstate, int reason )
{
 bpf_error(cstate, "libpcap was compiled on a machine without pf support");

}

struct block *
gen_pf_action(compiler_state_t *cstate, int action )
{
 bpf_error(cstate, "libpcap was compiled on a machine without pf support");

}



struct block *
gen_p80211_type(compiler_state_t *cstate, int type, int mask)
{
 struct block *b0={0};

 switch (cstate->linktype) {

 case 105:
 case 119:
 case 163:
 case 127:
  b0 = gen_mcmp(cstate, OR_LINKHDR, 0, 
                                      0x10
                                           , (bpf_int32)type,
      (bpf_int32)mask);
  break;

 default:
  bpf_error(cstate, "802.11 link-layer types supported only on 802.11");

 }

 return (b0);
}

struct block *
gen_p80211_fcdir(compiler_state_t *cstate, int fcdir)
{
 struct block *b0={0};

 switch (cstate->linktype) {

 case 105:
 case 119:
 case 163:
 case 127:
  break;

 default:
  bpf_error(cstate, "frame direction supported only with 802.11 headers");

 }

 b0 = gen_mcmp(cstate, OR_LINKHDR, 1, 
                                     0x10
                                          , (bpf_int32)fcdir,
  (bpf_u_int32)0x03);

 return (b0);
}

struct block *
gen_acode(compiler_state_t *cstate, const u_char *eaddr, struct qual q)
{
 switch (cstate->linktype) {

 case 7:
 case 129:
  if ((q.addr == 1 || q.addr == 0) &&
      q.proto == 1)
   return (gen_ahostop(cstate, eaddr, (int)q.dir));
  else {
   bpf_error(cstate, "ARCnet address used in non-arc expression");

  }
  break;

 default:
  bpf_error(cstate, "aid supported only on ARCnet");

 }
}

static struct block *
gen_ahostop(compiler_state_t *cstate, const u_char *eaddr, int dir)
{
 register struct block *b0, *b1={0};

 switch (dir) {

 case 1:
  return gen_bcmp(cstate, OR_LINKHDR, 0, 1, eaddr);

 case 2:
  return gen_bcmp(cstate, OR_LINKHDR, 1, 1, eaddr);

 case 4:
  b0 = gen_ahostop(cstate, eaddr, 1);
  b1 = gen_ahostop(cstate, eaddr, 2);
  gen_and(b0, b1);
  return b1;

 case 0:
 case 3:
  b0 = gen_ahostop(cstate, eaddr, 1);
  b1 = gen_ahostop(cstate, eaddr, 2);
  gen_or(b0, b1);
  return b1;

 case 5:
  bpf_error(cstate, "'addr1' and 'address1' are only supported on 802.11");
  break;

 case 6:
  bpf_error(cstate, "'addr2' and 'address2' are only supported on 802.11");
  break;

 case 7:
  bpf_error(cstate, "'addr3' and 'address3' are only supported on 802.11");
  break;

 case 8:
  bpf_error(cstate, "'addr4' and 'address4' are only supported on 802.11");
  break;

 case 9:
  bpf_error(cstate, "'ra' is only supported on 802.11");
  break;

 case 10:
  bpf_error(cstate, "'ta' is only supported on 802.11");
  break;
 }
 abort();

}

static struct block *
gen_vlan_tpid_test(compiler_state_t *cstate)
{
 struct block *b0, *b1={0};


 b0 = gen_linktype(cstate, 0x8100);
 b1 = gen_linktype(cstate, 0x88a8);
 gen_or(b0,b1);
 b0 = b1;
 b1 = gen_linktype(cstate, 0x9100);
 gen_or(b0,b1);

 return b1;
}

static struct block *
gen_vlan_vid_test(compiler_state_t *cstate, int vlan_num)
{
 return gen_mcmp(cstate, OR_LINKPL, 0, 
                                      0x08
                                           , (bpf_int32)vlan_num, 0x0fff);
}

static struct block *
gen_vlan_no_bpf_extensions(compiler_state_t *cstate, int vlan_num)
{
 struct block *b0, *b1={0};

 b0 = gen_vlan_tpid_test(cstate);

 if (vlan_num >= 0) {
  b1 = gen_vlan_vid_test(cstate, vlan_num);
  gen_and(b0, b1);
  b0 = b1;
 }





 cstate->off_linkpl.constant_part += 4;
 cstate->off_linktype.constant_part += 4;

 return b0;
}



static void
gen_vlan_vloffset_add(compiler_state_t *cstate, bpf_abs_offset *off, int v, struct slist *s)
{
 struct slist *s2={0};

 if (!off->is_variable)
  off->is_variable = 1;
 if (off->reg == -1)
  off->reg = alloc_reg(cstate);

 s2 = new_stmt(cstate, 
                      0x00
                            |
                             0x60
                                    );
 s2->s.k = off->reg;
 sappend(s, s2);
 s2 = new_stmt(cstate, 
                      0x04
                             |
                              0x00
                                     |
                                      0x00
                                             );
 s2->s.k = v;
 sappend(s, s2);
 s2 = new_stmt(cstate, 
                      0x02
                            );
 s2->s.k = off->reg;
 sappend(s, s2);
}





static void
gen_vlan_patch_tpid_test(compiler_state_t *cstate, struct block *b_tpid)
{
 struct slist s={0};


 s.next = 
         ((void *)0)
             ;
 cstate->is_vlan_vloffset = 1;
 gen_vlan_vloffset_add(cstate, &cstate->off_linkpl, 4, &s);
 gen_vlan_vloffset_add(cstate, &cstate->off_linktype, 4, &s);


 sappend(s.next, b_tpid->head->stmts);
 b_tpid->head->stmts = s.next;
}





static void
gen_vlan_patch_vid_test(compiler_state_t *cstate, struct block *b_vid)
{
 struct slist *s, *s2, *sjeq={0};
 unsigned cnt={0};

 s = new_stmt(cstate, 
                     0x00
                           |
                            0x10
                                 |
                                  0x20
                                         );
 s->s.k = 
         (-0x1000) 
                    + 
                      48
                                             ;


 sjeq = new_stmt(cstate, ((
                        0x10
                        )|
                        0x05
                        |
                        0x00
                        ));
 sjeq->s.k = 1;
 sjeq->s.jf = b_vid->stmts;
 sappend(s, sjeq);

 s2 = new_stmt(cstate, 
                      0x00
                            |
                             0x10
                                  |
                                   0x20
                                          );
 s2->s.k = 
          (-0x1000) 
                     + 
                       44
                                      ;
 sappend(s, s2);
 sjeq->s.jt = s2;


 cnt = 0;
 for (s2 = b_vid->stmts; s2; s2 = s2->next)
  cnt++;
 s2 = new_stmt(cstate, ((
                      0x00
                      )|
                      0x05
                      |
                      0x00
                      ));
 s2->s.k = cnt;
 sappend(s, s2);


 sappend(s, b_vid->stmts);
 b_vid->stmts = s;
}
static struct block *
gen_vlan_bpf_extensions(compiler_state_t *cstate, int vlan_num)
{
        struct block *b0, *b_tpid, *b_vid = ((void *)0);
        struct slist *s={0};



        s = new_stmt(cstate, 
                            0x00
                                  |
                                   0x10
                                        |
                                         0x20
                                                );
        s->s.k = 
                (-0x1000) 
                           + 
                             48
                                                    ;

        b0 = new_block(cstate, ((
                              0x10
                              )|
                              0x05
                              |
                              0x00
                              ));
        b0->stmts = s;
        b0->s.k = 1;
 b_tpid = gen_vlan_tpid_test(cstate);
 if (vlan_num >= 0)
  b_vid = gen_vlan_vid_test(cstate, vlan_num);

 gen_vlan_patch_tpid_test(cstate, b_tpid);
 gen_or(b0, b_tpid);
 b0 = b_tpid;

 if (vlan_num >= 0) {
  gen_vlan_patch_vid_test(cstate, b_vid);
  gen_and(b0, b_vid);
  b0 = b_vid;
 }

        return b0;
}





struct block *
gen_vlan(compiler_state_t *cstate, int vlan_num)
{
 struct block *b0={0};


 if (cstate->label_stack_depth > 0)
  bpf_error(cstate, "no VLAN match after MPLS");
 switch (cstate->linktype) {

 case 1:
 case 240:
 case 241:



  if (cstate->vlan_stack_depth == 0 && !cstate->off_linkhdr.is_variable &&
      cstate->off_linkhdr.constant_part ==
      cstate->off_outermostlinkhdr.constant_part) {



   if (cstate->bpf_pcap->bpf_codegen_flags & 0x00000001)
    b0 = gen_vlan_bpf_extensions(cstate, vlan_num);
   else
    b0 = gen_vlan_no_bpf_extensions(cstate, vlan_num);
  } else

   b0 = gen_vlan_no_bpf_extensions(cstate, vlan_num);
                break;

 case 105:
 case 119:
 case 163:
 case 127:
  b0 = gen_vlan_no_bpf_extensions(cstate, vlan_num);
  break;

 default:
  bpf_error(cstate, "no VLAN support for data link type %d",
        cstate->linktype);

 }

        cstate->vlan_stack_depth++;

 return (b0);
}




struct block *
gen_mpls(compiler_state_t *cstate, int label_num)
{
 struct block *b0, *b1={0};

        if (cstate->label_stack_depth > 0) {

            b0 = gen_mcmp(cstate, OR_PREVMPLSHDR, 2, 
                                                    0x10
                                                         , 0, 0x01);
        } else {




            switch (cstate->linktype) {

            case 104:
            case 1:
            case 240:
            case 241:
                    b0 = gen_linktype(cstate, 0x8847);
                    break;

            case 9:
                    b0 = gen_linktype(cstate, 0x0281);
                    break;





            default:
                    bpf_error(cstate, "no MPLS support for data link type %d",
                          cstate->linktype);

                    break;
            }
        }


 if (label_num >= 0) {
  label_num = label_num << 12;
  b1 = gen_mcmp(cstate, OR_LINKPL, 0, 
                                     0x00
                                          , (bpf_int32)label_num,
      0xfffff000);
  gen_and(b0, b1);
  b0 = b1;
 }
        cstate->off_nl_nosnap += 4;
        cstate->off_nl += 4;
        cstate->label_stack_depth++;
 return (b0);
}




struct block *
gen_pppoed(compiler_state_t *cstate)
{

 return gen_linktype(cstate, (bpf_int32)0x8863);
}

struct block *
gen_pppoes(compiler_state_t *cstate, int sess_num)
{
 struct block *b0, *b1={0};




 b0 = gen_linktype(cstate, (bpf_int32)0x8864);


 if (sess_num >= 0) {
  b1 = gen_mcmp(cstate, OR_LINKPL, 0, 
                                     0x00
                                          ,
      (bpf_int32)sess_num, 0x0000ffff);
  gen_and(b0, b1);
  b0 = b1;
 }
 { (cstate)->prevlinktype = (cstate)->linktype; (cstate)->off_prevlinkhdr = (cstate)->off_linkhdr; (cstate)->linktype = (9); (cstate)->off_linkhdr.is_variable = (cstate->off_linkpl.is_variable); (cstate)->off_linkhdr.constant_part = (cstate->off_linkpl.constant_part + cstate->off_nl + 6); (cstate)->off_linkhdr.reg = (cstate->off_linkpl.reg); (cstate)->is_geneve = 0; }

                            ;

 cstate->off_linktype = cstate->off_linkhdr;
 cstate->off_linkpl.constant_part = cstate->off_linkhdr.constant_part + 2;

 cstate->off_nl = 0;
 cstate->off_nl_nosnap = 0;

 return b0;
}



static struct block *
gen_geneve_check(compiler_state_t *cstate,
    struct block *(*gen_portfn)(compiler_state_t *, int, int, int),
    enum e_offrel offrel, int vni)
{
 struct block *b0, *b1={0};

 b0 = gen_portfn(cstate, 6081, 
                                     IPPROTO_UDP
                                                , 2);




 b1 = gen_mcmp(cstate, offrel, 8, 
                                 0x10
                                      , (bpf_int32)0, 0xc0);
 gen_and(b0, b1);
 b0 = b1;

 if (vni >= 0) {
  vni <<= 8;
  b1 = gen_mcmp(cstate, offrel, 12, 
                                   0x00
                                        , (bpf_int32)vni,
         0xffffff00);
  gen_and(b0, b1);
  b0 = b1;
 }

 return b0;
}






static struct block *
gen_geneve4(compiler_state_t *cstate, int vni)
{
 struct block *b0, *b1={0};
 struct slist *s, *s1={0};

 b0 = gen_geneve_check(cstate, gen_port, OR_TRAN_IPV4, vni);


 s = gen_loadx_iphdrlen(cstate);

 s1 = new_stmt(cstate, 
                      0x07
                              |
                               0x80
                                      );
 sappend(s, s1);




 b1 = new_block(cstate, 
                       0x05
                              |
                               0x10
                                      |
                                       0x08
                                            );
 b1->stmts = s;
 b1->s.k = 0;

 gen_and(b0, b1);

 return b1;
}

static struct block *
gen_geneve6(compiler_state_t *cstate, int vni)
{
 struct block *b0, *b1={0};
 struct slist *s, *s1={0};

 b0 = gen_geneve_check(cstate, gen_port6, OR_TRAN_IPV6, vni);



 s = gen_abs_offset_varpart(cstate, &cstate->off_linkpl);
 if (s) {
  s1 = new_stmt(cstate, 
                       0x00
                             |
                              0x00
                                     );
  s1->s.k = 40;
  sappend(s, s1);

  s1 = new_stmt(cstate, 
                       0x04
                              |
                               0x00
                                      |
                                       0x08
                                            );
  s1->s.k = 0;
  sappend(s, s1);
 } else {
  s = new_stmt(cstate, 
                      0x00
                            |
                             0x00
                                    );
  s->s.k = 40;
 }




 s1 = new_stmt(cstate, 
                      0x07
                              |
                               0x00
                                      );
 sappend(s, s1);

 b1 = new_block(cstate, 
                       0x05
                              |
                               0x10
                                      |
                                       0x08
                                            );
 b1->stmts = s;
 b1->s.k = 0;

 gen_and(b0, b1);

 return b1;
}





static struct slist *
gen_geneve_offsets(compiler_state_t *cstate)
{
 struct slist *s, *s1, *s_proto={0};






 s = new_stmt(cstate, 
                     0x04
                            |
                             0x00
                                    |
                                     0x00
                                          );
 s->s.k = cstate->off_linkpl.constant_part + cstate->off_nl + 8;


 s1 = new_stmt(cstate, 
                      0x07
                              |
                               0x00
                                      );
 sappend(s, s1);



 s1 = new_stmt(cstate, 
                      0x04
                             |
                              0x00
                                     |
                                      0x00
                                           );
 s1->s.k = 2;
 sappend(s, s1);

 cstate->off_linktype.reg = alloc_reg(cstate);
 cstate->off_linktype.is_variable = 1;
 cstate->off_linktype.constant_part = 0;

 s1 = new_stmt(cstate, 
                      0x02
                            );
 s1->s.k = cstate->off_linktype.reg;
 sappend(s, s1);




 s1 = new_stmt(cstate, 
                      0x00
                            |
                             0x40
                                    |
                                     0x10
                                          );
 s1->s.k = 0;
 sappend(s, s1);

 s1 = new_stmt(cstate, 
                      0x04
                             |
                              0x50
                                     |
                                      0x00
                                           );
 s1->s.k = 0x3f;
 sappend(s, s1);

 s1 = new_stmt(cstate, 
                      0x04
                             |
                              0x20
                                     |
                                      0x00
                                           );
 s1->s.k = 4;
 sappend(s, s1);


 s1 = new_stmt(cstate, 
                      0x04
                             |
                              0x00
                                     |
                                      0x00
                                           );
 s1->s.k = 8;
 sappend(s, s1);


 s1 = new_stmt(cstate, 
                      0x04
                             |
                              0x00
                                     |
                                      0x08
                                           );
 s1->s.k = 0;
 sappend(s, s1);
 { (cstate)->prevlinktype = (cstate)->linktype; (cstate)->off_prevlinkhdr = (cstate)->off_linkhdr; (cstate)->linktype = (1); (cstate)->off_linkhdr.is_variable = (1); (cstate)->off_linkhdr.constant_part = (0); (cstate)->off_linkhdr.reg = (alloc_reg(cstate)); (cstate)->is_geneve = 0; };

 s1 = new_stmt(cstate, 
                      0x02
                            );
 s1->s.k = cstate->off_linkhdr.reg;
 sappend(s, s1);







 cstate->no_optimize = 1;


 s1 = new_stmt(cstate, 
                      0x00
                            |
                             0x40
                                    |
                                     0x08
                                          );
 s1->s.k = 2;
 sappend(s, s1);


 s1 = new_stmt(cstate, 
                      0x01
                             |
                              0x60
                                     );
 s1->s.k = cstate->off_linkhdr.reg;
 sappend(s, s1);




 s_proto = new_stmt(cstate, ((
                           0x10
                           )|
                           0x05
                           |
                           0x00
                           ));
 s_proto->s.k = 0x6558;
 sappend(s, s_proto);

 s1 = new_stmt(cstate, 
                      0x07
                              |
                               0x80
                                      );
 sappend(s, s1);
 s_proto->s.jt = s1;



 s1 = new_stmt(cstate, 
                      0x04
                             |
                              0x00
                                     |
                                      0x00
                                           );
 s1->s.k = 12;
 sappend(s, s1);

 s1 = new_stmt(cstate, 
                      0x02
                            );
 s1->s.k = cstate->off_linktype.reg;
 sappend(s, s1);



 s1 = new_stmt(cstate, 
                      0x04
                             |
                              0x00
                                     |
                                      0x00
                                           );
 s1->s.k = 2;
 sappend(s, s1);


 s1 = new_stmt(cstate, 
                      0x07
                              |
                               0x00
                                      );
 sappend(s, s1);


 cstate->off_linkpl.reg = alloc_reg(cstate);
 cstate->off_linkpl.is_variable = 1;
 cstate->off_linkpl.constant_part = 0;

 s1 = new_stmt(cstate, 
                      0x03
                             );
 s1->s.k = cstate->off_linkpl.reg;
 sappend(s, s1);
 s_proto->s.jf = s1;

 cstate->off_nl = 0;

 return s;
}


struct block *
gen_geneve(compiler_state_t *cstate, int vni)
{
 struct block *b0, *b1={0};
 struct slist *s={0};

 b0 = gen_geneve4(cstate, vni);
 b1 = gen_geneve6(cstate, vni);

 gen_or(b0, b1);
 b0 = b1;




 s = gen_geneve_offsets(cstate);

 b1 = gen_true(cstate);
 sappend(s, b1->stmts);
 b1->stmts = s;

 gen_and(b0, b1);

 cstate->is_geneve = 1;

 return b1;
}



static struct block *
gen_geneve_ll_check(compiler_state_t *cstate)
{
 struct block *b0={0};
 struct slist *s, *s1={0};







 s = new_stmt(cstate, 
                     0x00
                           |
                            0x60
                                   );
 s->s.k = cstate->off_linkhdr.reg;

 s1 = new_stmt(cstate, 
                      0x01
                             |
                              0x60
                                     );
 s1->s.k = cstate->off_linkpl.reg;
 sappend(s, s1);

 b0 = new_block(cstate, 
                       0x05
                              |
                               0x10
                                      |
                                       0x08
                                            );
 b0->stmts = s;
 b0->s.k = 0;
 gen_not(b0);

 return b0;
}

struct block *
gen_atmfield_code(compiler_state_t *cstate, int atmfield, bpf_int32 jvalue,
    bpf_u_int32 jtype, int reverse)
{
 struct block *b0={0};

 switch (atmfield) {

 case 51:
  if (!cstate->is_atm)
   bpf_error(cstate, "'vpi' supported only on raw ATM");
  if (cstate->off_vpi == 0xffffffffU)
   abort();
  b0 = gen_ncmp(cstate, OR_LINKHDR, cstate->off_vpi, 
                                                    0x10
                                                         , 0xffffffff, jtype,
      reverse, jvalue);
  break;

 case 52:
  if (!cstate->is_atm)
   bpf_error(cstate, "'vci' supported only on raw ATM");
  if (cstate->off_vci == 0xffffffffU)
   abort();
  b0 = gen_ncmp(cstate, OR_LINKHDR, cstate->off_vci, 
                                                    0x08
                                                         , 0xffffffff, jtype,
      reverse, jvalue);
  break;

 case 53:
  if (cstate->off_proto == 0xffffffffU)
   abort();
  b0 = gen_ncmp(cstate, OR_LINKHDR, cstate->off_proto, 
                                                      0x10
                                                           , 0x0f, jtype,
      reverse, jvalue);
  break;

 case 54:
  if (cstate->off_payload == 0xffffffffU)
   abort();
  b0 = gen_ncmp(cstate, OR_LINKHDR, cstate->off_payload + 5, 
                                                                       0x10
                                                                            ,
      0xffffffff, jtype, reverse, jvalue);
  break;

 case 55:
  if (!cstate->is_atm)
   bpf_error(cstate, "'callref' supported only on raw ATM");
  if (cstate->off_proto == 0xffffffffU)
   abort();
  b0 = gen_ncmp(cstate, OR_LINKHDR, cstate->off_proto, 
                                                      0x10
                                                           , 0xffffffff,
      jtype, reverse, jvalue);
  break;

 default:
  abort();
 }
 return b0;
}

struct block *
gen_atmtype_abbrev(compiler_state_t *cstate, int type)
{
 struct block *b0, *b1={0};

 switch (type) {

 case 22:

  if (!cstate->is_atm)
   bpf_error(cstate, "'metac' supported only on raw ATM");
  b0 = gen_atmfield_code(cstate, 51, 0, 
                                          0x10
                                                 , 0);
  b1 = gen_atmfield_code(cstate, 52, 1, 
                                          0x10
                                                 , 0);
  gen_and(b0, b1);
  break;

 case 23:

  if (!cstate->is_atm)
   bpf_error(cstate, "'bcc' supported only on raw ATM");
  b0 = gen_atmfield_code(cstate, 51, 0, 
                                          0x10
                                                 , 0);
  b1 = gen_atmfield_code(cstate, 52, 2, 
                                          0x10
                                                 , 0);
  gen_and(b0, b1);
  break;

 case 24:

  if (!cstate->is_atm)
   bpf_error(cstate, "'oam4sc' supported only on raw ATM");
  b0 = gen_atmfield_code(cstate, 51, 0, 
                                          0x10
                                                 , 0);
  b1 = gen_atmfield_code(cstate, 52, 3, 
                                          0x10
                                                 , 0);
  gen_and(b0, b1);
  break;

 case 25:

  if (!cstate->is_atm)
   bpf_error(cstate, "'oam4ec' supported only on raw ATM");
  b0 = gen_atmfield_code(cstate, 51, 0, 
                                          0x10
                                                 , 0);
  b1 = gen_atmfield_code(cstate, 52, 4, 
                                          0x10
                                                 , 0);
  gen_and(b0, b1);
  break;

 case 26:

  if (!cstate->is_atm)
   bpf_error(cstate, "'sc' supported only on raw ATM");
  b0 = gen_atmfield_code(cstate, 51, 0, 
                                          0x10
                                                 , 0);
  b1 = gen_atmfield_code(cstate, 52, 5, 
                                          0x10
                                                 , 0);
  gen_and(b0, b1);
  break;

 case 27:

  if (!cstate->is_atm)
   bpf_error(cstate, "'ilmic' supported only on raw ATM");
  b0 = gen_atmfield_code(cstate, 51, 0, 
                                          0x10
                                                 , 0);
  b1 = gen_atmfield_code(cstate, 52, 16, 
                                           0x10
                                                  , 0);
  gen_and(b0, b1);
  break;

 case 30:

  if (!cstate->is_atm)
   bpf_error(cstate, "'lane' supported only on raw ATM");
  b1 = gen_atmfield_code(cstate, 53, 0x01, 
                                                      0x10
                                                             , 0);
  { (cstate)->prevlinktype = (cstate)->linktype; (cstate)->off_prevlinkhdr = (cstate)->off_linkhdr; (cstate)->linktype = (1); (cstate)->off_linkhdr.is_variable = (0); (cstate)->off_linkhdr.constant_part = (cstate->off_payload + 2); (cstate)->off_linkhdr.reg = (-1); (cstate)->is_geneve = 0; }

         ;
  cstate->off_linktype.constant_part = cstate->off_linkhdr.constant_part + 12;
  cstate->off_linkpl.constant_part = cstate->off_linkhdr.constant_part + 14;
  cstate->off_nl = 0;
  cstate->off_nl_nosnap = 3;
  break;

 case 31:

  if (!cstate->is_atm)
   bpf_error(cstate, "'llc' supported only on raw ATM");
  b1 = gen_atmfield_code(cstate, 53, 0x02, 
                                                     0x10
                                                            , 0);
  cstate->linktype = cstate->prevlinktype;
  break;

 default:
  abort();
 }
 return b1;
}
struct block *
gen_mtp2type_abbrev(compiler_state_t *cstate, int type)
{
 struct block *b0, *b1={0};

 switch (type) {

 case 22:
  if ( (cstate->linktype != 140) &&
       (cstate->linktype != 197) &&
       (cstate->linktype != 139) )
   bpf_error(cstate, "'fisu' supported only on MTP2");

  b0 = gen_ncmp(cstate, OR_PACKET, cstate->off_li, 
                                                  0x10
                                                       , 0x3f, 
                                                               0x10
                                                                      , 0, 0);
  break;

 case 23:
  if ( (cstate->linktype != 140) &&
       (cstate->linktype != 197) &&
       (cstate->linktype != 139) )
   bpf_error(cstate, "'lssu' supported only on MTP2");
  b0 = gen_ncmp(cstate, OR_PACKET, cstate->off_li, 
                                                  0x10
                                                       , 0x3f, 
                                                               0x20
                                                                      , 1, 2);
  b1 = gen_ncmp(cstate, OR_PACKET, cstate->off_li, 
                                                  0x10
                                                       , 0x3f, 
                                                               0x20
                                                                      , 0, 0);
  gen_and(b1, b0);
  break;

 case 24:
  if ( (cstate->linktype != 140) &&
       (cstate->linktype != 197) &&
       (cstate->linktype != 139) )
   bpf_error(cstate, "'msu' supported only on MTP2");
  b0 = gen_ncmp(cstate, OR_PACKET, cstate->off_li, 
                                                  0x10
                                                       , 0x3f, 
                                                               0x20
                                                                      , 0, 2);
  break;

 case 25:
  if ( (cstate->linktype != 140) &&
       (cstate->linktype != 197) &&
       (cstate->linktype != 139) )
   bpf_error(cstate, "'hfisu' supported only on MTP2_HSL");

  b0 = gen_ncmp(cstate, OR_PACKET, cstate->off_li_hsl, 
                                                      0x08
                                                           , 0xff80, 
                                                                     0x10
                                                                            , 0, 0);
  break;

 case 26:
  if ( (cstate->linktype != 140) &&
       (cstate->linktype != 197) &&
       (cstate->linktype != 139) )
   bpf_error(cstate, "'hlssu' supported only on MTP2_HSL");
  b0 = gen_ncmp(cstate, OR_PACKET, cstate->off_li_hsl, 
                                                      0x08
                                                           , 0xff80, 
                                                                     0x20
                                                                            , 1, 0x0100);
  b1 = gen_ncmp(cstate, OR_PACKET, cstate->off_li_hsl, 
                                                      0x08
                                                           , 0xff80, 
                                                                     0x20
                                                                            , 0, 0);
  gen_and(b1, b0);
  break;

 case 27:
  if ( (cstate->linktype != 140) &&
       (cstate->linktype != 197) &&
       (cstate->linktype != 139) )
   bpf_error(cstate, "'hmsu' supported only on MTP2_HSL");
  b0 = gen_ncmp(cstate, OR_PACKET, cstate->off_li_hsl, 
                                                      0x08
                                                           , 0xff80, 
                                                                     0x20
                                                                            , 0, 0x0100);
  break;

 default:
  abort();
 }
 return b0;
}

struct block *
gen_mtp3field_code(compiler_state_t *cstate, int mtp3field, bpf_u_int32 jvalue,
    bpf_u_int32 jtype, int reverse)
{
 struct block *b0={0};
 bpf_u_int32 val1 , val2 , val3={0};
 u_int newoff_sio = cstate->off_sio;
 u_int newoff_opc = cstate->off_opc;
 u_int newoff_dpc = cstate->off_dpc;
 u_int newoff_sls = cstate->off_sls;

 switch (mtp3field) {

 case 5:
  newoff_sio += 3;


 case 1:
  if (cstate->off_sio == 0xffffffffU)
   bpf_error(cstate, "'sio' supported only on SS7");

  if(jvalue > 255)
          bpf_error(cstate, "sio value %u too big; max value = 255",
              jvalue);
  b0 = gen_ncmp(cstate, OR_PACKET, newoff_sio, 
                                              0x10
                                                   , 0xffffffff,
      (u_int)jtype, reverse, (u_int)jvalue);
  break;

 case 6:
  newoff_opc+=3;
        case 2:
         if (cstate->off_opc == 0xffffffffU)
   bpf_error(cstate, "'opc' supported only on SS7");

  if (jvalue > 16383)
          bpf_error(cstate, "opc value %u too big; max value = 16383",
              jvalue);


  val1 = jvalue & 0x00003c00;
  val1 = val1 >>10;
  val2 = jvalue & 0x000003fc;
  val2 = val2 <<6;
  val3 = jvalue & 0x00000003;
  val3 = val3 <<22;
  jvalue = val1 + val2 + val3;
  b0 = gen_ncmp(cstate, OR_PACKET, newoff_opc, 
                                              0x00
                                                   , 0x00c0ff0f,
      (u_int)jtype, reverse, (u_int)jvalue);
  break;

 case 7:
  newoff_dpc += 3;


 case 3:
         if (cstate->off_dpc == 0xffffffffU)
   bpf_error(cstate, "'dpc' supported only on SS7");

  if (jvalue > 16383)
          bpf_error(cstate, "dpc value %u too big; max value = 16383",
              jvalue);


  val1 = jvalue & 0x000000ff;
  val1 = val1 << 24;
  val2 = jvalue & 0x00003f00;
  val2 = val2 << 8;
  jvalue = val1 + val2;
  b0 = gen_ncmp(cstate, OR_PACKET, newoff_dpc, 
                                              0x00
                                                   , 0xff3f0000,
      (u_int)jtype, reverse, (u_int)jvalue);
  break;

 case 8:
   newoff_sls+=3;
 case 4:
         if (cstate->off_sls == 0xffffffffU)
   bpf_error(cstate, "'sls' supported only on SS7");

  if (jvalue > 15)
           bpf_error(cstate, "sls value %u too big; max value = 15",
               jvalue);


  jvalue = jvalue << 4;
  b0 = gen_ncmp(cstate, OR_PACKET, newoff_sls, 
                                              0x10
                                                   , 0xf0,
      (u_int)jtype,reverse, (u_int)jvalue);
  break;

 default:
  abort();
 }
 return b0;
}

static struct block *
gen_msg_abbrev(compiler_state_t *cstate, int type)
{
 struct block *b1={0};





 switch (type) {

 case 41:
  b1 = gen_atmfield_code(cstate, 54, 0x05, 
                                                  0x10
                                                         , 0);
  break;

 case 42:
  b1 = gen_atmfield_code(cstate, 54, 0x02, 
                                                         0x10
                                                                , 0);
  break;

 case 43:
  b1 = gen_atmfield_code(cstate, 54, 0x07, 
                                                    0x10
                                                           , 0);
  break;

 case 44:
  b1 = gen_atmfield_code(cstate, 54, 0x0f, 
                                                        0x10
                                                               , 0);
  break;

 case 45:
  b1 = gen_atmfield_code(cstate, 54, 0x4d, 
                                                    0x10
                                                           , 0);
  break;

 case 46:
  b1 = gen_atmfield_code(cstate, 54, 0x5a, 
                                                         0x10
                                                                , 0);
  break;

 default:
  abort();
 }
 return b1;
}

struct block *
gen_atmmulti_abbrev(compiler_state_t *cstate, int type)
{
 struct block *b0, *b1={0};

 switch (type) {

 case 28:
  if (!cstate->is_atm)
   bpf_error(cstate, "'oam' supported only on raw ATM");
  b1 = gen_atmmulti_abbrev(cstate, 29);
  break;

 case 29:
  if (!cstate->is_atm)
   bpf_error(cstate, "'oamf4' supported only on raw ATM");

  b0 = gen_atmfield_code(cstate, 52, 3, 
                                          0x10
                                                 , 0);
  b1 = gen_atmfield_code(cstate, 52, 4, 
                                          0x10
                                                 , 0);
  gen_or(b0, b1);
  b0 = gen_atmfield_code(cstate, 51, 0, 
                                          0x10
                                                 , 0);
  gen_and(b0, b1);
  break;

 case 70:




  if (!cstate->is_atm)
   bpf_error(cstate, "'connectmsg' supported only on raw ATM");
  b0 = gen_msg_abbrev(cstate, 41);
  b1 = gen_msg_abbrev(cstate, 42);
  gen_or(b0, b1);
  b0 = gen_msg_abbrev(cstate, 43);
  gen_or(b0, b1);
  b0 = gen_msg_abbrev(cstate, 44);
  gen_or(b0, b1);
  b0 = gen_msg_abbrev(cstate, 45);
  gen_or(b0, b1);
  b0 = gen_msg_abbrev(cstate, 46);
  gen_or(b0, b1);
  b0 = gen_atmtype_abbrev(cstate, 26);
  gen_and(b0, b1);
  break;

 case 71:
  if (!cstate->is_atm)
   bpf_error(cstate, "'metaconnect' supported only on raw ATM");
  b0 = gen_msg_abbrev(cstate, 41);
  b1 = gen_msg_abbrev(cstate, 42);
  gen_or(b0, b1);
  b0 = gen_msg_abbrev(cstate, 43);
  gen_or(b0, b1);
  b0 = gen_msg_abbrev(cstate, 45);
  gen_or(b0, b1);
  b0 = gen_msg_abbrev(cstate, 46);
  gen_or(b0, b1);
  b0 = gen_atmtype_abbrev(cstate, 22);
  gen_and(b0, b1);
  break;

 default:
  abort();
 }
 return b1;
}
