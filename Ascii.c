#include <stdio.h>
int main()
{
	int i=0;
	while(i<=127)
	{
		printf("%d-%c\t",i,i);
		i++;
	}
}