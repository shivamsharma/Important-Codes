#include <stdio.h>
#include <string.h>
/*Compare lexicographically
*Give 1 if String A is lexicographically small than B*/
int strcompare(char *A,char *B)	
{
	int i=0,j=0,temp=0;
	while(A[i]!='\0'||B[j]!='\0')
	{
		if(A[i]==B[j])
		{
			i++;
			j++;
		}
		else if(A[i]<B[j])
		{
			temp=1;
			break;
		}
		else
		{
			temp=0;
			break;
		}
	}
	return temp;
}

int main()
{
	int i,tc;
	printf("How many strings you want:");
	scanf("%d",&tc);
	char str[tc][1000],min[1000];
	printf("Enter %d no of strings sperate either by space or enter...\n",tc);
	for(i=0;i<tc;i++)
	{
		scanf("%s",str[i]);
	}
	strcpy(min,str[0]); 	
	for(i=1;i<tc;i++)
	{
		if(strcompare(str[i],min)==1)
		strcpy(min,str[i]);
	}
	printf("%s\n",min);
}

