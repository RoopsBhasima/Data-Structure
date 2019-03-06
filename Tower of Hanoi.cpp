#include<stdio.h>
void Transfer(int n,char source,char Aux,char target);
int main()
{
	int n;
	printf("Enter the number of disc:");
	scanf("%d",&n);
	Transfer(n,'S','A','T');
	return 0;
}
void Transfer(int n,char source,char Aux,char target)
{
	if(n==1)
	{
		printf("\nMove disc %d from peg %c to peg %c",n,source,target);	
	}
	else
	Transfer(n-1,source,target,Aux);
	printf("\nMove disc %d from peg %c to peg %c",n,source,target);
	Transfer(n-1,Aux,source,target);
}
