#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod=1e9+7;

bool cmp(pair<ll,ll> a, pair<ll,ll> b){
	if(a.second==b.second) return a.first<b.first;
	else return a.second>b.second;
}

int main(){
	int t; cin>>t;
	while(t--){
		map<ll,ll> mp;
		ll n; cin>>n;
		ll a[n];
		for(int i=0;i<n;++i){
			cin>>a[i];
			mp[a[i]]++;
		}
		vector<pair<ll,ll>> v(mp.begin(),mp.end());
		sort(v.begin(),v.end(),cmp);
		for(int i=0;i<v.size();++i){
			for(int j=0;j<v[i].second;++j){
				cout<<v[i].first<<" ";
			}
		}
		cout<<el;
	}
}
