#include<stdio.h>
int main()
{
	int t,n,i,j,m,x,k;
	int a[200];
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		a[0]=1;
		m=1;
		for(i=1;i<=n;i++){
			int temp=0;
			for(j=0;j<m;j++){
				x=a[j]*i+temp;
				a[j]=x%10;
				temp=x/10;
			}
			while(temp>0){
				a[m]=temp%10;
				temp=temp/10;
				m++;
			}
		}
		for(k=m-1;k>=0;k--){
			printf("%d",a[k]);
		}
		printf("\n");
	}
}
