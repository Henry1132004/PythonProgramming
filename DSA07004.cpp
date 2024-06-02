#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back
int mod=1e9+7;



int main(){
	int t; cin>>t; cin.ignore();
	while(t--){
		stack<char> st;
		string s;
		getline(cin,s);
		int dem=0;
		for(int i=0;i<s.size();++i){
			if(s[i]==')'&&st.empty()){
				dem++;
				st.push('(');
			}
			else if(s[i]==')'&&st.top()==')'){
				dem++;
				st.pop();
			}
			else if(s[i]==')'&&st.top()=='('){
				st.pop();
			}
			else if(s[i]=='(') st.push('(');
		}
		ll l=st.size();
		dem+=l/2;
		cout<<dem<<el;
		
	}
}

