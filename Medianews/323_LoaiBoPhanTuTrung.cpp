#include <bits/stdc++.h>
using namespace std;
const int X = 1e6;
int a[X];
int b[X];
int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for (int i=0; i<n-1; i++){
        bool isChecked = false;
        if(a[i] != -1){
            for (int j=i+1; j<n; j++){
                if(a[i]==a[j]){
                    isChecked=true;
                    a[j]=-1;
                }
            }
        }
    }
    for(int i=0; i<n; i++){
        if(a[i]!=-1)
        cout << a[i] <<" ";
    }
}

