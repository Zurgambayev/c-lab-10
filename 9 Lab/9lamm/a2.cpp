#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n; cin >> n;
    vector<pair<int,int> > v(n);
    //map<int,int> m;
    for(int i = 0; i < n; i++){
        int l,r; cin >> l >> r;
        v[i] = make_pair(l,r);
    }
    sort(v.begin(),v.end());
    for (int i = 0; i < n; i++){
        cout << v[i].first << " " << v[i].second<< endl;
    }
}