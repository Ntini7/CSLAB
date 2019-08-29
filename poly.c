#include<stdio.h>
#include<stdlib.h>

struct node{
	int coeff, exp;
	struct node* link;
};
struct node* head = NULL;
struct node* newnode;

void create(struct node);
void show(struct node);
add(struct node, struct node, struct node);
void sort(struct node);

void main(void){
	int ch, e, i, a = -1;
	while(1){
		printf("\n\tMENU\n\t====\n\t1. Create\n\t2. Add\n\t3. Multiply\n\t4. Traverse\n\t5. Exit\n\n\tEnter your choice\t");
		scanf("%d", &ch);
		switch(ch){
			case 1 : create(newnode);
					 break;
			case 2 : add();
					 break;
			case 3 : mult();
					 break;
			case 4 : show(newnode);
					 break;
			case 5 : exit(0);
			default : printf("\tInvalid input\n");
		}
	}
}

void create(struct node* newnode){
	int n,i;
    printf("\tEnter number of terms\t");
    scanf("%d", &n);
    for(i=0;i<n;i++){
    	printf("\tEnter coefficient\t");
	    scanf("%d", &newnode->coeff);
	    printf("\tEnter power\t");
	    scanf("%d", &newnode->pow);
	    newnode->next = (struct link*)malloc(sizeof(struct link));
	    newnode = node->next;
		newnode->next = NULL;
	}
} 
 
void show(struct node *newnode){
	while(newnode->next!=NULL){
		printf("%dx^%d ", node->coeff, node->pow);
		node = node->next;
	    if(node->next!=NULL)
    		printf(" + ");
    }
}

void add(struct node *poly1,struct node *poly2,struct node *poly){
	while(poly1->next &&  poly2->next){
		if(poly1->pow > poly2->pow){
			poly->pow = poly1->pow;
			poly->coeff = poly1->coeff;
			poly1 = poly1->next;
		}
		else if(poly1->pow < poly2->pow){
			poly->pow = poly2->pow;
			poly->coeff = poly2->coeff;
			poly2 = poly2->next;
		}
		else{
			poly->pow = poly1->pow;
			poly->coeff = poly1->coeff+poly2->coeff;
			poly1 = poly1->next;
		    poly2 = poly2->next;
		}
      	poly->next=(struct link *)malloc(sizeof(struct link));
      	poly = poly->next;
      	poly->next = NULL;
	}
	while(poly1->next || poly2->next){
		if(poly1->next){
			poly->pow = poly1->pow;
			poly->coeff = poly1->coeff;
			poly1 = poly1->next;
		}
		if(poly2->next){
			poly->pow = poly2->pow;
			poly->coeff = poly2->coeff;
			poly2 = poly2->next;
		}
		poly->next = (struct link *)malloc(sizeof(struct link));
		poly = poly->next;
		poly->next = NULL;
	}
}
void sort(struct node *newnode){
	struct link *i,*j;
    int t;
    for(i=newnode;i->next!=NULL;i=i->next){
    	for(j=i->next;j!=NULL;j=j->next){
    		if(i->pow<=j->pow){
    			t = i->pow;
                i->pow = j->pow;
                j->pow = t;
                t = i->coeff;
                i->coeff = j->coeff;
                j->coeff = t;
            }
        }
    }
}

