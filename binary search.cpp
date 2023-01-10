#include<stdio.h>
int main()
{
 int A[10],i,n,flag =0,key,mid,l,f;
 printf("enter the element to be search:\n");
 scanf ("%d",&n);
 printf("enter the array elements: \n");
 for (i=0; i<n;i++)
 scanf ("%d",&A[i]);
 printf("enter the elements to be search:\n");
 scanf("%d",&key);
 f=0;
 l=n-1;
 while (f<=l)
 {
 	mid=(f+l)/2;
 	if(A[mid] == key)
 	{
 		flag ==1;
 		break;
 		
	 }
 
    else if(A[mid]<key)
      f=mid+1;
    else if(A[mid]>key)
      l=mid-1;
}
    if (flag == 1)
       printf("key is found");
    else
       printf("key is not found");
}
