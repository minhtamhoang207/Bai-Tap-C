#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int m=n-1;
    for(int i=0; i<n; i++){
        for(int i=1; i<=m; i++ ){
            cout << "~";
        }
        for(int i=0; i<n; i++){
            cout << "*";
        }
        m--;
        cout << endl;
    }
}