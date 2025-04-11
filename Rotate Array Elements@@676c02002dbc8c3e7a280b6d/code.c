#include <stdio.h>
int main()
{
    int n,k;
    scanf("%d",&n);//input length of array 
    int c[n];
    for (int j=0;j<n;j++){//input of array 
        scanf("%d",&c[j]);
    }
    scanf("%d",&k);//input rotation number 
    //swap first ele to last in order
    for (int i=0;i<k+1;i++){
        int first=c[0];
        //swap last digits to first 
        for (int j =0;j<n;j++){
            c[j]=c[j+1];
        }
        c[n-1]=first;
    }
    for (int m=0;m<n;m++){
        printf("%d ",c[m]);
    }
return 0;
}