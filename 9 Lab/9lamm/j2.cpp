#include <iostream>
#include <map>
using namespace std;
int main(){
    int n;
    cin >> n;
    map <string,int> m;
    while(n--){
        string s;cin >> s;
        int k;cin >> k;
        m[s]= m[s] + k;
    }
    map <string,int> :: iterator k;
    for(k = m.begin(); k != m.end();k++){
        cout << k->first << " " << k->second << endl;
    }
}