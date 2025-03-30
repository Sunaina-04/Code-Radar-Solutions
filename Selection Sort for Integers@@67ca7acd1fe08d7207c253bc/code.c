// Your code here...// Your code here...
int selectionSort(int *arr,int n){
    for (int i=0;i<n-1;i++){
        int min_ind=i;
        //finding least ele from i+1 ie second ele 
        for(int j=i+1;j<n;j++){
            if (arr[j]<arr[min_ind]){
                min_ind=j;}}
            //swap the least ele and keep going for the rest of the array 
        int temp= arr[i];
        arr[i]=arr[min_ind];
        arr[min_ind]=temp;}
    }
int printArray(int *arr,int n){
    for (int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
}