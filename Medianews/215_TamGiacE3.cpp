#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int first=1;
    int count=n;
    for(int i=0; i<n; i++){
        int ele=first;
        for(int j=0; j<count; j++){
            cout << ele;
            ele+=2;
        }
        first+=2;
        count--;
        cout << endl;
    }
}