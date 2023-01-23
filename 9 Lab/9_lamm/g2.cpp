#include <iostream>
#include <queue>
using namespace std;

int main(){
    string s; cin >> s;
    queue <char> q;
    for(int i = 0; i < s.size() - 1; ++i){
    q.push(s[i]);
    }
    for(int i = 0; i < s.size() - 1; ++i){
        if(q.front() == '1'){
        }
    }
}