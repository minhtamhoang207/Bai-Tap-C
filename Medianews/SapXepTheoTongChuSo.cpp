#include <bits/stdc++.h>
using namespace std;
int sumne(int n){
    int sum=0;
    while(n>0){
        int temp=n%10;
        sum+=temp;
        n/=10;
    }
    return sum;
}
void solve(int a, int b){
    if(sumne(a) <= sumne(b)){
        cout << a << " " << b;
    }
    else {
        cout << b << " " << a;
    }
}
int main(){
    int a,b;
    cin >> a;
    cin >> b;
    solve(a,b);
}