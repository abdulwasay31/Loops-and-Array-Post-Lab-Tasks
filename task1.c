// Task-1 (26K-3076)
#include <stdio.h>
int main()
{
 float balance = 50000.0;
 float amount;
 int withdrawals = 0;
 printf("Initial Balance: %.2f\n", balance);
 printf("Enter withdrawal amount (0 or negative to stop) ");
 scanf("%f", &amount);
 while (amount > 0) {
 if (amount > balance) {
 printf("Insufficient balance! Available: %.2f\n", balance);
 } else
 {
 balance -= amount;
 withdrawals++;
 printf("Withdrawal successful. Remaining balance: %.2f\n", balance);
 }
 printf("Enter next withdrawal amount (0 or negative to stop): ");
 scanf("%f", &amount);
 }
 
 printf("Remaining Balance : %.2f\n", balance);
 printf("Number of Withdrawals: %d\n", withdrawals);
 return 0;
}
