#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n; cin >> n;
    vector<pair<int,int> > v(n);
    for(int i = 0; i < n; i++){
        int k,l; cin >> k >> l;
        v[i] = make_pair(k + l,i + 1);
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < n; i++){
        cout << v[i].second << " ";
    }
}


// #include <iostream>
// #include <vector>
// #include <map>
// using namespace std;

// int main() {
//     int n; cin >> n;
//     map <int, int> m;
//     for(int i = 0; i < n; i++) {
//         int a, b;
//         cin >> a >> b;
//         m[a + b] = i + 1;
//     }
//     map <int, int> :: iterator it;
//     for(it = m.begin(); it != m.end(); it++) {
//         cout << it->second << " ";
//     }
//     return 0;
// }