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
		ll a[n];
		set<ll> se;
		for(int i=0;i<n;++i){
			cin>>a[i];
			se.insert(a[i]);
		}
		if(se.size()==1) cout<<"-1\n";
		else{
			auto it=se.begin();
			cout<<*it<<" ";
			++it;
			cout<<*it<<el;
		}
		
	}
}

