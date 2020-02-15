all: sqlite

CFLAGS += -w -g -gdwarf-2 -DHAVE_MREMAP=0 -DSQLITE_DISABLE_INTRINSIC
LDFLAGS += -lpthread -ldl

LIBOBJ = \
    sqlite3.o \
    shell.o


%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@ $(LDFLAGS)

sqlite : $(LIBOBJ)
	 $(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

preclean : 
	rm -f *-pre.c

clean : 
	rm -f *.o \
	rm -f sqlite
