/*
 ============================================================================
 Name        : Ass17.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>
#define n 5
int r=-1;
char s[n];

	void insert(int data)
	{
		if(r==n-1)
		{
			printf("\n Queue is overflow");
			return;
		}
		r++;
		printf("\n Enter value of Queue");
		scanf("%d",&data);
		s[r]=data;



	}
	int delete(int data)
	{
		if(r<=0)
		{
			printf("\n Queue is empty");
			return 0;
		}
		printf("\n Deleted  value-%d",s[r]);
		r--;

		data=s[r];
		return 0;
	}
void display()
{
	int i;
			for(i=0;i<=r;i++)
			{
				printf("%5d",s[i]);
			}

}
void main()
{
	int ch,data;
	do{
		printf("\n 1.Insert-");
		printf("\n 2.Delete-");
		printf("\n 3.Display-");
		printf("\n 0.exit-");
		printf("\n Enter your choice-");
		scanf("%d",&ch);

		switch(ch)
		{
		case 1:
			insert(data);
			break;
		case 2:
			delete(data);
			break;
		case 3:
			display();
			break;
		case 0:
			printf("\n TATA");
			break;
		}
	}while(ch!=0);
}

