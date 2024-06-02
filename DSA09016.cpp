#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod=1e9+7;

ll n,m;
bool visited[1001];
vector<ll> ke[1001];
vector<ll> topo;
ll deg[1001];

void solve(){
	queue<ll> q;
	for(int i=1;i<=n;++i){
		if(deg[i]==0){
			q.push(i);
		}
	}
	while(!q.empty()){
		ll u=q.front(); q.pop();
		topo.pb(u);
		for(int v:ke[u]){
			deg[v]--;
			if(deg[v]==0) q.push(v);
		}
	}
	
}

int main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>m;
//		memset(visited,false,sizeof(visited));
		memset(deg,0,sizeof(deg));
		for(int i=1;i<=n;++i){
			ke[i].clear();
		}
		topo.clear();
		for(int i=1;i<=m;++i){
			ll x,y; cin>>x>>y;
			ke[x].pb(y);
			deg[y]++;
		}
		solve();
		if(topo.size()==n) cout<<"NO\n";
		else cout<<"YES\n";
	}
}

