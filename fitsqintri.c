#include<stdio.h>
int square(int b){
	int n;
	if(b==1||b==2) return 0;
	else {
		b/=2;
		n=(b*(b-1))/2;
		return n;
	}
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int b,n;
		scanf("%d",&b);
		n=square(b);
		printf("%d\n",n);
	}
}
