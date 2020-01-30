all: grep

grep :
	make -C src

clean:
	rm -rf lava-install
	make -C src clean

install: grep
	rm -rf lava-install
	mkdir -p lava-install/bin
	cp src/grep lava-install/bin
