// Task-3 (26K-3076)
#include <stdio.h>
int main()
{
 float amount, total = 0.0;
 int attempts = 0;
 const float LIMIT = 5000.0;

 printf("Recharge limit: %.2f\n", LIMIT);
 printf("Enter recharge amount (0 or negative to stop) ");
 scanf("%f", &amount);
 while (amount > 0) 
 {
 total += amount;
 attempts++;
 if (total > LIMIT)
 {
 printf("Recharge Limit Reached\n");
 break;
 }
 printf("Current total: %.2f\n", total);
 printf("Enter next recharge amount (0 or negative to stop) ");
 scanf("%f", &amount);
 }
 
 printf("Total Recharged Amount : %.2f\n", total);
 printf("Number of Attempts : %d\n", attempts);
 return 0;
}
