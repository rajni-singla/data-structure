#include<stdio.h>
#include<conio.h>

void push(int value);
void display();


struct node
{
    int data;
    struct node *link;
};

struct node *top=NULL,*temp;

int main()
{
    int choice,data;


    while(1)
    {

        printf("\n1.Push\n2.Display\n3.Exit\n");
        printf("\nEnter ur choice:");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("Enter a new element :");
            scanf("%d",&data);
            push(data);
            break;
        case 2:
            display();
            break;
        case 3:
            exit(0);
        }

    }
getch();
return 0;
}
push(int data)
{
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=data;
    temp->link=top;
    top=temp;
}
display()
{
    temp=top;
    if(temp==NULL)
        {
            printf("\nStack is empty\n");
        }
    while(temp!=NULL)
        {
            printf(" %d ->",temp->data);
            temp=temp->link;
        }
        getch();
}
