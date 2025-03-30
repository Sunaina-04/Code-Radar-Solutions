// Your code here...
#include <stdbool.h>
int bubbleSort(char *arr,int n){
    for(int i=0;i<n-1;i++){
        bool swapped=false;
        for (int j=0;j<n-1;j++){
            if (arr[j+1]<arr[j]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swapped=true;
            }
        }
    if (swapped==false){break;}
    }
}
int printArray(char *arr,int n){
    for (int i=0;i<n;i++){
        printf("%c ",arr[i]);
    }
}