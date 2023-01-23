#include <iostream>
#include <map>
using namespace std;

int main(){
    int n; cin >> n;
    map<pair<pair<string,string>,int> ,int> m;
    for (int i = 0; i < n; i++){
        string s1; int k1;
        string s2; int k2;
        cin >> s1; cin >> k1;
        cin >> s2; cin >> k2; 
         m[make_pair(make_pair(s1, s2), k1 + k2)] = k1 + k2;
    }
     map<pair<pair<string,string>,int> ,int> :: iterator r;
     for(r = m.begin(); r != m.end(); r++){
        cout << r->first.first.first << " and " << r->first.first.second << " " << r->second << endl;
     }
}