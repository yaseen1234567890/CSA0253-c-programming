#include <stdio.h>

int main() 
{
   char operators,operands;
   float n1, n2, result;

   printf("Enter operator (+, -, *, /, %%) : ");
   scanf("%c", &operator);

   printf("Enter two operands: ");
   scanf("%f %f", &n1, &n2);

   switch(operator) {
      case '+':
         result = n1 + n2;
         printf("%.2f + %.2f = %.2f", n1, n2, result);
         break;

      case '-':
         result = n1 - n2;
         printf("%.2f - %.2f = %.2f", n1, n2, result);
         break;

      case '*':
         result = n1 * n2;
         printf("%.2f * %.2f = %.2f", n1, n2, result);
         break;

      case '/':
         result = n1 / n2;
         printf("%.2f / %.2f = %.2f", n1, n2, result);
         break;

      case '%':
         result = (int)n1 % (int)n2; 
         printf("%.2f %% %.2f = %.2f", n1, n2, result);
         break;

      default:
         printf("Invalid operator");
   }

   return 0;
}

