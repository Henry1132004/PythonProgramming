#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod=1e9+7;


int main(){
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		ll a[n];
		for(int i=0;i<n;++i){
			cin>>a[i];
		}
		int check=1;
		map<ll,ll> mp;
		for(int i=0;i<n;++i){
			mp[a[i]]++;
		}
		for(int i=0;i<n;++i){
			if(mp[a[i]]>=2){
				cout<<a[i]<<el;
				check=0;
				break;
			}
		}
		if(check) cout<<"NO\n";
	}
}
