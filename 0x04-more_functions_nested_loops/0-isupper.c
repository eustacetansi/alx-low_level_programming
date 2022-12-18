#include "main.h"
/**
 * function that checks for upper case
 *
 * reeturn: Always 0.
 */
int _isupper(int c)
{
	if(c >='A' && c <='Z')
		return (1);
	else
		return (0);
}
