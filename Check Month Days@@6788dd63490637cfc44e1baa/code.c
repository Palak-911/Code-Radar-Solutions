#include<stdio.h>

int main() {
    int month;

    // Take input for the month number
    scanf("%d", &month);

    // Display the number of days based on the month number
    switch(month) {
        case 1:  // January
        case 3:  // March
        case 5:  // May
        case 7:  // July
        case 8:  // August
        case 10: // October
        case 12: // December
            printf("31 ");
            break;
        case 4:  // April
        case 6:  // June
        case 9:  // September
        case 11: // November
            printf("30 ");
            break;
        case 2:  // February (Assumed to have 28 days)
            printf("28 ");
            break;
        default:
            printf("Invalid month");
            break;
    }

    return 0;
}