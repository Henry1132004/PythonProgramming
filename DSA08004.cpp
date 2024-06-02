#include <bits/stdc++.h>
using ll = long long;

using namespace std;

int main(){
     int t;  cin >> t;
     while(t--){
          int k;  cin >> k;
          string s;  cin >> s;
          map<char, ll> mp;
          for(char x : s){
                mp[x]++;
          }
          priority_queue<ll> q;
          for(auto it : mp){
                q.push(it.second);
          }
          while(k > 0){
               int top = q.top();  
			   q.pop();
               --top;  --k;
               q.push(top);
          }
          ll ans = 0;
          while(!q.empty()){
                ans += q.top() * q.top() *1ll;
                q.pop();
          }
           cout << ans << endl;
     }
}