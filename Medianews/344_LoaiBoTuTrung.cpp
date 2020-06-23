#include <bits/stdc++.h>
using namespace std;
int main(){
    char str[100];
    gets(str);
    string s[100];
    int incre=0;
    char *pch;
    pch = strtok(str, " ,.-");
    while (pch != NULL){
        s[incre]=pch;
        incre++;
        pch = strtok(NULL, "  ,.-");
    }
    for(int i=0; i<incre-1; i++){
        for(int j=i+1; j<incre; j++){
            if(s[i]==s[j]){
                s[j]= "null";
            }
        }
    }
    for(int i=0; i< incre; i++){
        if (s[i] != "null"){
            cout << s[i] << " ";
        }
    }


}