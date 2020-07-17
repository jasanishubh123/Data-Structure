/*
 ============================================================================
 Name        : Ass2.c
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
	int a[10][2][4],i,j,k,n;
	printf("\n Enter number of student-");
	scanf("%d",&n);
	printf("\n Enter information of student-");
	for(i=0;i<n;i++)
	{
		printf("\n student-%d",i+1);
		for(j=0;j<2;j++)
		{
			printf("\n sem-%d",j+1);
			printf("\n Enter Attendence and marks of 3 subject");
			for(k=0;k<4;k++)
			{
				scanf("%d",&a[i][j][k]);
			}
		}
	}

	printf("\n **************************************");
	printf("\n Information       of         students");
	printf("\n **************************************");

	for(i=0;i<n;i++)
	{
		printf("\n Student -%d",i+1);
		printf("\n________________________________________");
		printf("\n sem  Attendence  Marks1  Marks2  Marks3");
		printf("\n________________________________________");
		for(j=0;j<2;j++)
		{
			printf("\n %7d",j+1);
			for(k=0;k<4;k++)
			{
				printf("%7d",a[i][j][k]);
			}
		}
	}
	printf("\n________________________________________");
}
