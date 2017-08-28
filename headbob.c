#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,i,c=0,b=0;
		scanf("%d",&n);
		char a[1001];
		scanf("%s",a);
		for(i=0;i<n;i++){
			if(a[i]=='Y'){
				c++;
			}
			else if(a[i]=='I'){
				b++;	
			}
		}
		if(c>0) printf("NOT INDIAN\n");
		else if(b>0) printf("INDIAN\n");
		else printf("NOT SURE\n");
	}
}
