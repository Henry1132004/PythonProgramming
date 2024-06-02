#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod=1e9+7;

struct data{
	ll a,b,c;
};

int main(){
	int t; cin>>t;
	while(t--){
		string s1,s2; cin>>s1>>s2;
		ll x1=s1[0]-'a'+1; ll y1=s1[1]-'0';
		ll x2=s2[0]-'a'+1; ll y2=s2[1]-'0';
		queue<data> q;
		q.push({x1,y1,0});
		while(!q.empty()){
			data tmp=q.front();
			q.pop();
//			cout<<tmp.a<<" "<<tmp.b<<" "<<tmp.c<<el;
			if(tmp.a==x2&&tmp.b==y2){
				cout<<tmp.c<<el;
				break;
			}
			if(tmp.a>1&&tmp.b+2<=8) q.push({tmp.a-1,tmp.b+2,tmp.c+1});
			if(tmp.a>1&&tmp.b-2>=1) q.push({tmp.a-1,tmp.b-2,tmp.c+1});
			if(tmp.a<8&&tmp.b+2<=8) q.push({tmp.a+1,tmp.b+2,tmp.c+1});
			if(tmp.a<8&&tmp.b-2>=1) q.push({tmp.a+1,tmp.b-2,tmp.c+1});
			if(tmp.a-2>=1&&tmp.b-1>=1) q.push({tmp.a-2,tmp.b-1,tmp.c+1});
			if(tmp.a-2>=1&&tmp.b+1<=8) q.push({tmp.a-2,tmp.b+1,tmp.c+1});
			if(tmp.a+2<=8&&tmp.b-1>=1) q.push({tmp.a+2,tmp.b-1,tmp.c+1});
			if(tmp.a+2<=8&&tmp.b+1<=8) q.push({tmp.a+2,tmp.b+1,tmp.c+1});
		}
	}
}

