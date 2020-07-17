/*
 ============================================================================
 Name        : student_ll.c
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
	int rno,sem;
	char name[10];
	struct node *next;
}*first=NULL,*last,*q,*nn,*temp;
void main()
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
			disp();
			break;
		/*case 3:
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
			break;*/
		}
	}while(ch!=0);
}
void create()
{
	int c;
	do
	{
		nn=(struct node *)malloc(sizeof(struct node));
		printf("\n Enter roll no");
		scanf("%d",&nn->rno);
		printf("\n Enter name-");
		scanf("%s",&nn->name);
		printf("\n Enter semester");
		scanf("%d",&nn->sem);
		nn->next=NULL;
		if(first==NULL)
		{
			first=nn;
		}
		else
		{
			last->next=nn;
		}
		last=nn;

		printf("if u want to cont (1/0)");
		scanf("%d",&c);
		if(c==0)
		{
			break;
		}
	}while(1);

}
void disp()
{
	if(first==NULL)
	{
		printf("\n List is empty");
	}
	q=first;
	do
	{
		printf("%5d %-10s %5d\n",q->rno,q->name,q->sem);
		q=q->next;
	}while(q!=NULL);

}

/*void insert_f()
{
	int data;
	nn=(struct node *)malloc(sizeof(struct node));

	printf("\n Enter data-");
	scanf("%d",&data);
	nn->info=data;
	nn->next=first;
	first=nn;
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
	nn->next=q->next;
	q->next=nn;
	}
}
void delete_f()
{
	q=first;
	first=first->next;
	free(q);
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
	last->next=NULL;
}
void delete_m()
{
	int pos,i;
	printf("\n Enter position-");
	scanf("%d",&pos);
	q=first;
	for(i=1;i<=pos-2;i++)
	{
	q=q->next;
	}
	temp=q->next;
	q->next=temp->next;
	free(temp);
}
*/
