#include<bits/stdc++.h>
using namespace std;
// #pragma GCC optimize("03,unroll-loops")
// #pragma GCC target("avx2")
#define ll long long
#define el "\n"
#define pb push_back
#define all(x) x.begin(),x.end()
int mod=1e9+7;



void fast(){
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
}


int main(){
// 	fast();
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		queue<pair<ll,ll>> q;
		unordered_map<ll,ll> mp;
		q.push({n,0});
		ll ok=0;
		while(!q.empty()){
			if(ok) break;
			pair<ll,ll> tmp=q.front(); q.pop();
			if(tmp.first==1){
				cout<<tmp.second<<el;
				break;
			}
			if(mp[tmp.first-1]==0){
				q.push({tmp.first-1,tmp.second+1});
				mp[tmp.first-1]=tmp.second+1;
			}
			else if(tmp.second+1<mp[tmp.first-1]){
				q.push({tmp.first-1,tmp.second+1});
				mp[tmp.first-1]=tmp.second+1;
			}
			if(tmp.first-1==1){
				cout<<mp[tmp.first-1]<<el;
				ok=1;
				break;
			}
			for(int i=sqrt(tmp.first);i>=2;--i){
				if(tmp.first%i==0){
					if(mp[tmp.first/i]==0){
						q.push({tmp.first/i,tmp.second+1});
						mp[tmp.first/i]=tmp.second+1;
					}
					else if(tmp.second+1<mp[tmp.first/i]){
						q.push({tmp.first/i,tmp.second+1});
						mp[tmp.first/i]=tmp.second+1;
					}
					if(tmp.first-1==1){
						cout<<mp[tmp.first/i]<<el;
						ok=1;
						break;
					}
				}
			}
			if(ok) break;
		}
	}
}