#include <stdio.h>

void main()
{
float price, qty, amount, tax, discount, gross_amount, net_amount;

    printf("Enter Price :");
    scanf("%f", &price);

    printf("Enter Qty   :");
    scanf("%f", &qty);

    amount = qty * price;
    discount = amount * 0.2;      // 20% discount
    gross_amount = amount - discount;
    tax = gross_amount * 0.12;          // 12% tax
    net_amount = gross_amount + tax;

    printf("Net amount : %f",net_amount);
}
