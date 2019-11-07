all: newgrep

CFLAGS += -O0 -DHAVE_CONFIG_H -I. -I.. -g -gdwarf-2

LIBOBJ = \
	argmatch.o \
	binary-io.o \
	bitrotate.o \
	c-ctype.o \
	c-strcasecmp.o \
	c-strncasecmp.o \
	cloexec.o \
	close-stream.o \
	closeout.o \
	cycle-check.o \
	dfa.o \
	localeinfo.o \
	opendir-safer.o \
	dirname-lgpl.o \
	basename-lgpl.o \
	stripslash.o \
	exclude.o \
	exitfail.o \
	creat-safer.o \
	open-safer.o \
	fd-hook.o \
	filenamecat-lgpl.o \
	getprogname.o \
	hard-locale.o \
	hash.o \
	i-ring.o \
	localcharset.o \
	malloca.o \
	mbchar.o \
	mbiter.o \
	mbscasecmp.o \
	mbslen.o \
	mbsstr.o \
	mbuiter.o \
	memchr2.o \
	openat-die.o \
	openat-safer.o \
	propername.o \
	quotearg.o \
	safe-read.o \
	save-cwd.o \
	striconv.o \
	strnlen1.o \
	trim.o \
	unistd.o \
	dup-safer.o \
	fd-safer.o \
	pipe-safer.o \
	glthread/lock.o \
	glthread/threadlib.o \
	unistr/u8-mbtoucr.o \
	unistr/u8-uctomb.o \
	unistr/u8-uctomb-aux.o \
	uniwidth/width.o \
	version-etc.o \
	version-etc-fsf.o \
	wctype-h.o \
	xmalloc.o \
	xalloc-die.o \
	xbinary-io.o \
	xstriconv.o \
	xstrtoimax.o \
	xstrtol.o \
	xstrtoul.o \
	xstrtol-error.o \
	colorize.o \
	chdir-long.o \
	fcntl.o \
	fts.o \
	mbrlen.o \
	mbrtowc.o \
	obstack.o \
	openat-proc.o \
	dfasearch.o \
	kwsearch.o \
	kwset.o \
	pcresearch.o \
	searchutils.o \
	grep.o

%.o : %.c
	$(CC) $(CFLAGS) -I.. -c -o $@ $<

newgrep : $(LIBOBJ)
	$(CC) $(CFLAGS) -o $@ $^ -lpthread

clean : 
	rm -f *.o \
	rm -f ./*/*.o \
	rm -f *.so \
	rm -f newgrep \
	rm -f *.Tpo \
	rm -f *.a

