#include <bits/stdc++.h>
using namespace std;
int a[100][100];
int main(){
    int m,n;
    cin >> m >> n;
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }
    int c,b;
    cin >> c >> b;
    for(int i=0;i<m; i++){
        for(int j=0; j<n; j++){
            if(i==c-1){
                cout << a[b-1][j] << " ";
            }
            else if(i==b-1){
                cout << a[c-1][j] << " ";
            }
            else if(i!=c-1 && i!=b-1){
                cout << a[i][j] << " ";
            }
        }
        cout << endl;
    }
}