#include <stdio.h>
void insertion_sort(int list[], int n)
{
   int i, j, temp;
   for (i = 1; i < n; i++)
   {
   	temp=list[i];
   	j=i-1;
   	while (temp<list[j]&&j>=0)
   	{
   		list[j+1]=list[j];
   		j--;
	   }
	   list[j+1]=temp;
   }
}
int main()
{
 int list[50], n, i;
 printf("Enter the number of elements in the list:\n");
 scanf("%d", &n);
 printf("Enter %d elements of list\n", n);
 for (i = 0; i < n; i++)
 scanf("%d", &list[i]);
 insertion_sort(list, n);
 printf("List after sorting :\n");
 for (i = 0; i < n; i++)
    printf("%d\n", list[i]);
 return 0;
}
