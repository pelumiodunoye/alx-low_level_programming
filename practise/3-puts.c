#include <stdio.h>
#include "main.h"


void _puts(char *str)
{
	int next = 0;
	while (str[next] != '\0')
	{

		putchar(str[next]);
		next++;

	}
	putchar(10);
}

//str =  address;
//*str = value inside the address;
//str + 1 = next address;
//*(str +1) = next value inside the address;
//str + n = nth address from str;
//*(str + n) = nth value inside  address from str;
//str[1] = *(str +1);
//str[n] = *(str + n);
//&str = address of variable str;
