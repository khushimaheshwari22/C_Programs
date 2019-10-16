#define NULL 0
#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct node
{
   int data;
   struct node *left;
   struct node *right;
}*root,*temp,*temp1,*ar[10];
void main()
{
clrscr();
root=(struct node *)malloc(sizeof(node));
root->data=5;
root->left=NULL;
root->right=NULL;
temp1= (struct node *)malloc(sizeof(node));
root->left=temp1;
temp1->data=7;
 temp1= (struct node *)malloc(sizeof(node));
 root->right=temp1;
 temp1->data=9;
 temp1->left=NULL;
 temp->right=NULL;
   temp1= (struct node *)malloc(sizeof(node));
 root->left->left=temp1;
 temp1->data=2;
 temp1->right=NULL;
 int i=0,j=0;
 ar[0]=root;
 while(i<=j)
 {
    temp=ar[i];
    printf("%d ",temp->data);
    if(temp->left!=NULL)
    {
       j=j+1;
       ar[j]=temp->left;
    }
    if(temp->right!=NULL)
    {
       j=j+1;
       ar[j]=temp->right;
       i=i+1;
    }
 }
}