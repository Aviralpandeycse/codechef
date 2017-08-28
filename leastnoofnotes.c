#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a[]={100,50,10,5,2,1},n,s=0,i;
		scanf("%d",&n);
		for(i=0;i<6;i++){
			s+=n/a[i];
			n=n%a[i];
		}
		printf("%d\n",s);
	}
}
