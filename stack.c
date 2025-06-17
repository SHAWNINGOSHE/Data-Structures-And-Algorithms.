/*Author:Shawn Douglas
Reg No:BSE-05-0199/2024
Group:Group 3
*/

#include<stdio.h> 

#define MAX 6


int stack [MAX];
int top =-1;

void push(int x){
	
	if(top==MAX -1)
	{
		
		printf("stock is full\n");
	}
	else{
		stack[++top]=x;
		printf("%d has been added\n ",x);
	}
}
int main (){
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	push(60);
	push(70);
	
	return 0;
}
