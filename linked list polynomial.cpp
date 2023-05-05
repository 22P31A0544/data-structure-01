//polynomial representation using linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
	float coeff;
	int expo;
	struct node*next;
};
typedef struct node NODE;
NODE* insert_a_term(NODE *head,float co,int ex){
	NODE*new_term=(NODE*)malloc(sizeof(NODE));
	new_term->coeff =co;
	new_term->expo=ex;
	new_term->next=NULL;
	if(head == NULL){
		head = new_term;
	}
	else{
		NODE *temp = head;
		while(temp -> next!=NULL){
			temp=temp->next = new_term;
		}
		return head;
	}
}
NODE*create_polynomial(){
	NODE*head=NULL;
	int n;
	prin
{
	printf("Polynomial: ");
	NODE*poly = create_polynomial();
	display_polynomial(poly); 
}
