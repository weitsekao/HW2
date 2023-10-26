#include <stdio.h>

int main() {
	float sales;
	const float baseSalary = 200.0;
	const float commissionRate = 0.09;

	while (1) {
		printf("Enter sales in dollars (-1 to end): ");
		scanf_s("%f", &sales);

		if (sales == -1) {
			break;
		}

		float earnings = baseSalary + (sales * commissionRate);

		printf("Salary is: $%.2f\n", earnings);
	}

	return 0;
}