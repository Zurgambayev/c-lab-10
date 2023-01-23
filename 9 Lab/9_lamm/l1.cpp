#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

bool comp(pair<int,int>& left, pair<int,int>& right){
    if (left.second == right.second){
        return left.first > right.first;
    }
    return left.second > right.second;
}

int main(){
    int n; cin >> n;
    map<int,int> m;
    for(int i = 1; i <= n; i++){
        int k,l; cin >> k >> l;
        m[i] = k + l;
    }
    vector<pair<int,int> > v(m.begin(), m.end());
    sort(v.begin(),v.end(),comp);
    for (int i = 1; i <= v.size();i++){
        cout << v[i].first << " "; 
    }
}