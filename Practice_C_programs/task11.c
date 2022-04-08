#include <stdio.h>
#include <string.h>
/**
 * program that prints customer's banking data
 */

int main(void)
{
	char name[100], account_number[50];
	double averg_bal;
	double interest;
	int number_of_transactions;
	double service_charge;
	printf("Name? ");
	fgets(name, 100, stdin);
	printf("Account number? ");
	fgets(account_number, 50, stdin);
	printf("Average Balance? ");
	scanf("$%lf", &averg_bal);
	printf("Number of transactions? ");
	scanf("%d", &number_of_transactions);
	printf("Name: %s\n", name);
	printf("Account number: %s\n", account_number);
	printf("Average Balance: $%7.2f\n", averg_bal);
	printf("interest: $%7.2f * 0.06 = $%2.2f\n", averg_bal, averg_bal * 0.06);
	printf("Service charge: $%d * 0.50 = $%2.2f\n", number_of_transactions, number_of_transactions * 0.50);
}
