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
	cout<<"Buoc 0: "<<a[0]<<el;
	int dem=1;
	for(int i=1;i<n;++i){
		ll x=a[i],pos=i-1;
		while(pos>=0&&x<a[pos]){
			a[pos+1]=a[pos];
			--pos;
		}
		a[pos+1]=x;
		cout<<"Buoc "<<i<<": ";
		for(int j=0;j<=i;++j){
			cout<<a[j]<<" ";
		}
		cout<<el;
	}
}

