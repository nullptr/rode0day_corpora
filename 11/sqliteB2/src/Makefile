all: sqlite

sqlite:
	make -C src

clean:
	rm -rf lava-install
	make -C src clean

install:
	rm -rf lava-install
	mkdir -p lava-install/bin
	cp src/sqlite lava-install/bin/sqlite

