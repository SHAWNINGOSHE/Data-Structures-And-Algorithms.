/*Author:Shawn Douglas
Reg No:BSE-05-0199/2024
Group:Group 3
*/

#include <stdio.h>

#define MAX 6

int stack[MAX];
int top = -1;
int i;


void push(int x) {
    if (top == MAX - 1) {
        printf("Stack is full\n");
    } else {
        stack[++top] = x;
        printf("%d has been added\n", x);
    }
}


void pop() {
    if (top == -1) {
        printf("You cannot remove — Stack is empty!\n");
    } else {
        int y = stack[top--];
        printf("%d has been removed from the stack\n", y);
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        for (i = top; i >= 0; i--) {
            printf("stack[%d] = %d\n", i, stack[i]);
        }
    }
} 


int main() {
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    push(70);  

    printf("\nStack after pushes:\n");
    display();

    pop();
    pop();
    pop();

    printf("\nStack after 3 pops:\n");
    display();

    return 0;
}
