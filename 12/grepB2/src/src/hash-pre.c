











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

typedef size_t (*Hash_hasher) (const void *, size_t);
typedef _Bool (*Hash_comparator) (const void *, const void *);
typedef void (*Hash_data_freer) (void *);
typedef _Bool (*Hash_processor) (void *, void *);

struct hash_tuning
  {



    float shrink_threshold;
    float shrink_factor;
    float growth_threshold;
    float growth_factor;
    _Bool is_n_buckets;
  };

typedef struct hash_tuning Hash_tuning;

struct hash_table;

typedef struct hash_table Hash_table;


size_t hash_get_n_buckets (const Hash_table *) __attribute__ ((__pure__));
size_t hash_get_n_buckets_used (const Hash_table *) __attribute__ ((__pure__));
size_t hash_get_n_entries (const Hash_table *) __attribute__ ((__pure__));
size_t hash_get_max_bucket_length (const Hash_table *) __attribute__ ((__pure__));
_Bool hash_table_ok (const Hash_table *) __attribute__ ((__pure__));
void hash_print_statistics (const Hash_table *, FILE *);
void *hash_lookup (const Hash_table *, const void *);


void *hash_get_first (const Hash_table *) __attribute__ ((__pure__));
void *hash_get_next (const Hash_table *, const void *);
size_t hash_get_entries (const Hash_table *, void **, size_t);
size_t hash_do_for_each (const Hash_table *, Hash_processor, void *);


size_t hash_string (const char *, size_t) __attribute__ ((__pure__));
void hash_reset_tuning (Hash_tuning *);
Hash_table *hash_initialize (size_t, const Hash_tuning *,
                             Hash_hasher, Hash_comparator,
                             Hash_data_freer) __attribute__ ((__warn_unused_result__));
void hash_clear (Hash_table *);
void hash_free (Hash_table *);


_Bool hash_rehash (Hash_table *, size_t) __attribute__ ((__warn_unused_result__));
void *hash_insert (Hash_table *, const void *) __attribute__ ((__warn_unused_result__));

int hash_insert_if_absent (Hash_table *table, const void *entry,
                           const void **matched_ent);
void *hash_delete (Hash_table *, const void *);








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
inline uint64_t
rotl64 (uint64_t x, int n)
{
  return ((x << n) | (x >> (64 - n))) & (18446744073709551615ULL);
}




inline uint64_t
rotr64 (uint64_t x, int n)
{
  return ((x >> n) | (x << (64 - n))) & (18446744073709551615ULL);
}





inline gl_uint32_t
rotl32 (gl_uint32_t x, int n)
{
  return ((x << n) | (x >> (32 - n))) & 4294967295U;
}




inline gl_uint32_t
rotr32 (gl_uint32_t x, int n)
{
  return ((x >> n) | (x << (32 - n))) & 4294967295U;
}




inline size_t
rotl_sz (size_t x, int n)
{
  return ((x << n) | (x >> ((8 * sizeof x) - n))) & (((((0u) + 1) << ((32) ? (32) - 1 - (0) : 0)) - 1) * 2 + 1);
}




inline size_t
rotr_sz (size_t x, int n)
{
  return ((x >> n) | (x << ((8 * sizeof x) - n))) & (((((0u) + 1) << ((32) ? (32) - 1 - (0) : 0)) - 1) * 2 + 1);
}






inline gl_uint16_t
rotl16 (gl_uint16_t x, int n)
{
  return ((x << n) | (x >> (16 - n))) & 65535;
}






inline gl_uint16_t
rotr16 (gl_uint16_t x, int n)
{
  return ((x >> n) | (x << (16 - n))) & 65535;
}






inline gl_uint8_t
rotl8 (gl_uint8_t x, int n)
{
  return ((x << n) | (x >> (8 - n))) & 255;
}






inline gl_uint8_t
rotr8 (gl_uint8_t x, int n)
{
  return ((x >> n) | (x << (8 - n))) & 255;
}
typedef ptrdiff_t __xalloc_count_type;










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
extern int putenv (char *__string) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__ ));
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1))) ;
extern int system (const char *__command) ;
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ )) ;






typedef int (*__compar_fn_t) (const void *, const void *);
extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;







extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
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
struct hash_entry
  {
    void *data;
    struct hash_entry *next;
  };

struct hash_table
  {



    struct hash_entry *bucket;
    struct hash_entry const *bucket_limit;
    size_t n_buckets;
    size_t n_buckets_used;
    size_t n_entries;


    const Hash_tuning *tuning;






    Hash_hasher hasher;
    Hash_comparator comparator;
    Hash_data_freer data_freer;


    struct hash_entry *free_entry_list;







  };
