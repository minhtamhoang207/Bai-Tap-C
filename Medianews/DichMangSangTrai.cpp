#include <bits/stdc++.h>
using namespace std;
#define X 100000
int a[X];
int main(){
    int n;
    int m;
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    cin >> m;
    for(int i=m; i<n; i++){
        cout << a[i] << " ";
    }
    for(int i=0; i<m; i++){
        cout << a[i] << " ";
    }

}