#include <stdio.h>
#include <stdlib.h>

struct Queue
{
    int size;
    int front;
    int rear;
    int *Q;
};

void Create(struct Queue *q, int size)
{
    q->size = size;
    q->front = q->rear = -1;
    //q->front = q->rear = 0;
    q->Q = (int *)malloc(q->size * sizeof(int));
}

void enqueue(struct Queue *q, int x)
{
    if (q->rear == q->size - 1)
        printf("Queue is Full");
    else
    {
        q->rear++;
        q->Q[q->rear] = x;
    }
}

// void enqueue(struct Queue *q,int x) {
//   if(q->rear == q->size -1) //(q->rear+1)%q->size == q->front
//    printf("Queue is Full");
//   else {
//     q->rear = q->rear++;  //(q->rear + 1) % q->size
//     q->Q[q->rear] = x;
//   }
// }

int dequeue(struct Queue *q)
{
    int x = -1;

    if (q->front == q->rear)
        printf("Queue is Empty\n");
    else
    {
        q->front++;
        x = q->Q[q->front];
    }
    return x;
}
//(q->front + 1)%q->size

void Display(struct Queue q)
{
    int i;
    for (i = q.front + 1; i <= q.rear; i++)
        printf("%d ", q.Q[i]);
    printf("\n");
}
// do {
//   printf("%d ",q.Q[i]);
//   i = (i + 1)% q.size;
// } while(i!= (q.rear+1)%q.size);

int main()
{

    struct Queue q;

    Create(&q, 3);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);

    Display(q);

    printf("%d\n", dequeue(&q));
    printf("%d\n", dequeue(&q));
    printf("%d\n", dequeue(&q));

    enqueue(&q, 40);

    Display(q);

    return 0;
}
