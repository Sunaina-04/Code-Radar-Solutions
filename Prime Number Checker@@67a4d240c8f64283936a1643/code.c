// Your code here...
int isPrime(int num){
    int count =0;
    for (int i=1;i<=num;i++){
        if (num%i==0){count++;}
    }
    (count==2)?printf("1\n"):printf("0\n");
    return 0;
}