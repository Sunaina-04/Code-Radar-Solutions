// Your code here...
#include <stdio.h>
int main(){
    int n,bit_pos;
    // n=7;
    scanf("%d %d",&n,&bit_pos);
    n= n&(7<<1);
    printf("%d",n);
    return 0;
}