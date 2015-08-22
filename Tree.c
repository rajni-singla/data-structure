#include<stdio.h>
#include<stdlib.h>
#include"tree.h"

typedef struct node node;
struct node
{
	int key;
	int value;
	node *left;
	node *right; 
};
node *root=NULL;

node *putNode(node *root,int key,int value)
{
	if(root==NULL)
	{
		root=(node *)malloc(sizeof(node));
		root->key=key;
		root->value=value;
		root->left=NULL;
		root->right=NULL;
return root;
	}
	else if(root->key > key)
		root->left=putNode(root->left,key,value);
	else if(root->key < key)
		root->right=putNode(root->right,key,value);
	else
		root->value=value;
return root;
}
void put(int key,int value)
{
	root=putNode(root,key,value);
}

int getNode(node *root,int key)
{
	if(root!=NULL)
	{
	if(root->key==key)
		return root->value;
	else if(root->key > key)
		getNode(root->left,key);
	else
		getNode(root->right,key);
	}
}
int get(int key)
{
	int r=getNode(root,key);
	return r;
}
