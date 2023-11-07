# TODO: Test if the functions actually work, implimenting the building of the examples(In progress)

.DEFAULT_GOAL := info



install:
	@echo "Checking if default install directory '/usr/local/include' exists"
	if [-d "/usr/local/include"]; then
		mv src/random.h /usr/local/include
	fi
	@echo "Sucessfully moved libarie's header file to target dir"

build_source_examples:
	@echo "building sources."
	gcc src/random.c src/examples/truerand.c -o trueRandProgram
	@echo "Success!"


# This is the default make function 
info: 
	@echo "INSTALLATION: make install"
	@echo "BUILD EXAMPLE SOURCES: make build_source_examples"
	@echo "Version: 0.1.0"
