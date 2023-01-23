#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>


using namespace std;

int i = -1;

long long n_power() {
    long long pow;
    int k;
    i++;
    k = i;
    pow = i;
    if(i == 0){
        return 1;
    }
    while (k--){ // 2 4
        pow = pow * pow;
    }
    return pow;
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