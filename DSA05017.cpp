#include<bits/stdc++.h>
using namespace std;
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
	fast();
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		ll a[n+1];
		for(int i=1;i<=n;++i){
			cin>>a[i];
		}
		vector<ll> v1(n+1),v2(n+1);
		for(int i=1;i<=n;++i){
			v1[i]=v2[i]=a[i];
		}
		for(int i=2;i<=n;++i){
			for(int j=1;j<i;++j){
				if(a[j]<a[i]){
					v1[i]=max(v1[i],v1[j]+a[i]);
				}
			}
		}
		for(int i=n;i>=1;--i){
			for(int j=i+1;j<=n;++j){
				if(a[j]<a[i]){
					v2[i]=max(v2[i],v2[j]+a[i]);
				}
			}
		}
		vector<ll> v;
		ll ans=0;
		for(int i=1;i<=n;++i){
			ans=max(ans,v1[i]+v2[i]-a[i]);
		}
		cout<<ans<<el;
	}
}
