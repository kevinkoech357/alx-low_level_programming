# 0x0D Preprocessor

# Stages of compilation

Preprocessing: The preprocessor scans the source code and processes the preprocessor directives, such as #include, #define, and #ifdef. The output of this step is a preprocessed source code file.

Compilation: The compiler reads the preprocessed source code file and generates an object file for each source file. The compiler performs lexical analysis, syntax analysis, semantic analysis, and code optimization during this step.

Linking: The linker combines the object files produced by the compiler with any necessary libraries to create an executable file. The linker resolves external references to symbols and function calls in the program by locating the corresponding definitions in object files or libraries.

# Prepocessing

Use gcc -E filename.c option.

# Macro Definitions

	#define VAR_NAME <assigned value>

# Macro arguments

	#define SUB(a, b) ((a) - (b))


