/*
 ============================================================================
 Name        : Ass22.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define n 5
int q1[n],q2[n];
int f1=-1,r1=-1,f2=-1,r2=-1;

void insert1(int data)
{
	if(r1==n-1)
	{
		printf("\n Q1 is full");
	}
	r1++;
	q1[r1]=data;
	if(f1==-1)
	{
		f1=0;
	}
}
void insert2(int data)
{
	if(r2==n-1)
	{
		printf("\n Q1 is full");
	}
	r2++;
	q2[r2]=data;
	if(f2==-1)
	{
		f2=0;
	}
}
int delete()
{
	int data;
	if(f1==-1 && f2==-1)
	{
		printf("\n Both q is empty");
		return 0;
	}
	if(f1==-1 && f2!=-1)
	{
		data=q2[f2];
		q2[f2]=0;
		if(f2==r2)
		{
			f2=r2=-1;
		}
		else
		{
			f2++;
		}
	}
	if(f1!=-1)
	{
		data=q1[f1];
				q1[f1]=0;
				if(f1==r1)
				{
					f1=r1=-1;
				}
				else
				{
					f1++;
				}
	}
	return data;
}
void display1()
{
	int i;
	if(f1==-1)
	{
		printf("\n Q1 is empty");
	}
	else{
		for(i=0;i<=n-1;i++)
		{
			printf("%5d",q1[i]);
		}
	}
}
void display2()
{
	int i;
	if(f2==-1)
	{
		printf("\n Q2 is empty");
	}
	else{
		for(i=0;i<=n-1;i++)
		{
			printf("%5d",q2[i]);
		}
	}
}
void main()
{
	int ch,data,p;
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
					printf("\n Enter priority(0/1)-");
					scanf("%d",&p);
					printf("\n Enter data");
					scanf("%d",&data);
					if(p==0)
					insert1(data);
					else if(p==1)
						insert2(data);
					else
						printf("\n Enter correct priority");
					break;
				case 2:
					data=delete();
					if(data!=0)
						printf("\n The delete data is-%d",data);
					break;
				case 3:
					printf("\n Elements in queue 1");
					display1();
					printf("\n Elements in queue 2");
					display2();

					break;
				case 0:
					break;
		}
	}while(ch!=0);
}
