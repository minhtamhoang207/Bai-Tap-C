#include <bits/stdc++.h>
using namespace std;
int a[100][100];
int main(){
    int n;
    int sum;
    cin >> n;
    for (int i=0; i<n; i++){
        sum=0;
        for(int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }
    for (int i=0; i<n; i++){
        sum=0;
        for(int j=0; j<n; j++){
            sum+=a[i][j];
        }
        cout << sum << " ";
    }
    cout << "\n";
    for (int i=0; i<n; i++){
        sum=0;
        for(int j=0; j<n; j++){
            sum+=a[j][i];
        }
        cout << sum << " ";
    }
}