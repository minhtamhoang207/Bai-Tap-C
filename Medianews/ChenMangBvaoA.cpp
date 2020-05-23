#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000
int a[MAX];
int b[MAX];
int c[MAX];
int main(){
    int arrA, arrB;
    int n;
    int index=0;
    cin >> arrA;
    cin >> arrB;
    cin >> n;
    for(int i=0;i<arrA;i++){
        cin >> a[i];
    }
    for(int i=0;i<arrB;i++){
        cin >> b[i];
    }
    for (int i=0; i<n ;i++){
        cout << a[i] << " ";
    }
    for (int i=0;i<arrB;i++){
        cout << b[i] << " ";
    }
    for (int i=n;i<arrA;i++){
        cout << a[i] << " ";
    }
}
