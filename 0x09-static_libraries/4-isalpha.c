#include "main.h"

/**
 * _isalpha - checks for alphabetic charater
 * @c: the character to be checked to be  checked
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
