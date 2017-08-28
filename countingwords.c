#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d",&t);
	fflush(stdin);
	while(t--){
		char a[50];
		int i,count=0;
		fgets(a,50,stdin);
		int len=strlen(a);
		for(i=0;a[i]!=len;i++){
			if(a[i]==' ') count++;
		}
		if(count==0){
			printf("%c",toupper(a[0]));
			for(i=1;i<len;i++) printf("%c",tolower(a[i]));
		}
		else if(count==1){
			printf("%c. ",toupper(a[0]));
			i=0;
			while(a[i]!=' ') i++;
			i++;
			printf("%c",toupper(a[i]));
			i++;
			for(;i<len;i++){
				printf("%c",tolower(a[i]));
			}
		}
		else{
			printf("%c. ",toupper(a[0]));
			i=1;
			while(a[i]!=' ') i++;
			i++;
			printf("%c. ",toupper(a[i]));
			i++;
			while(a[i]!=' ') i++;
			i++;
			printf("%c",toupper(a[i]));
			i++;
			for(;i<len;i++){
				printf("%c",tolower(a[i]));
			}	
		}
		printf("\n");
	}
}
