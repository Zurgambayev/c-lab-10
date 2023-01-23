#include <iostream>
#include <vector>
#include <map>
#include <queue>
using namespace std;

int main(){
    int n; cin >> n;
    queue<string> q;
    for (int i = 0; i < n;i++){
        int l; cin >> l;
        if(l == 1){
            string s; cin >> s;
            q.push(s);
            cout << q.front() << endl;
        }else{
            if (!q.empty()){
                q.pop();
            }
            if (q.empty()){
                cout << "queue is empty" << endl;
            }
        }
    }
}