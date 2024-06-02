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
		map<ll,ll> mp;
		pair<ll,ll> a[n];
		for(int i=0;i<n;++i){
			cin>>a[i].first;
			mp[a[i].first]++;
		}
		for(int i=0;i<n;++i){
			a[i].second=mp[a[i].first];
		}
//		for(int i=0;i<n;++i){
//			cout<<a[i].first<<" "<<a[i].second<<el;
//		}
		stack<ll> st;
		vector<ll> v(n);
		for(int i=0;i<n;++i){
			if(st.empty()||a[st.top()].second>=a[i].second){
				st.push(i);
			}
			else{
				while(!st.empty()&&a[st.top()].second<a[i].second){
					v[st.top()]=a[i].first;
					st.pop();
				}
				st.push(i);
			}
		}
		while(!st.empty()){
			v[st.top()]=-1;
			st.pop();
		}
		for(int i=0;i<n;++i){
			cout<<v[i]<<" ";
		}
		cout<<el;
	}
}



