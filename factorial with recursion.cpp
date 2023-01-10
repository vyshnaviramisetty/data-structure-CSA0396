#include<stdio.h>
int fact(int n)
{
	if (n!=0)
	return n*fact(n-1);
	else
	return 1;
	
}
 int main()
 {
 	int num,result;
 	printf("enter a factorial number:");
 	scanf("%d",&num);
 	result = fact(num);
 	printf("result = %d\n",result);
 	return 0;
 }
