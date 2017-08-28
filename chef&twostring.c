#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char a[101],b[101];
		scanf("%s %s",&a,&b);
		int i,min=0,max=0;
		for(i=0;a[i]!='\0';i++){
			if(a[i]!=b[i]||(a[i]=='?'&&b[i]=='?')){
				max++;
			}
			if(a[i]!='?'&& b[i]!='?' && a[i]!=b[i]) min++;
		}
		printf("%d %d\n",min,max);
	}
}
