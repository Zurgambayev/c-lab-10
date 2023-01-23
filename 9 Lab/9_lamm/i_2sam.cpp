#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

bool comp(pair<int,int> left, pair<int,int> right){
    if (left.second == right.second){
        return right.first > left.first;
    }
    return right.second > left.second;
}

int main(){
    int n; cin >> n;
    map<int,int> m;
    for(int i = 1; i <= n; i++){
        int k,l; cin >> k >> l;
        m[i] = k + l;
    }
    vector<pair<int,int> > v(2 * n);
    for (int i = 1; i <= v.size();i++){
        v[i].first = i;
        v[i].second = m[i]; 
    }
    sort(v.begin(),v.end(),comp);
     for (int i = 1; i <= v.size();i++){
        cout << v[i].first << " "; 
    }
}

/*#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<int, int> &p1, pair<int, int> &p2) {
    if(p1.second == p2.second) {
        return p2.first > p1.first;
    }
    return p2.second > p1.second;
}

int main() {
    int n;
    cin >> n;
    map<int, int> m;

    for(int i = 1; i <= n; i++) {
        int x, y;
        cin >> x >> y;
        m[i] = x + y;
    }
    vector<pair<int, int> > v(m.begin(), m.end());
    sort(v.begin(), v.end(), cmp);

    for(auto i : v) {
        cout << i.first << ' ';
    }
    cout << '\n';
}*/