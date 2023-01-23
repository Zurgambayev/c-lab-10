#include <iostream>
#include <stack>
using namespace std; 
int main(){
    string s; cin >> s;
    stack<char> st;
    if(s[s.size() - 1] == '('){
        cout << "NO";
        return 0;
    }
    for(int i = 0; i < s.size(); i++){
         if(s[0] == '(' && s[i] == s[0]){
         st.push(s[i]);
         }
         if(s[0] != '(' && s[s.size() - 1] != ')'){
             cout << "No";
             return 0;
             }
    }
    for(int i = 0; i < s.size();++i){
        if(s[i] != '('){
            st.pop();
        }
    }
    if(st.size() == 0){
        cout << "YES";
    }else{
        cout << "NO";
    }
}