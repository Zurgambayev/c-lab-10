#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(){
    string n; cin >> n;
    vector<char> v(n.size());
    for (int i = 0; i < n.size(); i++){
        v[i] = n[i];
    }
    for(int i = 0; i < n.size(); i++){
        if(v[i] == '1' && v[i + 1] == '1'){
            continue;
        }
        if (v[i + 1] == '0' || v[i - 1] == '0' ){
            cout << v[i];
        }
        if(v[i] == '1' && v[i - 1] == '1' ){
            continue;
        }else{
            cout << v[i];
        }
    }
}