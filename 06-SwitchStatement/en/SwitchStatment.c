#include <stdio.h>

int main() {
    int day = 7;

    // Evaluate the day.
    switch (day) {
        // Code block for the situation where day is 1.
        case 1:
            printf("Monday");
            break;

        // Code block for the situation where day is 2.
        case 2:
            printf("Tuesday");
            break;
        
        // Code block for the situation where day is 3.
        case 3:
            printf("Wednesday");
            break;

        // Code block for the situation where day is 4.
        case 4:
            printf("Thursday");
            break;

        // Code block for the situation where day is 5.
        case 5:
            printf("Friday");
            break;

        // Code block for the situation where there is no match with the other cases.
        default:
            printf("It's the weekend!");
    }

    return 0;
}