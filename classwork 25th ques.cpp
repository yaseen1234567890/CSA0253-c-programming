#include <stdio.h>

struct Employee {
    int empid;
    char ename[50];
    float basic, hra, da, it, gross, netpay;
};

int main() {
    int n, i;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n];

    
    for (i = 0; i < n; i++) {
        printf("\nEnter empid, ename, and basic salary for employee %d:\n", i+1);
        scanf("%d %s %f", &emp[i].empid, emp[i].ename, &emp[i].basic);

        
        emp[i].hra = 0.02 * emp[i].basic;
        emp[i].da = 0.01 * emp[i].basic;
        emp[i].gross = emp[i].basic + emp[i].hra + emp[i].da;
        emp[i].it = 0.05 * emp[i].basic;
        emp[i].netpay = emp[i].gross - emp[i].it;
    }

    
    printf("\nEmployee details:\n");
    printf("EmpID\tName\tBasic\tHRA\tDA\tIT\tGross\tNetpay\n");
    for (i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",
               emp[i].empid, emp[i].ename, emp[i].basic, emp[i].hra, emp[i].da,
               emp[i].it, emp[i].gross, emp[i].netpay);
    }
    return 0;
}

