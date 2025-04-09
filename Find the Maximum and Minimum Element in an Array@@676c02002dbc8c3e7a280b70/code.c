// Your code here...
#include <stdio.h>
#include <stdbool.h>
int main() { 
int n, k; 
scanf("%d", &n);
int arr[n]; 
for (int i = 0; i < n; i++) { 
scanf("%d", &arr[i]); 

// change to give first and last ele 
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

    if (k<=n){return arr[k-1];}
    else if (k<=n){return arr[0];}
    else{return -1;}
}

return 0; 
}}