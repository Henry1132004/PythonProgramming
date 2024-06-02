#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	 int t;  cin >> t;
	 while(t--){
		  stack<ll> st;
		  string s;  cin >> s;
		  st.push(-1);
		  ll res = 0;
		  for(int i = 0; i < s.size(); i++){
			   if(s[i] == '(')  st.push(i);
			   else{
				  if(!st.empty())  st.pop();
				  if(!st.empty()) 
				     res = max(res, i - st.top());
				  else st.push(i);
			   }
		  }
		    cout << res << endl;
	 }
}