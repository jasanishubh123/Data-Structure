/*
 ============================================================================
 Name        : Ass6.c
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
int s[n];
void main()
{
	int ch,pos,data,i,j,co;
	do{
		printf("\n 1.push-");
		printf("\n 2.pop-");
		printf("\n 3.peep-");
		printf("\n 4.Display-");
		printf("\n 0.exit-");
		printf("\n Enter your choice-");
		scanf("%d",&ch);

		switch(ch)
		{
		case 1:
			if(top==n-1)
					{
						printf("\n Stack is overflow");
						return;
					}
					top++;
					printf("\n Enter value of stack");
					scanf("%d",&data);
					s[top]=data;
			break;
		case 2:
			if(top<=0)
					{
						printf("\n stack is empty");
					}
					printf("\n Poped value-%d",s[top]);
					top--;

					data=s[top];
			break;
		case 3:
			printf("Enter position-");
			scanf("%d",&pos);
			int temp;
				if(top-pos+1 < 0)
				{
					printf("\n Stack is Underflow");
				}
				temp=s[top-pos+1];
				printf("\n %d ",temp);
			break;
		case 4:
				do{
					printf("\n 1.top to bottom-");
					printf("\n 2.bottom to top-");
					printf("\n 0.Exit");
					printf("\n Enter your choice-");
					scanf("%d",&co);

					switch(co)
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
				}while(co!=0);
			break;
		case 0:
			printf("\n TATA");
			break;
		}
	}while(ch!=0);
}
