build:
	ino build

upload: build
	ino upload

serial:
	ino serial -- -e 'c'

.PHONY: build upload serial
