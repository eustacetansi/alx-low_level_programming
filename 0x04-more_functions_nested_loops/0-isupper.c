#include "main.c"
#include <stdio.h>
/**
 * function that checks for upper case
 *
 * reeturn: Always 0.
 */
int _isupper(char c)
{
	if(c >='A' && c <='Z')
		return (1);
	else
		return (0);
}
int result;
int main()
{
	result = _isupper(A);
	_putchar("%d", result);
	return (0);
}
