#include<stdio.h>
int isPalindrome(int i){
	int a=i,rev=0;
	while(a>0){
		rev=rev*10+a%10;
		a/=10;
	}
	if(i==rev) return 1;
	else return 0;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int l,r,i;
		long sum=0;
		scanf("%d %d",&l,&r);
		for(i=l;i<=r;i++){
			if(isPalindrome(i)) sum+=i;
		}
		printf("%d \n",sum);
	}
}
