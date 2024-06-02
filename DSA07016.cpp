#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("03,unroll-loops")
#pragma GCC target("avx2")
#define ll long long
#define el "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
int mod=1e9+7;



void fast(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void khoitao(ll a[],ll k){
    for(int i=1;i<=k;++i){
        a[i]=i;
    }
}

void sinh(ll a[],ll n,ll k,ll &ok){
    int i=k;
    while(i>=1&&a[i]==n-k+i){
        --i;
    }
    if(i==0) ok=0;
    else{
        a[i]++;
        for(int j=i+1;j<=k;++j){
            a[j]=a[i]+j-i;
        }
    } 
}

int check(vector<ll> v,string s){
    for(int i=0;i<s.size();++i){
        if(s[i]=='I'){
            if(v[i+1]<v[i]) return 0;
        }
        else{
            if(v[i+1]>v[i]) return 0;
        }
    }
    return 1;
}

int main(){
	fast();
	int t; cin>>t;
    int stop=0;
    while(t--){
        string s; cin>>s;
        ll k=s.size()+1;
        ll a[k+1];
        khoitao(a,k);
        ll ok=1;
        while(ok){
            vector<ll> v;
            for(int i=1;i<=k;++i){
                v.pb(a[i]);
            }
            if(check(v,s)){
                for(auto x: v){
                    cout<<x;
                }
                cout<<el;
                break;
            }
            while(next_permutation(all(v))){
                if(check(v,s)){
                    for(auto x: v){
                        cout<<x;
                    }
                    cout<<el;
                    stop=1;
                    break;
                }
            }
            if(stop) break;
            sinh(a,9,k,ok);
        }
    }
}