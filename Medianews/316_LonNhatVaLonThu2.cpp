#include <bits/stdc++.h>
using namespace std;
const int N = 1e6;
long long a[N];
int main(){
    int n;
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    int max=0;
    int max2=0;
    for (int i=0; i<n; i++){
        if (a[i]>max){
            max=a[i];
        }
    }
    for (int i=0; i<n; i++){
        if (a[i]>max2 && a[i]!=max){
            max2=a[i];
        }
    }
    cout << max << " " << max2;
    return 0;
}
