#include <stdio.h>
#include "main.h"

/**
 * main - function that prints the number 0 to 9 followed by a new line
 * 
 * Return: Always 0.
 * */
void print_numbers(void);
{
	int i;
	for(i =0; i<=9; i++)
	{
		_putchar("%d", i);
	}
	_putchar("\n);
	return (0);
}
