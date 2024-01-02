#include<stdio.h>

main()
{
	int a,b,c;
	
	int *p;
	int *p1;
	
	p = &a;
	p1 = &b;
	
	printf("Enter Value A = ");
	scanf("%d",&a);
	
	printf("Enter Value B = ");
	scanf("%d",&b);
	
	c = *p;
	*p = *p1;
	*p1 = c;
	
	printf("A = %d\n",a);
	printf("B = %d",b); 
}