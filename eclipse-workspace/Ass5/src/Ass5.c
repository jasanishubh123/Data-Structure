/*
 ============================================================================
 Name        : Ass5.c
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
	int a[3][3][3],i,j,k,data;
	for(i=0;i<3;i++)
	{
			for(j=0;j<3;j++)
			{
				for(k=0;k<3;k++)
				{
					printf("\n Enter element a[%d][%d][%d]-",i,j,k);
					scanf("%d",&a[i][j][k]);
				}
			}
	}
printf("\n Matrix is-\n");
for(i=0;i<3;i++)
{
	printf("\n");
		for(j=0;j<3;j++)
		{
			printf("\n");
			for(k=0;k<3;k++)
			{
				printf("%5d",a[i][j][k]);
			}
		}
}
printf("\n Enter element you want to search-");
scanf("%d",&data);
for(i=0;i<3;i++)
{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				if(data==a[i][j][k])
				{
					printf("\nLocation is-a[%d][%d][%d]",i,j,k);
				}
			}
		}
}
}


