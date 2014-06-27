#include <stdio.h>
#include <math.h>
int i,n,t,k;
int a[100000],b[100000];
void merge(int p,int q,int r)
{ 
	int L=a[p],M=a[q+1],R=a[r];
	if(a[p]>a[q+1])
	{
		a[p]=M;
		a[q+1]=L;
	}
	if(a[r]<a[q])
	{
		a[r]=a[q];
		a[q]=R;
	}
}
void sort()
{
	int k,u;
	k=1;
	while (k<n)
	{
		i=1;
		while (i+k<=n)
		{
			u=i+k*2;
			if (u>n)
			u=n+1;
			merge(i,i+k,u);
			i=i+k*2;
		}
		k=k*2;
	}
}
int main()
{
	int i=0,n;
	printf("\nThis is a program of merge_min by iteration...\n");
	printf("\nEnter the size of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	sort();
	printf("\n");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	printf("\nMinimum element:%d\nMaximum element:%d\n",a[0],a[n-1]);
	return 0;
}
	
