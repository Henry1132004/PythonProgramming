#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
// int mod=1e9+7;


void fast(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
}


ll mod(string s,ll n){
    ll res=0;
    for(int i=0;i<s.size();++i){
        res=res*10+s[i]-'0';
        res=res%n;
    }
    return res;
}

string findmin(ll n){
    queue<string> q;
    q.push("1");
    set<ll> se;
    while(!q.empty()){
        string x=q.front();
        q.pop();
        ll r=mod(x,n);
        if(r==0) return x;
        if(se.find(r)==se.end()){
            se.insert(r);
            q.push(x+"0");
            q.push(x+"1");
        }
        
    }
}

int main(){
	fast();
	int t; cin>>t;
    while(t--){
        ll n; cin>>n;
        cout<<findmin(n)<<el;
    }
}