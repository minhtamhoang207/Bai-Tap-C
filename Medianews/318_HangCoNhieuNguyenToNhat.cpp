#include <bits/stdc++.h>
using namespace std;
int a[100][100];
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
    int hang;
    int dem;
    int max=0;
    cin >> n;
    for (int i=0; i<n; i++){
        dem=0;
        for(int j=0; j<n; j++){
            cin >> a[i][j];
            if(isPrime(a[i][j])==1) {
                dem++;
            }
         }
        if(dem > max){
            max=dem;
            hang=i+1;
        }
    }
    cout << hang << endl;
    int check=hang-1;
    for(int j=0; j<n; j++){
        if(isPrime(a[check][j])==1){
            cout << a[check][j] << " ";
        }
    }
}