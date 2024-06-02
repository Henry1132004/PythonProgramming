#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod=1e9+7;

bool visited[1001];
vector<ll> ke[1001];

void dfs(ll u){
	cout<<u<<" ";
	visited[u]=true;
	for(int v:ke[u]){
		if(visited[v]==false){
			dfs(v);
		}
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		ll n,m,u; cin>>n>>m>>u;
		memset(visited,false,sizeof(visited));
		for(int i=1;i<=n;++i){
			ke[i].clear();
		}
		for(int i=1;i<=m;++i){
			ll x,y; cin>>x>>y;
			ke[x].pb(y);
//			ke[y].pb(x);
		}
		dfs(u);
		cout<<el;
	}
}

