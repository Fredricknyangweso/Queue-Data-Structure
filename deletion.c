
# include<stdio.h>
#define MAX 5


int queue[MAX];
int front = -1, rear = -1;


void insert(int value)
{
    if (rear == MAX - 1)
    {
        printf("Queue is full\n")
 ;
    }
    else
    {
        if (front == -1)
            front = 0;
        rear++;
        queue[rear] = value;
    }
}

void delete ()
{
    if(front==-1)
    {
        printf("queue is empty\n");
    }
    else
    {
        printf("deleted element is %d\n", queue[front]);
        front++;
        if (front > rear)
        {
            front = -1;
            rear = -1;
        }
    }

    void display()
    {
        int i;
        if (front==-1)
        {
            printf("queue is empty\n");
        }
        else
        {
            printf("queue elements are:\n");
            for (i = front; i <= rear; i++)
            {
                printf("%d ", queue[i]);
            }
            printf("\n");
        }
        int main()
        {
            insert(10);
            insert(20);
            insert(30);

            display();
            delete();
            display();

            return 0
            }
    }