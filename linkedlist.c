#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node* link;
};
struct node *head=NULL,*temp;
void insertion(){
        int pos;
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the element and position:\n");
	scanf("%d %d",&newnode->data,&pos);
	newnode->link=NULL;
	if(head==NULL){
		head=newnode;
	}
	else{
		int count=1;
                temp=head;
		while(temp->link != NULL){
			count++;
			temp=temp->link;
		}
		if(pos<1 || pos>count+1){
			printf("Invalid position..\n");
			return;
		}
	}
}
void deletion(){
	printf("DEL\n");
}
void search(){
	printf("SRC\n");
}
void traversal(){
	temp=head;
	while(temp->link!=NULL){
		printf("%d",temp->data);
		temp=temp->link;
	}
}
int  main(){
	int ch;
	while(1){
		printf("\n\n\nEnter your choice:\n1.Insertion\n2.Deletion\n3.Search\n4.Traversal\n5.Exit\n\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:insertion();
			       break;
			case 2:deletion();
			       break;
			case 3:search();
			       break;
			case 4:traversal();
			       break;
			default:printf("EXITING....\n");
			       	return 0;
		}
			
	}
}

