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
    int ple=n-1;
    while(ple>=0){
        for(int i=n-1; i>=0; i--){
            cout << a[ple][i] << " ";
        }
        cout << endl;
        ple--;
    }
}