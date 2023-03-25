#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, *arr, max;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    
    arr = (int*)malloc(n * sizeof(int));

    
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("The largest element is: %d\n", max);

    
    free(arr);

    return 0;
}

