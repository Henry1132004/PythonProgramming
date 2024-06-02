#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define el endl
int mod=1e9+7;

void fast(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
}
struct so{
	ll val1,val2;
};

bool cmp(so a,so b){
	if(a.val2==b.val2) return a.val1<b.val1;
	else return a.val2<b.val2;
}

int main(){
	fast();
	int t; cin>>t;
	while(t--){
		ll n,m; cin>>n>>m;
		ll a[n],b[m];
		map<ll,ll> mp1,mp2;
		for(int i=0;i<n;++i){
			cin>>a[i];
			mp1[a[i]]++;
		}
		for(int i=0;i<m;++i){
			cin>>b[i];
			mp2[b[i]]++;
		}
		ll dem=0;
		ll dem02=mp2[0],dem12=mp2[1];
		ll dem01=mp1[0],dem11=mp1[1];
		dem+=dem02*(n-dem01);
		dem+=dem12*(n-dem01-dem11);
		dem+=mp1[2]*(m-dem02-dem12-mp2[2]-mp2[3]-mp2[4]);
		dem+=mp2[2]*mp1[3];
		if(mp1[2]!=0) mp1.erase(2);
		if(mp1[1]!=0) mp1.erase(1);
		if(mp1[0]!=0) mp1.erase(0);
//		cout<<dem<<el;
		for(auto it1=mp1.begin();it1!=mp1.end();++it1){
			auto it2=mp2.upper_bound(((*it1).first));
			if(it2!=mp2.end()){
				for(it2;it2!=mp2.end();++it2){
					dem+=((*it1).second)*((*it2).second);
//					cout<<dem<<el;
				}
			}
		}
		cout<<dem<<el;
	}
}
