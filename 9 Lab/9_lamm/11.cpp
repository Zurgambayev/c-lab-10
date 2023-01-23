#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    vector<pair<int, int> > v;
    v.push_back(make_pair(1, 4));
    v.push_back(make_pair(1, 3));
    v.push_back(make_pair(1, 2));
    v.push_back(make_pair(1, 9));

    for(auto i : v) {
        cout << i.first << ' ' << i.second << '\n';
    }
}