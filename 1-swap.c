#include<stdio.h>
#include "main.h"

void swap_int(int *a, int *b)
{
	int d;
	d = *a;
	*b = d;
	*a = *b;
}	
