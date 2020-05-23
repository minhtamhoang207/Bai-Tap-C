#include <bits/stdc++.h>
using namespace std;
int a[100][100];
int main(){
    int n;
    cin >> n;
    int tgt=0;
    int tgd=0;
    for(int i=0; i<n; i++){
        for (int j=0; j<n; j++) {
            cin >> a[i][j];
            if(i < j){
                tgt+=a[i][j];
            }
            if(i > j){
                tgd+=a[i][j];
            }
        }
    }
    cout << tgt << " " << tgd;
}