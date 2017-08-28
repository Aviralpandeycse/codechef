#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,i,ans;
		scanf("%d",&n);
		int a[n];
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			if(i==0) ans=a[0];
			else ans=ans^a[i];
		}
		printf("%d",ans);
		
	}
}
