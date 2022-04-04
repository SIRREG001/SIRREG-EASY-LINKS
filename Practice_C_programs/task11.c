#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * program that prints customer's banking data
 */

int main(void)
{
	char name[100];
	printf("Name? ");
	gets(name);
	printf("Name: %s\n", name);
	char account_number[50];
	printf("Account number? ");
	gets(account_number);
	printf("Account number: %s\n", account_number);
	char averg_bal[50];
	printf("Average Balance? ");
	gets(averg_bal);
	printf("Average Balance: $%7.2s\n", averg_bal);
	char number_of_transactions[50];
	printf("Number of transactions? ");
	gets(number_of_transactions);
	char interest[50];
	strcpy(interest, "averg_bal * 0.06");
	printf("interest: $%s * 0.06 = $%7.2s\n", averg_bal, interest);
	char service_charge[50];
	strcpy(service_charge, "number_of_transactions * 50");
	printf("Service charge: $%s * 50 = $%7.2s\n", number_of_transactions, service_charge);
}
