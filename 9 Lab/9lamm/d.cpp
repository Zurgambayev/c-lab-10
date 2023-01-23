#include <iostream>
#include <map>
using namespace std;

int main(){
    int n; cin >> n;
    int l ; cin >> l;
    int i = 0;
    int cnt = 0;
    map<int,int> m ;
    while(n--){
        int x; cin >> x;
        m[i] = x;
        i++;
    }
    map<int,int> :: iterator k;
    for(k = m.begin();k != m.end(); k++){
        if ((*k).second == l){
            cnt++;
        }
    }
    cout << cnt;
}