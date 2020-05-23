#include <bits/stdc++.h>
using namespace std;
bool invertible(int n){
    int m=n;
    int check6;
    int count6=0;
    int sum=0;
    int temp=0;
    while (n>0){
        check6=n%10;
        sum+=check6;
        temp=temp*10 + n%10;
        n/=10;
        if(check6 == 6){
            count6++;
        }

    }
    if(temp==m && (count6>0) && ((sum%10)==8))
        return true;
    return false;
}
void solve(int a, int b){
    for (int i=a;i<=b;i++){
        if(invertible(i)==true){
            cout << i << " " ;
        }
    }
}

int main(){
    int a, b;
    cin >> a >> b;
    if(a<b){
        solve(a,b);
    }
    else {
        solve(b,a);
    }
}