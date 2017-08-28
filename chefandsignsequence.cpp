#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	long long int t;
	cin>>t;
	while(t--){
		vector<long int> v;
		long long int count=500001;
		v.push_back(count);
		string a;
		cin>>a;
		for(long long int i=0;a[i]!='\0';i++){
			if(a[i]=='<'){
				count++;
				if (find(v.begin(), v.end(),count) == v.end() ){
					v.push_back(count);
				}
			}
			if(a[i]=='>'){
				count--;
				if (find(v.begin(), v.end(),count) == v.end() ){
					v.push_back(count);
				}
			}
		}
		cout<<v.size()<<endl;
 	}
}
