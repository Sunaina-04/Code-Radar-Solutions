// Your code here...
#include <stdio.h>
int main(){
   int length;
   // printf("Enter length");
   scanf("%d ",&length);
   // length =3;
   for (int i =1; i<=length;i++ ){
      printf("\n");
      for (int j=1; j<=length;j++){
         (i==1|| i== length || j==1 || j== length)?printf("*"):printf(" ");
      }
   }
   return 0;
}