#include<stdio.h>
long long int sum(int d, int n){
	if(d>0){
		return sum(d-1,(n*(n+1))/2);
	}
	else {
		return n;
	}
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int d,n;
		scanf("%d %d",&d,&n);
		printf("%lld\n",sum(d,n));
	}
}
