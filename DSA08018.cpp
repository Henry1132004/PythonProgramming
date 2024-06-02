#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod=1e9+7;

void fast(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
}

int main(){
	int t; cin>>t;
	queue<string> q;
	q.push("6");
	q.push("8");
	vector<string> v;
	int dem=1;
	while(dem<=50000){
		v.pb(q.front());
		string tmp=q.front();
		q.pop();
		q.push(tmp+"6");
		q.push(tmp+"8");
		dem++;
	}
	while(t--){
		ll n; cin>>n;
		vector<string> v1;
		for(int i=0;i<v.size();++i){
			int l=v[i].size();
			if(l<=n) v1.pb(v[i]);
			else break;
		}
		cout<<v1.size()<<el;
		for(int i=0;i<v1.size();++i){
			cout<<v1[i]<<" ";
		}
		cout<<el;
		
	}
}


