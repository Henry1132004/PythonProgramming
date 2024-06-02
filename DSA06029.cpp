#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod=1e9+7;


int main(){
	ll n; cin>>n;
	ll a[n];
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	vector<vector<ll>> v;
	vector<ll> tmp;
	tmp.pb(a[0]);
	v.pb(tmp);
	for(int i=1;i<n;++i){
		ll pos=i-1, x=a[i];
		while(pos>=0&&x<a[pos]){
			a[pos+1]=a[pos];
			pos--;
		}
		a[pos+1]=x;
		vector<ll> t;
		for(int j=0;j<=i;++j){
			t.pb(a[j]);
		}
		v.pb(t);
	}
	for(int i=v.size()-1;i>=0;--i){
		cout<<"Buoc "<<i<<": ";
		for(int j=0;j<v[i].size();++j){
			cout<<v[i][j]<<" ";
		}
		cout<<el;
	}
}
