#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n; cin >> n;
    vector<pair<string,string> > v(n);
    for(int i = 0; i < n; i++){
        string s,l; cin >> s >> l;
        v[i] = make_pair(s,l);
    }
    int k; cin >> k;
     vector<pair<string,string> > w(k);
    for (int i = 0; i < k; i++){
        string x,y; cin >> x >> y;
        w[i] = make_pair(x,y);  //   w.push_back(make_pair(s,l));
    }
    int cnt = 0;
    for (int i = 0; i < k; i++){
        for(int j = 0; j < n; j++){
            if (v[j].first == w[i].first){
                if (v[j].second == w[i].second){
                    cout << "correct password" <<endl;
                }
                   if (v[j].second != w[i].second){
                    cout << "password error" << endl;
                }
                cnt++;
            }
        }
        if(cnt == 0){
            cout << "login error" << endl;
        }
        cnt = 0;
    }
}