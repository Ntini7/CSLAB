#include<stdio.h>

#include<stdlib.h>
 
#define MAX 5
 
int top1=-1,top2=MAX,bottom=MAX,stack[MAX];
void push1();
void push2();
void pop1();
void pop2();
void display1();
void display2();
 
void main()
{
	int ch;
	
	while(1) 
	{
		printf("\n Stack Menu ");
		printf("\n1. Push1\n2. Pop1\n3. Display1\n4. Push2\n5. Pop2\n6. Display2\n7. Exit");
		printf("\n\nEnter your choice\t");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1: push1();
					break;
			case 2: pop1();
					break;
			case 3: display1();
					break;
            case 4: push2();
					break;
			case 5: pop2();
					break ;
	        case 6: display2();
		 			break;
			case 7:exit(0);
			default: printf("\nWrong Choice!!");
		}
	}
}
 
void push1()
{
	int val;
	
	if(top1==top2-1)
	{
		printf("\nStack full!!");
	}
	else
	{
		printf("\nEnter element to push:");
		scanf("%d",&val);
		top1=top1+1;
		stack[top1]=val;
	}
}
 
void push2()
{
	int val;
	
	if(top1+1==top2)
	{
		printf("\nStack full!!");
	}
	else
	{
		printf("\nEnter element to push:");
		scanf("%d",&val);
		top2=top2-1;
		stack[top2]=val;
	}
}
void pop1()
{
	if(top1==-1)
	{
		printf("\nStack empty!!");
	}
	else
	{
		printf("\nDeleted element is %d",stack[top1]);
		top1=top1-1;
	}
}
 
void pop2()
{
	if(top2==MAX)
	{
		printf("\nStack empty!!");
	}
	else
	{
		printf("\nDeleted element is %d",stack[top2]);
		top2=top2+1;
	}
}
void display1(){

	int i;
	
	if(top1==-1)
	{
		printf("\nStack empty!!");
	}
	else
	{
		printf("\nStack is: \n");
    	for(int i=top1;i>=0;--i)
			printf("%d\n",stack[i]);
	}
} 

void display2()
{
	
	if(top2==MAX)
	{
		printf("\nStack empty!!");
	}
	else
	{
		printf("\nStack is: \n");
		for(int i=top2;i<MAX;i++)
			printf("%d\n",stack[i]);
	}

}




