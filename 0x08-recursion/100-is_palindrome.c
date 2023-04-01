#include "main.h"
#include <string.h>

int is_palindrome(char *s);
int check_palindrome(char *s, int left, int right);

/**
* is_palindrome - checks if string is palindrome
*
* @s: string involved
*
* Return: 1 if true and 0 if false
*/

int is_palindrome(char *s)
{
	int length;

	length = strlen(s);

	if (length == 0 || length == 1)
		return (1);

	return (check_palindrome(s, 0, length - 1));
}

/**
* check_palindrome - function definition
*
* @s: string involved
*
* @left: index from left
*
* @right: index from right
*
* Return: 1 if palindrome or 0 if false
*/

int check_palindrome(char *s, int left, int right)
{
	if (left >= right)
		return (1);

	if (s[left] == s[right])
		return (check_palindrome(s, left + 1, right - 1));
	else
		return (0);
}

