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
    int cot;
    int dem;
    int min;
    cin >> n;
    for (int i=0; i<n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    for(int i=0; i<n; i++){
        min+=a[i][0];
    }
    int hang=0;
    while (hang<n){
        dem=0;
        for(int j=0; j<n; j++){
            dem+=a[j][hang];
        }
        if(dem < min){
            min=dem;
            cot=hang;
        }
        hang++;
    }
    cout << cot+1 << endl;
    for(int i=0; i<n; i++){
        cout << a[i][cot] << " ";
    }

}