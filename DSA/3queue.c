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
    q->Q = (int *)malloc(q->size * sizeof(int));
}

void enqueue(struct Queue *q, int x)
{
    if (abs(q->rear - q->front) == q->size) //
        printf("Queue is Full");
    else
    {
        q->rear = (q->rear + 1) % q->size; //
        q->Q[q->rear] = x;
    }
}

int dequeue(struct Queue *q)
{
    int x = -1;

    if (q->front == q->rear)
        printf("Queue is Empty\n");
    else
    {
        q->front = (q->front + 1) % q->size;
        x = q->Q[q->front];
    }
    return x;
}

void Display(struct Queue q)
{
    int i = (q.front + 1) % q.size;
    do
    {
        printf("%d ", q.Q[i]);
        i = (i + 1) % q.size;
    } while (i != (q.rear + 1) % q.size);
    printf("\n");
}

int isFull(struct Queue *q)
{
    if (abs(q->rear - q->front) == q->size)
    {
        return 1;
    }
    return 0;
}

//
///
//
//
//
//

struct ThreeQueue
{
    struct Queue *q1;
    struct Queue *q2;
    struct Queue *q3;
    int size;
};

void Create3(struct ThreeQueue *q, int size)
{
    struct Queue q1, q2, q3;
    q->q1 = &q1;
    q->q2 = &q2;
    q->q3 = &q3;
    Create(q->q1, size);
    Create(q->q2, size);
    Create(q->q3, size);
}

void enqueue3(struct ThreeQueue *q, int x)
{
    if (isFull(q->q1) == 1)
    {
        if (isFull(q->q2) == 1)
        {
            if (isFull(q->q3) == 1)
            {
                printf("overflow");
            }
            else
            {
                enqueue(q->q3, x);
            }
        }
        else
        {
            enqueue(q->q2, x);
        }
    }
    else
    {
        enqueue(q->q1, x);
    }
}

void Display3(struct ThreeQueue *q)
{
    Display(*q->q1);
    Display(*q->q2);
    Display(*q->q3);
}

int main()
{

    struct ThreeQueue q;

    Create3(&q, 3);

    enqueue3(&q, 10);
    enqueue3(&q, 20);
    enqueue3(&q, 30);
    enqueue3(&q, 40);
    enqueue3(&q, 50);

    Display3(&q);

    // Display(q);

    return 0;
}
