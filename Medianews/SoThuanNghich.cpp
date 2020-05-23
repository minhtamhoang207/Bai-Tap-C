#include <bits/stdc++.h>
using namespace std;
#define MAX 10000
int a[MAX];
int n;
int solve(int n){
    int count2=0;
    int m=n;
    int temp=0 ;
    while (m>0){
        temp= temp*10 + m%10;
        m=m/10;
        count2++;
    }
    if (temp==n && count2>1)
        return 1;
    return 0;


}
void input(int a[], int n){
    for (int i=0; i<n;i++){
        cin >> a[i];
    }
}
int main(){
    cin >> n;
    int countT=0;
    input(a,n);
    for(int i=0;i<n;i++){
        if (solve(a[i])==1){
            countT++;
        }
    }
    cout << countT << " ";
    for(int i=0;i<n;i++){
        if (solve(a[i])==1){
            cout << a[i] << " ";
        }
    }


}
