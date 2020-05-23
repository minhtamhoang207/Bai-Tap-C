#include <bits/stdc++.h>
using namespace std;
int mu(int n){
    int dem=0;
    while (n>0){
        n/=10;
        dem++;
    }
    return dem;
}
bool solve(int n){
    int soMu=mu(n);
    int temp;
    int m=n;
    int sum=0;
    while (m>0){
        temp=m%10;
        m/=10;
        sum+= pow(temp,soMu);
    }
    if (n==sum)
        return true;
    return false;
}
void realSolve(int a, int b){
    for (int i=a; i<=b; i++){
        if (solve(i)){
            cout << i << " ";
        }
    }
}
int main(){
    int a,b;
    cin >> a >> b;
    if (a<b){
        realSolve(a,b);
    }
    else {
        realSolve(b,a);
    }


}