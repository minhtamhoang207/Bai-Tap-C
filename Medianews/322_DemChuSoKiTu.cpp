#include <bits/stdc++.h>
using namespace std;
char a[100];
int main(){
    gets(a);
    int cchar=0;
    int cnum=0;
    int celse=0;
    for (int i=0; i<strlen(a); i++){
        if((a[i]>= 'a' && a[i]<='z')|| (a[i] >= 'A' && a[i] <= 'Z' )){
            cchar++;
        }
        else if(a[i] >= '0' && a[i] <= '9'){
            cnum++;
        }
        else{
            celse++;
        }
    }
    cout << cchar << " ";
    cout << cnum << " ";
    cout << celse;
}