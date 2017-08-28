#include<stdio.h>
int gcd(int,int);
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int q[50];
		int i;
		for(i=0;i<n;i++){
			scanf("%d",&q[i]);
		}
		int r=q[0];
		for(i=1;i<n;i++){
		r=gcd(r,q[i]);
		}
		for(i=0;i<n;i++){
			printf("%d ",q[i]/r);
		}
		printf("\n");
	}
}
int gcd(int a,int b){
	if(b==0) return a;
	else{
		gcd(b,a%b);		
	}
}
int maxm(int x,int y){
	if(x>y) return x;
	else return y;
}
int minm(int u,int v){
	if(u>v) return v;
	else return u;
}
