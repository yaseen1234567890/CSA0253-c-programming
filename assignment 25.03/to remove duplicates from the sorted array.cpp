#include <stdio.h>

int main() {
    int arr[100], n, i, j, k;

    
    printf("Enter size of array: ");
    scanf("%d", &n);


    printf("Enter elements of array in sorted order:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[j] == arr[i]) {
                for (k = j; k < n; k++) {
                    arr[k] = arr[k + 1];
                }
                n--;
                j--;
            }
        }
    }

    
    printf("\nArray after removing duplicates:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

