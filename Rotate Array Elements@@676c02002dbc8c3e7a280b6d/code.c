// Your code here...
#include <stdio.h>

int main()
{
    int n,k;
    scanf("%d",&n);
    int c[n];
    for (int j=0;j<=n;j++){
        scanf("%d",c[j]);
    }
    scanf("%d",&k);
    for (int i= n-k;i>=0;i++){
        printf("%d",c[i]);
    }
return 0;
}