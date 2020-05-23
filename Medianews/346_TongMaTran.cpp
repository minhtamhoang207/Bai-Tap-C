#include<bits/stdc++.h>
using namespace std;
//const int N = 1e6;
int a[100][100];
int b[100][100];
int main(){
    int n,m;
    cin >> n;
    cin >> m;
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cin >> b[i][j];
        }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout << a[i][j] + b[i][j] << " ";
        }
        cout << endl;
    }
}