#include <iostream>
#include <vector>
using namespace std;
int main(){
    string s; cin >> s;
    vector<char> v(s.size());
    for (int i = 0;i < s.size(); i++){
        v[i] = s[i];
    } for (int i = 0;i < s.size(); i++){
        if(v[i] == v[i + 1] || v[i - 1] == v[i] ){
            continue; 
        }
        cout << v[i];
    }
}