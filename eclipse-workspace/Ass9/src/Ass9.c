/*
 ============================================================================
 Name        : Ass9.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define n 50
int top=-1;
char s[n];
 void push(char data)
 {
	 top++;
	 s[top]=data;
 }
 void disp()
 {
	 int i;
	 for(i=top;i>=0;i--)
	 {
		 printf("%c",s[i]);
	 }
 }
void main()
{
	char s[100];
	int l,i;
	printf("Enter string-");
	scanf("%s",&s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		push(s[i]);
	}
	disp();

}
