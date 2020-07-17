/*
 ============================================================================
 Name        : cdll.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int count=0;
struct node
{
	int info;
	struct  node *next;
	struct  node *pre;
}*nn,*first=NULL,*last=NULL,*q,*t,*x;

void create()
{
	int data;
	do{
		printf("Enter data(Enter 0 for exit)-");
		scanf("%d",&data);
		if(data==0)
			break;
		nn=(struct node *)malloc(sizeof(struct node));
		nn->info=data;
		nn->pre=NULL;
		nn->next=NULL;
		if(first==NULL)
		{
			first=nn;
		}
		else
		{
			last->next=nn;
			nn->pre=last;
		}
		last=nn;
		last->next=first;
		first->pre=last;
		count++;
	}while(1);
}
void dispf()
{
	q=first;
	do
	{
		printf("\t%d",q->info);
		q=q->next;
	}while(q->next!=first);
	printf("\t%d",last->info);
}
void dispb()
{
	q=last;
	do
	{
		printf("\t%d",q->info);
		q=q->pre;
	}while(q!=first);
	printf("\t%d",first->info);
}
void insert_f()
{
		int data;
		nn=(struct node *)malloc(sizeof(struct node));

		printf("\n Enter data-");
		scanf("%d",&data);
		nn->info=data;
		nn->next=first;
		first->pre=nn;
		nn->pre=NULL;
		first=nn;
		last->next=first;
		first->pre=last;
		count++;
}
void insert_l()
{
	int data;
	nn=(struct node *)malloc(sizeof(struct node));

	printf("\n Enter data-");
	scanf("%d",&data);
	nn->info=data;
	nn->next=NULL;
	nn->pre=last;
	last->next=nn;
	last=nn;
	last->next=first;
	first->pre=last;
	count++;
}
void insert_m()
{
	int data,pos,i;
	printf("\n Enter data -");
	scanf("%d",&data);
	printf("\n Enter position-");
	scanf("%d",&pos);
	nn=(struct node *)malloc(sizeof(struct node));
	nn->info=data;
	if(pos>count+1)
	{
		printf("\n Invalid position");
		return;
	}
	if(pos==1)
		{
			insert_f();
		}
	else
	{
	q=first;
	for(i=0;i<pos-2;i++)
	{
		q=q->next;
	}
	t=q->next;
	nn->pre=q;
	nn->next=q->next;
	q->next=nn;
	t->pre=nn;
	last->next=first;
	first->pre=last;
	}
}
void delete_f()
{
	q=first;
	first=first->next;
	first->pre=NULL;
	free(q);
	last->next=first;
	first->pre=last;
	count--;
}
void delete_l()
{
	q=first;
	while(q->next!=last)
	{
		q=q->next;
	}
	t=last;
	last=q;
	last->next=NULL;
	free(t);
	last->next=first;
	first->pre=last;
	count--;
}
void delete_m()
{
	int pos,i;
	printf("\n Enter position-");
	scanf("%d",&pos);
	if(pos>count+1)
	{
		printf("\n Enter valid position");
		return;
	}
	q=first;
	for(i=1;i<=pos-2;i++)
	{
	q=q->next;
	}
	t=q->next;
	x=t->next;
	q->next=t->next;
	x->pre=q;
	last->next=first;
	first->pre=last;
	free(t);
	count--;
}
int main()
{
	int ch;
	do{
		printf("\n 1.create node-");
		printf("\n 2.display node-");
		printf("\n 3.Insert at first-");
		printf("\n 4.Insert at middle-");
		printf("\n 5.Insert at last-");
		printf("\n 6.Delete at first-");
		printf("\n 7.Delete at middle-");
		printf("\n 8.Delete at last-");
		printf("\n Enter your choice-");
		scanf("%d",&ch);

		switch(ch)
		{
		case 1:
			create();
			break;
		case 2:
			dispf();
			printf("\n");
			dispb();
			break;
		case 3:
			insert_f();
			break;
		case 4:
			insert_m();
			break;
		case 5:
			insert_l();
			break;
		case 6:
			delete_f();
			break;
		case 7:
			delete_m();
			break;
		case 8:
			delete_l();
			break;
		case 0:
			break;
		}
	}while(ch!=0);
	return 0;
}
