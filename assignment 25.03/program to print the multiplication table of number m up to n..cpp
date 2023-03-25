#include <stdio.h>

int main() {
   int m, n, i, j;
   printf("Enter the number: ");
   scanf("%d", &m);
   printf("Enter the range: ");
   scanf("%d", &n);

   for (i = 1; i <= n; i++) {
      printf("%d x %d = %d\n", m, i, m*i);
   }

   return 0;
}

