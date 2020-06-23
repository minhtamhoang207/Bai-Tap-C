#include <bits/stdc++.h>
using namespace std;
int main(){
    char str[100];
    char strd[100];
    gets(str);
    gets(strd);
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
        if(s[i]==strd){
            s[i]="NULLLLLL";
        }
    }
    for(int i=0; i<incre; i++){
        if(s[i]=="NULLLLLL"){
            continue;
        }
        else{
            cout << s[i] << " ";
        }
    }
}