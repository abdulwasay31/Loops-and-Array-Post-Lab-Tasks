// Task-6 (26K-3076)
#include <stdio.h>
int main() {
 const int CORRECTPIN = 1234;
 const int MAXATTEMPTS = 3;
 int pin, attempts = 0;
 int success = 0;

 printf("You have %d attempts.\n", MAXATTEMPTS);
 while (attempts < MAXATTEMPTS) {
 printf("Enter PIN: ");
 scanf("%d", &pin);
 if (pin == CORRECTPIN) {
 printf("Login Successful\n");
 success = 1;
 break;
 } else {
 attempts++;
 int remaining = MAXATTEMPTS - attempts;
 if (remaining > 0) {
 printf("Incorrect PIN. Remaining attempts: %d\n", remaining);
 }
 }
 }
 if (!success) {
 printf("Account Locked\n");
 }
 return 0;
}
