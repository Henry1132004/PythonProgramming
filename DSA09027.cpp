#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod=1e9+7;

bool visited[1001];
vector<ll> ke[1001];
ll parent[1001];
ll cnt[1001];


void bfs(ll u,ll dem){
	queue<ll> q;
	q.push(u);
	visited[u]=true;
	while(!q.empty()){
		ll v=q.front();
		q.pop();
		cnt[v]=dem;
		for(int x:ke[v]){
			if(visited[x]==false){
				q.push(x);
				visited[x]=true;
				cnt[x]=dem;
			}
		}
	}
}




int main(){
	int t; cin>>t;
	while(t--){
		memset(visited,false,sizeof(visited));
		memset(cnt,0,sizeof(cnt));
		ll n,m; cin>>n>>m;
		for(int i=1;i<=n;++i){
			ke[i].clear();
		}
		for(int i=0;i<m;++i){
			ll x,y; cin>>x>>y;
			ke[x].pb(y);
			ke[y].pb(x);
		}
		int dem=0;
		for(int i=1;i<=n;++i){
			if(visited[i]==false){
				dem++;
				bfs(i,dem);
			}
		}
		
		int q; cin>>q;
		while(q--){
			ll x,y; cin>>x>>y;
			if(cnt[x]==cnt[y]) cout<<"YES\n";
			else cout<<"NO\n";
		}
		
	}
}

