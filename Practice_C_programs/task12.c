#include <stdio.h>
/** 
 * program that collects football data and print ticket details
 */
int main(void)
{
	double reserved_price, stands_price, grounds_price, reserved_sales, stands_sales, grounds_sales, total_money;
	int reserved_tickets, stands_tickets, grounds_tickets, total_tickets;
	printf("Reserved price and Tickets sold? ");
	scanf("%lf %d", &reserved_price, &reserved_tickets);
	reserved_sales = reserved_price * reserved_tickets;
	printf("Stands price and Tickets sold? ");
	scanf("%lf %d", &stands_price, &stands_tickets);
	stands_sales = stands_price * stands_tickets;
	printf("Grounds price and Tickets sold? ");
	scanf("%lf %d", &grounds_price, &grounds_tickets);
	grounds_sales = grounds_price * grounds_tickets;
	total_money = reserved_sales + stands_sales + grounds_sales;
	total_tickets = reserved_tickets + stands_tickets + grounds_tickets;
	printf("Reserved price and Tickets sold? $%f %d\n", reserved_price, reserved_tickets);
	printf("Stands price and Tickets sold? $%f %d\n", stands_price, stands_tickets);
	printf("Grounds price and Tickets sold? $%f %d\n", grounds_price, grounds_tickets);
	printf("Reserved sales: $%3.2f\n", reserved_sales);
	printf("Stands sales: $%3.2f\n", stands_sales);
	printf("Grounds sales: $%3.2f\n", grounds_sales);
	printf("%d tickets were sold\n", total_tickets);
	printf("Total money collected: $%3.2f\n", total_money);
}
