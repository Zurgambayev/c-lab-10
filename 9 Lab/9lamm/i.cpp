#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main (){
    int n; cin >> n;
    map<int,string > m;
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        m[i] = s;
    }
    map<int, string> :: iterator k;
    map<int, string> :: iterator l;
    int cnt = 0;
    for(k = m.begin(); k != m.end(); k++){
        for(l = m.begin(); l != m.end(); l++){
            if ((*k).second == (*l).second){
                cnt++;
                if (cnt % 2 == 1){
                    cout << "new user added" << endl;
                }
                if(cnt % 2 == 0){
                    cout << "user already exists" << endl;
                }
            }
            if((*k).second == (*l).second){
                cnt = 0;
                break;
            }
        }
    }
}
