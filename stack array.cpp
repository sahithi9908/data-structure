#include<stdio.h>
int st[100],i,j,choice=0,n,top=-1;
void push();
void pop();
void show();
int main ()
{
	printf("enter the elements into stack as array");
	scanf("%d",&n);
	printf("stack operations");
	printf("\n...\n");
	while(choice!=4)
	{
		printf("choose options ");
		printf("\n1.push\n2.pop\n3.show\n4.exit");
		printf("\n enter choice \n");
		scanf("%d",&choice);
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
					show();
					break;
				}
				case 4:
				{
					printf("exit");
					break;
				}
				default:
				{
					printf("please enter valid choice");
					return 0;
				}
		};
	}
	return 0;
}
void push()
{
	int val;
	if(top==n)
	printf("overflow \n");
	else{
		printf("enter the value");
		scanf("%d",&val);
		top=top+1;
		st[top]=val;
	}
}
void pop()
{
    if(top==-1)
    {
        printf("\n Stack is under flow");
    }
    else
    {
        printf("\n The popped elements is %d ",st[top]);
        top--;
    }
}
void show()
{
	for(i=top;i>0;i--)
	{
		printf("%d\n",st[i]);
	}
	if(top==-1)
	{
		printf("the stack is empty");
	}
}
