#include<stdio.h>
#include<stdlib.h>
#define N 50
void enqueue();
void dequeue();
void display();
int queue[N];
int rear = -1;
int front = -1;
int main() {
    int choice;
    while(1) {
        printf("\nchoose one of the options\n");
        printf("1 enqueue\n2 dequeue\n3 display\n4 exit\n");
        scanf("%d",&choice);
        switch(choice) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(1);
                break;
            default:
                printf("enter correct choice");
        }
    }
}
void enqueue() {
    int n;
    printf("\nenter the value : ");
    scanf("%d",&n);
    if(rear == N-1) {
        printf("Queue is full\n");
    }
    else if(front == -1 && rear == -1) {
        front = rear = 0;
        queue[rear] = n;
    } else {
        rear++;
        queue[rear] = n;
    }
}
void dequeue() {
    if(front == -1 && rear == -1) {
        printf("\nqueue underflow");
    } else if(front == rear) {
        printf("\ndequeued element is %d",queue[front]);
        front = rear= -1;
    } else {
        printf("\ndequeued element is %d",queue[front]);
        front++;
    }
}
void display() {
    int i;
    if(front == -1 && rear == -1) {
        printf("\n QUEUE IS EMPTY");
    } else {
        printf("\nQueue elements are : \n");
        for(i=front; i<=rear; i++) {
            printf(" %d ",queue[i]);
        }
    }
}
