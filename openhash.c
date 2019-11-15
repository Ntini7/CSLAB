#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *h[10],*ptr,*ptr1,*new;
void ins(int val,int n)
{       struct node* temp;
	int i;
	i=val%n;
	ptr=h[i];
	new=(struct node *)malloc(sizeof(struct node));
	new->data=val;
	new->link=NULL;
	int flag=0;
	if(ptr==NULL)	h[i]=new;

	
	else
	{
		while(ptr!=NULL && flag==0)
		{

			if(ptr->data==val)
			{
				flag=1;
				break;
			}
                        temp=ptr;
			ptr=ptr->link;
		}
		if(flag==0)
			temp->link=new;
		else
			printf("data already exists\n");
	}
}
void print(int n)
{
 int q;
struct node*ptr4;
 for(int i=0;i<n;i++)
  {
   ptr4=h[i]; 
   while(ptr4!=NULL)
    {
     q=ptr4->data;
     printf("%d->",q);
     ptr4=ptr4->link;
     }
   printf("\n");
  }
}
void search(int key,int n)
{
	int i=key%n;
	ptr1=h[i];
	int flag=0;
	while(ptr1!=NULL && flag==0)
	{
		if(ptr1->data==key)
			flag=1;
		else
			ptr1=ptr1->link;
	}
	if(flag==1)
			printf("element found\n");
	else printf("element not found\n");
}
int main()
{
 int i,ch,n=10,key;
 for(i=0;i<n;i++)
  {
      h[i]=NULL;
  }
        while(ch!=0)
	{
		printf("\nenter choice 0.exit 1.insert 2.search 3.print\n");
		scanf("%d",&ch);
		if(ch==0)	exit(0);
		else if(ch==1)
		{
			printf("enter key: ");
			scanf("%d",&key);
			ins(key,n);
		}
		else if(ch==2)
		{
			printf("enter search element: ");
			scanf("%d",&key);
			search(key,n);
		}
               else if(ch==3)
		{
			printf("printed aray");
			print(n);
		}
         }
}
