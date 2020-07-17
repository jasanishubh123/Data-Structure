#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char infix[' '],oper=0,o=0;
	int i,l;
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
		}
		return 0;
	}

}
