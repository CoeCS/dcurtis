# 1 "precompile.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "precompile.c"
# 1 "/usr/include/stdio.h" 1 3 4
# 40 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 59 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/machine/cdefs.h" 1 3 4
# 60 "/usr/include/sys/cdefs.h" 2 3 4

# 1 "/usr/include/sys/cdefs_elf.h" 1 3 4
# 62 "/usr/include/sys/cdefs.h" 2 3 4
# 41 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/sys/featuretest.h" 1 3 4
# 42 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/sys/ansi.h" 1 3 4
# 35 "/usr/include/sys/ansi.h" 3 4
# 1 "/usr/include/machine/ansi.h" 1 3 4
# 41 "/usr/include/machine/ansi.h" 3 4
# 1 "/usr/include/machine/int_types.h" 1 3 4
# 45 "/usr/include/machine/int_types.h" 3 4
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef short int __int16_t;
typedef unsigned short int __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;





typedef long long int __int64_t;

typedef unsigned long long int __uint64_t;






typedef int __intptr_t;
typedef unsigned int __uintptr_t;
# 42 "/usr/include/machine/ansi.h" 2 3 4
# 36 "/usr/include/sys/ansi.h" 2 3 4

typedef char * __caddr_t;
typedef __uint32_t __gid_t;
typedef __uint32_t __in_addr_t;
typedef __uint16_t __in_port_t;
typedef unsigned short __mode_t;
typedef long __off_t;
typedef int __pid_t;
typedef __uint8_t __sa_family_t;
typedef __int32_t __socklen_t;
typedef __uint32_t __uid_t;
typedef unsigned long __fsblkcnt_t;
typedef unsigned long __fsfilcnt_t;

struct __tag_wctrans_t;
typedef struct __tag_wctrans_t *__wctrans_t;

struct __tag_wctype_t;
typedef struct __tag_wctype_t *__wctype_t;





typedef union {
 __int64_t __mbstateL;
 char __mbstate8[128];
} __mbstate_t;
# 43 "/usr/include/stdio.h" 2 3 4



typedef unsigned int size_t;



typedef int ssize_t;



# 1 "/usr/include/sys/null.h" 1 3 4
# 55 "/usr/include/stdio.h" 2 3 4







typedef __off_t fpos_t;
# 78 "/usr/include/stdio.h" 3 4
struct __sbuf {
 unsigned char *_base;
 int _size;
};
# 109 "/usr/include/stdio.h" 3 4
typedef struct __sFILE {
 unsigned char *_p;
 int _r;
 int _w;
 unsigned short _flags;
 short _file;
 struct __sbuf _bf;
 int _lbfsize;


 void *_cookie;
 int (*_close)(void *);
 int (*_read) (void *, char *, int);
 fpos_t (*_seek) (void *, fpos_t, int);
 int (*_write)(void *, const char *, int);


 struct __sbuf _ext;


 unsigned char *_up;
 int _ur;


 unsigned char _ubuf[3];
 unsigned char _nbuf[1];


 struct __sbuf _lb__unused;


 int _blksize;
 fpos_t _offset;
} FILE;


# 144 "/usr/include/stdio.h" 3 4
#pragma GCC visibility push(default)
# 144 "/usr/include/stdio.h" 3 4

extern FILE __sF[];

# 146 "/usr/include/stdio.h" 3 4
#pragma GCC visibility pop
# 146 "/usr/include/stdio.h" 3 4

# 218 "/usr/include/stdio.h" 3 4

# 218 "/usr/include/stdio.h" 3 4
#pragma GCC visibility push(default)
# 218 "/usr/include/stdio.h" 3 4

void clearerr(FILE *);
int fclose(FILE *);
int feof(FILE *);
int ferror(FILE *);
int fflush(FILE *);
int fgetc(FILE *);
int fgetpos(FILE * __restrict, fpos_t * __restrict);
char *fgets(char * __restrict, int, FILE * __restrict);
FILE *fopen(const char * __restrict , const char * __restrict);
int fprintf(FILE * __restrict , const char * __restrict, ...)
  __attribute__((__format__ (__printf__, 2, 3)));
