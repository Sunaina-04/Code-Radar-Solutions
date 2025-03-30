// Your code here...// Your code here...
int selectionSort(int *arr,int n){
    for (int i=0;i<n-1;i++){
        int max_ind=i;
        //finding least ele
        for(int j=0;j<n;j++){
            if (arr[j]<arr[min_ind]){
                min_ind=j;}}
            //swap the least ele and keep going for the rest of the array 
        int temp= arr[i];
        arr[i]=arr[num];
        arr[min]=temp;}
    }
int printArray(int *arr,int n){
    for (int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
}