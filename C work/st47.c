#include <stdio.h>
int main() {
double num;
printf("Enter a number: ");
scanf("%lf", &num);
if (num <= 0.0) {
if (num == 0.0)
printf("You entered 0.");
Compiled and Presented by � M.H. Shoiab.
else
printf("You entered a negative number.");
}
else
printf("You entered a positive number.");
return 0;
}
