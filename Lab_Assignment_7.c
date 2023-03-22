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

//this function sorts the array using bubble sort and prints the amount of 
//swaps used during each run
void bubble_Sort(int* ptr, int n){
    int temp;
    int swaps;
    //this loop stops one before the last number in the array because
    //the function compares the current number with the next number in the array
    printf("\n");
    for (int i = 0; i < n-1; i++) {
        //(n-i)-1 is used to stop the function from rechecking numbers 
        //that are already sorted
        
        //sets swaps to 0 at the start of every run
        swaps = 0;
        for (int j = 0; j < (n-i)-1; j++) {
            //if current number is greater than next number then swap numbers
            if (*(ptr + j) > *(ptr + (j+1))) { 
                temp = *(ptr + (j+1)); 
                *(ptr + (j+1)) = *(ptr + j); 
                *(ptr + j) = temp; 
                //counts the amount of swaps used
                swaps++;
            } 
        }
        //shows the amount of swaps used for each run
        printf("Run #%i: %i\n", (i+1), swaps);
    }
    printf("\n");
}

int main(){
    
    int numArray[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int* pointer = numArray;
    int arrLen = 9;
    //displays current unsorted array
    printf("Current array: \n");
    printArray(pointer, arrLen);
    
    //sorts the array and shows amount of swaps used for each run
    bubble_Sort(pointer, arrLen);
    
    //shows the now sorted array
    printf("Sorted array: \n");
    printArray(pointer, arrLen);
    
    return 0;
}



