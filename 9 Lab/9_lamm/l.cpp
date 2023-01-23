#include <iostream>
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
}