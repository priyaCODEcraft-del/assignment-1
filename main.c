#include<stdio.h>
#include "mylib.h"
#include "arraylib.h"

int main() {
    int number;

    //Test Armstrong number
    number=370;
    if (isArmstrong(number))
          printf("%d is an Armstrong number.\n",number);
    else
         printf("%d is not an Armstrong number .\n",number);

    
         //Test Adams number
         number=12;
         if (isAdams(number))
         printf("%d is an Adams number.\n",number);
    else
         printf("%d is not an Adams number.\n",number);


    //Test Prime Palindrome
     number=131;
     if(isPrimePallindrome(number))
        printf("%d is a Prime Pallindrome.\n",number);
    else
        printf("%d is not a Prime Pallindrome .\n",number);

    // Test Array Function
    int arr[] = {34,12,5,67,23};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    

    printf("Array element :");
    displayArray(arr, size);
    ptintf("MAximum elsement inedex: %d\n",findMaxIndex(arr,size));
    printf("Minimum element index: %d\n",findMinIndex(arr,size));
    printf("Average of array element: %.2f\n",findAverage(arr,size));
        reverseArray(arr, size);

    printf("Array elements after reversal:");
    displayArray(arr,size);
    shortArray(arr, size);
    printf("Array element after sorting:");
    displayArray(arr, size);
    printf("Element after 67 found at index: %d \n",linearSearch(arr,size,67));
    return 0;
}