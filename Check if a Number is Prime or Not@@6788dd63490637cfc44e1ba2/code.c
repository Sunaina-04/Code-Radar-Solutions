// Your code here...
#include <stdio.h>
int main(){
    int n,i,count=0;
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        (n%i==0)?count++;
    }
    (count==2)?printf("Prime"):printf("Not Prime");
    return 0;
}