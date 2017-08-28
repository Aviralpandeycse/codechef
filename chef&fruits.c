#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,m,k;
		scanf("%d %d %d",&n,&m,&k);
		while(n!=m&&k>0){
			if(n>m) m++;
			else n++;
			k--;
		}
		printf("%d\n",abs(n-m));
	}
}
