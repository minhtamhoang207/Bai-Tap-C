#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int count=1;
    cin >> n;
    for(int i=0; i<n; i++){
        int le=1;
        int chan=2;
        for(int j=1; j<=count; j++){
            if((i+1)%2==0){
                cout << chan;
                chan+=2;
            }
            if((i+1)%2 != 0){
                cout << le;
                le+=2;
            }
        }
        count++;
        cout << endl;
    }
}