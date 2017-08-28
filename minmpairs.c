#include<stdio.h>
#define SIZE 100000
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a[SIZE],min1,min2,n,i;
		scanf("%d",&n);
		for(i=0;i<2;i++){
			scanf("%d",&a[i]);
		}
		min1=a[0];
		min2=a[1];
		if(min1>min2){
			int b;
			b=min1;
			min1=min2;
			min2=b;
		}
		for(i=2;i<n;i++){
			scanf("%d",&a[i]);
			if(a[i]<=min1){
				min2=min1;
				min1=a[i];
			}
			else if(a[i]>min1 &&a[i]<min2) min2=a[i];
		}
		printf("%d\n",min1+min2);
	}
	return 0;
}
