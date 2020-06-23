#include <bits/stdc++.h>
using namespace std;
int main(){
    char str[100];
    gets(str);
    strlwr(str);
    string test;
    char name[100];
    char *pch;
    string s[100];
    int incre=0;
    pch= strtok(str, " ,.-");
    while (pch != NULL){
        s[incre]=pch;
        incre++;
        pch = strtok(NULL, " ,.-");
    }
    for(int i=1; i<incre; i++){
        test=s[i];
        test[0]-=32;
        if (i==incre-1){
            cout << test << "," << " ";
        }
        else{
            cout << test << " ";
        }
    }
    test=s[0];
    for(int j=0; j<test.size(); j++){
        test[j]-=32;
    }
    cout << test;
}