#include <stdio.h>

int square(int num);

int main() {
    int num, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    result = square(num);
    printf("The square of %d is %d.\n", num, result);
    return 0;
}

int square(int num) {
    return num * num;
}

