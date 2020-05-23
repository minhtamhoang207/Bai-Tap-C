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
int soTN(int n){
    int m=n;
    int temp=0 ;
    while (m>0){
        temp= temp*10 + m%10;
        m=m/10;
    }
    if (temp==n )
        return 1;
    return 0;
}
int uocNT(int n){
    int demUoc=0;
    for(int i=2;i<n/2;i++){
        if(isPrime(i)==1){
            if(n%i==0){
                demUoc++;
            }
        }
    }
    if(demUoc>=3)
        return 1;
    return 0;
}
void solve(int a, int b){
    for (int i=a; i<=b; i++){
        if(uocNT(i)==1 && soTN(i)==1){
            cout << i << " ";
        }
    }
}
int main(){
    int a,b;
    cin >> a >> b;
    if(a<b){
        solve(a,b);
    }
    else {
        solve (b,a);
    }
}