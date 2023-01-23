#include <iostream>
#include <map>
using namespace std;

int main(){
    int n; cin >> n;
    map<string,int> m;
    int i = 0;
    while(n--){
        string s; cin >> s;
        m[s]++;
    }
    int cnt = 0;
    map<string ,int> :: iterator k;
    for(k = m.begin(); k != m.end(); k++){
        if (k->second == 3){
            cnt++;
        }
    }cout << cnt;
}