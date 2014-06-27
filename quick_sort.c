#include <stdio.h>
int partition(int *A,int p,int r)
{
	int i=p-1,j=p;
	int key=A[r];
	while(j<=(r-1))
	{
		if(A[j]<=key)
		{
			i++;
			int temp=A[j];
			A[j]=A[i];
			A[i]=temp;
			j++;
		}
		else j++;
	}
	A[r]=A[i+1];
	A[i+1]=key;
	return i+1;
}

void quick_sort(int *A,int p,int r)
{
	if(p<r)
	{
		int q=partition(A,p,r);
		quick_sort(A,p,q-1);
		quick_sort(A,q+1,r);
	}
}

int main()
{
	int i,t;
	scanf("%d",&t);
	int array[t];
	for(i=0;i<t;i++)
	scanf("%d",&array[i]);
	quick_sort(array,0,t-1);
	printf("\n\n");
	for(i=0;i<t;i++)
	printf("%d\n",array[i]);
	return 0;
}
