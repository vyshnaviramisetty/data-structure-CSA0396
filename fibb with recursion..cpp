#include<stdio.h>
int fibb(int n)
{
	if (n==0)
	 return 0;
	else if (n==1)
	 return 1;
	else
	 return(fibb(n-1)+fibb(n-2));
}
int fibb(int);
int main()
{
  int n,i;
  printf("fibonacci series\n");
  scanf("%d",&n);
  for (i=0 ; i<=n ; i++)
  printf("%d\t",fibb(i));
}

