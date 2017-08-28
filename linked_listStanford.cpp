#include<iostream>
#include<fstream>
using namespace std;
struct Entry{
	string name,phone;
	Entry *next;
};
void PrintEntry(Entry *e){
	for(;e!=NULL;e=e->next){
		cout<<e->name<<" "<<e->phone<<endl;
	}	
}
Entry *GetNewEntry(){
	string name,phone;
	cout<<"Enter name(PRESS 1 to exit): ";
	cin>>name;
	if(name=="1") return NULL;
	
	Entry *newone=new Entry;
	newone->name=name;
	cout<<"Enter phone: ";
	cin>>phone;
	newone->phone=phone;
	newone->next=NULL;
	return newone;
}
Entry *BuildList(){
	Entry *list=NULL;
	while(true){
		Entry *newone=GetNewEntry();
		if(newone==NULL) break;
		newone->next=list;
		list=newone;
	}
	return list;
}

int main(){
	Entry *n=BuildList();
	PrintEntry(n);
	return 0;
}
