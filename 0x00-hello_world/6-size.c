#include <stdio.h>

/**
* main - Display memory size of variables
*
* Return: 0
*/

int main(void)
{

	char ch;

	int in;
	long lng;
	long long lolng;
	float flt;

	printf("Size of a char: %ld byte(s)\n", sizeof(ch));
	printf("Size of an int: %ld byte(s)\n", sizeof(in));
	printf("Size of a long int: %ld byte(s)\n", sizeof(lng));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(lolng));
	printf("Size of a float: %ld byte(s)\n", sizeof(flt));
											return (0);

}
