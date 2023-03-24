#include <stdio.h>
#include <string.h>

void sort_names(char **names, int num_names, char order) {
    int i, j;
    char temp[50];
    for (i = 0; i < num_names-1; i++) {
        for (j = i+1; j < num_names; j++) {
            if ((order == 'A' && strcmp(names[i], names[j]) > 0) || 
                (order == 'D' && strcmp(names[i], names[j]) < 0)) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
}

int main() {
    char *names[] = {"Banana", "Carrot", "Radish", "Apple", "Jack"};
    int num_names = sizeof(names)/sizeof(char*);
    char order;

    printf("Order(A/D) : ");
    scanf("%c", &order);

    sort_names(names, num_names, order);

    printf("\nSorted names:\n");
    for (int i = 0; i < num_names; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}

