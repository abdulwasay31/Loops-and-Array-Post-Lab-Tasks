// Task-2 (26K-3076)
#include <stdio.h>
int main() 
{
 float marks, total = 0.0;
 int count = 0;
 
 printf("Enter marks (0-100). Enter -1 to finish.\n");
 printf("Enter marks for student %d: ", count + 1);
 scanf("%f", &marks);
 while (marks != -1) {
 if (marks < 0 || marks > 100) {
 printf("Invalid marks! Please enter a value between 0 and 100.\n");
 } else
 {
 total += marks;
 count++;
 }
 printf("Enter marks for student %d: ", count + 1);
 scanf("%f", &marks);
 }

 if (count == 0) {
 printf("No valid marks were entered.\n");
 } else {
 printf("Total Marks : %.2f\n", total);
 printf("Number of Students: %d\n", count);
 printf("Average Marks : %.2f\n", total / count);
 }
 return 0;
}
