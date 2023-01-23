#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    int n; cin >> n;
    map<string,int> m;
    for(int i = 1; i <= n; i++){
        string l; cin >> l;
        if (m[l] == 0){
            m[l] = i;
        }
    }
    map<string,int> :: iterator k;
    for (k = m.begin(); k != m.end();k++){
        cout << (*k).first <<" "<< (*k).second << endl;
    }
}