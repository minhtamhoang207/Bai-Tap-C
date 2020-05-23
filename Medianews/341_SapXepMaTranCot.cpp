#include <bits/stdc++.h>
using namespace std;
int a[100][100];
void swap(int &a, int &b){
    int temp= a;
    a = b;
    b = temp;
}
int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    int col=0;
    while (col < n){
        for(int i=0; i<n-1; i++){
            for (int j=0; j<n-i-1; j++){
                if(a[j][col] < a[j+1][col]){
                    swap(a[j][col], a[j+1][col]);
                }
            }
        }
        col++;
    }
    for(int i=0; i<n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

}
