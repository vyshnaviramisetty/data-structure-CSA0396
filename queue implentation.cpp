#include<stdio.h>
#include<stdlib.h>
#define size 5

int que[size],i;
int rear=-1,front=-1;

void enqueue()
{
	int ele;
	printf("enter the element:");
	scanf("%d",&ele);
	
	if (rear == size-1)
	  printf("queue is full /overflow");
	else if( front == -1 && rear==-1)
	   {
    	front = 0;
    	rear = 0;	
    	}
	else
	   rear=rear+1;
	   
	 que[rear]=ele;
}
void dequeue()
{
	int ele;
	if(front == -1 && rear == -1)
	 printf("queue is empty/underflow");
	else
	{
	
	 	ele = que[front];
	 
		if (front== rear)
		{
			front = -1;
			rear =-1;
		}
		else
	    	front = front +1;	
	}
	printf("the element %d is default",ele);
} 

void display()
{
	int i;
	if(front == -1 && rear==-1)
	 printf("queue is empty");
	else 
	 for(i=front; i<=rear; i++)
	  printf("%d\t",que[i]);
	 
}


int main()
{
    int cho;
    do{
        printf("\n** Main Manu *\n");
        printf("\n1.Insertion\n2.Deletion\n3.Display\n4.Exit\n");
        printf("Enter your Choice ?");
        scanf("%d",&cho);

        switch(cho)
        {
            case 1:enqueue(); break;
            case 2:dequeue(); break;
            case 3:display(); break;
            case 4:exit(0);
            default: printf("\nEnter the choice between 1 to 4");
        }
      }while(cho>0 && cho<=4);

}
