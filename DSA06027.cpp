#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back

int solve(int n){
	  queue<pair<int, int>> q;
	  set<int> se;
	  q.push({n, 0});
	  int max = 0;
	  while(!q.empty()){
	  pair<int, int> top = q.front(); q.pop();
	  if(top.first == 1)  return top.second;
	  if(top.first - 1 == 1)  return top.second + 1;
	  for(int i = 2; i <= sqrt(top.first); i++){
	  	    if(top.first % i == 0){
	  	        int m = fmax(i, top.first / i);
	  	           if(se.find(m) == se.end()){
	  	           	    q.push({m, top.second +1});
	  	           	       se.insert(m);
			}
       	}
	}
      if(se.find(top.first - 1)== se.end() && top.first  > 1){
         q.push({top.first - 1, top.second + 1});
         se.insert(top.first - 1);
     }
 }
}
int main(){
	 int t1;   cin >> t1;
	 while(t1--){
	 	 int n;   cin >> n;
	 	 cout << solve(n) << endl;
	 }
}
         
	  