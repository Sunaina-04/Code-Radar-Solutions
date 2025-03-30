// Your code here...
int selectionSort(char *arr, int n){
    for (int i='a';i<n-1;i++){
        int min=i;
        for (int j=i+1;j<n;j++){
            if (arr[j]<arr[min]){
                min=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
}
char printArray(char *arr,int n){
    for (int i=n;i>0;i--){printf("%c ",arr[i]);}
}