int fputc(int, FILE *);
int fputs(const char * __restrict, FILE * __restrict);
size_t fread(void * __restrict, size_t, size_t, FILE * __restrict);
FILE *freopen(const char * __restrict, const char * __restrict,
     FILE * __restrict);
int fscanf(FILE * __restrict, const char * __restrict, ...)
  __attribute__((__format__ (__scanf__, 2, 3)));
int fseek(FILE *, long, int);
int fsetpos(FILE *, const fpos_t *);
long ftell(FILE *);
size_t fwrite(const void * __restrict, size_t, size_t, FILE * __restrict);
int getc(FILE *);
int getchar(void);
ssize_t getdelim(char ** __restrict, size_t * __restrict, int,
     FILE * __restrict);
ssize_t getline(char ** __restrict, size_t * __restrict, FILE * __restrict);
void perror(const char *);
int printf(const char * __restrict, ...)
  __attribute__((__format__ (__printf__, 1, 2)));
int putc(int, FILE *);
int putchar(int);
int puts(const char *);
int remove(const char *);
void rewind(FILE *);
int scanf(const char * __restrict, ...)
  __attribute__((__format__ (__scanf__, 1, 2)));
void setbuf(FILE * __restrict, char * __restrict);
int setvbuf(FILE * __restrict, char * __restrict, int, size_t);
int sscanf(const char * __restrict, const char * __restrict, ...)
  __attribute__((__format__ (__scanf__, 2, 3)));
FILE *tmpfile(void);
int ungetc(int, FILE *);
int vfprintf(FILE * __restrict, const char * __restrict, __builtin_va_list)
  __attribute__((__format__ (__printf__, 2, 0)));
int vprintf(const char * __restrict, __builtin_va_list)
  __attribute__((__format__ (__printf__, 1, 0)));


char *gets(char *);
int sprintf(char * __restrict, const char * __restrict, ...)
  __attribute__((__format__ (__printf__, 2, 3)));
char *tmpnam(char *);
int vsprintf(char * __restrict, const char * __restrict,
    __builtin_va_list)
  __attribute__((__format__ (__printf__, 2, 0)));





int rename (const char *, const char *);


# 282 "/usr/include/stdio.h" 3 4
#pragma GCC visibility pop
# 282 "/usr/include/stdio.h" 3 4

# 292 "/usr/include/stdio.h" 3 4

# 292 "/usr/include/stdio.h" 3 4
#pragma GCC visibility push(default)
# 292 "/usr/include/stdio.h" 3 4

char *ctermid(char *);



char *cuserid(char *);

FILE *fdopen(int, const char *);
int fileno(FILE *);

# 301 "/usr/include/stdio.h" 3 4
#pragma GCC visibility pop
# 301 "/usr/include/stdio.h" 3 4









# 309 "/usr/include/stdio.h" 3 4
#pragma GCC visibility push(default)
# 309 "/usr/include/stdio.h" 3 4

void flockfile(FILE *);
int ftrylockfile(FILE *);
void funlockfile(FILE *);
int getc_unlocked(FILE *);
int getchar_unlocked(void);
int putc_unlocked(int, FILE *);
int putchar_unlocked(int);

# 317 "/usr/include/stdio.h" 3 4
#pragma GCC visibility pop
# 317 "/usr/include/stdio.h" 3 4









# 325 "/usr/include/stdio.h" 3 4
#pragma GCC visibility push(default)
# 325 "/usr/include/stdio.h" 3 4

int pclose(FILE *);
FILE *popen(const char *, const char *);

# 328 "/usr/include/stdio.h" 3 4
#pragma GCC visibility pop
# 328 "/usr/include/stdio.h" 3 4

# 339 "/usr/include/stdio.h" 3 4

# 339 "/usr/include/stdio.h" 3 4
#pragma GCC visibility push(default)
# 339 "/usr/include/stdio.h" 3 4

int snprintf(char * __restrict, size_t, const char * __restrict, ...)
  __attribute__((__format__ (__printf__, 3, 4)));
int vsnprintf(char * __restrict, size_t, const char * __restrict,
     __builtin_va_list)
  __attribute__((__format__ (__printf__, 3, 0)));

# 345 "/usr/include/stdio.h" 3 4
#pragma GCC visibility pop
# 345 "/usr/include/stdio.h" 3 4








