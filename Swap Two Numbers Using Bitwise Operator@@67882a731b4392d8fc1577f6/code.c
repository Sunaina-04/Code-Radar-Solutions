// Your code here...
#include <stdio.h>
int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    x=x^y;
    y=y^x;
    x=x^y;
    y=y^x;
    printf("%d %d",x,y);
}