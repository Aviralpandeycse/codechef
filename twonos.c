#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long int a,b,n,s,i;
		int p[200],q[200],x,temp=0;
		scanf("%lld %lld %lld",&a,&b,&n);
		for(i=1;i<=n;i++){
			if(i%2==1){
				x=a[j]*2+temp;
				a[j]=x%10;
				temp=x/10;
			}
			while(temp>0){
				a[m]=temp%10;
				temp=temp/10;
				m++;
			}
			}
			else{
				b=b*2;
			}
		}
		if(a>b){
			s=a/b;
		}
		else{
			s=b/a;
		}
		printf("%lld\n",s);
	}
}
