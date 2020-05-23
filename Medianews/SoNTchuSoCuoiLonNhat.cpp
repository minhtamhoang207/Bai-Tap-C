#include <bits/stdc++.h>
using namespace std;
int isPrime(int n){
    int dem=0;
    if(n<2)
        return 0;
    if(n==2)
        return 1;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            dem++;
        }
    }
    if(dem==0)
        return 1;
    return 0;
}
int tang(int n){
    int tempp=n%10;
    while (n>0){
        n/=10;
        if(tempp < n%10){
            return 0;
        }
    }
    return 1;
}
void solve(int n){
    int dem=0;
    for (int i=2; i<n ; i++){
        if(isPrime(i) && tang(i)){
            cout << i << " ";
            dem++;
        }
    }
    cout << "\n" << dem;
}
int main(){
    int n;
    cin >> n;
    solve(n);
}