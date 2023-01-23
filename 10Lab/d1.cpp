#include <iostream>
#include <vector>
using namespace std;

int Sum(vector<int> v){
    int sum = 0;
    for(int i = 0; i < v.size();i++){
        sum = sum + v[i];
    }
    return sum;
}

bool comp(){}

int main(){
    int n; cin >> n;
    vector<vector<int> > v(n);
    int k,l;
    for(int i = 0; i < n; i++){
        cin >> k;
        vector<int> m(k);
        for(int j = 0; j < k; j++){
            cin >> m[j];
        }
        v[i] = m;
    } 
}