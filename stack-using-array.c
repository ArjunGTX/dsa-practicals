#include <stdio.h>
#include <stdlib.h>
int stack[],top=-1,i,n;
char ch;
void push();
void pop();
void display();
int main() {
    int choice = 0;
    printf("Enter the number of elements in stack : ");
    scanf("%d",&n);
    do {
        printf("choose one of the options\n");
        printf("1. push\n2. pop\n3. display\n4. exit");
        printf("\nEnter your choice : ");
        scanf("%d",&choice);
        switch(choice) {
            case 1: 
                push();
                break;
            case 2:
                pop();
                break;
            case 3: 
                display();
                break;
            case 4:
                exit(64);
                break;
            default:
                printf("Enter a valid choice\n");
        }
        printf("Do you want to continue?");
        ch = getch();
    } while (ch == "y" || ch == "Y");
}
    void push() {
        int val;
        if(top ==n-1) {
            printf("Stack is full");
        } else {
            printf("enter the value : ");
            scanf("%d",&val);
            top++;
            stack[top] = val;
        }
    }
    void pop() {
        if(top == -1) {
            printf("stack is empty");
        } else {
            top--;
        }
    }
    void display() {
        printf("\nThe stack elements are : ");
        if(top == -1) {
            printf("\nthe stack is empty");
        } else {
           for(i=top; i>=0; i--) {
            printf("\n%d",stack[i]);
           }
        }
    }
