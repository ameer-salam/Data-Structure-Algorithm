#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct NODE
{
	int info;
	struct NODE *LINK;
}
main()
{
	struct NODE *FIRST=NULL, *new, *temp;
	int n, i, data;
	printf("How many nodes do you want to enter: ");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		new=malloc(sizeof(struct NODE));
		printf("Enter the Information\n");
		scanf("%d", &data);
		new->info=data;
		new->LINK=NULL;
		if(FIRST == NULL)
		{
			FIRST=new;
		}
		else
		{
			temp=FIRST;
			while(temp->LINK!=NULL)
			{
				temp=temp->LINK;
			}
			temp->LINK=new;
		}
		//display
		temp=FIRST;
		while(temp!=NULL)
		{
			printf("%d\n", temp->info);
			temp=temp->LINK;
			}
	}
	
}
