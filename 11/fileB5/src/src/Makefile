all: file
top_srcdir = ..
HDR = $(top_srcdir)/src/magic.h.in

CFLAGS += -g -DHAVE_CONFIG_H -I. -I.. -gdwarf-2

LIBOBJ = \
    apprentice.o \
    apptype.o \
    ascmagic.o \
    asctime_r.o \
    asprintf.o \
    buffer.o \
    cdf.o \
    cdf_time.o \
    compress.o \
    ctime_r.o \
    der.c \
    dprintf.c \
    encoding.o \
    file.o \
    fmtcheck.o \
    fsmagic.o \
    funcs.o \
    getline.o \
    getopt_long.o \
    gmtime_r.c \
    is_json.c \
    is_tar.o \
    localtime_r.c \
    magic.o \
    pread.o \
    print.o \
    readcdf.o \
    readelf.o \
    seccomp.c \
    softmagic.o \
    strcasestr.o \
    strlcat.o \
    strlcpy.o \
    teststrchr.c \
    vasprintf.o


%.o : %.c
	$(CC) $(CFLAGS) -c $<  -fPIC -DPIC -o $@

magic.h : ${HDR}
	sed -e "s/X.YY/$$(echo 5.35 | tr -d .)/" < ${HDR} > $@

file : magic.h $(LIBOBJ)
	 $(CC) -g $(CFLAGS) -o $@ $(LIBOBJ) -lz

clean : 
	rm -f *.o \
	rm -f *.so \
	rm -f *.Tpo \
	rm -f file