# 352 "/usr/include/stdio.h" 3 4
#pragma GCC visibility push(default)
# 352 "/usr/include/stdio.h" 3 4

int getw(FILE *);
int putw(int, FILE *);


char *tempnam(const char *, const char *);


# 359 "/usr/include/stdio.h" 3 4
#pragma GCC visibility pop
# 359 "/usr/include/stdio.h" 3 4

# 368 "/usr/include/stdio.h" 3 4
typedef __off_t off_t;




# 372 "/usr/include/stdio.h" 3 4
#pragma GCC visibility push(default)
# 372 "/usr/include/stdio.h" 3 4

int fseeko(FILE *, __off_t, int);
__off_t ftello(FILE *);

# 375 "/usr/include/stdio.h" 3 4
#pragma GCC visibility pop
# 375 "/usr/include/stdio.h" 3 4









# 383 "/usr/include/stdio.h" 3 4
#pragma GCC visibility push(default)
# 383 "/usr/include/stdio.h" 3 4

int vscanf(const char * __restrict, __builtin_va_list)
  __attribute__((__format__ (__scanf__, 1, 0)));
int vfscanf(FILE * __restrict, const char * __restrict, __builtin_va_list)
  __attribute__((__format__ (__scanf__, 2, 0)));
int vsscanf(const char * __restrict, const char * __restrict,
    __builtin_va_list)
    __attribute__((__format__ (__scanf__, 2, 0)));

# 391 "/usr/include/stdio.h" 3 4
#pragma GCC visibility pop
# 391 "/usr/include/stdio.h" 3 4

# 405 "/usr/include/stdio.h" 3 4

# 405 "/usr/include/stdio.h" 3 4
#pragma GCC visibility push(default)
# 405 "/usr/include/stdio.h" 3 4

int asprintf(char ** __restrict, const char * __restrict, ...)
  __attribute__((__format__ (__printf__, 2, 3)));
char *fgetln(FILE * __restrict, size_t * __restrict);
char *fparseln(FILE *, size_t *, size_t *, const char[3], int);
int fpurge(FILE *);
void setbuffer(FILE *, char *, int);
int setlinebuf(FILE *);
int vasprintf(char ** __restrict, const char * __restrict,
    __builtin_va_list)
  __attribute__((__format__ (__printf__, 2, 0)));
const char *fmtcheck(const char *, const char *)
  __attribute__((__format_arg__ (2)));

# 418 "/usr/include/stdio.h" 3 4
#pragma GCC visibility pop
# 418 "/usr/include/stdio.h" 3 4






# 423 "/usr/include/stdio.h" 3 4
#pragma GCC visibility push(default)
# 423 "/usr/include/stdio.h" 3 4

FILE *funopen(const void *,
  int (*)(void *, char *, int),
  int (*)(void *, const char *, int),
  fpos_t (*)(void *, fpos_t, int),
  int (*)(void *));

# 429 "/usr/include/stdio.h" 3 4
#pragma GCC visibility pop
# 429 "/usr/include/stdio.h" 3 4









# 437 "/usr/include/stdio.h" 3 4
#pragma GCC visibility push(default)
# 437 "/usr/include/stdio.h" 3 4

int __srget(FILE *);
int __swbuf(int, FILE *);

# 440 "/usr/include/stdio.h" 3 4
#pragma GCC visibility pop
# 440 "/usr/include/stdio.h" 3 4








static __inline int __sputc(int _c, FILE *_p) {
 if (--_p->_w >= 0 || (_p->_w >= _p->_lbfsize && (char)_c != '\n'))
  return (*_p->_p++ = _c);
 else
  return (__swbuf(_c, _p));
}
# 496 "/usr/include/stdio.h" 3 4
int vdprintf(int, const char * __restrict, __builtin_va_list)
  __attribute__((__format__ (__printf__, 2, 0)));
int dprintf(int, const char * __restrict, ...)
  __attribute__((__format__ (__printf__, 2, 3)));
