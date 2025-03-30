// Your code here...
#include <stdbool.h>
int kthSmallest(int *arr,int n,int k){
    for (int i=0;i<n-1;i++){
        bool swapped =false;
        for (int j=0; j<n-1;j++){
            if (arr[j]>arr[j+1]){
                int temp =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swapped=true;}
        }
        if (swapped ==false){break;}
    }
    if (arr[0]==k){
        return k;
    }
    else{
        return -1;
    }
}