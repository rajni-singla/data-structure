#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<stdlib.h>

#define MAX 5

int top=-1,stack[MAX];
void push();
void pop();
void display();

void main()
{
    int ch;
    while(1)
    {
        system("cls");
        printf("*** Stack Menu ***");
        printf("\n\n1.Push\n2.Pop\n3.Display\n4.Exit");
        printf("\n\nEnter your choice(1-4):");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 4: exit(0);

            default: printf("\nWrong Choice!!Press any key....");
                     getch();
        }
    }
}


void push()
{
    int val;
    if(top==MAX-1)
    {
        printf("\nStack is full!!Press any key....");
        getch();
    }
    else
    {
        printf("\nEnter element to push:");
        scanf("%d",&val);
        top=top+1;
        stack[top]=val;
        printf("\nPress any key....");
        getch();
    }
}


void pop()
{
    if(top==-1)
    {
        printf("\nStack is empty!!Press any key....");
        getch();
    }
    else
    {
        printf("\nDeleted element is %d\nPress any key....",stack[top]);
        top=top-1;
        getch();
    }
}


void display()
{
    int i;
    if(top==-1)
    {
        printf("\nStack is empty!!Press any key....");
        getch();
    }
    else
    {
        printf("\nStack is...\n");
        for(i=top;i>=0;--i)
            printf("%d\n",stack[i]);

    printf("\nPress any key....");
    getch();
    }
}
