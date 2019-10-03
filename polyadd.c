      //THIS CODE WORKS FOR UNSORTED DATA.DATA IS SORTED FOR A GIVEN POLYNOMIAL EXPRESSION..
#include<stdio.h> 
#include<stdlib.h>
     struct link{
       int coeff;
       int pow;
       struct link *next;
       };
     struct link *poly1=NULL,*poly2=NULL,*poly=NULL;
    void create(struct link *node)
    {
     int n,i;
    printf("enter number of terms\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    printf("\n enter coeff:");
    scanf("%d",&node->coeff);
    printf("\n enter power:");
     scanf("%d",&node->pow);
    node->next=(struct link*)malloc(sizeof(struct link));
    node=node->next;
    node->next=NULL;
    }
    } 
    void show(struct link *node)
    {
     while(node->next!=NULL)
    {
     printf("%dx^%d",node->coeff,node->pow);
     node=node->next;
     if(node->next!=NULL)
     printf("+");
    }
    }
     void polyadd(struct link *poly1,struct link *poly2,struct link *poly)
     {
     while(poly1->next &&  poly2->next)
     {
      if(poly1->pow>poly2->pow)
      {
       poly->pow=poly1->pow;
       poly->coeff=poly1->coeff;
       poly1=poly1->next;
       }
      else if(poly1->pow<poly2->pow)
      {
       poly->pow=poly2->pow;
       poly->coeff=poly2->coeff;
       poly2=poly2->next;
       }
      else
      {
       poly->pow=poly1->pow;
       poly->coeff=poly1->coeff+poly2->coeff;
       poly1=poly1->next;
       poly2=poly2->next;
       }
      poly->next=(struct link *)malloc(sizeof(struct link));
      poly=poly->next;
      poly->next=NULL;
     }
     while(poly1->next || poly2->next)
     {
      if(poly1->next)
      {
       poly->pow=poly1->pow;
       poly->coeff=poly1->coeff;
       poly1=poly1->next;
       }
      if(poly2->next)
      {
       poly->pow=poly2->pow;
       poly->coeff=poly2->coeff;
       poly2=poly2->next;
       }
       poly->next=(struct link *)malloc(sizeof(struct link));
       poly=poly->next;
       poly->next=NULL;
       }
        }
/*       void sort(struct link*node)
       {
    struct link *i,*j;
    int t;
    for(i=node;i->next!=NULL;i=i->next)
    {
        for(j=i->next;j!=NULL;j=j->next)
        {
            if(i->pow<=j->pow)
            {
                t=i->pow;
                i->pow=j->pow;
                j->pow=t;
                t=i->coeff;
                i->coeff=j->coeff;
                j->coeff=t;
            }
        }
    }
     } */
   void main()
    {
      poly1=(struct link *)malloc(sizeof(struct link));
      poly2=(struct link *)malloc(sizeof(struct link));
      poly=(struct link *)malloc(sizeof(struct link));
      printf("\nenter polynomial1\n");
      create(poly1);
      //sort(poly1);
      printf("\nenter polynomial2\n");
      create(poly2);
      //sort(poly2);
      printf("\n1st Number:");
      show(poly1);
      printf("\n2nd Number:");
      show(poly2);
      polyadd(poly1,poly2,poly);
      printf("\nAdded polynomial:");
      show(poly);
      printf("\n");
     }
