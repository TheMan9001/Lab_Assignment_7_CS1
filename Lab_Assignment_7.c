#include <stdio.h>

//prints the full array;
void printArray(int arr[], int size){
    int i;
    for (i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

//bubble sort algorithm
void bubble_Sort(int* ptr, int n){
    int temp;
    int swaps = 0;
    //this loop stops one before the last number in the array because
    //the function compares the current number with the next number in the array
    for (int i = 0; i < n-1; i++) {
        //(n-i)-1 is used to stop the function from rechecking numbers 
        //that are already sorted
        for (int j = 0; j < (n-i)-1; j++) {
            //if current number is greater than next number then swap numbers
            if (*(ptr + j) > *(ptr + (j+1))) { 
                temp = *(ptr + (j+1)); 
                *(ptr + (j+1)) = *(ptr + j); 
                *(ptr + j) = temp; 
                swaps++;
            } 
        } 
    }
    printf("\nTotal Swaps: %i\n\n", swaps);
}

int main(){
    int numArray[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int* pointer = numArray;
    int arrLen = 9;
    printf("Current array: \n");
    printArray(pointer, arrLen);
    
    //sorts the array and shows amount of swaps used
    bubble_Sort(pointer, arrLen);
    
    printf("Sorted array: \n");
    printArray(pointer, arrLen);
    
    return 0;
}
