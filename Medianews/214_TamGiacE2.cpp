#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int count=n;
    for(int i=0; i<n; i++){
        int ele=count;
        for(int j=0; j<count; j++){
            cout << ele;
            ele++;
        }
        count--;
        cout << endl;
    }
}