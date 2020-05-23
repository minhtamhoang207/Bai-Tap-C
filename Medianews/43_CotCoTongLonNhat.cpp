#include <bits/stdc++.h>
using namespace std;
int a[100][100];
int main(){
    int n;
    cin >> n;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }
    int hang=0;
    int sum;
    int cot;
    int max=0;
    while (hang < n){
        sum=0;
        for (int i=0; i<n; i++){
            sum+=a[i][hang];
        }
        if(sum > max){
            max=sum;
            cot=hang+1;
        }
        hang++;
    }
    cout << cot << endl;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if(j==cot-1){
                cout << a[i][j] << " ";
            }
        }
    }
}