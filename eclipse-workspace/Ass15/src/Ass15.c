/*
 ============================================================================
 Name        : Ass15.c
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
	if((r==n-1 && f==0)|| f-r==1)
	{
		printf("\n Queue is full");
		return;
	}
	if(r==n-1)
	{
		r=0;
	}
	else
	{
		r++;
	}
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
	q[f]=0;
	if(f==r)
	{
		printf("f-%d",f);
		f=r=-1;
	}
	else if(f==n-1)
	{
		printf("set f-%d",f);
		f=0;
	}
	else {
		printf("\n Increment");
		f=f+1;
	}
	return data;
}
void display()
{
	int i;
	if(r==-1)
	{
		printf("\n Queue is empty");
		return;
	}
	if(f<=r)
	{
		for(i=f;i<=r;i++)
		{
			printf("%5d",q[i]);
		}
	}
	else
	{
		for(i=f;i<=n-1;i++)
		{
			printf("%5d",q[i]);
		}
		for(i=0;i<=r;i++)
		{
			printf("%5d",q[i]);
		}

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

