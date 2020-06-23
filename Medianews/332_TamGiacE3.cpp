#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    int count = n;
    char a=65;
    for(int i=0; i<n; i++){
        char up = a;
        for(int j=0; j<count; j++){
            cout << up;
            up+=2;
        }
        count--;
        a+=2;
        cout << endl;
    }

}