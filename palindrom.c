#include <stdio.h>
#include <string.h>
//1-It is palindrom,0-Not a palindrom
//NOTE-String should be of 100 length 
int palindrom(char *A)
{
	int i=0,len=strlen(A)-1;
	while(len>=(strlen(A)/2))
	{
		if(A[i]!=A[len])
		return 0;
		len--;
		i++;
	}
	return 1;
}
int main()
{
	int i,tc;
	printf("Enter the number of strings to check for palindrom:");
	scanf("%d",&tc);
	char A[100];
	for(i=0;i<tc;i++)
	{
		scanf("%s",A);
		if(palindrom(A)==1)
		printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}	
