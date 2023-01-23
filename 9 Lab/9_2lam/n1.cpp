#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int> v;
    for(int i = 1; i <= n ; i++){
        int l; cin >> l;
        v.push_back(l);
    }
    int cnt = 0;
    int k;
    for(int j = 1; j <= n; j++ ){
        for(int i = 1; i < j; i++){
            k = (v[i]^v[j]);
            for(int r = 1; r <= n; r++){
            if(k == v[r]){
                cnt++;
                break;
            }
            }
        }
    }    
    cout << cnt;
}