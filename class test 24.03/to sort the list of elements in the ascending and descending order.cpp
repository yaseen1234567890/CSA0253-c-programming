#include <stdio.h>
#include <string.h>

void sortNames(char names[][50], int n, char order) {
    int i, j;
    char temp[50];
    for(i = 0; i < n-1; i++) {
        for(j = i+1; j < n; j++) {
            if(order == 'A') {
                if(strcmp(names[i], names[j]) > 0) {
                    strcpy(temp, names[i]);
                    strcpy(names[i], names[j]);
                    strcpy(names[j], temp);
                }
            } else if(order == 'D') {
                if(strcmp(names[i], names[j]) < 0) {
                    strcpy(temp, names[i]);
                    strcpy(names[i], names[j]);
                    strcpy(names[j], temp);
                }
            }
        }
    }
}

int main() {
    char names[5][50];
    int i, n = 5;
    char order;

    
    printf("Enter %d names:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }


    printf("Enter order of sorting (A/D): ");
    scanf(" %c", &order);


    sortNames(names, n, order);


    printf("\nSorted names:\n");
    for(i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}

