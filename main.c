#include <stdio.h>
#include "sortArray.h"
#include "printarray.h"
#include "find.h"

int main(){
    int arr[] = {6,5,4,3,2,1};

    //printTest
    printArray(arr, 6);

    //findTest
    int search = 3;
    int index = find(arr, 6, search);
    printf("The number %d is in position %d\n", search, index);

    //sortTest
    sort(arr, 6);
}