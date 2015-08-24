#include<stdio.h>
#include<stdlib.h>
typedef struct node node;

struct node
{
	int count;
	int key;
	node *left;
	node *right; 
};
node *root=NULL;

size(node*x)
{
	if(x==NULL)
		return 0;
	return x->count;
}
int rank(node *x,int key)
{
	if(x==NULL)
		return 0;
	if(key < x->key)
		return rank(x->left,key);
	else if(key==x->key)
		return size(x->left);
	else
		return 1+size(x->left)+rank(x->right,key);
}

node *insert(node *x,int key)
{
	if(x==NULL)
	{
		x=(node *)malloc(sizeof (node));
		x->key=key;
		x->left=NULL;
		x->right=NULL;
		x->count=1;
	return x;	
	}
	if(key < x->key)
		x->left=insert(x->left,key);
	else if(key > x->key)
		x->right=insert(x->right,key);
	else
		x->key=key;
	
	x->count=1+size(x->left)+size(x->right);
	return x;
}
void preorder(node *root)
{
	if(root==NULL)
		return;
	else
	{
		printf("%d\n",root->key);
		preorder(root->left);
		preorder(root->right);
	}
}
void inorder(node *root)
{
	if(root==NULL)
		return;
	else
	{
		inorder(root->left);
		printf("%d\n",root->key);		
		inorder(root->right);
	}
}

int main()
{
	int r,t,key,k,s;
	node *temp;
	temp=root;
	while(1)
	{	
	printf("enter\n1.insert\n2.preorder\n3.inorder\n4.rank\n5.exit\n");
	scanf("%d",&r);
	switch(r)
	{
	case 1:
		printf("enter key\n");
		scanf("%d",&key);
		root=insert(root,key);
		break;
	case 2:
		printf("preorder is\n");
		preorder(root);
		break;
	case 3:
		printf("inorder is\n");
		inorder(root);
		break;
	case 4:
		printf("whose rank u want\n");
		scanf("%d",&k);
		s=rank(root,k);		
		printf("rank is\n");
		printf("%d\n",s);
		break;		
	case 5:
		exit(0);
	}
	}
return 0;
}
