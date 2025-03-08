#include <stdio.h>
int main(){
    int n;
    // n=4;
    scanf("%d",&n);
    if (n%2!=0){
        printf("0");
    }
    else{
        int q=n,count =0;
        while(n){
            // printf("q %d",q);
            ++count ;
            if (n&1){n=n>>1;break;}
            n=n>>1;
        }
    printf("%d",count);
    }
    return 0;
}