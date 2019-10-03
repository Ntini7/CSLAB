#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* link;
};
struct node* top = NULL;
struct node* temp;

void push();
void pop();
void disp();

void main(void){
	int ch;
	while(1){
		printf("\n\tMENU\n\t====\n\t1. Push\n\t2. Pop\n\t3. Display\n\t4. Exit\n\n\tEnter your choice\t");
	scanf("%d", &ch);
		switch(ch){
			case 1 : push();
					 break;
			case 2 : pop();
					 break;
			case 3 : disp();
					 break;
			case 4 : exit(0);
			default : printf("\tInvalid input\n");
		}
	}
}

void push(){
	int x;
	struct node* newnode;
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("\tEnter data to be inserted\t");
	scanf("%d", &x);
	if(top == NULL){
		newnode->data = x;
		newnode->link = NULL;
		top = newnode;
	}
	else{
		newnode->data = x;
		newnode->link = top;
		top = newnode;
	}
	printf("\tElement Pushed\n");
}

void pop(){
	if(top == NULL)
		printf("\tUnderflow\n");
	temp = top;
	top = top->link;
	free(temp);
	printf("\tElement poped\t");
}

void disp(){
	if(top == NULL){
		printf("\tUnderflow\n");
		return;
	}
	temp = top;
	printf("\tElements ::");
	while(temp!= NULL){
		printf("\t%d\t", temp->data);
		temp = temp->link;
	}
	printf("\n");
}

