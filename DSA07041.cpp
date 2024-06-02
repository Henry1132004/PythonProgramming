#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod=1e9+7;


int main(){
	int t; cin>>t; cin.ignore();
	while(t--){
		string s; getline(cin,s);
		stack<char> st;
		int dem=0;
		for(int i=0;i<s.size();++i){
			if(s[i]=='(') st.push(s[i]);
			else{
				if(!st.empty()){
					dem+=2;
					st.pop();
				}
			}
		}
		cout<<dem<<el;
	}
}



