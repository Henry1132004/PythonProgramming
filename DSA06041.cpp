#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define el endl

void fast(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
}

struct so{
	ll gt,dau;
};

bool cmp(so a,so b){
	return a.gt<b.gt;
}

int main(){
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		ll a[n+1];
		map<ll,ll> mp;
		for(int i=1;i<=n;++i){
			cin>>a[i];
			mp[a[i]]++;
		}
		int check=1;
		for(auto it=mp.begin();it!=mp.end();++it){
			ll y=(*it).second;
			if(y>n/2){
				cout<<(*it).first<<el;
				check=0;
				break;
			}
		}
		if(check) cout<<"NO\n";
		
	}
}

