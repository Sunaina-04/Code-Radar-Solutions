// Your code here...
#include <stdio.h> 
int fibonacciSeries(n){
    int a,z,b;
    printf("0 1");
    for (int i =2;i<n;i++){
    z=a+b;
    b=a;
    a=z;}
    printf("%d %d",a,b);
}
int main() { 
int n; 
scanf("%d", &n); 
if (n <= 0) { 
printf("Invalid input\n"); 
return 0; 
}
fibonacciSeries(n); 
return 0;}