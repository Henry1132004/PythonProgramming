#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define el endl

void fast(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
}

bool cmp(ll a,ll b){
	return a>b;
}

int main(){
	ll n; cin>>n;
		ll a[n+1];
		vector<ll> v1,v2;
		for(int i=1;i<=n;++i){
			cin>>a[i];
			if(i%2) v1.pb(a[i]);
			else v2.pb(a[i]);
		}
		sort(v1.begin(),v1.end());
		sort(v2.begin(),v2.end(),cmp);
		for(int i=0;i<n/2;++i){
			cout<<v1[i]<<" "<<v2[i]<<" ";
		}
		if(n%2) cout<<v1[n/2];
		cout<<el;
}
