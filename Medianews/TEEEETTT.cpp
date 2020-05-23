#include <stdio.h>
#include <string.h>
#define MAX 100
char c[MAX];
int main(){
    gets(c);
    int cLower=0;
    int cUpper=0;
    int n=strlen(c)-1;
    for (int i=0; i<=n; i++){
        if(c[i] >= 'a' && c[i] <= 'z'){
            cLower
        }
        else if(c[i] >= 'A' && c[i] <= 'Z'){
            printf("%c", c[i]+32);
        }

    }
}