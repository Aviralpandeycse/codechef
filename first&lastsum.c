#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int sum=n%10;
		while(n>=10) n/=10 ;
		sum+=n%10;
		printf("%d\n",sum); 
	}
}
