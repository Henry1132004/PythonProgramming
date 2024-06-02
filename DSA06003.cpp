#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define el endl
#define pb push_back

int main(){
	  int t;   cin >> t;
	   queue<int> q;
	  while(t--){
	  	 string s;   cin >> s;
	  //	 queue<int> q;
	  	 if(s == "PUSH"){
	  	 	  int x;   cin >> x;
	  	 	  q.push(x);
		   }
		else if(s == "PRINTFRONT"){
			 if(!q.empty())  
			    cout << q.top() << endl;
			 else cout << "NONE" << endl;
		}
		else{
		  if(!q.empty())
		      q.pop();
		}
	}
}
		 