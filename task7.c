// Task-7 (26K-3076)
#include <stdio.h>
int main() {
 float marks[5];
 float total = 0.0f, average, highest, lowest;
 int i;


 for (i = 0; i < 5; i++) {
 printf("Enter marks for student %d: ", i + 1);
 scanf("%f", &marks[i]);

 while (marks[i] < 0 || marks[i] > 100) {
 printf("Invalid! Enter marks between 0 and 100 ");
 scanf("%f", &marks[i]);
 }
 }

 highest = lowest = marks[0];
 total = marks[0];

 for (i = 1; i < 5; i++) {
 total += marks[i];
 if (marks[i] > highest) highest = marks[i];
 if (marks[i] < lowest) lowest = marks[i];
 }
 average = total / 5.0f;

 printf("Total Marks : %.2f\n", total);
 printf("Average Marks: %.2f\n", average);
 printf("Highest Marks: %.2f\n", highest);
 printf("Lowest Marks : %.2f\n", lowest);
 return 0;
}
