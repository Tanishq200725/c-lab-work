#include <stdio.h>
struct Employee {
    int id;
    char name[50];
    char desig[50];
    char depart[50];
    float sal;
};
int main() {
    struct Employee emp;
    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);
    getchar(); 
    printf("Enter Employee Name: ");
    fgets(emp.name, sizeof(emp.name), stdin);
    printf("Enter Employee Designation: ");
    fgets(emp.desig, sizeof(emp.desig), stdin);
    printf("Enter Employee Department: ");
    fgets(emp.depart, sizeof(emp.depart), stdin);
    printf("Enter Employee Salary: ");
    scanf("%f", &emp.sal);
    printf(" Employee Details are as follows\n");
    printf("ID          : %d\n", emp.id);
    printf("Name        : %s", emp.name);
    printf("Designation : %s", emp.desig);
    printf("Department  : %s", emp.depart);
    printf("Salary      : %f\n", emp.sal);
    return 0;





}
