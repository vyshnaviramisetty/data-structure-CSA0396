#include<stdio.h>
#include<stdlib.h>
int A[50],n;

void Array_insertion()
{
    int i,ele=100,pos=2;
    printf("Enter the n");
    scanf("%d",&n);

    printf("Enter the Array element");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);

    for(i=n;i>=pos;i--)
        A[i]=A[i-1];
    A[pos]=ele;

}
void Array_deletion()
{
    int i,pos=4;
    for(i=pos;i<n;i++)
        A[i]=A[i+1];

}

void Array_display()
{
    int i;
    for(i=0;i<=n;i++)
        printf("%d\t",A[i]);
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
            case 1:Array_insertion(); break;
            case 2:Array_deletion(); break;
            case 3:Array_display(); break;
            case 4:exit(0);
            default: printf("\nEnter the choice between 1 to 4!!!!");
        }
      }while(cho>0 && cho<=4);

}