static const Hash_tuning default_tuning =
  {
    0.0f,
    1.0f,
    0.8f,
    1.414f,
    0
  };
size_t
hash_get_n_buckets (const Hash_table *table)
{
  return table->n_buckets;
}



size_t
hash_get_n_buckets_used (const Hash_table *table)
{
  return table->n_buckets_used;
}



size_t
hash_get_n_entries (const Hash_table *table)
{
  return table->n_entries;
}



size_t
hash_get_max_bucket_length (const Hash_table *table)
{
  struct hash_entry const *bucket={0};
  size_t max_bucket_length = 0;

  for (bucket = table->bucket; bucket < table->bucket_limit; bucket++)
    {
      if (bucket->data)
        {
          struct hash_entry const *cursor = bucket;
          size_t bucket_length = 1;

          while (cursor = cursor->next, cursor)
            bucket_length++;

          if (bucket_length > max_bucket_length)
            max_bucket_length = bucket_length;
        }
    }

  return max_bucket_length;
}




_Bool
hash_table_ok (const Hash_table *table)
{
  struct hash_entry const *bucket={0};
  size_t n_buckets_used = 0;
  size_t n_entries = 0;

  for (bucket = table->bucket; bucket < table->bucket_limit; bucket++)
    {
      if (bucket->data)
        {
          struct hash_entry const *cursor = bucket;


          n_buckets_used++;
          n_entries++;


          while (cursor = cursor->next, cursor)
            n_entries++;
        }
    }

  if (n_buckets_used == table->n_buckets_used && n_entries == table->n_entries)
    return 1;

  return 0;
}

void
hash_print_statistics (const Hash_table *table, FILE *stream)
{
  size_t n_entries = hash_get_n_entries (table);
  size_t n_buckets = hash_get_n_buckets (table);
  size_t n_buckets_used = hash_get_n_buckets_used (table);
  size_t max_bucket_length = hash_get_max_bucket_length (table);

  fprintf (stream, "# entries:         %lu\n", (unsigned long int) n_entries);
  fprintf (stream, "# buckets:         %lu\n", (unsigned long int) n_buckets);
  fprintf (stream, "# buckets used:    %lu (%.2f%%)\n",
           (unsigned long int) n_buckets_used,
           (100.0 * n_buckets_used) / n_buckets);
  fprintf (stream, "max bucket length: %lu\n",
           (unsigned long int) max_bucket_length);
}



static struct hash_entry *
safe_hasher (const Hash_table *table, const void *key)
{
  size_t n = table->hasher (key, table->n_buckets);
  if (! (n < table->n_buckets))
    abort ();
  return table->bucket + n;
}




void *
hash_lookup (const Hash_table *table, const void *entry)
{
  struct hash_entry const *bucket = safe_hasher (table, entry);
  struct hash_entry const *cursor={0};

  if (bucket->data == ((void*)0))
    return ((void*)0);

  for (cursor = bucket; cursor; cursor = cursor->next)
    if (entry == cursor->data || table->comparator (entry, cursor->data))
      return cursor->data;

  return ((void*)0);
}
void *
hash_get_first (const Hash_table *table)
{
  struct hash_entry const *bucket={0};

  if (table->n_entries == 0)
    return ((void*)0);

  for (bucket = table->bucket; ; bucket++)
    if (! (bucket < table->bucket_limit))
      abort ();
    else if (bucket->data)
      return bucket->data;
}





void *
hash_get_next (const Hash_table *table, const void *entry)
{
  struct hash_entry const *bucket = safe_hasher (table, entry);
  struct hash_entry const *cursor={0};


  cursor = bucket;
  do
    {
      if (cursor->data == entry && cursor->next)
        return cursor->next->data;
      cursor = cursor->next;
    }
  while (cursor != ((void*)0));


  while (++bucket < table->bucket_limit)
    if (bucket->data)
      return bucket->data;


  return ((void*)0);
}





size_t
hash_get_entries (const Hash_table *table, void **buffer,
                  size_t buffer_size)
{
  size_t counter = 0;
  struct hash_entry const *bucket={0};
  struct hash_entry const *cursor={0};

  for (bucket = table->bucket; bucket < table->bucket_limit; bucket++)
    {
      if (bucket->data)
        {
          for (cursor = bucket; cursor; cursor = cursor->next)
            {
              if (counter >= buffer_size)
                return counter;
              buffer[counter++] = cursor->data;
            }
        }
    }

  return counter;
}
size_t
hash_do_for_each (const Hash_table *table, Hash_processor processor,
                  void *processor_data)
{
  size_t counter = 0;
  struct hash_entry const *bucket={0};
  struct hash_entry const *cursor={0};

  for (bucket = table->bucket; bucket < table->bucket_limit; bucket++)
    {
      if (bucket->data)
        {
          for (cursor = bucket; cursor; cursor = cursor->next)
            {
              if (! processor (cursor->data, processor_data))
                return counter;
              counter++;
            }
        }
    }

  return counter;
}
size_t
hash_string (const char *string, size_t n_buckets)
{
  size_t value = 0;
  unsigned char ch={0};

  for (; (ch = *string); string++)
    value = (value * 31 + ch) % n_buckets;
  return value;
}






