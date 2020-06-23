#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int hihi=1;
        for(int j=0; j<n; j++){
            if(i>j){
                cout << "~";
            }
            else{
                cout << hihi;
                hihi++;
            }
        }
        cout << endl;
    }


}