#include <iostream>
#include <queue>
using namespace std;

int main(){
    int n; cin >> n;
    queue<string> q;
    int l;
    string s;
    for(int i = 0; i < n; i++){
        cin >> l;
        if(l == 1){
            cin >> s;
                q.push(s);
                cout << q.front() << endl;
        }else{
            q.pop();
            if(q.empty() == true ){
                 cout << "queue is empty" << endl;
            }
            if(!q.empty()){
               cout << q.front() << endl;
            }
        }
    }
}