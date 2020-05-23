#include<bits/stdc++.h>
using namespace std;
int a[100][100];
int b[10000000];
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
    cin >> n;
    int tang=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
            if(isPrime(a[i][j]) && (i==j || j==n-i-1)){
                b[tang]=a[i][j];
                tang++;
            }
        }
    }
    int count=0;
    for(int i=0; i<tang-1; i++){
        for(int j=i+1; j<tang; j++){
            if(b[i]==b[j]){
                b[j] = -1;
            }
        }
    }
    for(int i=0; i<tang; i++){
        if(b[i]!=-1){
            count++;
        }
    }
    cout << count;
}