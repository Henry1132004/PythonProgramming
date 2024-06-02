#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod=1e9+7;

ll solve(ll s,ll t){
	queue<pair<ll,ll>> q;
	set<ll> se;
	q.push({s,0});
	se.insert(s);
	while(!q.empty()){
		pair<ll,ll> tmp=q.front();
		q.pop();
		if(tmp.first==t) return tmp.second;
		if(se.find(tmp.first*2)==se.end()&&tmp.first<t){
			q.push({tmp.first*2,tmp.second+1});
			se.insert(tmp.first*2);
		}
		if(se.find(tmp.first-1)==se.end()&&tmp.first>1){
			q.push({tmp.first-1,tmp.second+1});
			se.insert(tmp.first-1);
		}
	}
}


int main(){
	int t; cin>>t;
	while(t--){
		ll s,t; cin>>s>>t;
		cout<<solve(s,t)<<el;
	}
}
