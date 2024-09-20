// linear search program in C using array.
#include<stdio.h>
  
int main()
{
    // declaration of the array and other variables
    int arr[20],size,key,i,index;
    printf("Number of elements in the list: ");
    scanf("%d",&size);
    
    printf("Enter elements of the list: ");
    // loop for the input of elements from 0 to number of elements-1
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
        
    printf("Enter the element to search ie. key element: ");
    scanf("%d",&key);
    
    // loop for the traversing the array from 0 to number of elements-1
    for(index=0;index<size;index++)
        if(arr[index]==key) // comparing each element with the key element
            break; 
     
    if(index<size) // condition to check whether previous loop partially traversed or not
        printf("Key element found at index %d",index); // printing the index if key found
    else
        printf("Key element not found"); 
  
    return 0;
}
