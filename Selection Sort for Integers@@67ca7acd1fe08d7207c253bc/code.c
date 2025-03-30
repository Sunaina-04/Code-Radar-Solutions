// Your code here...// Your code here...
#include <stdbool.h>
int selectionSort(int *arr,int n){
    int temp,swapped;
    for (int i=0;i<n-1;i++){
        swapped=false;
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swapped=true;
            }
        }
        if (swapped==false){
            break;
        }
    }
}
int printArray(int *arr,int n){
    for (int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
}