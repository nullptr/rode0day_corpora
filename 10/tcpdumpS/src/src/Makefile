.PHONY: all preclean clean

all: tcpdump


# gcc -ffloat-store -DHAVE_CONFIG_H   -D_U_="__attribute__((unused))" -I. -I../libpcap  -g -O2 -c ./print-stp.c
CFLAGS += -O0 -g -ffloat-store -DHAVE_CONFIG_H -I. -I../libpcap -gdwarf-2 -w

OBJ = \
	setsignal-pre.o tcpdump-pre.o version-pre.o addrtoname-pre.o \
	addrtostr-pre.o af-pre.o ascii_strcasecmp-pre.o checksum-pre.o cpack-pre.o \
	gmpls-pre.o gmt2local-pre.o in_cksum-pre.o ipproto-pre.o l2vpn-pre.o \
	machdep-pre.o nlpid-pre.o oui-pre.o parsenfsfh-pre.o print-pre.o \
	print-802_11-pre.o print-802_15_4-pre.o print-ah-pre.o print-ahcp-pre.o \
	print-aodv-pre.o print-aoe-pre.o print-ap1394-pre.o print-arcnet-pre.o \
	print-arp-pre.o print-ascii-pre.o print-atalk-pre.o print-atm-pre.o \
	print-babel-pre.o print-beep-pre.o print-bfd-pre.o print-bgp-pre.o \
	print-bootp-pre.o print-bt-pre.o print-calm-fast-pre.o print-carp-pre.o \
	print-cdp-pre.o print-cfm-pre.o print-chdlc-pre.o print-cip-pre.o \
	print-cnfp-pre.o print-dccp-pre.o print-decnet-pre.o print-dhcp6-pre.o \
	print-domain-pre.o print-dtp-pre.o print-dvmrp-pre.o print-eap-pre.o \
	print-egp-pre.o print-eigrp-pre.o print-enc-pre.o print-esp-pre.o \
	print-ether-pre.o print-fddi-pre.o print-forces-pre.o print-fr-pre.o \
	print-frag6-pre.o print-ftp-pre.o print-geneve-pre.o print-geonet-pre.o \
	print-gre-pre.o print-hncp-pre.o print-hsrp-pre.o print-http-pre.o \
	print-icmp-pre.o print-icmp6-pre.o print-igmp-pre.o print-igrp-pre.o \
	print-ip-pre.o print-ip6-pre.o print-ip6opts-pre.o print-ipcomp-pre.o \
	print-ipfc-pre.o print-ipnet-pre.o print-ipx-pre.o print-isakmp-pre.o \
	print-isoclns-pre.o print-juniper-pre.o print-krb-pre.o print-l2tp-pre.o \
	print-lane-pre.o print-ldp-pre.o print-lisp-pre.o print-llc-pre.o \
	print-lldp-pre.o print-lmp-pre.o print-loopback-pre.o print-lspping-pre.o \
	print-lwapp-pre.o print-lwres-pre.o print-m3ua-pre.o print-medsa-pre.o \
	print-mobile-pre.o print-mobility-pre.o print-mpcp-pre.o print-mpls-pre.o \
	print-mptcp-pre.o print-msdp-pre.o print-msnlb-pre.o print-nflog-pre.o \
	print-nfs-pre.o print-nsh-pre.o print-ntp-pre.o print-null-pre.o \
	print-olsr-pre.o print-openflow-1.0-pre.o print-openflow-pre.o print-ospf-pre.o \
	print-ospf6-pre.o print-otv-pre.o print-pgm-pre.o print-pim-pre.o \
	print-pktap-pre.o print-ppi-pre.o print-ppp-pre.o print-pppoe-pre.o \
	print-pptp-pre.o print-radius-pre.o print-raw-pre.o print-resp-pre.o \
	print-rip-pre.o print-ripng-pre.o print-rpki-rtr-pre.o print-rrcp-pre.o \
	print-rsvp-pre.o print-rt6-pre.o print-rtsp-pre.o print-rx-pre.o \
	print-sctp-pre.o print-sflow-pre.o print-sip-pre.o print-sl-pre.o \
	print-sll-pre.o print-slow-pre.o print-smtp-pre.o print-snmp-pre.o \
	print-stp-pre.o print-sunatm-pre.o print-sunrpc-pre.o print-symantec-pre.o \
	print-syslog-pre.o print-tcp-pre.o print-telnet-pre.o print-tftp-pre.o \
	print-timed-pre.o print-tipc-pre.o print-token-pre.o print-udld-pre.o \
	print-udp-pre.o print-usb-pre.o print-vjc-pre.o print-vqp-pre.o \
	print-vrrp-pre.o print-vtp-pre.o print-vxlan-pre.o print-vxlan-gpe-pre.o \
	print-wb-pre.o print-zephyr-pre.o print-zeromq-pre.o netdissect-pre.o \
	signature-pre.o strtoaddr-pre.o util-print-pre.o print-smb-pre.o smbutil-pre.o \
	strlcat-pre.o strlcpy-pre.o
	

.SECONDARY:
%-pre.c :
	$(CC) $(CFLAGS) -D_U_="__attribute__((unused))" -D'__attribute__(x)=' -include stdio.h -DHAVE_CONFIG_H -E $<  -o $@ $(shell echo "$@" | sed -e "s/-pre//")
	sed -i '/^#/ d' $@

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@ $(LDFLAGS)

../libpcap/libpcap.a:
	make -C ../libpcap

tcpdump : $(OBJ) ../libpcap/libpcap.a
	 $(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

preclean : 
	rm -f *-pre.c

clean : 
	rm -f *.o; \
	rm -f tcpdump; \
	make -C ../libpcap clean
