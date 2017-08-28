#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,i=1;
		scanf("%d",&n);
		while((i*(i+1)/2)<=n) i++;
		printf("%d\n",i-1);
	}
}
