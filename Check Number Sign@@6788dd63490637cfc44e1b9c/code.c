// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    (n<0)?printf("Negative"):(n>0)?printf("Positive"):printf("Zero");
    return 0;
}