#include<stdio.h>
int main()
{
 int a[10],i,n,flag =0,key;
 printf("enter the element to be search:\n");
 scanf ("%d",&n);
 printf("enter the array elements: \n");
 for (i=0; i<n;i++)
 scanf ("%d",&a[i]);
 printf("enter the elements to be search:\n");
 scanf("%d",&key);
 for (i=0; i<n; i++)
{
	if (a[i] == key)
	{
		flag = 1;
		break;
	}
}
if (flag == 1)
    printf("key is found");
else
    printf("key is not found");
}
