#include <stdio.h>
void merge(int *arr,int p,int q,int r)
{
	int L=arr[p],M=arr[q+1],R=arr[r];
	if(arr[p]>arr[q+1])
	{
		arr[p]=M;
		arr[q+1]=L;
	}
	if(arr[r]<arr[q])
	{
		arr[r]=arr[q];
		arr[q]=R;
	}
}
void merge_min(int *arr,int p,int r)
{
	int k;
	if (p<r)
	{
		int q=(p+r)/2;
		merge_min(arr,p,q);
		merge_min(arr,q+1,r);
		merge(arr,p,q,r);
	}
}
int main()
{
	int i=0,n;
	printf("\nEnter the size of array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	merge_min(a,0,i-1);
	printf("\n");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	printf("\nMinimum element:%d\nMaximum element:%d\n",a[0],a[n-1]);
	return 0;
}
	