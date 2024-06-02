#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod=1e9+7;

int check(string s){
	set<char> se;
	for(int i=0;i<s.size();++i){
		se.insert(s[i]);
	}
	int l1=se.size();
	int l2=s.size();
	if(l1==l2) return 1;
	return 0;
}

int main(){
	vector<ll> v;
	queue<string> q;
	q.push("1");
	q.push("2");
	q.push("3");
	q.push("4");
	q.push("5");
	int dem=1;
	while(!q.empty()&&dem<=10000){
		string tmp=q.front();
		if(check(tmp)){
			ll a=stoll(tmp);
			v.pb(a);
			q.push(tmp+"0");
			q.push(tmp+"1");
			q.push(tmp+"2");
			q.push(tmp+"3");
			q.push(tmp+"4");
			q.push(tmp+"5");
		}
		q.pop();
		dem++;
	}
	int t; cin>>t;
	while(t--){
		ll l,r; cin>>l>>r;
		auto it=lower_bound(v.begin(),v.end(),l);
		ll ans=0;
		ll j=distance(v.begin(),it);
		for(int i=j;j<v.size()&&v[i]<=r;++i){
			ans++;
		}
		cout<<ans<<el;
	}
}



