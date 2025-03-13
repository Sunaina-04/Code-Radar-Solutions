#include <stdio.h> 
int fibonacciSeries(int n){
    int a=0,z,b=1;
    printf("%d ",a);
    for (int i =2;i<=n;i++){
    z=a+b;
    printf("%d ",z);
    b=a;
    a=z;}
    
}
// int main() { 
// int n; 
// scanf("%d", &n); 
// if (n <= 0) { 
// printf("Invalid input\n"); 
// return 0; 
// }
// fibonacciSeries(n); 
// return 0;}