#include<bits/stdc++.h>
using namespace std;
int a[100][100];
int b[100][100];
int c[100][100];
int main(){
    int n,m;
    cin >> n;
    cin >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> b[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<m; k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << c[i][j] << " ";
        }
        cout << endl;
    }

}

