# 0x15 File I/O IN C

File input/output (I/O) is a fundamental operation in C programming, which allows you to read from or write to files. The standard library provides a set of functions for performing file I/O operations.

To perform file I/O operations in C, you first need to open the file using the fopen() function, which takes two arguments: the file name and the mode. The mode specifies whether you want to read, write or append to the file, and whether you want to create a new file if it doesn't exist. Here are the different modes:

"r": Read mode. The file is opened for reading. If the file doesn't exist, fopen() returns NULL.

"w": Write mode. The file is opened for writing. If the file exists, its contents are truncated. If the file doesn't exist, a new file is created.

"a": Append mode. The file is opened for writing, but new data is appended to the end of the file. If the file doesn't exist, a new file is created.

"r+": Read/write mode. The file is opened for both reading and writing. If the file doesn't exist, fopen() returns NULL.

"w+": Read/write mode. The file is opened for both reading and writing. If the file exists, its contents are truncated. If the file doesn't exist, a new file is created.

"a+": Read/write mode. The file is opened for both reading and writing, but new data is appended to the end of the file. If the file doesn't exist, a new file is created.

# Opening a file in read mode

	FILE *fp;
	fp = fopen("myfile.txt", "r");
	if (fp == NULL)
	{
    printf("Failed to open file.\n");
    return 1;
	}

Once you have opened a file, you can read from it using functions like fgets() and fscanf(), and write to it using functions like fprintf() and fwrite(). When you are done with the file, you should close it using the fclose() function:

	fclose(fp);

# Reading a file line by line

	FILE *fp;
	char buffer[100];
	fp = fopen("myfile.txt", "r");
	if (fp == NULL)
	{
    	printf("Failed to open file.\n");
    	return 1;
	}

	while (fgets(buffer, sizeof(buffer), fp) != NULL)
	{
    printf("%s", buffer);
	}

	fclose(fp);

# Writing to a file

	FILE *fp;
	fp = fopen("myfile.txt", "w");
	if (fp == NULL) 
	{
    	printf("Failed to open file.\n");
    	return 1;
	}
	fprintf(fp, "Hello, world!\n");
	fclose(fp);

# Note

Note that file I/O operations can fail, so it's important to check for errors and handle them appropriately.

