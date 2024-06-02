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

int check(string s){
	for(int i=0;i<s.size();++i){
		if(s[i]!='0') return 0;
	}
	return 1;
}

bool cmp(string a,string b){
	if(a.size()==b.size()){
		int i=0;
		while(i<a.size()){
			if(a[i]>b[i]) return true;
			else if(a[i]<b[i]) return false;
			++i;
		}
	}
	else return a.size()>b.size();
}

int main(){
	fast();
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		ll a[n];
		vector<ll> v0,v1,v2;
		ll tong=0;
		for(int i=0;i<n;++i){
			cin>>a[i];
			if(a[i]%3==0) v0.pb(a[i]);
			else if(a[i]%3==1) v1.pb(a[i]);
			else v2.pb(a[i]);
			tong+=a[i];
		}
		vector<string> res;
		if(tong%3==0){
			sort(a,a+n);
			string z="";
			for(int i=n-1;i>=0;--i){
				char c=a[i]+'0';
				z+=c;
			}
			if(z.size()>0){
				if(check(z)) z="0";
				res.pb(z);
			}
		}
		else if(tong%3==1){
			if(v1.size()>0){
				sort(all(v1));
				string tmp="";
				vector<ll> ans;
				for(int i=0;i<v0.size();++i) ans.pb(v0[i]);
				for(int i=0;i<v2.size();++i) ans.pb(v2[i]);
				for(int i=v1.size()-1;i>=1;--i){
					ans.pb(v1[i]);
				}
				sort(all(ans));
				for(int i=ans.size()-1;i>=0;--i){
					char c=ans[i]+'0';
					tmp+=c;
				}
				if(tmp.size()>0){
					if(check(tmp)) tmp="0";
					res.pb(tmp);
				}
			}
			if(v2.size()>1){
				sort(all(v2));
				string tmp="";
				vector<ll> ans;
				for(int i=0;i<v0.size();++i) ans.pb(v0[i]);
				for(int i=0;i<v1.size();++i) ans.pb(v1[i]);
				for(int i=v2.size()-1;i>=2;--i){
					ans.pb(v2[i]);
				}
				sort(all(ans));
				for(int i=ans.size()-1;i>=0;--i){
					char c=ans[i]+'0';
					tmp+=c;
				}
				if(tmp.size()>0){
					if(check(tmp)) tmp="0";
					res.pb(tmp);
				}
			}
		}
		else{
			if(v2.size()>0){
				sort(all(v2));
				string tmp="";
				vector<ll> ans;
				for(int i=0;i<v0.size();++i) ans.pb(v0[i]);
				for(int i=0;i<v1.size();++i) ans.pb(v1[i]);
				for(int i=v2.size()-1;i>=1;--i){
					ans.pb(v2[i]);
				}
				sort(all(ans));
				for(int i=ans.size()-1;i>=0;--i){
					char c=ans[i]+'0';
					tmp+=c;
				}
				if(tmp.size()>0){
					if(check(tmp)) tmp="0";
					res.pb(tmp);
				}
			}
			if(v1.size()>1){
				sort(all(v1));
				string tmp="";
				vector<ll> ans;
				for(int i=0;i<v0.size();++i) ans.pb(v0[i]);
				for(int i=0;i<v2.size();++i) ans.pb(v2[i]);
				for(int i=v1.size()-1;i>=2;--i){
					ans.pb(v1[i]);
				}
				sort(all(ans));
				for(int i=ans.size()-1;i>=0;--i){
					char c=ans[i]+'0';
					tmp+=c;
				}
				if(tmp.size()>0){
					if(check(tmp)) tmp="0";
					res.pb(tmp);
				}
			}
		}




		if(res.size()==0) cout<<-1<<el;
		else{
			sort(all(res),cmp);
			cout<<res[0]<<el;
		}
	}

}