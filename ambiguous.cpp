#include<stdio.h>
const int N=100008;
int main(){
	int n;
	scanf("%d",&n);
	while(n!=0){
		int a[N],b[N],i,j,flag=1;
		for(i=1;i<=n;i++){
			scanf("%d",&a[i]);
			b[a[i]]=i;
		}
		for(i=1;i<=n;i++){
			if(a[i]!=b[i]){
				flag=0;
			}
		}
		if(flag==0){
			printf("not ambiguous\n");
		}
		else{
			printf("ambiguous\n");
		}
		scanf("%d",&n);
	}
		
}
