all: file file.pt
top_srcdir = ..
HDR = $(top_srcdir)/src/magic.h.in

CFLAGS += -g -DHAVE_CONFIG_H -I. -I.. -gdwarf-2

LIBOBJ = \
    apprentice-pre.o \
    apptype-pre.o \
    ascmagic-pre.o \
    asctime_r-pre.o \
    asprintf-pre.o \
    buffer-pre.o \
    cdf-pre.o \
    cdf_time-pre.o \
    compress-pre.o \
    ctime_r-pre.o \
    der-pre.o \
    dprintf-pre.o \
    encoding-pre.o \
    file-pre.o \
    fmtcheck-pre.o \
    fsmagic-pre.o \
    funcs-pre.o \
    getline-pre.o \
    getopt_long-pre.o \
    gmtime_r-pre.o \
    is_json-pre.o \
    is_tar-pre.o \
    localtime_r-pre.o \
    magic-pre.o \
    pread-pre.o \
    print-pre.o \
    readcdf-pre.o \
    readelf-pre.o \
    seccomp-pre.o \
    softmagic-pre.o \
    strcasestr-pre.o \
    strlcat-pre.o \
    strlcpy-pre.o \
    teststrchr-pre.o \
    vasprintf-pre.o

LIBBC = $(patsubst %.o,%.bc,$(LIBOBJ))

.SECONDARY:
%-pre.c :
	$(CC) $(CFLAGS) -D'__attribute__(x)=' -include stdio.h -DHAVE_CONFIG_H -I. -I.. -E $<  -o $@ $(shell echo "$@" | sed -e "s/-pre//")
	sed -i '/^#/ d' $@

%.o : %.c
	$(CC) $(CFLAGS) -c $<  -fPIC -DPIC -o $@

%.bc : %.c
	$(CC) $(CFLAGS) -c $< -fPIC -DPIC -o $@.opt -emit-llvm
	opt -load-pass-plugin ${PREDICATE_TRACE_PLUGIN_PATH} -passes predicate-trace -o $@ $@.opt

magic.h : ${HDR}
	sed -e "s/X.YY/$$(echo 5.35 | tr -d .)/" < ${HDR} > $@

file : magic.h $(LIBOBJ)
	$(CC) -g $(CFLAGS) -o $@ $(LIBOBJ) -lz

file.pt : magic.h $(LIBBC)
	$(CC) -g $(CFLAGS) -o $@ $(LIBBC) -lz -L${PREDICATE_TRACE_SUPPORT_PATH} -lpredicate_trace_support

preclean : 
	rm -f *-pre.c
	rm -f *-pre.h

clean : 
	rm -f *.o \
	rm -f *.bc \
	rm -f *.so \
	rm -f *.Tpo \
	rm -f file file.pt
