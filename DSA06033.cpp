#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back

int main(){
	int t;  cin >> t;
	while(t--){
	     int k;   cin >> k;
	     string s;   cin >> s;
	     map<char, ll> mp;
	     priority_queue<ll> q;
	     for(char x : s){
	     	 mp[x]++;
		 }
		 for(auto it : mp){
		 	  q.push(it.second);
		 }
		 ll res = 0;
		 while(k > 0){
		 	 int top = q.top(); q.pop();
		 	 --top, --k;
		 	 q.push(max(top, 0));
		 }
		 while(!q.empty()){
		 	  int top = q.top(); q.pop();
		 	  res += top * top;
		 }
		  cout << res << endl;
	}
}
