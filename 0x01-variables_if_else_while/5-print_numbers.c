#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* 
 * betty style doc for function main goes there
 * main function start point
*/
int main(void)
{
	char* alphabet = "0123456789\n";

	while (*alphabet != '\0') {
   		putchar((int) *alphabet);
		alphabet++;
	}
	return (0);
}
