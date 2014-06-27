#include <stdio.h>
int gcd(int a,int b)
{
	if(b==0)
	return a;
	else return gcd(b,a%b);
	return gcd(b,a%b);
}
int main()
{
	int i,temp,a,b,min;
	printf("Enter the two no.s a and b:");
	scanf("%d%d",&a,&b);
	min=a;
	if(a>b)
	min=b;
	temp=gcd(a,b);
	printf("Gcd of two numbers is :%d\n",temp);
}
