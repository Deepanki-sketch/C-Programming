#include<stdio.h>

int a[10], front=-1, rear=-1;

void enqueue();
void dequeue();
void peek();
void display();

int main()
{
    int choice;

    while(1)
    {
        printf("\n1 = Enqueue");
        printf("\n2 = Dequeue");
        printf("\n3 = Peek");
        printf("\n4 = Display");
        printf("\n5 = Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);

        if(choice==1)
        {
            enqueue();
        }
        else if(choice==2)
        {
            dequeue();
        }
        else if(choice==3)
        {
            peek();
        }
        else if(choice==4)
        {
            display();
        }
        else if(choice==5)
        {
            break;
        }
        else
        {
            printf("Invalid Choice");
        }
    }

    return 0;
}

void enqueue()
{
    if((rear+1)%10==front)
    {
        printf("Overflow");
    }
    else if(front==-1 && rear==-1)
    {
        front=0;
        rear=0;

        printf("Enter element: ");
        scanf("%d",&a[rear]);

        printf("Enqueue executed successfully");
    }
    else
    {
        rear=(rear+1)%10;

        printf("Enter element: ");
        scanf("%d",&a[rear]);

        printf("Enqueue executed successfully");
    }
}

void dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("Underflow");
    }
    else if(front==rear)
    {
        printf("Deleted Element: %d",a[front]);

        front=-1;
        rear=-1;

        printf("\nDequeue executed successfully");
    }
    else
    {
        printf("Deleted Element: %d",a[front]);

        front=(front+1)%10;

        printf("\nDequeue executed successfully");
    }
}

void peek()
{
    if(front==-1 && rear==-1)
    {
        printf("Underflow");
    }
    else
    {
        printf("Front Element: %d",a[front]);
    }
}

void display()
{
    if(front==-1 && rear==-1)
    {
        printf("Underflow");
    }
    else
    {
        int i=front;

        printf("Queue Elements: ");

        while(1)
        {
            printf("%d ",a[i]);

            if(i==rear)
                break;

            i=(i+1)%10;
        }
    }
}