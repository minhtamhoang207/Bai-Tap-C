#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int leftStar=n;
    int rightStar=n;
    int nga=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<leftStar; j++){
            cout << "*";
        }
        for(int k=0; k<nga; k++){
            cout << "~";
        }
        for(int l=0; l<rightStar; l++){
            cout << "*";
        }
        nga+=2;
        leftStar--;
        rightStar--;
        cout << endl;
    }
    nga-=4;
    leftStar=2;
    rightStar=2;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<leftStar; j++){
            cout << "*";
        }
        for(int k=0; k<nga; k++){
            cout << "~";
        }
        for(int l=0; l<rightStar; l++){
            cout << "*";
        }
        nga-=2;
        leftStar++;
        rightStar++;
        cout << endl;
    }
}