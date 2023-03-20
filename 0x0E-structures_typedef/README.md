# 0x0E-structures and typedef

# Structs

A struct is a user defined data type that groups together related data of different types under a single name. They allow the programmer to define a collection of variables that are logically related.

For example;

To create a student management system, you'll need name of the student, age, class, grade etc.

You can create a struct for the above as:

	struct Student{
		char name[50];
		int age;
		char class;
		float grade;
	};

# Typedef

typedef is a keyword that allows you to create new names for existing data types, including struct types. Here's a summary of how typedef works:

Syntax: The syntax for typedef is typedef existing_type new_type;, where existing_type is the type you want to create a new name for and new_type is the new name you want to create.

For example;

	typedef struct {
    		char name[50];
    		int age;
    		float height;
} Person;


