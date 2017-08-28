#include<stdio.h>
int main(){
	int n,w,max=-1;
	int t1=0,t2=0;
	scanf("%d",&n);
	while(n--){
		int a,b;
		scanf("%d %d", &a,&b );
		t1+=a;
		t2+=b;
		if(t1>t2){
			if((t1-t2)>max){
				max=t1-t2;
				w=1;
			}
		}
		else{
			if((t2-t1)>max){
				max=t2-t1;
				w=2;
			}
		}
	}
		printf("%d %d",w, max);
		return 0;
}
