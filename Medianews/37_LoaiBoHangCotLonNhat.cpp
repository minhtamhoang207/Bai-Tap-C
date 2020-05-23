#include <bits/stdc++.h>
using namespace std;
int a[100][100];
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
    int n,m;
    int cot;
    int hang;
    int dem;
    int max=0;
    int max2=0;
    int sumhang=0;
    cin >> m >> n;
    for (int i=0; i<m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    for (int i=0; i<m; i++) {
        sumhang=0;
        for (int j = 0; j < n; j++) {
            sumhang+=a[i][j];
        }
        if(sumhang>max){
            max=sumhang;
            hang=i+1;
        }
    }
    //cout << hang;
    int cott=0;
    while (cott<n){
        int sumcot=0;
        for (int hangg=0; hangg<n; hangg++){
            sumcot+=a[hangg][cott];
        }
        if(sumcot>max2){
            max2=sumcot;
            cot=cott+1;
        }
        cott++;
    }
   // cout << "\n" << cot;
   for (int i=0; i<m; i++){
       for(int j=0; j<n; j++){
           if(i==hang-1 || j==cot-1){
               continue;
           }
           else {
               cout << a[i][j] << " ";
           }
       }
       cout << endl;
   }



}