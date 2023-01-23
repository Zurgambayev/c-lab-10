#include <iostream>
#include <string>
using namespace std;

int SUM(string n, int i, int sum){
    sum += (n[i] - '0');
    if(i == 0){
        return sum;
    }
    return SUM(n,--i,sum); // sum = sum + (n[i] - '0')
}

int main (){
    string n; cin >> n;
    int sum = 0;
    int i = n.size() - 1;
    cout << SUM(n,i,sum);
}