#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int count=1;
    for (int i=0; i<n; i++){
        int minus=count;
        for(int j=0; j<count; j++){
            cout << n-minus+1;
            minus--;
        }
        count++;
        cout << endl;
    }
}