#include <bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin >> m >> n;
    int ahihi=n;

    int temp = 1;
    int count=1;
    int choet;
    for (int i=0; i<m; i++){
        int dem=0;
        temp=count;
        int ahuhu=n;
        choet=count;
        while (dem < ahihi){
            if(count > n){
                cout << choet;
                choet--;
            }
            else{
                if(temp <=n){
                    cout << temp;
                    temp++;
                }
                else{
                    cout << ahuhu-1;
                    ahuhu--;
                }
            }
            dem++;

        }

        count++;
        cout << endl;
    }
}