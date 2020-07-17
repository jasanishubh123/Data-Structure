/*
 ============================================================================
 Name        : Ass13.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

char stack3[' '];
int top=-1,i;

char pop(char stack[],int i)
{
	return stack[i];
}
void push(char c)
{
	stack3[++top]=c;
}
void disp()
{
	for(i=0;i<=top;i++)
	{
		printf("\n%c",stack3[i]);
	}
}
void main()
{
	char stack1[' '],stack2[' '],c;
	int l,l1;
	printf("\n Enter 1 stack-");
	gets(stack1);
	printf("\n Enter 2 stack-");
	gets(stack2);
	l=strlen(stack1);
	l1=strlen(stack2);
	for(i=0;i<l || i<l1;i++)
	{
		if(i!=l)
		{
			c=pop(stack1,i);
			push(c);
		}
		if(i!=l1)
		{
			c=pop(stack2,i);
			push(c);
		}
	}
	disp();
}
