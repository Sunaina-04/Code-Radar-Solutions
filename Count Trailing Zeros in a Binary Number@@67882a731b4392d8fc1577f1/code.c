#include <stdio.h>
/*Counting trailing zeros */
int main(){
    int n,count=0,bit_check;
    scanf("%d",&n);
    bit_check =n&1;
    while ((bit_check==0) && n!=0){
        count ++;
        n>>=1;
    }
    printf("%d",count);
    return 0;
}