#include <iostream>
#include <cmath>
#include <algorithm>
#include <stack>
using namespace std;

int main(){
    string s; cin >> s;
    stack<char> st;
    string l = ""; int k;
    int p; string y;
    int m;
    for(int i = 0; i < s.size(); i++){
        l = l + s[i];  // 
        if (l.size() == 2){
            k = stoi(l);
            p = sqrt(k);
            if (k == p * p){
                l = ""; 
            }else{
                y = y + l[0];  //  
                l.erase(l.begin(), l.begin() + 1);   // . 15 11 54 56 18 79 84 31 31 24 56 03 21 56 56 16 5
            }
        }if(i == s.size() - 1 && l.empty() == true){
            cout << "Stack is empty";
            return 0;
        }
        if(i == s.size() - 1 && l.size() == 1){
            y = y + l;
            if(y.size() == 2){
            m = stoi(y);
            p = sqrt(m);
            if(m == p * p){
                cout << "Stack is empty";
                return  0;
            }
            }
        }
    }
    for (int i = 0; i < y.size();i++){
        st.push(y[i]);
    }
    while(!st.empty()){
        cout << st.top();
        st.pop();
    }
    return 0;
}