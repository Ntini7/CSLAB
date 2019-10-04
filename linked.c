#include<stdio.h>
#include<stdlib.h>
typedef struct node 
{
int data;
node *ptr;
}node;
node *head;
head=NULL;
int insert()
{
node *newnode;
newnode=(node*)malloc(sizeof(node));
node *temp;

if (newnode==NULL){
printf("insufficient space");
exit(0);
}
else
{
  printf("enter the position and element to be inserted");
  int pos,x,ct,loc;
  ct=0;
  loc=0;
  scanf("%d%d",&pos,&x);
  newnode->data=x;
  temp=head;
  while(temp!=NULL)
  { ct++;
    temp=temp->ptr;
  }
  if(pos<1 || pos>ct+1) 
  { 
    printf("invalid position");
    return;
  }
  else if(pos==1 && head==NULL)
  {
    newnode->ptr=pos;
    loc++;
  }
 else
  { 
     while(loc<pos-1)
     {
       temp=temp->ptr;
       loc++;
     }
    newnode->ptr=temp->ptr;
    temp->ptr=newnode;   
    
  }


}
}

int main()
{
int ch;
printf("1.insert\n2.delete\n3.search\n4.traverse\n5.exit");
printf("enter your choice:");
scanf("%d",&ch);
while(1)
{
switch(ch)
{
case 1:
      insert();
      break;
/*case 2:
      delete();
      break;
case 3:
      search():
      break;
case 4:
      traverse():
      break;
case 5:
     exit(0);
     break;
*/
default:
     printf("enter a valid choice");
}
}
 



}



}
