// Your code here...
#include <stdio.h>
int main(){
    int n,length=0;
    scanf("%d",&n);
    char binary[32];

    do{
        if(n%2==0){
        binary[length]='0'}
        else{
            binary[length]='1';}
        n/=2;
        length++;
    }while (n!=0);

    binary[length]='\0';
    int middle =length/2;
    char temp;
    for (int i=0;i<middle;i++){
        temp =binary[i];
        binary[i]=binary[length-i-1];
        binary[length-i-1]=temp;
    }
    printf("%s",binary);
    return 0;
}