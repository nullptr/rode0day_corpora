#!/bin/bash

if [ -d 10 ]; then
    cd 10
fi

if [ ! -d tcpdumpB ]; then
    echo "[-] tcpdumpB directory not found!"
    exit 1
fi

rm -f tcpdumpB/inputs/*
rm -f tcpdumpS/inputs/*

wget -qO tcpdumpB/inputs/ipv4frags.pcap 'https://wiki.wireshark.org/SampleCaptures?action=AttachFile&do=get&target=ipv4frags.pcap'
wget -qO tcpdumpB/inputs/dhcp.pcap 'https://wiki.wireshark.org/SampleCaptures?action=AttachFile&do=get&target=dhcp.pcap'

cp tcpdumpB/inputs/* tcpdumpS/inputs/

echo "[+] replaces tcpdump seeds with smaller ones!"
