/*
 ============================================================================
 Name        : L.c
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
}*first=NULL,*last=NULL,*temp,*nn;
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
		/*case 2:
			disp();
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
			*/
		case 0:
			break;
		}
	}while(ch!=0);
}
void create()
{
	int data;
	while(data!=0)
	{
		printf("\n Enter data(exit for 0)");
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
	}

}
