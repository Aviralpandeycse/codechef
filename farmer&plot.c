#include<stdio.h>
int gcd(int n,int m){
	if(m==0){
		return n;
	}
	else{
		return gcd(m,n%m);
	}
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,m;
		scanf("%d %d",&n,&m);
		long ans=n*m;
		int c=gcd(n,m);
		printf("%ld\n",ans/(c*c));
	}
}

