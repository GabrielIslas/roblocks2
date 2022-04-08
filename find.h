int find(int arr[], int len, int search){
    
    for(int i = 0; i < len; i++){
        if(arr[i] == search){
            return i;
        }
    }

    return -1;
}