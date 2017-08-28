#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		fflush(stdin);
		char a[50];
		int i,count=0;
		fgets(a,50,stdin);
		for(i=0;a[i]!='\0';i++){
			if(a[i]==' ') count++;
		}
		if(count==0){
			printf("%c",toupper(a[0]));
			for(i=1;a[i]!='\0';i++) printf("%c",tolower(a[i]));
		}
		else if(count==1){
			printf("%c. ",toupper(a[0]));
			i=0;
			while(a[i]!=' ') i++;
			i++;
			printf("%c",toupper(a[i]));
			i++;
			for(;a[i]!='\0';i++){
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
			for(;a[i]!='\0';i++){
				printf("%c",tolower(a[i]));
			}	
		}
	}
	return 0;
}
