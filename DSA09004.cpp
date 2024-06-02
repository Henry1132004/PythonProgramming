#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back

bool visited[1001];
vector<int> ke[1001];
void bfs(int u){
	 queue<int> q;
	 q.push(u);
	 visited[u] = 1;
	 while(!q.empty()){
		int v = q.front();
		q.pop();
		cout << v << " ";
		for(int x : ke[v]){
			 if(!visited[x]){
				  q.push(x);
				  visited[x] = 1;
			 }
		}
        
	 }
}

int main(){
	int t;  cin >> t;
	while(t--){
	    memset(visited, 0, sizeof(visited));
		int n, m, s;  cin >> n >> m >> s;
		for(int i = 0; i < m; i++){
			 int x, y;  cin >> x >> y;
			 ke[x].push_back(y);
			// ke[y].push_back(x);
		}
	
		bfs(s);
		for(int i = 1; i <= n; i++){
		      ke[i].clear();
		}
		cout << endl;
	}
}