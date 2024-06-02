#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod=1e9+7;


int main(){
	int t; cin>>t; cin.ignore();
	deque<ll> q;
	while(t--){
		string s; getline(cin,s);
		stringstream ss(s);
		string w;
		vector<string> v;
		while(ss>>w){
			v.pb(w);
		}
		if(v[0]=="PUSHFRONT"){
			ll x=stoll(v[1]);
			q.push_front(x);
		}
		else if(v[0]=="PRINTFRONT"){
			if(q.empty()) cout<<"NONE\n";
			else{
				cout<<q.front()<<el;
			}
		}
		else if(v[0]=="POPFRONT"){
			if(!q.empty()) q.pop_front();
		}
		else if(v[0]=="PUSHBACK"){
			ll x=stoll(v[1]);
			q.pb(x);
		}
		else if(v[0]=="PRINTBACK"){
			if(q.empty()) cout<<"NONE\n";
			else{
				cout<<q.back()<<el;
			}
		}
		else if(v[0]=="POPBACK"){
			if(!q.empty()) q.pop_back();
		}
	}
}



