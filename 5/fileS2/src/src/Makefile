all: file
top_srcdir = ..
HDR = $(top_srcdir)/src/magic.h.in

# Having some issues with make CFLAGS+=m32 clobbering these
# so make them seperate
_CFLAGS=-m32 -g -DHAVE_CONFIG_H -I. -I..

LIBOBJ = \
    apprentice-pre.o \
    apptype-pre.o \
    ascmagic-pre.o \
    asctime_r-pre.o \
    asprintf-pre.o \
    cdf-pre.o \
    cdf_time-pre.o \
    compress-pre.o \
    ctime_r-pre.o \
    encoding-pre.o \
    file-pre.o \
    fmtcheck-pre.o \
    fsmagic-pre.o \
    funcs-pre.o \
    getline-pre.o \
    getopt_long-pre.o \
    is_tar-pre.o \
    magic-pre.o \
    pread-pre.o \
    print-pre.o \
    readcdf-pre.o \
    readelf-pre.o \
    softmagic-pre.o \
    strcasestr-pre.o \
    strlcat-pre.o \
    strlcpy-pre.o \
    vasprintf-pre.o

.SECONDARY:
%-pre.c :
	$(CC) $(CFLAGS) $(_CFLAGS) -include stdio.h -DHAVE_CONFIG_H -I. -I.. -E $<  -o $@ $(shell echo "$@" | sed -e "s/-pre//")
	sed -i '/^#/ d' $@

%.o : %.c
	$(CC) $(CFLAGS) $(_CFLAGS) -c $<  -fPIC -DPIC -o $@

magic.h : ${HDR}
	sed -e "s/X.YY/$$(echo 5.22 | tr -d .)/" < ${HDR} > $@

libmagic.so : magic.h $(LIBOBJ)
	$(CC) -shared $(CFLAGS) $(_CFLAGS) -fPIC -DPIC $< -lz -Wl,-soname -Wl,libmagic.so.1 -o $@

file : magic.h $(LIBOBJ)
	 $(CC) -g $(_CFLAGS) -o $@ $^ -lz

preclean : 
	rm -f *-pre.c
	rm -f *-pre.h

clean : 
	rm -f *.o \
	rm -f *.so \
	rm -f *.Tpo \
	rm -f file

