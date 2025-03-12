// Your code here...
#include <stdio.h>
int main(){
    int n,count=0;
    scanf("%d",&n);
    if (n==0){
        printf("32\n");
    }
    for (int i=31;i>0;i--){
        if ((n>>1)&1)
            {break;}
        count++;
    }
    printf("%d",count);
    return 0;
}