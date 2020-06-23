#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int m = n -1;
    int up=1;
    int count=1;
    for(int i=0 ; i<n; i++){
        for(int j=0; j<m; j++){
            cout << "~";
        }
        for(int k=0; k < count; k++){
            cout << up ;
        }
        m--;
        up++;
        count++;
        cout << endl;
    }
}