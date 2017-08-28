#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,i=1;
		scanf("%d",&n);
		while(n>=i*i){
			i++;
		}
			--i;
			printf("%d\n",i);
	}
}
