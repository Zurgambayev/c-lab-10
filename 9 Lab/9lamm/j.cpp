#include <iostream>
#include <map>
using namespace std;

int main(){
    int n; cin >> n;
    map<string,int> m;
    while(n--){
        string s; cin >> s;
        int k; cin >> k;
        m[s] = m[s] + k; 
    }
    map<string,int> :: iterator l;
    for (l = m.begin();l != m.end(); l++){
        cout << (*l).first << " " << (*l).second << endl;
    }
}