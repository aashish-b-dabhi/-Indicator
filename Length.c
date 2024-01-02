#include<stdio.h>

void main()
{
	char str[100];
	int *p = str;
	p = &str;
	int i,count = 0;
	
	printf("Entre Of String = ");
	gets(str);
	
	for(i=0 ; *(p+i)!=NULL ; i++)
	{
		count++;
	}
	
	printf("Length Of String = %d",strlen(p));
	
}