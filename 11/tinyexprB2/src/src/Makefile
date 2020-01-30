PREOBJS=main-pre.o tinyexpr-pre.o
PRESRCS=main-pre.c tinyexpr-pre.c
PREHDR=tinyexpr.h.gch
LIBS=-lm
CFLAGS += -g
MAIN=main
BINNAME=math

all: ${PREHDR} ${PREOBJS} ${BINNAME} 

%.h.gch: %.h
	$(CC) $(CFLAGS) -E -o $@ $(shell echo "$@" | sed -e "s/.gch//")
	sed -i '/^#/ d' $@

.SECONDARY:
%-pre.c : %.c
	$(CC) $(CFLAGS) -E -o $@ $(shell echo "$@" | sed -e "s/-pre//")
	sed -i '/^#/ d' $@

%.o : %.c
	$(CC) $(CFLAGS) -c -o $@ $< 


${BINNAME}: $(PREOBJS)
	$(CC) $(CFLAGS) -o $@ $^ $(LIBS)

clean:
	rm -f ${BINNAME} ${MAIN}.o $(PREOBJS)

preclean:
	rm -f tweetNaCl $(PRESRCS) $(PREHDR)
