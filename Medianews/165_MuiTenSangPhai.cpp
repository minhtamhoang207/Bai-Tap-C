#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int stars=n;
    int nga=0;
    for(int i=0; i<n; i++){
        for(int k=0; k<nga; k++){
            cout << "~";
        }
        for(int j=0; j<stars; j++){
            cout << "*";
        }

        stars--;
        nga+=2;
        cout << endl;
    }
    nga-=4;
    stars=2;
    for(int i=0; i<n-1; i++){
        for(int k=0; k<nga; k++){
            cout << "~";
        }
        for(int j=0; j<stars; j++){
            cout << "*";
        }

        stars++;
        nga-=2;
        cout << endl;
    }
}