# 513 "/usr/include/stdio.h" 3 4
FILE *fmemopen(void * __restrict, size_t, const char * __restrict);
# 2 "precompile.c" 2
# 1 "/usr/pkg/gcc44/lib/gcc/i386-pc-minix/4.4.6/include-fixed/stdlib.h" 1 3 4
# 47 "/usr/pkg/gcc44/lib/gcc/i386-pc-minix/4.4.6/include-fixed/stdlib.h" 3 4
# 1 "/usr/include/sys/featuretest.h" 1 3 4
# 48 "/usr/pkg/gcc44/lib/gcc/i386-pc-minix/4.4.6/include-fixed/stdlib.h" 2 3 4


# 1 "/usr/pkg/gcc44/lib/gcc/i386-pc-minix/4.4.6/include-fixed/sys/types.h" 1 3 4
# 51 "/usr/pkg/gcc44/lib/gcc/i386-pc-minix/4.4.6/include-fixed/sys/types.h" 3 4
# 1 "/usr/include/sys/featuretest.h" 1 3 4
# 52 "/usr/pkg/gcc44/lib/gcc/i386-pc-minix/4.4.6/include-fixed/sys/types.h" 2 3 4


# 1 "/usr/include/machine/types.h" 1 3 4
# 41 "/usr/include/machine/types.h" 3 4
# 1 "/usr/include/sys/featuretest.h" 1 3 4
# 42 "/usr/include/machine/types.h" 2 3 4
# 73 "/usr/include/machine/types.h" 3 4
typedef __uint64_t paddr_t;
typedef __uint64_t psize_t;






typedef unsigned long vaddr_t;
typedef unsigned long vsize_t;





typedef int pmc_evid_t;
typedef __uint64_t pmc_ctr_t;
typedef int register_t;


typedef volatile unsigned char __cpu_simple_lock_t;
# 55 "/usr/pkg/gcc44/lib/gcc/i386-pc-minix/4.4.6/include-fixed/sys/types.h" 2 3 4







typedef __int8_t int8_t;




typedef __uint8_t uint8_t;




typedef __int16_t int16_t;




typedef __uint16_t uint16_t;




typedef __int32_t int32_t;




typedef __uint32_t uint32_t;




typedef __int64_t int64_t;




typedef __uint64_t uint64_t;



typedef __uint8_t u_int8_t;
typedef __uint16_t u_int16_t;
typedef __uint32_t u_int32_t;
typedef __uint64_t u_int64_t;


typedef __uint8_t u8_t;
typedef __uint16_t u16_t;
typedef __uint32_t u32_t;
typedef __uint64_t u64_t;

typedef __int8_t i8_t;
typedef __int16_t i16_t;
typedef __int32_t i32_t;
typedef __int64_t i64_t;

typedef __uint64_t big_ino_t;
typedef __int64_t big_off_t;
typedef u32_t big_dev_t;
typedef u32_t big_gid_t;
typedef u32_t big_mode_t;
typedef u32_t big_nlink_t;
typedef u32_t big_uid_t;



typedef u32_t zone_t;
typedef u32_t block_t;
typedef u32_t bit_t;
typedef u16_t zone1_t;
typedef u32_t bitchunk_t;
# 141 "/usr/pkg/gcc44/lib/gcc/i386-pc-minix/4.4.6/include-fixed/sys/types.h" 3 4
typedef unsigned long Ino_t;



# 1 "/usr/include/machine/endian.h" 1 3 4


# 1 "/usr/include/sys/endian.h" 1 3 4
# 37 "/usr/include/sys/endian.h" 3 4
# 1 "/usr/include/sys/featuretest.h" 1 3 4
# 38 "/usr/include/sys/endian.h" 2 3 4
# 55 "/usr/include/sys/endian.h" 3 4
# 1 "/usr/pkg/gcc44/lib/gcc/i386-pc-minix/4.4.6/include-fixed/sys/types.h" 1 3 4
# 56 "/usr/include/sys/endian.h" 2 3 4


typedef __in_addr_t in_addr_t;




typedef __in_port_t in_port_t;




# 67 "/usr/include/sys/endian.h" 3 4
#pragma GCC visibility push(default)
# 67 "/usr/include/sys/endian.h" 3 4

