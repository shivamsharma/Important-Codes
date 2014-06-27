#include <stdio.h>
#include <math.h>
int isPrime(int n)
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
	int i=2,t;
	FILE *fp;
	printf("Enter the number till which prime nos is to be find:");
	scanf("%d",&t);
	int j,flag,count=0;
	fp=fopen("1prime-nos.txt","w");
	while(i<=t)
	{
		if(isPrime(i))
		{
			fprintf(fp,"%d,",i);
			count++;
		}
		i++;
	}
	fprintf(fp,"--Count--%d",count);
	fclose(fp);
}
