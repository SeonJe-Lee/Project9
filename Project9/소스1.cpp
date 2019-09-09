#include <stdio.h>

int max4(int a, int b, int c, int d)
{
	int max = a;
	if (b > max)max = b;
	if (c > max)max = c;
	if (d > max)max = d;
	return max;
}

int main(void)
{
	printf("max4(%d, %d, %d, %d) = %d\n", 4, 3, 2, 1, max4(4, 3, 2, 1)); /*a>b>c>d*/
	printf("max4(%d, %d, %d, %d) = %d\n", 4, 3, 3, 1, max4(4, 3, 3, 1)); /*a>b=c>d*/
	printf("max4(%d, %d, %d, %d) = %d\n", 4, 3, 3, 2, max4(4, 3, 3, 2)); /*a>b=c>d*/
	printf("max4(%d, %d, %d, %d) = %d\n", 4, 3, 3, 3, max4(4, 3, 3, 3)); /*a>b=c=d*/
	printf("max4(%d, %d, %d, %d) = %d\n", 4, 3, 1, 1, max4(4, 3, 1, 1)); /*a>b>c=d*/
}