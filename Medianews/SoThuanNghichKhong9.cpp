#include <bits/stdc++.h>
using namespace std;
int soTN(int n){
    int tempn = n/10,tong=n%10;
    while(tempn > 0){
        tong = tong*10+tempn%10;
        tempn/=10;
    }
    if(tong == n) return 1;
    else return 0;
}
int khongchin(int n){
    while (n>0){
        int temp=n%10;
        if(temp==9)
            return 0;
        else{
            n/=10;
        }
    }
    return 1;
}
int main(){
    int n;
    cin >> n;
    int dem=0;
    for (int i=2; i<n; i++){
        if(soTN(i)==1 && khongchin(i)==1){
            cout << i << " ";
            dem++;
        }
    }
    cout << endl << dem;

}