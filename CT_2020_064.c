#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nic[13];
    char firstFour[5];
    int x, y, age, year;

    printf("Enter NIC Number: ");
    scanf("%s", nic);
    printf("Enter current year: ");
    scanf("%d", &year);

    if (nic[0] == '2') {
        x = atoi(nic + 1) / 100000;
        y = x % 1000;
        if (y > 500) {
            printf("Gender is female\n");
        } else {
            printf("Gender is male\n");
        }
        strncpy(firstFour, nic, 4);
        firstFour[4] = '\0';

        int birthYear = atoi(firstFour);
        age = year - birthYear;
        printf("Current age is %d\n", age);
    } else {
        x = atoi(nic + 1) / 10000;
        y = x % 1000;
        if (y > 500) {
            printf("Gender is female\n");
        } else {
            printf("Gender is male\n");
        }
        strncpy(firstFour, nic, 2);
        firstFour[2] = '\0';

        int birthYear = atoi(firstFour)+1900;
        printf("%d",birthYear);
        age = year - birthYear;
        printf("Current age is %d\n", age);
    }



    return 0;
}
