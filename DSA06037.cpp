#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod=1e9+7;

void fast(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
}

int main(){
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		vector<ll> v;
		ll a[n+1],b[n+1];
		for(int i=1;i<=n;++i){
			cin>>a[i];
			b[i]=a[i];
		}
		sort(b+1,b+n+1);
		ll M=a[1];
		for(int i=1;i<n;++i){
			M=max(M,a[i]);
			if(M==b[i]){
				v.pb(i);
			}
		}
		set<ll> se;
		ll m=a[n];
		for(int i=n;i>=2;--i){
			m=min(m,a[i]);
			if(m==b[i]){
				se.insert(i-1);
			}
		}
		vector<ll> ans;
		for(int i=0;i<v.size();++i){
			auto it=se.find(v[i]);
			if(it!=se.end()) ans.pb(v[i]);
		}
		cout<<ans.size()<<el;
		for(int i=0;i<ans.size();++i){
			cout<<ans[i]<<" ";
		}
		cout<<el;
		
	}
}



