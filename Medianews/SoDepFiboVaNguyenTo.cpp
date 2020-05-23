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
int fibo(int n){
    int f1=0, f2=1;
    int f;
    if(n==1 || n==0)
        return 1;
    else{
        while (n > f){
            f=f1+f2;
            f1=f2;
            f2=f;
            if(f == n)
                return 1;
        }
    }
    return 0;
}
int summ(int n){
    int sum=0;
    while(n>0){
        int temp=n%10;
        sum+=temp;
        n/=10;
    }
    if(fibo(sum))
        return 1;
    return 0;
}
void solve(int a, int b){
    for (int i=a; i<= b; i++){
        if(isPrime(i) && summ(i)){
            cout << i << " ";
        }
    }
}
int main(){
    int a,b;
    cin >> a >> b;
    if (a<b){
        solve (a,b);
    }
    else {
        solve (b,a);
    }
}