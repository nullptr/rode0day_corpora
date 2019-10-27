#!/bin/bash

rm -rf rebuilt

set -x
set -e
CC=${CC:-gcc}
CFLAGS=${CFLAGS:--m32 -g}

cd src/lib

	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o argmatch.o  argmatch.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o binary-io.o  binary-io.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o bitrotate.o  bitrotate.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o c-ctype.o  c-ctype.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o c-strcasecmp.o  c-strcasecmp.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o c-strncasecmp.o  c-strncasecmp.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o cloexec.o  cloexec.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o close-stream.o  close-stream.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o closeout.o  closeout.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o cycle-check.o  cycle-check.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o opendir-safer.o  opendir-safer.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o dirname-lgpl.o  dirname-lgpl.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o basename-lgpl.o  basename-lgpl.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o stripslash.o  stripslash.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o exclude.o  exclude.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o exitfail.o  exitfail.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o creat-safer.o  creat-safer.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o open-safer.o  open-safer.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o fd-hook.o  fd-hook.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o filenamecat-lgpl.o  filenamecat-lgpl.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o hash.o  hash.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o i-ring.o  i-ring.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o localcharset.o  localcharset.c && \
/bin/mkdir -p glthread
: > glthread/.dirstamp
/bin/mkdir -p glthread/.deps
: > glthread/.deps/.dirstamp
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o glthread/lock.o  glthread/lock.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o malloca.o  malloca.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o mbchar.o  mbchar.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o mbiter.o  mbiter.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o mbscasecmp.o  mbscasecmp.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o mbslen.o  mbslen.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o mbsstr.o  mbsstr.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o mbuiter.o  mbuiter.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o openat-die.o  openat-die.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o openat-safer.o  openat-safer.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o progname.o  progname.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o propername.o  propername.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o quotearg.o  quotearg.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o safe-read.o  safe-read.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o save-cwd.o  save-cwd.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o striconv.o  striconv.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o strnlen1.o  strnlen1.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o glthread/threadlib.o  glthread/threadlib.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o trim.o  trim.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o unistd.o  unistd.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o dup-safer.o  dup-safer.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o fd-safer.o  fd-safer.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o pipe-safer.o  pipe-safer.c && \
/bin/mkdir -p unistr
: > unistr/.dirstamp
/bin/mkdir -p unistr/.deps
: > unistr/.deps/.dirstamp
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o unistr/u8-mbtoucr.o  unistr/u8-mbtoucr.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o unistr/u8-uctomb.o  unistr/u8-uctomb.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o unistr/u8-uctomb-aux.o  unistr/u8-uctomb-aux.c && \
/bin/mkdir -p uniwidth
: > uniwidth/.dirstamp
/bin/mkdir -p uniwidth/.deps
: > uniwidth/.deps/.dirstamp
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o uniwidth/width.o  uniwidth/width.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o version-etc.o  version-etc.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o version-etc-fsf.o  version-etc-fsf.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o wctype-h.o  wctype-h.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o xmalloc.o  xmalloc.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o xalloc-die.o  xalloc-die.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o xstriconv.o  xstriconv.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o xstrtoimax.o  xstrtoimax.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o xstrtol.o  xstrtol.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o xstrtoul.o  xstrtoul.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o xstrtol-error.o  xstrtol-error.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o colorize.o  colorize.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o chdir-long.o  chdir-long.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o fcntl.o  fcntl.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o fts.o  fts.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..        -c -o openat-proc.o  openat-proc.c && \

rm -f libgreputils.a
ar cru libgreputils.a argmatch.o binary-io.o bitrotate.o c-ctype.o c-strcasecmp.o c-strncasecmp.o cloexec.o close-stream.o closeout.o cycle-check.o opendir-safer.o dirname-lgpl.o basename-lgpl.o stripslash.o exclude.o exitfail.o creat-safer.o open-safer.o fd-hook.o filenamecat-lgpl.o hash.o i-ring.o localcharset.o glthread/lock.o malloca.o mbchar.o mbiter.o mbscasecmp.o mbslen.o mbsstr.o mbuiter.o openat-die.o openat-safer.o progname.o propername.o quotearg.o safe-read.o save-cwd.o striconv.o strnlen1.o glthread/threadlib.o trim.o unistd.o dup-safer.o fd-safer.o pipe-safer.o unistr/u8-mbtoucr.o unistr/u8-uctomb.o unistr/u8-uctomb-aux.o uniwidth/width.o version-etc.o version-etc-fsf.o wctype-h.o xmalloc.o xalloc-die.o xstriconv.o xstrtoimax.o xstrtol.o xstrtoul.o xstrtol-error.o colorize.o chdir-long.o fcntl.o fts.o openat-proc.o   
ranlib libgreputils.a
cd ..
cd src
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..  -I../lib -I../lib      -c -o kwset.o  kwset.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..  -I../lib -I../lib      -c -o dfa.o  dfa.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..  -I../lib -I../lib      -c -o searchutils.o  searchutils.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..  -I../lib -I../lib      -c -o dfasearch.o  dfasearch.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..  -I../lib -I../lib      -c -o kwsearch.o  kwsearch.c && \
	${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..  -I../lib -I../lib      -c -o pcresearch.o  pcresearch.c && \
rm -f libgrep.a
ar cru libgrep.a kwset.o dfa.o searchutils.o dfasearch.o kwsearch.o pcresearch.o 
ranlib libgrep.a
  ${CC} ${CFLAGS} -std=gnu11 -DHAVE_CONFIG_H -I. -I..  -I../lib -I../lib      -c -o grep.o  grep.c && \
  ${CC} ${CFLAGS} -std=gnu11 -o newgrep grep.o libgrep.a ../lib/libgreputils.a
cd ../..
mkdir -p rebuilt/bin
cp src/src/newgrep rebuilt/bin
