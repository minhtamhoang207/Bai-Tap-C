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
    int count2=0;
    int m=n;
    int temp=0 ;
    while (m>0){
        temp= temp*10 + m%10;
        m=m/10;
        count2++;
    }
    if (isPrime(temp)==1 && isPrime(n)==1 && count2>1 && temp!=n )
        return 1;
    return 0;
}
void solve(int a, int b){
    for (int i=a;i<=b;i++){
        if(soTN(i)==1){
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
        solve(b,a);
    }
}