#include<stdio.h>
int main()
{
	int array[100],i,num;
	printf("enter the size of array\n");
	scanf("%d",&num);
	printf("enter the array element of array\n");
	for(i=0; i<num; i++)
	{
		scanf("%d",&array[i]);
	}
	printf("even number in the array are ");
	for(i=0; i<num; i++)
	{
		if (array[i]%2 == 0)
		{
			printf("%d", array[i]);
		}
		
	}
	printf("odd number in the array are");
	for(i=0; i<num; i++)
	{
		if (array[i]%2 != 0)
		{
			printf("%d", array[i]);
		}
	}
}
