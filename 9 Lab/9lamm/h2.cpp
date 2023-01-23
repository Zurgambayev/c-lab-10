#include <iostream>
#include <map>
using namespace std;

int main(){
    int n; cin >> n;
    map<string,int> m;
    for (int i = 1; i <= n; i++){
        string s; cin >> s;
        if (m[s] == 0){ // m[ab] = 1 -> m[ab] = 1 -> m[cd] = 3; 
            m[s] = i;
        }
    }
    map<string, int> :: iterator k;
    for(k = m.begin(); k!= m.end(); ++k){
        cout << k -> first << " " << k -> second << endl;
    }
}
