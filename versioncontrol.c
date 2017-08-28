#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,m,k;
		scanf("%d %d %d",&n,&m,&k);
		int a[m],b[k],i,j,c=0;
		for(i=0;i<m;i++){
			scanf("%d",&a[i]);
		}
		for(i=0;i<k;i++){
			scanf("%d",&b[i]);
		}
		for(i=0;i<m;i++){
			for(j=0;j<k;j++){
				if(a[i]==b[j]) {
					c++;
					break;
				}
			}
		}
		printf("%d %d\n",c,n-m-k+c);
	}
}
