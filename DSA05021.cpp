#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod=1e9+7;
 
bool cmp(pair<ll,ll> a,pair<ll,ll> b){
	return a.first<b.first;
}
 
int main(){
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		pair<ll,ll> a[n];
		for(int i=0;i<n;++i){
			cin>>a[i].first>>a[i].second;
		}
		sort(a,a+n,cmp);
		vector<ll> v(n,1);
		for(int i=1;i<n;++i){
			for(int j=0;j<i;++j){
				if(a[i].first>a[j].second){
					v[i]=max(v[i],v[j]+1);
				}
			}
		}
		ll ans=-1e9-7;
		for(int i=0;i<n;++i){
			ans=max(ans,v[i]);
		}
		cout<<ans<<el;
	}
}
