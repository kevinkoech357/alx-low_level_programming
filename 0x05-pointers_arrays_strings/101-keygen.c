#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define PASSWORD_LENGTH 14

/**
 * main -  generates random valid passwords
 *  for the program 101-crackme
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	const char charset[] = " 0123456789abcdefghijklmnopxrstuvwxyzABCDEFGHIJKLMNOPXRSTUVWXYZ,./;*&^%$#@!~";
	const size_t charset_size = sizeof(charset) - 1;
	char password[PASSWORD_LENGTH + 1];
	int i;

	srand(time(NULL));

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = charset[rand() % charset_size];
	}

	password[PASSWORD_LENGTH] = '\0';

	printf("%s\n", password);

	return (0);
}
