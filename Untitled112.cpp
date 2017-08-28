#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n,k,i,count=0;
		cin>>n>>k;
		long long int a[n];
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		long double f=(double)k/2;
		for(i=0;i<n;i++){
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
