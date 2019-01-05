#include <stdio.h>
void bubble_sort(int list[], int n)
{
   int i = 0, j = 0, temp;
   for (i = 0; i < n; i++)
   {
       for (j = 0; j < n - i - 1; j++)
	   {           
            if (list[j] > list[j + 1]) 
			{
               temp = list[j];
               list[j] = list[j + 1];
               list[j + 1] = temp;
            }
       }
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
 bubble_sort(list, n);
 printf("List after sorting :\n");
 for (i = 0; i < n; i++)
    printf("%d\n", list[i]);
 return 0;
}
