all: grep

CFLAGS += -O0 -DHAVE_CONFIG_H -I. -I.. -g -gdwarf-2

LIBOBJ = \
	argmatch-pre.o \
	binary-io-pre.o \
	bitrotate-pre.o \
	c-ctype-pre.o \
	c-strcasecmp-pre.o \
	c-strncasecmp-pre.o \
	cloexec-pre.o \
	close-stream-pre.o \
	closeout-pre.o \
	cycle-check-pre.o \
	dfa-pre.o \
	localeinfo-pre.o \
	opendir-safer-pre.o \
	dirname-lgpl-pre.o \
	basename-lgpl-pre.o \
	stripslash-pre.o \
	exclude-pre.o \
	exitfail-pre.o \
	creat-safer-pre.o \
	open-safer-pre.o \
	fd-hook-pre.o \
	filenamecat-lgpl-pre.o \
	getprogname-pre.o \
	hard-locale-pre.o \
	hash-pre.o \
	i-ring-pre.o \
	localcharset-pre.o \
	malloca-pre.o \
	mbchar-pre.o \
	mbiter-pre.o \
	mbscasecmp-pre.o \
	mbslen-pre.o \
	mbsstr-pre.o \
	mbuiter-pre.o \
	memchr2-pre.o \
	openat-die-pre.o \
	openat-safer-pre.o \
	propername-pre.o \
	quotearg-pre.o \
	safe-read-pre.o \
	save-cwd-pre.o \
	striconv-pre.o \
	strnlen1-pre.o \
	trim-pre.o \
	unistd-pre.o \
	dup-safer-pre.o \
	fd-safer-pre.o \
	pipe-safer-pre.o \
	glthread/lock-pre.o \
	glthread/threadlib-pre.o \
	unistr/u8-mbtoucr-pre.o \
	unistr/u8-uctomb-pre.o \
	unistr/u8-uctomb-aux-pre.o \
	uniwidth/width-pre.o \
	version-etc-pre.o \
	version-etc-fsf-pre.o \
	wctype-h-pre.o \
	xmalloc-pre.o \
	xalloc-die-pre.o \
	xbinary-io-pre.o \
	xstriconv-pre.o \
	xstrtoimax-pre.o \
	xstrtol-pre.o \
	xstrtoul-pre.o \
	xstrtol-error-pre.o \
	colorize-pre.o \
	chdir-long-pre.o \
	fcntl-pre.o \
	fts-pre.o \
	getopt-pre.o \
	getopt1-pre.o \
	mbrlen-pre.o \
	mbrtowc-pre.o \
	obstack-pre.o \
	openat-proc-pre.o \
	dfasearch-pre.o \
	kwsearch-pre.o \
	kwset-pre.o \
	pcresearch-pre.o \
	searchutils-pre.o \
	grep-pre.o

.SECONDARY:
%-pre.c :
	$(CC) $(CFLAGS) -include stdio.h -E -o $@ $(shell echo "$@" | sed -e "s/-pre//")
	sed -i '/^#/ d' $@
	#sed -i '/^extern __typeof__ (gets).*#/ d' $@ # This line is bad

%.o : %.c
	$(CC) $(CFLAGS) -I.. -c -o $@ $<

grep : $(LIBOBJ)
	$(CC) $(CFLAGS) -o grep $^ -lpthread

preclean : 
	rm -f *-pre.c
	rm -f *-pre.h

clean : 
	rm -f *.o \
	rm -f */*.o \
	rm -f *.so \
	rm -f grep \
	rm -f *.Tpo \
	rm -f *.a

