#include<stdio.h>
void main()
{
	printf("%d\n", (80>70) && (80>7));
	printf("%d\n", (80>70) && (80<7));
	printf("%d\n", (80>70) || (80>7));
	printf("%d", (80<70) || (80<7));	
}
