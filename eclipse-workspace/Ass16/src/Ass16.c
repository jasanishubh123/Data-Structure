/*
 ============================================================================
 Name        : Ass16.c
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
void insert(int data)
{
	if(r==n-1)
	{
		printf("\n Queue is full");
		return;
	}
	r++;
	q[r]=data;
	if(f==-1)
	{
		f=0;
	}
}
int delete()
{
	int data;
	if(f==-1)
	{
		printf("\n Queue is full");
		return 0;
	}
	data=q[f];
	f++;
	if(f==r)
	{
		f=r=-1;
	}
	return data;
}
void r_display()
{
	int i;
	if(r==-1)
	{
		printf("\n Queue is empty");
		return;
	}
	for(i=r;i>=f;i--)
	{
		printf("%5d",q[i]);
	}
}
void display()
{
	int i;
	if(r==-1)
	{
		printf("\n Queue is empty");
		return;
	}
	for(i=f;i<=r;i++)
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
	printf("\n 4.Reverse Display");
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
		case 4:
			r_display();
			break;
		case 0:
			break;
		}
	}while(ch!=0);
}
