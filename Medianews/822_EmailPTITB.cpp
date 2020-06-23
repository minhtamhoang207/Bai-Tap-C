#include <bits/stdc++.h>
using namespace std;
int main(){
    char str[100];
    gets(str);
    strlwr(str);
    string test;
    char *pch;
    string s[100];
    int incre=0;
    pch= strtok(str, " ,.-");
    while (pch != NULL){
        s[incre]=pch;
        incre++;
        pch = strtok(NULL, " ,.-");
    }
    for(int i=0; i<incre-1; i++){
        test=s[i];
        cout << test[0];
    }
    cout << s[incre-1] ;
    cout << "@ptit.edu.vn";

}