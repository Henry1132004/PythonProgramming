#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod=1e9+7;



int main(){
	int t; cin>>t;
	while(t--){
		vector<ll> v[1001];
		ll n,m; cin>>n>>m;
		for(int i=1;i<=m;++i){
			ll x,y; cin>>x>>y;
			v[x].pb(y);
			v[y].pb(x);
		}
		for(int i=1;i<=n;++i){
			cout<<i<<": ";
			for(int j=0;j<v[i].size();++j){
				cout<<v[i][j]<<" ";
			}
			cout<<el;
		}
	}
}

