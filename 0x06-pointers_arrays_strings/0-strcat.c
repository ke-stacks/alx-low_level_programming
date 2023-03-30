#include <stdio.h>
#include <string.h>
/**
 * main - entry point of the program
 * the program should concat two strings
 * Return : always 0
*/

int main()
{
	char first[20] = "Kelvin";
	char last[20] = "Kahuho";

	strcat(first, last);
	
	printf("%s", first);

	return 0;
}
