// Your code here...
#include <stdio.h>
int main(){
    int n,count=0;
    while (n&1==0){
        count ++;
        n>>=1;
    }
    return 0;
}