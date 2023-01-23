#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    int n; cin >> n;
    long long l;
    for (long long i = 0; i <= n; i++){
        l = pow(i,i);
        cout << l << " ";
    }
}