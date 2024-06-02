#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod=1e9+7;

ll n,m,kt;
vector<ll> ke[1001];
bool tham[1001];
ll parent[1001];


bool dfs(ll u,ll par){
	tham[u]=true;
	for(int v:ke[u]){
		if(!tham[v]){
			parent[v]=u;
			if(dfs(v,u)) return true;
		}
		else{
			if(v!=par&&v==1){
				kt=u;
				return true;
			}
		}
	}
	return false;
}


int main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>m;
		memset(tham,false,sizeof(tham));
		memset(parent,0,sizeof(parent));
		for(int i=1;i<=n;++i){
			ke[i].clear();
		}
		for(int i=1;i<=m;++i){
			ll x,y; cin>>x>>y;
			ke[x].pb(y);
			ke[y].pb(x);
		}
		for(int i=1;i<=n;++i){
			sort(ke[i].begin(),ke[i].end());
		}
		int check=1;
		if(dfs(1,0)){
			check=0;
			vector<ll> tmp;
			tmp.pb(1);
//			cout<<kt<<el;
			while(kt!=1){
				tmp.pb(kt);
				kt=parent[kt];
			}
			tmp.pb(1);
			reverse(tmp.begin(),tmp.end());
			for(int x:tmp) cout<<x<<" ";
			cout<<el;
		}
		if(check) cout<<"NO\n";
		
	}
}


