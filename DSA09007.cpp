#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod=1e9+7;

bool visited[1001];
vector<ll> ke[1001];
ll parent[1001];

void bfs(ll u){
	queue<ll> q;
	q.push(u);
	visited[u]=true;
	while(!q.empty()){
		ll v=q.front();
		q.pop();
		for(int x:ke[v]){
			if(visited[x]==false){
				q.push(x);
				parent[x]=v;
				visited[x]=true;
			}
		}
	}
}

void path(ll s,ll t){
	bfs(s);
	if(visited[t]==false) cout<<"-1";
	else{
		vector<ll> v;
		while(t!=s){
			v.pb(t);
			t=parent[t];
		}
		v.pb(s);
		for(int i=v.size()-1;i>=0;--i){
			cout<<v[i]<<" ";
		}
	}
}


int main(){
	int t; cin>>t;
	while(t--){
		ll n,m,s,t; cin>>n>>m>>s>>t;
		memset(visited,false,sizeof(visited));
		memset(parent,0,sizeof(parent));
		for(int i=1;i<=n;++i){
			ke[i].clear();
		}
		for(int i=1;i<=m;++i){
			ll x,y; cin>>x>>y;
			ke[x].pb(y);
			ke[y].pb(x);
		}
		path(s,t);
		cout<<el;
	}
}

