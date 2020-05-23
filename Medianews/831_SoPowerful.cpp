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
int isPowerful(int n){
    for(int i =1; i<= sqrt(n);i++){
        if(n%i==0 && isPrime(i) && n%(i*i)==0) return 1;
    }
    return 0;
}
void solve(int a, int b){
    for (int i=a; i<=b; i++){
        if(isPowerful(i)){
            cout << i << " ";
        }
    }
}
int main(){
    int a,b;
    cin >> a ;
    cin >> b;
    if(a<b){
        solve(a,b);
    } else{
        solve(b,a);
    }
}