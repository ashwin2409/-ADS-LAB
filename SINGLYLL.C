#include<stdio.h>
#include<stdlib.h>
struct node
{
  int info;
  struct node *ptr;
 }*top,*top1,*temp;
 void push(int data);
 int topelement();
 void pop();
 void empty();
 void stack_count();
 void destroy();
 void display();
 void create();
 int  count=0;
 void main()
 {
   int no,ch,e;
   clrscr();
   printf("\n 1:Push");
   printf("\n 2:POP");
   printf("\n 3:TOP");
   printf("\n 4:Empty");
   printf("\n 5:DISPLAY ");
   printf("\n 6:DESTROY");
   printf("\n 7:STACK_COUNT");
   printf("\n 8: EXIT");
   create();
   while(1)
   {
     printf("\n Enter your choice");
     scanf("%d",&ch);
     switch(ch)
     {
       case 1:
	printf("Enter the data");
	scanf("%d",&no);
	push(no);
	break;
	case 2:
	       pop();
	       break;
	case 3:
	      if(top==NULL)
	      {
		printf("No elements in stack");
	      }
	      else
	      {
	       e=topelement();
	       printf("top element:%d",e);
	      }
	       break;

	 case 4:
		empty();
		break;
	 case 5:
		display();
		break;
	 case 6:
		destroy();
		break;
	 case 7:
		stack_count();
		break;
	  case 8:
		 exit(0);
		 break;
	  default:
		   printf("Wrong choice ,enter again");
		   break;
      }
   }
}
 void create()
    {
      top=NULL;
     }
  void stack_count()
     {
      printf("No of elements",count);
     }
void push(int data)
 {
   if(top==NULL)
   {
     top=(struct node *)malloc(1*sizeof(struct node));
      top->ptr=NULL;
      top->info=data;
    }
    else
    {
      temp=(struct node *)malloc(1*sizeof(struct node));
      temp->ptr=top;
      temp->info=data;
      top=temp;
     }
     count++;
   }
void pop()
     {
       top1=top;
       if(top1==NULL)
	{
	  printf("stack is empty");
	  return;
	 }
	else
	{
	 top1=top1->ptr;
	 printf("popped value is %d",top->info);
	 free(top);
	 top=top1;
	 }
	 count--;
     }
int topelement()
{
  return(top->info);
}
void destroy()
     {
	top1=top;
	while(top1!=NULL)
	{
	  top1=top1->ptr;
	  free(top);
	  top=top1;
	  top1=top1->ptr;
	}

	free(top1);
	top=NULL;
	printf("\n All stack element destroyed");
	count=0;
     }
void display()
     {
       top1=top;
       if(top1==NULL)
       {
	 printf("stack is empty");
	 return;
       }
       while(top1!=NULL)
       {
	 printf("%d",top1->info);
	 top1=top1->ptr;
       }
     }
void empty()
     {
	if(top==NULL)
	printf("\n Stack is empty");
	else
	printf("\n Stack is not empty with %d element",count);
     }