__uint32_t htonl(__uint32_t) __attribute__((__const__));
__uint16_t htons(__uint16_t) __attribute__((__const__));
__uint32_t ntohl(__uint32_t) __attribute__((__const__));
__uint16_t ntohs(__uint16_t) __attribute__((__const__));

# 72 "/usr/include/sys/endian.h" 3 4
#pragma GCC visibility pop
# 72 "/usr/include/sys/endian.h" 3 4






# 1 "/usr/include/machine/endian_machdep.h" 1 3 4
# 79 "/usr/include/sys/endian.h" 2 3 4
# 107 "/usr/include/sys/endian.h" 3 4
# 1 "/usr/include/machine/bswap.h" 1 3 4







# 1 "/usr/include/machine/byte_swap.h" 1 3 4
# 38 "/usr/include/machine/byte_swap.h" 3 4

# 38 "/usr/include/machine/byte_swap.h" 3 4
#pragma GCC visibility push(default)
# 38 "/usr/include/machine/byte_swap.h" 3 4



static __inline __uint32_t __byte_swap_u32_variable(__uint32_t);
static __inline __uint32_t
__byte_swap_u32_variable(__uint32_t x)
{
 __asm volatile (
     "bswap %1"
     : "=r" (x) : "0" (x));
 return (x);
}


static __inline __uint16_t __byte_swap_u16_variable(__uint16_t);
static __inline __uint16_t
__byte_swap_u16_variable(__uint16_t x)
{
 __asm volatile ("rorw $8, %w1" : "=r" (x) : "0" (x));
 return (x);
}


# 60 "/usr/include/machine/byte_swap.h" 3 4
#pragma GCC visibility pop
# 60 "/usr/include/machine/byte_swap.h" 3 4

# 9 "/usr/include/machine/bswap.h" 2 3 4


# 1 "/usr/include/sys/bswap.h" 1 3 4
# 12 "/usr/include/sys/bswap.h" 3 4
# 1 "/usr/include/machine/bswap.h" 1 3 4
# 13 "/usr/include/sys/bswap.h" 2 3 4


# 14 "/usr/include/sys/bswap.h" 3 4
#pragma GCC visibility push(default)
# 14 "/usr/include/sys/bswap.h" 3 4






__uint16_t bswap16(__uint16_t) __asm("__bswap16") __attribute__((__const__));
__uint32_t bswap32(__uint32_t) __asm("__bswap32") __attribute__((__const__));

__uint64_t bswap64(__uint64_t) __attribute__((__const__));

# 24 "/usr/include/sys/bswap.h" 3 4
#pragma GCC visibility pop
# 24 "/usr/include/sys/bswap.h" 3 4

# 12 "/usr/include/machine/bswap.h" 2 3 4
# 108 "/usr/include/sys/endian.h" 2 3 4
# 203 "/usr/include/sys/endian.h" 3 4
static __inline __attribute__((__unused__)) void be16enc(void *dst, __uint16_t u) { u = bswap16(((__uint16_t)((u)))); __builtin_memcpy(dst, &u, sizeof(u)); }
static __inline __attribute__((__unused__)) void be32enc(void *dst, __uint32_t u) { u = bswap32(((__uint32_t)((u)))); __builtin_memcpy(dst, &u, sizeof(u)); }
static __inline __attribute__((__unused__)) void be64enc(void *dst, __uint64_t u) { u = bswap64(((__uint64_t)((u)))); __builtin_memcpy(dst, &u, sizeof(u)); }
static __inline __attribute__((__unused__)) void le16enc(void *dst, __uint16_t u) { u = (u); __builtin_memcpy(dst, &u, sizeof(u)); }
static __inline __attribute__((__unused__)) void le32enc(void *dst, __uint32_t u) { u = (u); __builtin_memcpy(dst, &u, sizeof(u)); }
static __inline __attribute__((__unused__)) void le64enc(void *dst, __uint64_t u) { u = (u); __builtin_memcpy(dst, &u, sizeof(u)); }
# 220 "/usr/include/sys/endian.h" 3 4
static __inline __attribute__((__unused__)) __uint16_t be16dec(const void *buf) { __uint16_t u; __builtin_memcpy(&u, buf, sizeof(u)); return bswap16(((__uint16_t)((u)))); }
static __inline __attribute__((__unused__)) __uint32_t be32dec(const void *buf) { __uint32_t u; __builtin_memcpy(&u, buf, sizeof(u)); return bswap32(((__uint32_t)((u)))); }
static __inline __attribute__((__unused__)) __uint64_t be64dec(const void *buf) { __uint64_t u; __builtin_memcpy(&u, buf, sizeof(u)); return bswap64(((__uint64_t)((u)))); }
static __inline __attribute__((__unused__)) __uint16_t le16dec(const void *buf) { __uint16_t u; __builtin_memcpy(&u, buf, sizeof(u)); return (u); }
static __inline __attribute__((__unused__)) __uint32_t le32dec(const void *buf) { __uint32_t u; __builtin_memcpy(&u, buf, sizeof(u)); return (u); }
static __inline __attribute__((__unused__)) __uint64_t le64dec(const void *buf) { __uint64_t u; __builtin_memcpy(&u, buf, sizeof(u)); return (u); }
# 3 "/usr/include/machine/endian.h" 2 3 4
# 146 "/usr/pkg/gcc44/lib/gcc/i386-pc-minix/4.4.6/include-fixed/sys/types.h" 2 3 4


typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned int u_int;
typedef unsigned long u_long;

typedef unsigned char unchar;
typedef unsigned short ushort;
typedef unsigned int uint;
typedef unsigned long ulong;


typedef __uint64_t u_quad_t;
typedef __int64_t quad_t;
typedef quad_t * qaddr_t;
# 173 "/usr/pkg/gcc44/lib/gcc/i386-pc-minix/4.4.6/include-fixed/sys/types.h" 3 4
typedef __int64_t longlong_t;
typedef __uint64_t u_longlong_t;

typedef __int64_t blkcnt_t;
typedef __uint32_t blksize_t;


typedef __fsblkcnt_t fsblkcnt_t;




typedef __fsfilcnt_t fsfilcnt_t;






typedef __caddr_t caddr_t;
# 201 "/usr/pkg/gcc44/lib/gcc/i386-pc-minix/4.4.6/include-fixed/sys/types.h" 3 4
typedef __int64_t daddr_t;



typedef __uint32_t dev_t;
typedef __uint32_t fixpt_t;


typedef __gid_t gid_t;



typedef int idtype_t;
typedef __uint32_t id_t;
typedef unsigned long ino_t;
typedef long key_t;


typedef __mode_t mode_t;



typedef short nlink_t;







typedef __pid_t pid_t;



typedef __int32_t lwpid_t;
typedef unsigned long rlim_t;
typedef __int32_t segsz_t;
typedef __int32_t swblk_t;


typedef __uid_t uid_t;




typedef int mqd_t;

typedef unsigned long cpuid_t;

typedef int psetid_t;
# 298 "/usr/pkg/gcc44/lib/gcc/i386-pc-minix/4.4.6/include-fixed/sys/types.h" 3 4

# 298 "/usr/pkg/gcc44/lib/gcc/i386-pc-minix/4.4.6/include-fixed/sys/types.h" 3 4
#pragma GCC visibility push(default)
# 298 "/usr/pkg/gcc44/lib/gcc/i386-pc-minix/4.4.6/include-fixed/sys/types.h" 3 4

__off_t lseek(int, __off_t, int);
int ftruncate(int, __off_t);
int truncate(const char *, __off_t);

# 302 "/usr/pkg/gcc44/lib/gcc/i386-pc-minix/4.4.6/include-fixed/sys/types.h" 3 4
#pragma GCC visibility pop
# 302 "/usr/pkg/gcc44/lib/gcc/i386-pc-minix/4.4.6/include-fixed/sys/types.h" 3 4






typedef __int32_t __devmajor_t, __devminor_t;
# 324 "/usr/pkg/gcc44/lib/gcc/i386-pc-minix/4.4.6/include-fixed/sys/types.h" 3 4
typedef long clock_t;
# 344 "/usr/pkg/gcc44/lib/gcc/i386-pc-minix/4.4.6/include-fixed/sys/types.h" 3 4
typedef long time_t;




typedef int clockid_t;
# 361 "/usr/pkg/gcc44/lib/gcc/i386-pc-minix/4.4.6/include-fixed/sys/types.h" 3 4
typedef long suseconds_t;




