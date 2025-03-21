// Your code here...
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    int k;
    scanf("%d", &k);
    for (int n=0;n==k;n++){
    for(int j = num; j<=0; j--)
        printf("%d ", *(arr + j));}
    return 0;
}