#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *next;
	struct node *pre;
};
int search(struct node *start,struct node *end)
{
	int judge;
	judge=1;
	while(1)
	{
		if(start->next=end)
		{
			break;
		}
		if(start->next=NULL)
		{
			judge=0;
			break;
		}
		start=start->next;
	}
	return judge;
}
void quicksort(struct node *left,struct node *right)
{
	int basic;
	struct node *i;
	struct node *j;
	struct node *t;
	if(search(right,left))
		return;
	basic=left->data;
	i=left;
	j=right;
	while(i!=j)
	{
		while(j->data>=basic && search(i,j))
			j=j->pre;
		while(i->data<=basic && search(i,j))
			i=i->next;
		if(search(i,j))
		{
			t->data=i->data;
			i->data=j->data;
			j->data=t->data;
		}
	}
	left->data=i->data;
	i->data=basic;
	quicksort(left,i->pre);
	quicksort(i->next,right);
	return;
}
int main()
{
	int i,j,k,num,sum;
	struct node *head,*p,*q,*t,*tail;
	scanf("%d",&sum);
	head=NULL;
	for(i=1;i<=sum;i++)
	{
		scanf("%d",&num);
		p=(struct node *)malloc(sizeof(struct node));
		p->data=num;
		p->next=NULL;
		if(head==NULL)
			head=p;
		else
		{
			q->next=p;
			p->pre=q;			
		}
		q=p;
	}
	tail=q;
	//quicksort(head,tail);
	t=head;
	while(t!=NULL)
	{
		printf("%d",t->data);
		t=t->next;
	}
	putchar('\n');
	t=tail;
	while(t!=NULL)
	{
		printf("%d",t->data);
		t=t->pre;
	}
	return 0;
}
