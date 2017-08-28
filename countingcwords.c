#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d %d",&t);
	while(t--){
		char s[100],ch;
		int i,count=0;
		for(i=0;(ch=getchar())!='\n';i++){
			s[i]=ch;
		}
		int len=strlen(s);
		for(i=0;i<len;i++){
			printf("%c",s[i]);
			if(s[i]==' ') count++;
		}
		printf("\n%d\n",count);
	}
}
