// Task-8 (26K-3076)
#include <stdio.h>
int main() {
 float prices[5];
 float total = 0.0, discount = 0.0f, final_amount;
 int i;


 for (i = 0; i < 5; i++) {
 printf("Enter price of product %d: ", i + 1);
scanf("%f", &prices[i]);
 while (prices[i] < 0) {
 printf("Price cannot be negative. Re-enter: ");
 scanf("%f", &prices[i]);
 }
 }

 for (i = 0; i < 5; i++) {
 total += prices[i];
 }
 if (total > 10000.0f) {
 discount = total * 0.10f;
 }
 final_amount = total - discount;

 printf("Original Total : %.2f\n", total);
 printf("Discount (10%%) : %.2f\n", discount);
 printf("Final Amount : %.2f\n", final_amount);
 return 0;
}
