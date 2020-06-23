#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ele;
    int pl=0;
    int nga=n-1;
    int right;
    for(int i=0; i<n; i++){
        int rightele=1;
        int countNga=0;
        ele=pl;
        right= n-nga-1;
        for (int j=0; j<nga; j++){
            cout << "~";
            countNga++;
        }
        for (int k=0; k<n-countNga; k++){
            cout << ele;
            ele--;
        }
        for (int v=0; v<right; v++){
            cout << rightele;
            rightele++;
        }

        pl++;
        cout << endl;
        nga--;
    }
}