#include<stdio.h>
long max(long a,long b){
	if(a>b)return a;
	else return b;
}
long min(long a,long b){
	if(a>b)return b;
	else return a;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long n,a,b,d;
		scanf("%li %li %li",&a,&b,&n);
		if(n%2!=0) a*=2;
		d=max(a,b)/min(a,b);
		printf("%li\n",d);
	}
}
