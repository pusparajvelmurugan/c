#include <stdio.h>
int main()
{
double number;
printf("Enter a number: ");
scanf("%lf", &number);
if (number <= 1)
{
if (number == 1)
printf("You entered 0");
else
printf("You entered a negative number");
}
else
printf("You entered a positive number");
return 0;
}
