//linked list
//insetion at nth position
#include<stdio.h>
struct node{
	int data;
	struct node* next;
};
struct node* head;
void insert(int x,int pos){
	
}
void print(){
	struct node* head=(node*)malloc(sizeof(node));
	while(head!=NULL){
		printf("%d  "(*head).data);
		head=(*head).next;
	}
}
int main(){
	head=NULL;
	insert(4,1);
	insert(5,2);
	insert(3,1);
	insert(72,3);
	insert(9,5);
	insert(8,1);
	print();
}
