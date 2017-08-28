#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,flag=0,i;
		scanf("%d",&n);
		for(i=2;i<n/2;i++){
			if(n%i==0){
				flag=1;
				break;
			}
		}
		if(flag==0) printf("yes\n");
		if(flag==1) printf("no\n");
	}
}
