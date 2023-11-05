# TODO: Write install and uninstall functions



build_examples:
	@echo "Building example sources into output directory"
	gcc src/usingTrueRand.c src/random.c -o output/exampleTrueRandProgram
	gcc src/usingRandRange.c src/random.c -o output/exampleRandRangeProgram
	@echo "compilation sucessful"


clean_existing_builds:
	@echo "Removing compiled binaries"
	rm output/exampleTrueRandProgram output/exampleRandRangeProgram
	@echo "sucessful"