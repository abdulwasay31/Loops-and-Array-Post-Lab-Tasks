// Task-9 (26K-3076)
#include <stdio.h>
int main() {
 float units[5];
 float bill[5];
 float total_units = 0.0f, total_amount = 0.0f;
 float highest, lowest;
 int i;

 printf("Rate: 10 Rs/unit | Surcharge 5%% if units > 500\n");

 for (i = 0; i < 5; i++) {
 printf("Enter units for household %d: ", i + 1);
 scanf("%f", &units[i]);
 while (units[i] < 0) {
 printf("Units cannot be negative. Re-enter: ");
 scanf("%f", &units[i]);
 }
 }

 highest = lowest = units[0];

 for (i = 0; i < 5; i++) {

 bill[i] = units[i] * 10.0;

 if (units[i] > 500.0f) {
 bill[i] += bill[i] * 0.05;
 }
 total_units += units[i];
 total_amount += bill[i];
 if (units[i] > highest) highest = units[i];
 if (units[i] < lowest) lowest = units[i];
 printf("Household %d -> Units: %.1f | Bill: %.2f Rs\n",
 i + 1, units[i], bill[i]);
 }

 printf("Total Units Consumed : %.1f\n", total_units);
 printf("Highest Units : %.1f\n", highest);
 printf("Lowest Units : %.1f\n", lowest);
 printf("Total Amount Collected: %.2f Rs\n", total_amount);
 return 0;
}
