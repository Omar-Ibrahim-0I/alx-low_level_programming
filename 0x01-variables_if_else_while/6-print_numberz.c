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
	int i = 0;
	while (i != 10) {
   		if (i < 9)
		{
		putchar((char) i);
		} else 
		{
		putchar((char) '\n');
		}
		i++;
	}
	return (0);
}
