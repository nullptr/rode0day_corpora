all: libyaml

CFLAGS += -O0 -m32 -DHAVE_CONFIG_H -I. -I.. -I../include -g -gdwarf-2

LIBOBJ = \
	api-pre.o \
	reader-pre.o \
	scanner-pre.o \
	parser-pre.o \
	loader-pre.o \
	writer-pre.o \
	emitter-pre.o \
	dumper-pre.o \
    deconstruct-pre.o

.SECONDARY:
%-pre.c :
	gcc -include stdio.h $(CFLAGS) -E -o  $@ $(shell echo "$@" | sed -e "s/-pre//")
	sed -i '/^#/ d' $@

%.o : %.c
	$(CC) $(CFLAGS) -c -o $@ $< 

libyaml : $(LIBOBJ)
	$(CC) $(CFLAGS) -o libyaml $^

preclean : 
	rm -f *-pre.c
	rm -f *-pre.h

clean : 
	rm -f libyaml \
	rm -f *.o \
	rm -f *.so \
	rm -f grep \
	rm -f *.Tpo 
