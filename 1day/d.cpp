#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
typedef long long ll;
ll gen()
{
    static int _xStatic = 1;
    cout << _xStatic << endl;
    _xStatic ++;

    return pow(_xStatic, _xStatic);
}
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<ll> v1(n);
    std::generate(v1.begin(), v1.end(), gen);
    
    for(auto x : v1)
        cout << x << ' ';


    return 0;
}