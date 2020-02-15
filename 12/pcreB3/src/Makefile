all:
	make -C src

clean:
	make clean -C src
	rm -rf lava-install

install:
	mkdir -p lava-install/bin
	cp src/pcre2grep lava-install/bin
	mkdir -p lava-install/share
	cp haystack lava-install/share/
