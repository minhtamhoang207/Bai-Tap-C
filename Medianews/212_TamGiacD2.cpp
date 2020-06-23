#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int count=n;
    int hihi=1;
    for(int i=0; i<n; i++){
        int ua=hihi;
        for(int j=0; j<count; j++){
            cout << ua;
            ua++;
        }
        hihi++;
        count--;
        cout << endl;
    }
}