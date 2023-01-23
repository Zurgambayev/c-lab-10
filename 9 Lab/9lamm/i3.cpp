#include <iostream>
#include <map>
using namespace std;

int main(){
    int n; cin >> n;
    map<string,int> m;
    while(n--){
        string s; cin >> s;
        if (m[s] == 0){
            cout << "new user added" << endl;
        }
        else  {
            cout << "user already exists" << endl;
            }
        m[s]++;
    }
}