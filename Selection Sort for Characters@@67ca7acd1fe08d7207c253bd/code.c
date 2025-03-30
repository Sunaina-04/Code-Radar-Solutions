// Your code here...
int selectionSort(char *arr, int n){
    for (int i=0;i<n-1;i++){
        char min='a';
        for (char j=i+1;j<n;j++){
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
    for (int i=0;i<n;i++){printf("%c ",arr[i]);}
}