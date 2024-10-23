# TODO: Fully debug the install features

.DEFAULT_GOAL := info



install:
	@echo "Checking if default install directory '/usr/local/include' exists"
		mv src/random.h /usr/local/include
	@echo "Sucessfully moved libary's header file to target dir"

build_source_examples:
	@echo "building examples."
	gcc src/examples/examples.c -o exampleProgram
	@echo "Success!"


# This is the default make function 
info: 
	@echo "INSTALLATION: make install"
	@echo "BUILD EXAMPLE SOURCES: make build_source_examples"
	@echo "Version: 0.1.0"
