#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: The character is to be checked
 * Return: 1 if c is a letter or 0 otherwise
 */
int _isalpha(int c)

{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
