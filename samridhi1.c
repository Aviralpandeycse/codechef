#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node* next;
};
struct node* reverse(struct node* head)
{
	struct node* current,*prev,*next;
	current=head;
	prev=NULL;
	while (current!=NULL)
	{
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
	}
	head=prev;
	return head;
}
void insert(int x,struct node** pointerToHead){
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	(*temp).data=x;
	(*temp).next=*pointerToHead;
	*pointerToHead=temp;
}
void print(struct node* head){
	while(head!=NULL){
		printf("%d\t",(*head).data);
		head=(*head).next;
	}
	printf("\n");
}
int main(){
	struct node* head;//global varialbe
	head=NULL;
	int n,i,x;
	printf("How many numbers?\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter the number \n");
		scanf("%d",&x);
		insert(x,&head);
		print(head);
	}
}
