#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define el endl

void fast(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
}

int sosanh(string s,string t){
	if(s==t) return 1;
	else{
		int l1=s.size();
		int l2=t.size();
		if(l1>l2) return 1;
		else if(l1==l2){
			return s>t;
		}
		else return 0;
	}
}

int main(){
	int t; cin>>t; cin.ignore();
	queue<string> q;
	q.push("1");
	int dem=1;
	vector<string> v;
	while(dem<=600000){
		v.pb(q.front());
		string tmp=q.front();
		q.pop();
		q.push(tmp+"0");
		q.push(tmp+"1");
		dem++;
	}
	while(t--){
		string s; getline(cin,s);
		ll ans=0;
		
		for(int i=0;i<v.size();++i){
			if(sosanh(s,v[i])) ans++;
			else break;
		}
		cout<<ans<<el;
	}
}



