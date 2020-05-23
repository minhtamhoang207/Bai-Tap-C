#include <bits/stdc++.h>
using namespace std;
int a[100][100];
int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n;j++){
            cin >>a[i][j];
        }
    }
    int ple=0;
    while(ple<n){
        for(int i=n-1; i>=0; i--){
            cout << a[i][ple] << " ";
        }
        cout << endl;
        ple++;
    }
}