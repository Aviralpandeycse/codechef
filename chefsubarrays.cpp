#include <iostream>
using namespace std;
#define ll long long int
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,i,m;
		cin>>n;
		ll a[n];
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		cin>>m;
		ll b[m];
		for( i=0;i<m;i++){
			cin>>b[i];
		}
		ll j,k=0;
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				if(a[j]==b[i]){
					k++;
					break;
				}
			}
		}
		if(k>=m) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}
