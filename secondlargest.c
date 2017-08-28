#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a[3],i;
		for(i=0;i<3;i++){
			scanf("%d",&a[i]);
		}
		int m1=0,m2=0;
		for(i=0;i<3;i++){
			if(m1<a[i]){
				m2=m1;
				m1=a[i];	
			}
			else if(m1>a[i] && m2<a[i]){
				m2=a[i];
			}
		}
		printf("%d\n",m2);
	}
}
