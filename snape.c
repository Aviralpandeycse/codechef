#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int b,ls;
		double rs_min,rs_max;
		scanf("%d %d",&b,&ls);
		rs_min=sqrt(ls*ls-b*b);
		rs_max=sqrt(ls*ls+b*b);
		printf("%f %f\n",rs_min,rs_max);
	}
}
