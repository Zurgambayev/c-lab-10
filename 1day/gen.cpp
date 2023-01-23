#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>

using namespace std;
int i = -1;
long long n_power() {
    i++;
    return powl(i, i);
}

int main() {
    int n;
    cin >> n;
    vector<long long> v(n + 1);
    generate(v.begin(), v.end(), n_power);

    for(auto i : v) {
        cout << i << ' ';
    }
}