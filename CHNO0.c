#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a=0,b=0,i;
		char s[101];
		scanf("%s",&s);
		for(i=0;s[i]!='\0';i++){
			if(s[i]=='a') a++;
			else b++;
		}
		if(a<=b) printf("%d\n",a);
		else printf("%d\n",b);
	}
}
