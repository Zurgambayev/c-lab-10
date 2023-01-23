#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> m(n);
    vector<string> k(n);
    for (int i = 0; i < n; i++){ 
        string s; cin >> s;
        int l; cin >> l;
        m[i] = l;
        k[i] = s; 
    } 
    sort(m.begin(), m.end());
    sort(k.begin(), k.end());
    for (int i = 0; i < n; i++){
        cout << k[i] << " " << m[i] << endl;
    } 
}