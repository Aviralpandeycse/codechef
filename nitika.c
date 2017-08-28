#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int i,space=0;
		char a[33];
		scanf("%[^\n]s",a);
		for(i=0;a[i]!='\0';i++){
			if(a[i]==' ') 
				space++;
		}
		printf("%d",space);
		/*if(space==0){
			printf("%c",toupper(a[0]));
			for(i=1;a[i]!='\0';i++){
				printf("%c",a[i]);
			}
		}
		else
			printf("%c. ",toupper(a[0]));
			for(i=1;a[i]!=' ';i++);
			printf("%c",toupper(a[i+1]));
			for(i=i+1;i!='\0';i++){
				printf("%c",a[i]);
			}
		printf("\n");*/
	}
}
