#include <stdio.h>
#include <string.h>

struct student {
int number;
char grade;
};

int main() {
int n, i, num, totalA = 0, totalB = 0, totalC = 0, totalD = 0, totalF = 0;
char grade;
printf("Enter number of students: ");
scanf("%d", &n);
struct student students[n];
for (i = 0; i < n; i++) {
printf("Enter student %d number, grade: ", i+1);
scanf("%d %c", &num, &grade);
students[i].number = num;
students[i].grade = grade;
switch (grade) {
case 'A':
totalA++;
break;
case 'B':
totalB++;
break;
case 'C':
totalC++;
break;
case 'D':
totalD++;
break;
case 'F':
totalF++;
break;
}
}
for (i = 0; i < n; i++) {
printf("Student %d details:\n", i+1);
printf("Number: %d\n", students[i].number);
printf("Grade: %c\n", students[i].grade);
printf("Total no. A: %d, B: %d, C: %d, D: %d, F: %d\n", totalA, totalB, totalC, totalD, totalF);
}
return 0;
}
