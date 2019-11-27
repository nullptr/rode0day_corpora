all: duk

duk:
	make -C src duk

install: 
	rm -rf lava-install
	mkdir -p lava-install/bin
	cp ./src/duk lava-install/bin

clean:
	make -C src clean
	rm -rf lava-install
