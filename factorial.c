#include <stdio.h>
int factorial(int n)
{
	int i;
	int fact=1;
	for(i=n;i>0;i--)
	fact*=i;
	return fact;
}
int main()
{
	int i;
	printf("Enter the number of you want to find the factorial:");
	int n,fact=1;
	scanf("%d",&n);
	printf("Factorial of %d is:%d",n,factorial(n));
	return 0;
}
