#include<stdio.h>
#include "mylib.h"
#include "arraylib.h"

int main() {
    int num,choice,value,ss;
do{
   printf("=====MENU=====\n");
   printf("1.Check Armstrong Number\n");
   printf("2.Check Adams Number\n");
   printf("3.Check Prime Palindrome Number\n");
   printf("4.Array Functions\n");
   printf("5.Exit\n");
   printf("Enter your choice: \n");
   scanf("%d",&choice);
   if (choice == 5){
        printf("Exiting program. Goodbye!\n");
        break;
   }
    if(choice<4){
printf("Enter a number: \n");
scanf("%d",&num);
    }
    switch (choice) {
case 1:
     if(isArmstrong(num))
         printf("%d is an Armstrong number .\n",num);
    else
         printf("%d is NOT an Armstrong number .\n",num);
break;
case 2:
    if (isAdams(num))
        printf("%d is an Adams number .\n",num);
break;
case 3:
   if (isPrimePallindrome(num))
        printf("%d is a Prime Palindrome number .\n",num);
else
       printf("%d is Not a Prime Palindrome number .\n",num);
break;
case 4:{
int size;
printf("Enter array size: ");
scanf("%d",&size);
int arr[size];
printf("Enter %d elements:\n",size);
for (int i = 0;i < size;i++) {
    scanf("%d",&arr[i]);
}
int arrChoice;
do {
printf("\n---Array Operations ---\n");
printf("1. Find Max Index\n");
printf("2. Find Min Index\n");
printf("3. Find Average\n");
printf("4. Display Array\n");
printf("5. Reverse Array\n");
printf("6. Sort Array\n");
printf("7. Linera Search\n");
printf("8. Back to Main Menu\n");
printf("Enter choice:\n");
scanf("%d",&arrChoice);
switch (arrChoice) {
case 4:
    displayArray(arr,size);
break;
Case 1:
   printf("max index: %d\n",findMaxIndex(arr,size));
break;
case 5:
    reverseArray(arr,size);
   printf("Array reversed.\n");
break;
case 2:
    printf("Min index: %d\n",findMinIndex(arr,size));
break;
case 3:
   printf("Average: %f\n",findAverage(arr,size));
break;
case 6:
  sortArray(arr,size);
  break;
case 7:
  printf("Enter the Element you want to search\n");
 scanf("%d",&value);
ss=linearSearch(arr,size,value);
if(ss!=-1){
    printf("Index:%d",ss);
}
else{
     printf("There is no such Element");
}
break;
case 8:
break;
default:
if(arrChoice!=8){
printf("Invalid choice.\n");
  }
}
}while (arrChoice !=8);
}
case 5: 
    break;
default:
printf("Invalid choice! Please select betwen 1-4 \n");
    }
}
    while(choice != 5);
return 0;
}



