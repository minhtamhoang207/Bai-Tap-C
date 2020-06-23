#include <bits/stdc++.h>
using namespace std;
int main(){
    char str[100];
    gets(str);
    strlwr(str);
    char *pch;
    string s[100];
    int incre=0;
    pch= strtok(str, " ,.-");
    while (pch != NULL){
        s[incre]=pch;
        incre++;
        pch = strtok(NULL, " ,.-");
    }
    int maxInt=s[0].size();
    int minInt=s[0].size();
    string maxString=s[0];
    string minString=s[0];
    for(int i=0; i<incre;i++){
        if (s[i].size() > maxInt){
            maxInt=s[i].size();
            maxString=s[i];
        }
        if (s[i].size() < minInt){
            minInt=s[i].size();
            minString=s[i];
        }
    }
    cout << maxString << " " << minString;

}