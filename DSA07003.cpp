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
		int check=0;
		for(int i=0;i<s.size();++i){
			if(s[i]=='('){
				st.push('(');
			}
			else if(s[i]==')'){
				ll dem=0;
				while(st.top()!='('){
					if(st.top()=='+'||st.top()=='-'||st.top()=='*'||st.top()=='/') dem++;
					st.pop();
					
				}
				if(dem==0){
					check=1;
					break;
				}
				
			}
			else{
				st.push(s[i]);
			}
		}
		if(check) cout<<"Yes\n";
		else cout<<"No\n";
	}
}

