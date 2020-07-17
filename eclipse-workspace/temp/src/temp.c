#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
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
int main()
{
	char infix[' '],oper=0,o=0,postfix[' '],*p;
	int i,l,j=0,temp;
	printf("Enter infix:");
	gets(infix);
	l=strlen(infix);
	if(infix[0]=='^'||infix[0]=='*'||infix[0]=='/'||infix[0]=='+'||infix[0]=='-')
	{
		printf("NOt Correct");
		return 0;
	}
	else if(infix[l-1]=='^' || infix[l-1]=='*' || infix[l-1]=='/' || infix[l-1]=='+' || infix[l-1]=='-')
	{
		printf("NOt Correct");
		return 0;
	}
	else
	{
		for(i=0;i<l;i++)
		{
			if(i%2!=0)
			{
				if(infix[i]=='^' || infix[i]=='*' || infix[i]=='/' || infix[i]=='+' || infix[i]=='-')
				{
					o++;
				}
				else
				{
					printf("not Correct");
					return 0;
				}
			}
			else
			{
				oper++;
			}
		}
		if(oper-o==1)
		{
			printf("Correct");
		}
		else
		{
			printf("NOt Correct");
			exit(1);
		}
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
							printf("\n The Postfix Expression-%s\n",postfix);

							top=-1;
				p=postfix;

				while(*p!='\0')
				{
					if(isalpha(*p)!=0)
					{
						printf("Enter value for %c",*p);
						scanf("%d",&temp);
						push(temp);
					}
					else
					{
						if(priority1(*p)==5)
						{

						}
					}
					p++;
				}
		return 0;
	}

}
