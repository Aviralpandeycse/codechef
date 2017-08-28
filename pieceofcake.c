#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		char str[51];
		int count[26]={0},i,len,max=-1;
		scanf("%s",&str);
		len=strlen(str);
		
		if(len%2==1){
			printf("NO\n");
		}
		
		else{
			for(i=0;i<len;i++){
				count[str[i]-97]++;
				if(count[str[i]-97]>max) max=count[str[i]-97];
			}
			if(max!=len/2){
				printf("NO\n");
			}
			else{
				printf("YES\n");
			}
		}
	}
	return 0;
}
