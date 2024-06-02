	 	   #include<bits/stdc++.h>

using namespace std;

bool visited[1001];
vector<int> ke[1001];
vector<int> r_ke[1001];
vector<int> topo;
int parent[1001];
int color[1001];
stack<int> st;
int n, m;

void dfs1(int u){
	 visited[u] = 1;
	 for(int v : ke[u]){
	 	  if(!visited[v]){
	 	  	   dfs1(v);
		   }
	 }
	  cout << u << " ";
	  st.push(u);
}
void dfs2(int u){
	 visited[u] = 1;
	 cout << u << " ";
     for(int v : r_ke[u]){
     	 if(!visited[v])
     	    dfs2(v);
	 }
}
void SSC(){
	memset(visited, 0, sizeof(visited));
	for(int i = 1; i <= n; i++){
		  if(!visited[i]){
		    dfs1(i);
	}
}
   	memset(visited, 0, sizeof(visited));
   	cout << endl;
	while(!st.empty()){
		int top = st.top();  st.pop();
		if(!visited[top]){
		    dfs2(top);
		    cout << endl;
	}
}
}

int main(){
      cin >> n >> m;
	 for(int i = 1; i <= m; i++){
	 	  int x, y;  cin >> x >> y;
	 	  ke[x].push_back(y);
	 	  r_ke[y].push_back(x);
	 }
	 SSC();
}

