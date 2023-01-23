#include <iostream>
#include <queue>
using namespace std;

int main(){
    int n; cin >> n;
    queue<pair<int,string> > q;
     string s;
    while(n--){
        int l; cin >> l;
        if(l == 1){
            cin >> s;
            q.push(make_pair(l,s));
        }else{
             q.push(make_pair(l,s));
             if(q.second )
        }
    }
}