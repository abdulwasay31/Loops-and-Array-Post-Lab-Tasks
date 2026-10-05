// Task-5 (26K-3076)
#include <stdio.h>
int main() {
 float price, total = 0.0, discount = 0.0, final_bill;
 int choice;
 
 do {
 printf("Enter price of item: ");
 scanf("%f", &price);
 if (price < 0) {
 printf("Price cannot be negative. Skipping.\n");
 } else {
 total += price;
 }
printf("Order another item? (1 = Yes, 0 = No): ");
 scanf("%d", &choice);
 } while (choice == 1);
 if (total > 5000.0) {
 discount = total * 0.05;
 }
 final_bill = total - discount;

 printf("Total Bill : %.2f\n", total);
 printf("Discount (5%%) : %.2f\n", discount);
 printf("Final Bill : %.2f\n", final_bill);
 return 0;
}
