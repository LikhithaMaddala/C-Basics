/* All arthmetic operation */
#include<stdio.h>
void main()
{
	/* Addition */
	int a,b,S;
	a=8;
	b=7;
	S=a+b;
	printf("sum of %d and %d is %d\n",a,b,S);
	
	/* subtraction */
	int c,d,D;
	c=8;
	d=7;
	D=c-d;
	printf("difference of %d and %d is %d\n",c,d,D);
	
	/* Multiplication */
	int e,f,P;
	e=8;
	f=7;
	P=e*f;
	printf("product of %d and %d is %d\n",e,f,P);
	
	/* Division */
	float g,h,Q;
	g=8;
	h=7;
	Q=g/h;
	printf("quotient of %f and %f is %f\n",g,h,Q);
	
	/* Modulo division */
	float i,j,R;
	i=8;
	j=7;
	R=8%7;
	printf("remainder of %f and %f is %f\n",i,j,R);
}
