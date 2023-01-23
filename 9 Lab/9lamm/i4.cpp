#include <iostream>
#include <map>
using namespace std;

void f(int n, map<string ,int> m,int i){
    while (n--){
        string s; cin >> s;
        m[s] = i;
        if (m[s] == 0){
            
        }
        i++;
    }
}

int main(){
    int n; cin >> n;
    int i = 0;
    map<string ,int> m;
}