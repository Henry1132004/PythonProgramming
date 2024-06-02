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
	int n=10000;
	vector<ll> prime(n+1,0);
	prime[0]=prime[1]=1;
	for(int i=2;i<=sqrt(n);++i){
		if(prime[i]==0){
			for(int j=i*i;j<=n;j+=i){
				prime[j]=1;
			}
		}
	}
	vector<ll> mp(n,0);
	for(int i=1000;i<n;++i){
		if(prime[i]==0){
			mp[i]=1;
		}
	}
	int t; cin>>t;
	while(t--){
		ll S,T; cin>>S>>T;
		queue<pair<ll,ll>> q;
		q.push({S,0});
		vector<ll> dp(n,0);
		while(!q.empty()){
			pair<ll,ll> tmp=q.front(); q.pop();
			if(tmp.first==T){
				cout<<tmp.second<<el;
				break;
			}
			string s=to_string(tmp.first);
			string s1=s;
			s1.erase(3);
			ll a1=stoll(s1);
			for(int i=0;i<10;++i){
				ll x=a1*10+i;
				if(mp[x]&&dp[x]==0){
					q.push({x,tmp.second+1});
					dp[x]=tmp.second+1;
				}
			}
			string s2=s;
			string s21=s2.substr(0,2);
			string s22=s2.substr(3,1);
			ll a21=stoll(s21); ll a22=stoll(s22);
			for(int i=0;i<10;++i){
				ll x=a21*100+i*10+a22;
				if(mp[x]&&dp[x]==0){
					q.push({x,tmp.second+1});
					dp[x]=tmp.second+1;
				}
			}
			string s3=s;
			string s31=s3.substr(0,1);
			string s32=s3.substr(2,2);
			ll a31=stoll(s31); ll a32=stoll(s32);
			for(int i=0;i<10;++i){
				ll x=a31*1000+i*100+a32;
				if(mp[x]&&dp[x]==0){
					q.push({x,tmp.second+1});
					dp[x]=tmp.second+1;
				}
			}
			string s4=s.substr(1,3);
			ll a4=stoll(s4);
			for(int i=1;i<10;++i){
				ll x=i*1000+a4;
				if(mp[x]&&dp[x]==0){
					q.push({x,tmp.second+1});
					dp[x]=tmp.second+1;
				}
			}
		}
	}

}