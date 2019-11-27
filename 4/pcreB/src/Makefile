all:
	make -C src

clean:
	make clean -C src; \
	rm -rf lava-install

install:
	mkdir -p lava-install/bin
	cp src/pcre2grep lava-install/bin
