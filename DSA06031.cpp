#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod=1e9+7;



int main(){
	int t; cin>>t;
	while(t--){
		ll n,k; cin>>n>>k;
		ll a[n];
		for(int i=0;i<n;++i){
			cin>>a[i];
		}
		multiset<ll> ms;
		for(int i=0;i<k;++i){
			ms.insert(a[i]);
		}
		auto it=ms.rbegin();
		cout<<*it<<" ";
		for(int i=k;i<n;++i){
			auto it1=ms.find(a[i-k]);
			ms.erase(it1);
			ms.insert(a[i]);
			auto it2=ms.rbegin();
			cout<<*it<<" ";
		}
		cout<<el;
	}
}
