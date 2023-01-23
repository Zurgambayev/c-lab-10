#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n; cin >> n;
    long long p;
    cout << 1 << " ";
    for(int i = 0; i <= n; i++){  // 1 2 3
    p = i;
        for (int j = i; j >= 2; --j){  // 3 
            p = p * i;
        }if (i == 0){
            continue;
        }
        cout << p << " ";
    }
}