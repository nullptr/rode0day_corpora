all: libyaml

libyaml:
	make -C src

clean:
	rm -rf lava-install
	make -C src clean

install: libyaml
	rm -rf lava-install
	mkdir -p lava-install/bin
	cp src/deconstruct lava-install/bin/deconstruct

