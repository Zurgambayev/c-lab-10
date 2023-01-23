#include <iostream>
//#include <
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n], a;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int count = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            a = arr[i]^arr[j];
            for(int q=0; q<n; q++){
                if(a == arr[q]){
                    count++;
                }
            }
        }
    }
    cout << count/2;
}