#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int binary_to_decimal(char *binary) {
    int decimal = 0;
    int len = strlen(binary);
    for (int i = 0; i < len; i++) {
        decimal = decimal * 2 + (binary[i] - '0');
    }
    return decimal;
}

char *decimal_to_binary(int decimal)
 {
    char *binary = malloc(sizeof(char) *33);
    int index = 0;
    while (decimal > 0) {
        binary[index++] = (decimal % 2) + '0';
        decimal /= 2;
    }
    binary[index] = '\0';
    int len = strlen(binary);
    for (int i = 0; i < len / 2; i++) {
        char temp = binary[i];
        binary[i] = binary[len - i - 1];
        binary[len - i - 1] = temp;
    }
    return binary;
}

int main() {
    char s1[100], s2[100];
    printf("Enter two binary strings: ");
    scanf("%s %s", s1, s2);
    
    int num1 = binary_to_decimal(s1);
    int num2 = binary_to_decimal(s2);
    int sum = num1 + num2;
    
    char *result = decimal_to_binary(sum);
    printf("Result: %s\n", result);
    
    free(result);
    return 0;
}

