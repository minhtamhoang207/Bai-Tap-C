//for (i = 0; i <= 2; i++) {
//    for (j = 0; j <= 2; j++) {
//    sum = 0;
//        for (k = 0; k <= 2; k++) {
//            sum = sum + a[i][k] * b[k][j];
//        }
//        c[i][j] = sum;
//    }
//}
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
int isAchilles(int n){
    for(int i = 1; i<=n;i++){
        if(n%i==0 && isPrime(i)==1){
            if(n%(i*i)!=0){
                return 0;
            }
        }
    }
    if(n > 1)return 1;
}
void solve(int a, int b){
    for (int i=a; i<=b; i++){
        if(isAchilles(i)==1){
            cout << i << " ";
        }
    }
}
int main(){
    int a,b;
    cin >> a;
    cin >> b;
    if(a<b){
        solve(a,b);
    } else{
        solve(b,a);
    }
}