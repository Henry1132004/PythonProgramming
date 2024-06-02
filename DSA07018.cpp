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

void thaydoi(string &s){
	for(int i=0;i<s.size();++i){
		if(!isdigit(s[i])) s[i]=' ';
	}
}


int main(){
	fast();
	int t; cin>>t; cin.ignore();
	while(t--){
		string s1,s2;
		getline(cin,s1); getline(cin,s2);
		thaydoi(s1); thaydoi(s2);
		stringstream ss1(s1);
		map<ll,ll> mp;
		string w1,w2;
		ll tmp=-1;
		while(ss1>>w1){
			if(tmp==-1) tmp=stoll(w1);
			else{
				mp[stoll(w1)]+=tmp;
				tmp=-1;
			}
		}
		stringstream ss2(s2);
		while(ss2>>w2){
			if(tmp==-1) tmp=stoll(w2);
			else{
				mp[stoll(w2)]+=tmp;
				tmp=-1;
			}
		}
		vector<pair<ll,ll>> v(all(mp));
		for(int i=v.size()-1;i>=0;--i){
			if(i!=0) cout<<v[i].second<<"*x^"<<v[i].first<<" + ";
			else{
				cout<<v[i].second<<"*x^"<<v[i].first;
			}
		}
		cout<<el;
	}
}