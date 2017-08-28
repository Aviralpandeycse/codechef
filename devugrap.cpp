#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k,count=0;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		float f=(float)k/2;
		for(int i=0;i<n;i++){
			int b=a[i]%k;
			if(b<f&&a[i]>k){
				count+=b;
			}
			else{
				count+=(k-b);
			}
		}
		cout<<count<<endl;
	}
}
