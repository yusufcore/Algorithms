// Linear Search --> Time Complexity O(n) in worst case;
#include <stdio.h>
int linear(int *a, int len, int elm);

int main(){
    int target = 0;
    int arr[] = {2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int length = sizeof(arr) / sizeof(arr[0]);
    printf("Enter an element to search: ");
    scanf("%d", &target);
    int result = linear(arr, length, target);   
    if(result == -1){
        printf("Element not found: %d\n", result);
    }
    else{
    printf("The element is present at index: %d\n", result);
    }
}
int linear(int *a, int len, int elm){
    int i;
    int result = -1;
    for(i=0; i<len; i++){
        if(a[i] == elm){    // logic
            result = i;
            break;
        } 
    }
    return result;
}
// This program returns the index of the found element and displays it. 
// if the element is not found then it returns -1.