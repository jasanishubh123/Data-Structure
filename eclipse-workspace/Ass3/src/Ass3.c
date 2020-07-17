/*
 ============================================================================
 Name        : Ass3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void main()
{
char name[6][10];
char *p=name;
int i;
	for(i=0;i<6;i++)
	{
		printf("\n Enter string-");
		gets(p);
		p=p+10;
	}
	for(i=0;i<6;i++)
	{
		p=p-10;
		printf("\n The string is-%s",p);
	}
}
