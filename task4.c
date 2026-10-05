// Task-4 (26K-3076)
#include <stdio.h>
int main(void) {
 float price, total = 0.0f, discount = 0.0f, final_amount;
 int choice;

 do {
 printf("Enter price of item ");
 scanf("%f", &price);
 if (price < 0) {
 printf("Price cannot be negative. Skipping.\n");
 } else {
 total += price;
 }
 printf("Add another item? (1 = Yes, 0 = No) ");
 scanf("%d", &choice);
 } while (choice == 1);
 if (total > 10000.0f) {
 discount = total * 0.10f;
 }
 final_amount = total - discount;

 printf("Total Price : %.2f\n", total);
 printf("Discount (10%%): %.2f\n", discount);
 printf("Final Amount : %.2f\n", final_amount);
 return 0;
}
