// Your code here...
#include <stdio.h>
int inverted(int n){
        
    for (int j=n;j>0;j--){
        for (int i=j;i>0;i--){
            printf("* ");}
            printf("\n");
        }
} 
int main(){
 int n;
 scanf("%d",&n);
 inverted(n);
}