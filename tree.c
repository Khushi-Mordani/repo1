#include<stdio.h>
#include<stdlib.h>

struct node{
char data;
struct node *l;
struct node *r;
};

int main()
{
	struct node *a,*b,*c,*d,*e,*f;
	a=(struct node *)malloc(sizeof(struct node));
	b=(struct node *)malloc(sizeof(struct node));
	c=(struct node *)malloc(sizeof(struct node));
	d=(struct node *)malloc(sizeof(struct node));
	e=(struct node *)malloc(sizeof(struct node));
	f=(struct node *)malloc(sizeof(struct node));

	a->data = 'A';
	a->l=b;
	a->r=d;
	
	b->data = 'B';
	b->l=c;
	b->r=NULL;
	
	c->data = 'C';
	c->l=NULL;
	c->r=NULL;
	
	d->data = 'D';
	
	e->data = 'E';
	
	f->data = 'F';
	return 0;
}

