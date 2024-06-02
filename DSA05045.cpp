#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod=1e9+7;


bool cmp(pair<ll,ll> a,pair<ll,ll> b){
	double tmp1=(double)a.first/a.second;
	double tmp2=(double)b.first/b.second;
	return tmp1>tmp2;
}

int main(){
	int t; cin>>t;
	while(t--){
		ll n,w; cin>>n>>w;
		pair<ll,ll> a[n];
		for(int i=0;i<n;++i){
			cin>>a[i].first>>a[i].second;
		}
		sort(a,a+n,cmp);
		double ans=0;
		for(int i=0;i<n;++i){
			if(w>=a[i].second){
				ans+=a[i].first;
				w=w-a[i].second;
			}
			else{
				ll tmp=w*a[i].first;
				ans+=(double)tmp/a[i].second;
				break;
			}
		}
		cout<<fixed<<setprecision(2)<<ans<<el;
	}
}



