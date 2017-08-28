#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int p;
		int n=0;
		scanf("%d",&p);
		while(p>0){
			if(p>=2048){
				n+=p/2048;
				p=p%2048;
			}
			else if(p>=1024){
				n+=p/1024;
				p=p%1024;
			}
			else if(p>=512){
				n+=p/512;
				p=p%512;
			}
			else if(p>=256){
				n+=p/256;
				p=p%256;
			}
			else if(p>=128){
				n+=p/128;
				p=p%128;
			}
			else if(p>=64){
				n+=p/64;
				p=p%64;
			}
			else if(p>=32){
				n+=p/32;
				p=p%32;
			}
			else if(p>=16){
				n+=p/16;
				p=p%16;
			}
			else if(p>=8){
				n+=p/8;
				p=p%8;
			}
			else if(p>=4){
				n+=p/4;
				p=p%4;
			}
			else if(p>=2){
				n+=p/2;
				p=p%2;
			}
			else if(p==1){
				n++;
				p--;
			}
		}
		printf("%d\n",n);
	}
}
