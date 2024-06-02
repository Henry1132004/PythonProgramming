#include<bits/stdc++.h>
using ll = long long;

using namespace std;
int n, m, s; 
bool visited[1001];
vector<pair<int, int>> adj[1001];
vector<int> res;
void dijkstra(int s){
	  vector<ll> d(n + 1, 1e9);
	  memset(visited, 0, sizeof(visited));
	  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
	  d[s] = 0;
	  q.push({0, s});
	  while(!q.empty()){
	  	  pair<int, int> top = q.top();  q.pop();
	  	  int kc = top.first;
	  	  int u = top.second;
	  	  if(visited[u])  continue;
	  	  else visited[u] = 1;
  	  	  for(auto it : adj[u]){
	  	  	   int v = it.first;
	  	  	   int w = it.second;
	  	  	   if(d[v] > d[u] + w){
	  	  	       d[v] = d[u] + w;
	  	  	       q.push({d[v], v});
		}
	}
}
	for(int i = 1; i <= n; i++){
		  res.push_back(d[i]);
	}
	for(int x : res){
		  cout << x << " ";
	}
	res.pop_back();
	cout << endl;
}
int main(){
	 int t;   cin >> t;
	 while(t--){
	 	  cin >> n >> m >> s;
	 	  for(int i = 1; i <= m; i++){
	 	  	     int x, y, w;   cin >> x >> y >> w;
	 	  	     adj[x].push_back({y, w});
	 	  	     adj[y].push_back({x, w});
		   }
		   dijkstra(s);
		   for(int i = 1; i <= n; i++){
		   	   adj[i].clear();
		   	   res.clear();
		   }
	 }
}