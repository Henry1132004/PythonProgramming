#include<bits/stdc++.h>
using ll = long long;

using namespace std;

int n, m; 
int parent[1001], sz[1001];

int find(int u){
	  if(u == parent[u])  return u;
	  else return parent[u] = find(parent[u]);
}
bool Union(int a, int b){
	 a = find(a);
	 b = find(b);
	 if(a == b)  return 0;
	 if(sz[a] > sz[b]){
	  	 parent[b] = a;
	  	 sz[a] += sz[b];
	  }
	  else{
	  	 parent[a] = b;
	  	 sz[b] += sz[a];
	  }
	  return 1;
}
void ktao(){
	  for(int i = 1; i <= n; i++){
	  	  parent[i] = i;
	  	  sz[i] = 1;
	  }
}
int main(){
	  cin >> n >> m;
	  ktao();
	  for(int i = 1; i <= m; i++){
	  	  int x, y;  cin >> x >> y;
	  	  Union(x, y);
	  }
	  for(int i = 1; i <= n; i++){
	  	   cout << find(i) << " ";
	  }
	  
}