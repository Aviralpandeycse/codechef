#include <stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    int N,p,i,j,flag=0;
	    scanf("%d %d",&N,&p);
	    int a[N+1];
	    for(i=0;i<N;i++) scanf("%d",&a[i]);
	    for(i=0;i<N;i++){
	        for(j=i+1;j<N;j++){
	            if(a[i]*a[j]==p){
	                flag++;
	            }
	        }
	    }
	    if(flag>=1) printf("YES\n");
	    else printf("NO\n");
	}
}
