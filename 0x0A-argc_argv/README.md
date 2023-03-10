# argc
In C programming language, argc is an integer variable that holds the number of arguments passed to the program through the command line, including the name of the program itself.

The variable argc is automatically populated by the runtime environment when the program starts running. It counts the number of strings passed to the program through the command line, and sets argc equal to that count.

The argc variable is often used in conjunction with the argv array to process command line arguments passed to a program. By checking the value of argc and examining the contents of the argv array, a program can determine what actions to take or what operations to perform based on the user's input.


# argv

In C programming language, argv[0] is a string that holds the name of the program being executed, as passed through the command line.

The argv array holds a sequence of strings, where each element represents one of the command-line arguments passed to the program. The first element of the array, argv[0], holds the name of the program itself.

For example, if a user runs a C++ program named "hello" from the command line with the command ./hello arg1 arg2 arg3, then the value of argv[0] would be the string "./hello", representing the name of the program being executed.

The argv[0] element is often used in error messages or debug output to identify the program that encountered the error or produced the output. Additionally, programs may use argv[0] to determine the path of the program or to modify its behavior based on its name or location.
