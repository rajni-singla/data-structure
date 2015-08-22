#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
       int data;
       struct node *link;
}*start;
void create()
{
     int item;
     struct node *q,*tmp;
     printf("insert element in queue");
     scanf("%d",&item);
     tmp=(struct node *)malloc(sizeof(struct node));
     tmp->data=item;
     tmp->link=NULL;
     if(start==NULL)
     {
     start=tmp;
     tmp->link=start;
     }
     else

     {
         q=start;
         while(q->link!=start)
         {
                              q=q->link;
         }
         q->link=tmp;
         tmp->link=start;
     }
}
void display()
{
     struct node *q;
     if(start==NULL)
     printf("list is empty");
     else
     {
         q=start;
         while(q->link!=start)
         {
                              printf(" %d ->",q->data);
                              q=q->link;
         }
         printf(" %d->",q->data);
         printf("%d",start->data);
     }
}
main()
{
	int choice;
	while(1)
	{
		printf("\nChoose option\n1. enqueue\n2. display\n3. exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:
            create();
			break;
		case 2:
            display();
			break;
		case 3:
            printf("EXIT");
			exit(0);
			break;
		default:
			printf("INVALID CHOICE");
			break;
		}
	}
	getch();
	return 0;
}
