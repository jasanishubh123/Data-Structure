/*
 ============================================================================
 Name        : stack_ll.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct node
{
	int info;
	struct node *next;
}*first=NULL,*last,*q,*nn,*temp;
void main()
{
	int ch;
	do{
		printf("\n 1.create node-");
		printf("\n 2.display-");
		printf("\n 3.Insert-");
		printf("\n 4.Delete-");
		printf("\n Enter your choice-");
		scanf("%d",&ch);

		switch(ch)
		{
		case 1:
			create();
			break;
		case 2:
			disp();
			printf("\n");
			disp1();
			break;
		case 3:
			insert_l();
			break;
		case 4:
			delete_l();
			break;
		}
	}while(ch!=0);
}
void create()
{
	int data;
	do
	{
		printf("\n Enter data(exit for 0)");
		scanf("%d",&data);
		if(data==0)
			break;
		nn=(struct node *)malloc(sizeof(struct node));
		nn->info=data;
		nn->next=NULL;
		if(first==NULL)
		{
			first=nn;
		}
		else
		{
			last->next=nn;
			nn->next=first;
		}
		last=nn;
	}while(1);

}
void disp()
{
	if(first==NULL)
	{
		printf("\n List is empty");
	}
	q=first;
	while(q->next!=first)
	{
		printf("%5d",q->info);
		q=q->next;
	}
	printf("%5d",last->info);
}
void disp1()
{
	if(first==NULL)
	{
		printf("\n List is empty");
	}
	q=first;
	printf("%5d",last->info);
	while(q->next!=last)
	{
		printf("%5d",q->info);
		q=q->next;
	}
	printf("%5d",q->info);

}

void insert_l()
{
	int data;
	nn=(struct node *)malloc(sizeof(struct node));

	printf("\n Enter data-");
	scanf("%d",&data);
	nn->info=data;
	nn->next=NULL;
	last->next=nn;
	last=nn;
	last->next=first;
}
void delete_l()
{
	q=first;
	while(q->next!=last)
	{
		q=q->next;
	}
	temp=last;
	last=q;
	last->next=first;
}

