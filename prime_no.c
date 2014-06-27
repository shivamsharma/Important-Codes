#include <stdio.h>
#include <math.h>
int prime_no(int n)
{
	int i;
	if(n==1)
	return 0;
	if(n==2)
	return 1;
	if(n%2==0)
	return 0;
	for(i=3;i<=sqrt(n);i=i+2)
	{
		if(n%i==0)
		return 0;
	}
	return 1;
}
int main()
{
	int n;
	printf("Enter the no.to check weather it is prime or not:");
	scanf("%d",&n);
	if(prime_no(n))
	printf("Yes %d is Prime.",n);
	else printf("No %d is not Prime.",n);
	return 0;
}