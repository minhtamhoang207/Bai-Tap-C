#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int hihi=1;
    int m=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << hihi;
        }
        hihi++;
        m++;
        cout << "\n";
    }
}