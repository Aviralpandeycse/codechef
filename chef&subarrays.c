#include <iostream>
#include <string>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string a;
		cin>>a;
		int m;
		cin>>m;
		string b;
		cin>>b;
		int i,j,flag=0,k=0;
		for(i=k,j=0;i<n&&j<m;i++){
			if(a[i]==b[j]){
				j++;
			}
			else{
				j=0;
				i=++k;
			}
		}
		if(j==m) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}
