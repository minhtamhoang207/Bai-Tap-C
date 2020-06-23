#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int nga=n-1;
    int stars=n;
    for(int i=0 ;i<n; i++){
        for(int j=0; j<nga; j++){
            cout << "~";
        }
        for(int k=0; k<stars; k++){
            cout << "*";
        }
        stars--;
        nga--;
        cout << endl;
    }
    nga=1;
    stars=2;
    for(int i=0 ;i<n-1; i++){
        for(int j=0; j<nga; j++){
            cout << "~";
        }
        for(int k=0; k<stars; k++){
            cout << "*";
        }
        stars++;
        nga++;
        cout << endl;
    }
}