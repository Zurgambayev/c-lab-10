#include <iostream>
#include <map>
using namespace std;

int main(){
    int n; cin >> n;
    map<int,int> m;
    while(n--){
        int x; cin >> x;
        m[x]++;
    }
    int cnt = 0;
    map<int,int> :: iterator k;
    for (k = m.begin(); k != m.end();k++){
        if (k->second >= 2){
            cnt++;
        }
    }
    cout << cnt;
}