#include <stdio.h>
int main(){
    int n,count=0;
    scanf("%d",&n);
    while (n>0 && (n&1)==0){
        count++;
        n=n>>1;
    }
    printf("%d",count);}