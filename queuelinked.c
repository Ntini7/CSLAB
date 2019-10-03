#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* link;
};
struct node* front = NULL;
struct node* rear = NULL;
struct node* temp;

void enq();
void deq();
void disp();

void main(void){
	int ch;
	while(1){
		printf("\n\tMENU\n\t====\n\t1. Enqueue\n\t2. Dequeue\n\t3. Display\n\t4. Exit\n\n\tEnter your choice\t");
	scanf("%d", &ch);
		switch(ch){
			case 1 : enq();
					 break;
			case 2 : deq();
					 break;
			case 3 : disp();
					 break;
			case 4 : exit(0);
			default : printf("\tInvalid input\n");
		}
	}
}

void enq(){
	int x;
	struct node* newnode;
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("\tEnter data to be inserted\t");
	scanf("%d", &x);
	if(front == NULL){
		newnode->data = x;
		newnode->link = NULL;
		front = rear = newnode;
	}
	else{
		newnode->data = x;
		newnode->link = NULL;
		rear->link = newnode;
		rear = newnode;
	}
	printf("\n\tElement Enqueued\n");
}

void deq(){
	if(front == NULL)
		printf("\tUnderflow\n");
	else{
		temp = front;
		front = front->link;
		free(temp);
		printf("\n\tElement Dequeued\t");
	}
	
}

void disp(){
	if(front == NULL){
		printf("\tUnderflow\n");
		return;
	}
	temp = front;
	printf("\tElements ::");
	while(temp!= NULL){
		printf("\t%d\t", temp->data);
		temp = temp->link;
	}
	printf("\n");
}

