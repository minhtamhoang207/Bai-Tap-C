#include <bits/stdc++.h>
using namespace std;
void Solve(int n){
    for (int i=2;i<=n;i++){
        while (n%i==0){
            cout << i << " ";
            n/=i;
        }
    }
}

int main(){
    int n;
    cin >> n;
    Solve(n);
}