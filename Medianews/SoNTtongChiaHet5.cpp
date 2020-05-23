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
int sumne(int n){
    int sum=0;
    int temp;
    while(n>0){
        temp=n%10;
        sum+=temp;
        n/=10;
    }
    return sum;
}
void solve(int n){
    int count=0;
    for (int i=2; i<n; i++){
        if(isPrime(i) && sumne(i)%5==0){
            cout << i << " ";
            count++;
        }
    }
    cout << endl << count;
}
int main(){
    int n;
    cin >> n;
    solve(n);
}