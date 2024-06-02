#include <bits/stdc++.h>
using ll = long long;

using namespace std;
vector<string> v;
ll ans[1000];
void init(){
      queue<string> q;
      q.push("1");
       v.push_back("1");
      int dem = 0;
      while(dem <= 10000){
         // v.push_back("1");
          string tmp = q.front();
          q.pop();
          v.push_back(tmp + "0");
          v.push_back(tmp + "1");
          q.push(tmp + "0");
          q.push(tmp + "1");
          dem += 2;
      }
}

int main(){
    init();
     int t;  cin >> t;
     while(t--){
        int n;   cin >> n;
        for(int i = 0; i < n; i++){
               cout << v[i] << " ";
        }
        cout << endl;
     }
}

