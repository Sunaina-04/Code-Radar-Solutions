// Your code here...
#include <stdio.h>
int main(){
    int n,bit_pos;
    // n=5;bit_pos=1;
    scanf("%d %d",&n,&bit_pos);
    n= n|(1<<bit_pos);
    printf("%d",n);
    return 0;
}