#include <bits/stdc++.h>
using namespace std;
#define X 100000
int a[X];
int main(){
    int n,m;
    cin >> n;
    for (int i=0; i< n; i++){
        cin >> a[i];
    }
    cin >> m;
    for (int i=0; i<n; i++){
        if (i==m-1){
            continue;
        }
        else {
            cout << a[i] << " ";
        }
    }
}