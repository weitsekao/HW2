#include<stdio.h>

int main() {
	int Account = 0;
	double begin = 0.0, charge = 0.0, credit = 0.0, credit_limit = 0;

	printf("Enter account number(-1 to end):");
	while (scanf_s("%d", &Account) == 1 && Account != -1) {
		printf("Enter beginning balance:");
		scanf_s("%f", &begin);
		printf("Enter total charges:");
		scanf_s("%f", &charge);
		printf("Enter total credit:");
		scanf_s("%f", &credit);
		printf("Enter credit limit:");
		scanf_s("%f", &credit_limit);
		if ((begin + charge - credit) > credit_limit) {
			printf("Account :\t%d", Account);
			printf("Credit limit :\t%.2f", credit_limit);
			printf("Balance :\t%.2f", (begin + charge - credit));
			puts("Credit Limit Exceed.");
		}
		printf("Enter account number(-1 to end):");
	}
}