typedef long useconds_t;




# 1 "/usr/include/sys/fd_set.h" 1 3 4
# 38 "/usr/include/sys/fd_set.h" 3 4
# 1 "/usr/include/sys/featuretest.h" 1 3 4
# 39 "/usr/include/sys/fd_set.h" 2 3 4
# 1 "/usr/include/sys/syslimits.h" 1 3 4



# 1 "/usr/include/minix/limits.h" 1 3 4
# 5 "/usr/include/sys/syslimits.h" 2 3 4
# 1 "/usr/include/sys/featuretest.h" 1 3 4
# 6 "/usr/include/sys/syslimits.h" 2 3 4
# 40 "/usr/include/sys/fd_set.h" 2 3 4







typedef __int32_t __fd_mask;
# 64 "/usr/include/sys/fd_set.h" 3 4
typedef struct fd_set {
 __fd_mask fds_bits[(((255) + ((((unsigned int)sizeof(__fd_mask) * 8)) - 1)) / (((unsigned int)sizeof(__fd_mask) * 8)))];
} fd_set;
# 372 "/usr/pkg/gcc44/lib/gcc/i386-pc-minix/4.4.6/include-fixed/sys/types.h" 2 3 4


typedef struct kauth_cred *kauth_cred_t;

typedef int pri_t;
# 51 "/usr/pkg/gcc44/lib/gcc/i386-pc-minix/4.4.6/include-fixed/stdlib.h" 2 3 4
# 67 "/usr/pkg/gcc44/lib/gcc/i386-pc-minix/4.4.6/include-fixed/stdlib.h" 3 4
typedef int wchar_t;





typedef struct {
 int quot;
 int rem;
} div_t;

typedef struct {
 long quot;
 long rem;
} ldiv_t;




typedef struct {

 long long int quot;

 long long int rem;
} lldiv_t;



typedef struct {
 quad_t quot;
 quad_t rem;
} qdiv_t;
# 109 "/usr/pkg/gcc44/lib/gcc/i386-pc-minix/4.4.6/include-fixed/stdlib.h" 3 4
extern size_t __mb_cur_max;



# 112 "/usr/pkg/gcc44/lib/gcc/i386-pc-minix/4.4.6/include-fixed/stdlib.h" 3 4
#pragma GCC visibility push(default)
# 112 "/usr/pkg/gcc44/lib/gcc/i386-pc-minix/4.4.6/include-fixed/stdlib.h" 3 4

__attribute__((__noreturn__)) void _Exit(int);
__attribute__((__noreturn__)) void abort(void);
__attribute__((__pure__)) int abs(int);
int atexit(void (*)(void));
double atof(const char *);
int atoi(const char *);
long atol(const char *);



void *bsearch(const void *, const void *, size_t, size_t,
    int (*)(const void *, const void *));

void *calloc(size_t, size_t);
div_t div(int, int);
__attribute__((__noreturn__)) void exit(int);
void free(void *);
 char *getenv(const char *);
__attribute__((__pure__)) long
  labs(long);
ldiv_t ldiv(long, long);
void *malloc(size_t);
void qsort(void *, size_t, size_t, int (*)(const void *, const void *));
int rand(void);
void *realloc(void *, size_t);
void srand(unsigned);
double strtod(const char * __restrict, char ** __restrict);
long strtol(const char * __restrict, char ** __restrict, int);
unsigned long
  strtoul(const char * __restrict, char ** __restrict, int);
int system(const char *);


int mblen(const char *, size_t);
size_t mbstowcs(wchar_t * __restrict, const char * __restrict, size_t);
int wctomb(char *, wchar_t);
int mbtowc(wchar_t * __restrict, const char * __restrict, size_t);
size_t wcstombs(char * __restrict, const wchar_t * __restrict, size_t);
# 161 "/usr/pkg/gcc44/lib/gcc/i386-pc-minix/4.4.6/include-fixed/stdlib.h" 3 4
int rand_r(unsigned int *);







double drand48(void);
double erand48(unsigned short[3]);
long jrand48(unsigned short[3]);
void lcong48(unsigned short[7]);
long lrand48(void);
long mrand48(void);
long nrand48(unsigned short[3]);
unsigned short *
  seed48(unsigned short[3]);
