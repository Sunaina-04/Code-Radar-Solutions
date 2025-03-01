// Your code here...
#include <stdio.h>
int main(){
    int n1,n2;
    char c;
    scanf("%d %d %c",&n1,&n2,&c);
    switch (c){
        case '+':
        printf("%d",(n1+n2));
        break;
        case '-':
        printf("%d",(n1-n2));
        break;
        case '*':
        printf("%d",(n1*n2));
        break;
        case '/':
        (n2==0)?printf("error"):printf("%d",(n1/n2));
        break;
    }

}