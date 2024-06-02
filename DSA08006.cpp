#include <bits/stdc++.h>
using ll = long long;

using namespace std;

vector<string> v;
queue<string> q;
ll res[1000];
void init(){
    v.push_back("9");
    q.push("9");
    int dem = 0;
    while(dem <= 10000){
        string tmp = q.front();
        q.pop();
        v.push_back(tmp + "0");
        v.push_back(tmp + "9");
        q.push(tmp + "0");
        q.push(tmp + "9");
        dem += 2;
    }
    for(int i = 1; i <= 100; i++){ 
        for(string x : v){
             ll tmp = stoll(x);
             if(tmp % i == 0){
                  res[i] = tmp;
                  break;
             }
        }
    }
}

int main(){
     init();
     int t;  cin >>t;
     while(t--){
          ll n;  cin >> n;
          cout << res[n] << endl;
     }
}
