#include <stdio.h>
#define max 3
int Q[max];
int rear,front;
void Qinsert();
void Qdelete();
void Qdisplay();
void main()
{
int choice;
rear = -1; front = -1;
while(1)
{
    printf("basic operations of queues \n");
    printf("\n 1.insertion in queue");
    printf("\n 2.deletion in queue");
    printf("\n 3.display the contents of queue");
    printf("\n 4.exit");
    printf("\n enter your choice");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:Qinsert();break;
        case 2:Qdelete();break;
        case 3:Qdisplay();break;
        default:printf("invalid choice enter the valid choice \n");
        break;
    }
}
return 0;
}
void Qinsert()
{
    if(rear==max-1)
        printf("queue is overflow \n");
    else
    {
        if(rear==-1)
        {
            front=0;
        }
        printf("\n enter the item to be inserted");
        scanf("%d",&Q[++rear]);
    }
    getch();
}
void Qdelete()
{
    if(front==-1)
        printf("\n queue is empty");
    else
    {
        printf("\n deleted item is %d ",Q[front++]);
        if(front>rear)
            front=rear=-1;
    }
}
void Qdisplay()
{
    int i;
    if(front==-1)
        printf("\n queue is empty");
    else{
        printf("\n queue elements are");
        for(i=front;i<=rear;i++)
        {
            printf("%d",Q[i]);
        }
    }
}