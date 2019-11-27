.PHONY: all preclean clean

all: libpcap.a

CFLAGS += -O0 -g -fvisibility=hidden -fpic -DBUILDING_PCAP -Dpcap_EXPORTS -DHAVE_CONFIG_H -I. -gdwarf-2

LIBOBJ += \
	pcap-linux-pre.o pcap-usb-linux-pre.o pcap-netfilter-linux-pre.o \
	fad-getad-pre.o pcap-pre.o gencode-pre.o optimize-pre.o \
	nametoaddr-pre.o etherent-pre.o fmtutils-pre.o savefile-pre.o \
	sf-pcap-pre.o sf-pcapng-pre.o pcap-common-pre.o bpf_image-pre.o \
	bpf_filter-pre.o bpf_dump-pre.o scanner-pre.o grammar-pre.o


.SECONDARY:
%-pre.c :
	$(CC) $(CFLAGS) -D'__attribute__(x)=' -include stdio.h -DHAVE_CONFIG_H -E $<  -o $@ $(shell echo "$@" | sed -e "s/-pre//")
	sed -i '/^#/ d' $@

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@ $(LDFLAGS)

libpcap.a: $(LIBOBJ)
	ar rc $@ $^

preclean : 
	rm -f *-pre.c

clean : 
	rm -f *.o \
	rm -f libpcap.a
