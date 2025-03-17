#include <stdio.h> 
#include <stdlib.h>
#define SIZE 100
typedef struct Priorityqueue{
    int element;
    int priority;
} PQueue;
PQueue pq[SIZE];
int front=-1, rear = -1;
int isEmpty()
{
 return (front==-1)?1:0;
}
int isFull()
{
return (rear==SIZE-1)?1:0;
}
void enqueue(int data, int priority){  
   rear = rear+1;
   pq[rear].element = data;
   pq[rear].priority = priority;
   if(front==-1){
     front=rear;
   }
   printf("Element Inserted !!!!\n");
}
int getHigherPriorityElement(){
    int max=0, index=-1;
    for(int i=front; i<=rear; i++){
        if(pq[i].priority>max){
            max=pq[i].priority;
            index=i;
        }
    }
    return index;
}
int dequeue(){
    
}
void peek(){
    int i=getHigherPriorityElement();
}
int display(){
   printf("Priority Queue Element Are : \n");
   for(int i=front; i<=rear; i++){
    printf("element : %d => Priority : %d\n", pq[i].element, pq[i].priority);
   }
}
int main()
{
    while (1)
    {
        printf("-----Priority queue-----\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        int choice, data, p;
        printf("Enter a choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            if (isFull())
                printf("Queue Overflow!!\n");
            else
            {
                printf("Enter element: ");
                scanf("%d", &data);
                printf("Enter Priority : ");
                scanf("%d", &p);
                enqueue(data, p);
            }
            break;
        case 2:
            if (isEmpty())
                printf("Queue Underflow!!!\n");
            else
                printf("%d is dequeue from the queue!\n", dequeue());

            break;
        case 3:
            if (isEmpty())                                                     
                printf("Queue is empty!!\n");
            else
                printf("Element available in the front of queue is %d\n",peek());
            break;
        case 4:
            if (isEmpty())
                printf("Queue is Empty!!\n");
            else
                display();
            break;
        default:
            printf("Enter a valid choice\n");
        }
        printf("\n");
    }        
    return 0;
}     
                                                                                                                                                                                                                                                                                                                       
