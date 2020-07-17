/*
 ============================================================================
 Name        : S_L_L.c
 Author      : Shubham jasani
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
		struct node *next;
}*nn,*first=NULL,*last,*q;
void create ()
{
	int data;
	do{
		printf("\n Enter data (exit for 0)");
		scanf("%d",&data);
		if(data==0)
			{
				break;
			}

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

	}
	last=nn;
	count++;
		}while(1);
}
void addbeg()
{
	int data;
	printf("Enter data-");
	scanf("%d",&data);
	nn=(struct node *)malloc(sizeof(struct node));
	nn->info=data;
	nn->next=NULL;
	nn->next=first;
	first=nn;
	count++;
}
void addend()
{
	int data;
	printf("Enter data-");
		scanf("%d",&data);
	nn=(struct node *)malloc(sizeof(struct node));
	nn->info=data;
		nn->next=NULL;
	last->next=nn;
	last=nn;
	count++;
}
void addmid()
{
	int data,p,i;
	printf("\n Enter position & data-");
	scanf(" %d%d",&p,&data);
	nn=(struct node *)malloc(sizeof(struct node));
	nn->info=data;
		nn->next=NULL;
	q=first;
	for(i=0;i<p-2;i++)
	{
		q=q->next;
	}
	nn->next=q->next;
	q->next=nn;
	count++;
}
void delbeg()
{
	q=first;
	first=first->next;
	free(q);
	count--;
	printf("\n ****************************************Node is Deleted****************************************");
}
void delend()
{
	struct node *t;
	t=last;
	q=first;
	while(q->next!=last)
	{
		q=q->next;
	}
	last=q;
	last->next=NULL;
	free(t);
	count--;
	printf("\n ****************************************Node is Deleted****************************************");
}
void delmid()
{
	int p,i;
	struct node *t;
	printf("\n Enter position");
	scanf("%d",&p);
	q=first;
	for(i=0;i<p-2;i++)
	{
		q=q->next;
	}
	t=q->next;
	q->next=t->next;
	free(t);
	count--;
	printf("\n ****************************************Node is Deleted****************************************");
}
void disp()
{
	if(first==NULL)
	{
		printf("\n ****************************************list is empty*******************************************");
		return;
	}
	q=first;
	do
	{
		printf("%5d",q->info);
				q=q->next;
	}while(q!=NULL);

}
void average()
{
	float avg;
	q=first;
	while(q!=NULL)
	{
		avg=avg+q->info;
		q=q->next;
	}
	printf("\n Average of all nodes-%f",avg/count);
}
void main()
{
	int ch,data;
			printf("\n ________________________1.Create List-_______________________");
			printf("\n ________________________2.Add begin Node__________________-");
			printf("\n ________________________3.Add last Node-____________________");
			printf("\n ________________________4.Add Middle Node-_________________");
			printf("\n ________________________5.Delete begin Node-________________");
			printf("\n ________________________6.Delete last Node-__________________");
			printf("\n ________________________7.Delete Middle Node-_______________");
			printf("\n ________________________8.average of nodes-_________________");
			printf("\n ________________________0.Display List-_________________");
			printf("\n_________________________10. Exit_____________________________");
	do{

		printf("\n Enter your choice-");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:
			create();
			break;
		case 2:
			addbeg();
			break;
		case 3:
			addend();
			break;
		case 4:
			addmid();
			break;
		case 5:
			delbeg();
			break;
		case 6:
			delend();
			break;
		case 7:
			delmid();
			break;
		case 0:
			disp();
			break;
		case 8:
			average();
			break;
		case 10:
			printf("\n**********************************************End of Program*****************************************");
			break;
		}
	}while(ch!=10);
}
