#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
    int n; cin >> n;
    map<string,double > m;
    int  obsh = 0;
    for(int i = 0; i < n; i++){
        int l; cin >> l;
        for(int j = 0; j < l;j++){
            string s; cin >> s;
            double r; cin >> r;
            obsh = obsh + r;
            m[s] = m[s] + r;
        }
    }
    //cout << obsh;
    //return 0;
    map<string,double> :: iterator it;
    double w;
    for(it = m.begin(); it != m.end();it++){
        w = ((*it).second *  100)/ obsh ;
        cout << it->first << " " << w << endl;
    }
}