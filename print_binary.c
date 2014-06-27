#include <stdio.h>
int print_binary(int n,int *p)
{
	int i,l,len=0,temp=n;
	while(temp/2>0)
	{
		len++;
		temp/=2;
	}
	len++;
	l=len;
	while(len>0)
	{
		p[len-1]=n%2;
		n/=2;
		len--;
	}
	return l;
}
int main()
{
	int i,j,t,n;
	printf("Enter the total nos. of binary no:");
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		int p[1000],len;
		printf("Enter the binary no.:");
		scanf("%d",&n);
		len=print_binary(n,p);
		for(j=0;j<len;j++)
		printf("%d",p[j]);
		printf("\n");
	}
	return 0;
}
