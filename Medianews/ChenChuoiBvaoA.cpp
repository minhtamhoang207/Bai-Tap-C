#include <bits/stdc++.h>
using namespace std;
int main(){
    char a[100];
    char b[100];
    int n;
    gets(a);
    gets(b);
    cin >> n;
    int m=n-1;
    int arrA= strlen(a);
    int arrB= strlen(b);
    for (int i=0; i<m ;i++){
        cout << a[i] ;
    }
    for (int i=0;i<arrB;i++){
        cout << b[i] ;
    }
    for (int i=m;i<arrA;i++){
        cout << a[i] ;
    }
}
