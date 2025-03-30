// Your code here...
bubbleSort(int *arr,int n){
    int temp;
    for (int i=n;i>0;i--){
        for(int j=0;j>i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int printArray(int *arr,int n){
    for (int i=0;i<n;i++){
        printf("%d", arr[i]);
    }
}