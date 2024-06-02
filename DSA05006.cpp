#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod=1e9+7;


int main(){
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		ll a[n];
		for(int i=0;i<n;++i) cin>>a[i];
		vector<ll> tong(n);
		for(int i=0;i<n;++i){
			tong[i]=a[i];
		}
		for(int i=1;i<n;++i){
			for(int j=0;j<i;++j){
				if(a[j]<a[i]){
					tong[i]=max(tong[i],tong[j]+a[i]);
				}
			}
		}
		ll M=-1e18;
		for(int i=0;i<n;++i){
			M=max(M,tong[i]);
		}
		cout<<M<<el;
	}
}
