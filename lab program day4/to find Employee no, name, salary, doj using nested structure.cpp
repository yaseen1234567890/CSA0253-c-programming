#include <stdio.h>

struct date {
    int day;
    int month;
    int year;
};

struct employee {
    int emp_no;
    char name[50];
    float salary;
    struct date dob;
};

int main() {
    struct employee emp;
    
    printf("Enter employee no: ");
    scanf("%d", &emp.emp_no);
    
    printf("Enter name: ");
    scanf("%s", emp.name);
    
    printf("Enter salary: ");
    scanf("%f", &emp.salary);
    
    printf("Enter date of birth (dd mm yyyy): ");
    scanf("%d %d %d", &emp.dob.day, &emp.dob.month, &emp.dob.year);
    
    printf("\nEmployee Details:\n");
    printf("Employee no: %d\n", emp.emp_no);
    printf("Name: %s\n", emp.name);
    printf("Salary: %.2f\n", emp.salary);
    printf("Date of birth: %02d-%02d-%d\n", emp.dob.day, emp.dob.month, emp.dob.year);
    
    return 0;
}

