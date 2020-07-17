/*
 ============================================================================
 Name        : Ass18.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*
 ============================================================================
 Name        : Ass7.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define n 10
int top=-1;
char s[n];

	void push(int data)
	{
		if(top==n-1)
		{
			printf("\n Stack is overflow");
			return;
		}
		top++;
		printf("\n Enter value of stack");
		scanf("%d",&data);
		s[top]=data;



	}
	int pop(int data)
	{
		if(top<=0)
		{
			printf("\n stack is empty");
			return 0;
		}
		printf("\n Poped value-%d",s[top]);
		top--;

		data=s[top];
		return 0;
	}
int peep(int pos)
{
	int temp;
	if(top-pos+1 < 0)
	{
		printf("\n Stack is Underflow");
		return 0;
	}
	temp=s[top-pos+1];
	printf("\n %d ",temp);
	return 0;
}
void display()
{
	int i,j,ch;
	do{
		printf("\n 1.top to bottom-");
		printf("\n 2.bottom to top-");
		printf("\n 0.Exit");
		printf("\n Enter your choice-");
		scanf("%d",&ch);

		switch(ch)
		{
		case 1:
			for(i=top;i>=0;i--)
			{
				printf("\n%5d",s[i]);
			}
			break;
		case 2:
			for(i=0;i<=top;i++)
			{
				printf("\n%5d",s[i]);
			}
			break;
		case 0:
			break;
		}
	}while(ch!=0);
}
void sort()
{
	int temp, l,m,i;
	for(l=0;l<=top;l++)
	{
		for(m=0;m<=top;m++)
		{
			if(s[l]>s[m])
			{
				temp=s[l];
				s[l]=s[m];
				s[m]=temp;
			}
		}
	}

	for(i=top;i>=0;i--)
		{
			printf("\n%5d",s[i]);
		}



}
void main()
{
	int ch,pos,data;
	do{
		printf("\n 1.push-");
		printf("\n 2.pop-");
		printf("\n 3.peep-");
		printf("\n 4.Display-");
		printf("\n 5.sort-");
		printf("\n 0.exit-");
		printf("\n Enter your choice-");
		scanf("%d",&ch);

		switch(ch)
		{
		case 1:
			push(data);
			break;
		case 2:
			pop(data);
			break;
		case 3:
			printf("Enter position-");
			scanf("%d",&pos);
			peep(pos);
			break;
		case 4:
			display();
			break;
		case 5:
			sort();
			break;
		case 0:
			printf("\n TATA");
			break;
		}
	}while(ch!=0);
}
