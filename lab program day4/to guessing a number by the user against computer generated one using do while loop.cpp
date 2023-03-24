#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
int guess, number, tries = 0;
srand(time(0)); 
number = rand() % 100 + 1; 
printf("Guess the number between 1 to 100\n");
do {
scanf("%d", &guess);
tries++;
if (guess > number) {
printf("Lower number please!\n");
}
else if (guess < number) {
printf("Higher number please!\n");
}
else {
printf("Congratulations! You have guessed the number in %d attempts.\n", tries);
}
} while (guess != number);
return 0;
}



