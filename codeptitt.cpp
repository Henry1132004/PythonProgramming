#include<bits/stdc++.h>

using namespace std;

bool visited[1001];
vector<int> ke[1001];
vector<int> topo;
int n, m;
int in[1001];
void Kaln(){
	 queue<int> q;
	 for(int i = 1; i <= n; i++){
	 	   if(in[i] == 0){
	 	   	  q.push(i);
		}
	 }
	 while(!q.empty()){
	 	 int v = q.front();  q.pop();
	 	 topo.push_back(v);
	 	 for(int x : ke[v]){
	 	 	  in[x]--;
	 	 	     if(in[x] == 0)
	 	 	         q.push(x);
	 }
}
   for(int it : topo){
   	    cout << it << " ";
   }
    cout << endl;
}

int main(){
       cin >> n >> m;
	 for(int i = 1; i <= m; i++){
	 	  int x, y;   cin >> x >> y;
	 	  ke[x].push_back(y);
	 	  in[y]++;
	 }
	 Kaln();
}