static _Bool __attribute__ ((__const__))
is_prime (size_t candidate)
{
  size_t divisor = 3;
  size_t square = divisor * divisor;

  while (square < candidate && (candidate % divisor))
    {
      divisor++;
      square += 4 * divisor;
      divisor++;
    }

  return (candidate % divisor ? 1 : 0);
}




static size_t __attribute__ ((__const__))
next_prime (size_t candidate)
{

  if (candidate < 10)
    candidate = 10;


  candidate |= 1;

  while ((((((0u) + 1) << ((32) ? (32) - 1 - (0) : 0)) - 1) * 2 + 1) != candidate && !is_prime (candidate))
    candidate += 2;

  return candidate;
}

void
hash_reset_tuning (Hash_tuning *tuning)
{
  *tuning = default_tuning;
}


static size_t
raw_hasher (const void *data, size_t n)
{





  size_t val = rotr_sz ((size_t) data, 3);
  return val % n;
}


static _Bool
raw_comparator (const void *a, const void *b)
{
  return a == b;
}
static _Bool
check_tuning (Hash_table *table)
{
  const Hash_tuning *tuning = table->tuning;
  float epsilon={0};
  if (tuning == &default_tuning)
    return 1;






  epsilon = 0.1f;

  if (epsilon < tuning->growth_threshold
      && tuning->growth_threshold < 1 - epsilon
      && 1 + epsilon < tuning->growth_factor
      && 0 <= tuning->shrink_threshold
      && tuning->shrink_threshold + epsilon < tuning->shrink_factor
      && tuning->shrink_factor <= 1
      && tuning->shrink_threshold + epsilon < tuning->growth_threshold)
    return 1;

  table->tuning = &default_tuning;
  return 0;
}





static size_t __attribute__ ((__pure__))
compute_bucket_size (size_t candidate, const Hash_tuning *tuning)
{
  if (!tuning->is_n_buckets)
    {
      float new_candidate = candidate / tuning->growth_threshold;
      if ((((((0u) + 1) << ((32) ? (32) - 1 - (0) : 0)) - 1) * 2 + 1) <= new_candidate)
        return 0;
      candidate = new_candidate;
    }
  candidate = next_prime (candidate);
  if (((size_t) ((((((0) + 1) << ((32) ? (32) - 1 - (1) : 0)) - 1) * 2 + 1) < (((((0u) + 1) << ((32) ? (32) - 1 - (0) : 0)) - 1) * 2 + 1) ? (((((0) + 1) << ((32) ? (32) - 1 - (1) : 0)) - 1) * 2 + 1) : (((((0u) + 1) << ((32) ? (32) - 1 - (0) : 0)) - 1) * 2 + 1) - 1) / (sizeof (struct hash_entry *)) < (candidate)))
    return 0;
  return candidate;
}
Hash_table *
hash_initialize (size_t candidate, const Hash_tuning *tuning,
                 Hash_hasher hasher, Hash_comparator comparator,
                 Hash_data_freer data_freer)
{
  Hash_table *table={0};

  if (hasher == ((void*)0))
    hasher = raw_hasher;
  if (comparator == ((void*)0))
    comparator = raw_comparator;

  table = malloc (sizeof *table);
  if (table == ((void*)0))
    return ((void*)0);

  if (!tuning)
    tuning = &default_tuning;
  table->tuning = tuning;
  if (!check_tuning (table))
    {





      goto fail;
    }

  table->n_buckets = compute_bucket_size (candidate, tuning);
  if (!table->n_buckets)
    goto fail;

  table->bucket = calloc (table->n_buckets, sizeof *table->bucket);
  if (table->bucket == ((void*)0))
    goto fail;
  table->bucket_limit = table->bucket + table->n_buckets;
  table->n_buckets_used = 0;
  table->n_entries = 0;

  table->hasher = hasher;
  table->comparator = comparator;
  table->data_freer = data_freer;

  table->free_entry_list = ((void*)0);



  return table;

 fail:
  free (table);
  return ((void*)0);
}





