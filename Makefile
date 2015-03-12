build:
	./bin/build
upload: build
	./bin/upload
serial:
	ino serial -- -e 'c'
