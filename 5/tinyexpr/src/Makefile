BINNAME=math

all: math

math:
	make -C src math

install: 
	rm -rf lava-install
	mkdir -p lava-install/bin
	cp src/${BINNAME} lava-install/bin/

clean:
	make -C src clean
	rm -rf lava-install