void
hash_clear (Hash_table *table)
{
  struct hash_entry *bucket={0};

  for (bucket = table->bucket; bucket < table->bucket_limit; bucket++)
    {
      if (bucket->data)
        {
          struct hash_entry *cursor={0};
          struct hash_entry *next={0};


          for (cursor = bucket->next; cursor; cursor = next)
            {
              if (table->data_freer)
                table->data_freer (cursor->data);
              cursor->data = ((void*)0);

              next = cursor->next;


              cursor->next = table->free_entry_list;
              table->free_entry_list = cursor;
            }


          if (table->data_freer)
            table->data_freer (bucket->data);
          bucket->data = ((void*)0);
          bucket->next = ((void*)0);
        }
    }

  table->n_buckets_used = 0;
  table->n_entries = 0;
}






void
hash_free (Hash_table *table)
{
  struct hash_entry *bucket={0};
  struct hash_entry *cursor={0};
  struct hash_entry *next={0};


  if (table->data_freer && table->n_entries)
    {
      for (bucket = table->bucket; bucket < table->bucket_limit; bucket++)
        {
          if (bucket->data)
            {
              for (cursor = bucket; cursor; cursor = cursor->next)
                table->data_freer (cursor->data);
            }
        }
    }
  for (bucket = table->bucket; bucket < table->bucket_limit; bucket++)
    {
      for (cursor = bucket->next; cursor; cursor = next)
        {
          next = cursor->next;
          free (cursor);
        }
    }


  for (cursor = table->free_entry_list; cursor; cursor = next)
    {
      next = cursor->next;
      free (cursor);
    }




  free (table->bucket);
  free (table);
}






static struct hash_entry *
allocate_entry (Hash_table *table)
{
  struct hash_entry *new={0};

  if (table->free_entry_list)
    {
      new = table->free_entry_list;
      table->free_entry_list = new->next;
    }
  else
    {



      new = malloc (sizeof *new);

    }

  return new;
}




static void
free_entry (Hash_table *table, struct hash_entry *entry)
{
  entry->data = ((void*)0);
  entry->next = table->free_entry_list;
  table->free_entry_list = entry;
}







static void *
hash_find_entry (Hash_table *table, const void *entry,
                 struct hash_entry **bucket_head, _Bool delete)
{
  struct hash_entry *bucket = safe_hasher (table, entry);
  struct hash_entry *cursor={0};

  *bucket_head = bucket;


  if (bucket->data == ((void*)0))
    return ((void*)0);


  if (entry == bucket->data || table->comparator (entry, bucket->data))
    {
      void *data = bucket->data;

      if (delete)
        {
          if (bucket->next)
            {
              struct hash_entry *next = bucket->next;



              *bucket = *next;
              free_entry (table, next);
            }
          else
            {
              bucket->data = ((void*)0);
            }
        }

      return data;
    }


  for (cursor = bucket; cursor->next; cursor = cursor->next)
    {
      if (entry == cursor->next->data
          || table->comparator (entry, cursor->next->data))
        {
          void *data = cursor->next->data;

          if (delete)
            {
              struct hash_entry *next = cursor->next;



              cursor->next = next->next;
              free_entry (table, next);
            }

          return data;
        }
    }


  return ((void*)0);
}







