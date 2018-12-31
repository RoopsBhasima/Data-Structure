#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#define f(x) (x*x-4*x-10)
#define g(x) (2*x-4)
#define E (0.000001)
int main()
{
float x0,x1,ecal;
here:printf("\nEnter the initial guesses:");
scanf("%f",&x0);
if (g(x0)==0)
     goto here;
   do
   {
     if (g(x0)==0)
     {
     printf("\nThe root doesn't converge and exit");
     exit(0);
     }
     else
     {
      x1=x0-(f(x0)/g(x0));
      ecal=fabs((x1-x0)/x1);
      x0=x1;
     }
   }while(ecal>E);
   printf("The approximate root is %.4f",x1);
getch();
}
