#include<stdio.h>
int close(int x1,int x2,int y1,int y2,int r);
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int r,x1,x2,y1,y2,x3,y3,s=0;
		scanf("%d",&r);
		scanf("%d %d",&x1,&y1);
		scanf("%d %d",&x2,&y2);
		scanf("%d %d",&x3,&y3);
		if(close(x1,x2,y1,y2,r)){
			s++;
		}
		if(close(x1,x3,y1,y3,r)){
			s++;
		}
		if(close(x3,x2,y3,y2,r)){
			s++;
		}
		if(s>1) printf("yes\n");
		else printf("no\n");
	}
	
}
int close(int x1,int x2,int y1,int y2,int r){
	if((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)<=r*r){
		return 1;
	}
	else return 0;
}
