#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int m,x,y,i,j;
		scanf("%d %d %d",&m,&x,&y);
		int a[m], b[101]={0},p=x*y,sum=0;
		for(i=0;i<m;i++) scanf("%d",&a[i]);
		for(i=1;i<=100;i++){
			for(j=0;j<m;j++){
				if((i>=(a[j])-p)&&(i<=(a[j]+p))) b[i]++;
			}
		}
		for(i=1;i<=100;i++){
			if(b[i]==0) sum++;
		}
		printf("%d\n",sum);
	}
}


