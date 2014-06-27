//MERGE SORT
#include <stdio.h>
#include <malloc.h>
void merge(int *arr,int p,int q,int r)
{
	int n1=q-p+1;
	int n2=r-q;
	int i,j,k=p;
	int* L=(int*)malloc(sizeof(int)*(n1+1));
	int* R=(int*)malloc(sizeof(int)*(n2+1));
	for(i=0;i<n1;i++)
	{
		L[i]=arr[k++];
	}
	for(j=0;j<n2;j++)
	{
		R[j]=arr[k++];
	}
	L[n1]=9999;
	R[n2]=9999;
	i=j=0;
	for(k=p;i<n1&&j<n2;k++)
	{
		if(L[i]<=R[j])
		arr[k]=L[i++];
		else
		arr[k]=R[j++];
	}
	if(i==n1)
	{
		while(j < n2 )
		arr[k++]= R[j++];
	}
	else if ( j == n2 )
	{
		while ( i < n1 )
		arr[k++]=L[i++];
	}
	
}
void merge_sort(int *arr,int p,int r)
{
	int k;
	if (p<r)
	{
		int q=(p+r)/2;
		merge_sort(arr,p,q);
		merge_sort(arr,q+1,r);
		merge(arr,p,q,r);
	}
}
int main()
{
	printf("\nEnter the size of array you want to sort:");
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	merge_sort(arr,0,n-1);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
