#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* link;
};
struct node* head = NULL;
struct node* temp;

void ins();
void del();
int search(int);
void trav();

void main(void){
	int ch, e, i, a = -1;
	while(1){
		printf("\n\tMENU\n\t====\n\t1. Insert\n\t2. Delete\n\t3. Search\n\t4. Traverse\n\t5. Exit\n\n\tEnter your choice\t");
	scanf("%d", &ch);
	switch(ch){
		case 1 : ins();
				 break;
		case 2 : del();
				 break;
		case 3 : printf("\n\tEnter data to be searched\t");
				 scanf("%d", &e);
				 a = search(e);
				 if(a>0)
				 		printf("Element found at position %d\n",a);
				 else 
				 		printf("Not found\n");
				break;
		case 4 : trav();
				 break;
		case 5 : exit(0);
		default : printf("\tInvalid input\n");
	}
	}
}

void ins(){
	int pos, x, c;
	struct node* newnode;
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("\tEnter position for data to be inserted\t");
	scanf("%d", &pos);
	printf("\tEnter data to be inserted\t");
	scanf("%d", &x);
	if(head == NULL){
		newnode->data = x;
		newnode->link = NULL;
	}
	else{
		temp = head;
		for(c=1;c<pos-1;++c)
			temp = temp->link;
		newnode->link = temp->link;
		temp->link = newnode;
	}
}

void del(){
	int c, pos;
	if(head == NULL)
		printf("\tEmpty\n");
	else{
		c = 1;
		while(temp->link != NULL){
			temp = temp->link;
			c++;
		}
		printf("\tEnter position for data to be inserted\t");
		scanf("%d", &pos);
		if(pos<1 || pos>c){
			printf("Invalid position");
			return;
		}
		struct node* temp1;
		temp = head;
		for(c=0;c<pos-1;++c){
			temp1 = temp; 
			temp = temp->link;
		}
		temp1->link = temp->link;
		free(temp);
	}
}

int search(int e){ 
	if(head==NULL){
		printf("\tEmpty\n");
		return -1;
	}
	int c = 1;
	printf("\tEnter element to be searched\t");
	scanf("%d", &e);
	temp = head;
	while(temp->link != NULL){
		if(temp->data == e)
			return c;
		temp = temp->link;
		c++;
	}
}

void trav(){
	if(head == NULL){
		printf("\tEmpty\n");
		return;
	}
	temp = head;
	while(temp->link != NULL){
		printf("%d\t", temp->data);
		temp = temp->link;
	}
	printf("\n");
}
