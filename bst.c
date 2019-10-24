#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *left, *right;
};
struct node *root = NULL, *parent, *ptr;
int flag;

void ins();
void del();
void srch();
void pre();
void in();
void post();



void main(void){
	int ch;
	while(1){
		printf("\n\tMENU\n\t====\n\t1. Insert\n\t2. Delete\n\t3. Search\n\t4. Preorder traversal\n\t5. Inorder traversal\n\t6. Postorder traversal\n\t7. Exit\n\n\tEnter your choice\t");
		scanf("%d", &ch);
		switch(ch){
			case 1 : ins();
					 break;
			case 2 : del();
					 break;
			case 3 : srch();
					 break;
			case 4 : pre();
					 break;
			case 5 : in();
					 break;
			case 6 : post();
					 break;
			case 7 : exit(0);
			default : printf("\tInvalid input\n");
		}
	}
}

void ins(){
	int x;
	struct node* newnode;
	newnode = (struct node*)malloc(sizeof(struct node));
	printf("\tEnter data to be inserted\t");
	scanf("%d", &x);
	newnode->data = x;
	newnode->left = NULL;
	newnode->right = NULL;
	if(root == NULL){
		root = newnode;
	}
	else{
		ptr = root;
		flag = 0;
		while((ptr!=NULL) && (flag==0)){
			if(x < ptr -> data){
				parent = ptr;
				ptr = ptr -> left;
			}
			else if(x > ptr -> data){
				parent = ptr;
				ptr = ptr->left;
			}
			else
				flag = 1;
		}
		if(flag == 1)
			printf("\tValue exists ");
		else{
			if(x > parent -> data)
				parent -> right = newnode;
			else
				parent -> left = newnode;
		}
	}
}

void del(){
	int temp;
	if(root==NULL){
		printf("\tBST is empty");
	}
	else{
		ptr = root;
		flag = 0;
		while((ptr!=NULL) && (flag==0){
			if(x< ptr->data)		
				parent = ptr;
				ptr = ptr->left;	
			else if(x > ptr->right){
				parent = ptr;
				ptr = ptr->right;
			}
			else
				flag = 1;
		}
	}
	if(flag ==0)
		printf("Value not found");
	else{
		if((ptr->left == NULL) && (ptr->right == NULL)){
			if(parent->left==ptr)
				parent->left = NULL;
			else
				parent->right = NULL;
			free(ptr)
		}
		else if((prt->left!=NULL) && (ptr->right==NULL)){
			succ = ptr->right;
			while(succ->left!=cNULL)
				succ = succ->left;
			data = succ->dat
			delete(succ->data)
			ptr->data = temp;
		}
		else{
			if(parent->left == ptr){
				if(parent->left == NULL)
				 	parent->left = ptr->right;
				 else
				 	parent->left = ptr->left;
			}
			else if(parent->right == ptr){
				if(ptr->left == NULL)
					parent->right = ptr->right;
				else
					parent->right = ptr->left;
			}
			free(ptr);
		}
	}
}  

void srch(){
	ptr = root;
	flag = 0;
	printf("\tEnter data to be searched\t");
	scanf("%d", &x);
	while((ptr!=NULL) && (flag == 0)){
		if(x < ptr->data)
			ptr = ptr->left;
		else if(x > ptr->data)
			ptr = ptr->right;
		else
			flag = 1;
	}
	if(flag==1)
		printf("\tElement found");
	else
		printf("\tElement found");
}
