#include<bits/stdc++.h>
using ll = long long;

using namespace std;

int check(string s){
     if(s[0] != s[s.size() - 1])
        return 0;
        for(int i = 1; i <= s.size() - 1; i++){
               if(s[i] - s[i - 1] != '2' || s[i - 1] - s[i] != '2')
                    return 0;
        } 
     
       return 1;
}

int main(){
       int a, b;  cin >> a >> b;
       int ok = 0;
       for(int i = a; i <= b; i++){
            string res = to_string(i);
            if(check(res)){
                cout << res << " ";
                ok = 1;
                break;
            }
       } 
        if(!ok)  cout << "28tech" << endl;

}