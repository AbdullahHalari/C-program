#include <stdio.h>
#include <conio.h>
int main() {
	char id[4];
	int hr;
	double value, salary;
	printf("Input the Employees ID(Max. 10 chars): ");
	scanf("%s", &id);
	printf("\nInput the working hrs: ");
	scanf("%d", &hr);
	printf("\n Salary amount/hr: ");
	scanf("%lf", &value);
	salary = value * hr;
	printf("\nEmployee ID = %s \nSalary = U$ %.2f\n", id,salary);
	return 0;
}

