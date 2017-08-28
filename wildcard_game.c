#include<stdio.h>
int main(){
	int t ;
	scanf("%d",&t);
	while(t--){
		char a[11],b[11];
		int i,flag=0;
		scanf("%s %s",&a,&b);
		for(i=0;a[i]!='\0';i++){
			if(a[i]!='?'&&b[i]!='?'&&a[i]!=b[i]){
				flag++;
				break;
			}
		}
		if(flag>0) printf("No\n");
		else printf("Yes\n");
	}
}
