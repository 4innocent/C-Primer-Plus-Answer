#include <stdio.h>
#include <string.h>

#define SIZE 12
typedef struct {
    char* mounth;
    char* mounthAbb;
    int days;
    int mounthNum;
} Mounth;

int main() {
    Mounth mounths[SIZE] = {
        {
            "January",
            "Jan.",
            31,
            1,
        },
        {
            "February",
            "Feb.",
            27,
            2
        },
        {
            "March",
            "Mar.",
            31,
            3
        },
        {
            "April",
            "Apr.",
            30,
            4
        },
        {
            "May",
            "May.",
            31,
            5
        },
        {
            "June",
            "Jun.",
            30,
            6
        },
        {
            "July",
            "Jul.",
            31,
            7
        },
        {
            "August",
            "Aug.",
            30,
            8
        },
        {
            "September",
            "Sep.",
            30,
            9
        },
        {
            "October",
            "Oct.",
            31,
            10
        },
        {
            "November",
            "Nov.",
            30,
            11
        },
        {
            "December",
            "Dec.",
            31,
            12
        }
    };
    Mounth* mon;
    printf("input the month name:\n");
    char monthName[SIZE];
    fgets(monthName, SIZE, stdin);
    if (monthName[strlen(monthName) - 1] == '\n') {
        monthName[strlen(monthName) - 1] = '\0';
    }

    int countDays = 0;
    for (int i = 0; i < SIZE; i++) {
        countDays += mounths[i].days;
        if (strcmp(mounths[i].mounth, monthName) == 0) {
            printf("days are %d", countDays);
        }
    }

    return 0;
}
