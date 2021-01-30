#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
 int stack[100],choice,n,top,x,i,a=1;
  void push(void);
 void pop(void);
 void display(void);
 void pop()
 {
 	if(top==-1)
 	{
 		printf("\n (stack is underflow)");
	 }
	 else
	 {
	 	printf("\n popped element is %d",stack[top]);
	 	top--;
	 }
 }
    void display()
    {
    	if(top>=0)
    	{
    		printf("\n the element of the stack are \n ");
    		for(i=top;i>=0;i--)
    		printf("\n %d",stack[i]);
    		
		}
		else
		{
			printf("\n stack is empty");
		}
	}
    void push()
	     {
	     	int x;
	     	if(top==n-1)
	     	{
	     		printf("\n (stack is overflow)");
			 }
			 else{
			 	printf("enter a value to be pushed  ");
			 	scanf("%d",  &x);
			 	top++;
			 	stack[top]=x;
		
			 }
		 }
    int main()
{
	top=-1;
	printf("\n enter size of stack  ");
	scanf("%d", &n);
	printf("\n stack operation using array");
	  while(1)
	   {	   
	printf("\n\n 1.Push \n 2.Pop  \n 3.Display \n 4. Exit");
	 
	printf("\n Enter the choice  \n");
	
	
	scanf("%d", &choice);
	
	switch(choice)
	{
		case 1:
			 {
			 	push();
			 	break;
			 }
	   case 2:
	   	{
	   		pop();
	   		break;
		   }
		case 3:
		{
			display();
			break;
		}
		case 4:
			{
			    exit(1);	
			}
		default : {
			printf("enter valid choice(1,2,3,4)\n");
			
		}
	
	}
}
}
