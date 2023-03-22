# Function pointers

A function pointer, also called a subroutine pointer or procedure pointer, is a pointer that points to a function. As opposed to referencing a data value, a function pointer points to executable code within memory. Dereferencing the function pointer yields the referenced function, which can be invoked and passed arguments just as in a normal function call. Such an invocation is also known as an "indirect" call, because the function is being invoked indirectly through a variable instead of directly through a fixed identifier or address.

# How to declare a function pointer?

	function_return_type(*Pointer_name)(function argument list)

For example:

	double  (*p2f)(double, char)

Here double is a return type of function, p2f is name of the function pointer and (double, char) is an argument list of this function. Which means the first argument of this function is of double type and the second argument is char type.