void srand48(long);

int putenv(char *);
# 189 "/usr/pkg/gcc44/lib/gcc/i386-pc-minix/4.4.6/include-fixed/stdlib.h" 3 4
long a64l(const char *);
char *l64a(long);

char *initstate(unsigned long, char *, size_t);
long random(void);
char *setstate(char *);
void srandom(unsigned long);




char *mkdtemp(char *);
int mkstemp(char *);
char *mktemp(char *)



 ;

int setkey(const char *);

char *realpath(const char *, char *);

int ttyslot(void);

void *valloc(size_t);

int grantpt(int);
int unlockpt(int);
char *ptsname(int);
# 227 "/usr/pkg/gcc44/lib/gcc/i386-pc-minix/4.4.6/include-fixed/stdlib.h" 3 4
long long int atoll(const char *);

long long int llabs(long long int);

lldiv_t lldiv(long long int, long long int);

long long int strtoll(const char * __restrict, char ** __restrict, int);

unsigned long long int
  strtoull(const char * __restrict, char ** __restrict, int);
float strtof(const char * __restrict, char ** __restrict);
long double strtold(const char * __restrict, char ** __restrict);







int setenv(const char *, const char *, int);

int unsetenv(const char *) __asm("__unsetenv13");


int posix_openpt(int);
int posix_memalign(void **, size_t, size_t);
# 270 "/usr/pkg/gcc44/lib/gcc/i386-pc-minix/4.4.6/include-fixed/stdlib.h" 3 4
__uint32_t arc4random(void);
void arc4random_stir(void);
void arc4random_addrandom(u_char *, int);
char *getbsize(int *, long *);
char *cgetcap(char *, const char *, int);
int cgetclose(void);
int cgetent(char **, const char * const *, const char *);
int cgetfirst(char **, const char * const *);
int cgetmatch(const char *, const char *);
int cgetnext(char **, const char * const *);
int cgetnum(char *, const char *, long *);
int cgetset(const char *);
int cgetstr(char *, const char *, char **);
int cgetustr(char *, const char *, char **);
void csetexpandtc(int);

int daemon(int, int);
# 301 "/usr/pkg/gcc44/lib/gcc/i386-pc-minix/4.4.6/include-fixed/stdlib.h" 3 4
int humanize_number(char *, size_t, __int64_t, const char *, int, int);
int dehumanize_number(const char *, __int64_t *);




int getloadavg(double [], int);

int getenv_r(const char *, char *, size_t);

void cfree(void *);

int heapsort(void *, size_t, size_t, int (*)(const void *, const void *));
int mergesort(void *, size_t, size_t,
     int (*)(const void *, const void *));
int radixsort(const unsigned char **, int, const unsigned char *,
     unsigned);
int sradixsort(const unsigned char **, int, const unsigned char *,
     unsigned);

void mi_vector_hash(const void * __restrict, size_t, __uint32_t,
     __uint32_t[3]);

void setproctitle(const char *, ...)
     __attribute__((__format__ (__printf__, 1, 2)));
const char *getprogname(void) __attribute__((__const__));
void setprogname(const char *);

quad_t qabs(quad_t);
quad_t strtoq(const char * __restrict, char ** __restrict, int);
u_quad_t strtouq(const char * __restrict, char ** __restrict, int);


long long strsuftoll(const char *, const char *, long long, long long);

long long strsuftollx(const char *, const char *, long long, long long,
       char *, size_t);

int l64a_r(long, char *, int);

size_t shquote(const char *, char *, size_t);
size_t shquotev(int, char * const *, char *, size_t);




qdiv_t qdiv(quad_t, quad_t);


# 349 "/usr/pkg/gcc44/lib/gcc/i386-pc-minix/4.4.6/include-fixed/stdlib.h" 3 4
#pragma GCC visibility pop
# 349 "/usr/pkg/gcc44/lib/gcc/i386-pc-minix/4.4.6/include-fixed/stdlib.h" 3 4

# 3 "precompile.c" 2

int main(int argc, char **argv)
{
    printf("Hello\n");

}
