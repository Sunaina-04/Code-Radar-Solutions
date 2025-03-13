// Your code here...
void isPrime(int num){
    int count =0;
    for (int i=1;i<=n;i++){
        if (n%i==0){count++;}
    }
    (count==2)?printf("1"):printf("0");
}