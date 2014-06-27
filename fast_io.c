/*This only run on unix not in windows
*due to getchar_unlocked.
*This will run on codechef/SPOJ correctly*/
#include <stdio.h>
int scan()
{
	register int t=0;
	char c;
	c=getchar_unlocked();
	while(c<'0' || c>'9')
	c=getchar_unlocked();
	while(c>='0' && c<='9')
	{
		t=(t<<3)+(t<<1)+c-'0';
		c=getchar_unlocked();
	}
	return t;
}

void out(int n)
{
	if(n<0)
	{
		n=-n;
		putchar_unlocked('-');
	}
	register int i=10;
	char output_buffer[11];
	output_buffer[10]='\n';
	do
	{
		output_buffer[--i]=(n%10)+'0';n/=10;
	}
	while(n);
	do
	{
		putchar_unlocked(output_buffer[i]);
	}
	while(++i<11);
}

int main()
{
	int i;
	printf("Enter the Integer number:");
	i=scan();
	printf("Entered number is:");
	out(i);
	printf("\n");
	return 0;
}