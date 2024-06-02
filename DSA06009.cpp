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



int main(){
	fast();
	int t; cin>>t;
	while(t--){
		ll n,k; cin>>n>>k;
		ll a[n];
		map<ll,ll> mp1,mp2;
		ll dem=0;
		ll tong=0;
		int check=0;
		if(k%2) check=1;
		for(int i=0;i<n;++i){
			cin>>a[i];
			if(a[i]<k/2) mp1[a[i]]++;
			else if(a[i]>k/2) mp2[a[i]]++;
			else if(a[i]==k/2){
				if(check==0) dem++;
				else mp1[a[i]]++;
			}
		}
		tong+=dem*(dem-1)/2;
		for(auto it1=mp1.begin();it1!=mp1.end();++it1){
			tong+=((*it1).second)*mp2[k-(*it1).first];
		}
		cout<<tong<<el;
	}
}
