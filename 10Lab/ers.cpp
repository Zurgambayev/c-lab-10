#include <iostream>
#include <string>
using namespace std;
int gcd(int a, int b){
    while (a != b)
    {
        if (a > b){
            a -= b;
        }
        else{
            b -= a;
        }
    }
    return a;
}
int main()
{
    int n, l=0, h;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
        {
            if(j==i){
                break;
            }
            h = gcd(a[i],a[j]);
            if(h>l){            l=h;
       }
        }
    }
    cout<<l;
    return 0;
}