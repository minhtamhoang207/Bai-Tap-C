#include <bits/stdc++.h>
using namespace std;
int a[100][100];
void swap(int &a, int &b){
    int temp =a;
    a=b;
    b=temp;

}
int isPrime(int n){
    if (n<2)
        return 0;
    if(n==2)
        return 1;
    int dem=0;
    for (int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            dem++;
        }
    }
    if(dem==0)
        return 1;
    return 0;
}
int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        for (int j=0; j<n; j++) {
            cin >> a[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for (int j=0; j<n; j++) {
            if(i<j){
                swap(a[i][j],a[j][i]);
            }
        }
    }
    for(int i=0; i<n; i++){
        for (int j=0; j<n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}