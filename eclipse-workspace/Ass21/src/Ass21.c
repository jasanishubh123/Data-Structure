/*
 ============================================================================
 Name        : Ass21.c
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
int f=-1;
int q[n];
int *p=&f,*k=&r;
void insert(int data)
{
	if(*k==n-1)
	{
		printf("\n Queue is full");
		return;
	}
	*k=*k+1;
	q[*k]=data;
	if(*p==-1)
	{
		*p=0;
	}
}
int delete()
{
	int data;
	if(*p==-1)
	{
		printf("\n Queue is full");
		return 0;
	}
	data=q[*p];
	*p=*p+1;
	if(*p==*k)
	{
		*p=*k=-1;
	}
	return data;
}
void display()
{
	int i;
	if(*k==-1)
	{
		printf("\n Queue is empty");
		return;
	}
	for(i=*p;i<=*k;i++)
	{
		printf("%5d",q[i]);
	}
}
void main()
{
	int ch,data;
	printf("\n 1.Insert-");
	printf("\n 2.Delete");
	printf("\n 3.Display");
	printf("\n 0.Exit");
	do{
		printf("\n Enter your choice");
		scanf("%d",&ch);

		switch(ch)
		{
		case 1:
			printf("\n Enter data-");
			scanf("%d",&data);
			insert(data);
			break;
		case 2:
			data=delete();
			if(data!=0)
				printf("\n The delete data is-%d",data);
			break;
		case 3:
			display();
			break;
		case 0:
			break;
		}
	}while(ch!=0);
}
