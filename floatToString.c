#include <stdio.h>
char* solver(float t)
{
	int len,I=0;
	char *str;
	float temp=t;
	while(temp>1)
	{
		printf("11\n");
		len++;
		temp/=10;
	}
	temp=t;
	int d=temp;
	while(temp!=d)
	{
		printf("22\n");
		len++;
		temp*=10;
		d=temp;
	}
	int ch=t;
}
int main()
{
	float f=10.04;
	//str=solver(f);
	printf("%s",solver(f));
}
