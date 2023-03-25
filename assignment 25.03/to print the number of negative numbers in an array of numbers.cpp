#include <stdio.h>

int main() {
    int size, i, count = 0;
    

    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int array[size];
    
    
    printf("Enter the values of the array: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
    
    
    for (i = 0; i < size; i++) {
        if (array[i] < 0) {
            count++;
        }
    }
    
    printf("The number of negative numbers in the array is %d\n", count);
    
    return 0;
}

