all: file

file :
	cd src && $(MAKE)

clean:
	rm -rf lava-install
	make -C src clean

install:
	rm -rf lava-install
	mkdir -p lava-install/share/misc
	mkdir -p lava-install/bin
	cp magic/magic.mgc lava-install/share/misc/
	cp src/file lava-install/bin

