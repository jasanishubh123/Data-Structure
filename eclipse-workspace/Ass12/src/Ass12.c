/*
 ============================================================================
 Name        : Ass12.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>
#define n 10
int s[n];
int top=-1;

	void push(int data)
	{
		top++;
		s[top]=data;
	}
	int pop()
	{
		int data;
		data=s[top];
		top--;
		return data;
	}
void main()
{
	char postfix[100],temp[10];
	int i,j=0,l,op1,op2,r,n1;
	printf("\n Enter postfix expression");
	gets(postfix);
	l=strlen(postfix);
	for(i=0;i<l;i++)
	{
		switch(postfix[i])
		{
		case '+':
			op2=pop();
			op1=pop();
			r=op1+op2;
			push(r);
			break;
		case '-':
			op2=pop();
			op1=pop();
			r=op1-op2;
			push(r);
			break;
		case '*':
			op2=pop();
			op1=pop();
			r=op1*op2;
			push(r);
			break;
		case '/':
					op2=pop();
					op1=pop();
					r=op1/op2;
					push(r);
					break;
		case '^':
					op2=pop();
					op1=pop();
					r=pow(op1,op2);
					push(r);
					break;
		case ',':
				if(j!=0)
				{
					temp[j]='\0';
					n1=atoi(temp);
					push(n1);
					j=0;
				}
				break;
		default:
			temp[j++]=postfix[i];
			break;
		}
	}
	printf("Answer is-%d",pop());
}
