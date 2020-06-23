#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int incre=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<incre; j++){
            cout << "*";
        }
        incre++;
        cout << endl;
    }
    incre=n-1;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<incre; j++){
            cout << "*";
        }
        incre--;
        cout << endl;
    }
}