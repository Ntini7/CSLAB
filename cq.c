#include<stdio.h>
#include<stdlib.h>
#define Max 5

void enq();
void deq();
void disp();

int front=-1, rear=-1, cq[Max];

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
	if(front == (rear+1)%Max){
		printf("\tCircular queue is full\n");
		return;
	}
	if(front==-1 && rear ==-1)
		front = rear = 0;
	else
		rear = (rear+1)%Max;
	printf("\tEnter data to be inserted\t");
	scanf("%d", &x);	
	cq[rear] = x;
	printf("\t%d has been enqueued\n", x);
}

void deq(){
	if(rear == -1){
		printf("\tCircular queue is empty\n");
		return;
	}
	printf("\t%d has been dequeued\n", cq[front]);
	if(front == rear)
		front = rear = -1;
	else 
		front++;
}

void disp(){
	if(rear == -1){
		printf("\tCircular queue is empty\n");
		return;
	}
	printf("\tCircular queue is ::  ");
	for(int i=front; i<=rear; ++i)
		printf("%d  ", cq[i]);
	printf("\n");
}
