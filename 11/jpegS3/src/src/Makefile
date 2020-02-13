all : jpeg

CFLAGS  += -O0 -DHAVE_CONFIG_H -I. -g -gdwarf-2

LIBOBJ = \
	jaricom.o jcapimin.o jcapistd.o jcarith.o jccoefct.o \
	jccolor.o jcdctmgr.o jchuff.o jcinit.o jcmainct.o \
	jcmarker.o jcmaster.o jcomapi.o jcparam.o jcprepct.o \
	jcsample.o 	jctrans.o jdapimin.o jdapistd.o jdarith.o \
	jdatadst.o 	jdatasrc.o jdcoefct.o jdcolor.o jddctmgr.o \
	jdhuff.o jdinput.o 	jdmainct.o jdmarker.o jdmaster.o \
	jdmerge.o jdpostct.o jdsample.o jdtrans.o jerror.o \
	jfdctflt.o jfdctfst.o jfdctint.o jidctflt.o jidctfst.o \
	jidctint.o jquant1.o jquant2.o jutils.o jmemmgr.o \
	jmemansi.o

%.o : %.c
	$(CC) $(CFLAGS) -c -o $@ $<


jpeg: $(LIBOBJ) example.o
	$(CC) $(CFLAGS) -o jpeg $^

clean:
	rm -f *.o \
	rm -f jpeg
