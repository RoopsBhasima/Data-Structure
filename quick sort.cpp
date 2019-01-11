#include<stdio.h>
#include<conio.h>
int partition(int a[],int l,int h)
{
	int p=l;
	int q=h;
	int pivot=a[l],temp;
	while (p<q)
	{
		while(a[p]<=pivot)
		p++;
		while(a[q]>pivot)
		q--;
		if(p<q)
		{
			temp=a[p];
			a[p]=a[q];
			a[q]=temp;
		}
	}
	a[l]=a[q];
	a[q]=pivot;
	return q;
}
void quick_sort(int a[],int l,int h)
{
	int loc;
	if(l<h)
	{
		loc=partition(a,l,h);
		quick_sort(a,l,loc-1);
		quick_sort(a,loc+1,h);
	}
}
	int main()
	{
		int a[50],n,l,h,i;
		printf("Enter the value of n:");
		scanf("%d",&n);
		l=0;
		h=n-1;
		printf("\nEnter %d elements of list:",n);
		for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		printf("\nBefore Sorting:");
		for(i=0;i<n;i++)
		printf("%d\t",a[i]);
		quick_sort(a,l,h);
		printf("\nAfter Sorting:");
		for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	
	}
