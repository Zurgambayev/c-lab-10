#include <iostream>
#include <map>
#include <vector>
using namespace std;

bool comp(pair<int,int> &p1, pair<int,int> &p2){
    return p1.first + p1.second < p2.first + p2.second;
}


int main(){
    int n; cin >> n;
    vector <pair<int,int> > v(n);
    for (int i = 1; i <= n; i++){
        int k,l; cin >> k >> l;
        v[i] = make_pair(k,l);
    }
}
