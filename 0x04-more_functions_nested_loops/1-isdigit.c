#include "main.h"
/**
 * function that checks for digit (0 through 9)
 *
 * reeturn: Always 0.
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
