#include<bits/stdc++.h>
using ll = long long;

using namespace std;

struct canh{
	int x, y, w;
};
int n, m; 
int parent[1001], sz[1001];

vector<canh> dscanh;
int find(int u){
	  if(u == parent[u])  return u;
	  else return parent[u] = find(parent[u]);
}
bool Union(int a, int b){
	 a = find(a);
	 b = find(b);
	 if(a == b)  return 0;
	 if(sz[a] < sz[b]){
	  swap(a, b);
	  	 sz[a] += sz[b];
	  	 parent[b] = a;
	  }
	  return 1;
}
bool cmp(canh a, canh b){
	 return a.w < b.w;
}
void Kruskal(){
	 sort(dscanh.begin(), dscanh.end(), cmp);
	  vector<canh> tree;
	  int res = 0;
	  for(int i = 0; i < m; i++){
	  	   if(tree.size() == n - 1)  break;
	  	   if(Union(dscanh[i].x, dscanh[i].y)){
	  	   	     tree.push_back(dscanh[i]);
	  	   	     res += dscanh[i].w;
			 }
	  }
	  cout << res << endl;
  }
int main(){
	  int t;  cin >> t;
	  while(t--){
	  cin >> n >> m;
	  for(int i = 0; i < m; i++){
	  	  int x, y, w;  cin >> x >> y >> w;
	  	  dscanh.push_back({x, y, w});
	  }
	  for(int i = 0; i < n; i++){
	  	  parent[i] = i;
	  	  sz[i] = 1;
	  }
	  Kruskal();
   }
}
	  
	