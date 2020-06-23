#include <bits/stdc++.h>
using namespace std;
#define MAX 100000
int a[MAX];
int b[MAX];
int main(){
    int arrA, arrB;
    int n;
    cin >> arrA;
    cin >> arrB;
    cin >> n;
    for(int i=0;i<arrA;i++){
        cin >> a[i];
    }
    for(int j=0;j<arrB;j++){
        cin >> b[j];
    }
    for (int i=0 ; i<arrA; i++){
        cout << a[i];
    }
}
