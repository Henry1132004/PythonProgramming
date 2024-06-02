#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back


int main(){
	int t; cin>>t; 
	while(t--){
		ll n,m; cin>>n>>m;
		ll a[n],b[m];
		multiset<ll> ms1,ms,ms3;
		for(int i=0;i<n;++i){
			cin>>a[i];
			ms1.insert(a[i]);
			ms.insert(a[i]);
			ms3.insert(a[i]);
		}
		for(int i=0;i<m;++i){
			cin>>b[i];
		}
		multiset<ll> ms2;
		for(int i=0;i<m;++i){
			auto it=ms1.find(b[i]);
			if(it!=ms1.end()){
				ms2.insert(b[i]);
				ms1.erase(it);
			}
		}
		for(int i=0;i<m;++i){
			auto it=ms.find(b[i]);
			if(it==ms.end()){
				ms3.insert(b[i]);
			}
		}
		for(auto it=ms3.begin();it!=ms3.end();++it){
			cout<<*it<<" ";
		}
		cout<<el;
		for(auto it=ms2.begin();it!=ms2.end();++it){
			cout<<*it<<" ";
		}
		cout<<el;
	}
}
