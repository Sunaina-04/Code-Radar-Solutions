// Your code here...
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,*c,k;
    scanf("%d",&n);
    c = (int*) malloc(n * sizeof(int));
    for (int j=0;j<=n;j++){
        scanf("%d",c[j]);
    }
    scanf("%d",&k);
    for (int i= n-k;i>=0;i++){
        printf("%d",c[i]);
    }
    free(c);
return 0;
}