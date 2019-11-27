LIBS = -lm

PREOBJS = \
    duktape-pre.o \
    duk_cmdline-pre.o \
    duk_print_alert-pre.o  \
    duk_console-pre.o \
    duk_logging-pre.o \
    duk_module_duktape-pre.o

OBJS = \
    duktape.o \
    duk_cmdline.o \
    duk_print_alert.o  \
    duk_console.o \
    duk_logging.o \
    duk_module_duktape.o

PRESRCS = \
    duktape-pre.c \
    duk_cmdline-pre.c \
    duk_print_alert-pre.c  \
    duk_console-pre.c \
    duk_logging-pre.c \
    duk_module_duktape-pre.c

CFLAGS += -g -O0
CFLAGS += -I./examples/cmdline -I./src
CFLAGS += -DDUK_CMDLINE_PRINTALERT_SUPPORT
CFLAGS += -DDUK_CMDLINE_CONSOLE_SUPPORT
CFLAGS += -DDUK_CMDLINE_LOGGING_SUPPORT
CFLAGS += -DDUK_CMDLINE_MODULE_SUPPORT

all: duk

.SECONDARY:
%-pre.c :
	$(CC) $(CFLAGS) -E -o $@ $(shell echo "$@" | sed -e "s/-pre//")
	sed -i '/^#/ d' $@

%.o : %.c
	$(CC) $(CFLAGS) -c -o $@ $< 

duk:  $(PREOBJS)
	$(CC) $(CFLAGS) -o $@ $^ $(LIBS)

nopre:  $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^ $(LIBS)

clean:
	rm -f duk $(PREOBJS) $(OBJS)

pre: $(PRESRCS)
	 echo "Built preobjs"

preclean:
	rm -f duk $(OBJS) $(PREOBJS) $(PRESRCS)
