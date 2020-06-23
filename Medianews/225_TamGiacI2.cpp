#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int count=1;
    int up=0;
    int prt=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<count; j++){
            cout << prt << " ";
            ++up;
            prt+=up;
        }
        count++;
        cout << endl;
    }
}

