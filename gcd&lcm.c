#include<stdio.h>
long long int hcf(long long int a,long long int b){
	if(b==0) return a;
	else return hcf(b,a%b);
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long int a,b,gcd,lcm;
		scanf("%lld %lld",&a,&b);
		gcd=hcf(a,b);
		lcm=a*b/gcd;
		printf("%lld %lld\n",gcd,lcm);
	}	
}
