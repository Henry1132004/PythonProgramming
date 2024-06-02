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
		pair<double,double> a[n];
		for(int i=0;i<n;++i){
			cin>>a[i].first>>a[i].second;
		}
		vector<ll> v(n,1);
		for(int i=1;i<n;++i){
			for(int j=0;j<i;++j){
				if(a[i].first>a[j].first&&a[i].second<a[j].second){
					v[i]=max(v[i],v[j]+1);
				}
			}
		}
		cout<<*max_element(all(v))<<el;
	}
}
