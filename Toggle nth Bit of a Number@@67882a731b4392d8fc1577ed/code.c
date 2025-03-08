// Your code here...
#include <stdio.h>
int main(){
    int n,bit_pos;
    // n=7;
    scanf("%d %d",&n,&bit_pos);
    // int bit = n>>s;
    // printf("%d",bit);
    n= ~(1<<(bit_pos));
    printf("%d",n);
    return 0;
}