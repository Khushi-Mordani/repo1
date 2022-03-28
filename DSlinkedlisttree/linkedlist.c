#include<stdio.h>
#include<stdlib.h>

struct node
{
	int info;
	struct node *link;
};

void display (struct node *first)
{
	struct node *save;
	save = first;
	do{
		printf("%d ",save->info);
		save = save -> link;
	}while(save != NULL);
}

struct node* insert(int x, struct node* first)
{
	struct node *new;
	new = (struct node *)malloc(sizeof(struct node));
	if(new == NULL){
		printf("\nList Overflow"); return 0;}
	else{
		new->info = x;
		new->link = first;
		return new; }
}
struct node* insertend(int x, struct node* first)
{
	struct node *new;
	new = (struct node *)malloc(sizeof(struct node));
	struct node *save;
	save = first;
	if(first == NULL)
		return new;
	else{
		while (save->link !=NULL){
			save = save -> link;}
		save -> link = new;
		new -> info = x;
		return first;
	}
}
struct node* insord(int x, struct node* first)
{
	struct node *new;
	new = (struct node *)malloc(sizeof(struct node));
	struct node *save;
	save = first;
	new -> info = x;
	if(first == NULL){
			new -> link = NULL;
			return new;}
	else{
		if (new->info <= first->info){
			new -> link = first;
			return new;}
			
		while (save->link !=NULL && new->info >= (save->link)->info){
			save = save -> link;}
		new -> link = save -> link;
		
		save -> link = new;
		return first;
	}
}
struct node* delete(struct node *x, struct node* first)
{
	struct node *save,*pre;
	save = first;
	if(first == NULL){
		printf("\nList empty"); return NULL;}
	else{
		while(save != x && save->link != NULL)
		{
			pre = save;
			save = save->link;
		}
	}
	if (save!= x){
		printf("Node not found");
		return NULL;}
	if (x == first){
		first = first -> link; return first;}
	else{
		pre->link = x->link; 
		free(x);		
		return first;}

}
int count (struct node *first)
{
	struct node *save;
	save = first;
	int count = 0;
	if(first == NULL)
		count =0 ;
	do{
		count ++;
		save = save -> link;
	}while(save != NULL);
	return count;
}
struct node2
{
	int field;
	struct node2 *ptr;	
};
struct node* copy(first)
{
	struct node2 *new;
	new = (struct node2 *)malloc(sizeof(struct node2));
	struct node2 *begin;
	begin = (struct node2 *)malloc(sizeof(struct node2));
	begin = first;
	struct node *save;
	save = begin;
	new -> field = save -> info;
	if (first == NULL){
		printf("\nList empty");
		return NULL;
		}
	if (new == NULL)
		printf("\nUnderflow");

		while (save->link !=NULL){
		new = (struct node2 *)malloc(sizeof(struct node2));
		new -> field = save -> info;
		save = save -> link;
		save -> link = new;
		
		return first;
		}
	
}
int main()
{
	struct node *first,*second,*third;
	first = (struct node *)malloc(sizeof(struct node));
	second = (struct node *)malloc(sizeof(struct node));
	third = (struct node *)malloc(sizeof(struct node));
	first -> info =1;
	first -> link = second;
	second -> info =2;
	second -> link = third;
	third -> info = 3;
	third -> link = NULL;
	//printf("%d %p %p %d",first->info,first->link,second,second->info);
	//printf("%d %p %p",third->info,third->link,third->link);
	display(first);
	first = insert(0,first);
	printf("\nInserted\n");
	display(first);
	first = insertend(15,first);
	printf("\nInserted at end\n");
	display(first);
	printf("\nTotal nodes : %d\n",count(first));
	first = insord(6,first);
	display(first);
	first = delete (second,first);
	printf("\nAfter Deletion\n");
	display(first);
	struct node2 newnode;
	newnode = copy(first);
	display(newnode);
	return 0;
}


