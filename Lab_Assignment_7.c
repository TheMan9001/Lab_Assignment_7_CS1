#include <stdio.h>

//swap function used in the bubbleSort algorithm
void swap(int* num1, int* num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    
}

//bubble sort algorithm

/*
this function sorts the array using bubble sort and prints the amount of 
swaps used during each run
*/
void bubble_Sort(int* ptr, int n){
    int temp;
    int swaps;
    /*
    this loop stops one before the last number (-1 part) in the array because
    the function compares the current number with the next number in the array
    */
    printf("\n");
    for (int i = 0; i < n-1; i++) {        
        //sets swaps to 0 at the start of every run
        swaps = 0;
        /*
        (n-i) is used to stop the function from rechecking numbers 
        that are already sorted while the -1 part is used for the same reason mentioned above
        */
        for (int j = 0; j < (n-i)-1; j++) {
            //if current number is greater than next number then swap numbers
            if (*(ptr + j) > *(ptr + (j+1))) { 
                //swaps numbers using swap function shown above
                swap((ptr+(j+1)), (ptr+j));
                //counts the amount of swaps used
                swaps++;
            } 
        }
        //shows the amount of swaps used for each run
        printf("Pass #%i: %i\n", (i+1), swaps);
    }
    printf("\n");
}

int main(){
    
    int numArray[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int* pointer = numArray;
    int arrLen = 9;
    
    //sorts the array and shows amount of swaps used for each run
    bubble_Sort(pointer, arrLen);
    
    return 0;
}




