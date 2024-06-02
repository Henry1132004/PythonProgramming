#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod=1e9+7;

ll n,m;
vector<ll> ke[1001];
bool tham[1001];

bool dfs(ll u,ll par){
	tham[u]=true;
	for(int v:ke[u]){
		if(!tham[v]){
			if(dfs(v,u)) return true;
		}
		else{
			if(v!=par) return true;
		}
	}
	return false;
}


int main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>m;
		memset(tham,false,sizeof(tham));
		for(int i=1;i<=n;++i){
			ke[i].clear();
		}
		for(int i=1;i<=m;++i){
			ll x,y; cin>>x>>y;
			ke[x].pb(y);
			ke[y].pb(x);
		}
		int check=1;
		for(int i=1;i<=n;++i){
			if(!tham[i]){
				if(dfs(i,0)){
					cout<<"YES\n";
					check=0;
					break;
				}
			}
		}
		if(check) cout<<"NO\n";
		
	}
}


