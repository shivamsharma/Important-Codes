//Convert the integer in the form of String into integer
#include <stdio.h>
#include <math.h>
int strToInt(char *c)
{
    int n=0,temp;
    int len=strlen(c);
    int count=0;
    while(len>0)
    {
        temp=(int)c[len-1]-'0';
        n+=temp*pow(10,count);
        len--;
        count++;
    }
    return n;
}
int main()
{
	char str[100];
	printf("Enter the String of integer:");
	scanf("%s",str);
	printf("Now String is parsed into the integer:%d\n",strToInt(str));
	return 0;
}
