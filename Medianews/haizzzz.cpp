#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int temp;
    int hihi=temp;
    for (int i=0; i<n; i++){
        temp=m;
        for (int i=0;i<m;i++){
            if(hihi=temp){
                cout << temp;
                temp--;
            }
        }
        hihi--;
        cout << endl;
    }
}