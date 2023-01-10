#include<stdio.h>
#include<stdlib.h>
#define size 5
int stk[10],top=-1;
void push()
{
	int ele;
	printf("enter the element:");
	scanf("%d",&ele);
	if (top == size-1)
	   printf ("stacl is full/overflow");
	else
	{
		top=top+1;
		stk[top]=ele;
	}
}
void pop()
{
	int ele;
	if (top == -1)
	   printf("stack is empty/underflow");
	else
	{
		ele=stk[top];
		top=top-1;
	}
	printf("enter the delete element %d",ele);
}
void display()
{
	int i;
	if (top== -1)
	  printf ("the stack is empty/underflow");
    else
   {
    	for (i=top; i>=0; i--)
	   printf("%d\n",stk[i]);
   }
}
void peak()
{
   if(top == -1)
      printf("stack is empty/underflow");
   else  
   printf("%d",stk[top]);
}
int main()
{
	int cho;
	do
	{
		printf("**menu**");
		printf("\n1.push\n2.pop\n3.display\n4.peak\n5.exit");
		printf("enter the choice:\n");
		scanf("%d",&cho);
		switch(cho)
		{
			case 1: push();break;
			case 2: pop ();break;
			case 3: display();break;
			case 4: peak();break;
			case 5: exit (0);
		}
	}while(cho>0 && cho<=5);
}
