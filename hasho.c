#include<stdio.h>
#include<stdlib.h>
#define Max 10

struct node{
	int data;
	struct node* link;
}node;
struct node* head = NULL;

int ins();
int srch();
int disp();

int arr[20], use[20];

void main(){
	int n, ch, i;
	while(1){
		printf("\n\tMENU\n\t====\n\t1. Insert\n\t2. Search\n\t3. Display\n\t4. Exit\n\n\tEnter your choice\t");
	scanf("%d", &ch);
		switch(ch){
			case 1 : printf("\tEnter element to be inserted\t");
					 scanf("%d", &n);
					 i = ins(n);
					 if(i==1)
					 	printf("\tInserted successfully\n");
					 else
					 	printf("\tNo space left\n");
					 break;
			case 2 : printf("\tEnter element to be searched\t");
					 scanf("%d", &n);
					 i = srch(n);
					 if(i==-1)
					 	printf("\tElement not found");
					 else
					 	printf("\tElement found at %d", i);
					 break;
			case 3 : i = disp();
					 if(i==-1)
					 	printf("\tArray is empty");
					 break;
			case 4 : exit(0);
			default : printf("\tInvalid input\n");
		}
	}
}

int ins(int n){
	int flag=0, mod=n%10, i=(mod+1)%Max;
	struct node* newnode= (struct node*)malloc(sizeof(node));
	newnode->data = n;
	temp = arr[mod];
	
}

int srch(int n){
	int mod=n%10, i=(mod+1)%Max;
	if(use[mod]==0)
		return -1;
	else if(arr[mod]==n)
		return mod;
	while(i<mod){
		if(arr[i]==n)
			return i;
		i=i%10;
	}
	return -1;
}

int disp(){
	int i, flag=0;
	for(i=0;i<Max;++i){
		if(use[i]==1){
			printf("\t%d  ", arr[i]);
			flag=1;
		}
	}
	if(flag==0)
		return -1;
	else
		return 1;
}
