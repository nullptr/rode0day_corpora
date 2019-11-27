.PHONY: all tcpdump clean install

all: tcpdump

tcpdump :
	make -C src

clean:
	rm -rf lava-install
	make -C src clean

install:
	rm -rf lava-install
	mkdir -p lava-install/bin
	cp src/tcpdump lava-install/bin

