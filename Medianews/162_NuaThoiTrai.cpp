#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int incre=1;
    int decre=n-1;
    for(int i=0; i<n; i++){
        for(int k=0; k<decre; k++){
            cout << "~";
        }
        for(int j=0; j<incre; j++){
            cout << "*";
        }
        incre++;
        decre--;
        cout << endl;
    }
    incre=n-1;
    decre=1;
    for(int i=0; i<n-1; i++){
        for(int k=0; k<decre; k++){
            cout << "~";
        }
        for(int j=0; j<incre; j++){
            cout << "*";
        }
        decre++;
        incre--;
        cout << endl;
    }
}