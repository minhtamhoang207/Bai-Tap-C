#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int topNga=n-1;
    int botNga=1;
    int topSao=1;
    int botSao;
    for(int i=0; i<n; i++){
        for(int j=0; j<topNga; j++){
            cout << "~";
        }
        for(int k=0; k<topSao; k++){
            cout << "*";
        }
        topNga--;
        topSao+=2;
        cout << endl;
    }
    botSao=topSao-4;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<botNga; j++){
            cout << "~";
        }
        for(int k=0; k<botSao; k++){
            cout << "*";
        }
        botNga++;
        botSao-=2;
        cout << endl;
    }
}