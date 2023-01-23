#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

int main(){
    string s; cin >> s;
    stack <char> st;
    string l = "";
    int k;int p;
    for (int i = 0; i < s.size(); i++){     // 16 14964
        for (int j = i + 1; j < s.size(); j++){ 
            l = s[i] + s[j];
            if (l.size() == 2){
                k = stoi(l);
                p = sqrt(k);
                if (k == p * p){
                    if (s[i] == s[j -1]){}
                    break;
                }
            }  
       }
    }
}