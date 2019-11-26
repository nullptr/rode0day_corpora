all: sqlite

CFLAGS += -m32 -g -gdwarf-2 -w -DHAVE_MREMAP=0 -DSQLITE_DISABLE_INTRINSIC
LDFLAGS += -lpthread -ldl

LIBOBJ = \
    sqlite3-pre.o \
    shell-pre.o


.SECONDARY:
%-pre.c :
	$(CC) $(CFLAGS) -D'__attribute__(x)=' -include stdio.h  -E $<  -o $@ $(shell echo "$@" | sed -e "s/-pre//")
	sed -i '/^#/ d' $@

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@ $(LDFLAGS)

sqlite : $(LIBOBJ)
	 $(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

preclean : 
	rm -f *-pre.c

clean : 
	rm -f *.o \
	rm -f sqlite
