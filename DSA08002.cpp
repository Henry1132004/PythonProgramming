#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod=1e9+7;



int main(){
	queue<ll> q;
//	ll tmp;
	int t; cin>>t; cin.ignore();
	while(t--){
		string s; getline(cin,s);
		stringstream ss(s);
		vector<string> v;
		string w;
		while(ss>>w){
			v.pb(w);
		}
		if(v[0]=="PUSH"){
			ll a=stoll(v[1]);
//			if(st.empty()) tmp=a;
			q.push(a);
		}
		else if(v[0]=="POP"&&!q.empty()){
			q.pop();
		}
		else if(v[0]=="PRINTFRONT"){
			if(q.empty()) cout<<"NONE\n";
			else{
				cout<<q.front()<<el;
			}
		}
	}
}

