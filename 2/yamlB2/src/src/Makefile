all: deconstruct

CFLAGS += -O0 -DHAVE_CONFIG_H -I. -I.. -I../include -g -gdwarf-2

LIBOBJ = \
	api.o \
	reader.o \
	scanner.o \
	parser.o \
	loader.o \
	writer.o \
	emitter.o \
	dumper.o \
	deconstructor.o

.SECONDARY:
%-pre.c :
	gcc -include stdio.h $(CFLAGS) -E -o  $@ $(shell echo "$@" | sed -e "s/-pre//")
	sed -i '/^#/ d' $@

%.o : %.c
	$(CC) $(CFLAGS) -c -o $@ $< 

deconstruct : $(LIBOBJ)
	$(CC) $(CFLAGS) -o deconstruct $^

preclean : 
	rm -f *-pre.c
	rm -f *-pre.h

clean : 
	rm -f deconstruct \
	rm -f *.o \
	rm -f *.so \
	rm -f grep \
	rm -f *.Tpo 
