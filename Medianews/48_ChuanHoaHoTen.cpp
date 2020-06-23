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
    for(int i=0; i<incre; i++){
        test=s[i];
        test[0]-=32;
        if (i==incre-2){
            cout << test << "," << " ";
        }
        else if (i==incre-1){
            for(int j=1; j<test.size(); j++){
                test[j]-=32;
            }
            cout << test;
        }
        else{
            cout << test << " ";
        }

    }
}