#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ele=1;
    int count=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<count; j++){
            cout << ele;
            ele++;
        }
        count++;
        cout << endl;
    }
}