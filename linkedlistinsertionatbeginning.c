//li`nked list
//inserting at the beginning of the linked list
#include<stdio.h>
struct node{
	int data;
	struct node* next;
};
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
