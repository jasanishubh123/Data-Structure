/*
 ============================================================================
 Name        : Ass11.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define n 100
char s[n];
int top=-1;

	void push(char data)
	{
		top++;
		s[top]=data;
	}
	char pop()
	{
		char data;
		data=s[top];
		top--;
		return data;
	}

	int priority(char k)
	{
		switch(k)
		{
		case '^':
			return 3;
		case '/':
		case '*':
			return 2;
		case '+':
		case '-':
			return 1;
		default:
			return 0;
		}
	}
		void main()
		{
			char infix[100],postfix[100];
			int i,j=0,l;
			printf("Enter Infix expression-");
			gets(infix);
			l=strlen(infix);

				for(i=0;i<l;i++)
				{
					switch(infix[i])
					{
					case '(':
						push(infix[i]);
						break;
					case ')':
						while(s[top]!='(')
						{
							postfix[j++]=pop();
						}
							top--;
						break;
					case '^':
					case '+':
					case '-':
					case '/':
					case '*':
							while(priority(s[top])>=priority(infix[i]))
								postfix[j++]=pop();
								push(infix[i]);
								break;
					default:
							postfix[j++]=infix[i];
							break;
					}
				}

				while(top>=0)
				{
					postfix[j++]=pop();
				}
				postfix[j]='\0';
					printf("\n The Postfix Expression-%s",postfix);
}
