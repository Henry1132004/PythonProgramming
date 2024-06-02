#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("03,unroll-loops")
#pragma GCC target("avx2")
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
		ll a[n];
		for(int i=0;i<n;++i){
			cin>>a[i];
		}
		stack<ll> st;
		vector<ll> v(n);
		for(int i=n-1;i>=0;--i){
			while(!st.empty()&&a[st.top()]<a[i]){
				v[st.top()]=st.top()-i;
				st.pop();
			}
			st.push(i);

		}
		while(!st.empty()){
			v[st.top()]=st.top()+1;
			st.pop();
		}
		v[0]=1;
		for(auto x:v){
			cout<<x<<" ";
		}
		cout<<el;
	}
}