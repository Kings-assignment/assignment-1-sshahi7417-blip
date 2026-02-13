// Input a number representing days and print the equivalent number of weeks and days.
// Example: 
// Input = 10
// Output = "1 week and 3 days"

#include <stdio.h>

int main() {
    int total_days, weeks, remaining_days;

    printf("Enter the total number of days: ");
    scanf("%d", &total_days);

    weeks = total_days / 7;
    remaining_days = total_days % 7;

    printf("%d days = %d week(s) and %d day(s).\n", 
           total_days, weeks, remaining_days);

    return 0;
}
