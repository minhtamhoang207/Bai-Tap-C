#include <stdio.h>
#include <string.h>
#define MAX 100
char c[MAX];
int main(){
    gets(c);
    int n=strlen(c)-1;
    for (int i=0; i<=n; i++){
        if(c[i] >= 'a' && c[i] <= 'z'){
            printf("%c", c[i]-32);
        }
        else if(c[i] >= 'A' && c[i] <= 'Z'){
            printf("%c", c[i]+32);
        }

    }
}