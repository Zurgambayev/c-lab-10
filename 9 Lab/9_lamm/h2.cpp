#include <iostream>
#include <map>
using namespace std;

int main(){
    int n; cin >> n;
    map<string,int> m;
    int i = 1;
    while(n--){
        string s; cin >> s;
        if(m[s] == 0){
            m[s] = i;;
        }
        i++;
    }
    map<string ,int> :: iterator k;
    for(k = m.begin(); k != m.end(); k++){
        cout << (*k).first << " " << (*k).second << endl;
    }
}