#include <bits/stdc++.h>
using namespace std;
int main(){
    int m, n;
    cin >> m >> n;
    int countR=n;
    int rightELe;
    int plus=1;
    for (int i=0; i<m; i++){
        rightELe=plus;
        for(int j=0; j<countR; j++){
            cout << rightELe ;
            rightELe++;
        }
        for(int k=0; k<(n-countR); k++){
            cout << n;
        }
        plus++;
        if(countR>0){
            countR--;
        }
        cout << endl;
    }
}