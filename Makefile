build:
	platformio run

upload: build
	platformio -t uploadlazy

.PHONY: build upload
