#include<iostream>
#include<stdio>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,i,flag=0;
		char res[12];
		scanf("%d",&n);
		char a[1000];
		for(i=0;i<n;i++){
			scanf("%c",&a[i]);
		}
		for(i=0;i<n;i++){
			if(a[i]=='Y'){
				res="NOT INDIAN"
				flag=1;
				break;
			}
			if(a[i]=='I'){
				res="INDIAN"
				flag=1;
				break;	
			}
		}
		if(flag==0){
			printf("NOT SURE\n");
		}
		else if(flag==1){
			printf("%s",res);
		}
	}
}
