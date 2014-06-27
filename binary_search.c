#include <stdio.h>
int search(int *a,int start,int end,int element)
{
	int mid=(start+end)/2;
	if(start>end)
	{
		return -1;
	}
	if(element==a[mid])
	{
		return mid;
	}
	else
	{
		if(element<a[mid])
		{
			end=mid-1;
			return search(a,start,end,element);
		}
		else
		{
			start=mid+1;
			return search(a,start,end,element);
		}
	}
}
int main()
{
	int i,t;
	printf("Enter the No. of Elements in array:");
	scanf("%d",&t);
	int array[t];
	printf("Enter the array:\n");
	for(i=0;i<t;i++)
	{
		scanf("%d",&array[i]);
	}
	int element;
	printf("Enter the Element to be search in array:");
	scanf("%d",&element);
	if(search(array,0,t-1,element)!=-1)
	printf("Element Found:\nIndex of element in array after searching:%d\n",search(array,0,t-1,element));
	else printf("Element not found:\n");
	return 0;
}
