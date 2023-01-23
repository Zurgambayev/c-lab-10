// #include <iostream>
// #include <cmath>
// using namespace std;

// int main(){
//     float a; cin >> a;
//     float k; k = a / 4;
//     float n = k / 2;
//     double sum = 0;
//     double t = n;
//     for (int i = 0; i < 4; i++){
//         sum = sum + pow(n,2);
//         n = k + n;
//        // t = k;
//     }
//     cout << sum;
// }





 #include <iostream>
 using namespace std;


 
 string symb = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ", res="";


 string tokin( int n, int k ){
     if ( n==0 ) return res;
     res=symb[n%k]+res;
     return tokin( n/k, k );
 }
 int main(){
     int n, k;
     cin >> n >> k;
     cout << tokin( n, k );
     return 0;
 }


