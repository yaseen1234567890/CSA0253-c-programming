#include <stdio.h>

struct student {
   char name[50];
   int age;
   int roll_number;
   char address[50];
   float marks;
};

int main() {
   struct student s1; 
   printf("Enter name: ");
   scanf("%s", s1.name);
   
   printf("Enter age: ");
   scanf("%d", &s1.age);
   
   printf("Enter roll number: ");
   scanf("%d", &s1.roll_number);
   
   printf("Enter address: ");
   scanf("%s", s1.address);
   
   printf("Enter marks: ");
   scanf("%f", &s1.marks);
   

   printf("\nStudent Details:\n");
   printf("Name: %s\n", s1.name);
   printf("Age: %d\n", s1.age);
   printf("Roll Number: %d\n", s1.roll_number);
   printf("Address: %s\n", s1.address);
   printf("Marks: %.2f\n", s1.marks);

   return 0;
}

