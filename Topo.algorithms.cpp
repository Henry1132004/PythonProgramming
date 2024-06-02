#include<bits/stdc++.h>

using namespace std;

bool visited[1001];
vector<int> ke[1001];
vector<int> topo;
void dfs(int u){
	 visited[u] = 1;
	 for(int v : ke[u]){
	 	  if(!visited[v])
	 	     dfs(v);
	 }
	  topo.push_back(u);
}

int main(){
	int n, m;   cin >> n >> m;
	for(int i = 1; i <= m; i++){
		  int x, y;  cin >> x >> y;
		  ke[x].push_back(y);
	}
	memset(visited, 0, sizeof(visited));
	for(int i = 1; i <= n; i++){
		if(!visited[i])
		  dfs(i);
	}
	reverse(topo.begin(), topo.end());
	for(int x : topo){
		 cout << x << " ";
	}
}
	
	  