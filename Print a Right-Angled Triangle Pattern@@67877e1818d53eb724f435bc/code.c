// Your code here...
#include <stdio.h>
int right(int n){
        
    for (int j=1;j<=n;j++){
        for (int i=1;i<=j;i++){
            printf("* %d",i);}
            printf("\n");
        }
} 
int main(){
 int n;
 scanf("%d",&n);
 right(n);
}