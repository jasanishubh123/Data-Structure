/*
 ============================================================================
 Name        : Ass1.c
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
	int a[10],n,i,j,ch,c,pos,p,data,t,search,flag,b[10][10];
	int cho,choice,r,cl,edit,up;
	do{
		printf("\n1.1D-");
		printf("\n2.2D-");
		printf("\n 10.Exit");
		printf("\n Enter choice-");
		scanf("%d",&ch);

		switch(ch)
		{
		case 1:
			do{
				printf("\n 1.Input-");
				printf("\n 2.Display-");
				printf("\n 3.Delete-");
				printf("\n 4.Add-");
				printf("\n 5.Sorting-");
				printf("\n 6.Search-");
				printf("\n 0.exit");
				printf("\n Enter your choice-");
				scanf("%d",&c);
				switch(c)
				{
				case 1:
					printf("\n Enter no of element-");
					scanf("%d",&n);
					for(i=0;i<n;i++)
					{
						printf("\n element a[%d]",i);
						scanf("%d",&a[i]);
					}

				break;
				case 2:
					for(i=0;i<n;i++)
					{
						printf("\n element a[%d]-%d",i,a[i]);
					}
					break;
				case 3:
					printf("\n Enter position");
					scanf("%d",&pos);
					for(i=pos;i<n;i++)
					{
						a[i-1]=a[i];
					}
					n--;
					break;
				case 4:
					printf("\n Enter position and data-");
					scanf("%d %d",&pos,&data);
					pos--;
					for(i=n;i>=pos;i--)
					{
						a[i+1]=a[i];
						a[pos]=data;
					}
					n++;
					break;
				case 5:
					for(i=0;i<n;i++)
					{
						for(j=0;j<n;j++)
						{
							if(a[i]>a[j])
							{
								t=a[i];
								a[i]=a[j];
								a[j]=t;
							}
						}
					}
					break;
				case 6:
					printf("\n Enter element you want to search-");
					scanf("%d",&search);
					flag=0;
					for(i=0;i<n;i++)
					{
						if(search==a[i])
						{
							flag=1;
							break;
						}
					}
					if(flag==1)
					{
						printf("\n Element found at a[%d]",i);
					}
					else
						printf("\n Not found");
					break;
				case 0:
					printf("\n Go main menu");
					break;

				}
			}while(c!=0);

		break;
		case 2:
			do{
				printf("\n 1.Insert 2d array-");
				printf("\n 2.Display 2d array-");
				printf("\n 3.search element in 2d array-");
				printf("\n 4.update element in 2d array-");
				printf("\n 9.Exit");
				printf("\n Enter choice-");
				scanf("%d",&cho);

				switch(cho)
				{
				case 1:
					printf("\n Enter row and column");
					scanf("%d %d",&r ,
							&cl);
					for(i=0;i<r;i++)
					{
						for(j=0;j<cl;j++)
						{
							printf("\n Enter element a[%d][%d]",i,j);
							scanf("%d",&b[i][j]);
						}
					}
					break;
				case 2:
					printf("2D array is-");
					for(i=0;i<r;i++)
					{
						printf("\n");
						for(j=0;j<cl;j++)
						{
							printf(" %5d",b[i][j]);
						}
					}
					break;
				case 3:
					printf("\n Enter element you want to search-");
					scanf("%d",&search);
					flag=0;
					for(i=0;i<r;i++)
					{
						printf("\n");
						for(j=0;j<cl;j++)
						{
							if(search==b[i][j])
							{
								flag=1;
								printf("\n Element found at b[%d][%d]",i,j);
								break;
							}
						}
					}
					if(flag==0)
					{
						printf("\n Element is not found");
					}
					break;
				case 4:
					break;
					/*printf("\n Enter element you want to update-");
					scanf("%d",&edit);
					for(i=0;i<r;i++)
					{
						printf("\n");
						for(j=0;j<cl;j++)
						{
							if(edit==b[i][j])
								{
									printf("\n Enter value and position-");
									scanf("%d ",&up);

								}
						}
					}*/

				}
			}while(cho!=9);
			break;
		}while(ch!=0);
	}while(choice!=10);
}
