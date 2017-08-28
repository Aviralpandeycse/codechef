#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,i,min,x;
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d",&x);
			if(i==0) min=x;
			else if(min>x) min=x;
		}
		printf("%lld\n",(long long)min*(n-1));
	}
	return 0;
}
