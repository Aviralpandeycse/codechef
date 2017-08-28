#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,m,s=0;
		scanf("%d",&n);
		m=n;
		while(n>0){
			s=(s*10)+(n%10);
			n=n/10;
		}
		if(s==m){
			printf("wins\n");
		}
		else printf("losses\n");
	}
}
