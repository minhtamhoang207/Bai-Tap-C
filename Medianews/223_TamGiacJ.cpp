#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int count=1;
    for(int i=0; i<n; i++){
        //int numEle=count;
        if((i+1)%2==0){
            for(int j=count; j>0; j--){
                cout << j;
            }
        }
        if((i+1)%2!=0){
            for(int j=1; j<=count; j++){
                cout << j;
            }
        }
        count++;
        cout << endl;
    }
}