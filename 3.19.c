#include <stdio.h>

int main() {
	double principal = 0.00, rate = 0.0, days = 0.0;
	printf("Enter loan principal :(-1 to end)");
	while (scanf_s("%lf", &principal) == 1 && (int)principal != -1) {
		printf("Enter interest rate : ");
		scanf_s("%lf", &rate);
		printf("Enter term of loan in days : ");
		scanf_s("%lf", &days);
		printf("The interest charge is %.2lf\n", (principal*rate*days) / 365);
		printf("Enter loan principal :(-1 to end)");
	}
}