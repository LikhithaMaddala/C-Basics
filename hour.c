#include<stdio.h>
void main()
{
	/* Minutes into hours and minutes */
	int Minutes,H,m;
	Minutes=100;
	H=Minutes/60;
	m=Minutes%60;
	printf("%d hour(s) and %d minute(s)",H,m);
}
