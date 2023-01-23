#include <iostream>
#include <map>
using namespace std;

int main(){
    string s; cin >> s;
    map<int, string> m;
    for(int i = 0; i < s.size(); i++){
        m[i] = s[i];
    }
    map <int,string> :: iterator k;
    for(k = m.begin(); k != m.end(); k++){
        if ((*k).second == "(" ){}
    }
}