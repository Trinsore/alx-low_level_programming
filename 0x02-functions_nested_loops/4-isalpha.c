#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: The character is to be checked
 * Return: 1 for any alphabetic character or 0 for anything else
 */

int _isaplha(int c)

{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
