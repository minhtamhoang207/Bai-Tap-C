#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int count=n;
    for(int i=0; i<n; i++){
        for(int j=0; j<count; j++){
            cout << j+1;
        }
        count--;
        cout << endl;
    }
}