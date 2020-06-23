#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int left=1;
    int leftEle;
    int right=0;
    int rightEle;
    for(int i=0; i<n; i++){
        leftEle=2;
        for(int j=0; j<left; j++){
            printf("%d",leftEle);
            leftEle+=2;
        }
        rightEle=leftEle-4;
        for(int k=0; k<right; k++){
            printf("%d",rightEle);
            rightEle-=2;
        }
        right++;
        left++;
        printf("\n");
    }
}