# Variadic functions

These are functions which may take a variable number of arguments and are declared with an ellipsis in place of the last parameter.

# Syntax
	int check(int a, int b, ..);

N/B: They must have at least one name parameter.

<stdarg.h> header file must be included since it allows funtions to accept an indefinite number of arguments.

# stdarg.h types

# va_list

We'll need to use some macros (which work much like functions, and you can treat them as such) from the stdarg.h header file to extract the values stored in the variable argument list--va_start, which initializes the list, va_arg, which returns the next argument in the list, and va_end, which cleans up the variable argument list.

To use these functions, we need a variable capable of storing a variable-length argument list--this variable will be of type va_list. va_list is like any other type. For example, the following code declares a list that can be used to store a variable number of arguments.

	va_list a_list; 

# stdarg.h macros

va_start is a macro which accepts two arguments, a va_list and the name of the variable that directly precedes the ellipsis ("..."). So in the function a_function, to initialize a_list with va_start, you would write va_start ( a_list, x );

	int a_function ( int x, ... )
	{	
    	va_list a_list;
    	va_start( a_list, x );
	}

va_arg takes a va_list and a variable type, and returns the next argument in the list in the form of whatever variable type it is told. It then moves down the list to the next argument. For example, va_arg ( a_list, double ) will return the next argument, assuming it exists, in the form of a double. The next time it is called, it will return the argument following the last returned number, if one exists. Note that you need to know the type of each argument--that's part of why printf requires a format string! Once you're done, use va_end to clean up the list: va_end( a_list );