static _Bool
transfer_entries (Hash_table *dst, Hash_table *src, _Bool safe)
{
  struct hash_entry *bucket={0};
  struct hash_entry *cursor={0};
  struct hash_entry *next={0};
  for (bucket = src->bucket; bucket < src->bucket_limit; bucket++)
    if (bucket->data)
      {
        void *data={0};
        struct hash_entry *new_bucket={0};







        for (cursor = bucket->next; cursor; cursor = next)
          {
            data = cursor->data;
            new_bucket = safe_hasher (dst, data);

            next = cursor->next;

            if (new_bucket->data)
              {


                cursor->next = new_bucket->next;
                new_bucket->next = cursor;
              }
            else
              {


                new_bucket->data = data;
                dst->n_buckets_used++;
                free_entry (dst, cursor);
              }
          }



        data = bucket->data;
        bucket->next = ((void*)0);
        if (safe)
          continue;
        new_bucket = safe_hasher (dst, data);

        if (new_bucket->data)
          {


            struct hash_entry *new_entry = allocate_entry (dst);

            if (new_entry == ((void*)0))
              return 0;

            new_entry->data = data;
            new_entry->next = new_bucket->next;
            new_bucket->next = new_entry;
          }
        else
          {

            new_bucket->data = data;
            dst->n_buckets_used++;
          }
        bucket->data = ((void*)0);
        src->n_buckets_used--;
      }
  return 1;
}
_Bool
hash_rehash (Hash_table *table, size_t candidate)
{
  Hash_table storage={0};
  Hash_table *new_table={0};
  size_t new_size = compute_bucket_size (candidate, table->tuning);

  if (!new_size)
    return 0;
  if (new_size == table->n_buckets)
    return 1;
  new_table = &storage;
  new_table->bucket = calloc (new_size, sizeof *new_table->bucket);
  if (new_table->bucket == ((void*)0))
    return 0;
  new_table->n_buckets = new_size;
  new_table->bucket_limit = new_table->bucket + new_size;
  new_table->n_buckets_used = 0;
  new_table->n_entries = 0;
  new_table->tuning = table->tuning;
  new_table->hasher = table->hasher;
  new_table->comparator = table->comparator;
  new_table->data_freer = table->data_freer;
  new_table->free_entry_list = table->free_entry_list;

  if (transfer_entries (new_table, table, 0))
    {

      free (table->bucket);
      table->bucket = new_table->bucket;
      table->bucket_limit = new_table->bucket_limit;
      table->n_buckets = new_table->n_buckets;
      table->n_buckets_used = new_table->n_buckets_used;
      table->free_entry_list = new_table->free_entry_list;

      return 1;
    }
  table->free_entry_list = new_table->free_entry_list;
  if (! (transfer_entries (table, new_table, 1)
         && transfer_entries (table, new_table, 0)))
    abort ();

  free (new_table->bucket);
  return 0;
}
int
hash_insert_if_absent (Hash_table *table, void const *entry,
                       void const **matched_ent)
{
  void *data={0};
  struct hash_entry *bucket={0};




  if (! entry)
    abort ();


  if ((data = hash_find_entry (table, entry, &bucket, 0)) != ((void*)0))
    {
      if (matched_ent)
        *matched_ent = data;
      return 0;
    }






  if (table->n_buckets_used
      > table->tuning->growth_threshold * table->n_buckets)
    {


      check_tuning (table);
      if (table->n_buckets_used
          > table->tuning->growth_threshold * table->n_buckets)
        {
          const Hash_tuning *tuning = table->tuning;
          float candidate =
            (tuning->is_n_buckets
             ? (table->n_buckets * tuning->growth_factor)
             : (table->n_buckets * tuning->growth_factor
                * tuning->growth_threshold));

          if ((((((0u) + 1) << ((32) ? (32) - 1 - (0) : 0)) - 1) * 2 + 1) <= candidate)
            return -1;


          if (!hash_rehash (table, candidate))
            return -1;


          if (hash_find_entry (table, entry, &bucket, 0) != ((void*)0))
            abort ();
        }
    }



  if (bucket->data)
    {
      struct hash_entry *new_entry = allocate_entry (table);

      if (new_entry == ((void*)0))
        return -1;



      new_entry->data = (void *) entry;
      new_entry->next = bucket->next;
      bucket->next = new_entry;
      table->n_entries++;
      return 1;
    }



  bucket->data = (void *) entry;
  table->n_entries++;
  table->n_buckets_used++;

  return 1;
}







void *
hash_insert (Hash_table *table, void const *entry)
{
  void const *matched_ent={0};
  int err = hash_insert_if_absent (table, entry, &matched_ent);
  return (err == -1
          ? ((void*)0)
          : (void *) (err == 0 ? matched_ent : entry));
}





void *
hash_delete (Hash_table *table, const void *entry)
{
  void *data={0};
  struct hash_entry *bucket={0};

  data = hash_find_entry (table, entry, &bucket, 1);
  if (!data)
    return ((void*)0);

  table->n_entries--;
  if (!bucket->data)
    {
      table->n_buckets_used--;




      if (table->n_buckets_used
          < table->tuning->shrink_threshold * table->n_buckets)
        {


          check_tuning (table);
          if (table->n_buckets_used
              < table->tuning->shrink_threshold * table->n_buckets)
            {
              const Hash_tuning *tuning = table->tuning;
              size_t candidate =
                (tuning->is_n_buckets
                 ? table->n_buckets * tuning->shrink_factor
                 : (table->n_buckets * tuning->shrink_factor
                    * tuning->growth_threshold));

              if (!hash_rehash (table, candidate))
                {






                  struct hash_entry *cursor = table->free_entry_list;
                  struct hash_entry *next={0};
                  while (cursor)
                    {
                      next = cursor->next;
                      free (cursor);
                      cursor = next;
                    }
                  table->free_entry_list = ((void*)0);

                }
            }
        }
    }

  return data;
}
