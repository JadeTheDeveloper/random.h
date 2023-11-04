# THE MAKE FILE IS ONLY FOR BUILDING THE EXAMPLE FILES RIGHT NOW, I WILL EVENTUALLY HAVE A WAY TO INSTALL THE LIBRARY TO MY MACHINE, BUT I CANNOT TEST THAT YET,
# AS I DO NOT CURRENTLY HAVE ANOTHER WORKING COMPUTER TO TEST THE INSTALLATION AND COMPILATION PROCESS



build_examples:
	@echo "Building example sources into output directory"
	gcc src/usingTrueRand.c src/random.c -o output/exampleTrueRandProgram
	gcc src/usingRandRange.c src/random.c -o output/exampleRandRangeProgram
	@echo "compilation sucessful"


clean_existing_builds:
	@echo "Removing compiled binaries"
	rm output/exampleTrueRandProgram output/exampleRandRangeProgram
	@echo "sucessful"