#include <stdio.h>

void sort(int arr[], int len){
   for (int i = 0; i < len - 1; ++i){
      for (int j = 0; j < len - i - 1; ++j){
         if (arr[j] > arr[j+1]){
            int aux = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = aux;
         }
      }
   }
   printf("The numbers in ascending order are:\n");
   for (int i = 0; i < len; ++i){
      printf("%d\n", arr[i]);
   }
}