#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

int main(){
    string s; cin >> s;
    stack <char> st;
    string l = "";   int k;
    string r = "";
    int p;
    for(int i = 0; i < s.size(); i++){
        l = l + s[i];
        if (l.size() == 2){
            k = stoi(l);
            p = sqrt(k);
            if (k == p * p){
                l = "";
               // cout << k;
               // return 0;
               // continue;
            }else{
                 st.push(s[i - 1]);
                l.erase(l.begin(),l.begin() + 1);  // 16   l = 4 .    4
                r = r + s[i - 1];
                if (r.size() == 2){

                }
                //cout << l;
                //return 0;
            }
        } 
        if (i == s.size() - 1 && l.size() == 1){
            st.push(s[i]);
            r = r + s[i];
           // cout << st.top();
            //return 0;
        }
    }
    string r = "";
    // for(int i = 0; i < st.size(); i++){
    //     r = r + st[i];
    // }
}