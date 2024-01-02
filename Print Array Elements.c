#include<stdio.h>

void main()
{

	int n,i;
	
	printf("Enter Size Of Array = ");
	scanf("%d",&n);
	
	int a[n];
	int *p = a;
	p = &a;
	
	printf("Enter Array Elements = \n");
	
	for(i=0 ; i<n ; i++)
	{
		scanf("%d",(p+i));
	}
	
	printf("Array Elements = ");
	
	for(i=0 ; i<n ; i++)
	{
		printf("%d ",*(p+i));
	}
}