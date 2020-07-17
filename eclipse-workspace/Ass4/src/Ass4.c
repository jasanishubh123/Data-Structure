/*
 ============================================================================
 Name        : Ass4.c
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
	int a[10],k,j,l,n,m,o,b[10][10],ch,data,val;

	do{
		printf("\n 1.1D-");
		printf("\n 2.2d-");
		printf("\n Enter your choice-");
		scanf("%d",&ch);

		switch(ch)
		{
		case 1:
			for(l=0;l<10;l++)
			{
				printf("Enter element a[%d]",l);
				scanf("%d",&a[l]);
			}
			printf("\n1D array is-\n");
			for(l=0;l<10;l++)
			{
				printf("\n %5d",a[l]);
			}

			printf("\n Enter element you want to search-");
			scanf("%d",&data);

			for(l=0;l<10;l++)
			{
				if(data==a[l])
				{
					printf("\n Location is-a[%d]",l);
				}
			}
			break;
		case 2:
			printf("\n Enter row and column-");
			scanf("%d %d",&m,&o);
			for(j=0;j<m;j++)
			{
				for(k=0;k<o;k++)
				{
					printf("\n Enter element b[%d][%d]",j,k);
					scanf("%d",&b[j][k]);
				}
			}

			printf("\n 2D array is-");
			for(j=0;j<m;j++)
			{
				printf("\n");
				for(k=0;k<o;k++)
				{
				  printf("%5d",b[j][k]);
				}
			}
			printf("\n Enter value you want to search-");
			scanf("%d",&val);
			for(j=0;j<m;j++)
			{
				for(k=0;k<o;k++)
				{
				  if(val==b[j][k])
				  {
					  printf("\n Loacation is b[%d][%d]-",j,k);
				  }

				}
			}

			break;
		}
	}while(ch!=0);
}
