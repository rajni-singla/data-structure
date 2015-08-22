#include<stdio.h>
#include<stdlib.h>
#include"tree.h"

int main()
{
	int r,t,key,value;
	while(1)
	{	
	printf("enter\n1.insert\n2.display\n3.exit\n");
	scanf("%d",&r);
	switch(r)
	{
	case 1:
		printf("enter key and value\n");
		scanf("%d%d",&key,&value);
		put(key,value);
		break;
	case 2:
		printf("whose value u want??\n");
		scanf("%d",&key);
		t=get(key);
		printf("%d\n",t);
		break;
	case 3:
		exit(0);
	}
	}
return 0;
}
