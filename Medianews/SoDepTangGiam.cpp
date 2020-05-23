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
    int temp;
    while (n>0){
        temp=n%10;
        n/=10;
        if(temp <= n%10){
            return 0;
        }
    }
    return 1;
}
int giam(int n){
    int temp;
    while (n>0){
        temp=n%10;
        n/=10;
        if(n!=0 && temp >= n%10){
            return 0;
        }
    }
    return 1;
}
void solve(int n){
    int dem=0;
    for (int i=pow(10,n-1); i<pow(10,n); i++){
        if(isPrime(i)){
            if (tang(i) || giam(i))
            dem++;
        }
    }
    cout << dem;
}
int main(){
    int n;
    cin >> n;
    solve(n);
}