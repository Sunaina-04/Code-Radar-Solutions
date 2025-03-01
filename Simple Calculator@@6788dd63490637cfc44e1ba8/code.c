// Your code here...
#include <stdio.h>
int main(){
    float n1,n2;
    char c;
    scanf("%f %f %c",&n1,&n2,&c);
    switch (c){
        case '+':
        printf("%.f",(n1+n2));
        break;
        case '-':
        printf("%.f",(n1-n2));
        break;
        case '*':
        printf("%d",(n1*n2));
        break;
        case '/':
        printf("%.2f",(n1/n2));
        break;
    }

}