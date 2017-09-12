#include <stdio.h>
#include <stdlib.h>

typedef struct list
{
	int data;
	struct list *next;
}list;

void insert(list **head,int number)
{
	list *tmp=(list *)malloc(sizeof(list));
	if(tmp==NULL)
	{
		fprintf(stderr,"Not sufficient memory");
		return;
	}
	tmp->data=number;
	if(*head==NULL)
	{
		tmp->next=NULL;
		*head=tmp;
			return;
	}
	while((*head)->next)
	head=&(*head)->next;
	tmp->next=(*head)->next;
	(*head)->next=tmp;
}
void remov(list **head,int key)
{
	list *doublepointer=*head;
	if(*(head)->data==key)
	{
		(*head)=(*head)->next;
		free(doublepointer);
		return;
	}
	

		

void display(list *head)
{
	while(head)
	{
		printf("%d  ",head->data);
		head=head->next;
	}
	printf("\n");
}

int main()
{
	list *head=NULL;
	int ch;
	int number;
	printf("1->Insert\n2->delete\n3->Exit");
	do
	{
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter Element\n");
				scanf("%d",&number);
				insert(&head,number);
				break;
			case 2:
				break;
			case 3:
				display(head);
				break;
			case 4:
				printf("Invalid cjhoice\n");
		}
	}while(ch!=4);
	return 0;
}
		
	
