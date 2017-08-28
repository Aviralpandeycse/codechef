#include<stdio.h>
int main(){
	int a,b,k;
	scanf("%d %d",&a,&b);
	k=a-b;
	if(k%10==9) k--;
	else k++;
	printf("%d",k);
}
