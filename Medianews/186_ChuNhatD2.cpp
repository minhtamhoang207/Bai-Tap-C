#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,dem=0;
    cin >> a >> b;
    int temp;
    if(a>b){
        temp = a;
    }
    else temp =b;
    for(int i=1; i<=a; i++){
        int count =0;
        for(int j = temp; j >=1; j--){
            cout << j;
            count++;
            if(count==b) break;
        }
        int temp2 = 2;
        while(count<b){
            cout << temp2;
            count++;
            temp2++;
        }
        temp--;
        cout << endl;
    }
}
